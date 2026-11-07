#include "funcs.h"

void F_005306d0(CPU *c) {
  NATIVE_HOOK(0x5306d0u) REGS; LOADALL;
L_005306d0:;
  /* 005306d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005306d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005306d3 sub esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005306d9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005306de push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005306df mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005306e2 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 005306e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005306e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005306ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005306eb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005306ed je 0x53080d */ if (ZF_) goto L_0053080d;
  /* 005306f3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005306f6 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005306f9 jl 0x53080d */ if (LT_) goto L_0053080d;
  /* 005306ff cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530702 jg 0x53080d */ if (!(ZF_|LT_)) goto L_0053080d;
  /* 00530708 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0053070b sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053070e mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00530710 mov dword ptr [ebp - 0x208], esp */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(esp); }
  /* 00530716 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530717 call 0x403060 */ esp -= 4; M32(esp) = 0x53071cu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x530717u); RETCHK(0x53071cu, 0x530717u); LOADALL;
  /* 0053071c call 0x530620 */ esp -= 4; M32(esp) = 0x530721u; SAVEALL; F_00530620(c); ABI_CHECK(0x530620u, 0x53071cu); RETCHK(0x530721u, 0x53071cu); LOADALL;
  /* 00530721 mov esi, eax */ { esi = (u32)(eax); }
  /* 00530723 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530726 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530728 je 0x53080d */ if (ZF_) goto L_0053080d;
  /* 0053072e mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 00530731 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530733 lea ebx, [esi + 0x24] */ ebx = (u32)((u32)(esi + 0x24u));
  /* 00530736 jne 0x53076f */ if (!ZF_) goto L_0053076f;
  /* 00530738 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053073b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053073c push 0x65339c */ { u32 v_ = 0x65339cu; esp -= 4; M32(esp) = v_; }
  /* 00530741 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00530747 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0053074c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053074d call 0x5fe928 */ esp -= 4; M32(esp) = 0x530752u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x53074du); RETCHK(0x530752u, 0x53074du); LOADALL;
  /* 00530752 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00530755 mov edx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); edx = (u32)(M32(m_)); }
  /* 0053075b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053075e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053075f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530761 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530762 lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00530768 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530769 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053076a call 0x5fefd8 */ esp -= 4; M32(esp) = 0x53076fu; SAVEALL; F_005fefd8(c); ABI_CHECK(0x5fefd8u, 0x53076au); RETCHK(0x53076fu, 0x53076au); LOADALL;
L_0053076f:;
  /* 0053076f mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00530771 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530773 je 0x5307fb */ if (ZF_) goto L_005307fb;
  /* 00530779 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053077b je 0x530781 */ if (ZF_) goto L_00530781;
  /* 0053077d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0053077f jmp 0x530783 */ goto L_00530783;
L_00530781:;
  /* 00530781 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
L_00530783:;
  /* 00530783 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530784 call 0x5fefde */ esp -= 4; M32(esp) = 0x530789u; SAVEALL; F_005fefde(c); ABI_CHECK(0x5fefdeu, 0x530784u); RETCHK(0x530789u, 0x530784u); LOADALL;
  /* 00530789 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0053078c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0053078e mov ecx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); ecx = (u32)(M32(m_)); }
  /* 00530794 lea esi, [esi*4 + 0x796f88] */ esi = (u32)((u32)(esi * 4u + 0x796f88u));
  /* 0053079b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053079c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053079e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053079f push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
  /* 005307a1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307a2 call 0x5fefe4 */ esp -= 4; M32(esp) = 0x5307a7u; SAVEALL; F_005fefe4(c); ABI_CHECK(0x5fefe4u, 0x5307a2u); RETCHK(0x5307a7u, 0x5307a2u); LOADALL;
  /* 005307a7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005307ab je 0x5307fb */ if (ZF_) goto L_005307fb;
  /* 005307ad push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005307af push 0x5300f0 */ { u32 v_ = 0x5300f0u; esp -= 4; M32(esp) = v_; }
  /* 005307b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005307b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307b7 call 0x5fefea */ esp -= 4; M32(esp) = 0x5307bcu; SAVEALL; F_005fefea(c); ABI_CHECK(0x5fefeau, 0x5307b7u); RETCHK(0x5307bcu, 0x5307b7u); LOADALL;
  /* 005307bc mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005307bf mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005307c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307c3 call 0x5feff0 */ esp -= 4; M32(esp) = 0x5307c8u; SAVEALL; F_005feff0(c); ABI_CHECK(0x5feff0u, 0x5307c3u); RETCHK(0x5307c8u, 0x5307c3u); LOADALL;
  /* 005307c8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005307cb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005307cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307ce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005307cf call 0x5feff6 */ esp -= 4; M32(esp) = 0x5307d4u; SAVEALL; F_005feff6(c); ABI_CHECK(0x5feff6u, 0x5307cfu); RETCHK(0x5307d4u, 0x5307cfu); LOADALL;
  /* 005307d4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307d6 neg edi */ { u32 a_ = edi; u32 r_ = (0u - a_) & 0xffffffffu; edi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005307d8 sbb edi, edi */ { u32 a_ = edi, b_ = edi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edi = (u32)(r_); }
  /* 005307da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005307db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307dc call 0x5feffc */ esp -= 4; M32(esp) = 0x5307e1u; SAVEALL; F_005feffc(c); ABI_CHECK(0x5feffcu, 0x5307dcu); RETCHK(0x5307e1u, 0x5307dcu); LOADALL;
  /* 005307e1 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005307e4 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005307e7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005307e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005307eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005307ec call 0x5ff002 */ esp -= 4; M32(esp) = 0x5307f1u; SAVEALL; F_005ff002(c); ABI_CHECK(0x5ff002u, 0x5307ecu); RETCHK(0x5307f1u, 0x5307ecu); LOADALL;
  /* 005307f1 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005307f3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005307f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005307f6 call 0x5ff008 */ esp -= 4; M32(esp) = 0x5307fbu; SAVEALL; F_005ff008(c); ABI_CHECK(0x5ff008u, 0x5307f6u); RETCHK(0x5307fbu, 0x5307f6u); LOADALL;
L_005307fb:;
  /* 005307fb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005307fe mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00530801 call 0x61af31 */ esp -= 4; M32(esp) = 0x530806u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x530801u); RETCHK(0x530806u, 0x530801u); LOADALL;
  /* 00530806 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00530807 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530808 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00530809 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053080b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053080c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053080d:;
  /* 0053080d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00530810 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00530812 call 0x61af31 */ esp -= 4; M32(esp) = 0x530817u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x530812u); RETCHK(0x530817u, 0x530812u); LOADALL;
  /* 00530817 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00530818 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530819 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053081a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053081c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053081d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530940(CPU *c) {
  NATIVE_HOOK(0x530940u) REGS; LOADALL;
L_00530940:;
  /* 00530940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530943 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530946 jl 0x530967 */ if (LT_) goto L_00530967;
  /* 00530948 cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053094b jg 0x530967 */ if (!(ZF_|LT_)) goto L_00530967;
  /* 0053094d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053094f jle 0x530967 */ if ((ZF_|LT_)) goto L_00530967;
  /* 00530951 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530954 jge 0x530967 */ if (!LT_) goto L_00530967;
  /* 00530956 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00530959 mov edx, dword ptr [eax*4 + 0x796f88] */ { const u32 m_ = (u32)(eax * 4u + 0x796f88u); edx = (u32)(M32(m_)); }
  /* 00530960 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530961 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530962 call 0x5ff01a */ esp -= 4; M32(esp) = 0x530967u; SAVEALL; F_005ff01a(c); ABI_CHECK(0x5ff01au, 0x530962u); RETCHK(0x530967u, 0x530962u); LOADALL;
L_00530967:;
  /* 00530967 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530968 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530970(CPU *c) {
  NATIVE_HOOK(0x530970u) REGS; LOADALL;
L_00530970:;
  /* 00530970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530973 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530976 jl 0x530997 */ if (LT_) goto L_00530997;
  /* 00530978 cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053097b jg 0x530997 */ if (!(ZF_|LT_)) goto L_00530997;
  /* 0053097d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053097f jle 0x530997 */ if ((ZF_|LT_)) goto L_00530997;
  /* 00530981 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530984 jge 0x530997 */ if (!LT_) goto L_00530997;
  /* 00530986 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00530989 mov edx, dword ptr [eax*4 + 0x796f88] */ { const u32 m_ = (u32)(eax * 4u + 0x796f88u); edx = (u32)(M32(m_)); }
  /* 00530990 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530991 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530992 call 0x5feff6 */ esp -= 4; M32(esp) = 0x530997u; SAVEALL; F_005feff6(c); ABI_CHECK(0x5feff6u, 0x530992u); RETCHK(0x530997u, 0x530992u); LOADALL;
L_00530997:;
  /* 00530997 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530998 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005309a0(CPU *c) {
  NATIVE_HOOK(0x5309a0u) REGS; LOADALL;
L_005309a0:;
  /* 005309a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005309a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005309a3 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 005309a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005309aa je 0x530a06 */ if (ZF_) goto L_00530a06;
  /* 005309ac call 0x530a10 */ esp -= 4; M32(esp) = 0x5309b1u; SAVEALL; F_00530a10(c); ABI_CHECK(0x530a10u, 0x5309acu); RETCHK(0x5309b1u, 0x5309acu); LOADALL;
  /* 005309b1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005309b4 mov ecx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); ecx = (u32)(M32(m_)); }
  /* 005309ba push 0x7a6d9c */ { u32 v_ = 0x7a6d9cu; esp -= 4; M32(esp) = v_; }
  /* 005309bf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005309c1 push 0x2a */ { u32 v_ = 0x2au; esp -= 4; M32(esp) = v_; }
  /* 005309c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005309c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005309c5 call 0x5ff020 */ esp -= 4; M32(esp) = 0x5309cau; SAVEALL; F_005ff020(c); ABI_CHECK(0x5ff020u, 0x5309c5u); RETCHK(0x5309cau, 0x5309c5u); LOADALL;
  /* 005309ca test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005309cc je 0x5309da */ if (ZF_) goto L_005309da;
  /* 005309ce mov dword ptr [0x7a6d9c], 0 */ { const u32 m_ = (u32)(0x7a6d9cu); M32(m_) = (u32)(0x0u); }
  /* 005309d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005309d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005309da:;
  /* 005309da mov edx, dword ptr [0x7a6d9c] */ { const u32 m_ = (u32)(0x7a6d9cu); edx = (u32)(M32(m_)); }
  /* 005309e0 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 005309e5 push 0x796f88 */ { u32 v_ = 0x796f88u; esp -= 4; M32(esp) = v_; }
  /* 005309ea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005309ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005309ed push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
  /* 005309ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005309f0 call 0x5fefe4 */ esp -= 4; M32(esp) = 0x5309f5u; SAVEALL; F_005fefe4(c); ABI_CHECK(0x5fefe4u, 0x5309f0u); RETCHK(0x5309f5u, 0x5309f0u); LOADALL;
  /* 005309f5 mov eax, dword ptr [0x796f88] */ { const u32 m_ = (u32)(0x796f88u); eax = (u32)(M32(m_)); }
  /* 005309fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005309fc je 0x530a06 */ if (ZF_) goto L_00530a06;
  /* 005309fe push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00530a00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530a01 call 0x5feffc */ esp -= 4; M32(esp) = 0x530a06u; SAVEALL; F_005feffc(c); ABI_CHECK(0x5feffcu, 0x530a01u); RETCHK(0x530a06u, 0x530a01u); LOADALL;
L_00530a06:;
  /* 00530a06 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530a07 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530a10(CPU *c) {
  NATIVE_HOOK(0x530a10u) REGS; LOADALL;
L_00530a10:;
  /* 00530a10 mov eax, dword ptr [0x796f88] */ { const u32 m_ = (u32)(0x796f88u); eax = (u32)(M32(m_)); }
  /* 00530a15 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530a17 je 0x530a3a */ if (ZF_) goto L_00530a3a;
  /* 00530a19 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530a1b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530a1d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530a1f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530a20 call 0x5fefea */ esp -= 4; M32(esp) = 0x530a25u; SAVEALL; F_005fefea(c); ABI_CHECK(0x5fefeau, 0x530a20u); RETCHK(0x530a25u, 0x530a20u); LOADALL;
  /* 00530a25 mov eax, dword ptr [0x796f88] */ { const u32 m_ = (u32)(0x796f88u); eax = (u32)(M32(m_)); }
  /* 00530a2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530a2b call 0x5ff00e */ esp -= 4; M32(esp) = 0x530a30u; SAVEALL; F_005ff00e(c); ABI_CHECK(0x5ff00eu, 0x530a2bu); RETCHK(0x530a30u, 0x530a2bu); LOADALL;
  /* 00530a30 mov dword ptr [0x796f88], 0 */ { const u32 m_ = (u32)(0x796f88u); M32(m_) = (u32)(0x0u); }
L_00530a3a:;
  /* 00530a3a mov eax, dword ptr [0x7a6d9c] */ { const u32 m_ = (u32)(0x7a6d9cu); eax = (u32)(M32(m_)); }
  /* 00530a3f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530a41 je 0x530a53 */ if (ZF_) goto L_00530a53;
  /* 00530a43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530a44 call 0x5fefc0 */ esp -= 4; M32(esp) = 0x530a49u; SAVEALL; F_005fefc0(c); ABI_CHECK(0x5fefc0u, 0x530a44u); RETCHK(0x530a49u, 0x530a44u); LOADALL;
  /* 00530a49 mov dword ptr [0x7a6d9c], 0 */ { const u32 m_ = (u32)(0x7a6d9cu); M32(m_) = (u32)(0x0u); }
L_00530a53:;
  /* 00530a53 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530a60(CPU *c) {
  NATIVE_HOOK(0x530a60u) REGS; LOADALL;
L_00530a60:;
  /* 00530a60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530a61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530a63 mov eax, dword ptr [0x796f88] */ { const u32 m_ = (u32)(0x796f88u); eax = (u32)(M32(m_)); }
  /* 00530a68 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530a6a je 0x530a76 */ if (ZF_) goto L_00530a76;
  /* 00530a6c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00530a6f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530a70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530a71 call 0x5feff6 */ esp -= 4; M32(esp) = 0x530a76u; SAVEALL; F_005feff6(c); ABI_CHECK(0x5feff6u, 0x530a71u); RETCHK(0x530a76u, 0x530a71u); LOADALL;
L_00530a76:;
  /* 00530a76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530a77 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530a80(CPU *c) {
  NATIVE_HOOK(0x530a80u) REGS; LOADALL;
L_00530a80:;
  /* 00530a80 mov dword ptr [eax], 0x653350 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x653350u); }
  /* 00530a86 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00530a88 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00530a8b mov edx, 0xf */ { edx = (u32)(0xfu); }
  /* 00530a90 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00530a93 mov byte ptr [eax + 8], cl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00530a96 mov dword ptr [eax + 0x38], edx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(edx); }
  /* 00530a99 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 00530a9c mov byte ptr [eax + 0x24], cl */ { const u32 m_ = (u32)(eax + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00530a9f mov dword ptr [eax + 0x60], edx */ { const u32 m_ = (u32)(eax + 0x60u); M32(m_) = (u32)(edx); }
  /* 00530aa2 mov dword ptr [eax + 0x5c], ecx */ { const u32 m_ = (u32)(eax + 0x5cu); M32(m_) = (u32)(ecx); }
  /* 00530aa5 mov byte ptr [eax + 0x4c], cl */ { const u32 m_ = (u32)(eax + 0x4cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00530aa8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530ab0(CPU *c) {
  NATIVE_HOOK(0x530ab0u) REGS; LOADALL;
L_00530ab0:;
  /* 00530ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530ab3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530ab4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00530ab6 call 0x530ae0 */ esp -= 4; M32(esp) = 0x530abbu; SAVEALL; F_00530ae0(c); ABI_CHECK(0x530ae0u, 0x530ab6u); RETCHK(0x530abbu, 0x530ab6u); LOADALL;
  /* 00530abb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530abf je 0x530aca */ if (ZF_) goto L_00530aca;
  /* 00530ac1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530ac2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530ac7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530ac2u); RETCHK(0x530ac7u, 0x530ac2u); LOADALL;
  /* 00530ac7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530aca:;
  /* 00530aca mov eax, esi */ { eax = (u32)(esi); }
  /* 00530acc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530acd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530ace ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00530ae0(CPU *c) {
  NATIVE_HOOK(0x530ae0u) REGS; LOADALL;
L_00530ae0:;
  /* 00530ae0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530ae1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530ae2 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00530ae4 mov dword ptr [esi], 0x653350 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653350u); }
  /* 00530aea cmp dword ptr [esi + 0x60], 0x10 */ { const u32 m_ = (u32)(esi + 0x60u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530aee jb 0x530afc */ if (CF_) goto L_00530afc;
  /* 00530af0 mov eax, dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (u32)(M32(m_)); }
  /* 00530af3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530af4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530af9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530af4u); RETCHK(0x530af9u, 0x530af4u); LOADALL;
  /* 00530af9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530afc:;
  /* 00530afc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00530afe mov dword ptr [esi + 0x60], 0xf */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0xfu); }
  /* 00530b05 mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 00530b08 mov byte ptr [esi + 0x4c], bl */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00530b0b cmp dword ptr [esi + 0x38], 0x10 */ { const u32 m_ = (u32)(esi + 0x38u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530b0f jb 0x530b1d */ if (CF_) goto L_00530b1d;
  /* 00530b11 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00530b14 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530b15 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530b1au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530b15u); RETCHK(0x530b1au, 0x530b15u); LOADALL;
  /* 00530b1a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530b1d:;
  /* 00530b1d mov dword ptr [esi + 0x38], 0xf */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(0xfu); }
  /* 00530b24 mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 00530b27 mov byte ptr [esi + 0x24], bl */ { const u32 m_ = (u32)(esi + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00530b2a cmp dword ptr [esi + 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530b2e jb 0x530b3c */ if (CF_) goto L_00530b3c;
  /* 00530b30 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00530b33 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530b34 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530b39u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530b34u); RETCHK(0x530b39u, 0x530b34u); LOADALL;
  /* 00530b39 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530b3c:;
  /* 00530b3c mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 00530b3f mov dword ptr [esi + 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0xfu); }
  /* 00530b46 mov byte ptr [esi + 8], bl */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00530b49 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530b4a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00530b4b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530b50(CPU *c) {
  NATIVE_HOOK(0x530b50u) REGS; LOADALL;
L_00530b50:;
  /* 00530b50 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00530b52 mov dword ptr [eax], 0x653348 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x653348u); }
  /* 00530b58 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00530b5f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530b60(CPU *c) {
  NATIVE_HOOK(0x530b60u) REGS; LOADALL;
L_00530b60:;
  /* 00530b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530b63 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530b64 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00530b66 call 0x530b90 */ esp -= 4; M32(esp) = 0x530b6bu; SAVEALL; F_00530b90(c); ABI_CHECK(0x530b90u, 0x530b66u); RETCHK(0x530b6bu, 0x530b66u); LOADALL;
  /* 00530b6b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530b6f je 0x530b7a */ if (ZF_) goto L_00530b7a;
  /* 00530b71 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530b72 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530b77u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530b72u); RETCHK(0x530b77u, 0x530b72u); LOADALL;
  /* 00530b77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530b7a:;
  /* 00530b7a mov eax, esi */ { eax = (u32)(esi); }
  /* 00530b7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530b7d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530b7e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00530b90(CPU *c) {
  NATIVE_HOOK(0x530b90u) REGS; LOADALL;
L_00530b90:;
  /* 00530b90 mov dword ptr [ecx], 0x653348 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x653348u); }
  /* 00530b96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530ba0(CPU *c) {
  NATIVE_HOOK(0x530ba0u) REGS; LOADALL;
L_00530ba0:;
  /* 00530ba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530ba1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530ba3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00530ba9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00530bab push 0x61c687 */ { u32 v_ = 0x61c687u; esp -= 4; M32(esp) = v_; }
  /* 00530bb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530bb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00530bb8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530bb9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00530bbc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00530bbd xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00530bbf mov dword ptr [esi], 0x65334c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65334cu); }
  /* 00530bc5 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 00530bc8 mov dword ptr [esi + 0x10], edi */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(edi); }
  /* 00530bcb mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 00530bce mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00530bd1 mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 00530bd4 mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 00530bd7 mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
  /* 00530bda lea eax, [esi + 0x54] */ eax = (u32)((u32)(esi + 0x54u));
  /* 00530bdd call 0x530a80 */ esp -= 4; M32(esp) = 0x530be2u; SAVEALL; F_00530a80(c); ABI_CHECK(0x530a80u, 0x530bddu); RETCHK(0x530be2u, 0x530bddu); LOADALL;
  /* 00530be2 push 0x530b90 */ { u32 v_ = 0x530b90u; esp -= 4; M32(esp) = v_; }
  /* 00530be7 push 0x530b50 */ { u32 v_ = 0x530b50u; esp -= 4; M32(esp) = v_; }
  /* 00530bec push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00530bee push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 00530bf0 lea eax, [esi + 0xe8] */ eax = (u32)((u32)(esi + 0xe8u));
  /* 00530bf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530bf7 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00530bfb call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x530c00u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x530bfbu); RETCHK(0x530c00u, 0x530bfbu); LOADALL;
  /* 00530c00 mov dword ptr [esi + 0x3b4], edi */ { const u32 m_ = (u32)(esi + 0x3b4u); M32(m_) = (u32)(edi); }
  /* 00530c06 mov dword ptr [esi + 0x3b8], edi */ { const u32 m_ = (u32)(esi + 0x3b8u); M32(m_) = (u32)(edi); }
  /* 00530c0c mov dword ptr [esi + 0x3bc], edi */ { const u32 m_ = (u32)(esi + 0x3bcu); M32(m_) = (u32)(edi); }
  /* 00530c12 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00530c15 mov dword ptr [esi + 0x3c4], edi */ { const u32 m_ = (u32)(esi + 0x3c4u); M32(m_) = (u32)(edi); }
  /* 00530c1b mov dword ptr [esi + 0x3c8], edi */ { const u32 m_ = (u32)(esi + 0x3c8u); M32(m_) = (u32)(edi); }
  /* 00530c21 mov dword ptr [esi + 0x3cc], edi */ { const u32 m_ = (u32)(esi + 0x3ccu); M32(m_) = (u32)(edi); }
  /* 00530c27 mov dword ptr [esi + 0x28], edi */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edi); }
  /* 00530c2a mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00530c2d mov dword ptr [esi + 0x3d0], 1 */ { const u32 m_ = (u32)(esi + 0x3d0u); M32(m_) = (u32)(0x1u); }
  /* 00530c37 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00530c38 mov dword ptr [0x796fc8], esi */ { const u32 m_ = (u32)(0x796fc8u); M32(m_) = (u32)(esi); }
  /* 00530c3e mov eax, esi */ { eax = (u32)(esi); }
  /* 00530c40 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00530c47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530c48 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00530c4a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530c4b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00530c50(CPU *c) {
  NATIVE_HOOK(0x530c50u) REGS; LOADALL;
L_00530c50:;
  /* 00530c50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530c51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530c53 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530c54 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00530c56 call 0x530c80 */ esp -= 4; M32(esp) = 0x530c5bu; SAVEALL; F_00530c80(c); ABI_CHECK(0x530c80u, 0x530c56u); RETCHK(0x530c5bu, 0x530c56u); LOADALL;
  /* 00530c5b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530c5f je 0x530c6a */ if (ZF_) goto L_00530c6a;
  /* 00530c61 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530c62 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530c67u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530c62u); RETCHK(0x530c67u, 0x530c62u); LOADALL;
  /* 00530c67 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530c6a:;
  /* 00530c6a mov eax, esi */ { eax = (u32)(esi); }
  /* 00530c6c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530c6d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530c6e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00530c80(CPU *c) {
  NATIVE_HOOK(0x530c80u) REGS; LOADALL;
L_00530c80:;
  /* 00530c80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530c81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530c83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00530c85 push 0x61da45 */ { u32 v_ = 0x61da45u; esp -= 4; M32(esp) = v_; }
  /* 00530c8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00530c90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530c91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00530c98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530c99 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530c9a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530c9b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00530c9d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00530c9e mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00530ca1 mov dword ptr [esi], 0x65334c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65334cu); }
  /* 00530ca7 mov eax, esi */ { eax = (u32)(esi); }
  /* 00530ca9 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 00530cb0 call 0x530e10 */ esp -= 4; M32(esp) = 0x530cb5u; SAVEALL; F_00530e10(c); ABI_CHECK(0x530e10u, 0x530cb0u); RETCHK(0x530cb5u, 0x530cb0u); LOADALL;
  /* 00530cb5 mov eax, dword ptr [esi + 0x3c4] */ { const u32 m_ = (u32)(esi + 0x3c4u); eax = (u32)(M32(m_)); }
  /* 00530cbb xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00530cbd cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530cbf mov dword ptr [0x796fc8], ebx */ { const u32 m_ = (u32)(0x796fc8u); M32(m_) = (u32)(ebx); }
  /* 00530cc5 je 0x530cd0 */ if (ZF_) goto L_00530cd0;
  /* 00530cc7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530cc8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530ccdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530cc8u); RETCHK(0x530ccdu, 0x530cc8u); LOADALL;
  /* 00530ccd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530cd0:;
  /* 00530cd0 mov dword ptr [esi + 0x3c4], ebx */ { const u32 m_ = (u32)(esi + 0x3c4u); M32(m_) = (u32)(ebx); }
  /* 00530cd6 mov dword ptr [esi + 0x3c8], ebx */ { const u32 m_ = (u32)(esi + 0x3c8u); M32(m_) = (u32)(ebx); }
  /* 00530cdc mov dword ptr [esi + 0x3cc], ebx */ { const u32 m_ = (u32)(esi + 0x3ccu); M32(m_) = (u32)(ebx); }
  /* 00530ce2 mov eax, dword ptr [esi + 0x3b4] */ { const u32 m_ = (u32)(esi + 0x3b4u); eax = (u32)(M32(m_)); }
  /* 00530ce8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530cea je 0x530cf5 */ if (ZF_) goto L_00530cf5;
  /* 00530cec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530ced call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530cf2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530cedu); RETCHK(0x530cf2u, 0x530cedu); LOADALL;
  /* 00530cf2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530cf5:;
  /* 00530cf5 push 0x530b90 */ { u32 v_ = 0x530b90u; esp -= 4; M32(esp) = v_; }
  /* 00530cfa push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00530cfc push 0x2c */ { u32 v_ = 0x2cu; esp -= 4; M32(esp) = v_; }
  /* 00530cfe lea eax, [esi + 0xe8] */ eax = (u32)((u32)(esi + 0xe8u));
  /* 00530d04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530d05 mov dword ptr [esi + 0x3b4], ebx */ { const u32 m_ = (u32)(esi + 0x3b4u); M32(m_) = (u32)(ebx); }
  /* 00530d0b mov dword ptr [esi + 0x3b8], ebx */ { const u32 m_ = (u32)(esi + 0x3b8u); M32(m_) = (u32)(ebx); }
  /* 00530d11 mov dword ptr [esi + 0x3bc], ebx */ { const u32 m_ = (u32)(esi + 0x3bcu); M32(m_) = (u32)(ebx); }
  /* 00530d17 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00530d1b call 0x5fe890 */ esp -= 4; M32(esp) = 0x530d20u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x530d1bu); RETCHK(0x530d20u, 0x530d1bu); LOADALL;
  /* 00530d20 lea ecx, [esi + 0x54] */ ecx = (u32)((u32)(esi + 0x54u));
  /* 00530d23 call 0x530ae0 */ esp -= 4; M32(esp) = 0x530d28u; SAVEALL; F_00530ae0(c); ABI_CHECK(0x530ae0u, 0x530d23u); RETCHK(0x530d28u, 0x530d23u); LOADALL;
  /* 00530d28 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00530d2b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530d2d je 0x530d47 */ if (ZF_) goto L_00530d47;
  /* 00530d2f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00530d32 mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 00530d35 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530d36 call 0x403f60 */ esp -= 4; M32(esp) = 0x530d3bu; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x530d36u); RETCHK(0x530d3bu, 0x530d36u); LOADALL;
  /* 00530d3b mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00530d3e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530d3f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530d44u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530d3fu); RETCHK(0x530d44u, 0x530d3fu); LOADALL;
  /* 00530d44 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530d47:;
  /* 00530d47 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00530d4a mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 00530d4d mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 00530d50 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00530d53 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530d55 je 0x530d6f */ if (ZF_) goto L_00530d6f;
  /* 00530d57 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00530d5a mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 00530d5d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530d5e call 0x403f60 */ esp -= 4; M32(esp) = 0x530d63u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x530d5eu); RETCHK(0x530d63u, 0x530d5eu); LOADALL;
  /* 00530d63 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00530d66 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530d67 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x530d6cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x530d67u); RETCHK(0x530d6cu, 0x530d67u); LOADALL;
  /* 00530d6c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00530d6f:;
  /* 00530d6f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00530d72 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00530d75 mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 00530d78 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00530d7b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00530d7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530d7d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00530d7e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00530d85 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00530d87 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530d88 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530d90(CPU *c) {
  NATIVE_HOOK(0x530d90u) REGS; LOADALL;
L_00530d90:;
  /* 00530d90 mov edx, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); edx = (u32)(M32(m_)); }
  /* 00530d96 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530d97 mov esi, eax */ { esi = (u32)(eax); }
  /* 00530d99 mov al, byte ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00530d9c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530d9e jne 0x530dac */ if (!ZF_) goto L_00530dac;
  /* 00530da0 mov al, byte ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00530da3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530da5 jne 0x530dac */ if (!ZF_) goto L_00530dac;
  /* 00530da7 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00530daa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530dab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00530dac:;
  /* 00530dac fild dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); FPUSH((double)(s32)M32(m_)); }
  /* 00530daf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530db0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00530db2 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00530db8 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00530dbb call 0x530e40 */ esp -= 4; M32(esp) = 0x530dc0u; SAVEALL; F_00530e40(c); ABI_CHECK(0x530e40u, 0x530dbbu); RETCHK(0x530dc0u, 0x530dbbu); LOADALL;
  /* 00530dc0 fild dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); FPUSH((double)(s32)M32(m_)); }
  /* 00530dc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530dc4 fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00530dca fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00530dcd call 0x530e50 */ esp -= 4; M32(esp) = 0x530dd2u; SAVEALL; F_00530e50(c); ABI_CHECK(0x530e50u, 0x530dcdu); RETCHK(0x530dd2u, 0x530dcdu); LOADALL;
  /* 00530dd2 mov al, byte ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00530dd5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530dd7 jne 0x530de0 */ if (!ZF_) goto L_00530de0;
  /* 00530dd9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530ddb call 0x530e50 */ esp -= 4; M32(esp) = 0x530de0u; SAVEALL; F_00530e50(c); ABI_CHECK(0x530e50u, 0x530ddbu); RETCHK(0x530de0u, 0x530ddbu); LOADALL;
L_00530de0:;
  /* 00530de0 mov al, byte ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00530de3 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530de5 jne 0x530df0 */ if (!ZF_) goto L_00530df0;
  /* 00530de7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530de9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00530deb call 0x530e40 */ esp -= 4; M32(esp) = 0x530df0u; SAVEALL; F_00530e40(c); ABI_CHECK(0x530e40u, 0x530debu); RETCHK(0x530df0u, 0x530debu); LOADALL;
L_00530df0:;
  /* 00530df0 call 0x531120 */ esp -= 4; M32(esp) = 0x530df5u; SAVEALL; F_00531120(c); ABI_CHECK(0x531120u, 0x530df0u); RETCHK(0x530df5u, 0x530df0u); LOADALL;
  /* 00530df5 call 0x530140 */ esp -= 4; M32(esp) = 0x530dfau; SAVEALL; F_00530140(c); ABI_CHECK(0x530140u, 0x530df5u); RETCHK(0x530dfau, 0x530df5u); LOADALL;
  /* 00530dfa mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00530dff mov byte ptr [0x796e50], 0 */ { const u32 m_ = (u32)(0x796e50u); M8(m_) = (u8)(0x0u); }
  /* 00530e06 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 00530e09 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530e0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530e10(CPU *c) {
  NATIVE_HOOK(0x530e10u) REGS; LOADALL;
L_00530e10:;
  /* 00530e10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530e11 mov esi, eax */ { esi = (u32)(eax); }
  /* 00530e13 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 00530e16 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530e18 je 0x530e30 */ if (ZF_) goto L_00530e30;
  /* 00530e1a call 0x530f20 */ esp -= 4; M32(esp) = 0x530e1fu; SAVEALL; F_00530f20(c); ABI_CHECK(0x530f20u, 0x530e1au); RETCHK(0x530e1fu, 0x530e1au); LOADALL;
  /* 00530e1f call 0x531210 */ esp -= 4; M32(esp) = 0x530e24u; SAVEALL; F_00531210(c); ABI_CHECK(0x531210u, 0x530e1fu); RETCHK(0x530e24u, 0x530e1fu); LOADALL;
  /* 00530e24 call 0x530210 */ esp -= 4; M32(esp) = 0x530e29u; SAVEALL; F_00530210(c); ABI_CHECK(0x530210u, 0x530e24u); RETCHK(0x530e29u, 0x530e24u); LOADALL;
  /* 00530e29 mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
L_00530e30:;
  /* 00530e30 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530e31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530e40(CPU *c) {
  NATIVE_HOOK(0x530e40u) REGS; LOADALL;
L_00530e40:;
  /* 00530e40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530e41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530e43 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00530e46 mov dword ptr [ecx + 0x3ac], eax */ { const u32 m_ = (u32)(ecx + 0x3acu); M32(m_) = (u32)(eax); }
  /* 00530e4c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530e4d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00530e50(CPU *c) {
  NATIVE_HOOK(0x530e50u) REGS; LOADALL;
L_00530e50:;
  /* 00530e50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530e51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530e53 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00530e56 mov dword ptr [ecx + 0x3a8], eax */ { const u32 m_ = (u32)(ecx + 0x3a8u); M32(m_) = (u32)(eax); }
  /* 00530e5c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530e5d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00530e60(CPU *c) {
  NATIVE_HOOK(0x530e60u) REGS; LOADALL;
L_00530e60:;
  /* 00530e60 call 0x5302d0 */ esp -= 4; M32(esp) = 0x530e65u; SAVEALL; F_005302d0(c); ABI_CHECK(0x5302d0u, 0x530e60u); RETCHK(0x530e65u, 0x530e60u); LOADALL;
  /* 00530e65 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00530e70(CPU *c) {
  NATIVE_HOOK(0x530e70u) REGS; LOADALL;
L_00530e70:;
  /* 00530e70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530e71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530e73 sub esp, 0x204 */ { u32 a_ = esp, b_ = 0x204u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530e79 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00530e7e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530e7f push 0x65338c */ { u32 v_ = 0x65338cu; esp -= 4; M32(esp) = v_; }
  /* 00530e84 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00530e87 lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00530e8d push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00530e92 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530e93 call 0x5fe928 */ esp -= 4; M32(esp) = 0x530e98u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x530e93u); RETCHK(0x530e98u, 0x530e93u); LOADALL;
  /* 00530e98 lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00530e9e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530e9f call 0x5309a0 */ esp -= 4; M32(esp) = 0x530ea4u; SAVEALL; F_005309a0(c); ABI_CHECK(0x5309a0u, 0x530e9fu); RETCHK(0x530ea4u, 0x530e9fu); LOADALL;
  /* 00530ea4 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00530ea7 mov eax, dword ptr [edx + 0x3a8] */ { const u32 m_ = (u32)(edx + 0x3a8u); eax = (u32)(M32(m_)); }
  /* 00530ead push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530eae call 0x530a60 */ esp -= 4; M32(esp) = 0x530eb3u; SAVEALL; F_00530a60(c); ABI_CHECK(0x530a60u, 0x530eaeu); RETCHK(0x530eb3u, 0x530eaeu); LOADALL;
  /* 00530eb3 mov edx, 0x796e50 */ { edx = (u32)(0x796e50u); }
  /* 00530eb8 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530ebb mov eax, esi */ { eax = (u32)(esi); }
  /* 00530ebd sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00530ebf nop */ ;
L_00530ec0:;
  /* 00530ec0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00530ec2 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00530ec5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00530ec6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00530ec8 jne 0x530ec0 */ if (!ZF_) goto L_00530ec0;
  /* 00530eca mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00530ecd mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00530ed2 call 0x61af31 */ esp -= 4; M32(esp) = 0x530ed7u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x530ed2u); RETCHK(0x530ed7u, 0x530ed2u); LOADALL;
  /* 00530ed7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00530ed9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530eda ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00530ee0(CPU *c) {
  NATIVE_HOOK(0x530ee0u) REGS; LOADALL;
L_00530ee0:;
  /* 00530ee0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530ee1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530ee2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530ee3 mov esi, 0x796e50 */ { esi = (u32)(0x796e50u); }
  /* 00530ee8 call 0x530e70 */ esp -= 4; M32(esp) = 0x530eedu; SAVEALL; F_00530e70(c); ABI_CHECK(0x530e70u, 0x530ee8u); RETCHK(0x530eedu, 0x530ee8u); LOADALL;
  /* 00530eed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00530eee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00530ef0(CPU *c) {
  NATIVE_HOOK(0x530ef0u) REGS; LOADALL;
L_00530ef0:;
  /* 00530ef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530ef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530ef3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530ef4 call 0x5309a0 */ esp -= 4; M32(esp) = 0x530ef9u; SAVEALL; F_005309a0(c); ABI_CHECK(0x5309a0u, 0x530ef4u); RETCHK(0x530ef9u, 0x530ef4u); LOADALL;
  /* 00530ef9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00530efc mov edx, dword ptr [ecx + 0x3a8] */ { const u32 m_ = (u32)(ecx + 0x3a8u); edx = (u32)(M32(m_)); }
  /* 00530f02 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00530f03 call 0x530a60 */ esp -= 4; M32(esp) = 0x530f08u; SAVEALL; F_00530a60(c); ABI_CHECK(0x530a60u, 0x530f03u); RETCHK(0x530f08u, 0x530f03u); LOADALL;
  /* 00530f08 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530f0b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00530f0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00530f0e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00530f20(CPU *c) {
  NATIVE_HOOK(0x530f20u) REGS; LOADALL;
L_00530f20:;
  /* 00530f20 jmp 0x530a10 */ SAVEALL; F_00530a10(c); return;
}

void F_00530f30(CPU *c) {
  NATIVE_HOOK(0x530f30u) REGS; LOADALL;
L_00530f30:;
  /* 00530f30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00530f31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00530f33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00530f35 push 0x61d9e0 */ { u32 v_ = 0x61d9e0u; esp -= 4; M32(esp) = v_; }
  /* 00530f3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00530f40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530f41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00530f48 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00530f4b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00530f50 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00530f53 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00530f56 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530f57 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00530f59 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00530f5b je 0x5310e5 */ if (ZF_) goto L_005310e5;
  /* 00530f61 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00530f62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00530f63 je 0x5310d8 */ if (ZF_) goto L_005310d8;
  /* 00530f69 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00530f6a jne 0x5310c0 */ if (!ZF_) goto L_005310c0;
  /* 00530f70 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00530f71 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00530f78 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00530f7b mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00530f7e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00530f81 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00530f88 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00530f8b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00530f8d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00530f90:;
  /* 00530f90 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00530f93 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530f95 je 0x531034 */ if (ZF_) goto L_00531034;
  /* 00530f9b mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00530f9e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00530fa0 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00530fa5 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00530fa7 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00530fa9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00530fac sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00530faf mov eax, edx */ { eax = (u32)(edx); }
  /* 00530fb1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00530fb4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00530fb6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530fb8 jae 0x531034 */ if (!CF_) goto L_00531034;
  /* 00530fba mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00530fbd add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00530fbf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530fc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530fc1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00530fc4 lea ebx, [ebp - 0x2c] */ ebx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00530fc7 call 0x40d160 */ esp -= 4; M32(esp) = 0x530fccu; SAVEALL; F_0040d160(c); ABI_CHECK(0x40d160u, 0x530fc7u); RETCHK(0x530fccu, 0x530fc7u); LOADALL;
  /* 00530fcc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00530fce xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00530fd0 push 0x652f24 */ { u32 v_ = 0x652f24u; esp -= 4; M32(esp) = v_; }
  /* 00530fd5 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00530fd8 mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 00530fdf mov dword ptr [ebp - 0x50], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ebx); }
  /* 00530fe2 mov byte ptr [ebp - 0x60], bl */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00530fe5 call 0x404420 */ esp -= 4; M32(esp) = 0x530feau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x530fe5u); RETCHK(0x530feau, 0x530fe5u); LOADALL;
  /* 00530fea push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00530feb lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00530fee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530fef or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00530ff2 lea ebx, [ebp - 0x2c] */ ebx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00530ff5 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00530ff9 call 0x40d160 */ esp -= 4; M32(esp) = 0x530ffeu; SAVEALL; F_0040d160(c); ABI_CHECK(0x40d160u, 0x530ff9u); RETCHK(0x530ffeu, 0x530ff9u); LOADALL;
  /* 00530ffe mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00531002 cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531006 jb 0x531014 */ if (CF_) goto L_00531014;
  /* 00531008 mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 0053100b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053100c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x531011u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53100cu); RETCHK(0x531011u, 0x53100cu); LOADALL;
  /* 00531011 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00531014:;
  /* 00531014 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00531017 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531019 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0053101a add edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0053101d mov dword ptr [ebp - 0x4c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0xfu); }
  /* 00531024 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 00531027 mov byte ptr [ebp - 0x60], al */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0053102a mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0053102d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053102f jmp 0x530f90 */ goto L_00530f90;
L_00531034:;
  /* 00531034 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00531037 mov eax, edx */ { eax = (u32)(edx); }
  /* 00531039 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 00531040 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 00531043 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00531046 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 00531049 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00531050:;
  /* 00531050 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00531052 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00531053 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00531055 jne 0x531050 */ if (!ZF_) goto L_00531050;
  /* 00531057 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531059 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053105a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053105b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0053105e call 0x404420 */ esp -= 4; M32(esp) = 0x531063u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53105eu); RETCHK(0x531063u, 0x53105eu); LOADALL;
  /* 00531063 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00531064 lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00531067 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00531068 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053106b lea ebx, [ebp - 0x2c] */ ebx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0053106e mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00531072 call 0x40d160 */ esp -= 4; M32(esp) = 0x531077u; SAVEALL; F_0040d160(c); ABI_CHECK(0x40d160u, 0x531072u); RETCHK(0x531077u, 0x531072u); LOADALL;
  /* 00531077 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0053107b mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0053107e mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 00531083 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531085 jb 0x531093 */ if (CF_) goto L_00531093;
  /* 00531087 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0053108a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053108b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x531090u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53108bu); RETCHK(0x531090u, 0x53108bu); LOADALL;
  /* 00531090 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00531093:;
  /* 00531093 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531095 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00531098 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0053109b mov byte ptr [ebp - 0x44], al */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0053109e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053109f lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 005310a2 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 005310a9 call 0x4030f0 */ esp -= 4; M32(esp) = 0x5310aeu; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x5310a9u); RETCHK(0x5310aeu, 0x5310a9u); LOADALL;
  /* 005310ae cmp dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005310b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005310b2 jb 0x5310c0 */ if (CF_) goto L_005310c0;
  /* 005310b4 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 005310b7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005310b8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5310bdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5310b8u); RETCHK(0x5310bdu, 0x5310b8u); LOADALL;
  /* 005310bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005310c0:;
  /* 005310c0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005310c1:;
  /* 005310c1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005310c4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005310cb mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005310ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005310cf call 0x61af31 */ esp -= 4; M32(esp) = 0x5310d4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5310cfu); RETCHK(0x5310d4u, 0x5310cfu); LOADALL;
  /* 005310d4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005310d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005310d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005310d8:;
  /* 005310d8 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 005310db add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005310de call 0x4d0870 */ esp -= 4; M32(esp) = 0x5310e3u; SAVEALL; F_004d0870(c); ABI_CHECK(0x4d0870u, 0x5310deu); RETCHK(0x5310e3u, 0x5310deu); LOADALL;
  /* 005310e3 jmp 0x5310c0 */ goto L_005310c0;
L_005310e5:;
  /* 005310e5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005310e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005310e9 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 005310ec call 0x403060 */ esp -= 4; M32(esp) = 0x5310f1u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x5310ecu); RETCHK(0x5310f1u, 0x5310ecu); LOADALL;
  /* 005310f1 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005310f4 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 005310f7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005310f8 add eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005310fb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005310fe call 0x4030f0 */ esp -= 4; M32(esp) = 0x531103u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x5310feu); RETCHK(0x531103u, 0x5310feu); LOADALL;
  /* 00531103 cmp dword ptr [ebp - 0x68], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff98u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531107 jb 0x5310c1 */ if (CF_) goto L_005310c1;
  /* 00531109 mov edx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); edx = (u32)(M32(m_)); }
  /* 0053110c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053110d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x531112u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53110du); RETCHK(0x531112u, 0x53110du); LOADALL;
  /* 00531112 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531115 jmp 0x5310c1 */ goto L_005310c1;
}

void F_00531120(CPU *c) {
  NATIVE_HOOK(0x531120u) REGS; LOADALL;
L_00531120:;
  /* 00531120 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531121 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531123 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531129 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0053112e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053112f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00531132 call 0x543680 */ esp -= 4; M32(esp) = 0x531137u; SAVEALL; F_00543680(c); ABI_CHECK(0x543680u, 0x531132u); RETCHK(0x531137u, 0x531132u); LOADALL;
  /* 00531137 mov edx, 0x653380 */ { edx = (u32)(0x653380u); }
  /* 0053113c mov edi, eax */ { edi = (u32)(eax); }
  /* 0053113e call 0x543aa0 */ esp -= 4; M32(esp) = 0x531143u; SAVEALL; F_00543aa0(c); ABI_CHECK(0x543aa0u, 0x53113eu); RETCHK(0x531143u, 0x53113eu); LOADALL;
  /* 00531143 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00531145 je 0x5311f6 */ if (ZF_) goto L_005311f6;
  /* 0053114b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053114c lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00531152 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531153 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00531158 call dword ptr [0x62e1bc] */ { const u32 m_ = (u32)(0x62e1bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53115eu; SAVEALL; call_ind(c, t_); RETCHK(0x53115eu, 0x531158u); LOADALL; }
  /* 0053115e push 0x653370 */ { u32 v_ = 0x653370u; esp -= 4; M32(esp) = v_; }
  /* 00531163 lea ecx, [ebp - 0x304] */ ecx = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 00531169 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0053116e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053116f call 0x5fe928 */ esp -= 4; M32(esp) = 0x531174u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x53116fu); RETCHK(0x531174u, 0x53116fu); LOADALL;
  /* 00531174 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00531177 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00531179 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053117c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053117e je 0x53119b */ if (ZF_) goto L_0053119b;
  /* 00531180 mov edx, dword ptr [ebp - 0x308] */ { const u32 m_ = (u32)(ebp + 0xfffffcf8u); edx = (u32)(M32(m_)); }
  /* 00531186 mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 00531189 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053118a call 0x403f60 */ esp -= 4; M32(esp) = 0x53118fu; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x53118au); RETCHK(0x53118fu, 0x53118au); LOADALL;
  /* 0053118f mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00531192 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531193 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x531198u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x531193u); RETCHK(0x531198u, 0x531193u); LOADALL;
  /* 00531198 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053119b:;
  /* 0053119b mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 0053119e mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 005311a1 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 005311a4 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005311a7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005311a9 je 0x5311c6 */ if (ZF_) goto L_005311c6;
  /* 005311ab mov ecx, dword ptr [ebp - 0x308] */ { const u32 m_ = (u32)(ebp + 0xfffffcf8u); ecx = (u32)(M32(m_)); }
  /* 005311b1 mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 005311b4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005311b5 call 0x403f60 */ esp -= 4; M32(esp) = 0x5311bau; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x5311b5u); RETCHK(0x5311bau, 0x5311b5u); LOADALL;
  /* 005311ba mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005311bd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005311be call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5311c3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5311beu); RETCHK(0x5311c3u, 0x5311beu); LOADALL;
  /* 005311c3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005311c6:;
  /* 005311c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005311c7 push 0x530f30 */ { u32 v_ = 0x530f30u; esp -= 4; M32(esp) = v_; }
  /* 005311cc lea eax, [ebp - 0x304] */ eax = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 005311d2 push 0x653368 */ { u32 v_ = 0x653368u; esp -= 4; M32(esp) = v_; }
  /* 005311d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005311d8 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 005311db mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 005311de mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005311e1 call 0x52d2c0 */ esp -= 4; M32(esp) = 0x5311e6u; SAVEALL; F_0052d2c0(c); ABI_CHECK(0x52d2c0u, 0x5311e1u); RETCHK(0x5311e6u, 0x5311e1u); LOADALL;
  /* 005311e6 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 005311ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005311ed call 0x5feb42 */ esp -= 4; M32(esp) = 0x5311f2u; SAVEALL; F_005feb42(c); ABI_CHECK(0x5feb42u, 0x5311edu); RETCHK(0x5311f2u, 0x5311edu); LOADALL;
  /* 005311f2 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005311f5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_005311f6:;
  /* 005311f6 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005311f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005311fa call 0x61af31 */ esp -= 4; M32(esp) = 0x5311ffu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5311fau); RETCHK(0x5311ffu, 0x5311fau); LOADALL;
  /* 005311ff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531201 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531202 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531210(CPU *c) {
  NATIVE_HOOK(0x531210u) REGS; LOADALL;
L_00531210:;
  /* 00531210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531213 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531214 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00531217 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00531218 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053121a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053121c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053121d je 0x531237 */ if (ZF_) goto L_00531237;
  /* 0053121f mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531222 mov edi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edi = (u32)(M32(m_)); }
  /* 00531225 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531226 call 0x403f60 */ esp -= 4; M32(esp) = 0x53122bu; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x531226u); RETCHK(0x53122bu, 0x531226u); LOADALL;
  /* 0053122b mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0053122e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053122f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x531234u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53122fu); RETCHK(0x531234u, 0x53122fu); LOADALL;
  /* 00531234 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00531237:;
  /* 00531237 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0053123a mov dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0053123d mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00531240 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00531243 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531245 je 0x53125f */ if (ZF_) goto L_0053125f;
  /* 00531247 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0053124a mov edi, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edi = (u32)(M32(m_)); }
  /* 0053124d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053124e call 0x403f60 */ esp -= 4; M32(esp) = 0x531253u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x53124eu); RETCHK(0x531253u, 0x53124eu); LOADALL;
  /* 00531253 mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00531256 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00531257 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53125cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x531257u); RETCHK(0x53125cu, 0x531257u); LOADALL;
  /* 0053125c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053125f:;
  /* 0053125f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531260 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00531263 mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 00531266 mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 00531269 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053126a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053126c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053126d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531270(CPU *c) {
  NATIVE_HOOK(0x531270u) REGS; LOADALL;
L_00531270:;
  /* 00531270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531273 sub esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531279 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0053127e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00531281 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00531284 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531286 je 0x5312a8 */ if (ZF_) goto L_005312a8;
  /* 00531288 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0053128b sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0053128d mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00531292 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00531294 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00531296 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00531299 mov eax, edx */ { eax = (u32)(edx); }
  /* 0053129b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0053129e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005312a0 mov dword ptr [ebp - 0x208], eax */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); M32(m_) = (u32)(eax); }
  /* 005312a6 jne 0x5312b6 */ if (!ZF_) goto L_005312b6;
L_005312a8:;
  /* 005312a8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005312aa mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005312ad call 0x61af31 */ esp -= 4; M32(esp) = 0x5312b2u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5312adu); RETCHK(0x5312b2u, 0x5312adu); LOADALL;
  /* 005312b2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005312b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005312b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005312b6:;
  /* 005312b6 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 005312b9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005312bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005312bc jne 0x5312c2 */ if (!ZF_) goto L_005312c2;
  /* 005312be xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005312c0 jmp 0x5312da */ goto L_005312da;
L_005312c2:;
  /* 005312c2 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005312c5 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005312c7 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 005312cc imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005312ce add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005312d0 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005312d3 mov esi, edx */ { esi = (u32)(edx); }
  /* 005312d5 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 005312d8 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_005312da:;
  /* 005312da call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5312e0u; SAVEALL; call_ind(c, t_); RETCHK(0x5312e0u, 0x5312dau); LOADALL; }
  /* 005312e0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005312e2 div esi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, esi, &q_, &r_, 0x5312e2u); eax = q_; edx = r_; }
  /* 005312e4 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005312e7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005312e8 imul edx, edx, 0x1c */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005312eb mov eax, dword ptr [edx + ecx + 0x18] */ { const u32 m_ = (u32)(edx + ecx + 0x18u); eax = (u32)(M32(m_)); }
  /* 005312ef add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005312f1 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005312f4 jb 0x5312fb */ if (CF_) goto L_005312fb;
  /* 005312f6 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005312f9 jmp 0x5312fe */ goto L_005312fe;
L_005312fb:;
  /* 005312fb add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
L_005312fe:;
  /* 005312fe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005312ff push 0x653354 */ { u32 v_ = 0x653354u; esp -= 4; M32(esp) = v_; }
  /* 00531304 lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0053130a push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0053130f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531310 call 0x5fe928 */ esp -= 4; M32(esp) = 0x531315u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x531310u); RETCHK(0x531315u, 0x531310u); LOADALL;
  /* 00531315 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531318 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053131a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053131b lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00531321 call 0x530ef0 */ esp -= 4; M32(esp) = 0x531326u; SAVEALL; F_00530ef0(c); ABI_CHECK(0x530ef0u, 0x531321u); RETCHK(0x531326u, 0x531321u); LOADALL;
  /* 00531326 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531329 movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 0053132c call 0x61af31 */ esp -= 4; M32(esp) = 0x531331u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53132cu); RETCHK(0x531331u, 0x53132cu); LOADALL;
  /* 00531331 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531333 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531334 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531340(CPU *c) {
  NATIVE_HOOK(0x531340u) REGS; LOADALL;
L_00531340:;
  /* 00531340 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531341 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531343 call 0x5302b0 */ esp -= 4; M32(esp) = 0x531348u; SAVEALL; F_005302b0(c); ABI_CHECK(0x5302b0u, 0x531343u); RETCHK(0x531348u, 0x531343u); LOADALL;
  /* 00531348 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053134a je 0x531377 */ if (ZF_) goto L_00531377;
  /* 0053134c mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0053134f fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 00531352 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531353 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00531356 fmul dword ptr [ecx + 0x3ac] */ { const u32 m_ = (u32)(ecx + 0x3acu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053135c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053135d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00531360 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531361 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00531364 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 00531366 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00531369 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053136a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053136b call 0x5306d0 */ esp -= 4; M32(esp) = 0x531370u; SAVEALL; F_005306d0(c); ABI_CHECK(0x5306d0u, 0x53136bu); RETCHK(0x531370u, 0x53136bu); LOADALL;
  /* 00531370 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531373 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531374 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_00531377:;
  /* 00531377 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531379 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053137a ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00531380(CPU *c) {
  NATIVE_HOOK(0x531380u) REGS; LOADALL;
  goto L_00531380;
L_00530820:;
  /* 00530820 cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530823 jl 0x53084c */ if (LT_) goto L_0053084c;
  /* 00530825 cmp esi, 0xf */ { u32 a_ = esi, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530828 jg 0x53084c */ if (!(ZF_|LT_)) goto L_0053084c;
  /* 0053082a mov eax, dword ptr [esi*4 + 0x796f88] */ { const u32 m_ = (u32)(esi * 4u + 0x796f88u); eax = (u32)(M32(m_)); }
  /* 00530831 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530833 je 0x530846 */ if (ZF_) goto L_00530846;
  /* 00530835 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530836 call 0x5ff00e */ esp -= 4; M32(esp) = 0x53083bu; SAVEALL; F_005ff00e(c); ABI_CHECK(0x5ff00eu, 0x530836u); RETCHK(0x53083bu, 0x530836u); LOADALL;
  /* 0053083b mov dword ptr [esi*4 + 0x796f88], 0 */ { const u32 m_ = (u32)(esi * 4u + 0x796f88u); M32(m_) = (u32)(0x0u); }
L_00530846:;
  /* 00530846 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0053084b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0053084c:;
  /* 0053084c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053084e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531380:;
  /* 00531380 jmp 0x530820 */ goto L_00530820;
}

void F_00531390(CPU *c) {
  NATIVE_HOOK(0x531390u) REGS; LOADALL;
  goto L_00531390;
L_00530850:;
  /* 00530850 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530852 je 0x53086c */ if (ZF_) goto L_0053086c;
  /* 00530854 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 00530859 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053085b je 0x53086c */ if (ZF_) goto L_0053086c;
  /* 0053085d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053085f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530861 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530863 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530864 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530866 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530867 call 0x5ff014 */ esp -= 4; M32(esp) = 0x53086cu; SAVEALL; F_005ff014(c); ABI_CHECK(0x5ff014u, 0x530867u); RETCHK(0x53086cu, 0x530867u); LOADALL;
L_0053086c:;
  /* 0053086c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531390:;
  /* 00531390 jmp 0x530850 */ goto L_00530850;
}

void F_005313a0(CPU *c) {
  NATIVE_HOOK(0x5313a0u) REGS; LOADALL;
  goto L_005313a0;
L_00530870:;
  /* 00530870 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530872 je 0x53088c */ if (ZF_) goto L_0053088c;
  /* 00530874 mov eax, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); eax = (u32)(M32(m_)); }
  /* 00530879 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053087b je 0x53088c */ if (ZF_) goto L_0053088c;
  /* 0053087d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053087f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530881 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00530882 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530884 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530886 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00530887 call 0x5ff014 */ esp -= 4; M32(esp) = 0x53088cu; SAVEALL; F_005ff014(c); ABI_CHECK(0x5ff014u, 0x530887u); RETCHK(0x53088cu, 0x530887u); LOADALL;
L_0053088c:;
  /* 0053088c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005313a0:;
  /* 005313a0 jmp 0x530870 */ goto L_00530870;
}

void F_005313b0(CPU *c) {
  NATIVE_HOOK(0x5313b0u) REGS; LOADALL;
  goto L_005313b0;
L_00530890:;
  /* 00530890 mov ecx, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); ecx = (u32)(M32(m_)); }
  /* 00530896 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530898 je 0x5308b0 */ if (ZF_) goto L_005308b0;
  /* 0053089a lea edx, [eax + 0x10] */ edx = (u32)((u32)(eax + 0x10u));
  /* 0053089d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053089e lea edx, [eax + 0x20] */ edx = (u32)((u32)(eax + 0x20u));
  /* 005308a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005308a2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005308a4 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005308a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005308a8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005308aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005308ab call 0x5ff014 */ esp -= 4; M32(esp) = 0x5308b0u; SAVEALL; F_005ff014(c); ABI_CHECK(0x5ff014u, 0x5308abu); RETCHK(0x5308b0u, 0x5308abu); LOADALL;
L_005308b0:;
  /* 005308b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005313b0:;
  /* 005313b0 jmp 0x530890 */ goto L_00530890;
}

void F_005313c0(CPU *c) {
  NATIVE_HOOK(0x5313c0u) REGS; LOADALL;
L_005313c0:;
  /* 005313c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005313c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005313c3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005313c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005313c7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005313ca call 0x530940 */ esp -= 4; M32(esp) = 0x5313cfu; SAVEALL; F_00530940(c); ABI_CHECK(0x530940u, 0x5313cau); RETCHK(0x5313cfu, 0x5313cau); LOADALL;
  /* 005313cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005313d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005313d3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005313e0(CPU *c) {
  NATIVE_HOOK(0x5313e0u) REGS; LOADALL;
L_005313e0:;
  /* 005313e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005313e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005313e3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005313e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005313e7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005313ea call 0x530970 */ esp -= 4; M32(esp) = 0x5313efu; SAVEALL; F_00530970(c); ABI_CHECK(0x530970u, 0x5313eau); RETCHK(0x5313efu, 0x5313eau); LOADALL;
  /* 005313ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005313f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005313f3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00531400(CPU *c) {
  NATIVE_HOOK(0x531400u) REGS; LOADALL;
  goto L_00531400;
L_005308c0:;
  /* 005308c0 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005308c3 jl 0x5308e7 */ if (LT_) goto L_005308e7;
  /* 005308c5 cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005308c8 jg 0x5308e7 */ if (!(ZF_|LT_)) goto L_005308e7;
  /* 005308ca test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005308cc je 0x5308e7 */ if (ZF_) goto L_005308e7;
  /* 005308ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005308d0 jle 0x5308e7 */ if ((ZF_|LT_)) goto L_005308e7;
  /* 005308d2 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005308d5 jge 0x5308e7 */ if (!LT_) goto L_005308e7;
  /* 005308d7 mov eax, dword ptr [eax*4 + 0x796f88] */ { const u32 m_ = (u32)(eax * 4u + 0x796f88u); eax = (u32)(M32(m_)); }
  /* 005308de push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005308e0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005308e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005308e2 call 0x5ff002 */ esp -= 4; M32(esp) = 0x5308e7u; SAVEALL; F_005ff002(c); ABI_CHECK(0x5ff002u, 0x5308e2u); RETCHK(0x5308e7u, 0x5308e2u); LOADALL;
L_005308e7:;
  /* 005308e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531400:;
  /* 00531400 jmp 0x5308c0 */ goto L_005308c0;
}

void F_00531410(CPU *c) {
  NATIVE_HOOK(0x531410u) REGS; LOADALL;
  goto L_00531410;
L_005308f0:;
  /* 005308f0 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005308f3 jl 0x530934 */ if (LT_) goto L_00530934;
  /* 005308f5 cmp ecx, 0xf */ { u32 a_ = ecx, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005308f8 jg 0x530934 */ if (!(ZF_|LT_)) goto L_00530934;
  /* 005308fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005308fc je 0x530934 */ if (ZF_) goto L_00530934;
  /* 005308fe test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530900 jle 0x530934 */ if ((ZF_|LT_)) goto L_00530934;
  /* 00530902 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00530905 jge 0x530934 */ if (!LT_) goto L_00530934;
  /* 00530907 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00530909 mov ecx, dword ptr [ecx*4 + 0x796f88] */ { const u32 m_ = (u32)(ecx * 4u + 0x796f88u); ecx = (u32)(M32(m_)); }
  /* 00530910 mov dword ptr [0x9b91d0], edx */ { const u32 m_ = (u32)(0x9b91d0u); M32(m_) = (u32)(edx); }
  /* 00530916 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00530919 push 0x9b91d0 */ { u32 v_ = 0x9b91d0u; esp -= 4; M32(esp) = v_; }
  /* 0053091e mov dword ptr [0x9b91d4], edx */ { const u32 m_ = (u32)(0x9b91d4u); M32(m_) = (u32)(edx); }
  /* 00530924 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00530927 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00530929 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053092a mov dword ptr [0x9b91d8], eax */ { const u32 m_ = (u32)(0x9b91d8u); M32(m_) = (u32)(eax); }
  /* 0053092f call 0x5ff002 */ esp -= 4; M32(esp) = 0x530934u; SAVEALL; F_005ff002(c); ABI_CHECK(0x5ff002u, 0x53092fu); RETCHK(0x530934u, 0x53092fu); LOADALL;
L_00530934:;
  /* 00530934 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531410:;
  /* 00531410 jmp 0x5308f0 */ goto L_005308f0;
}

void F_00531420(CPU *c) {
  NATIVE_HOOK(0x531420u) REGS; LOADALL;
L_00531420:;
  /* 00531420 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531421 call 0x530580 */ esp -= 4; M32(esp) = 0x531426u; SAVEALL; F_00530580(c); ABI_CHECK(0x530580u, 0x531421u); RETCHK(0x531426u, 0x531421u); LOADALL;
  /* 00531426 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00531427 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531430(CPU *c) {
  NATIVE_HOOK(0x531430u) REGS; LOADALL;
L_00531430:;
  /* 00531430 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00531433 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531434 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00531436 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00531438 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0053143b mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0053143e cmp esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531441 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00531448 je 0x53146a */ if (ZF_) goto L_0053146a;
  /* 0053144a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053144b jmp 0x531450 */ goto L_00531450;
L_00531450:;
  /* 00531450 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 00531452 call 0x531640 */ esp -= 4; M32(esp) = 0x531457u; SAVEALL; F_00531640(c); ABI_CHECK(0x531640u, 0x531452u); RETCHK(0x531457u, 0x531452u); LOADALL;
  /* 00531457 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531458 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53145du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x531458u); RETCHK(0x53145du, 0x531458u); LOADALL;
  /* 0053145d mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00531460 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531463 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531465 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00531467 jne 0x531450 */ if (!ZF_) goto L_00531450;
  /* 00531469 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053146a:;
  /* 0053146a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053146b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531470(CPU *c) {
  NATIVE_HOOK(0x531470u) REGS; LOADALL;
L_00531470:;
  /* 00531470 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 00531472 call 0x5fe934 */ esp -= 4; M32(esp) = 0x531477u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x531472u); RETCHK(0x531477u, 0x531472u); LOADALL;
  /* 00531477 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053147a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053147c je 0x531480 */ if (ZF_) goto L_00531480;
  /* 0053147e mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
L_00531480:;
  /* 00531480 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00531483 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531485 je 0x531489 */ if (ZF_) goto L_00531489;
  /* 00531487 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_00531489:;
  /* 00531489 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531490(CPU *c) {
  NATIVE_HOOK(0x531490u) REGS; LOADALL;
L_00531490:;
  /* 00531490 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00531493 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00531494 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00531496 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531498 je 0x5314b7 */ if (ZF_) goto L_005314b7;
  /* 0053149a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005314a0:;
  /* 005314a0 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005314a3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005314a5 je 0x5314b2 */ if (ZF_) goto L_005314b2;
  /* 005314a7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005314a8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005314aa mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005314ad jne 0x5314b2 */ if (!ZF_) goto L_005314b2;
  /* 005314af mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
L_005314b2:;
  /* 005314b2 cmp dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005314b5 jne 0x5314a0 */ if (!ZF_) goto L_005314a0;
L_005314b7:;
  /* 005314b7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005314b8 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 005314bb cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005314bd jbe 0x5314d9 */ if ((CF_|ZF_)) goto L_005314d9;
  /* 005314bf nop */ ;
L_005314c0:;
  /* 005314c0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005314c3 mov eax, dword ptr [eax + edi*4 - 4] */ { const u32 m_ = (u32)(eax + edi * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005314c7 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005314c8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005314ca je 0x5314d5 */ if (ZF_) goto L_005314d5;
  /* 005314cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005314cd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5314d2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5314cdu); RETCHK(0x5314d2u, 0x5314cdu); LOADALL;
  /* 005314d2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005314d5:;
  /* 005314d5 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005314d7 ja 0x5314c0 */ if (!(CF_|ZF_)) goto L_005314c0;
L_005314d9:;
  /* 005314d9 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005314dc cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005314de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005314df je 0x5314ea */ if (ZF_) goto L_005314ea;
  /* 005314e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005314e2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5314e7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5314e2u); RETCHK(0x5314e7u, 0x5314e2u); LOADALL;
  /* 005314e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005314ea:;
  /* 005314ea mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005314ed mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005314f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005314f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531500(CPU *c) {
  NATIVE_HOOK(0x531500u) REGS; LOADALL;
L_00531500:;
  /* 00531500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531503 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00531505 push 0x61c631 */ { u32 v_ = 0x61c631u; esp -= 4; M32(esp) = v_; }
  /* 0053150a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00531510 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531511 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00531518 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053151b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053151c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053151d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053151e mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00531521 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 00531523 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00531525 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53152au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x531525u); RETCHK(0x53152au, 0x531525u); LOADALL;
  /* 0053152a mov edi, eax */ { edi = (u32)(eax); }
  /* 0053152c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053152e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00531531 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531534 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00531537 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0053153a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053153c mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00531540 je 0x53157a */ if (ZF_) goto L_0053157a;
  /* 00531542 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00531545 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00531548 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053154a mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 0053154c lea esi, [edi + 8] */ esi = (u32)((u32)(edi + 0x8u));
  /* 0053154f mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00531552 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531553 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0053155a mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0053155d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053155e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00531560 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00531563 call 0x404140 */ esp -= 4; M32(esp) = 0x531568u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x531563u); RETCHK(0x531568u, 0x531563u); LOADALL;
  /* 00531568 mov eax, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0053156b mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0053156e mov ecx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00531571 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00531574 mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 00531577 mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
L_0053157a:;
  /* 0053157a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053157d mov eax, edi */ { eax = (u32)(edi); }
  /* 0053157f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531580 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531581 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00531588 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00531589 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053158b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053158c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0053158f(CPU *c) {
  NATIVE_HOOK(0x53158fu) REGS; LOADALL;
L_0053158f:;
  /* 0053158f mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00531592 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531593 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x531598u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x531593u); RETCHK(0x531598u, 0x531593u); LOADALL;
  /* 00531598 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053159b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053159d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053159e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053159f call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 005315a4 int3 */ TRAP(0x5315a4u, "int3");
}

void F_005315b0(CPU *c) {
  NATIVE_HOOK(0x5315b0u) REGS; LOADALL;
L_005315b0:;
  /* 005315b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005315b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005315b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005315b5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 005315ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005315c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005315c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005315c8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005315cb mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005315ce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005315cf mov esi, 0x6666666 */ { esi = (u32)(0x6666666u); }
  /* 005315d4 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005315d6 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005315d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005315d9 jae 0x531624 */ if (!CF_) goto L_00531624;
  /* 005315db push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005315dd push 0x648f18 */ { u32 v_ = 0x648f18u; esp -= 4; M32(esp) = v_; }
  /* 005315e2 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005315e5 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 005315ec mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 005315f3 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 005315f7 call 0x404420 */ esp -= 4; M32(esp) = 0x5315fcu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5315f7u); RETCHK(0x5315fcu, 0x5315f7u); LOADALL;
  /* 005315fc lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005315ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531600 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00531603 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0053160a call 0x4040e0 */ esp -= 4; M32(esp) = 0x53160fu; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x53160au); RETCHK(0x53160fu, 0x53160au); LOADALL;
  /* 0053160f push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 00531614 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00531617 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531618 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 0053161f call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_00531624:;
  /* 00531624 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531626 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00531629 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053162c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00531633 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531635 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531636 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531640(CPU *c) {
  NATIVE_HOOK(0x531640u) REGS; LOADALL;
L_00531640:;
  /* 00531640 cmp dword ptr [esi + 0x20], 0x10 */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531644 jb 0x531652 */ if (CF_) goto L_00531652;
  /* 00531646 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00531649 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053164a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53164fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53164au); RETCHK(0x53164fu, 0x53164au); LOADALL;
  /* 0053164f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00531652:;
  /* 00531652 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531654 mov dword ptr [esi + 0x20], 0xf */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0xfu); }
  /* 0053165b mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0053165e mov byte ptr [esi + 0xc], al */ { const u32 m_ = (u32)(esi + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00531661 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531670(CPU *c) {
  NATIVE_HOOK(0x531670u) REGS; LOADALL;
L_00531670:;
  /* 00531670 mov dword ptr [edx], 0 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x0u); }
  /* 00531676 mov dword ptr [edx + 4], 0 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0053167d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053167f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531680 mov ecx, 0x1e */ { ecx = (u32)(0x1eu); }
  /* 00531685 lea edi, [edx + 8] */ edi = (u32)((u32)(edx + 0x8u));
  /* 00531688 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0053168a mov ecx, 0x2c */ { ecx = (u32)(0x2cu); }
  /* 0053168f lea edi, [edx + 0x80] */ edi = (u32)((u32)(edx + 0x80u));
  /* 00531695 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00531697 mov ecx, 0x2c */ { ecx = (u32)(0x2cu); }
  /* 0053169c lea edi, [edx + 0x130] */ edi = (u32)((u32)(edx + 0x130u));
  /* 005316a2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005316a4 lea ecx, [edx + 0x1e0] */ ecx = (u32)((u32)(edx + 0x1e0u));
  /* 005316aa mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005316ac mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005316af lea ecx, [edx + 0x1e8] */ ecx = (u32)((u32)(edx + 0x1e8u));
  /* 005316b5 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005316b7 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005316ba mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005316bd mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005316c0 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005316c3 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 005316c6 mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 005316c9 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005316cc lea ecx, [edx + 0x208] */ ecx = (u32)((u32)(edx + 0x208u));
  /* 005316d2 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005316d4 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005316d7 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005316da mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005316dd mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005316e0 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 005316e3 mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 005316e6 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005316e9 lea ecx, [edx + 0x228] */ ecx = (u32)((u32)(edx + 0x228u));
  /* 005316ef mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005316f1 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005316f4 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005316f7 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005316fa mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 005316fd mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00531700 mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 00531703 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00531706 lea ecx, [edx + 0x248] */ ecx = (u32)((u32)(edx + 0x248u));
  /* 0053170c mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0053170e mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00531711 lea ecx, [edx + 0x250] */ ecx = (u32)((u32)(edx + 0x250u));
  /* 00531717 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00531719 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0053171c mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053171f mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00531722 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 00531725 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00531728 mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 0053172b mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0053172e mov eax, edx */ { eax = (u32)(edx); }
  /* 00531730 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531731 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531740(CPU *c) {
  NATIVE_HOOK(0x531740u) REGS; LOADALL;
L_00531740:;
  /* 00531740 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531741 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531743 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00531744 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531745 mov esi, eax */ { esi = (u32)(eax); }
  /* 00531747 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0053174a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053174c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053174d lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 00531750 jne 0x5317ff */ if (!ZF_) goto L_005317ff;
  /* 00531756 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531758 call dword ptr [0x62e738] */ { const u32 m_ = (u32)(0x62e738u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53175eu; SAVEALL; call_ind(c, t_); RETCHK(0x53175eu, 0x531758u); LOADALL; }
  /* 0053175e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053175f push 0x62e87c */ { u32 v_ = 0x62e87cu; esp -= 4; M32(esp) = v_; }
  /* 00531764 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00531766 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531768 push 0x62e89c */ { u32 v_ = 0x62e89cu; esp -= 4; M32(esp) = v_; }
  /* 0053176d call dword ptr [0x62e73c] */ { const u32 m_ = (u32)(0x62e73cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531773u; SAVEALL; call_ind(c, t_); RETCHK(0x531773u, 0x53176du); LOADALL; }
  /* 00531773 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531775 jl 0x5317cc */ if (LT_) goto L_005317cc;
  /* 00531777 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00531779 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0053177b push 0x800 */ { u32 v_ = 0x800u; esp -= 4; M32(esp) = v_; }
  /* 00531780 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531782 call dword ptr [0x62e160] */ { const u32 m_ = (u32)(0x62e160u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531788u; SAVEALL; call_ind(c, t_); RETCHK(0x531788u, 0x531782u); LOADALL; }
  /* 00531788 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0053178a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053178b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053178c call dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53178fu; SAVEALL; call_ind(c, t_); RETCHK(0x53178fu, 0x53178cu); LOADALL; }
  /* 0053178f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531791 jl 0x5317cc */ if (LT_) goto L_005317cc;
  /* 00531793 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00531795 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00531797 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531799 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053179a push 0x62e7dc */ { u32 v_ = 0x62e7dcu; esp -= 4; M32(esp) = v_; }
  /* 0053179f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005317a0 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5317a3u; SAVEALL; call_ind(c, t_); RETCHK(0x5317a3u, 0x5317a0u); LOADALL; }
  /* 005317a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005317a5 jl 0x5317cc */ if (LT_) goto L_005317cc;
  /* 005317a7 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005317a9 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005317ab push 0x63ba9c */ { u32 v_ = 0x63ba9cu; esp -= 4; M32(esp) = v_; }
  /* 005317b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005317b1 call dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5317b4u; SAVEALL; call_ind(c, t_); RETCHK(0x5317b4u, 0x5317b1u); LOADALL; }
  /* 005317b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005317b6 jl 0x5317cc */ if (LT_) goto L_005317cc;
  /* 005317b8 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005317ba mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005317bc push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 005317be call 0x559eb0 */ esp -= 4; M32(esp) = 0x5317c3u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x5317beu); RETCHK(0x5317c3u, 0x5317beu); LOADALL;
  /* 005317c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005317c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005317c5 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5317c8u; SAVEALL; call_ind(c, t_); RETCHK(0x5317c8u, 0x5317c5u); LOADALL; }
  /* 005317c8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005317ca jge 0x5317da */ if (!LT_) goto L_005317da;
L_005317cc:;
  /* 005317cc call 0x531810 */ esp -= 4; M32(esp) = 0x5317d1u; SAVEALL; F_00531810(c); ABI_CHECK(0x531810u, 0x5317ccu); RETCHK(0x5317d1u, 0x5317ccu); LOADALL;
  /* 005317d1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005317d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005317d3 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005317d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005317d6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005317d7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005317da:;
  /* 005317da mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 005317dc mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005317de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005317df call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5317e2u; SAVEALL; call_ind(c, t_); RETCHK(0x5317e2u, 0x5317dfu); LOADALL; }
  /* 005317e2 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005317e5 mov edi, 2 */ { edi = (u32)(0x2u); }
  /* 005317ea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005317f0:;
  /* 005317f0 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005317f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005317f2 mov eax, edi */ { eax = (u32)(edi); }
  /* 005317f4 mov edx, esi */ { edx = (u32)(esi); }
  /* 005317f6 call 0x531850 */ esp -= 4; M32(esp) = 0x5317fbu; SAVEALL; F_00531850(c); ABI_CHECK(0x531850u, 0x5317f6u); RETCHK(0x5317fbu, 0x5317f6u); LOADALL;
  /* 005317fb test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005317fd jg 0x5317f0 */ if (!(ZF_|LT_)) goto L_005317f0;
L_005317ff:;
  /* 005317ff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531800 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531801 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00531803 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00531804 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531805 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00531810(CPU *c) {
  NATIVE_HOOK(0x531810u) REGS; LOADALL;
L_00531810:;
  /* 00531810 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00531813 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531815 je 0x53182d */ if (ZF_) goto L_0053182d;
  /* 00531817 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00531819 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053181a call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53181du; SAVEALL; call_ind(c, t_); RETCHK(0x53181du, 0x53181au); LOADALL; }
  /* 0053181d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00531820 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00531822 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531823 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531826u; SAVEALL; call_ind(c, t_); RETCHK(0x531826u, 0x531823u); LOADALL; }
  /* 00531826 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_0053182d:;
  /* 0053182d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0053182f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531831 je 0x53183f */ if (ZF_) goto L_0053183f;
  /* 00531833 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00531835 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531836 call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531839u; SAVEALL; call_ind(c, t_); RETCHK(0x531839u, 0x531836u); LOADALL; }
  /* 00531839 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
L_0053183f:;
  /* 0053183f jmp dword ptr [0x62e740] */ { const u32 m_ = (u32)(0x62e740u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00531850(CPU *c) {
  NATIVE_HOOK(0x531850u) REGS; LOADALL;
L_00531850:;
  /* 00531850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531853 imul eax, eax, 0x58 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x58u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00531856 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531857 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531858 lea esi, [eax + 0x688140] */ esi = (u32)((u32)(eax + 0x688140u));
  /* 0053185e lea edi, [eax + edx + 0x80] */ edi = (u32)((u32)(eax + edx + 0x80u));
  /* 00531865 mov ecx, 0x16 */ { ecx = (u32)(0x16u); }
  /* 0053186a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0053186c mov cl, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053186f test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00531871 lea edi, [eax + edx + 0x130] */ edi = (u32)((u32)(eax + edx + 0x130u));
  /* 00531878 mov ecx, 0x16 */ { ecx = (u32)(0x16u); }
  /* 0053187d je 0x5318b5 */ if (ZF_) goto L_005318b5;
  /* 0053187f lea esi, [eax + 0x6882a0] */ esi = (u32)((u32)(eax + 0x6882a0u));
  /* 00531885 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00531887 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531888 mov dword ptr [0x688350], 6 */ { const u32 m_ = (u32)(0x688350u); M32(m_) = (u32)(0x6u); }
  /* 00531892 mov dword ptr [0x688354], 5 */ { const u32 m_ = (u32)(0x688354u); M32(m_) = (u32)(0x5u); }
  /* 0053189c mov dword ptr [0x688358], 4 */ { const u32 m_ = (u32)(0x688358u); M32(m_) = (u32)(0x4u); }
  /* 005318a6 mov dword ptr [0x68835c], 7 */ { const u32 m_ = (u32)(0x68835cu); M32(m_) = (u32)(0x7u); }
  /* 005318b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005318b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005318b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005318b5:;
  /* 005318b5 lea esi, [eax + 0x6881f0] */ esi = (u32)((u32)(eax + 0x6881f0u));
  /* 005318bb rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005318bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005318be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005318bf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005318c0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005318d0(CPU *c) {
  NATIVE_HOOK(0x5318d0u) REGS; LOADALL;
L_005318d0:;
  /* 005318d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005318d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005318d3 sub esp, 0x128 */ { u32 a_ = esp, b_ = 0x128u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005318d9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005318de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005318df mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005318e2 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005318e5 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005318e8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005318ea je 0x531ae5 */ if (ZF_) goto L_00531ae5;
  /* 005318f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005318f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005318f2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005318f4 lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 005318fa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005318fb mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00531900 lea edi, [ebp - 0x104] */ edi = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00531906 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00531908 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0053190b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053190d push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00531912 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531913 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531916u; SAVEALL; call_ind(c, t_); RETCHK(0x531916u, 0x531913u); LOADALL; }
  /* 00531916 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531918 jge 0x531923 */ if (!LT_) goto L_00531923;
  /* 0053191a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0053191d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053191f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531920 call dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531923u; SAVEALL; call_ind(c, t_); RETCHK(0x531923u, 0x531920u); LOADALL; }
L_00531923:;
  /* 00531923 mov dword ptr [ebp - 0x108], 0x16 */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M32(m_) = (u32)(0x16u); }
  /* 0053192d lea ebx, [esi + 0x80] */ ebx = (u32)((u32)(esi + 0x80u));
  /* 00531933 lea eax, [esi + 0x1e8] */ eax = (u32)((u32)(esi + 0x1e8u));
  /* 00531939 lea edi, [esi + 0x190] */ edi = (u32)((u32)(esi + 0x190u));
  /* 0053193f jmp 0x531953 */ goto L_00531953;
L_00531941:;
  /* 00531941 mov edi, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); edi = (u32)(M32(m_)); }
  /* 00531947 mov eax, dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); eax = (u32)(M32(m_)); }
  /* 0053194d mov ebx, dword ptr [ebp - 0x110] */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); ebx = (u32)(M32(m_)); }
L_00531953:;
  /* 00531953 mov edx, dword ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); edx = (u32)(M32(m_)); }
  /* 00531959 mov ecx, 0xb */ { ecx = (u32)(0xbu); }
  /* 0053195e sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00531960 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531963 sub ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00531966 sub edi, 0x58 */ { u32 a_ = edi, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00531969 mov dword ptr [ebp - 0x108], edx */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M32(m_) = (u32)(edx); }
  /* 0053196f mov edx, dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); edx = (u32)(M32(m_)); }
  /* 00531972 mov dword ptr [ebp - 0x110], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(ebx); }
  /* 00531978 mov dword ptr [ebp - 0x128], edi */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(edi); }
  /* 0053197e mov dword ptr [ebp - 0x118], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M32(m_) = (u32)(eax); }
  /* 00531984 mov dword ptr [ebp - 0x10c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(0x0u); }
  /* 0053198e mov dword ptr [ebp - 0x120], edx */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M32(m_) = (u32)(edx); }
  /* 00531994 add ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00531997 jmp 0x5319a0 */ goto L_005319a0;
L_00531999:;
  /* 00531999 mov edi, dword ptr [ebp - 0x11c] */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); edi = (u32)(M32(m_)); }
  /* 0053199f nop */ ;
L_005319a0:;
  /* 005319a0 sub edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005319a3 sub ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005319a6 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005319a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005319a9 mov dword ptr [ebp - 0x11c], edi */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(edi); }
  /* 005319af mov dword ptr [ebp - 0x114], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(ebx); }
  /* 005319b5 mov dword ptr [ebp - 0x124], eax */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); M32(m_) = (u32)(eax); }
  /* 005319bb mov edx, 2 */ { edx = (u32)(0x2u); }
L_005319c0:;
  /* 005319c0 mov esi, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 005319c3 sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005319c6 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005319c7 test byte ptr [ebp + esi - 0x104], 0x80 */ { const u32 m_ = (u32)(ebp + esi + 0xfffffefcu); u32 a_ = M8(m_), b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005319cf jne 0x531a0c */ if (!ZF_) goto L_00531a0c;
  /* 005319d1 mov esi, dword ptr [ebp - 0x118] */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); esi = (u32)(M32(m_)); }
  /* 005319d7 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005319d9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005319db je 0x531a06 */ if (ZF_) goto L_00531a06;
  /* 005319dd mov eax, dword ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); eax = (u32)(M32(m_)); }
  /* 005319e3 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005319e6 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005319e8 lea eax, [edx + eax*2 + 0x4c] */ eax = (u32)((u32)(edx + eax * 2u + 0x4cu));
  /* 005319ec mov eax, dword ptr [ebx + eax*4] */ { const u32 m_ = (u32)(ebx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 005319ef lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 005319f2 mov ebx, dword ptr [esi + eax*4 + 0x58] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x58u); ebx = (u32)(M32(m_)); }
  /* 005319f6 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005319f8 mov ebx, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ebx = (u32)(M32(m_)); }
  /* 005319fe jne 0x531a0c */ if (!ZF_) goto L_00531a0c;
  /* 00531a00 mov eax, dword ptr [ebp - 0x124] */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); eax = (u32)(M32(m_)); }
L_00531a06:;
  /* 00531a06 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531a08 jg 0x5319c0 */ if (!(ZF_|LT_)) goto L_005319c0;
  /* 00531a0a jmp 0x531a11 */ goto L_00531a11;
L_00531a0c:;
  /* 00531a0c mov eax, 1 */ { eax = (u32)(0x1u); }
L_00531a11:;
  /* 00531a11 mov esi, dword ptr [ebp - 0x10c] */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); esi = (u32)(M32(m_)); }
  /* 00531a17 mov edx, eax */ { edx = (u32)(eax); }
  /* 00531a19 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00531a1b or esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00531a1d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531a1f mov dword ptr [ebp - 0x10c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(esi); }
  /* 00531a25 je 0x531a30 */ if (ZF_) goto L_00531a30;
  /* 00531a27 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00531a2a fadd dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00531a2c fstp dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00531a2e jmp 0x531a36 */ goto L_00531a36;
L_00531a30:;
  /* 00531a30 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_00531a36:;
  /* 00531a36 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531a38 jg 0x531999 */ if (!(ZF_|LT_)) goto L_00531999;
  /* 00531a3e mov ecx, dword ptr [ebp - 0x110] */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); ecx = (u32)(M32(m_)); }
  /* 00531a44 mov eax, dword ptr [ebp - 0x10c] */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); eax = (u32)(M32(m_)); }
  /* 00531a4a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00531a4c mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00531a4f or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00531a51 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00531a53 mov edx, dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); edx = (u32)(M32(m_)); }
  /* 00531a59 mov esi, edx */ { esi = (u32)(edx); }
  /* 00531a5b not esi */ { esi = (u32)(~esi & 0xffffffffu); }
  /* 00531a5d and esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00531a5f not eax */ { eax = (u32)(~eax & 0xffffffffu); }
  /* 00531a61 and eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531a63 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 00531a66 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00531a68 mov eax, dword ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); eax = (u32)(M32(m_)); }
  /* 00531a6e or ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00531a70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531a72 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00531a75 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00531a78 jg 0x531941 */ if (!(ZF_|LT_)) goto L_00531941;
  /* 00531a7e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00531a81 mov edi, 0xff */ { edi = (u32)(0xffu); }
  /* 00531a86 add eax, 0x208 */ { u32 a_ = eax, b_ = 0x208u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531a8b mov dword ptr [ebp + 8], 8 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x8u); }
L_00531a92:;
  /* 00531a92 mov esi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); esi = (u32)(M32(m_)); }
  /* 00531a95 sub eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531a98 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00531a9a mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 00531a9f nop */ ;
L_00531aa0:;
  /* 00531aa0 mov bl, byte ptr [ebp + edi - 0x104] */ { const u32 m_ = (u32)(ebp + edi + 0xfffffefcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00531aa7 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00531aa8 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00531aaa jns 0x531ab5 */ if (!SF_) goto L_00531ab5;
  /* 00531aac mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00531ab1 shl ebx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00531ab3 or edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_00531ab5:;
  /* 00531ab5 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00531ab6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531ab8 jg 0x531aa0 */ if (!(ZF_|LT_)) goto L_00531aa0;
  /* 00531aba mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00531abc mov ebx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ebx = (u32)(M32(m_)); }
  /* 00531abf or ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00531ac1 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00531ac3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00531ac5 not ecx */ { ecx = (u32)(~ecx & 0xffffffffu); }
  /* 00531ac7 and ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00531ac9 not edx */ { edx = (u32)(~edx & 0xffffffffu); }
  /* 00531acb and edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00531acd mov esi, dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); esi = (u32)(M32(m_)); }
  /* 00531ad0 or ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00531ad2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00531ad5 or esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00531ad7 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00531ad8 mov dword ptr [eax + 0x20], ebx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ebx); }
  /* 00531adb mov dword ptr [eax + 0x40], esi */ { const u32 m_ = (u32)(eax + 0x40u); M32(m_) = (u32)(esi); }
  /* 00531ade mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00531ae1 jne 0x531a92 */ if (!ZF_) goto L_00531a92;
  /* 00531ae3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531ae4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00531ae5:;
  /* 00531ae5 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531ae8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531ae9 call 0x61af31 */ esp -= 4; M32(esp) = 0x531aeeu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x531ae9u); RETCHK(0x531aeeu, 0x531ae9u); LOADALL;
  /* 00531aee mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531af0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531af1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00531b00(CPU *c) {
  NATIVE_HOOK(0x531b00u) REGS; LOADALL;
L_00531b00:;
  /* 00531b00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00531b01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531b02 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00531b04 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531b05 lea eax, [ebx + 0x80] */ eax = (u32)((u32)(ebx + 0x80u));
  /* 00531b0b lea ecx, [ebx + 0x250] */ ecx = (u32)((u32)(ebx + 0x250u));
  /* 00531b11 mov edx, 2 */ { edx = (u32)(0x2u); }
  /* 00531b16 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00531b18 jmp 0x531b20 */ goto L_00531b20;
L_00531b20:;
  /* 00531b20 mov edi, dword ptr [eax - 0x3c] */ { const u32 m_ = (u32)(eax + 0xffffffc4u); edi = (u32)(M32(m_)); }
  /* 00531b23 sub eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531b26 sub ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00531b29 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00531b2a mov dword ptr [ecx], edi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edi); }
  /* 00531b2c mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00531b2e mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 00531b31 mov dword ptr [eax + 8], esi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(esi); }
  /* 00531b34 jne 0x531b20 */ if (!ZF_) goto L_00531b20;
  /* 00531b36 lea eax, [ebx + 0x1e8] */ eax = (u32)((u32)(ebx + 0x1e8u));
  /* 00531b3c lea edi, [ebx + 0x250] */ edi = (u32)((u32)(ebx + 0x250u));
  /* 00531b42 mov esi, eax */ { esi = (u32)(eax); }
  /* 00531b44 mov ecx, 8 */ { ecx = (u32)(0x8u); }
  /* 00531b49 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00531b4b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00531b4d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00531b4f mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00531b52 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00531b55 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00531b58 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00531b5b mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00531b5e mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00531b61 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00531b64 lea eax, [ebx + 0x208] */ eax = (u32)((u32)(ebx + 0x208u));
  /* 00531b6a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00531b6c mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 00531b6e mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 00531b71 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00531b74 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 00531b77 mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 00531b7a mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00531b7d mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 00531b80 add ebx, 0x228 */ { u32 a_ = ebx, b_ = 0x228u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00531b86 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00531b89 mov dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ecx); }
  /* 00531b8b mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00531b8e mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00531b91 mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00531b94 mov dword ptr [ebx + 0x10], ecx */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00531b97 mov dword ptr [ebx + 0x14], ecx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00531b9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531b9b mov dword ptr [ebx + 0x18], ecx */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00531b9e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531b9f mov dword ptr [ebx + 0x1c], ecx */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00531ba2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00531ba3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531bb0(CPU *c) {
  NATIVE_HOOK(0x531bb0u) REGS; LOADALL;
L_00531bb0:;
  /* 00531bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531bb3 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531bb6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00531bb7 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00531bba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531bbb mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00531bbe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531bc0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00531bc2 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00531bc5 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531bc7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531bc8 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 00531bcb mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00531bce mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00531bd1 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00531bd4 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 00531bd7 jbe 0x531ca1 */ if ((CF_|ZF_)) goto L_00531ca1;
  /* 00531bdd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00531be0 lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 00531be3 sub ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00531be5 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00531be8 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 00531beb jmp 0x531bf0 */ goto L_00531bf0;
L_00531bf0:;
  /* 00531bf0 mov edx, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00531bf3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00531bf5 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00531bf8 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00531bfb mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00531bfe mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00531c01 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00531c04 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 00531c07 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00531c09 mov esi, 0xc8d74722 */ { esi = (u32)(0xc8d74722u); }
  /* 00531c0e mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 00531c11 mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
L_00531c18:;
  /* 00531c18 mov edi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edi = (u32)(M32(m_)); }
  /* 00531c1b mov ebx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ebx = (u32)(M32(m_)); }
  /* 00531c1e mov eax, edx */ { eax = (u32)(edx); }
  /* 00531c20 shr eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00531c23 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531c25 mov edi, edx */ { edi = (u32)(edx); }
  /* 00531c27 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00531c2a add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00531c2c mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 00531c2f xor eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531c31 lea edi, [esi + edx] */ edi = (u32)((u32)(esi + edx));
  /* 00531c34 xor eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531c36 mov edi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edi = (u32)(M32(m_)); }
  /* 00531c39 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00531c3b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00531c3d shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00531c40 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531c42 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00531c44 shr edi, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 00531c47 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00531c49 xor eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531c4b lea edi, [esi + ecx] */ edi = (u32)((u32)(esi + ecx));
  /* 00531c4e xor eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531c50 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00531c52 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00531c55 sub esi, 0x4143534e */ { u32 a_ = esi, b_ = 0x4143534eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00531c5b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00531c5c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00531c5f jne 0x531c18 */ if (!ZF_) goto L_00531c18;
  /* 00531c61 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 00531c64 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00531c67 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00531c6a mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 00531c6d xor edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00531c6f mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00531c72 mov dword ptr [ebx + esi*8], edx */ { const u32 m_ = (u32)(ebx + esi * 8u); M32(m_) = (u32)(edx); }
  /* 00531c75 xor ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00531c78 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00531c7b mov dword ptr [edx + eax], ecx */ { const u32 m_ = (u32)(edx + eax); M32(m_) = (u32)(ecx); }
  /* 00531c7e mov ecx, dword ptr [eax - 4] */ { const u32 m_ = (u32)(eax + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531c81 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00531c83 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00531c86 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 00531c89 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00531c8a add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00531c8d cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531c8f mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00531c92 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00531c95 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00531c98 jb 0x531bf0 */ if (CF_) goto L_00531bf0;
  /* 00531c9e mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
L_00531ca1:;
  /* 00531ca1 shl ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00531ca4 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531ca6 jae 0x531cd1 */ if (!CF_) goto L_00531cd1;
  /* 00531ca8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00531cab lea edx, [ecx + ebx] */ edx = (u32)((u32)(ecx + ebx));
  /* 00531cae sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00531cb0:;
  /* 00531cb0 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00531cb2 and ebx, 0xf */ { u32 a_ = ebx, b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00531cb5 mov bl, byte ptr [ebx + edi] */ { const u32 m_ = (u32)(ebx + edi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00531cb8 xor bl, byte ptr [eax + edx] */ { const u32 m_ = (u32)(eax + edx); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00531cbb inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00531cbc mov byte ptr [edx], bl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00531cbe inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00531cbf cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531cc1 jb 0x531cb0 */ if (CF_) goto L_00531cb0;
  /* 00531cc3 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00531cc6 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00531cc8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531cc9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00531ccb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531ccc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00531ccd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531ccf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531cd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531cd1:;
  /* 00531cd1 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00531cd4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531cd5 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00531cd7 mov eax, esi */ { eax = (u32)(esi); }
  /* 00531cd9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531cda pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00531cdb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531cdd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531cde ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531ce0(CPU *c) {
  NATIVE_HOOK(0x531ce0u) REGS; LOADALL;
L_00531ce0:;
  /* 00531ce0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531ce1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531ce3 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531ce6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00531ceb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00531cee mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00531cf1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531cf3 je 0x531e32 */ if (ZF_) goto L_00531e32;
  /* 00531cf9 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531cfb je 0x531e32 */ if (ZF_) goto L_00531e32;
  /* 00531d01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531d02 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531d04 mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 00531d09 lea edi, [ebp - 0x38] */ edi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00531d0c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00531d0e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00531d10 mov eax, dword ptr [0x688360] */ { const u32 m_ = (u32)(0x688360u); eax = (u32)(M32(m_)); }
  /* 00531d15 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531d16 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531d18 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00531d1a call dword ptr [0x62e0dc] */ { const u32 m_ = (u32)(0x62e0dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531d20u; SAVEALL; call_ind(c, t_); RETCHK(0x531d20u, 0x531d1au); LOADALL; }
  /* 00531d20 mov edi, eax */ { edi = (u32)(eax); }
  /* 00531d22 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531d24 jne 0x531d38 */ if (!ZF_) goto L_00531d38;
  /* 00531d26 mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 00531d2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531d2c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531d2f call 0x61af31 */ esp -= 4; M32(esp) = 0x531d34u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x531d2fu); RETCHK(0x531d34u, 0x531d2fu); LOADALL;
  /* 00531d34 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531d36 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531d37 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531d38:;
  /* 00531d38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531d39 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531d3b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531d3d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531d3f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00531d41 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531d42 call dword ptr [0x62e0e0] */ { const u32 m_ = (u32)(0x62e0e0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531d48u; SAVEALL; call_ind(c, t_); RETCHK(0x531d48u, 0x531d42u); LOADALL; }
  /* 00531d48 mov esi, eax */ { esi = (u32)(eax); }
  /* 00531d4a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531d4c jne 0x531d68 */ if (!ZF_) goto L_00531d68;
  /* 00531d4e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531d4f call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531d55u; SAVEALL; call_ind(c, t_); RETCHK(0x531d55u, 0x531d4fu); LOADALL; }
  /* 00531d55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531d56 mov eax, 0xfffffffd */ { eax = (u32)(0xfffffffdu); }
  /* 00531d5b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531d5c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531d5f call 0x61af31 */ esp -= 4; M32(esp) = 0x531d64u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x531d5fu); RETCHK(0x531d64u, 0x531d5fu); LOADALL;
  /* 00531d64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531d66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531d67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531d68:;
  /* 00531d68 push 0x688364 */ { u32 v_ = 0x688364u; esp -= 4; M32(esp) = v_; }
  /* 00531d6d lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00531d70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531d71 lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00531d74 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00531d75 push 0x32 */ { u32 v_ = 0x32u; esp -= 4; M32(esp) = v_; }
  /* 00531d77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531d78 call 0x531bb0 */ esp -= 4; M32(esp) = 0x531d7du; SAVEALL; F_00531bb0(c); ABI_CHECK(0x531bb0u, 0x531d78u); RETCHK(0x531d7du, 0x531d78u); LOADALL;
  /* 00531d7d add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531d80 cmp eax, 0x32 */ { u32 a_ = eax, b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531d83 je 0x531da6 */ if (ZF_) goto L_00531da6;
  /* 00531d85 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531d86 call dword ptr [0x62e0e4] */ { const u32 m_ = (u32)(0x62e0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531d8cu; SAVEALL; call_ind(c, t_); RETCHK(0x531d8cu, 0x531d86u); LOADALL; }
  /* 00531d8c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531d8d call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531d93u; SAVEALL; call_ind(c, t_); RETCHK(0x531d93u, 0x531d8du); LOADALL; }
  /* 00531d93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531d94 mov eax, 0xfffffffc */ { eax = (u32)(0xfffffffcu); }
  /* 00531d99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531d9a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531d9d call 0x61af31 */ esp -= 4; M32(esp) = 0x531da2u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x531d9du); RETCHK(0x531da2u, 0x531d9du); LOADALL;
  /* 00531da2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531da4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531da5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531da6:;
  /* 00531da6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00531da8:;
  /* 00531da8 mov al, byte ptr [ebp + ecx - 0x38] */ { const u32 m_ = (u32)(ebp + ecx + 0xffffffc8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00531dac cmp al, 0x30 */ { u32 a_ = (eax & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00531dae jl 0x531e11 */ if (LT_) goto L_00531e11;
  /* 00531db0 cmp al, 0x39 */ { u32 a_ = (eax & 0xffu), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00531db2 jg 0x531e11 */ if (!(ZF_|LT_)) goto L_00531e11;
  /* 00531db4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00531db5 cmp ecx, 0x11 */ { u32 a_ = ecx, b_ = 0x11u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00531db8 jl 0x531da8 */ if (LT_) goto L_00531da8;
  /* 00531dba mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00531dbd mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 00531dc0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00531dc2 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 00531dc4 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 00531dc7 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00531dca mov dl, byte ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00531dcd mov byte ptr [ecx + 8], dl */ { const u32 m_ = (u32)(ecx + 0x8u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00531dd0 mov ecx, dword ptr [ebp - 0x2f] */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); ecx = (u32)(M32(m_)); }
  /* 00531dd3 mov edx, dword ptr [ebp - 0x2b] */ { const u32 m_ = (u32)(ebp + 0xffffffd5u); edx = (u32)(M32(m_)); }
  /* 00531dd6 mov dword ptr [ebx], ecx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(ecx); }
  /* 00531dd8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00531ddb mov dword ptr [ebx + 4], edx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edx); }
  /* 00531dde mov byte ptr [eax + 9], 0 */ { const u32 m_ = (u32)(eax + 0x9u); M8(m_) = (u8)(0x0u); }
  /* 00531de2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00531de5 mov byte ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 00531de9 mov word ptr [eax], 9 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x9u); }
  /* 00531dee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531def mov word ptr [ecx], 8 */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)(0x8u); }
  /* 00531df4 call dword ptr [0x62e0e4] */ { const u32 m_ = (u32)(0x62e0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531dfau; SAVEALL; call_ind(c, t_); RETCHK(0x531dfau, 0x531df4u); LOADALL; }
  /* 00531dfa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531dfb call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531e01u; SAVEALL; call_ind(c, t_); RETCHK(0x531e01u, 0x531dfbu); LOADALL; }
  /* 00531e01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531e02 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531e04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531e05 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531e08 call 0x61af31 */ esp -= 4; M32(esp) = 0x531e0du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x531e08u); RETCHK(0x531e0du, 0x531e08u); LOADALL;
  /* 00531e0d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531e0f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531e10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531e11:;
  /* 00531e11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00531e12 call dword ptr [0x62e0e4] */ { const u32 m_ = (u32)(0x62e0e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531e18u; SAVEALL; call_ind(c, t_); RETCHK(0x531e18u, 0x531e12u); LOADALL; }
  /* 00531e18 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531e19 call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531e1fu; SAVEALL; call_ind(c, t_); RETCHK(0x531e1fu, 0x531e19u); LOADALL; }
  /* 00531e1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00531e20 mov eax, 0xfffffffb */ { eax = (u32)(0xfffffffbu); }
  /* 00531e25 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531e26 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531e29 call 0x61af31 */ esp -= 4; M32(esp) = 0x531e2eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x531e29u); RETCHK(0x531e2eu, 0x531e29u); LOADALL;
  /* 00531e2e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531e30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531e31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00531e32:;
  /* 00531e32 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00531e35 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00531e38 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00531e3b mov word ptr [edx], 9 */ { const u32 m_ = (u32)(edx); M16(m_) = (u16)(0x9u); }
  /* 00531e40 mov word ptr [eax], 8 */ { const u32 m_ = (u32)(eax); M16(m_) = (u16)(0x8u); }
  /* 00531e45 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531e48 call 0x61af31 */ esp -= 4; M32(esp) = 0x531e4du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x531e48u); RETCHK(0x531e4du, 0x531e48u); LOADALL;
  /* 00531e4d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531e4f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531e50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00531e60(CPU *c) {
  NATIVE_HOOK(0x531e60u) REGS; LOADALL;
L_00531e60:;
  /* 00531e60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531e61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531e63 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00531e66 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00531e69 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00531e6b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00531e6d add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00531e70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531e71 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00531e74 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00531e77 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531e78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531e79 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531e7cu; SAVEALL; call_ind(c, t_); RETCHK(0x531e7cu, 0x531e79u); LOADALL; }
  /* 00531e7c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00531e7e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531e80 setl dl */ { edx = (edx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 00531e83 mov eax, edx */ { eax = (u32)(edx); }
  /* 00531e85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531e86 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00531e90(CPU *c) {
  NATIVE_HOOK(0x531e90u) REGS; LOADALL;
L_00531e90:;
  /* 00531e90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00531e91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00531e93 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00531e96 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00531e99 mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 00531e9c test al, 3 */ { u32 a_ = (eax & 0xffu), b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00531e9e je 0x531ee4 */ if (ZF_) goto L_00531ee4;
  /* 00531ea0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00531ea3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00531ea6 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00531ea9 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00531eac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00531ead push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00531eaf mov dword ptr [ebp - 0x18], 0x18 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x18u); }
  /* 00531eb6 mov dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x10u); }
  /* 00531ebd mov dword ptr [ebp - 0xc], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x2u); }
  /* 00531ec4 mov dword ptr [ebp - 8], 0xfffffc18 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0xfffffc18u); }
  /* 00531ecb mov dword ptr [ebp - 4], 0x3e8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3e8u); }
  /* 00531ed2 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00531ed4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00531ed5 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x531ed8u; SAVEALL; call_ind(c, t_); RETCHK(0x531ed8u, 0x531ed5u); LOADALL; }
  /* 00531ed8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00531eda jge 0x531ee4 */ if (!LT_) goto L_00531ee4;
  /* 00531edc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531ede mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531ee0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531ee1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00531ee4:;
  /* 00531ee4 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00531ee9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00531eeb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00531eec ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00531ef0(CPU *c) {
  NATIVE_HOOK(0x531ef0u) REGS; LOADALL;
L_00531ef0:;
  /* 00531ef0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531ef2 mov dword ptr [edx], 0x65340c */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x65340cu); }
  /* 00531ef8 mov dword ptr [edx + 0x148], 0xffffffff */ { const u32 m_ = (u32)(edx + 0x148u); M32(m_) = (u32)(0xffffffffu); }
  /* 00531f02 mov byte ptr [edx + 0xd], 1 */ { const u32 m_ = (u32)(edx + 0xdu); M8(m_) = (u8)(0x1u); }
  /* 00531f06 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00531f07 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00531f09 mov dword ptr [edx + 4], ebx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00531f0c mov dword ptr [edx + 8], ebx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00531f0f mov dword ptr [edx + 0x10], ebx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ebx); }
  /* 00531f12 mov byte ptr [edx + 0xc], bl */ { const u32 m_ = (u32)(edx + 0xcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00531f15 mov byte ptr [edx + 0x4c], bl */ { const u32 m_ = (u32)(edx + 0x4cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00531f18 mov byte ptr [edx + 0x4d], bl */ { const u32 m_ = (u32)(edx + 0x4du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00531f1b mov byte ptr [edx + 0x14c], bl */ { const u32 m_ = (u32)(edx + 0x14cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00531f21 mov dword ptr [edx + 0x50], ebx */ { const u32 m_ = (u32)(edx + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00531f24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00531f25 mov ecx, 0x27 */ { ecx = (u32)(0x27u); }
  /* 00531f2a lea edi, [edx + 0x58] */ edi = (u32)((u32)(edx + 0x58u));
  /* 00531f2d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00531f2f mov ecx, 0xe */ { ecx = (u32)(0xeu); }
  /* 00531f34 lea edi, [edx + 0x14] */ edi = (u32)((u32)(edx + 0x14u));
  /* 00531f37 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00531f39 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00531f3c mov dword ptr [edx + 0xf4], eax */ { const u32 m_ = (u32)(edx + 0xf4u); M32(m_) = (u32)(eax); }
  /* 00531f42 mov dword ptr [edx + 0xf8], eax */ { const u32 m_ = (u32)(edx + 0xf8u); M32(m_) = (u32)(eax); }
  /* 00531f48 mov dword ptr [edx + 0xfc], eax */ { const u32 m_ = (u32)(edx + 0xfcu); M32(m_) = (u32)(eax); }
  /* 00531f4e mov dword ptr [edx + 0x100], eax */ { const u32 m_ = (u32)(edx + 0x100u); M32(m_) = (u32)(eax); }
  /* 00531f54 mov dword ptr [edx + 0x104], eax */ { const u32 m_ = (u32)(edx + 0x104u); M32(m_) = (u32)(eax); }
  /* 00531f5a mov dword ptr [edx + 0x108], eax */ { const u32 m_ = (u32)(edx + 0x108u); M32(m_) = (u32)(eax); }
  /* 00531f60 mov dword ptr [edx + 0x10c], eax */ { const u32 m_ = (u32)(edx + 0x10cu); M32(m_) = (u32)(eax); }
  /* 00531f66 mov dword ptr [edx + 0x110], eax */ { const u32 m_ = (u32)(edx + 0x110u); M32(m_) = (u32)(eax); }
  /* 00531f6c mov dword ptr [edx + 0x114], eax */ { const u32 m_ = (u32)(edx + 0x114u); M32(m_) = (u32)(eax); }
  /* 00531f72 mov dword ptr [edx + 0x118], eax */ { const u32 m_ = (u32)(edx + 0x118u); M32(m_) = (u32)(eax); }
  /* 00531f78 mov dword ptr [edx + 0x11c], eax */ { const u32 m_ = (u32)(edx + 0x11cu); M32(m_) = (u32)(eax); }
  /* 00531f7e mov dword ptr [edx + 0x120], eax */ { const u32 m_ = (u32)(edx + 0x120u); M32(m_) = (u32)(eax); }
  /* 00531f84 mov dword ptr [edx + 0x124], eax */ { const u32 m_ = (u32)(edx + 0x124u); M32(m_) = (u32)(eax); }
  /* 00531f8a mov dword ptr [edx + 0x128], eax */ { const u32 m_ = (u32)(edx + 0x128u); M32(m_) = (u32)(eax); }
  /* 00531f90 mov dword ptr [edx + 0x12c], eax */ { const u32 m_ = (u32)(edx + 0x12cu); M32(m_) = (u32)(eax); }
  /* 00531f96 mov dword ptr [edx + 0x130], eax */ { const u32 m_ = (u32)(edx + 0x130u); M32(m_) = (u32)(eax); }
  /* 00531f9c mov dword ptr [edx + 0x134], eax */ { const u32 m_ = (u32)(edx + 0x134u); M32(m_) = (u32)(eax); }
  /* 00531fa2 mov dword ptr [edx + 0x138], eax */ { const u32 m_ = (u32)(edx + 0x138u); M32(m_) = (u32)(eax); }
  /* 00531fa8 mov dword ptr [edx + 0x13c], eax */ { const u32 m_ = (u32)(edx + 0x13cu); M32(m_) = (u32)(eax); }
  /* 00531fae mov dword ptr [edx + 0x140], eax */ { const u32 m_ = (u32)(edx + 0x140u); M32(m_) = (u32)(eax); }
  /* 00531fb4 mov dword ptr [edx + 0x144], eax */ { const u32 m_ = (u32)(edx + 0x144u); M32(m_) = (u32)(eax); }
  /* 00531fba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00531fbb mov dword ptr [edx + 0x13c], ebx */ { const u32 m_ = (u32)(edx + 0x13cu); M32(m_) = (u32)(ebx); }
  /* 00531fc1 mov dword ptr [edx + 0xf8], 6 */ { const u32 m_ = (u32)(edx + 0xf8u); M32(m_) = (u32)(0x6u); }
  /* 00531fcb mov dword ptr [edx + 0xfc], 5 */ { const u32 m_ = (u32)(edx + 0xfcu); M32(m_) = (u32)(0x5u); }
  /* 00531fd5 mov dword ptr [edx + 0x100], 7 */ { const u32 m_ = (u32)(edx + 0x100u); M32(m_) = (u32)(0x7u); }
  /* 00531fdf mov dword ptr [edx + 0x104], 4 */ { const u32 m_ = (u32)(edx + 0x104u); M32(m_) = (u32)(0x4u); }
  /* 00531fe9 mov dword ptr [edx + 0x108], 8 */ { const u32 m_ = (u32)(edx + 0x108u); M32(m_) = (u32)(0x8u); }
  /* 00531ff3 mov dword ptr [edx + 0x10c], 9 */ { const u32 m_ = (u32)(edx + 0x10cu); M32(m_) = (u32)(0x9u); }
  /* 00531ffd mov dword ptr [edx + 0x118], 0xa */ { const u32 m_ = (u32)(edx + 0x118u); M32(m_) = (u32)(0xau); }
  /* 00532007 mov dword ptr [edx + 0x11c], 0xb */ { const u32 m_ = (u32)(edx + 0x11cu); M32(m_) = (u32)(0xbu); }
  /* 00532011 mov dword ptr [edx + 0x134], 2 */ { const u32 m_ = (u32)(edx + 0x134u); M32(m_) = (u32)(0x2u); }
  /* 0053201b mov dword ptr [edx + 0x138], 3 */ { const u32 m_ = (u32)(edx + 0x138u); M32(m_) = (u32)(0x3u); }
  /* 00532025 mov dword ptr [edx + 0x140], 1 */ { const u32 m_ = (u32)(edx + 0x140u); M32(m_) = (u32)(0x1u); }
  /* 0053202f mov eax, edx */ { eax = (u32)(edx); }
  /* 00532031 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00532032 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00532040(CPU *c) {
  NATIVE_HOOK(0x532040u) REGS; LOADALL;
L_00532040:;
  /* 00532040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532043 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532044 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00532046 call 0x532070 */ esp -= 4; M32(esp) = 0x53204bu; SAVEALL; F_00532070(c); ABI_CHECK(0x532070u, 0x532046u); RETCHK(0x53204bu, 0x532046u); LOADALL;
  /* 0053204b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053204f je 0x53205a */ if (ZF_) goto L_0053205a;
  /* 00532051 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532052 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x532057u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x532052u); RETCHK(0x532057u, 0x532052u); LOADALL;
  /* 00532057 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053205a:;
  /* 0053205a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053205c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053205d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053205e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00532070(CPU *c) {
  NATIVE_HOOK(0x532070u) REGS; LOADALL;
L_00532070:;
  /* 00532070 mov dword ptr [ecx], 0x65340c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x65340cu); }
  /* 00532076 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00532080(CPU *c) {
  NATIVE_HOOK(0x532080u) REGS; LOADALL;
L_00532080:;
  /* 00532080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532083 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532086 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00532089 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053208a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053208b lea edi, [esi + 4] */ edi = (u32)((u32)(esi + 0x4u));
  /* 0053208e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00532090 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532092 jne 0x5320b5 */ if (!ZF_) goto L_005320b5;
  /* 00532094 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00532095 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532096 push 0x62e88c */ { u32 v_ = 0x62e88cu; esp -= 4; M32(esp) = v_; }
  /* 0053209b push 0x800 */ { u32 v_ = 0x800u; esp -= 4; M32(esp) = v_; }
  /* 005320a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005320a1 call dword ptr [0x62e160] */ { const u32 m_ = (u32)(0x62e160u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5320a7u; SAVEALL; call_ind(c, t_); RETCHK(0x5320a7u, 0x5320a1u); LOADALL; }
  /* 005320a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005320a8 call 0x60257c */ esp -= 4; M32(esp) = 0x5320adu; SAVEALL; F_0060257c(c); ABI_CHECK(0x60257cu, 0x5320a8u); RETCHK(0x5320adu, 0x5320a8u); LOADALL;
  /* 005320ad cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005320af jl 0x5322e3 */ if (LT_) goto L_005322e3;
L_005320b5:;
  /* 005320b5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005320b8 mov dword ptr [0x9b9214], eax */ { const u32 m_ = (u32)(0x9b9214u); M32(m_) = (u32)(eax); }
  /* 005320bd mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005320bf push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005320c1 mov dword ptr [0x9b9218], ecx */ { const u32 m_ = (u32)(0x9b9218u); M32(m_) = (u32)(ecx); }
  /* 005320c7 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005320ca push 0x9b9214 */ { u32 v_ = 0x9b9214u; esp -= 4; M32(esp) = v_; }
  /* 005320cf push 0x531e60 */ { u32 v_ = 0x531e60u; esp -= 4; M32(esp) = v_; }
  /* 005320d4 mov dword ptr [0x9b921c], edx */ { const u32 m_ = (u32)(0x9b921cu); M32(m_) = (u32)(edx); }
  /* 005320da mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005320dc mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005320de push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 005320e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005320e1 call dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5320e4u; SAVEALL; call_ind(c, t_); RETCHK(0x5320e4u, 0x5320e1u); LOADALL; }
  /* 005320e4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005320e6 jl 0x5322e3 */ if (LT_) goto L_005322e3;
  /* 005320ec mov eax, dword ptr [0x9b921c] */ { const u32 m_ = (u32)(0x9b921cu); eax = (u32)(M32(m_)); }
  /* 005320f1 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005320f3 jne 0x532130 */ if (!ZF_) goto L_00532130;
  /* 005320f5 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005320f7 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005320f9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005320fb push 0x9b9214 */ { u32 v_ = 0x9b9214u; esp -= 4; M32(esp) = v_; }
  /* 00532100 push 0x531e60 */ { u32 v_ = 0x531e60u; esp -= 4; M32(esp) = v_; }
  /* 00532105 push 0x15 */ { u32 v_ = 0x15u; esp -= 4; M32(esp) = v_; }
  /* 00532107 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532108 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53210bu; SAVEALL; call_ind(c, t_); RETCHK(0x53210bu, 0x532108u); LOADALL; }
  /* 0053210b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053210d jl 0x5322e3 */ if (LT_) goto L_005322e3;
  /* 00532113 mov eax, dword ptr [0x9b921c] */ { const u32 m_ = (u32)(0x9b921cu); eax = (u32)(M32(m_)); }
  /* 00532118 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053211a jne 0x532127 */ if (!ZF_) goto L_00532127;
  /* 0053211c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053211d or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532120 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00532121 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532123 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532124 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00532127:;
  /* 00532127 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0053212e jmp 0x532133 */ goto L_00532133;
L_00532130:;
  /* 00532130 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
L_00532133:;
  /* 00532133 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00532136 mov eax, dword ptr [0x9b921c] */ { const u32 m_ = (u32)(0x9b921cu); eax = (u32)(M32(m_)); }
  /* 0053213b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053213d push 0x63bab4 */ { u32 v_ = 0x63bab4u; esp -= 4; M32(esp) = v_; }
  /* 00532142 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532143 call dword ptr [ecx + 0x2c] */ { const u32 m_ = (u32)(ecx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532146u; SAVEALL; call_ind(c, t_); RETCHK(0x532146u, 0x532143u); LOADALL; }
  /* 00532146 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532148 jl 0x5322e3 */ if (LT_) goto L_005322e3;
  /* 0053214e mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00532150 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532152 push 0x101 */ { u32 v_ = 0x101u; esp -= 4; M32(esp) = v_; }
  /* 00532157 push 0x9b9214 */ { u32 v_ = 0x9b9214u; esp -= 4; M32(esp) = v_; }
  /* 0053215c push 0x531e60 */ { u32 v_ = 0x531e60u; esp -= 4; M32(esp) = v_; }
  /* 00532161 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00532163 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532164 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532167u; SAVEALL; call_ind(c, t_); RETCHK(0x532167u, 0x532164u); LOADALL; }
  /* 00532167 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532169 jge 0x53216e */ if (!LT_) goto L_0053216e;
  /* 0053216b mov byte ptr [esi + 0xd], bl */ { const u32 m_ = (u32)(esi + 0xdu); M8(m_) = (u8)((ebx & 0xffu)); }
L_0053216e:;
  /* 0053216e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00532171 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532174 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00532176 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00532178 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00532179 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053217a call dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53217du; SAVEALL; call_ind(c, t_); RETCHK(0x53217du, 0x53217au); LOADALL; }
  /* 0053217d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053217f jl 0x5322e3 */ if (LT_) goto L_005322e3;
  /* 00532185 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532188 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053218a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053218b push 0x9b9214 */ { u32 v_ = 0x9b9214u; esp -= 4; M32(esp) = v_; }
  /* 00532190 push 0x531e90 */ { u32 v_ = 0x531e90u; esp -= 4; M32(esp) = v_; }
  /* 00532195 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532196 call dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532199u; SAVEALL; call_ind(c, t_); RETCHK(0x532199u, 0x532196u); LOADALL; }
  /* 00532199 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053219b jl 0x5322e3 */ if (LT_) goto L_005322e3;
  /* 005321a1 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005321a4 mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005321a7 mov dword ptr [esi + 0x148], edx */ { const u32 m_ = (u32)(esi + 0x148u); M32(m_) = (u32)(edx); }
  /* 005321ad lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005321b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005321b1 mov byte ptr [esi + 0x14c], al */ { const u32 m_ = (u32)(esi + 0x14cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005321b7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005321ba mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 005321bf push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 005321c1 mov dword ptr [ebp - 0x24], 0x14 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x14u); }
  /* 005321c8 mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 005321cb mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 005321ce mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 005321d1 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005321d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005321d4 call dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5321d7u; SAVEALL; call_ind(c, t_); RETCHK(0x5321d7u, 0x5321d4u); LOADALL; }
  /* 005321d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005321d9 jl 0x5321f0 */ if (LT_) goto L_005321f0;
  /* 005321db mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005321de cmp ax, 0x79 */ { u32 a_ = (eax & 0xffffu), b_ = 0x79u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005321e2 jne 0x5321f0 */ if (!ZF_) goto L_005321f0;
  /* 005321e4 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005321e7 cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005321ea jne 0x5321f0 */ if (!ZF_) goto L_005321f0;
  /* 005321ec mov byte ptr [esi + 0xc], 1 */ { const u32 m_ = (u32)(esi + 0xcu); M8(m_) = (u8)(0x1u); }
L_005321f0:;
  /* 005321f0 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005321f3 lea edx, [ebp - 0x50] */ edx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 005321f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005321f7 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005321f9 mov dword ptr [ebp - 0x50], 0x18 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x18u); }
  /* 00532200 mov dword ptr [ebp - 0x4c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(edi); }
  /* 00532203 mov dword ptr [ebp - 0x48], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ebx); }
  /* 00532206 mov dword ptr [ebp - 0x44], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x1u); }
  /* 0053220d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053220f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532210 call dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532213u; SAVEALL; call_ind(c, t_); RETCHK(0x532213u, 0x532210u); LOADALL; }
  /* 00532213 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532215 jl 0x53222d */ if (LT_) goto L_0053222d;
  /* 00532217 mov ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 0053221a mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0053221d add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053221f cdq */ edx = (u32)((s32)eax >> 31);
  /* 00532220 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00532222 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00532224 mov dword ptr [esi + 0x50], eax */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(eax); }
  /* 00532227 sub ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0053222a mov dword ptr [esi + 0x54], ecx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ecx); }
L_0053222d:;
  /* 0053222d cmp byte ptr [esi + 0xd], bl */ { const u32 m_ = (u32)(esi + 0xdu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00532230 je 0x5322e1 */ if (ZF_) goto L_005322e1;
  /* 00532236 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532239 lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0053223c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053223d push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0053223f mov dword ptr [ebp - 0x38], 0x14 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x14u); }
  /* 00532246 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 00532249 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0053224c mov dword ptr [ebp - 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ebx); }
  /* 0053224f mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 00532252 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00532254 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532255 call dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532258u; SAVEALL; call_ind(c, t_); RETCHK(0x532258u, 0x532255u); LOADALL; }
  /* 00532258 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053225a jl 0x5322d6 */ if (LT_) goto L_005322d6;
  /* 0053225c mov ecx, 0x2710 */ { ecx = (u32)(0x2710u); }
  /* 00532261 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00532264 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00532267 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00532268 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0053226b mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0053226e mov edx, 4 */ { edx = (u32)(0x4u); }
  /* 00532273 lea eax, [esi + 0x14] */ eax = (u32)((u32)(esi + 0x14u));
  /* 00532276 lea edi, [esi + 0x10] */ edi = (u32)((u32)(esi + 0x10u));
  /* 00532279 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053227a mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0053227d lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00532280 mov dword ptr [esi + 0x40], edx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(edx); }
  /* 00532283 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532284 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00532287 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053228a lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0053228d push 0x62e7cc */ { u32 v_ = 0x62e7ccu; esp -= 4; M32(esp) = v_; }
  /* 00532292 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00532295 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00532298 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 0053229b mov dword ptr [eax], 0x38 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x38u); }
  /* 005322a1 mov dword ptr [esi + 0x18], 0x12 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x12u); }
  /* 005322a8 mov dword ptr [esi + 0x1c], 0x493e0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x493e0u); }
  /* 005322af mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 005322b2 mov dword ptr [esi + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 005322b9 mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 005322bc mov dword ptr [esi + 0x30], 2 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x2u); }
  /* 005322c3 mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 005322c6 mov dword ptr [esi + 0x44], edx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edx); }
  /* 005322c9 mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 005322cc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005322ce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005322cf call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5322d2u; SAVEALL; call_ind(c, t_); RETCHK(0x5322d2u, 0x5322cfu); LOADALL; }
  /* 005322d2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005322d4 jge 0x5322e1 */ if (!LT_) goto L_005322e1;
L_005322d6:;
  /* 005322d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005322d7 mov byte ptr [esi + 0xd], bl */ { const u32 m_ = (u32)(esi + 0xdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005322da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005322db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005322dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005322de ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005322e1:;
  /* 005322e1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005322e3:;
  /* 005322e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005322e4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005322e5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005322e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005322e8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005322f0(CPU *c) {
  NATIVE_HOOK(0x5322f0u) REGS; LOADALL;
L_005322f0:;
  /* 005322f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005322f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005322f3 sub esp, 0x144 */ { u32 a_ = esp, b_ = 0x144u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005322f9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005322fe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00532301 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532304 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532306 je 0x53266d */ if (ZF_) goto L_0053266d;
  /* 0053230c cmp dword ptr [esi + 0x148], -1 */ { const u32 m_ = (u32)(esi + 0x148u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532313 je 0x53266d */ if (ZF_) goto L_0053266d;
  /* 00532319 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053231b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053231c call dword ptr [ecx + 0x64] */ { const u32 m_ = (u32)(ecx + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53231fu; SAVEALL; call_ind(c, t_); RETCHK(0x53231fu, 0x53231cu); LOADALL; }
  /* 0053231f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532321 jge 0x532352 */ if (!LT_) goto L_00532352;
  /* 00532323 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532326 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532328 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532329 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53232cu; SAVEALL; call_ind(c, t_); RETCHK(0x53232cu, 0x532329u); LOADALL; }
  /* 0053232c cmp eax, 0x8007001e */ { u32 a_ = eax, b_ = 0x8007001eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532331 jne 0x532343 */ if (!ZF_) goto L_00532343;
L_00532333:;
  /* 00532333 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532336 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00532338 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532339 call dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53233cu; SAVEALL; call_ind(c, t_); RETCHK(0x53233cu, 0x532339u); LOADALL; }
  /* 0053233c cmp eax, 0x8007001e */ { u32 a_ = eax, b_ = 0x8007001eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532341 je 0x532333 */ if (ZF_) goto L_00532333;
L_00532343:;
  /* 00532343 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532346 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00532349 call 0x61af31 */ esp -= 4; M32(esp) = 0x53234eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x532349u); RETCHK(0x53234eu, 0x532349u); LOADALL;
  /* 0053234e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532350 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532351 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00532352:;
  /* 00532352 mov al, byte ptr [esi + 0xd] */ { const u32 m_ = (u32)(esi + 0xdu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532355 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532357 je 0x532385 */ if (ZF_) goto L_00532385;
  /* 00532359 mov al, byte ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053235c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053235e je 0x532371 */ if (ZF_) goto L_00532371;
  /* 00532360 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00532363 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532365 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532367 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532369 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053236a call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53236du; SAVEALL; call_ind(c, t_); RETCHK(0x53236du, 0x53236au); LOADALL; }
  /* 0053236d mov byte ptr [esi + 0x4c], 0 */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)(0x0u); }
L_00532371:;
  /* 00532371 mov al, byte ptr [esi + 0x4d] */ { const u32 m_ = (u32)(esi + 0x4du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532374 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532376 je 0x532385 */ if (ZF_) goto L_00532385;
  /* 00532378 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 0053237b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0053237d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053237e call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532381u; SAVEALL; call_ind(c, t_); RETCHK(0x532381u, 0x53237eu); LOADALL; }
  /* 00532381 mov byte ptr [esi + 0x4d], 0 */ { const u32 m_ = (u32)(esi + 0x4du); M8(m_) = (u8)(0x0u); }
L_00532385:;
  /* 00532385 mov al, byte ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053238b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053238d jne 0x53266d */ if (!ZF_) goto L_0053266d;
  /* 00532393 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532396 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532398 lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 0053239e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053239f push 0x110 */ { u32 v_ = 0x110u; esp -= 4; M32(esp) = v_; }
  /* 005323a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005323a5 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5323a8u; SAVEALL; call_ind(c, t_); RETCHK(0x5323a8u, 0x5323a5u); LOADALL; }
  /* 005323a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005323aa jl 0x53266f */ if (LT_) goto L_0053266f;
  /* 005323b0 mov eax, dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); eax = (u32)(M32(m_)); }
  /* 005323b3 mov ecx, dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); ecx = (u32)(M32(m_)); }
  /* 005323b6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005323b7 mov ebx, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ebx = (u32)(M32(m_)); }
  /* 005323bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005323be mov edi, dword ptr [ebp - 0x110] */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); edi = (u32)(M32(m_)); }
  /* 005323c4 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005323c6 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005323c8 mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 005323cd imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005323cf sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005323d2 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005323d4 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005323d7 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005323d9 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005323db mov dword ptr [ebp - 0x110], edi */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(edi); }
  /* 005323e1 mov dword ptr [ebp - 0x114], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(ebx); }
  /* 005323e7 jge 0x532407 */ if (!LT_) goto L_00532407;
  /* 005323e9 mov eax, 0x99999999 */ { eax = (u32)(0x99999999u); }
  /* 005323ee imul dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); s64 p_ = (s64)(s32)eax * (s32)M32(m_); eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005323f1 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005323f4 mov eax, edx */ { eax = (u32)(edx); }
  /* 005323f6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005323f9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005323fb cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005323fd jle 0x532407 */ if ((ZF_|LT_)) goto L_00532407;
  /* 005323ff xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00532401 mov dword ptr [ebp - 0x110], edi */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(edi); }
L_00532407:;
  /* 00532407 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532409 jge 0x532429 */ if (!LT_) goto L_00532429;
  /* 0053240b mov eax, 0x99999999 */ { eax = (u32)(0x99999999u); }
  /* 00532410 imul dword ptr [esi + 0x54] */ { const u32 m_ = (u32)(esi + 0x54u); s64 p_ = (s64)(s32)eax * (s32)M32(m_); eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00532413 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00532416 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00532418 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0053241b add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0053241d cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053241f jle 0x532429 */ if ((ZF_|LT_)) goto L_00532429;
  /* 00532421 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00532423 mov dword ptr [ebp - 0x114], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(ebx); }
L_00532429:;
  /* 00532429 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0053242b cmp edi, -0xa */ { u32 a_ = edi, b_ = 0xfffffff6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053242e setl dl */ { edx = (edx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 00532431 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532433 cmp edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532436 setg al */ { eax = (eax & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 00532439 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053243b cmp ebx, -0xa */ { u32 a_ = ebx, b_ = 0xfffffff6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053243e setl cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 00532441 mov dword ptr [ebp - 0x144], edx */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M32(m_) = (u32)(edx); }
  /* 00532447 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00532449 cmp ebx, 0xa */ { u32 a_ = ebx, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053244c setg dl */ { edx = (edx & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 0053244f mov dword ptr [ebp - 0x140], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(eax); }
  /* 00532455 mov al, byte ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532458 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053245a mov dword ptr [ebp - 0x13c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(ecx); }
  /* 00532460 mov dword ptr [ebp - 0x138], edx */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(edx); }
  /* 00532466 je 0x5324cb */ if (ZF_) goto L_005324cb;
  /* 00532468 mov eax, dword ptr [ebp - 0xf4] */ { const u32 m_ = (u32)(ebp + 0xffffff0cu); eax = (u32)(M32(m_)); }
  /* 0053246e mov edx, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); edx = (u32)(M32(m_)); }
  /* 00532474 mov ebx, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); ebx = (u32)(M32(m_)); }
  /* 0053247a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053247c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053247e sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00532481 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00532483 mov dword ptr [ebp - 0x144], edx */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M32(m_) = (u32)(edx); }
  /* 00532489 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0053248b cmp eax, 0x4650 */ { u32 a_ = eax, b_ = 0x4650u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532490 sete dl */ { edx = (edx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00532493 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00532495 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00532497 mov edx, dword ptr [ebp - 0x13c] */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); edx = (u32)(M32(m_)); }
  /* 0053249d cmp eax, 0x6978 */ { u32 a_ = eax, b_ = 0x6978u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005324a2 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 005324a5 mov dword ptr [ebp - 0x140], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(ebx); }
  /* 005324ab add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005324ad mov dword ptr [ebp - 0x13c], edx */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(edx); }
  /* 005324b3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005324b5 cmp eax, 0x2328 */ { u32 a_ = eax, b_ = 0x2328u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005324ba mov eax, dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); eax = (u32)(M32(m_)); }
  /* 005324c0 sete dl */ { edx = (edx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 005324c3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005324c5 mov dword ptr [ebp - 0x138], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(eax); }
L_005324cb:;
  /* 005324cb mov eax, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); eax = (u32)(M32(m_)); }
  /* 005324d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005324d3 jne 0x53257b */ if (!ZF_) goto L_0053257b;
  /* 005324d9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005324db mov al, byte ptr [ebp - 0xe4] */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005324e1 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005324e3 mov cl, byte ptr [ebp - 0xe3] */ { const u32 m_ = (u32)(ebp + 0xffffff1du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005324e9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005324eb mov dl, byte ptr [ebp - 0xe2] */ { const u32 m_ = (u32)(ebp + 0xffffff1eu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005324f1 and eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005324f6 mov dword ptr [ebp - 0x134], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(eax); }
  /* 005324fc and ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00532502 mov dword ptr [ebp - 0x130], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M32(m_) = (u32)(ecx); }
  /* 00532508 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053250a mov al, byte ptr [ebp - 0xe1] */ { const u32 m_ = (u32)(ebp + 0xffffff1fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532510 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00532512 mov cl, byte ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532518 and edx, 0x80 */ { u32 a_ = edx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0053251e mov dword ptr [ebp - 0x12c], edx */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(edx); }
  /* 00532524 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00532526 mov dl, byte ptr [ebp - 0xdf] */ { const u32 m_ = (u32)(ebp + 0xffffff21u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053252c and eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532531 mov dword ptr [ebp - 0x128], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(eax); }
  /* 00532537 and ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053253d mov dword ptr [ebp - 0x124], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); M32(m_) = (u32)(ecx); }
  /* 00532543 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532545 mov al, byte ptr [ebp - 0xdc] */ { const u32 m_ = (u32)(ebp + 0xffffff24u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053254b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053254d mov cl, byte ptr [ebp - 0xdb] */ { const u32 m_ = (u32)(ebp + 0xffffff25u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532553 and edx, 0x80 */ { u32 a_ = edx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00532559 mov dword ptr [ebp - 0x120], edx */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M32(m_) = (u32)(edx); }
  /* 0053255f and eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532564 mov dword ptr [ebp - 0x11c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(eax); }
  /* 0053256a and ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00532570 mov dword ptr [ebp - 0x118], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M32(m_) = (u32)(ecx); }
  /* 00532576 jmp 0x532621 */ goto L_00532621;
L_0053257b:;
  /* 0053257b cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053257e jne 0x532621 */ if (!ZF_) goto L_00532621;
  /* 00532584 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00532586 mov dl, byte ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053258c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053258e mov al, byte ptr [ebp - 0xe3] */ { const u32 m_ = (u32)(ebp + 0xffffff1du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532594 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00532596 mov cl, byte ptr [ebp - 0xe4] */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053259c and edx, 0x80 */ { u32 a_ = edx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005325a2 mov dword ptr [ebp - 0x134], edx */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(edx); }
  /* 005325a8 and eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005325ad mov dword ptr [ebp - 0x130], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M32(m_) = (u32)(eax); }
  /* 005325b3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005325b5 mov dl, byte ptr [ebp - 0xe1] */ { const u32 m_ = (u32)(ebp + 0xffffff1fu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005325bb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005325bd mov al, byte ptr [ebp - 0xde] */ { const u32 m_ = (u32)(ebp + 0xffffff22u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005325c3 and ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005325c9 mov dword ptr [ebp - 0x12c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(ecx); }
  /* 005325cf xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005325d1 mov cl, byte ptr [ebp - 0xdd] */ { const u32 m_ = (u32)(ebp + 0xffffff23u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005325d7 and edx, 0x80 */ { u32 a_ = edx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005325dd mov dword ptr [ebp - 0x128], edx */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(edx); }
  /* 005325e3 and eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005325e8 mov dword ptr [ebp - 0x124], eax */ { const u32 m_ = (u32)(ebp + 0xfffffedcu); M32(m_) = (u32)(eax); }
  /* 005325ee xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005325f0 mov dl, byte ptr [ebp - 0xdc] */ { const u32 m_ = (u32)(ebp + 0xffffff24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005325f6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005325f8 mov al, byte ptr [ebp - 0xdb] */ { const u32 m_ = (u32)(ebp + 0xffffff25u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005325fe and ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00532604 mov dword ptr [ebp - 0x120], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M32(m_) = (u32)(ecx); }
  /* 0053260a and edx, 0x80 */ { u32 a_ = edx, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00532610 mov dword ptr [ebp - 0x11c], edx */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(edx); }
  /* 00532616 and eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053261b mov dword ptr [ebp - 0x118], eax */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M32(m_) = (u32)(eax); }
L_00532621:;
  /* 00532621 mov edi, 0xc */ { edi = (u32)(0xcu); }
  /* 00532626 lea eax, [esi + 0xe8] */ eax = (u32)((u32)(esi + 0xe8u));
  /* 0053262c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00532630:;
  /* 00532630 mov ecx, dword ptr [ebp + edi*4 - 0x148] */ { const u32 m_ = (u32)(ebp + edi * 4u + 0xfffffeb8u); ecx = (u32)(M32(m_)); }
  /* 00532637 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00532638 sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053263b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053263d je 0x53264b */ if (ZF_) goto L_0053264b;
  /* 0053263f cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532642 jne 0x53264b */ if (!ZF_) goto L_0053264b;
  /* 00532644 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 00532649 jmp 0x53264d */ goto L_0053264d;
L_0053264b:;
  /* 0053264b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0053264d:;
  /* 0053264d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053264f mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 00532652 jne 0x532660 */ if (!ZF_) goto L_00532660;
  /* 00532654 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532657 je 0x532660 */ if (ZF_) goto L_00532660;
  /* 00532659 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 0053265e jmp 0x532662 */ goto L_00532662;
L_00532660:;
  /* 00532660 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_00532662:;
  /* 00532662 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532664 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00532667 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00532669 jg 0x532630 */ if (!(ZF_|LT_)) goto L_00532630;
  /* 0053266b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053266c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0053266d:;
  /* 0053266d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053266f:;
  /* 0053266f mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00532672 call 0x61af31 */ esp -= 4; M32(esp) = 0x532677u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x532672u); RETCHK(0x532677u, 0x532672u); LOADALL;
  /* 00532677 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532679 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053267a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00532680(CPU *c) {
  NATIVE_HOOK(0x532680u) REGS; LOADALL;
L_00532680:;
  /* 00532680 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532683 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532685 je 0x53268d */ if (ZF_) goto L_0053268d;
  /* 00532687 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00532689 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053268a call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53268du; SAVEALL; call_ind(c, t_); RETCHK(0x53268du, 0x53268au); LOADALL; }
L_0053268d:;
  /* 0053268d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532690 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532692 je 0x5326a1 */ if (ZF_) goto L_005326a1;
  /* 00532694 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532696 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532697 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53269au; SAVEALL; call_ind(c, t_); RETCHK(0x53269au, 0x532697u); LOADALL; }
  /* 0053269a mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
L_005326a1:;
  /* 005326a1 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005326a4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005326a6 je 0x5326b5 */ if (ZF_) goto L_005326b5;
  /* 005326a8 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005326aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005326ab call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5326aeu; SAVEALL; call_ind(c, t_); RETCHK(0x5326aeu, 0x5326abu); LOADALL; }
  /* 005326ae mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_005326b5:;
  /* 005326b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005326c0(CPU *c) {
  NATIVE_HOOK(0x5326c0u) REGS; LOADALL;
L_005326c0:;
  /* 005326c0 mov eax, dword ptr [edx + eax*4 + 0xf4] */ { const u32 m_ = (u32)(edx + eax * 4u + 0xf4u); eax = (u32)(M32(m_)); }
  /* 005326c7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005326c9 jl 0x5326ef */ if (LT_) goto L_005326ef;
  /* 005326cb cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005326ce jge 0x5326ef */ if (!LT_) goto L_005326ef;
  /* 005326d0 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 005326d3 lea ecx, [edx + ecx*4] */ ecx = (u32)((u32)(edx + ecx * 4u));
  /* 005326d6 lea eax, [eax + eax*2 + 0x18] */ eax = (u32)((u32)(eax + eax * 2u + 0x18u));
  /* 005326da mov dword ptr [ecx + 0x5c], 1 */ { const u32 m_ = (u32)(ecx + 0x5cu); M32(m_) = (u32)(0x1u); }
  /* 005326e1 mov dword ptr [edx + eax*4], 0 */ { const u32 m_ = (u32)(edx + eax * 4u); M32(m_) = (u32)(0x0u); }
  /* 005326e8 mov dword ptr [ecx + 0x58], 1 */ { const u32 m_ = (u32)(ecx + 0x58u); M32(m_) = (u32)(0x1u); }
L_005326ef:;
  /* 005326ef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005326f0(CPU *c) {
  NATIVE_HOOK(0x5326f0u) REGS; LOADALL;
L_005326f0:;
  /* 005326f0 mov eax, dword ptr [edx + eax*4 + 0xf4] */ { const u32 m_ = (u32)(edx + eax * 4u + 0xf4u); eax = (u32)(M32(m_)); }
  /* 005326f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005326f9 jl 0x53271f */ if (LT_) goto L_0053271f;
  /* 005326fb cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005326fe jge 0x53271f */ if (!LT_) goto L_0053271f;
  /* 00532700 lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 00532703 lea ecx, [edx + ecx*4] */ ecx = (u32)((u32)(edx + ecx * 4u));
  /* 00532706 lea eax, [eax + eax*2 + 0x18] */ eax = (u32)((u32)(eax + eax * 2u + 0x18u));
  /* 0053270a mov dword ptr [ecx + 0x5c], 0 */ { const u32 m_ = (u32)(ecx + 0x5cu); M32(m_) = (u32)(0x0u); }
  /* 00532711 mov dword ptr [edx + eax*4], 1 */ { const u32 m_ = (u32)(edx + eax * 4u); M32(m_) = (u32)(0x1u); }
  /* 00532718 mov dword ptr [ecx + 0x58], 0 */ { const u32 m_ = (u32)(ecx + 0x58u); M32(m_) = (u32)(0x0u); }
L_0053271f:;
  /* 0053271f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00532720(CPU *c) {
  NATIVE_HOOK(0x532720u) REGS; LOADALL;
L_00532720:;
  /* 00532720 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532721 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532723 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532726 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532729 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053272a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053272c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053272e je 0x5327d4 */ if (ZF_) goto L_005327d4;
  /* 00532734 cmp dword ptr [esi + 0x148], -1 */ { const u32 m_ = (u32)(esi + 0x148u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053273b je 0x5327d4 */ if (ZF_) goto L_005327d4;
  /* 00532741 cmp byte ptr [esi + 0xd], bl */ { const u32 m_ = (u32)(esi + 0xdu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00532744 je 0x5327d4 */ if (ZF_) goto L_005327d4;
  /* 0053274a fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0053274d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532750 fmul dword ptr [0x656ddc] */ { const u32 m_ = (u32)(0x656ddcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00532756 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532757 lea edi, [esi + 0x14] */ edi = (u32)((u32)(esi + 0x14u));
  /* 0053275a mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 0053275d mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00532764 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00532767 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 0053276a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053276d mov dword ptr [edi], 0x38 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x38u); }
  /* 00532773 mov dword ptr [esi + 0x18], 0x12 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x12u); }
  /* 0053277a call 0x61b154 */ esp -= 4; M32(esp) = 0x53277fu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x53277au); RETCHK(0x53277fu, 0x53277au); LOADALL;
  /* 0053277f mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00532782 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00532785 push 0x101 */ { u32 v_ = 0x101u; esp -= 4; M32(esp) = v_; }
  /* 0053278a mov dword ptr [esi + 0x44], eax */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(eax); }
  /* 0053278d mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00532790 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00532793 lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00532796 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532797 mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0053279a mov dword ptr [esi + 0x24], 0x2710 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x2710u); }
  /* 005327a1 mov dword ptr [esi + 0x28], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0xffffffffu); }
  /* 005327a8 mov dword ptr [esi + 0x2c], ebx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ebx); }
  /* 005327ab mov dword ptr [esi + 0x30], 2 */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(0x2u); }
  /* 005327b2 mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005327b5 mov dword ptr [esi + 0x38], edx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(edx); }
  /* 005327b8 mov dword ptr [esi + 0x3c], ebx */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(ebx); }
  /* 005327bb mov dword ptr [esi + 0x40], 4 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x4u); }
  /* 005327c2 mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 005327c5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005327c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005327c8 call dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5327cbu; SAVEALL; call_ind(c, t_); RETCHK(0x5327cbu, 0x5327c8u); LOADALL; }
  /* 005327cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005327cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005327ce jl 0x5327d4 */ if (LT_) goto L_005327d4;
  /* 005327d0 mov byte ptr [esi + 0x4c], 1 */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)(0x1u); }
L_005327d4:;
  /* 005327d4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005327d5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005327d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005327d8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005327e0(CPU *c) {
  NATIVE_HOOK(0x5327e0u) REGS; LOADALL;
L_005327e0:;
  /* 005327e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005327e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005327e3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005327e9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005327eb push 0x620048 */ { u32 v_ = 0x620048u; esp -= 4; M32(esp) = v_; }
  /* 005327f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005327f1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005327f4 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005327fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005327fc mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005327ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532800 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532801 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532802 call 0x50d810 */ esp -= 4; M32(esp) = 0x532807u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x532802u); RETCHK(0x532807u, 0x532802u); LOADALL;
  /* 00532807 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00532809 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0053280b mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0053280e push 0x653558 */ { u32 v_ = 0x653558u; esp -= 4; M32(esp) = v_; }
  /* 00532813 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00532816 mov dword ptr [esi], 0x653410 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653410u); }
  /* 0053281c call 0x404420 */ esp -= 4; M32(esp) = 0x532821u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53281cu); RETCHK(0x532821u, 0x53281cu); LOADALL;
  /* 00532821 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00532824 mov dword ptr [esi + 0x1d8], edi */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(edi); }
  /* 0053282a mov dword ptr [esi + 0x1bc], edi */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(edi); }
  /* 00532830 mov dword ptr [esi + 0x1c0], edi */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(edi); }
  /* 00532836 mov dword ptr [esi + 0x1c4], edi */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(edi); }
  /* 0053283c mov dword ptr [esi + 0x1dc], edi */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(edi); }
  /* 00532842 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00532843 mov eax, esi */ { eax = (u32)(esi); }
  /* 00532845 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0053284c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053284d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053284f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532850 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00532860(CPU *c) {
  NATIVE_HOOK(0x532860u) REGS; LOADALL;
L_00532860:;
  /* 00532860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532863 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532864 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00532866 call 0x532890 */ esp -= 4; M32(esp) = 0x53286bu; SAVEALL; F_00532890(c); ABI_CHECK(0x532890u, 0x532866u); RETCHK(0x53286bu, 0x532866u); LOADALL;
  /* 0053286b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053286f je 0x53287a */ if (ZF_) goto L_0053287a;
  /* 00532871 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532872 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x532877u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x532872u); RETCHK(0x532877u, 0x532872u); LOADALL;
  /* 00532877 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053287a:;
  /* 0053287a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053287c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053287d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053287e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00532890(CPU *c) {
  NATIVE_HOOK(0x532890u) REGS; LOADALL;
L_00532890:;
  /* 00532890 mov dword ptr [ecx], 0x653410 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x653410u); }
  /* 00532896 jmp 0x50d8e0 */ SAVEALL; F_0050d8e0(c); return;
}

void F_005328a0(CPU *c) {
  NATIVE_HOOK(0x5328a0u) REGS; LOADALL;
L_005328a0:;
  /* 005328a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005328a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005328a3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005328a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005328a7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005328a9 mov eax, dword ptr [ebx + 0x1bc] */ { const u32 m_ = (u32)(ebx + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 005328af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005328b0 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005328b2 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005328b4 jne 0x5328e1 */ if (!ZF_) goto L_005328e1;
  /* 005328b6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005328b8 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5328bdu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5328b8u); RETCHK(0x5328bdu, 0x5328b8u); LOADALL;
  /* 005328bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005328c0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005328c2 je 0x5328cf */ if (ZF_) goto L_005328cf;
  /* 005328c4 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 005328ca mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 005328cd jmp 0x5328d1 */ goto L_005328d1;
L_005328cf:;
  /* 005328cf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005328d1:;
  /* 005328d1 mov ecx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005328d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005328d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005328d6 mov dword ptr [ebx + 0x1bc], eax */ { const u32 m_ = (u32)(ebx + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 005328dc call 0x529310 */ esp -= 4; M32(esp) = 0x5328e1u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x5328dcu); RETCHK(0x5328e1u, 0x5328dcu); LOADALL;
L_005328e1:;
  /* 005328e1 cmp dword ptr [ebx + 0x1c0], esi */ { const u32 m_ = (u32)(ebx + 0x1c0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005328e7 jne 0x532914 */ if (!ZF_) goto L_00532914;
  /* 005328e9 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005328eb call 0x5fe934 */ esp -= 4; M32(esp) = 0x5328f0u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5328ebu); RETCHK(0x5328f0u, 0x5328ebu); LOADALL;
  /* 005328f0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005328f3 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005328f5 je 0x532902 */ if (ZF_) goto L_00532902;
  /* 005328f7 mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 005328fd mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 00532900 jmp 0x532904 */ goto L_00532904;
L_00532902:;
  /* 00532902 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00532904:;
  /* 00532904 mov edx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); edx = (u32)(M32(m_)); }
  /* 00532907 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532908 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00532909 mov dword ptr [ebx + 0x1c0], eax */ { const u32 m_ = (u32)(ebx + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 0053290f call 0x529310 */ esp -= 4; M32(esp) = 0x532914u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x53290fu); RETCHK(0x532914u, 0x53290fu); LOADALL;
L_00532914:;
  /* 00532914 cmp dword ptr [ebx + 0x1c4], esi */ { const u32 m_ = (u32)(ebx + 0x1c4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053291a jne 0x532947 */ if (!ZF_) goto L_00532947;
  /* 0053291c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0053291e call 0x5fe934 */ esp -= 4; M32(esp) = 0x532923u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53291eu); RETCHK(0x532923u, 0x53291eu); LOADALL;
  /* 00532923 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532926 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532928 je 0x532935 */ if (ZF_) goto L_00532935;
  /* 0053292a mov dword ptr [eax], 0x64d178 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64d178u); }
  /* 00532930 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 00532933 jmp 0x532937 */ goto L_00532937;
L_00532935:;
  /* 00532935 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00532937:;
  /* 00532937 mov ecx, dword ptr [ebp + 0x28] */ { const u32 m_ = (u32)(ebp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0053293a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053293b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053293c mov dword ptr [ebx + 0x1c4], eax */ { const u32 m_ = (u32)(ebx + 0x1c4u); M32(m_) = (u32)(eax); }
  /* 00532942 call 0x529310 */ esp -= 4; M32(esp) = 0x532947u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x532942u); RETCHK(0x532947u, 0x532942u); LOADALL;
L_00532947:;
  /* 00532947 mov edx, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0053294a lea ecx, [ebx + 0x1c8] */ ecx = (u32)((u32)(ebx + 0x1c8u));
  /* 00532950 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00532953 call 0x52cee0 */ esp -= 4; M32(esp) = 0x532958u; SAVEALL; F_0052cee0(c); ABI_CHECK(0x52cee0u, 0x532953u); RETCHK(0x532958u, 0x532953u); LOADALL;
  /* 00532958 mov edx, dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); edx = (u32)(M32(m_)); }
  /* 0053295b mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0053295e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053295f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532960 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532963 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00532966 mov eax, esp */ { eax = (u32)(esp); }
  /* 00532968 mov dword ptr [ebx + 0x1dc], esi */ { const u32 m_ = (u32)(ebx + 0x1dcu); M32(m_) = (u32)(esi); }
  /* 0053296e mov dword ptr [ebp + 0x20], esp */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(esp); }
  /* 00532971 call 0x52cea0 */ esp -= 4; M32(esp) = 0x532976u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x532971u); RETCHK(0x532976u, 0x532971u); LOADALL;
  /* 00532976 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532979 call 0x50da30 */ esp -= 4; M32(esp) = 0x53297eu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x532979u); RETCHK(0x53297eu, 0x532979u); LOADALL;
  /* 0053297e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053297f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00532980 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532982 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532983 ret 0x2c */ c->popped = M32(esp); esp += 48u; SAVEALL; return;
}

void F_00532990(CPU *c) {
  NATIVE_HOOK(0x532990u) REGS; LOADALL;
L_00532990:;
  /* 00532990 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532991 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532993 mov dword ptr [ecx + 0x1d8], eax */ { const u32 m_ = (u32)(ecx + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 00532999 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053299a jmp 0x5145e0 */ SAVEALL; F_005145e0(c); return;
}

void F_005329a0(CPU *c) {
  NATIVE_HOOK(0x5329a0u) REGS; LOADALL;
L_005329a0:;
  /* 005329a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005329a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005329a3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005329a6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005329a7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005329a9 call 0x50de80 */ esp -= 4; M32(esp) = 0x5329aeu; SAVEALL; F_0050de80(c); ABI_CHECK(0x50de80u, 0x5329a9u); RETCHK(0x5329aeu, 0x5329a9u); LOADALL;
  /* 005329ae mov eax, dword ptr [ebx + 0x198] */ { const u32 m_ = (u32)(ebx + 0x198u); eax = (u32)(M32(m_)); }
  /* 005329b4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005329b6 je 0x532aeb */ if (ZF_) goto L_00532aeb;
  /* 005329bc mov eax, dword ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 005329c2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005329c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005329c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005329c6 je 0x532a23 */ if (ZF_) goto L_00532a23;
  /* 005329c8 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 005329cb mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 005329ce cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005329d0 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005329d3 je 0x532a23 */ if (ZF_) goto L_00532a23;
L_005329d5:;
  /* 005329d5 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 005329d7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005329d9 je 0x532a1f */ if (ZF_) goto L_00532a1f;
  /* 005329db mov eax, dword ptr [esi + 0x338] */ { const u32 m_ = (u32)(esi + 0x338u); eax = (u32)(M32(m_)); }
  /* 005329e1 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005329e3 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 005329e6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005329e8 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 005329eb mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 005329ee call 0x4019a0 */ esp -= 4; M32(esp) = 0x5329f3u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5329eeu); RETCHK(0x5329f3u, 0x5329eeu); LOADALL;
  /* 005329f3 mov cl, byte ptr [eax + 0xb30] */ { const u32 m_ = (u32)(eax + 0xb30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005329f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005329fc test cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005329ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532a01 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00532a04 je 0x532a0e */ if (ZF_) goto L_00532a0e;
  /* 00532a06 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00532a09 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532a0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532a0c jmp 0x532a12 */ goto L_00532a12;
L_00532a0e:;
  /* 00532a0e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532a10 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
L_00532a12:;
  /* 00532a12 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00532a14 call 0x532d20 */ esp -= 4; M32(esp) = 0x532a19u; SAVEALL; F_00532d20(c); ABI_CHECK(0x532d20u, 0x532a14u); RETCHK(0x532a19u, 0x532a14u); LOADALL;
  /* 00532a19 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00532a1c add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_00532a1f:;
  /* 00532a1f cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532a21 jne 0x5329d5 */ if (!ZF_) goto L_005329d5;
L_00532a23:;
  /* 00532a23 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532a25 call 0x4019a0 */ esp -= 4; M32(esp) = 0x532a2au; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x532a25u); RETCHK(0x532a2au, 0x532a25u); LOADALL;
  /* 00532a2a mov edi, eax */ { edi = (u32)(eax); }
  /* 00532a2c mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00532a32 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532a35 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532a37 je 0x532a69 */ if (ZF_) goto L_00532a69;
  /* 00532a39 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00532a3f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532a41 je 0x532a4c */ if (ZF_) goto L_00532a4c;
  /* 00532a43 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00532a45 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532a47 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532a4au; SAVEALL; call_ind(c, t_); RETCHK(0x532a4au, 0x532a47u); LOADALL; }
  /* 00532a4a jmp 0x532a4f */ goto L_00532a4f;
L_00532a4c:;
  /* 00532a4c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00532a4f:;
  /* 00532a4f mov esi, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 00532a55 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532a57 jne 0x532a5f */ if (!ZF_) goto L_00532a5f;
  /* 00532a59 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532a5b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00532a5d jmp 0x532a6b */ goto L_00532a6b;
L_00532a5f:;
  /* 00532a5f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532a60 call 0x55ead0 */ esp -= 4; M32(esp) = 0x532a65u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x532a60u); RETCHK(0x532a65u, 0x532a60u); LOADALL;
  /* 00532a65 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00532a67 jmp 0x532a6b */ goto L_00532a6b;
L_00532a69:;
  /* 00532a69 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00532a6b:;
  /* 00532a6b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532a6d mov eax, dword ptr [edi + 0xc1c] */ { const u32 m_ = (u32)(edi + 0xc1cu); eax = (u32)(M32(m_)); }
  /* 00532a73 je 0x532aae */ if (ZF_) goto L_00532aae;
  /* 00532a75 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532a77 je 0x532aae */ if (ZF_) goto L_00532aae;
  /* 00532a79 mov eax, dword ptr [eax + 0x564] */ { const u32 m_ = (u32)(eax + 0x564u); eax = (u32)(M32(m_)); }
  /* 00532a7f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532a81 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532a84 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00532a87 test byte ptr [edi + 0xb30], 2 */ { const u32 m_ = (u32)(edi + 0xb30u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532a8e mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 00532a91 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00532a93 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532a95 je 0x532aa2 */ if (ZF_) goto L_00532aa2;
  /* 00532a97 mov ecx, dword ptr [ecx + 0xb5c] */ { const u32 m_ = (u32)(ecx + 0xb5cu); ecx = (u32)(M32(m_)); }
  /* 00532a9d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532a9f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00532aa0 jmp 0x532aa6 */ goto L_00532aa6;
L_00532aa2:;
  /* 00532aa2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532aa4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
L_00532aa6:;
  /* 00532aa6 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00532aa9 call 0x532d20 */ esp -= 4; M32(esp) = 0x532aaeu; SAVEALL; F_00532d20(c); ABI_CHECK(0x532d20u, 0x532aa9u); RETCHK(0x532aaeu, 0x532aa9u); LOADALL;
L_00532aae:;
  /* 00532aae mov eax, dword ptr [ebx + 0x1dc] */ { const u32 m_ = (u32)(ebx + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 00532ab4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532ab6 je 0x532ae9 */ if (ZF_) goto L_00532ae9;
  /* 00532ab8 add eax, 0x118 */ { u32 a_ = eax, b_ = 0x118u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00532abd mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00532abf mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00532ac2 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 00532ac5 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 00532ac8 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00532acb mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00532ace push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532ad0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00532ad2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532ad4 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00532ad7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532ad9 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00532adc mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00532ade mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00532ae1 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00532ae4 call 0x532d20 */ esp -= 4; M32(esp) = 0x532ae9u; SAVEALL; F_00532d20(c); ABI_CHECK(0x532d20u, 0x532ae4u); RETCHK(0x532ae9u, 0x532ae4u); LOADALL;
L_00532ae9:;
  /* 00532ae9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00532aea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00532aeb:;
  /* 00532aeb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00532aec mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532aee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532aef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00532af0(CPU *c) {
  NATIVE_HOOK(0x532af0u) REGS; LOADALL;
L_00532af0:;
  /* 00532af0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532af1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00532af3 call 0x50e140 */ esp -= 4; M32(esp) = 0x532af8u; SAVEALL; F_0050e140(c); ABI_CHECK(0x50e140u, 0x532af3u); RETCHK(0x532af8u, 0x532af3u); LOADALL;
  /* 00532af8 mov ecx, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 00532afe test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532b00 je 0x532b12 */ if (ZF_) goto L_00532b12;
  /* 00532b02 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00532b04 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532b06 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532b08u; SAVEALL; call_ind(c, t_); RETCHK(0x532b08u, 0x532b06u); LOADALL; }
  /* 00532b08 mov dword ptr [esi + 0x1bc], 0 */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(0x0u); }
L_00532b12:;
  /* 00532b12 mov ecx, dword ptr [esi + 0x1c0] */ { const u32 m_ = (u32)(esi + 0x1c0u); ecx = (u32)(M32(m_)); }
  /* 00532b18 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532b1a je 0x532b2c */ if (ZF_) goto L_00532b2c;
  /* 00532b1c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00532b1e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532b20 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532b22u; SAVEALL; call_ind(c, t_); RETCHK(0x532b22u, 0x532b20u); LOADALL; }
  /* 00532b22 mov dword ptr [esi + 0x1c0], 0 */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(0x0u); }
L_00532b2c:;
  /* 00532b2c mov ecx, dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); ecx = (u32)(M32(m_)); }
  /* 00532b32 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532b34 je 0x532b46 */ if (ZF_) goto L_00532b46;
  /* 00532b36 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00532b38 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00532b3a call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532b3cu; SAVEALL; call_ind(c, t_); RETCHK(0x532b3cu, 0x532b3au); LOADALL; }
  /* 00532b3c mov dword ptr [esi + 0x1c4], 0 */ { const u32 m_ = (u32)(esi + 0x1c4u); M32(m_) = (u32)(0x0u); }
L_00532b46:;
  /* 00532b46 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00532b47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00532b50(CPU *c) {
  NATIVE_HOOK(0x532b50u) REGS; LOADALL;
L_00532b50:;
  /* 00532b50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532b51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532b53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00532b55 push 0x624158 */ { u32 v_ = 0x624158u; esp -= 4; M32(esp) = v_; }
  /* 00532b5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00532b60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532b61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00532b68 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532b6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00532b6c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00532b6e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00532b71 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532b73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00532b74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532b75 jne 0x532b8c */ if (!ZF_) goto L_00532b8c;
  /* 00532b77 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00532b79 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00532b7c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00532b83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00532b84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00532b85 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00532b86 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532b88 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532b89 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00532b8c:;
  /* 00532b8c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00532b8e call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x532b91u; SAVEALL; call_ind(c, t_); RETCHK(0x532b91u, 0x532b8eu); LOADALL; }
  /* 00532b91 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 00532b96 mov edi, eax */ { edi = (u32)(eax); }
  /* 00532b98 call 0x560fd0 */ esp -= 4; M32(esp) = 0x532b9du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x532b98u); RETCHK(0x532b9du, 0x532b98u); LOADALL;
  /* 00532b9d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00532ba0 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00532ba3 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 00532ba8 mov eax, edi */ { eax = (u32)(edi); }
  /* 00532baa fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532bad call 0x560fd0 */ esp -= 4; M32(esp) = 0x532bb2u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x532badu); RETCHK(0x532bb2u, 0x532badu); LOADALL;
  /* 00532bb2 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00532bb5 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00532bb8 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00532bbd mov eax, edi */ { eax = (u32)(edi); }
  /* 00532bbf fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532bc2 call 0x560fd0 */ esp -= 4; M32(esp) = 0x532bc7u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x532bc2u); RETCHK(0x532bc7u, 0x532bc2u); LOADALL;
  /* 00532bc7 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00532bca fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00532bcd push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00532bd2 mov eax, edi */ { eax = (u32)(edi); }
  /* 00532bd4 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00532bd7 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532bda call 0x560fd0 */ esp -= 4; M32(esp) = 0x532bdfu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x532bdau); RETCHK(0x532bdfu, 0x532bdau); LOADALL;
  /* 00532bdf mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00532be2 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00532be5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532be6 mov eax, 0x653550 */ { eax = (u32)(0x653550u); }
  /* 00532beb fadd dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00532bee fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532bf1 call 0x560ed0 */ esp -= 4; M32(esp) = 0x532bf6u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532bf1u); RETCHK(0x532bf6u, 0x532bf1u); LOADALL;
  /* 00532bf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532bf7 call 0x5fea82 */ esp -= 4; M32(esp) = 0x532bfcu; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x532bf7u); RETCHK(0x532bfcu, 0x532bf7u); LOADALL;
  /* 00532bfc fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532bff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532c02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532c03 mov eax, 0x653548 */ { eax = (u32)(0x653548u); }
  /* 00532c08 call 0x560ed0 */ esp -= 4; M32(esp) = 0x532c0du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532c08u); RETCHK(0x532c0du, 0x532c08u); LOADALL;
  /* 00532c0d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532c0e call 0x5fea82 */ esp -= 4; M32(esp) = 0x532c13u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x532c0eu); RETCHK(0x532c13u, 0x532c0eu); LOADALL;
  /* 00532c13 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532c16 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532c19 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532c1a mov eax, 0x65353c */ { eax = (u32)(0x65353cu); }
  /* 00532c1f call 0x560ed0 */ esp -= 4; M32(esp) = 0x532c24u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532c1fu); RETCHK(0x532c24u, 0x532c1fu); LOADALL;
  /* 00532c24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532c25 call 0x5fea82 */ esp -= 4; M32(esp) = 0x532c2au; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x532c25u); RETCHK(0x532c2au, 0x532c25u); LOADALL;
  /* 00532c2a fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532c2d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532c30 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532c31 mov eax, 0x653530 */ { eax = (u32)(0x653530u); }
  /* 00532c36 call 0x560ed0 */ esp -= 4; M32(esp) = 0x532c3bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532c36u); RETCHK(0x532c3bu, 0x532c36u); LOADALL;
  /* 00532c3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532c3c call 0x5fea82 */ esp -= 4; M32(esp) = 0x532c41u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x532c3cu); RETCHK(0x532c41u, 0x532c3cu); LOADALL;
  /* 00532c41 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532c44 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00532c47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532c4a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532c4c je 0x532c5a */ if (ZF_) goto L_00532c5a;
  /* 00532c4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532c4f lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00532c52 call 0x52d060 */ esp -= 4; M32(esp) = 0x532c57u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x532c52u); RETCHK(0x532c57u, 0x532c52u); LOADALL;
  /* 00532c57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00532c5a:;
  /* 00532c5a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532c5b mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00532c60 call 0x560ed0 */ esp -= 4; M32(esp) = 0x532c65u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532c60u); RETCHK(0x532c65u, 0x532c60u); LOADALL;
  /* 00532c65 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00532c67 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 00532c6e mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 00532c75 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 00532c79 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 00532c7c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00532c80:;
  /* 00532c80 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00532c82 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00532c83 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532c85 jne 0x532c80 */ if (!ZF_) goto L_00532c80;
  /* 00532c87 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00532c89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00532c8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532c8b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00532c8e call 0x404420 */ esp -= 4; M32(esp) = 0x532c93u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x532c8eu); RETCHK(0x532c93u, 0x532c8eu); LOADALL;
  /* 00532c93 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532c95 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00532c98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00532c99 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532c9a mov eax, 0x65351c */ { eax = (u32)(0x65351cu); }
  /* 00532c9f mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00532ca6 call 0x560ed0 */ esp -= 4; M32(esp) = 0x532cabu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532ca6u); RETCHK(0x532cabu, 0x532ca6u); LOADALL;
  /* 00532cab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532cac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532cad mov eax, 0x65350c */ { eax = (u32)(0x65350cu); }
  /* 00532cb2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x532cb7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532cb2u); RETCHK(0x532cb7u, 0x532cb2u); LOADALL;
  /* 00532cb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532cb8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532cb9 mov eax, 0x653500 */ { eax = (u32)(0x653500u); }
  /* 00532cbe call 0x560ed0 */ esp -= 4; M32(esp) = 0x532cc3u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532cbeu); RETCHK(0x532cc3u, 0x532cbeu); LOADALL;
  /* 00532cc3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532cc4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532cc5 mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00532cca call 0x560ed0 */ esp -= 4; M32(esp) = 0x532ccfu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x532ccau); RETCHK(0x532ccfu, 0x532ccau); LOADALL;
  /* 00532ccf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532cd0 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532cd3 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00532cd6 mov eax, esp */ { eax = (u32)(esp); }
  /* 00532cd8 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 00532cdb call 0x52cea0 */ esp -= 4; M32(esp) = 0x532ce0u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x532cdbu); RETCHK(0x532ce0u, 0x532cdbu); LOADALL;
  /* 00532ce0 lea edx, [ebp - 0x48] */ edx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00532ce3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00532ce4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00532ce6 call 0x5328a0 */ esp -= 4; M32(esp) = 0x532cebu; SAVEALL; F_005328a0(c); ABI_CHECK(0x5328a0u, 0x532ce6u); RETCHK(0x532cebu, 0x532ce6u); LOADALL;
  /* 00532ceb mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 00532ced cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532cf1 jb 0x532cff */ if (CF_) goto L_00532cff;
  /* 00532cf3 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 00532cf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532cf7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x532cfcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x532cf7u); RETCHK(0x532cfcu, 0x532cf7u); LOADALL;
  /* 00532cfc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00532cff:;
  /* 00532cff mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00532d02 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00532d03 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00532d04 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00532d06 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00532d0d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00532d0e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532d10 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532d11 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00532d20(CPU *c) {
  NATIVE_HOOK(0x532d20u) REGS; LOADALL;
L_00532d20:;
  /* 00532d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532d23 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532d26 fld dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); FPUSH((double)MF32(m_)); }
  /* 00532d2c fsub dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532d32 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00532d38 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00532d3a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532d3d je 0x532d4d */ if (ZF_) goto L_00532d4d;
  /* 00532d3f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532d41 fld dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); FPUSH((double)MF32(m_)); }
  /* 00532d47 fsub dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00532d4d:;
  /* 00532d4d fld dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00532d50 fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532d53 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00532d59 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00532d5b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532d5e je 0x532d68 */ if (ZF_) goto L_00532d68;
  /* 00532d60 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532d62 fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00532d65 fsub dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00532d68:;
  /* 00532d68 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00532d6a fsub dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532d70 fst dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); }
  /* 00532d73 fdiv st(2) */ ST(0) = FR(ST(0) / ST(2));
  /* 00532d75 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00532d77 fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532d7a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532d7c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532d7e fld dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); FPUSH((double)MF32(m_)); }
  /* 00532d84 fsub dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532d8a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00532d90 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00532d92 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532d95 je 0x532da5 */ if (ZF_) goto L_00532da5;
  /* 00532d97 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532d99 fld dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); FPUSH((double)MF32(m_)); }
  /* 00532d9f fsub dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00532da5:;
  /* 00532da5 fld dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); FPUSH((double)MF32(m_)); }
  /* 00532da8 fsub dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532dab fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00532db1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00532db3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532db6 je 0x532dc0 */ if (ZF_) goto L_00532dc0;
  /* 00532db8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532dba fld dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); FPUSH((double)MF32(m_)); }
  /* 00532dbd fsub dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00532dc0:;
  /* 00532dc0 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00532dc3 mov eax, dword ptr [0x7a6c7c] */ { const u32 m_ = (u32)(0x7a6c7cu); eax = (u32)(M32(m_)); }
  /* 00532dc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532dca fsub dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532dd0 fdiv st(2) */ ST(0) = FR(ST(0) / ST(2));
  /* 00532dd2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 00532dd4 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532dd7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532dd9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532ddb je 0x532e33 */ if (ZF_) goto L_00532e33;
  /* 00532ddd fld dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 00532de0 fsub dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532de3 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00532de9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00532deb test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532dee je 0x532df8 */ if (ZF_) goto L_00532df8;
  /* 00532df0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532df2 fld dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); FPUSH((double)MF32(m_)); }
  /* 00532df5 fsub dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00532df8:;
  /* 00532df8 fld dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); FPUSH((double)MF32(m_)); }
  /* 00532dfe fsub dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532e04 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00532e0a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00532e0c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00532e0f je 0x532e1f */ if (ZF_) goto L_00532e1f;
  /* 00532e11 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532e13 fld dword ptr [esi + 0x1c8] */ { const u32 m_ = (u32)(esi + 0x1c8u); FPUSH((double)MF32(m_)); }
  /* 00532e19 fsub dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00532e1f:;
  /* 00532e1f fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00532e22 fdiv st(1) */ ST(0) = FR(ST(0) / ST(1));
  /* 00532e24 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 00532e2a fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00532e2c fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532e2f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00532e31 fstp st(0) */ ST(0) = ST(0); FPOP();
L_00532e33:;
  /* 00532e33 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00532e34 lea edi, [ebp - 0xc] */ edi = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00532e37 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00532e39 call 0x52cf40 */ esp -= 4; M32(esp) = 0x532e3eu; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x532e39u); RETCHK(0x532e3eu, 0x532e39u); LOADALL;
  /* 00532e3e fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00532e41 fadd dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00532e47 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532e4a lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00532e4d fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532e51 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00532e54 fadd dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00532e5a fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532e5e fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00532e61 fsub dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532e67 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532e6b fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00532e6e fsub dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532e74 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532e77 call 0x52cec0 */ esp -= 4; M32(esp) = 0x532e7cu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x532e77u); RETCHK(0x532e7cu, 0x532e77u); LOADALL;
  /* 00532e7c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00532e7f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532e81 mov ecx, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 00532e87 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00532e88 je 0x532ed1 */ if (ZF_) goto L_00532ed1;
  /* 00532e8a mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00532e8d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532e8f je 0x532ec9 */ if (ZF_) goto L_00532ec9;
  /* 00532e91 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00532e94 mov eax, dword ptr [esi + 0x1c4] */ { const u32 m_ = (u32)(esi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 00532e9a fsub dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532ea0 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532ea3 fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00532ea6 fadd dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00532eac fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532eaf fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00532eb2 fsub dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00532eb8 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532ebb fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00532ebe fadd dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00532ec4 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00532ec7 jmp 0x532ed7 */ goto L_00532ed7;
L_00532ec9:;
  /* 00532ec9 mov eax, dword ptr [esi + 0x1c0] */ { const u32 m_ = (u32)(esi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 00532ecf jmp 0x532ed7 */ goto L_00532ed7;
L_00532ed1:;
  /* 00532ed1 mov eax, dword ptr [esi + 0x1bc] */ { const u32 m_ = (u32)(esi + 0x1bcu); eax = (u32)(M32(m_)); }
L_00532ed7:;
  /* 00532ed7 call 0x5267f0 */ esp -= 4; M32(esp) = 0x532edcu; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x532ed7u); RETCHK(0x532edcu, 0x532ed7u); LOADALL;
  /* 00532edc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00532edf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532ee1 jne 0x532f06 */ if (!ZF_) goto L_00532f06;
  /* 00532ee3 mov eax, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); eax = (u32)(M32(m_)); }
  /* 00532ee9 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 00532eee push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00532ef3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532ef5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532ef7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532ef8 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00532efb call 0x5050e0 */ esp -= 4; M32(esp) = 0x532f00u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x532efbu); RETCHK(0x532f00u, 0x532efbu); LOADALL;
  /* 00532f00 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532f02 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532f03 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00532f06:;
  /* 00532f06 mov ecx, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); ecx = (u32)(M32(m_)); }
  /* 00532f0c push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00532f11 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00532f16 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 00532f1b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532f1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00532f1e lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00532f21 call 0x5050e0 */ esp -= 4; M32(esp) = 0x532f26u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x532f21u); RETCHK(0x532f26u, 0x532f21u); LOADALL;
  /* 00532f26 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532f28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532f29 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00532f30(CPU *c) {
  NATIVE_HOOK(0x532f30u) REGS; LOADALL;
L_00532f30:;
  /* 00532f30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532f31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532f33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00532f35 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 00532f3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00532f40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532f41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00532f48 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00532f49 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00532f4a push 0x532fb0 */ { u32 v_ = 0x532fb0u; esp -= 4; M32(esp) = v_; }
  /* 00532f4f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532f52 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00532f54 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00532f56 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00532f59 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00532f5c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00532f5e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00532f5f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00532f62 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00532f69 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00532f6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532f6d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00532f70 call 0x404140 */ esp -= 4; M32(esp) = 0x532f75u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x532f70u); RETCHK(0x532f75u, 0x532f70u); LOADALL;
  /* 00532f75 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00532f78 call 0x405c00 */ esp -= 4; M32(esp) = 0x532f7du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x532f78u); RETCHK(0x532f7du, 0x532f78u); LOADALL;
  /* 00532f7d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00532f7f call 0x405c80 */ esp -= 4; M32(esp) = 0x532f84u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x532f7fu); RETCHK(0x532f84u, 0x532f7fu); LOADALL;
  /* 00532f84 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00532f88 jb 0x532f96 */ if (CF_) goto L_00532f96;
  /* 00532f8a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00532f8d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00532f8e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x532f93u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x532f8eu); RETCHK(0x532f93u, 0x532f8eu); LOADALL;
  /* 00532f93 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00532f96:;
  /* 00532f96 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00532f99 mov eax, esi */ { eax = (u32)(esi); }
  /* 00532f9b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00532fa2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00532fa3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532fa5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532fa6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00532fb0(CPU *c) {
  NATIVE_HOOK(0x532fb0u) REGS; LOADALL;
L_00532fb0:;
  /* 00532fb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00532fb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00532fb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00532fb5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00532fba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00532fc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532fc1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00532fc8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00532fc9 push 0x1e0 */ { u32 v_ = 0x1e0u; esp -= 4; M32(esp) = v_; }
  /* 00532fce call 0x5fe934 */ esp -= 4; M32(esp) = 0x532fd3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x532fceu); RETCHK(0x532fd3u, 0x532fceu); LOADALL;
  /* 00532fd3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00532fd6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00532fd9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00532fdb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00532fe2 je 0x532ffa */ if (ZF_) goto L_00532ffa;
  /* 00532fe4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00532fe6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00532fe7 call 0x5327e0 */ esp -= 4; M32(esp) = 0x532fecu; SAVEALL; F_005327e0(c); ABI_CHECK(0x5327e0u, 0x532fe7u); RETCHK(0x532fecu, 0x532fe7u); LOADALL;
  /* 00532fec mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00532fef mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00532ff6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00532ff8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00532ff9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00532ffa:;
  /* 00532ffa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00532ffd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00532fff mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533006 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533008 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533009 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00533010(CPU *c) {
  NATIVE_HOOK(0x533010u) REGS; LOADALL;
L_00533010:;
  /* 00533010 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533011 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533013 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00533019 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053301b push 0x6210b9 */ { u32 v_ = 0x6210b9u; esp -= 4; M32(esp) = v_; }
  /* 00533020 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533021 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00533024 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0053302b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053302c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053302d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053302e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00533031 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533032 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533033 call 0x50bb70 */ esp -= 4; M32(esp) = 0x533038u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x533033u); RETCHK(0x533038u, 0x533033u); LOADALL;
  /* 00533038 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0053303a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053303c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0053303f push 0x64e0d8 */ { u32 v_ = 0x64e0d8u; esp -= 4; M32(esp) = v_; }
  /* 00533044 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00533047 mov dword ptr [edi], 0x653568 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x653568u); }
  /* 0053304d call 0x404420 */ esp -= 4; M32(esp) = 0x533052u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53304du); RETCHK(0x533052u, 0x53304du); LOADALL;
  /* 00533052 push 0x1b4 */ { u32 v_ = 0x1b4u; esp -= 4; M32(esp) = v_; }
  /* 00533057 mov dword ptr [edi + 0x1d0], ebx */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(ebx); }
  /* 0053305d call 0x5fe934 */ esp -= 4; M32(esp) = 0x533062u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53305du); RETCHK(0x533062u, 0x53305du); LOADALL;
  /* 00533062 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533065 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00533068 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053306a mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0053306e je 0x533079 */ if (ZF_) goto L_00533079;
  /* 00533070 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533071 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533072 call 0x51cb40 */ esp -= 4; M32(esp) = 0x533077u; SAVEALL; F_0051cb40(c); ABI_CHECK(0x51cb40u, 0x533072u); RETCHK(0x533077u, 0x533072u); LOADALL;
  /* 00533077 jmp 0x53307b */ goto L_0053307b;
L_00533079:;
  /* 00533079 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0053307b:;
  /* 0053307b mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053307e push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 00533083 mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 00533089 call 0x5fe934 */ esp -= 4; M32(esp) = 0x53308eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x533089u); RETCHK(0x53308eu, 0x533089u); LOADALL;
  /* 0053308e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533091 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00533094 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533096 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0053309a je 0x5330a5 */ if (ZF_) goto L_005330a5;
  /* 0053309c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053309d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053309e call 0x50d810 */ esp -= 4; M32(esp) = 0x5330a3u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x53309eu); RETCHK(0x5330a3u, 0x53309eu); LOADALL;
  /* 005330a3 jmp 0x5330a7 */ goto L_005330a7;
L_005330a5:;
  /* 005330a5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005330a7:;
  /* 005330a7 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005330aa push 0x278 */ { u32 v_ = 0x278u; esp -= 4; M32(esp) = v_; }
  /* 005330af mov dword ptr [edi + 0x1d4], eax */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 005330b5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5330bau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5330b5u); RETCHK(0x5330bau, 0x5330b5u); LOADALL;
  /* 005330ba mov esi, eax */ { esi = (u32)(eax); }
  /* 005330bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005330bf mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 005330c2 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005330c4 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 005330c8 je 0x5330d9 */ if (ZF_) goto L_005330d9;
  /* 005330ca xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005330cc call 0x513730 */ esp -= 4; M32(esp) = 0x5330d1u; SAVEALL; F_00513730(c); ABI_CHECK(0x513730u, 0x5330ccu); RETCHK(0x5330d1u, 0x5330ccu); LOADALL;
  /* 005330d1 mov dword ptr [edi + 0x1d8], eax */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 005330d7 jmp 0x5330df */ goto L_005330df;
L_005330d9:;
  /* 005330d9 mov dword ptr [edi + 0x1d8], ebx */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(ebx); }
L_005330df:;
  /* 005330df mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005330e2 mov eax, edi */ { eax = (u32)(edi); }
  /* 005330e4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005330e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005330e6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005330ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005330ee mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005330f0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005330f1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00533100(CPU *c) {
  NATIVE_HOOK(0x533100u) REGS; LOADALL;
L_00533100:;
  /* 00533100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533103 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533104 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00533106 call 0x533130 */ esp -= 4; M32(esp) = 0x53310bu; SAVEALL; F_00533130(c); ABI_CHECK(0x533130u, 0x533106u); RETCHK(0x53310bu, 0x533106u); LOADALL;
  /* 0053310b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053310f je 0x53311a */ if (ZF_) goto L_0053311a;
  /* 00533111 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533112 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533117u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533112u); RETCHK(0x533117u, 0x533112u); LOADALL;
  /* 00533117 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053311a:;
  /* 0053311a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053311c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053311d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053311e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00533130(CPU *c) {
  NATIVE_HOOK(0x533130u) REGS; LOADALL;
L_00533130:;
  /* 00533130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533133 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00533135 push 0x61d9a8 */ { u32 v_ = 0x61d9a8u; esp -= 4; M32(esp) = v_; }
  /* 0053313a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00533140 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533141 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00533148 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533149 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053314a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0053314c mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0053314f mov dword ptr [esi], 0x653568 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653568u); }
  /* 00533155 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0053315c mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00533162 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00533164 je 0x53316c */ if (ZF_) goto L_0053316c;
  /* 00533166 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00533168 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053316a call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53316cu; SAVEALL; call_ind(c, t_); RETCHK(0x53316cu, 0x53316au); LOADALL; }
L_0053316c:;
  /* 0053316c mov ecx, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00533172 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00533174 je 0x53317c */ if (ZF_) goto L_0053317c;
  /* 00533176 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00533178 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0053317a call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53317cu; SAVEALL; call_ind(c, t_); RETCHK(0x53317cu, 0x53317au); LOADALL; }
L_0053317c:;
  /* 0053317c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053317e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00533185 call 0x50bc50 */ esp -= 4; M32(esp) = 0x53318au; SAVEALL; F_0050bc50(c); ABI_CHECK(0x50bc50u, 0x533185u); RETCHK(0x53318au, 0x533185u); LOADALL;
  /* 0053318a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053318d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053318e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533195 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533197 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533198 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005331a0(CPU *c) {
  NATIVE_HOOK(0x5331a0u) REGS; LOADALL;
L_005331a0:;
  /* 005331a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005331a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005331a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005331a5 push 0x61b9db */ { u32 v_ = 0x61b9dbu; esp -= 4; M32(esp) = v_; }
  /* 005331aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005331b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005331b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005331b8 sub esp, 0x78 */ { u32 a_ = esp, b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005331bb mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005331be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005331bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005331c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005331c1 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005331c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005331c5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005331c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005331c9 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 005331cb mov dword ptr [edi + 0x1d0], 0x98 */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(0x98u); }
  /* 005331d5 mov dword ptr [edi + 0x1cc], 0xd2 */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(0xd2u); }
  /* 005331df call 0x50bfc0 */ esp -= 4; M32(esp) = 0x5331e4u; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x5331dfu); RETCHK(0x5331e4u, 0x5331dfu); LOADALL;
  /* 005331e4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005331e6 jne 0x5331fb */ if (!ZF_) goto L_005331fb;
  /* 005331e8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005331eb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005331f2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005331f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005331f4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005331f5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005331f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005331f8 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_005331fb:;
  /* 005331fb mov al, byte ptr [0x7a6da3] */ { const u32 m_ = (u32)(0x7a6da3u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00533200 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00533202 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00533204 jne 0x533235 */ if (!ZF_) goto L_00533235;
  /* 00533206 mov edi, 0x7a8428 */ { edi = (u32)(0x7a8428u); }
  /* 0053320b jmp 0x533210 */ goto L_00533210;
L_00533210:;
  /* 00533210 mov esi, 4 */ { esi = (u32)(0x4u); }
L_00533215:;
  /* 00533215 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00533218 call 0x52cf40 */ esp -= 4; M32(esp) = 0x53321du; SAVEALL; F_0052cf40(c); ABI_CHECK(0x52cf40u, 0x533218u); RETCHK(0x53321du, 0x533218u); LOADALL;
  /* 0053321d add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00533220 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00533221 jne 0x533215 */ if (!ZF_) goto L_00533215;
  /* 00533223 cmp edi, 0x7a85a8 */ { u32 a_ = edi, b_ = 0x7a85a8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533229 jl 0x533210 */ if (LT_) goto L_00533210;
  /* 0053322b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0053322e mov byte ptr [0x7a6da3], 1 */ { const u32 m_ = (u32)(0x7a6da3u); M8(m_) = (u8)(0x1u); }
L_00533235:;
  /* 00533235 push 0x42b80000 */ { u32 v_ = 0x42b80000u; esp -= 4; M32(esp) = v_; }
  /* 0053323a push 0x43180000 */ { u32 v_ = 0x43180000u; esp -= 4; M32(esp) = v_; }
  /* 0053323f push 0x42b20000 */ { u32 v_ = 0x42b20000u; esp -= 4; M32(esp) = v_; }
  /* 00533244 push 0x41000000 */ { u32 v_ = 0x41000000u; esp -= 4; M32(esp) = v_; }
  /* 00533249 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0053324c call 0x52cec0 */ esp -= 4; M32(esp) = 0x533251u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x53324cu); RETCHK(0x533251u, 0x53324cu); LOADALL;
  /* 00533251 cmp dword ptr [edi + 0x1dc], ebx */ { const u32 m_ = (u32)(edi + 0x1dcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533257 je 0x53331b */ if (ZF_) goto L_0053331b;
  /* 0053325d mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 0053325f push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00533261 push 0x653668 */ { u32 v_ = 0x653668u; esp -= 4; M32(esp) = v_; }
  /* 00533266 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00533269 mov byte ptr [ebp + 0xc], al */ { const u32 m_ = (u32)(ebp + 0xcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0053326c mov byte ptr [ebp + 0xd], 0xc5 */ { const u32 m_ = (u32)(ebp + 0xdu); M8(m_) = (u8)(0xc5u); }
  /* 00533270 mov byte ptr [ebp + 0xe], 1 */ { const u32 m_ = (u32)(ebp + 0xeu); M8(m_) = (u8)(0x1u); }
  /* 00533274 mov byte ptr [ebp + 0xf], al */ { const u32 m_ = (u32)(ebp + 0xfu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00533277 mov byte ptr [ebp + 0x10], al */ { const u32 m_ = (u32)(ebp + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0053327a mov byte ptr [ebp + 0x11], 0xfa */ { const u32 m_ = (u32)(ebp + 0x11u); M8(m_) = (u8)(0xfau); }
  /* 0053327e mov byte ptr [ebp + 0x12], 0x81 */ { const u32 m_ = (u32)(ebp + 0x12u); M8(m_) = (u8)(0x81u); }
  /* 00533282 mov byte ptr [ebp + 0x13], al */ { const u32 m_ = (u32)(ebp + 0x13u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00533285 mov byte ptr [ebp - 0x10], al */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00533288 mov byte ptr [ebp - 0xf], bl */ { const u32 m_ = (u32)(ebp + 0xfffffff1u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053328b mov byte ptr [ebp - 0xe], bl */ { const u32 m_ = (u32)(ebp + 0xfffffff2u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053328e mov byte ptr [ebp - 0xd], al */ { const u32 m_ = (u32)(ebp + 0xfffffff3u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00533291 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00533298 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0053329b mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053329e call 0x404420 */ esp -= 4; M32(esp) = 0x5332a3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53329eu); RETCHK(0x5332a3u, 0x53329eu); LOADALL;
  /* 005332a3 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 005332a6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005332a9 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 005332af mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005332b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005332b2 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005332b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005332b6 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5332b9u; SAVEALL; call_ind(c, t_); RETCHK(0x5332b9u, 0x5332b6u); LOADALL; }
  /* 005332b9 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005332c0 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005332c4 jb 0x5332d2 */ if (CF_) goto L_005332d2;
  /* 005332c6 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 005332c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005332ca call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5332cfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5332cau); RETCHK(0x5332cfu, 0x5332cau); LOADALL;
  /* 005332cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005332d2:;
  /* 005332d2 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005332d5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005332d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005332d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005332da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005332db mov eax, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 005332e1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005332e2 call 0x51c820 */ esp -= 4; M32(esp) = 0x5332e7u; SAVEALL; F_0051c820(c); ABI_CHECK(0x51c820u, 0x5332e2u); RETCHK(0x5332e7u, 0x5332e2u); LOADALL;
  /* 005332e7 mov edx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); edx = (u32)(M32(m_)); }
  /* 005332ed lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005332f0 call 0x51cc20 */ esp -= 4; M32(esp) = 0x5332f5u; SAVEALL; F_0051cc20(c); ABI_CHECK(0x51cc20u, 0x5332f0u); RETCHK(0x5332f5u, 0x5332f0u); LOADALL;
  /* 005332f5 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 005332fb push 0x43960000 */ { u32 v_ = 0x43960000u; esp -= 4; M32(esp) = v_; }
  /* 00533300 call 0x51c870 */ esp -= 4; M32(esp) = 0x533305u; SAVEALL; F_0051c870(c); ABI_CHECK(0x51c870u, 0x533300u); RETCHK(0x533305u, 0x533300u); LOADALL;
  /* 00533305 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00533308 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 0053330e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00533310 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533311 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00533314 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533315 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53331bu; SAVEALL; call_ind(c, t_); RETCHK(0x53331bu, 0x533315u); LOADALL; }
L_0053331b:;
  /* 0053331b cmp dword ptr [edi + 0x1d4], ebx */ { const u32 m_ = (u32)(edi + 0x1d4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533321 je 0x5333cc */ if (ZF_) goto L_005333cc;
  /* 00533327 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00533329 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0053332c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053332d mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0053332f call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533332u; SAVEALL; call_ind(c, t_); RETCHK(0x533332u, 0x53332fu); LOADALL; }
  /* 00533332 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00533335 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533336 lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00533339 call 0x52cf90 */ esp -= 4; M32(esp) = 0x53333eu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x533339u); RETCHK(0x53333eu, 0x533339u); LOADALL;
  /* 0053333e fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 00533341 fadd dword ptr [0x63f930] */ { const u32 m_ = (u32)(0x63f930u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00533347 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053334a push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0053334c push 0x653660 */ { u32 v_ = 0x653660u; esp -= 4; M32(esp) = v_; }
  /* 00533351 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00533354 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0053335a fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 0053335d mov dword ptr [ebp - 0x6c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(0xfu); }
  /* 00533364 fsub dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053336a mov dword ptr [ebp - 0x70], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(ebx); }
  /* 0053336d mov byte ptr [ebp - 0x80], bl */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533370 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00533373 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00533376 fadd dword ptr [0x657070] */ { const u32 m_ = (u32)(0x657070u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053337c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053337f call 0x404420 */ esp -= 4; M32(esp) = 0x533384u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53337fu); RETCHK(0x533384u, 0x53337fu); LOADALL;
  /* 00533384 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533385 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0053338a sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053338d mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00533394 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00533396 mov eax, esp */ { eax = (u32)(esp); }
  /* 00533398 mov dword ptr [ebp + 0x10], esp */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esp); }
  /* 0053339b call 0x52cea0 */ esp -= 4; M32(esp) = 0x5333a0u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x53339bu); RETCHK(0x5333a0u, 0x53339bu); LOADALL;
  /* 005333a0 mov ebx, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); ebx = (u32)(M32(m_)); }
  /* 005333a6 lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 005333ac call 0x50da30 */ esp -= 4; M32(esp) = 0x5333b1u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x5333acu); RETCHK(0x5333b1u, 0x5333acu); LOADALL;
  /* 005333b1 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005333b8 cmp dword ptr [ebp - 0x6c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff94u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005333bc jb 0x5333ca */ if (CF_) goto L_005333ca;
  /* 005333be mov edx, dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); edx = (u32)(M32(m_)); }
  /* 005333c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005333c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5333c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5333c2u); RETCHK(0x5333c7u, 0x5333c2u); LOADALL;
  /* 005333c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005333ca:;
  /* 005333ca xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_005333cc:;
  /* 005333cc cmp dword ptr [edi + 0x1d8], ebx */ { const u32 m_ = (u32)(edi + 0x1d8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005333d2 je 0x533547 */ if (ZF_) goto L_00533547;
  /* 005333d8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005333da lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005333dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005333de mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005333e0 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5333e3u; SAVEALL; call_ind(c, t_); RETCHK(0x5333e3u, 0x5333e0u); LOADALL; }
  /* 005333e3 mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 005333e6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005333e7 lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005333ea call 0x52cf90 */ esp -= 4; M32(esp) = 0x5333efu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5333eau); RETCHK(0x5333efu, 0x5333eau); LOADALL;
  /* 005333ef fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 005333f2 fadd dword ptr [0x657074] */ { const u32 m_ = (u32)(0x657074u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005333f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005333fb push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 005333fd push 0x653660 */ { u32 v_ = 0x653660u; esp -= 4; M32(esp) = v_; }
  /* 00533402 fst dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); }
  /* 00533405 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 00533408 fadd dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053340e mov dword ptr [ebp - 0x50], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0xfu); }
  /* 00533415 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 00533418 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053341b fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053341e fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00533421 fadd dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00533427 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053342a call 0x404420 */ esp -= 4; M32(esp) = 0x53342fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53342au); RETCHK(0x53342fu, 0x53342au); LOADALL;
  /* 0053342f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533430 push 0x653658 */ { u32 v_ = 0x653658u; esp -= 4; M32(esp) = v_; }
  /* 00533435 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533438 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0053343f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00533441 mov eax, esp */ { eax = (u32)(esp); }
  /* 00533443 mov dword ptr [ebp + 0x10], esp */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esp); }
  /* 00533446 call 0x52cea0 */ esp -= 4; M32(esp) = 0x53344bu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x533446u); RETCHK(0x53344bu, 0x533446u); LOADALL;
  /* 0053344b mov ebx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); ebx = (u32)(M32(m_)); }
  /* 00533451 lea eax, [ebp - 0x68] */ eax = (u32)((u32)(ebp + 0xffffff98u));
  /* 00533454 call 0x50da30 */ esp -= 4; M32(esp) = 0x533459u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x533454u); RETCHK(0x533459u, 0x533454u); LOADALL;
  /* 00533459 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0053345c mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0053345f cmp dword ptr [ebp - 0x50], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533463 jb 0x533471 */ if (CF_) goto L_00533471;
  /* 00533465 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 00533468 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533469 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53346eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533469u); RETCHK(0x53346eu, 0x533469u); LOADALL;
  /* 0053346e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533471:;
  /* 00533471 mov ecx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00533477 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00533479 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 0053347e mov dword ptr [ebp - 0x50], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0xfu); }
  /* 00533485 mov dword ptr [ebp - 0x54], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ebx); }
  /* 00533488 mov byte ptr [ebp - 0x64], bl */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053348b call 0x5141e0 */ esp -= 4; M32(esp) = 0x533490u; SAVEALL; F_005141e0(c); ABI_CHECK(0x5141e0u, 0x53348bu); RETCHK(0x533490u, 0x53348bu); LOADALL;
  /* 00533490 mov edx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); edx = (u32)(M32(m_)); }
  /* 00533496 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 00533499 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 0053349c mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0053349f mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 005334a2 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 005334a5 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
  /* 005334a8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005334aa xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005334ac call 0x514220 */ esp -= 4; M32(esp) = 0x5334b1u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x5334acu); RETCHK(0x5334b1u, 0x5334acu); LOADALL;
  /* 005334b1 mov edx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); edx = (u32)(M32(m_)); }
  /* 005334b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005334b9 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005334be call 0x514220 */ esp -= 4; M32(esp) = 0x5334c3u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x5334beu); RETCHK(0x5334c3u, 0x5334beu); LOADALL;
  /* 005334c3 mov edx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); edx = (u32)(M32(m_)); }
  /* 005334c9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005334cb mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 005334d0 call 0x514220 */ esp -= 4; M32(esp) = 0x5334d5u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x5334d0u); RETCHK(0x5334d5u, 0x5334d0u); LOADALL;
  /* 005334d5 mov edx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); edx = (u32)(M32(m_)); }
  /* 005334db xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005334dd mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 005334e2 call 0x514220 */ esp -= 4; M32(esp) = 0x5334e7u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x5334e2u); RETCHK(0x5334e7u, 0x5334e2u); LOADALL;
  /* 005334e7 mov ecx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 005334ed mov eax, 0x43000000 */ { eax = (u32)(0x43000000u); }
  /* 005334f2 mov dword ptr [ecx + 0x240], eax */ { const u32 m_ = (u32)(ecx + 0x240u); M32(m_) = (u32)(eax); }
  /* 005334f8 mov edx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); edx = (u32)(M32(m_)); }
  /* 005334fe mov dword ptr [edx + 0x23c], eax */ { const u32 m_ = (u32)(edx + 0x23cu); M32(m_) = (u32)(eax); }
  /* 00533504 mov eax, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 0053350a mov dword ptr [eax + 0x230], 0xa */ { const u32 m_ = (u32)(eax + 0x230u); M32(m_) = (u32)(0xau); }
  /* 00533514 mov ecx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 0053351a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053351b lea edi, [ebp + 0x10] */ edi = (u32)((u32)(ebp + 0x10u));
  /* 0053351e lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00533521 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00533523 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00533525 mov dword ptr [ebp - 0x14], 0x200 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x200u); }
  /* 0053352c mov dword ptr [ebp + 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x1u); }
  /* 00533533 call 0x514260 */ esp -= 4; M32(esp) = 0x533538u; SAVEALL; F_00514260(c); ABI_CHECK(0x514260u, 0x533533u); RETCHK(0x533538u, 0x533533u); LOADALL;
  /* 00533538 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0053353b mov ecx, dword ptr [edx + 0x1d8] */ { const u32 m_ = (u32)(edx + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00533541 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00533543 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533544 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533547u; SAVEALL; call_ind(c, t_); RETCHK(0x533547u, 0x533544u); LOADALL; }
L_00533547:;
  /* 00533547 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053354a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053354b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053354c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053354e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533555 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00533556 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533558 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533559 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00533523(CPU *c) {
  NATIVE_HOOK(0x533523u) REGS; LOADALL;
L_00533523:;
  /* 00533523 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00533525 mov dword ptr [ebp - 0x14], 0x200 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x200u); }
  /* 0053352c mov dword ptr [ebp + 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x1u); }
  /* 00533533 call 0x514260 */ esp -= 4; M32(esp) = 0x533538u; SAVEALL; F_00514260(c); ABI_CHECK(0x514260u, 0x533533u); RETCHK(0x533538u, 0x533533u); LOADALL;
  /* 00533538 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0053353b mov ecx, dword ptr [edx + 0x1d8] */ { const u32 m_ = (u32)(edx + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00533541 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00533543 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533544 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533547u; SAVEALL; call_ind(c, t_); RETCHK(0x533547u, 0x533544u); LOADALL; }
  /* 00533547 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053354a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053354b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053354c mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053354e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533555 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00533556 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533558 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533559 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_00533560(CPU *c) {
  NATIVE_HOOK(0x533560u) REGS; LOADALL;
L_00533560:;
  /* 00533560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533563 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533564 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533565 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00533567 mov ecx, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); ecx = (u32)(M32(m_)); }
  /* 0053356d mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 00533572 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00533574 mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 0053357a sar edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0053357c mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0053357e shr ebx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00533581 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00533583 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533584 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533586 mov edi, 0x7a6da4 */ { edi = (u32)(0x7a6da4u); }
  /* 0053358b mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 00533590 jg 0x5335bb */ if (!(ZF_|LT_)) goto L_005335bb;
  /* 00533592 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00533594 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00533596 mov eax, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 0053359c cdq */ edx = (u32)((s32)eax >> 31);
  /* 0053359d idiv ebx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ebx, &q_, &r_, 0x53359du); eax = q_; edx = r_; }
  /* 0053359f cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005335a2 jle 0x5335a9 */ if ((ZF_|LT_)) goto L_005335a9;
  /* 005335a4 mov eax, 0xc */ { eax = (u32)(0xcu); }
L_005335a9:;
  /* 005335a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005335ab jle 0x5335c2 */ if ((ZF_|LT_)) goto L_005335c2;
  /* 005335ad mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005335af mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005335b4 mov edi, 0x7a6da4 */ { edi = (u32)(0x7a6da4u); }
  /* 005335b9 jmp 0x5335c0 */ goto L_005335c0;
L_005335bb:;
  /* 005335bb mov eax, 0x2020202 */ { eax = (u32)(0x2020202u); }
L_005335c0:;
  /* 005335c0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
L_005335c2:;
  /* 005335c2 mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 005335c8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005335ca mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005335cd je 0x5335e6 */ if (ZF_) goto L_005335e6;
  /* 005335cf mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005335d1 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005335d3 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5335d6u; SAVEALL; call_ind(c, t_); RETCHK(0x5335d6u, 0x5335d3u); LOADALL; }
  /* 005335d6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005335d8 je 0x5335e6 */ if (ZF_) goto L_005335e6;
  /* 005335da mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 005335e0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005335e2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005335e3 call dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5335e6u; SAVEALL; call_ind(c, t_); RETCHK(0x5335e6u, 0x5335e3u); LOADALL; }
L_005335e6:;
  /* 005335e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005335e7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005335e9 call 0x508630 */ esp -= 4; M32(esp) = 0x5335eeu; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x5335e9u); RETCHK(0x5335eeu, 0x5335e9u); LOADALL;
  /* 005335ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005335ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005335f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005335f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005335f2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00533600(CPU *c) {
  NATIVE_HOOK(0x533600u) REGS; LOADALL;
L_00533600:;
  /* 00533600 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533601 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00533603 mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00533609 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053360b je 0x533614 */ if (ZF_) goto L_00533614;
  /* 0053360d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0053360f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00533611 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533614u; SAVEALL; call_ind(c, t_); RETCHK(0x533614u, 0x533611u); LOADALL; }
L_00533614:;
  /* 00533614 mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 0053361a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053361c je 0x533625 */ if (ZF_) goto L_00533625;
  /* 0053361e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00533620 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00533622 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533625u; SAVEALL; call_ind(c, t_); RETCHK(0x533625u, 0x533622u); LOADALL; }
L_00533625:;
  /* 00533625 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00533627 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00533628 jmp 0x50c650 */ SAVEALL; F_0050c650(c); return;
}

void F_00533630(CPU *c) {
  NATIVE_HOOK(0x533630u) REGS; LOADALL;
L_00533630:;
  /* 00533630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533633 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533636 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533637 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533638 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0053363a mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0053363c lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0053363f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533640 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00533642 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 00533645 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533648u; SAVEALL; call_ind(c, t_); RETCHK(0x533648u, 0x533645u); LOADALL; }
  /* 00533648 mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 0053364b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053364c lea esi, [ebp - 0x28] */ esi = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0053364f call 0x52cf90 */ esp -= 4; M32(esp) = 0x533654u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x53364fu); RETCHK(0x533654u, 0x53364fu); LOADALL;
  /* 00533654 mov ecx, dword ptr [edi + 0x1d4] */ { const u32 m_ = (u32)(edi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 0053365a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053365d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053365f je 0x533666 */ if (ZF_) goto L_00533666;
  /* 00533661 call 0x508410 */ esp -= 4; M32(esp) = 0x533666u; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x533661u); RETCHK(0x533666u, 0x533661u); LOADALL;
L_00533666:;
  /* 00533666 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 0053366c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053366e je 0x53377c */ if (ZF_) goto L_0053377c;
  /* 00533674 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533675 mov ebx, 0x7a8428 */ { ebx = (u32)(0x7a8428u); }
  /* 0053367a mov edi, 0x6883c0 */ { edi = (u32)(0x6883c0u); }
  /* 0053367f mov esi, 0x7a6da4 */ { esi = (u32)(0x7a6da4u); }
L_00533684:;
  /* 00533684 cmp dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533687 jne 0x533694 */ if (!ZF_) goto L_00533694;
  /* 00533689 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0053368b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0053368d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0053368f call 0x527430 */ esp -= 4; M32(esp) = 0x533694u; SAVEALL; F_00527430(c); ABI_CHECK(0x527430u, 0x53368fu); RETCHK(0x533694u, 0x53368fu); LOADALL;
L_00533694:;
  /* 00533694 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00533697 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0053369a add ebx, 0x20 */ { u32 a_ = ebx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0053369d cmp esi, 0x7a6dd4 */ { u32 a_ = esi, b_ = 0x7a6dd4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005336a3 jl 0x533684 */ if (LT_) goto L_00533684;
  /* 005336a5 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 005336a8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005336aa call 0x50c550 */ esp -= 4; M32(esp) = 0x5336afu; SAVEALL; F_0050c550(c); ABI_CHECK(0x50c550u, 0x5336aau); RETCHK(0x5336afu, 0x5336aau); LOADALL;
  /* 005336af push 0x42a00000 */ { u32 v_ = 0x42a00000u; esp -= 4; M32(esp) = v_; }
  /* 005336b4 push 0x42e80000 */ { u32 v_ = 0x42e80000u; esp -= 4; M32(esp) = v_; }
  /* 005336b9 push 0x42640000 */ { u32 v_ = 0x42640000u; esp -= 4; M32(esp) = v_; }
  /* 005336be push 0x42be0000 */ { u32 v_ = 0x42be0000u; esp -= 4; M32(esp) = v_; }
  /* 005336c3 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005336c6 call 0x52cec0 */ esp -= 4; M32(esp) = 0x5336cbu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x5336c6u); RETCHK(0x5336cbu, 0x5336c6u); LOADALL;
  /* 005336cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005336cc lea esi, [ebp - 0x18] */ esi = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005336cf call 0x52cf90 */ esp -= 4; M32(esp) = 0x5336d4u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x5336cfu); RETCHK(0x5336d4u, 0x5336cfu); LOADALL;
  /* 005336d4 mov eax, dword ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); eax = (u32)(M32(m_)); }
  /* 005336da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005336db push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 005336e0 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 005336e5 push 0x796fd0 */ { u32 v_ = 0x796fd0u; esp -= 4; M32(esp) = v_; }
  /* 005336ea call 0x5fe928 */ esp -= 4; M32(esp) = 0x5336efu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5336eau); RETCHK(0x5336efu, 0x5336eau); LOADALL;
  /* 005336ef add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005336f2 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005336f4 call 0x518bb0 */ esp -= 4; M32(esp) = 0x5336f9u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x5336f4u); RETCHK(0x5336f9u, 0x5336f4u); LOADALL;
  /* 005336f9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005336fb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005336fd call 0x518220 */ esp -= 4; M32(esp) = 0x533702u; SAVEALL; F_00518220(c); ABI_CHECK(0x518220u, 0x5336fdu); RETCHK(0x533702u, 0x5336fdu); LOADALL;
  /* 00533702 mov ecx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); ecx = (u32)(M32(m_)); }
  /* 00533708 call 0x526ab0 */ esp -= 4; M32(esp) = 0x53370du; SAVEALL; F_00526ab0(c); ABI_CHECK(0x526ab0u, 0x533708u); RETCHK(0x53370du, 0x533708u); LOADALL;
  /* 0053370d fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 00533710 fsub dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00533713 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00533714 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053371a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053371c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053371f je 0x533729 */ if (ZF_) goto L_00533729;
  /* 00533721 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00533723 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00533726 fsub dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00533729:;
  /* 00533729 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053372c fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0053372f fsub dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00533732 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00533738 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053373a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053373d je 0x533747 */ if (ZF_) goto L_00533747;
  /* 0053373f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00533741 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00533744 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00533747:;
  /* 00533747 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0053374a fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053374d mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00533750 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00533753 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00533755 push 0x796fd0 */ { u32 v_ = 0x796fd0u; esp -= 4; M32(esp) = v_; }
  /* 0053375a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053375b mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0053375e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053375f mov edx, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); edx = (u32)(M32(m_)); }
  /* 00533765 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533766 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533767 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00533768 call 0x526b60 */ esp -= 4; M32(esp) = 0x53376du; SAVEALL; F_00526b60(c); ABI_CHECK(0x526b60u, 0x533768u); RETCHK(0x53376du, 0x533768u); LOADALL;
  /* 0053376d mov ecx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00533773 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00533775 je 0x53377c */ if (ZF_) goto L_0053377c;
  /* 00533777 call 0x508410 */ esp -= 4; M32(esp) = 0x53377cu; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x533777u); RETCHK(0x53377cu, 0x533777u); LOADALL;
L_0053377c:;
  /* 0053377c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053377d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053377e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533780 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533781 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00533790(CPU *c) {
  NATIVE_HOOK(0x533790u) REGS; LOADALL;
L_00533790:;
  /* 00533790 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533791 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533793 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00533795 push 0x61bac8 */ { u32 v_ = 0x61bac8u; esp -= 4; M32(esp) = v_; }
  /* 0053379a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005337a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005337a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005337a8 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005337ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005337ac mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005337ae mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005337b1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005337b3 jne 0x5337c8 */ if (!ZF_) goto L_005337c8;
  /* 005337b5 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005337b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005337b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005337bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005337c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005337c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005337c5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005337c8:;
  /* 005337c8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005337ca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005337cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005337cc call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5337cfu; SAVEALL; call_ind(c, t_); RETCHK(0x5337cfu, 0x5337ccu); LOADALL; }
  /* 005337cf push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 005337d4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005337d6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5337dbu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5337d6u); RETCHK(0x5337dbu, 0x5337d6u); LOADALL;
  /* 005337db mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005337de fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005337e1 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 005337e6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005337e8 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005337eb call 0x560fd0 */ esp -= 4; M32(esp) = 0x5337f0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5337ebu); RETCHK(0x5337f0u, 0x5337ebu); LOADALL;
  /* 005337f0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005337f3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005337f6 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 005337fb mov eax, edi */ { eax = (u32)(edi); }
  /* 005337fd fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00533800 call 0x560fd0 */ esp -= 4; M32(esp) = 0x533805u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x533800u); RETCHK(0x533805u, 0x533800u); LOADALL;
  /* 00533805 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00533808 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053380b push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00533810 mov eax, edi */ { eax = (u32)(edi); }
  /* 00533812 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00533815 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00533818 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53381du; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x533818u); RETCHK(0x53381du, 0x533818u); LOADALL;
  /* 0053381d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00533820 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00533823 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533824 mov eax, 0x652890 */ { eax = (u32)(0x652890u); }
  /* 00533829 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053382c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053382f call 0x560ed0 */ esp -= 4; M32(esp) = 0x533834u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x53382fu); RETCHK(0x533834u, 0x53382fu); LOADALL;
  /* 00533834 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533835 call 0x5fea82 */ esp -= 4; M32(esp) = 0x53383au; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x533835u); RETCHK(0x53383au, 0x533835u); LOADALL;
  /* 0053383a fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053383d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533840 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533841 mov eax, 0x65288c */ { eax = (u32)(0x65288cu); }
  /* 00533846 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53384bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x533846u); RETCHK(0x53384bu, 0x533846u); LOADALL;
  /* 0053384b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053384c call 0x5fea82 */ esp -= 4; M32(esp) = 0x533851u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x53384cu); RETCHK(0x533851u, 0x53384cu); LOADALL;
  /* 00533851 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00533854 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00533857 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053385a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053385c je 0x53386a */ if (ZF_) goto L_0053386a;
  /* 0053385e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053385f lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00533862 call 0x52d060 */ esp -= 4; M32(esp) = 0x533867u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x533862u); RETCHK(0x533867u, 0x533862u); LOADALL;
  /* 00533867 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053386a:;
  /* 0053386a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053386b mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00533870 call 0x560ed0 */ esp -= 4; M32(esp) = 0x533875u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x533870u); RETCHK(0x533875u, 0x533870u); LOADALL;
  /* 00533875 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00533877 mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 0053387e mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00533885 mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 00533889 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 0053388c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00533890:;
  /* 00533890 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00533892 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00533893 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00533895 jne 0x533890 */ if (!ZF_) goto L_00533890;
  /* 00533897 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00533899 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053389a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053389b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0053389e call 0x404420 */ esp -= 4; M32(esp) = 0x5338a3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53389eu); RETCHK(0x5338a3u, 0x53389eu); LOADALL;
  /* 005338a3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005338a6 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 005338a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005338aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005338ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005338ac mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 005338b1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005338b8 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5338bdu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5338b8u); RETCHK(0x5338bdu, 0x5338b8u); LOADALL;
  /* 005338bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005338be lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005338c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005338c2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005338c3 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005338c6 call 0x5331a0 */ esp -= 4; M32(esp) = 0x5338cbu; SAVEALL; F_005331a0(c); ABI_CHECK(0x5331a0u, 0x5338c6u); RETCHK(0x5338cbu, 0x5338c6u); LOADALL;
  /* 005338cb mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005338cd cmp dword ptr [ebp - 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005338d1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005338d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005338d3 jb 0x5338e1 */ if (CF_) goto L_005338e1;
  /* 005338d5 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 005338d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005338d9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5338deu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5338d9u); RETCHK(0x5338deu, 0x5338d9u); LOADALL;
  /* 005338de add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005338e1:;
  /* 005338e1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005338e4 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005338e6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005338e7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005338ee mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005338f0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005338f1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00533900(CPU *c) {
  NATIVE_HOOK(0x533900u) REGS; LOADALL;
L_00533900:;
  /* 00533900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533903 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00533905 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053390a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00533910 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533911 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00533918 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533919 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053391a push 0x533980 */ { u32 v_ = 0x533980u; esp -= 4; M32(esp) = v_; }
  /* 0053391f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533922 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00533924 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00533926 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00533929 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0053392c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0053392e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053392f lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00533932 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00533939 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053393c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053393d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533940 call 0x404140 */ esp -= 4; M32(esp) = 0x533945u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x533940u); RETCHK(0x533945u, 0x533940u); LOADALL;
  /* 00533945 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533948 call 0x405c00 */ esp -= 4; M32(esp) = 0x53394du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x533948u); RETCHK(0x53394du, 0x533948u); LOADALL;
  /* 0053394d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053394f call 0x405c80 */ esp -= 4; M32(esp) = 0x533954u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x53394fu); RETCHK(0x533954u, 0x53394fu); LOADALL;
  /* 00533954 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533958 jb 0x533966 */ if (CF_) goto L_00533966;
  /* 0053395a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053395d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053395e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533963u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53395eu); RETCHK(0x533963u, 0x53395eu); LOADALL;
  /* 00533963 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533966:;
  /* 00533966 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00533969 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053396b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533972 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00533973 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533975 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533976 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00533980(CPU *c) {
  NATIVE_HOOK(0x533980u) REGS; LOADALL;
L_00533980:;
  /* 00533980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533983 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00533985 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0053398a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00533990 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533991 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00533998 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533999 push 0x1e0 */ { u32 v_ = 0x1e0u; esp -= 4; M32(esp) = v_; }
  /* 0053399e call 0x5fe934 */ esp -= 4; M32(esp) = 0x5339a3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53399eu); RETCHK(0x5339a3u, 0x53399eu); LOADALL;
  /* 005339a3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005339a6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005339a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005339ab mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005339b2 je 0x5339ca */ if (ZF_) goto L_005339ca;
  /* 005339b4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005339b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005339b7 call 0x533010 */ esp -= 4; M32(esp) = 0x5339bcu; SAVEALL; F_00533010(c); ABI_CHECK(0x533010u, 0x5339b7u); RETCHK(0x5339bcu, 0x5339b7u); LOADALL;
  /* 005339bc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005339bf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005339c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005339c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005339c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005339ca:;
  /* 005339ca mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005339cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005339cf mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005339d6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005339d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005339d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005339e0(CPU *c) {
  NATIVE_HOOK(0x5339e0u) REGS; LOADALL;
L_005339e0:;
  /* 005339e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005339e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005339e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005339e5 push 0x62107f */ { u32 v_ = 0x62107fu; esp -= 4; M32(esp) = v_; }
  /* 005339ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005339f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005339f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005339f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005339f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005339fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005339fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005339fc mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005339ff xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00533a01 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533a02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533a03 call 0x50bb70 */ esp -= 4; M32(esp) = 0x533a08u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x533a03u); RETCHK(0x533a08u, 0x533a03u); LOADALL;
  /* 00533a08 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00533a0a mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00533a0d push 0x6537e4 */ { u32 v_ = 0x6537e4u; esp -= 4; M32(esp) = v_; }
  /* 00533a12 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00533a15 mov dword ptr [edi], 0x653678 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x653678u); }
  /* 00533a1b call 0x404420 */ esp -= 4; M32(esp) = 0x533a20u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533a1bu); RETCHK(0x533a20u, 0x533a1bu); LOADALL;
  /* 00533a20 push 0x230 */ { u32 v_ = 0x230u; esp -= 4; M32(esp) = v_; }
  /* 00533a25 mov dword ptr [edi + 0x1d0], ebx */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(ebx); }
  /* 00533a2b mov dword ptr [edi + 0x1cc], ebx */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(ebx); }
  /* 00533a31 mov dword ptr [edi + 0x1d4], ebx */ { const u32 m_ = (u32)(edi + 0x1d4u); M32(m_) = (u32)(ebx); }
  /* 00533a37 mov dword ptr [edi + 0x1d8], ebx */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(ebx); }
  /* 00533a3d mov dword ptr [edi + 0x1dc], ebx */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(ebx); }
  /* 00533a43 mov dword ptr [edi + 0x1e0], ebx */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(ebx); }
  /* 00533a49 mov dword ptr [edi + 0x1e8], ebx */ { const u32 m_ = (u32)(edi + 0x1e8u); M32(m_) = (u32)(ebx); }
  /* 00533a4f call 0x5fe934 */ esp -= 4; M32(esp) = 0x533a54u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x533a4fu); RETCHK(0x533a54u, 0x533a4fu); LOADALL;
  /* 00533a54 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533a57 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00533a5a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533a5c mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00533a60 je 0x533a6b */ if (ZF_) goto L_00533a6b;
  /* 00533a62 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533a63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533a64 call 0x513460 */ esp -= 4; M32(esp) = 0x533a69u; SAVEALL; F_00513460(c); ABI_CHECK(0x513460u, 0x533a64u); RETCHK(0x533a69u, 0x533a64u); LOADALL;
  /* 00533a69 jmp 0x533a6d */ goto L_00533a6d;
L_00533a6b:;
  /* 00533a6b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00533a6d:;
  /* 00533a6d mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533a70 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 00533a75 mov dword ptr [edi + 0x1d8], eax */ { const u32 m_ = (u32)(edi + 0x1d8u); M32(m_) = (u32)(eax); }
  /* 00533a7b call 0x5fe934 */ esp -= 4; M32(esp) = 0x533a80u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x533a7bu); RETCHK(0x533a80u, 0x533a7bu); LOADALL;
  /* 00533a80 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533a83 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00533a86 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533a88 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00533a8c je 0x533a97 */ if (ZF_) goto L_00533a97;
  /* 00533a8e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533a8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533a90 call 0x50d810 */ esp -= 4; M32(esp) = 0x533a95u; SAVEALL; F_0050d810(c); ABI_CHECK(0x50d810u, 0x533a90u); RETCHK(0x533a95u, 0x533a90u); LOADALL;
  /* 00533a95 jmp 0x533a99 */ goto L_00533a99;
L_00533a97:;
  /* 00533a97 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00533a99:;
  /* 00533a99 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533a9c push 0x1fc */ { u32 v_ = 0x1fcu; esp -= 4; M32(esp) = v_; }
  /* 00533aa1 mov dword ptr [edi + 0x1dc], eax */ { const u32 m_ = (u32)(edi + 0x1dcu); M32(m_) = (u32)(eax); }
  /* 00533aa7 call 0x5fe934 */ esp -= 4; M32(esp) = 0x533aacu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x533aa7u); RETCHK(0x533aacu, 0x533aa7u); LOADALL;
  /* 00533aac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533aaf mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00533ab2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533ab4 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00533ab8 je 0x533ac3 */ if (ZF_) goto L_00533ac3;
  /* 00533aba mov esi, eax */ { esi = (u32)(eax); }
  /* 00533abc call 0x5123b0 */ esp -= 4; M32(esp) = 0x533ac1u; SAVEALL; F_005123b0(c); ABI_CHECK(0x5123b0u, 0x533abcu); RETCHK(0x533ac1u, 0x533abcu); LOADALL;
  /* 00533ac1 jmp 0x533ac5 */ goto L_00533ac5;
L_00533ac3:;
  /* 00533ac3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00533ac5:;
  /* 00533ac5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533ac8 push 0x1bc */ { u32 v_ = 0x1bcu; esp -= 4; M32(esp) = v_; }
  /* 00533acd mov dword ptr [edi + 0x1e0], eax */ { const u32 m_ = (u32)(edi + 0x1e0u); M32(m_) = (u32)(eax); }
  /* 00533ad3 call 0x5fe934 */ esp -= 4; M32(esp) = 0x533ad8u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x533ad3u); RETCHK(0x533ad8u, 0x533ad3u); LOADALL;
  /* 00533ad8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533adb mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00533ade cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533ae0 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00533ae4 je 0x533aef */ if (ZF_) goto L_00533aef;
  /* 00533ae6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533ae7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533ae8 call 0x51ce90 */ esp -= 4; M32(esp) = 0x533aedu; SAVEALL; F_0051ce90(c); ABI_CHECK(0x51ce90u, 0x533ae8u); RETCHK(0x533aedu, 0x533ae8u); LOADALL;
  /* 00533aed jmp 0x533af1 */ goto L_00533af1;
L_00533aef:;
  /* 00533aef xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00533af1:;
  /* 00533af1 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533af4 push 0x278 */ { u32 v_ = 0x278u; esp -= 4; M32(esp) = v_; }
  /* 00533af9 mov dword ptr [edi + 0x1e8], eax */ { const u32 m_ = (u32)(edi + 0x1e8u); M32(m_) = (u32)(eax); }
  /* 00533aff call 0x5fe934 */ esp -= 4; M32(esp) = 0x533b04u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x533affu); RETCHK(0x533b04u, 0x533affu); LOADALL;
  /* 00533b04 mov esi, eax */ { esi = (u32)(eax); }
  /* 00533b06 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533b09 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00533b0c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533b0e mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 00533b12 je 0x533b23 */ if (ZF_) goto L_00533b23;
  /* 00533b14 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00533b16 call 0x513730 */ esp -= 4; M32(esp) = 0x533b1bu; SAVEALL; F_00513730(c); ABI_CHECK(0x513730u, 0x533b16u); RETCHK(0x533b1bu, 0x533b16u); LOADALL;
  /* 00533b1b mov dword ptr [edi + 0x1e4], eax */ { const u32 m_ = (u32)(edi + 0x1e4u); M32(m_) = (u32)(eax); }
  /* 00533b21 jmp 0x533b29 */ goto L_00533b29;
L_00533b23:;
  /* 00533b23 mov dword ptr [edi + 0x1e4], ebx */ { const u32 m_ = (u32)(edi + 0x1e4u); M32(m_) = (u32)(ebx); }
L_00533b29:;
  /* 00533b29 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00533b2c mov eax, edi */ { eax = (u32)(edi); }
  /* 00533b2e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00533b2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00533b30 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00533b31 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533b38 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533b3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533b3b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00533b40(CPU *c) {
  NATIVE_HOOK(0x533b40u) REGS; LOADALL;
L_00533b40:;
  /* 00533b40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533b41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533b43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533b44 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00533b46 call 0x533b70 */ esp -= 4; M32(esp) = 0x533b4bu; SAVEALL; F_00533b70(c); ABI_CHECK(0x533b70u, 0x533b46u); RETCHK(0x533b4bu, 0x533b46u); LOADALL;
  /* 00533b4b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00533b4f je 0x533b5a */ if (ZF_) goto L_00533b5a;
  /* 00533b51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533b52 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533b57u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533b52u); RETCHK(0x533b57u, 0x533b52u); LOADALL;
  /* 00533b57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533b5a:;
  /* 00533b5a mov eax, esi */ { eax = (u32)(esi); }
  /* 00533b5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00533b5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533b5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00533b70(CPU *c) {
  NATIVE_HOOK(0x533b70u) REGS; LOADALL;
L_00533b70:;
  /* 00533b70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533b71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533b73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00533b75 push 0x61d9a8 */ { u32 v_ = 0x61d9a8u; esp -= 4; M32(esp) = v_; }
  /* 00533b7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00533b80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533b81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00533b88 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533b89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533b8a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00533b8c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533b8d mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00533b90 mov dword ptr [esi], 0x653678 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653678u); }
  /* 00533b96 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00533b98 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00533b9b mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 00533ba1 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533ba3 je 0x533bb1 */ if (ZF_) goto L_00533bb1;
  /* 00533ba5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00533ba7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00533ba9 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533babu; SAVEALL; call_ind(c, t_); RETCHK(0x533babu, 0x533ba9u); LOADALL; }
  /* 00533bab mov dword ptr [esi + 0x1d8], edi */ { const u32 m_ = (u32)(esi + 0x1d8u); M32(m_) = (u32)(edi); }
L_00533bb1:;
  /* 00533bb1 mov ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00533bb7 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533bb9 je 0x533bc7 */ if (ZF_) goto L_00533bc7;
  /* 00533bbb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00533bbd push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00533bbf call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533bc1u; SAVEALL; call_ind(c, t_); RETCHK(0x533bc1u, 0x533bbfu); LOADALL; }
  /* 00533bc1 mov dword ptr [esi + 0x1dc], edi */ { const u32 m_ = (u32)(esi + 0x1dcu); M32(m_) = (u32)(edi); }
L_00533bc7:;
  /* 00533bc7 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00533bcd cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533bcf je 0x533bdd */ if (ZF_) goto L_00533bdd;
  /* 00533bd1 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00533bd3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00533bd5 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533bd7u; SAVEALL; call_ind(c, t_); RETCHK(0x533bd7u, 0x533bd5u); LOADALL; }
  /* 00533bd7 mov dword ptr [esi + 0x1e0], edi */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(edi); }
L_00533bdd:;
  /* 00533bdd mov ecx, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 00533be3 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533be5 je 0x533bf3 */ if (ZF_) goto L_00533bf3;
  /* 00533be7 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00533be9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00533beb call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533bedu; SAVEALL; call_ind(c, t_); RETCHK(0x533bedu, 0x533bebu); LOADALL; }
  /* 00533bed mov dword ptr [esi + 0x1e4], edi */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(edi); }
L_00533bf3:;
  /* 00533bf3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00533bf5 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00533bfc call 0x50bc50 */ esp -= 4; M32(esp) = 0x533c01u; SAVEALL; F_0050bc50(c); ABI_CHECK(0x50bc50u, 0x533bfcu); RETCHK(0x533c01u, 0x533bfcu); LOADALL;
  /* 00533c01 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00533c04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00533c05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00533c06 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533c0d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533c0f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533c10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00533c20(CPU *c) {
  NATIVE_HOOK(0x533c20u) REGS; LOADALL;
L_00533c20:;
  /* 00533c20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00533c21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00533c23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00533c25 push 0x61c60b */ { u32 v_ = 0x61c60bu; esp -= 4; M32(esp) = v_; }
  /* 00533c2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00533c30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533c31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00533c38 sub esp, 0x90 */ { u32 a_ = esp, b_ = 0x90u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533c3e mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00533c41 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533c42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00533c43 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533c44 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00533c47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533c48 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00533c4b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533c4c mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00533c4e mov dword ptr [edi + 0x1d0], 0x98 */ { const u32 m_ = (u32)(edi + 0x1d0u); M32(m_) = (u32)(0x98u); }
  /* 00533c58 mov dword ptr [edi + 0x1cc], 0xd2 */ { const u32 m_ = (u32)(edi + 0x1ccu); M32(m_) = (u32)(0xd2u); }
  /* 00533c62 call 0x50bfc0 */ esp -= 4; M32(esp) = 0x533c67u; SAVEALL; F_0050bfc0(c); ABI_CHECK(0x50bfc0u, 0x533c62u); RETCHK(0x533c67u, 0x533c62u); LOADALL;
  /* 00533c67 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00533c69 jne 0x533c7e */ if (!ZF_) goto L_00533c7e;
  /* 00533c6b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00533c6e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00533c75 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00533c76 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00533c77 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00533c78 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00533c7a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00533c7b ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_00533c7e:;
  /* 00533c7e mov eax, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00533c84 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00533c86 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533c88 je 0x533d17 */ if (ZF_) goto L_00533d17;
  /* 00533c8e push 0x42600000 */ { u32 v_ = 0x42600000u; esp -= 4; M32(esp) = v_; }
  /* 00533c93 push 0x43ba8000 */ { u32 v_ = 0x43ba8000u; esp -= 4; M32(esp) = v_; }
  /* 00533c98 push 0x41e80000 */ { u32 v_ = 0x41e80000u; esp -= 4; M32(esp) = v_; }
  /* 00533c9d push 0x42e20000 */ { u32 v_ = 0x42e20000u; esp -= 4; M32(esp) = v_; }
  /* 00533ca2 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533ca5 call 0x52cec0 */ esp -= 4; M32(esp) = 0x533caau; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x533ca5u); RETCHK(0x533caau, 0x533ca5u); LOADALL;
  /* 00533caa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00533cab lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533cae call 0x52cf90 */ esp -= 4; M32(esp) = 0x533cb3u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x533caeu); RETCHK(0x533cb3u, 0x533caeu); LOADALL;
  /* 00533cb3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533cb6 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00533cb8 push 0x6537c4 */ { u32 v_ = 0x6537c4u; esp -= 4; M32(esp) = v_; }
  /* 00533cbd lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00533cc0 mov dword ptr [ebp - 0x3c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0xfu); }
  /* 00533cc7 mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 00533cca mov byte ptr [ebp - 0x50], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533ccd call 0x404420 */ esp -= 4; M32(esp) = 0x533cd2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533ccdu); RETCHK(0x533cd2u, 0x533ccdu); LOADALL;
  /* 00533cd2 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00533cd5 mov edi, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); edi = (u32)(M32(m_)); }
  /* 00533cdb mov esi, 0x6537d0 */ { esi = (u32)(0x6537d0u); }
  /* 00533ce0 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533ce3 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00533ce6 call 0x5363f0 */ esp -= 4; M32(esp) = 0x533cebu; SAVEALL; F_005363f0(c); ABI_CHECK(0x5363f0u, 0x533ce6u); RETCHK(0x533cebu, 0x533ce6u); LOADALL;
  /* 00533ceb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00533cf2 cmp dword ptr [ebp - 0x3c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533cf6 jb 0x533d04 */ if (CF_) goto L_00533d04;
  /* 00533cf8 mov edx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); edx = (u32)(M32(m_)); }
  /* 00533cfb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00533cfc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533d01u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533cfcu); RETCHK(0x533d01u, 0x533cfcu); LOADALL;
  /* 00533d01 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533d04:;
  /* 00533d04 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00533d07 mov eax, dword ptr [eax + 0x1d8] */ { const u32 m_ = (u32)(eax + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 00533d0d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00533d0f call 0x5366d0 */ esp -= 4; M32(esp) = 0x533d14u; SAVEALL; F_005366d0(c); ABI_CHECK(0x5366d0u, 0x533d0fu); RETCHK(0x533d14u, 0x533d0fu); LOADALL;
  /* 00533d14 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_00533d17:;
  /* 00533d17 push 0x429e0000 */ { u32 v_ = 0x429e0000u; esp -= 4; M32(esp) = v_; }
  /* 00533d1c push 0x431d0000 */ { u32 v_ = 0x431d0000u; esp -= 4; M32(esp) = v_; }
  /* 00533d21 push 0x42940000 */ { u32 v_ = 0x42940000u; esp -= 4; M32(esp) = v_; }
  /* 00533d26 push 0x41980000 */ { u32 v_ = 0x41980000u; esp -= 4; M32(esp) = v_; }
  /* 00533d2b lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533d2e call 0x52cec0 */ esp -= 4; M32(esp) = 0x533d33u; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x533d2eu); RETCHK(0x533d33u, 0x533d2eu); LOADALL;
  /* 00533d33 cmp dword ptr [edi + 0x1e8], ebx */ { const u32 m_ = (u32)(edi + 0x1e8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533d39 je 0x533e3a */ if (ZF_) goto L_00533e3a;
  /* 00533d3f push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00533d41 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 00533d46 push 0x6537b0 */ { u32 v_ = 0x6537b0u; esp -= 4; M32(esp) = v_; }
  /* 00533d4b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00533d4e mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 00533d51 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 00533d54 mov byte ptr [ebp - 0x34], bl */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533d57 call 0x404420 */ esp -= 4; M32(esp) = 0x533d5cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533d57u); RETCHK(0x533d5cu, 0x533d57u); LOADALL;
  /* 00533d5c mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00533d63 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00533d65 push 0x6537a4 */ { u32 v_ = 0x6537a4u; esp -= 4; M32(esp) = v_; }
  /* 00533d6a lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00533d6d mov dword ptr [ebp - 0x3c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(esi); }
  /* 00533d70 mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 00533d73 mov byte ptr [ebp - 0x50], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533d76 call 0x404420 */ esp -= 4; M32(esp) = 0x533d7bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533d76u); RETCHK(0x533d7bu, 0x533d76u); LOADALL;
  /* 00533d7b mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00533d7f push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00533d81 push 0x6537a0 */ { u32 v_ = 0x6537a0u; esp -= 4; M32(esp) = v_; }
  /* 00533d86 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00533d89 mov dword ptr [ebp - 0x68], esi */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(esi); }
  /* 00533d8c mov dword ptr [ebp - 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ebx); }
  /* 00533d8f mov byte ptr [ebp - 0x7c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533d92 call 0x404420 */ esp -= 4; M32(esp) = 0x533d97u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533d92u); RETCHK(0x533d97u, 0x533d92u); LOADALL;
  /* 00533d97 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00533d9a mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00533d9e mov esi, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); esi = (u32)(M32(m_)); }
  /* 00533da4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533da5 lea ebx, [ebp - 0x54] */ ebx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00533da8 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533dab lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00533dae call 0x51cf50 */ esp -= 4; M32(esp) = 0x533db3u; SAVEALL; F_0051cf50(c); ABI_CHECK(0x51cf50u, 0x533daeu); RETCHK(0x533db3u, 0x533daeu); LOADALL;
  /* 00533db3 mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 00533db6 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00533dbb cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533dbd jb 0x533dcb */ if (CF_) goto L_00533dcb;
  /* 00533dbf mov edx, dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); edx = (u32)(M32(m_)); }
  /* 00533dc2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00533dc3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533dc8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533dc3u); RETCHK(0x533dc8u, 0x533dc3u); LOADALL;
  /* 00533dc8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533dcb:;
  /* 00533dcb mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 00533dce xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00533dd0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533dd2 mov dword ptr [ebp - 0x68], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(0xfu); }
  /* 00533dd9 mov dword ptr [ebp - 0x6c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(ebx); }
  /* 00533ddc mov byte ptr [ebp - 0x7c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533ddf jb 0x533ded */ if (CF_) goto L_00533ded;
  /* 00533de1 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 00533de4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533de5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533deau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533de5u); RETCHK(0x533deau, 0x533de5u); LOADALL;
  /* 00533dea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533ded:;
  /* 00533ded mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00533df4 cmp dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533df7 mov dword ptr [ebp - 0x3c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0xfu); }
  /* 00533dfe mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 00533e01 mov byte ptr [ebp - 0x50], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533e04 jb 0x533e12 */ if (CF_) goto L_00533e12;
  /* 00533e06 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00533e09 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533e0a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533e0fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533e0au); RETCHK(0x533e0fu, 0x533e0au); LOADALL;
  /* 00533e0f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533e12:;
  /* 00533e12 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00533e18 push 0x43960000 */ { u32 v_ = 0x43960000u; esp -= 4; M32(esp) = v_; }
  /* 00533e1d call 0x51c870 */ esp -= 4; M32(esp) = 0x533e22u; SAVEALL; F_0051c870(c); ABI_CHECK(0x51c870u, 0x533e1du); RETCHK(0x533e22u, 0x533e1du); LOADALL;
  /* 00533e22 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00533e25 mov ecx, dword ptr [edi + 0x1e8] */ { const u32 m_ = (u32)(edi + 0x1e8u); ecx = (u32)(M32(m_)); }
  /* 00533e2b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00533e2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533e2e mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00533e31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533e32 call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533e38u; SAVEALL; call_ind(c, t_); RETCHK(0x533e38u, 0x533e32u); LOADALL; }
  /* 00533e38 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00533e3a:;
  /* 00533e3a cmp dword ptr [edi + 0x1dc], ebx */ { const u32 m_ = (u32)(edi + 0x1dcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533e40 je 0x533ebd */ if (ZF_) goto L_00533ebd;
  /* 00533e42 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00533e44 lea eax, [ebp - 0x1c] */ eax = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533e47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533e48 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00533e4a call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533e4du; SAVEALL; call_ind(c, t_); RETCHK(0x533e4du, 0x533e4au); LOADALL; }
  /* 00533e4d mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00533e50 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533e51 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533e54 call 0x52cf90 */ esp -= 4; M32(esp) = 0x533e59u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x533e54u); RETCHK(0x533e59u, 0x533e54u); LOADALL;
  /* 00533e59 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533e5c push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00533e5e push 0x653784 */ { u32 v_ = 0x653784u; esp -= 4; M32(esp) = v_; }
  /* 00533e63 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00533e66 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 00533e6d mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 00533e70 mov byte ptr [ebp - 0x34], bl */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533e73 call 0x404420 */ esp -= 4; M32(esp) = 0x533e78u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533e73u); RETCHK(0x533e78u, 0x533e73u); LOADALL;
  /* 00533e78 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533e79 push 0x653790 */ { u32 v_ = 0x653790u; esp -= 4; M32(esp) = v_; }
  /* 00533e7e sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533e81 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00533e88 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00533e8a mov eax, esp */ { eax = (u32)(esp); }
  /* 00533e8c mov dword ptr [ebp + 0x10], esp */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esp); }
  /* 00533e8f call 0x52cea0 */ esp -= 4; M32(esp) = 0x533e94u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x533e8fu); RETCHK(0x533e94u, 0x533e8fu); LOADALL;
  /* 00533e94 mov ebx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ebx = (u32)(M32(m_)); }
  /* 00533e9a lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00533e9d call 0x50da30 */ esp -= 4; M32(esp) = 0x533ea2u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x533e9du); RETCHK(0x533ea2u, 0x533e9du); LOADALL;
  /* 00533ea2 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00533ea9 cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533ead jb 0x533ebb */ if (CF_) goto L_00533ebb;
  /* 00533eaf mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 00533eb2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00533eb3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533eb8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533eb3u); RETCHK(0x533eb8u, 0x533eb3u); LOADALL;
  /* 00533eb8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533ebb:;
  /* 00533ebb xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00533ebd:;
  /* 00533ebd cmp dword ptr [edi + 0x1e0], ebx */ { const u32 m_ = (u32)(edi + 0x1e0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533ec3 je 0x533f40 */ if (ZF_) goto L_00533f40;
  /* 00533ec5 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00533ec7 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533eca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533ecb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00533ecd call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533ed0u; SAVEALL; call_ind(c, t_); RETCHK(0x533ed0u, 0x533ecdu); LOADALL; }
  /* 00533ed0 mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 00533ed3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00533ed4 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00533ed7 call 0x52cf90 */ esp -= 4; M32(esp) = 0x533edcu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x533ed7u); RETCHK(0x533edcu, 0x533ed7u); LOADALL;
  /* 00533edc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533edf push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00533ee1 push 0x653768 */ { u32 v_ = 0x653768u; esp -= 4; M32(esp) = v_; }
  /* 00533ee6 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00533ee9 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 00533ef0 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 00533ef3 mov byte ptr [ebp - 0x34], bl */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533ef6 call 0x404420 */ esp -= 4; M32(esp) = 0x533efbu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533ef6u); RETCHK(0x533efbu, 0x533ef6u); LOADALL;
  /* 00533efb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533efc push 0x653774 */ { u32 v_ = 0x653774u; esp -= 4; M32(esp) = v_; }
  /* 00533f01 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533f04 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 00533f0b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00533f0d mov eax, esp */ { eax = (u32)(esp); }
  /* 00533f0f mov dword ptr [ebp + 0x10], esp */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esp); }
  /* 00533f12 call 0x52cea0 */ esp -= 4; M32(esp) = 0x533f17u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x533f12u); RETCHK(0x533f17u, 0x533f12u); LOADALL;
  /* 00533f17 mov ebx, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); ebx = (u32)(M32(m_)); }
  /* 00533f1d lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00533f20 call 0x50da30 */ esp -= 4; M32(esp) = 0x533f25u; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x533f20u); RETCHK(0x533f25u, 0x533f20u); LOADALL;
  /* 00533f25 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00533f2c cmp dword ptr [ebp - 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533f30 jb 0x533f3e */ if (CF_) goto L_00533f3e;
  /* 00533f32 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00533f35 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533f36 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533f3bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533f36u); RETCHK(0x533f3bu, 0x533f36u); LOADALL;
  /* 00533f3b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533f3e:;
  /* 00533f3e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00533f40:;
  /* 00533f40 cmp dword ptr [edi + 0x1e4], ebx */ { const u32 m_ = (u32)(edi + 0x1e4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533f46 je 0x5340d9 */ if (ZF_) goto L_005340d9;
  /* 00533f4c mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00533f4e lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00533f51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00533f52 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00533f54 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x533f57u; SAVEALL; call_ind(c, t_); RETCHK(0x533f57u, 0x533f54u); LOADALL; }
  /* 00533f57 mov ecx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00533f5a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00533f5b lea esi, [ebp - 0x64] */ esi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00533f5e call 0x52cf90 */ esp -= 4; M32(esp) = 0x533f63u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x533f5eu); RETCHK(0x533f63u, 0x533f5eu); LOADALL;
  /* 00533f63 fld dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); FPUSH((double)MF32(m_)); }
  /* 00533f66 fadd dword ptr [0x657074] */ { const u32 m_ = (u32)(0x657074u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00533f6c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533f6f push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00533f71 push 0x653660 */ { u32 v_ = 0x653660u; esp -= 4; M32(esp) = v_; }
  /* 00533f76 fst dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); MF32(m_) = (float)ST(0); }
  /* 00533f79 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 00533f7f fadd dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00533f85 mov dword ptr [ebp - 0x84], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(0xfu); }
  /* 00533f8f mov dword ptr [ebp - 0x88], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(ebx); }
  /* 00533f95 mov byte ptr [ebp - 0x98], bl */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00533f9b fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00533f9e fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 00533fa1 fadd dword ptr [0x65700c] */ { const u32 m_ = (u32)(0x65700cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00533fa7 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00533faa call 0x404420 */ esp -= 4; M32(esp) = 0x533fafu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x533faau); RETCHK(0x533fafu, 0x533faau); LOADALL;
  /* 00533faf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00533fb0 push 0x653658 */ { u32 v_ = 0x653658u; esp -= 4; M32(esp) = v_; }
  /* 00533fb5 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00533fb8 mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 00533fbf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00533fc1 mov eax, esp */ { eax = (u32)(esp); }
  /* 00533fc3 mov dword ptr [ebp + 0x10], esp */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esp); }
  /* 00533fc6 call 0x52cea0 */ esp -= 4; M32(esp) = 0x533fcbu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x533fc6u); RETCHK(0x533fcbu, 0x533fc6u); LOADALL;
  /* 00533fcb mov ebx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); ebx = (u32)(M32(m_)); }
  /* 00533fd1 lea eax, [ebp - 0x9c] */ eax = (u32)((u32)(ebp + 0xffffff64u));
  /* 00533fd7 call 0x50da30 */ esp -= 4; M32(esp) = 0x533fdcu; SAVEALL; F_0050da30(c); ABI_CHECK(0x50da30u, 0x533fd7u); RETCHK(0x533fdcu, 0x533fd7u); LOADALL;
  /* 00533fdc or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00533fdf mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00533fe2 cmp dword ptr [ebp - 0x84], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00533fe9 jb 0x533ffa */ if (CF_) goto L_00533ffa;
  /* 00533feb mov edx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); edx = (u32)(M32(m_)); }
  /* 00533ff1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00533ff2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x533ff7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x533ff2u); RETCHK(0x533ff7u, 0x533ff2u); LOADALL;
  /* 00533ff7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00533ffa:;
  /* 00533ffa mov ecx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 00534000 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00534002 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 00534007 mov dword ptr [ebp - 0x84], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(0xfu); }
  /* 00534011 mov dword ptr [ebp - 0x88], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(ebx); }
  /* 00534017 mov byte ptr [ebp - 0x98], bl */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053401d call 0x5141e0 */ esp -= 4; M32(esp) = 0x534022u; SAVEALL; F_005141e0(c); ABI_CHECK(0x5141e0u, 0x53401du); RETCHK(0x534022u, 0x53401du); LOADALL;
  /* 00534022 mov edx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); edx = (u32)(M32(m_)); }
  /* 00534028 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 0053402b mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0053402e mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00534031 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00534034 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00534037 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
  /* 0053403a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053403c xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0053403e call 0x514220 */ esp -= 4; M32(esp) = 0x534043u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x53403eu); RETCHK(0x534043u, 0x53403eu); LOADALL;
  /* 00534043 mov edx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); edx = (u32)(M32(m_)); }
  /* 00534049 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053404b mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00534050 call 0x514220 */ esp -= 4; M32(esp) = 0x534055u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x534050u); RETCHK(0x534055u, 0x534050u); LOADALL;
  /* 00534055 mov edx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); edx = (u32)(M32(m_)); }
  /* 0053405b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053405d mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 00534062 call 0x514220 */ esp -= 4; M32(esp) = 0x534067u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x534062u); RETCHK(0x534067u, 0x534062u); LOADALL;
  /* 00534067 mov edx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); edx = (u32)(M32(m_)); }
  /* 0053406d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053406f mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 00534074 call 0x514220 */ esp -= 4; M32(esp) = 0x534079u; SAVEALL; F_00514220(c); ABI_CHECK(0x514220u, 0x534074u); RETCHK(0x534079u, 0x534074u); LOADALL;
  /* 00534079 mov ecx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 0053407f mov eax, 0x43000000 */ { eax = (u32)(0x43000000u); }
  /* 00534084 mov dword ptr [ecx + 0x240], eax */ { const u32 m_ = (u32)(ecx + 0x240u); M32(m_) = (u32)(eax); }
  /* 0053408a mov edx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); edx = (u32)(M32(m_)); }
  /* 00534090 mov dword ptr [edx + 0x23c], eax */ { const u32 m_ = (u32)(edx + 0x23cu); M32(m_) = (u32)(eax); }
  /* 00534096 mov eax, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 0053409c mov dword ptr [eax + 0x230], 0xa */ { const u32 m_ = (u32)(eax + 0x230u); M32(m_) = (u32)(0xau); }
  /* 005340a6 mov ecx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 005340ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005340ad lea edi, [ebp + 0x10] */ edi = (u32)((u32)(ebp + 0x10u));
  /* 005340b0 lea edx, [ebp - 0x1c] */ edx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005340b3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005340b5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005340b7 mov dword ptr [ebp - 0x10], 0x200 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x200u); }
  /* 005340be mov dword ptr [ebp + 0x10], 1 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x1u); }
  /* 005340c5 call 0x514260 */ esp -= 4; M32(esp) = 0x5340cau; SAVEALL; F_00514260(c); ABI_CHECK(0x514260u, 0x5340c5u); RETCHK(0x5340cau, 0x5340c5u); LOADALL;
  /* 005340ca mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005340cd mov ecx, dword ptr [edx + 0x1e4] */ { const u32 m_ = (u32)(edx + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 005340d3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005340d5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005340d6 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5340d9u; SAVEALL; call_ind(c, t_); RETCHK(0x5340d9u, 0x5340d6u); LOADALL; }
L_005340d9:;
  /* 005340d9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005340dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005340dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005340de mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005340e0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005340e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005340e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005340ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005340eb ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_005340f0(CPU *c) {
  NATIVE_HOOK(0x5340f0u) REGS; LOADALL;
L_005340f0:;
  /* 005340f0 mov dword ptr [eax + 0x1cc], ecx */ { const u32 m_ = (u32)(eax + 0x1ccu); M32(m_) = (u32)(ecx); }
  /* 005340f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534100(CPU *c) {
  NATIVE_HOOK(0x534100u) REGS; LOADALL;
L_00534100:;
  /* 00534100 mov eax, dword ptr [ecx + 0x1cc] */ { const u32 m_ = (u32)(ecx + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 00534106 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00534108 jle 0x534111 */ if ((ZF_|LT_)) goto L_00534111;
  /* 0053410a mov dword ptr [ecx + 0x1d0], eax */ { const u32 m_ = (u32)(ecx + 0x1d0u); M32(m_) = (u32)(eax); }
  /* 00534110 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534111:;
  /* 00534111 mov dword ptr [ecx + 0x1d0], edx */ { const u32 m_ = (u32)(ecx + 0x1d0u); M32(m_) = (u32)(edx); }
  /* 00534117 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534120(CPU *c) {
  NATIVE_HOOK(0x534120u) REGS; LOADALL;
L_00534120:;
  /* 00534120 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534121 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534123 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534124 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534126 fild dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); FPUSH((double)(s32)M32(m_)); }
  /* 0053412c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053412d fild dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); FPUSH((double)(s32)M32(m_)); }
  /* 00534133 fmul dword ptr [0x657024] */ { const u32 m_ = (u32)(0x657024u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534139 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 0053413b call 0x61b154 */ esp -= 4; M32(esp) = 0x534140u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x53413bu); RETCHK(0x534140u, 0x53413bu); LOADALL;
  /* 00534140 cmp eax, 0xb4 */ { u32 a_ = eax, b_ = 0xb4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00534145 mov dword ptr [esi + 0x1d4], eax */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(eax); }
  /* 0053414b jle 0x534157 */ if ((ZF_|LT_)) goto L_00534157;
  /* 0053414d mov dword ptr [esi + 0x1d4], 0xb4 */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(0xb4u); }
L_00534157:;
  /* 00534157 mov ecx, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 0053415d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053415f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00534162 je 0x534179 */ if (ZF_) goto L_00534179;
  /* 00534164 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00534166 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534169u; SAVEALL; call_ind(c, t_); RETCHK(0x534169u, 0x534166u); LOADALL; }
  /* 00534169 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053416b je 0x534179 */ if (ZF_) goto L_00534179;
  /* 0053416d mov ecx, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 00534173 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00534175 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534176 call dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534179u; SAVEALL; call_ind(c, t_); RETCHK(0x534179u, 0x534176u); LOADALL; }
L_00534179:;
  /* 00534179 mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 0053417f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534181 je 0x53418e */ if (ZF_) goto L_0053418e;
  /* 00534183 mov ecx, dword ptr [esi + 0x1d0] */ { const u32 m_ = (u32)(esi + 0x1d0u); ecx = (u32)(M32(m_)); }
  /* 00534189 call 0x5366d0 */ esp -= 4; M32(esp) = 0x53418eu; SAVEALL; F_005366d0(c); ABI_CHECK(0x5366d0u, 0x534189u); RETCHK(0x53418eu, 0x534189u); LOADALL;
L_0053418e:;
  /* 0053418e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053418f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00534191 call 0x508630 */ esp -= 4; M32(esp) = 0x534196u; SAVEALL; F_00508630(c); ABI_CHECK(0x508630u, 0x534191u); RETCHK(0x534196u, 0x534191u); LOADALL;
  /* 00534196 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534197 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534198 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534199 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005341a0(CPU *c) {
  NATIVE_HOOK(0x5341a0u) REGS; LOADALL;
L_005341a0:;
  /* 005341a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005341a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005341a3 mov eax, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); eax = (u32)(M32(m_)); }
  /* 005341a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005341ab je 0x5341b4 */ if (ZF_) goto L_005341b4;
  /* 005341ad mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005341af mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005341b1 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5341b4u; SAVEALL; call_ind(c, t_); RETCHK(0x5341b4u, 0x5341b1u); LOADALL; }
L_005341b4:;
  /* 005341b4 mov eax, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 005341ba test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005341bc je 0x5341c5 */ if (ZF_) goto L_005341c5;
  /* 005341be mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005341c0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005341c2 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5341c5u; SAVEALL; call_ind(c, t_); RETCHK(0x5341c5u, 0x5341c2u); LOADALL; }
L_005341c5:;
  /* 005341c5 mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 005341cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005341cd je 0x5341d6 */ if (ZF_) goto L_005341d6;
  /* 005341cf mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005341d1 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005341d3 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5341d6u; SAVEALL; call_ind(c, t_); RETCHK(0x5341d6u, 0x5341d3u); LOADALL; }
L_005341d6:;
  /* 005341d6 mov eax, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); eax = (u32)(M32(m_)); }
  /* 005341dc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005341de je 0x5341e7 */ if (ZF_) goto L_005341e7;
  /* 005341e0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005341e2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005341e4 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5341e7u; SAVEALL; call_ind(c, t_); RETCHK(0x5341e7u, 0x5341e4u); LOADALL; }
L_005341e7:;
  /* 005341e7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005341e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005341ea jmp 0x50c650 */ SAVEALL; F_0050c650(c); return;
}

void F_005341f0(CPU *c) {
  NATIVE_HOOK(0x5341f0u) REGS; LOADALL;
L_005341f0:;
  /* 005341f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005341f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005341f3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005341f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005341f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005341f8 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005341fa mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005341fc lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005341ff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534200 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00534202 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534205u; SAVEALL; call_ind(c, t_); RETCHK(0x534205u, 0x534202u); LOADALL; }
  /* 00534205 mov edx, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 00534208 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00534209 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0053420c call 0x52cf90 */ esp -= 4; M32(esp) = 0x534211u; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x53420cu); RETCHK(0x534211u, 0x53420cu); LOADALL;
  /* 00534211 mov ecx, dword ptr [edi + 0x1dc] */ { const u32 m_ = (u32)(edi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 00534217 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053421a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053421c je 0x534223 */ if (ZF_) goto L_00534223;
  /* 0053421e call 0x508410 */ esp -= 4; M32(esp) = 0x534223u; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x53421eu); RETCHK(0x534223u, 0x53421eu); LOADALL;
L_00534223:;
  /* 00534223 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00534225 call 0x50c550 */ esp -= 4; M32(esp) = 0x53422au; SAVEALL; F_0050c550(c); ABI_CHECK(0x50c550u, 0x534225u); RETCHK(0x53422au, 0x534225u); LOADALL;
  /* 0053422a mov eax, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 00534230 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534232 je 0x534246 */ if (ZF_) goto L_00534246;
  /* 00534234 mov esi, edi */ { esi = (u32)(edi); }
  /* 00534236 call 0x534400 */ esp -= 4; M32(esp) = 0x53423bu; SAVEALL; F_00534400(c); ABI_CHECK(0x534400u, 0x534236u); RETCHK(0x53423bu, 0x534236u); LOADALL;
  /* 0053423b mov ecx, dword ptr [edi + 0x1e0] */ { const u32 m_ = (u32)(edi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00534241 call 0x508410 */ esp -= 4; M32(esp) = 0x534246u; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x534241u); RETCHK(0x534246u, 0x534241u); LOADALL;
L_00534246:;
  /* 00534246 mov ecx, dword ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 0053424c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053424e je 0x534255 */ if (ZF_) goto L_00534255;
  /* 00534250 call 0x508410 */ esp -= 4; M32(esp) = 0x534255u; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x534250u); RETCHK(0x534255u, 0x534250u); LOADALL;
L_00534255:;
  /* 00534255 mov ecx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 0053425b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053425d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0053425e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053425f je 0x534266 */ if (ZF_) goto L_00534266;
  /* 00534261 call 0x508410 */ esp -= 4; M32(esp) = 0x534266u; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x534261u); RETCHK(0x534266u, 0x534261u); LOADALL;
L_00534266:;
  /* 00534266 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00534268 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534269 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534270(CPU *c) {
  NATIVE_HOOK(0x534270u) REGS; LOADALL;
L_00534270:;
  /* 00534270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534273 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00534275 push 0x61bac8 */ { u32 v_ = 0x61bac8u; esp -= 4; M32(esp) = v_; }
  /* 0053427a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00534280 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534281 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00534288 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053428b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053428c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0053428e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534291 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534293 jne 0x5342a8 */ if (!ZF_) goto L_005342a8;
  /* 00534295 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534297 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00534298 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053429b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005342a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005342a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005342a5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005342a8:;
  /* 005342a8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005342aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005342ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005342ac call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5342afu; SAVEALL; call_ind(c, t_); RETCHK(0x5342afu, 0x5342acu); LOADALL; }
  /* 005342af push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 005342b4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005342b6 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5342bbu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5342b6u); RETCHK(0x5342bbu, 0x5342b6u); LOADALL;
  /* 005342bb mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005342be fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005342c1 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 005342c6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005342c8 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005342cb call 0x560fd0 */ esp -= 4; M32(esp) = 0x5342d0u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5342cbu); RETCHK(0x5342d0u, 0x5342cbu); LOADALL;
  /* 005342d0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005342d3 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005342d6 push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 005342db mov eax, edi */ { eax = (u32)(edi); }
  /* 005342dd fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005342e0 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5342e5u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5342e0u); RETCHK(0x5342e5u, 0x5342e0u); LOADALL;
  /* 005342e5 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005342e8 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005342eb push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 005342f0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005342f2 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005342f5 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005342f8 call 0x560fd0 */ esp -= 4; M32(esp) = 0x5342fdu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x5342f8u); RETCHK(0x5342fdu, 0x5342f8u); LOADALL;
  /* 005342fd mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00534300 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00534303 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534304 mov eax, 0x652890 */ { eax = (u32)(0x652890u); }
  /* 00534309 fadd dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053430c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053430f call 0x560ed0 */ esp -= 4; M32(esp) = 0x534314u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x53430fu); RETCHK(0x534314u, 0x53430fu); LOADALL;
  /* 00534314 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534315 call 0x5fea82 */ esp -= 4; M32(esp) = 0x53431au; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x534315u); RETCHK(0x53431au, 0x534315u); LOADALL;
  /* 0053431a fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053431d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534320 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534321 mov eax, 0x65288c */ { eax = (u32)(0x65288cu); }
  /* 00534326 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53432bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x534326u); RETCHK(0x53432bu, 0x534326u); LOADALL;
  /* 0053432b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053432c call 0x5fea82 */ esp -= 4; M32(esp) = 0x534331u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x53432cu); RETCHK(0x534331u, 0x53432cu); LOADALL;
  /* 00534331 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534334 mov eax, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00534337 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053433a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053433c je 0x53434a */ if (ZF_) goto L_0053434a;
  /* 0053433e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053433f lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00534342 call 0x52d060 */ esp -= 4; M32(esp) = 0x534347u; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x534342u); RETCHK(0x534347u, 0x534342u); LOADALL;
  /* 00534347 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053434a:;
  /* 0053434a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053434b mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00534350 call 0x560ed0 */ esp -= 4; M32(esp) = 0x534355u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x534350u); RETCHK(0x534355u, 0x534350u); LOADALL;
  /* 00534355 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00534357 mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 0053435e mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 00534365 mov byte ptr [ebp - 0x38], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)(0x0u); }
  /* 00534369 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 0053436c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00534370:;
  /* 00534370 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534372 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00534373 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534375 jne 0x534370 */ if (!ZF_) goto L_00534370;
  /* 00534377 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00534379 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053437a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053437b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0053437e call 0x404420 */ esp -= 4; M32(esp) = 0x534383u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53437eu); RETCHK(0x534383u, 0x53437eu); LOADALL;
  /* 00534383 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534386 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00534389 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053438a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053438b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053438c mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00534391 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00534398 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53439du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x534398u); RETCHK(0x53439du, 0x534398u); LOADALL;
  /* 0053439d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053439e lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005343a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005343a2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005343a3 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005343a6 call 0x533c20 */ esp -= 4; M32(esp) = 0x5343abu; SAVEALL; F_00533c20(c); ABI_CHECK(0x533c20u, 0x5343a6u); RETCHK(0x5343abu, 0x5343a6u); LOADALL;
  /* 005343ab mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005343ad cmp dword ptr [ebp - 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005343b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005343b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005343b3 jb 0x5343c1 */ if (CF_) goto L_005343c1;
  /* 005343b5 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 005343b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005343b9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5343beu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5343b9u); RETCHK(0x5343beu, 0x5343b9u); LOADALL;
  /* 005343be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005343c1:;
  /* 005343c1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005343c4 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005343c6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005343c7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005343ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005343d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005343d1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0053436e(CPU *c) {
  NATIVE_HOOK(0x53436eu) REGS; LOADALL;
L_0053436e:;
  /* 0053436e and al, 0 */ { u32 a_ = (eax & 0xffu), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_00534370:;
  /* 00534370 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534372 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00534373 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534375 jne 0x534370 */ if (!ZF_) goto L_00534370;
  /* 00534377 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00534379 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053437a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053437b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0053437e call 0x404420 */ esp -= 4; M32(esp) = 0x534383u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53437eu); RETCHK(0x534383u, 0x53437eu); LOADALL;
  /* 00534383 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534386 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00534389 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053438a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053438b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053438c mov eax, 0x6501a0 */ { eax = (u32)(0x6501a0u); }
  /* 00534391 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00534398 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53439du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x534398u); RETCHK(0x53439du, 0x534398u); LOADALL;
  /* 0053439d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053439e lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 005343a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005343a2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005343a3 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005343a6 call 0x533c20 */ esp -= 4; M32(esp) = 0x5343abu; SAVEALL; F_00533c20(c); ABI_CHECK(0x533c20u, 0x5343a6u); RETCHK(0x5343abu, 0x5343a6u); LOADALL;
  /* 005343ab mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005343ad cmp dword ptr [ebp - 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005343b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005343b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005343b3 jb 0x5343c1 */ if (CF_) goto L_005343c1;
  /* 005343b5 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 005343b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005343b9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5343beu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5343b9u); RETCHK(0x5343beu, 0x5343b9u); LOADALL;
  /* 005343be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005343c1:;
  /* 005343c1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005343c4 mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005343c6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005343c7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005343ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005343d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005343d1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00534400(CPU *c) {
  NATIVE_HOOK(0x534400u) REGS; LOADALL;
L_00534400:;
  /* 00534400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534403 sub esp, 0x60 */ { u32 a_ = esp, b_ = 0x60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534406 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 0053440c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053440d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0053440f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00534411 je 0x53476c */ if (ZF_) goto L_0053476c;
  /* 00534417 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00534419 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053441a lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0053441d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053441e call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534421u; SAVEALL; call_ind(c, t_); RETCHK(0x534421u, 0x53441eu); LOADALL; }
  /* 00534421 mov edi, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); edi = (u32)(M32(m_)); }
  /* 00534427 mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0053442d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053442f je 0x534442 */ if (ZF_) goto L_00534442;
  /* 00534431 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00534434 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00534436 je 0x534442 */ if (ZF_) goto L_00534442;
  /* 00534438 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0053443a mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053443d mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 00534440 jmp 0x534445 */ goto L_00534445;
L_00534442:;
  /* 00534442 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
L_00534445:;
  /* 00534445 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00534448 mov eax, dword ptr [edi + 0x194] */ { const u32 m_ = (u32)(edi + 0x194u); eax = (u32)(M32(m_)); }
  /* 0053444e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00534450 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534453 je 0x534466 */ if (ZF_) goto L_00534466;
  /* 00534455 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00534458 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053445a je 0x534466 */ if (ZF_) goto L_00534466;
  /* 0053445c mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0053445e mov eax, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00534461 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 00534464 jmp 0x534469 */ goto L_00534469;
L_00534466:;
  /* 00534466 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
L_00534469:;
  /* 00534469 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0053446c mov eax, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); eax = (u32)(M32(m_)); }
  /* 00534472 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00534474 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534477 jge 0x534481 */ if (!LT_) goto L_00534481;
  /* 00534479 mov dword ptr [esi + 0x1d4], ebx */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(ebx); }
  /* 0053447f jmp 0x534492 */ goto L_00534492;
L_00534481:;
  /* 00534481 cmp eax, 0xb4 */ { u32 a_ = eax, b_ = 0xb4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00534486 jle 0x534492 */ if ((ZF_|LT_)) goto L_00534492;
  /* 00534488 mov dword ptr [esi + 0x1d4], 0xb4 */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(0xb4u); }
L_00534492:;
  /* 00534492 mov ecx, dword ptr [esi + 0x1d4] */ { const u32 m_ = (u32)(esi + 0x1d4u); ecx = (u32)(M32(m_)); }
  /* 00534498 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 0053449e cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005344a0 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 005344a3 jne 0x5344b0 */ if (!ZF_) goto L_005344b0;
  /* 005344a5 fst dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); }
  /* 005344a8 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005344ab jmp 0x5345a1 */ goto L_005345a1;
L_005344b0:;
  /* 005344b0 cmp ecx, 0x5a */ { u32 a_ = ecx, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005344b3 jne 0x5344c8 */ if (!ZF_) goto L_005344c8;
  /* 005344b5 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005344b8 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005344be fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005344c1 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 005344c3 jmp 0x5345a1 */ goto L_005345a1;
L_005344c8:;
  /* 005344c8 cmp ecx, 0xb4 */ { u32 a_ = ecx, b_ = 0xb4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005344ce jne 0x5344de */ if (!ZF_) goto L_005344de;
  /* 005344d0 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005344d3 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 005344d6 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 005344d9 jmp 0x5345a1 */ goto L_005345a1;
L_005344de:;
  /* 005344de cmp ecx, 0x5a */ { u32 a_ = ecx, b_ = 0x5au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005344e1 jge 0x53453c */ if (!LT_) goto L_0053453c;
  /* 005344e3 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005344e6 mov edx, 0x5a */ { edx = (u32)(0x5au); }
  /* 005344eb fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005344f1 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005344f3 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 005344f6 fst dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); }
  /* 005344f9 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 005344fc fmul qword ptr [0x656fd8] */ { const u32 m_ = (u32)(0x656fd8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00534502 fptan */ ST(0) = m_tan(ST(0)); FPUSH(1.0); c->fsw &= ~0x400u;
  /* 00534504 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00534506 fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534509 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0053450b fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053450e fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00534510 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00534512 fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00534515 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00534517 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053451a jne 0x5345a1 */ if (!ZF_) goto L_005345a1;
  /* 00534520 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00534522 fst dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); }
  /* 00534525 fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00534528 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053452b fmul qword ptr [0x656fd8] */ { const u32 m_ = (u32)(0x656fd8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00534531 fptan */ ST(0) = m_tan(ST(0)); FPUSH(1.0); c->fsw &= ~0x400u;
  /* 00534533 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00534535 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534538 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0053453a jmp 0x5345a1 */ goto L_005345a1;
L_0053453c:;
  /* 0053453c jle 0x53459e */ if ((ZF_|LT_)) goto L_0053459e;
  /* 0053453e fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00534541 lea eax, [ecx - 0x5a] */ eax = (u32)((u32)(ecx + 0xffffffa6u));
  /* 00534544 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053454a mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0053454d fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534550 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 00534553 fmul qword ptr [0x656fd8] */ { const u32 m_ = (u32)(0x656fd8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00534559 fptan */ ST(0) = m_tan(ST(0)); FPUSH(1.0); c->fsw &= ~0x400u;
  /* 0053455b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053455d fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534560 fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534563 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534566 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 00534568 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 0053456b fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0053456e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00534570 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534573 jp 0x5345a1 */ if (PF_) goto L_005345a1;
  /* 00534575 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00534577 mov eax, 0xb4 */ { eax = (u32)(0xb4u); }
  /* 0053457c fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 0053457f sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00534581 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00534584 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 00534587 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0053458a mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0053458d fmul qword ptr [0x656fd8] */ { const u32 m_ = (u32)(0x656fd8u); ST(0) = FR(ST(0) * MF64(m_)); }
  /* 00534593 fptan */ ST(0) = m_tan(ST(0)); FPUSH(1.0); c->fsw &= ~0x400u;
  /* 00534595 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00534597 fmul dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0053459a fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 0053459c jmp 0x5345a1 */ goto L_005345a1;
L_0053459e:;
  /* 0053459e fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
L_005345a1:;
  /* 005345a1 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 005345a4 call 0x61b154 */ esp -= 4; M32(esp) = 0x5345a9u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5345a4u); RETCHK(0x5345a9u, 0x5345a4u); LOADALL;
  /* 005345a9 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005345ac fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 005345af fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005345b2 call 0x61b154 */ esp -= 4; M32(esp) = 0x5345b7u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5345b2u); RETCHK(0x5345b7u, 0x5345b2u); LOADALL;
  /* 005345b7 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 005345ba fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 005345bd mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 005345c4 mov dword ptr [ebp - 0x34], 0x3f000000 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x3f000000u); }
  /* 005345cb mov dword ptr [ebp - 0x24], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x3f800000u); }
  /* 005345d2 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005345d5 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005345d8 fst dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); }
  /* 005345db fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 005345de fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005345e1 fst dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); }
  /* 005345e4 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 005345e6 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005345e9 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005345ec fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005345f2 fst dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); }
  /* 005345f5 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 005345f7 fst dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); }
  /* 005345fa fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005345fd fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534600 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 00534603 fcomp dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00534609 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053460b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053460e jp 0x534641 */ if (PF_) goto L_00534641;
  /* 00534610 fstp dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534613 mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 00534616 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 00534619 mov dword ptr [ebp - 0x50], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ecx); }
  /* 0053461c fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053461f fst dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); }
  /* 00534622 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00534624 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534627 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 0053462a fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0053462d fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534630 mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 00534633 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 00534636 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534639 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053463c jmp 0x534743 */ goto L_00534743;
L_00534641:;
  /* 00534641 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 00534644 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 00534647 fsub dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053464d mov dword ptr [ebp - 0x5c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edx); }
  /* 00534650 fcomp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00534653 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00534655 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534658 jp 0x53471e */ if (PF_) goto L_0053471e;
  /* 0053465e mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00534661 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00534663 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534666 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00534668 mov dword ptr [ebp - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 0053466b fstp dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053466e lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00534671 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534672 fst dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); }
  /* 00534675 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00534678 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053467b mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 0053467e mov dword ptr [ebp - 0x38], 0x3f000000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x3f000000u); }
  /* 00534685 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00534687 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00534688 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0053468a call dword ptr [eax + 0xf0] */ { const u32 m_ = (u32)(eax + 0xf0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534690u; SAVEALL; call_ind(c, t_); RETCHK(0x534690u, 0x53468au); LOADALL; }
  /* 00534690 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00534696 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00534698 lea edx, [ebp - 0x60] */ edx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0053469b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053469c call dword ptr [eax + 0xf4] */ { const u32 m_ = (u32)(eax + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5346a2u; SAVEALL; call_ind(c, t_); RETCHK(0x5346a2u, 0x53469cu); LOADALL; }
  /* 005346a2 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 005346a8 call 0x508410 */ esp -= 4; M32(esp) = 0x5346adu; SAVEALL; F_00508410(c); ABI_CHECK(0x508410u, 0x5346a8u); RETCHK(0x5346adu, 0x5346a8u); LOADALL;
  /* 005346ad fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 005346b0 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005346b3 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005346b6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005346b8 mov dword ptr [ebp - 0x5c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(eax); }
  /* 005346bb fst dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); }
  /* 005346be mov dword ptr [ebp - 0x40], 0x3f000000 */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(0x3f000000u); }
  /* 005346c5 fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005346c8 mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 005346cf fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 005346d2 mov dword ptr [ebp - 0x3c], 0x3f000000 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(0x3f000000u); }
  /* 005346d9 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005346dc mov dword ptr [ebp - 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x3f800000u); }
  /* 005346e3 mov dword ptr [ebp - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 005346e6 mov dword ptr [ebp - 0x38], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(0x3f800000u); }
  /* 005346ed fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005346f0 mov dword ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x0u); }
  /* 005346f7 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 005346fa mov dword ptr [ebp - 0x34], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x3f800000u); }
  /* 00534701 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534704 fst dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); }
  /* 00534707 fstp dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053470a fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 0053470d fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534710 fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534713 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00534716 fdiv dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00534719 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053471c jmp 0x534743 */ goto L_00534743;
L_0053471e:;
  /* 0053471e fst dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); }
  /* 00534721 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00534724 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00534726 mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 00534729 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053472c fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 0053472e fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534731 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534734 fstp dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534737 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 0053473a fdiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0053473d fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534740 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
L_00534743:;
  /* 00534743 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00534749 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0053474b lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0053474e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053474f lea eax, [ebp - 0x40] */ eax = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00534752 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534753 call dword ptr [edx + 0xf0] */ { const u32 m_ = (u32)(edx + 0xf0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534759u; SAVEALL; call_ind(c, t_); RETCHK(0x534759u, 0x534753u); LOADALL; }
  /* 00534759 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 0053475f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00534761 lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00534764 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534765 call dword ptr [edx + 0xf4] */ { const u32 m_ = (u32)(edx + 0xf4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53476bu; SAVEALL; call_ind(c, t_); RETCHK(0x53476bu, 0x534765u); LOADALL; }
  /* 0053476b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0053476c:;
  /* 0053476c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053476d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053476f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534770 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534780(CPU *c) {
  NATIVE_HOOK(0x534780u) REGS; LOADALL;
L_00534780:;
  /* 00534780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534783 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534786 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00534789 mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 0053478f lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00534792 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00534793 fst dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); }
  /* 00534796 fadd dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534799 fstp dword ptr [esi + 0x4c] */ { const u32 m_ = (u32)(esi + 0x4cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053479c fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0053479f fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 005347a2 fadd dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005347a5 fstp dword ptr [esi + 0x50] */ { const u32 m_ = (u32)(esi + 0x50u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005347a8 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005347ab fadd dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005347ae fstp dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005347b1 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005347b4 fadd dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005347b7 fstp dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005347ba mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005347bc call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5347bfu; SAVEALL; call_ind(c, t_); RETCHK(0x5347bfu, 0x5347bcu); LOADALL; }
  /* 005347bf fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005347c2 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005347c5 mov ecx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ecx = (u32)(M32(m_)); }
  /* 005347cb lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005347ce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005347cf fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005347d2 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005347d5 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005347d8 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005347db mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005347dd call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5347e0u; SAVEALL; call_ind(c, t_); RETCHK(0x5347e0u, 0x5347ddu); LOADALL; }
  /* 005347e0 mov ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 005347e6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005347e8 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005347eb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005347ec call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5347efu; SAVEALL; call_ind(c, t_); RETCHK(0x5347efu, 0x5347ecu); LOADALL; }
  /* 005347ef fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005347f2 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005347f5 mov ecx, dword ptr [esi + 0x1dc] */ { const u32 m_ = (u32)(esi + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 005347fb lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005347fe push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005347ff fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534802 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00534805 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534808 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053480b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053480d call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534810u; SAVEALL; call_ind(c, t_); RETCHK(0x534810u, 0x53480du); LOADALL; }
  /* 00534810 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 00534816 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00534818 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0053481b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053481c call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53481fu; SAVEALL; call_ind(c, t_); RETCHK(0x53481fu, 0x53481cu); LOADALL; }
  /* 0053481f fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00534822 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534825 mov ecx, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); ecx = (u32)(M32(m_)); }
  /* 0053482b lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0053482e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053482f fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534832 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00534835 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534838 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053483b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053483d call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534840u; SAVEALL; call_ind(c, t_); RETCHK(0x534840u, 0x53483du); LOADALL; }
  /* 00534840 mov ecx, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 00534846 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00534848 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0053484b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053484c call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53484fu; SAVEALL; call_ind(c, t_); RETCHK(0x53484fu, 0x53484cu); LOADALL; }
  /* 0053484f fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00534852 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534855 mov ecx, dword ptr [esi + 0x1e4] */ { const u32 m_ = (u32)(esi + 0x1e4u); ecx = (u32)(M32(m_)); }
  /* 0053485b lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0053485e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0053485f fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534862 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00534865 fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534868 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053486b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0053486d call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534870u; SAVEALL; call_ind(c, t_); RETCHK(0x534870u, 0x53486du); LOADALL; }
  /* 00534870 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00534872 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534873 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00534880(CPU *c) {
  NATIVE_HOOK(0x534880u) REGS; LOADALL;
L_00534880:;
  /* 00534880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534883 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00534885 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0053488a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00534890 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534891 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00534898 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534899 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053489a push 0x534900 */ { u32 v_ = 0x534900u; esp -= 4; M32(esp) = v_; }
  /* 0053489f sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005348a2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005348a4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 005348a6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005348a9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 005348ac push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005348ae push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005348af lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 005348b2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 005348b9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005348bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005348bd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005348c0 call 0x404140 */ esp -= 4; M32(esp) = 0x5348c5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5348c0u); RETCHK(0x5348c5u, 0x5348c0u); LOADALL;
  /* 005348c5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005348c8 call 0x405c00 */ esp -= 4; M32(esp) = 0x5348cdu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x5348c8u); RETCHK(0x5348cdu, 0x5348c8u); LOADALL;
  /* 005348cd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005348cf call 0x405c80 */ esp -= 4; M32(esp) = 0x5348d4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x5348cfu); RETCHK(0x5348d4u, 0x5348cfu); LOADALL;
  /* 005348d4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005348d8 jb 0x5348e6 */ if (CF_) goto L_005348e6;
  /* 005348da mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005348dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005348de call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5348e3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5348deu); RETCHK(0x5348e3u, 0x5348deu); LOADALL;
  /* 005348e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005348e6:;
  /* 005348e6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005348e9 mov eax, esi */ { eax = (u32)(esi); }
  /* 005348eb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005348f2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005348f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005348f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005348f6 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00534900(CPU *c) {
  NATIVE_HOOK(0x534900u) REGS; LOADALL;
L_00534900:;
  /* 00534900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534903 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00534905 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0053490a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00534910 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534911 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00534918 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534919 push 0x1ec */ { u32 v_ = 0x1ecu; esp -= 4; M32(esp) = v_; }
  /* 0053491e call 0x5fe934 */ esp -= 4; M32(esp) = 0x534923u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x53491eu); RETCHK(0x534923u, 0x53491eu); LOADALL;
  /* 00534923 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534926 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00534929 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053492b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00534932 je 0x534948 */ if (ZF_) goto L_00534948;
  /* 00534934 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534935 call 0x5339e0 */ esp -= 4; M32(esp) = 0x53493au; SAVEALL; F_005339e0(c); ABI_CHECK(0x5339e0u, 0x534935u); RETCHK(0x53493au, 0x534935u); LOADALL;
  /* 0053493a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053493d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00534944 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00534946 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534947 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534948:;
  /* 00534948 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0053494b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053494d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00534954 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00534956 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534957 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534960(CPU *c) {
  NATIVE_HOOK(0x534960u) REGS; LOADALL;
L_00534960:;
  /* 00534960 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00534962 mov dword ptr [eax], 0x653844 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x653844u); }
  /* 00534968 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0053496b mov byte ptr [eax + 4], cl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0053496e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534970(CPU *c) {
  NATIVE_HOOK(0x534970u) REGS; LOADALL;
L_00534970:;
  /* 00534970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534973 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534974 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534976 call 0x5349a0 */ esp -= 4; M32(esp) = 0x53497bu; SAVEALL; F_005349a0(c); ABI_CHECK(0x5349a0u, 0x534976u); RETCHK(0x53497bu, 0x534976u); LOADALL;
  /* 0053497b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053497f je 0x53498a */ if (ZF_) goto L_0053498a;
  /* 00534981 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534982 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x534987u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x534982u); RETCHK(0x534987u, 0x534982u); LOADALL;
  /* 00534987 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053498a:;
  /* 0053498a mov eax, esi */ { eax = (u32)(esi); }
  /* 0053498c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053498d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053498e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005349a0(CPU *c) {
  NATIVE_HOOK(0x5349a0u) REGS; LOADALL;
L_005349a0:;
  /* 005349a0 mov dword ptr [ecx], 0x653844 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x653844u); }
  /* 005349a6 jmp 0x52ce20 */ SAVEALL; F_0052ce20(c); return;
}

void F_005349b0(CPU *c) {
  NATIVE_HOOK(0x5349b0u) REGS; LOADALL;
L_005349b0:;
  /* 005349b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005349b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005349b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005349b4 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005349b7 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005349b9 je 0x5349c4 */ if (ZF_) goto L_005349c4;
  /* 005349bb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005349be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005349bf call 0x4fa2c0 */ esp -= 4; M32(esp) = 0x5349c4u; SAVEALL; F_004fa2c0(c); ABI_CHECK(0x4fa2c0u, 0x5349bfu); RETCHK(0x5349c4u, 0x5349bfu); LOADALL;
L_005349c4:;
  /* 005349c4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005349c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005349c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005349d0(CPU *c) {
  NATIVE_HOOK(0x5349d0u) REGS; LOADALL;
L_005349d0:;
  /* 005349d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005349d1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005349d3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005349d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005349d6 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5349d9u; SAVEALL; call_ind(c, t_); RETCHK(0x5349d9u, 0x5349d6u); LOADALL; }
  /* 005349d9 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 005349dc test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005349de je 0x5349f9 */ if (ZF_) goto L_005349f9;
  /* 005349e0 call 0x4fa270 */ esp -= 4; M32(esp) = 0x5349e5u; SAVEALL; F_004fa270(c); ABI_CHECK(0x4fa270u, 0x5349e0u); RETCHK(0x5349e5u, 0x5349e0u); LOADALL;
  /* 005349e5 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005349e8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005349ea je 0x5349f2 */ if (ZF_) goto L_005349f2;
  /* 005349ec mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 005349ee push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005349f0 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5349f2u; SAVEALL; call_ind(c, t_); RETCHK(0x5349f2u, 0x5349f0u); LOADALL; }
L_005349f2:;
  /* 005349f2 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
L_005349f9:;
  /* 005349f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005349fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005349fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534a00(CPU *c) {
  NATIVE_HOOK(0x534a00u) REGS; LOADALL;
L_00534a00:;
  /* 00534a00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534a01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534a03 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00534a05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534a06 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00534a08 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534a0bu; SAVEALL; call_ind(c, t_); RETCHK(0x534a0bu, 0x534a08u); LOADALL; }
  /* 00534a0b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534a0e mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00534a10 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00534a13 call 0x518bb0 */ esp -= 4; M32(esp) = 0x534a18u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x534a13u); RETCHK(0x534a18u, 0x534a13u); LOADALL;
  /* 00534a18 call 0x518170 */ esp -= 4; M32(esp) = 0x534a1du; SAVEALL; F_00518170(c); ABI_CHECK(0x518170u, 0x534a18u); RETCHK(0x534a1du, 0x534a18u); LOADALL;
  /* 00534a1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534a1e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00534a20 call dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534a23u; SAVEALL; call_ind(c, t_); RETCHK(0x534a23u, 0x534a20u); LOADALL; }
  /* 00534a23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534a24 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534a25 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534a30(CPU *c) {
  NATIVE_HOOK(0x534a30u) REGS; LOADALL;
L_00534a30:;
  /* 00534a30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534a31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534a33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534a34 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534a36 mov al, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534a39 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534a3b jne 0x534a57 */ if (!ZF_) goto L_00534a57;
  /* 00534a3d mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534a40 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534a42 je 0x534a57 */ if (ZF_) goto L_00534a57;
  /* 00534a44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534a45 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534a48 call 0x4fa380 */ esp -= 4; M32(esp) = 0x534a4du; SAVEALL; F_004fa380(c); ABI_CHECK(0x4fa380u, 0x534a48u); RETCHK(0x534a4du, 0x534a48u); LOADALL;
  /* 00534a4d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00534a4f mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00534a52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534a53 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534a54 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00534a57:;
  /* 00534a57 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534a59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534a5a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534a5b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534a60(CPU *c) {
  NATIVE_HOOK(0x534a60u) REGS; LOADALL;
L_00534a60:;
  /* 00534a60 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534a61 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00534a63 mov al, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534a66 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534a68 je 0x534a85 */ if (ZF_) goto L_00534a85;
  /* 00534a6a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534a6b mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00534a6e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534a70 jne 0x534a77 */ if (!ZF_) goto L_00534a77;
  /* 00534a72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534a73 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534a75 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534a76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534a77:;
  /* 00534a77 call 0x4fa3d0 */ esp -= 4; M32(esp) = 0x534a7cu; SAVEALL; F_004fa3d0(c); ABI_CHECK(0x4fa3d0u, 0x534a77u); RETCHK(0x534a7cu, 0x534a77u); LOADALL;
  /* 00534a7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534a7d mov byte ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 00534a81 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00534a83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534a84 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534a85:;
  /* 00534a85 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534a87 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534a88 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534a90(CPU *c) {
  NATIVE_HOOK(0x534a90u) REGS; LOADALL;
L_00534a90:;
  /* 00534a90 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534a93 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534a95 je 0x534aa1 */ if (ZF_) goto L_00534aa1;
  /* 00534a97 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00534a9a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534a9d mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00534aa0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534aa1:;
  /* 00534aa1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00534aa3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534ab0(CPU *c) {
  NATIVE_HOOK(0x534ab0u) REGS; LOADALL;
L_00534ab0:;
  /* 00534ab0 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 00534ab6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534ac0(CPU *c) {
  NATIVE_HOOK(0x534ac0u) REGS; LOADALL;
L_00534ac0:;
  /* 00534ac0 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534ac3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534ac5 je 0x534ae3 */ if (ZF_) goto L_00534ae3;
  /* 00534ac7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534ac8 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 00534acb mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534ace push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00534ad0 push 0x4fac00 */ { u32 v_ = 0x4fac00u; esp -= 4; M32(esp) = v_; }
  /* 00534ad5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534ad6 call 0x577da0 */ esp -= 4; M32(esp) = 0x534adbu; SAVEALL; F_00577da0(c); ABI_CHECK(0x577da0u, 0x534ad6u); RETCHK(0x534adbu, 0x534ad6u); LOADALL;
  /* 00534adb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534ade mov byte ptr [esi + 0x38], 0 */ { const u32 m_ = (u32)(esi + 0x38u); M8(m_) = (u8)(0x0u); }
  /* 00534ae2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00534ae3:;
  /* 00534ae3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534af0(CPU *c) {
  NATIVE_HOOK(0x534af0u) REGS; LOADALL;
L_00534af0:;
  /* 00534af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534af3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534af4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534af6 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534af9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534afb je 0x534b26 */ if (ZF_) goto L_00534b26;
  /* 00534afd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00534afe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534aff call 0x4fb430 */ esp -= 4; M32(esp) = 0x534b04u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x534affu); RETCHK(0x534b04u, 0x534affu); LOADALL;
  /* 00534b04 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00534b07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534b08 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534b0b call 0x4fb850 */ esp -= 4; M32(esp) = 0x534b10u; SAVEALL; F_004fb850(c); ABI_CHECK(0x4fb850u, 0x534b0bu); RETCHK(0x534b10u, 0x534b0bu); LOADALL;
  /* 00534b10 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534b13 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00534b16 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00534b18 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00534b1a add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00534b1d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00534b1f call 0x544a10 */ esp -= 4; M32(esp) = 0x534b24u; SAVEALL; F_00544a10(c); ABI_CHECK(0x544a10u, 0x534b1fu); RETCHK(0x534b24u, 0x534b1fu); LOADALL;
  /* 00534b24 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534b25 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00534b26:;
  /* 00534b26 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534b27 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534b28 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00534b30(CPU *c) {
  NATIVE_HOOK(0x534b30u) REGS; LOADALL;
L_00534b30:;
  /* 00534b30 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00534b32 mov dword ptr [eax], 0x65381c */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x65381cu); }
  /* 00534b38 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00534b3b mov byte ptr [eax + 4], cl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00534b3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534b40(CPU *c) {
  NATIVE_HOOK(0x534b40u) REGS; LOADALL;
L_00534b40:;
  /* 00534b40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534b41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534b43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534b44 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534b46 call 0x534b70 */ esp -= 4; M32(esp) = 0x534b4bu; SAVEALL; F_00534b70(c); ABI_CHECK(0x534b70u, 0x534b46u); RETCHK(0x534b4bu, 0x534b46u); LOADALL;
  /* 00534b4b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534b4f je 0x534b5a */ if (ZF_) goto L_00534b5a;
  /* 00534b51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534b52 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x534b57u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x534b52u); RETCHK(0x534b57u, 0x534b52u); LOADALL;
  /* 00534b57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00534b5a:;
  /* 00534b5a mov eax, esi */ { eax = (u32)(esi); }
  /* 00534b5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534b5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534b5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534b70(CPU *c) {
  NATIVE_HOOK(0x534b70u) REGS; LOADALL;
L_00534b70:;
  /* 00534b70 mov dword ptr [ecx], 0x65381c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x65381cu); }
  /* 00534b76 jmp 0x52ce20 */ SAVEALL; F_0052ce20(c); return;
}

void F_00534b80(CPU *c) {
  NATIVE_HOOK(0x534b80u) REGS; LOADALL;
L_00534b80:;
  /* 00534b80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534b81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534b83 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534b86 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534b88 je 0x534b90 */ if (ZF_) goto L_00534b90;
  /* 00534b8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534b8b jmp 0x4fb160 */ SAVEALL; F_004fb160(c); return;
L_00534b90:;
  /* 00534b90 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534b91 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534ba0(CPU *c) {
  NATIVE_HOOK(0x534ba0u) REGS; LOADALL;
L_00534ba0:;
  /* 00534ba0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534ba1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534ba2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00534ba4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00534ba6 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534ba9u; SAVEALL; call_ind(c, t_); RETCHK(0x534ba9u, 0x534ba6u); LOADALL; }
  /* 00534ba9 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00534bac test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534bae je 0x534bc9 */ if (ZF_) goto L_00534bc9;
  /* 00534bb0 call 0x4fb170 */ esp -= 4; M32(esp) = 0x534bb5u; SAVEALL; F_004fb170(c); ABI_CHECK(0x4fb170u, 0x534bb0u); RETCHK(0x534bb5u, 0x534bb0u); LOADALL;
  /* 00534bb5 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534bb8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534bba je 0x534bc2 */ if (ZF_) goto L_00534bc2;
  /* 00534bbc mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00534bbe push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00534bc0 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534bc2u; SAVEALL; call_ind(c, t_); RETCHK(0x534bc2u, 0x534bc0u); LOADALL; }
L_00534bc2:;
  /* 00534bc2 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
L_00534bc9:;
  /* 00534bc9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534bca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534bcb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534bd0(CPU *c) {
  NATIVE_HOOK(0x534bd0u) REGS; LOADALL;
L_00534bd0:;
  /* 00534bd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534bd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534bd3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00534bd4 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00534bd6 mov al, byte ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534bd9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534bdb jne 0x534c02 */ if (!ZF_) goto L_00534c02;
  /* 00534bdd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534bde mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00534be1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534be3 jne 0x534bed */ if (!ZF_) goto L_00534bed;
  /* 00534be5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534be6 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534be8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00534be9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534bea ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00534bed:;
  /* 00534bed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534bee mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00534bf1 call 0x4fb240 */ esp -= 4; M32(esp) = 0x534bf6u; SAVEALL; F_004fb240(c); ABI_CHECK(0x4fb240u, 0x534bf1u); RETCHK(0x534bf6u, 0x534bf1u); LOADALL;
  /* 00534bf6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534bf7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00534bf9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534bfa mov byte ptr [ebx + 4], al */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00534bfd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00534bfe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534bff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00534c02:;
  /* 00534c02 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534c04 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00534c05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534c06 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534c10(CPU *c) {
  NATIVE_HOOK(0x534c10u) REGS; LOADALL;
L_00534c10:;
  /* 00534c10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534c11 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534c13 mov al, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534c16 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534c18 je 0x534c35 */ if (ZF_) goto L_00534c35;
  /* 00534c1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534c1b mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 00534c1e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534c20 jne 0x534c27 */ if (!ZF_) goto L_00534c27;
  /* 00534c22 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534c23 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534c25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534c26 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534c27:;
  /* 00534c27 call 0x4fb260 */ esp -= 4; M32(esp) = 0x534c2cu; SAVEALL; F_004fb260(c); ABI_CHECK(0x4fb260u, 0x534c27u); RETCHK(0x534c2cu, 0x534c27u); LOADALL;
  /* 00534c2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534c2d mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 00534c31 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00534c33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534c34 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534c35:;
  /* 00534c35 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534c37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534c38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534c40(CPU *c) {
  NATIVE_HOOK(0x534c40u) REGS; LOADALL;
L_00534c40:;
  /* 00534c40 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534c43 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534c45 je 0x534c4e */ if (ZF_) goto L_00534c4e;
  /* 00534c47 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00534c4a mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00534c4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534c4e:;
  /* 00534c4e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00534c50 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534c60(CPU *c) {
  NATIVE_HOOK(0x534c60u) REGS; LOADALL;
L_00534c60:;
  /* 00534c60 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00534c62 mov dword ptr [eax], 0x6537f0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6537f0u); }
  /* 00534c68 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00534c6b mov byte ptr [eax + 4], cl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00534c6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534c70(CPU *c) {
  NATIVE_HOOK(0x534c70u) REGS; LOADALL;
L_00534c70:;
  /* 00534c70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534c71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534c73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534c74 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534c76 call 0x534ca0 */ esp -= 4; M32(esp) = 0x534c7bu; SAVEALL; F_00534ca0(c); ABI_CHECK(0x534ca0u, 0x534c76u); RETCHK(0x534c7bu, 0x534c76u); LOADALL;
  /* 00534c7b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534c7f je 0x534c8a */ if (ZF_) goto L_00534c8a;
  /* 00534c81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534c82 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x534c87u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x534c82u); RETCHK(0x534c87u, 0x534c82u); LOADALL;
  /* 00534c87 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00534c8a:;
  /* 00534c8a mov eax, esi */ { eax = (u32)(esi); }
  /* 00534c8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534c8d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534c8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534ca0(CPU *c) {
  NATIVE_HOOK(0x534ca0u) REGS; LOADALL;
L_00534ca0:;
  /* 00534ca0 mov dword ptr [ecx], 0x6537f0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6537f0u); }
  /* 00534ca6 jmp 0x52ce20 */ SAVEALL; F_0052ce20(c); return;
}

void F_00534cb0(CPU *c) {
  NATIVE_HOOK(0x534cb0u) REGS; LOADALL;
L_00534cb0:;
  /* 00534cb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534cb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534cb3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534cb4 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00534cb7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534cb9 je 0x534cc4 */ if (ZF_) goto L_00534cc4;
  /* 00534cbb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534cbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534cbf call 0x4fa960 */ esp -= 4; M32(esp) = 0x534cc4u; SAVEALL; F_004fa960(c); ABI_CHECK(0x4fa960u, 0x534cbfu); RETCHK(0x534cc4u, 0x534cbfu); LOADALL;
L_00534cc4:;
  /* 00534cc4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534cc5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534cc6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534cd0(CPU *c) {
  NATIVE_HOOK(0x534cd0u) REGS; LOADALL;
L_00534cd0:;
  /* 00534cd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534cd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534cd2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00534cd4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00534cd6 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534cd9u; SAVEALL; call_ind(c, t_); RETCHK(0x534cd9u, 0x534cd6u); LOADALL; }
  /* 00534cd9 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00534cdc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534cde je 0x534cf9 */ if (ZF_) goto L_00534cf9;
  /* 00534ce0 call 0x4fa860 */ esp -= 4; M32(esp) = 0x534ce5u; SAVEALL; F_004fa860(c); ABI_CHECK(0x4fa860u, 0x534ce0u); RETCHK(0x534ce5u, 0x534ce0u); LOADALL;
  /* 00534ce5 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534ce8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534cea je 0x534cf2 */ if (ZF_) goto L_00534cf2;
  /* 00534cec mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00534cee push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00534cf0 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534cf2u; SAVEALL; call_ind(c, t_); RETCHK(0x534cf2u, 0x534cf0u); LOADALL; }
L_00534cf2:;
  /* 00534cf2 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
L_00534cf9:;
  /* 00534cf9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534cfa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534cfb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534d00(CPU *c) {
  NATIVE_HOOK(0x534d00u) REGS; LOADALL;
L_00534d00:;
  /* 00534d00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534d01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534d03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534d04 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534d06 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00534d08 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534d09 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534d0cu; SAVEALL; call_ind(c, t_); RETCHK(0x534d0cu, 0x534d09u); LOADALL; }
  /* 00534d0c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534d0f mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 00534d11 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00534d14 call 0x518bb0 */ esp -= 4; M32(esp) = 0x534d19u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x534d14u); RETCHK(0x534d19u, 0x534d14u); LOADALL;
  /* 00534d19 call 0x518170 */ esp -= 4; M32(esp) = 0x534d1eu; SAVEALL; F_00518170(c); ABI_CHECK(0x518170u, 0x534d19u); RETCHK(0x534d1eu, 0x534d19u); LOADALL;
  /* 00534d1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534d1f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00534d21 call dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534d24u; SAVEALL; call_ind(c, t_); RETCHK(0x534d24u, 0x534d21u); LOADALL; }
  /* 00534d24 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534d25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534d26 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534d27 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534d30(CPU *c) {
  NATIVE_HOOK(0x534d30u) REGS; LOADALL;
L_00534d30:;
  /* 00534d30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534d31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534d33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534d34 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534d36 mov al, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534d39 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534d3b jne 0x534d62 */ if (!ZF_) goto L_00534d62;
  /* 00534d3d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00534d3e mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00534d41 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534d43 jne 0x534d4d */ if (!ZF_) goto L_00534d4d;
  /* 00534d45 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00534d46 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534d48 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534d49 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534d4a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00534d4d:;
  /* 00534d4d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534d4e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00534d51 call 0x4fac60 */ esp -= 4; M32(esp) = 0x534d56u; SAVEALL; F_004fac60(c); ABI_CHECK(0x4fac60u, 0x534d51u); RETCHK(0x534d56u, 0x534d51u); LOADALL;
  /* 00534d56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534d57 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00534d59 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00534d5a mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00534d5d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534d5e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534d5f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00534d62:;
  /* 00534d62 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534d64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534d65 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534d66 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534d70(CPU *c) {
  NATIVE_HOOK(0x534d70u) REGS; LOADALL;
L_00534d70:;
  /* 00534d70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534d71 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534d73 mov al, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00534d76 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534d78 je 0x534d95 */ if (ZF_) goto L_00534d95;
  /* 00534d7a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534d7b mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 00534d7e test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534d80 jne 0x534d87 */ if (!ZF_) goto L_00534d87;
  /* 00534d82 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534d83 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534d85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534d86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534d87:;
  /* 00534d87 call 0x4facc0 */ esp -= 4; M32(esp) = 0x534d8cu; SAVEALL; F_004facc0(c); ABI_CHECK(0x4facc0u, 0x534d87u); RETCHK(0x534d8cu, 0x534d87u); LOADALL;
  /* 00534d8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534d8d mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 00534d91 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00534d93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534d94 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534d95:;
  /* 00534d95 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00534d97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534d98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534da0(CPU *c) {
  NATIVE_HOOK(0x534da0u) REGS; LOADALL;
L_00534da0:;
  /* 00534da0 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534da3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534da5 je 0x534dae */ if (ZF_) goto L_00534dae;
  /* 00534da7 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00534daa mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00534dad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00534dae:;
  /* 00534dae xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00534db0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534dc0(CPU *c) {
  NATIVE_HOOK(0x534dc0u) REGS; LOADALL;
L_00534dc0:;
  /* 00534dc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534dc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534dc3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00534dc9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00534dcb push 0x61c968 */ { u32 v_ = 0x61c968u; esp -= 4; M32(esp) = v_; }
  /* 00534dd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534dd1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00534dd8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00534dd9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534dda mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00534ddd xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00534ddf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00534de0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534de1 call 0x506b60 */ esp -= 4; M32(esp) = 0x534de6u; SAVEALL; F_00506b60(c); ABI_CHECK(0x506b60u, 0x534de1u); RETCHK(0x534de6u, 0x534de1u); LOADALL;
  /* 00534de6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00534de9 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00534deb push 0x649750 */ { u32 v_ = 0x649750u; esp -= 4; M32(esp) = v_; }
  /* 00534df0 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00534df3 mov dword ptr [esi], 0x653870 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x653870u); }
  /* 00534df9 mov dword ptr [esi + 0x180], ebx */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(ebx); }
  /* 00534dff mov dword ptr [esi + 0x184], ebx */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(ebx); }
  /* 00534e05 mov dword ptr [esi + 0x188], ebx */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(ebx); }
  /* 00534e0b mov byte ptr [esi + 0x18c], bl */ { const u32 m_ = (u32)(esi + 0x18cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00534e11 call 0x404420 */ esp -= 4; M32(esp) = 0x534e16u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x534e11u); RETCHK(0x534e16u, 0x534e11u); LOADALL;
  /* 00534e16 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00534e19 mov eax, esi */ { eax = (u32)(esi); }
  /* 00534e1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534e1c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00534e23 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00534e24 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00534e26 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534e27 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534e30(CPU *c) {
  NATIVE_HOOK(0x534e30u) REGS; LOADALL;
L_00534e30:;
  /* 00534e30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534e31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534e33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534e34 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534e36 call 0x534e60 */ esp -= 4; M32(esp) = 0x534e3bu; SAVEALL; F_00534e60(c); ABI_CHECK(0x534e60u, 0x534e36u); RETCHK(0x534e3bu, 0x534e36u); LOADALL;
  /* 00534e3b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00534e3f je 0x534e4a */ if (ZF_) goto L_00534e4a;
  /* 00534e41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534e42 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x534e47u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x534e42u); RETCHK(0x534e47u, 0x534e42u); LOADALL;
  /* 00534e47 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00534e4a:;
  /* 00534e4a mov eax, esi */ { eax = (u32)(esi); }
  /* 00534e4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534e4d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534e4e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534e60(CPU *c) {
  NATIVE_HOOK(0x534e60u) REGS; LOADALL;
L_00534e60:;
  /* 00534e60 mov dword ptr [ecx], 0x653870 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x653870u); }
  /* 00534e66 jmp 0x506d00 */ SAVEALL; F_00506d00(c); return;
}

void F_00534e70(CPU *c) {
  NATIVE_HOOK(0x534e70u) REGS; LOADALL;
L_00534e70:;
  /* 00534e70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534e71 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534e73 mov eax, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); eax = (u32)(M32(m_)); }
  /* 00534e79 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534e7b je 0x534e8c */ if (ZF_) goto L_00534e8c;
  /* 00534e7d call 0x52fff0 */ esp -= 4; M32(esp) = 0x534e82u; SAVEALL; F_0052fff0(c); ABI_CHECK(0x52fff0u, 0x534e7du); RETCHK(0x534e82u, 0x534e7du); LOADALL;
  /* 00534e82 mov dword ptr [esi + 0x180], 0 */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(0x0u); }
L_00534e8c:;
  /* 00534e8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534e8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534e90(CPU *c) {
  NATIVE_HOOK(0x534e90u) REGS; LOADALL;
L_00534e90:;
  /* 00534e90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534e91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534e93 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534e96 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00534e97 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00534e99 mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 00534e9f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534ea1 je 0x534f2c */ if (ZF_) goto L_00534f2c;
  /* 00534ea7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534ea8 lea ecx, [edi + 0x44] */ ecx = (u32)((u32)(edi + 0x44u));
  /* 00534eab lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00534eae call 0x52cea0 */ esp -= 4; M32(esp) = 0x534eb3u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x534eaeu); RETCHK(0x534eb3u, 0x534eaeu); LOADALL;
  /* 00534eb3 mov eax, dword ptr [edi + 0x5c] */ { const u32 m_ = (u32)(edi + 0x5cu); eax = (u32)(M32(m_)); }
  /* 00534eb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534eb7 lea esi, [ebp - 0x10] */ esi = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00534eba call 0x52cf90 */ esp -= 4; M32(esp) = 0x534ebfu; SAVEALL; F_0052cf90(c); ABI_CHECK(0x52cf90u, 0x534ebau); RETCHK(0x534ebfu, 0x534ebau); LOADALL;
  /* 00534ebf fld dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00534ec2 fadd dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534ec5 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00534ec8 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534ece fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534ed1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534ed2 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 00534ed5 fadd dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00534ed8 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534ede fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534ee1 call 0x52ce60 */ esp -= 4; M32(esp) = 0x534ee6u; SAVEALL; F_0052ce60(c); ABI_CHECK(0x52ce60u, 0x534ee1u); RETCHK(0x534ee6u, 0x534ee1u); LOADALL;
  /* 00534ee6 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 00534eec sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534eef fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00534ef5 mov eax, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); eax = (u32)(M32(m_)); }
  /* 00534efb fmul dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534efe fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534f02 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 00534f08 fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 00534f0e fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00534f11 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00534f14 call 0x530050 */ esp -= 4; M32(esp) = 0x534f19u; SAVEALL; F_00530050(c); ABI_CHECK(0x530050u, 0x534f14u); RETCHK(0x534f19u, 0x534f14u); LOADALL;
  /* 00534f19 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00534f1c mov esi, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); esi = (u32)(M32(m_)); }
  /* 00534f22 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534f23 call 0x530000 */ esp -= 4; M32(esp) = 0x534f28u; SAVEALL; F_00530000(c); ABI_CHECK(0x530000u, 0x534f23u); RETCHK(0x534f28u, 0x534f23u); LOADALL;
  /* 00534f28 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534f2b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00534f2c:;
  /* 00534f2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00534f2d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00534f2f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534f30 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00534f40(CPU *c) {
  NATIVE_HOOK(0x534f40u) REGS; LOADALL;
L_00534f40:;
  /* 00534f40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534f41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534f43 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534f46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00534f47 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00534f4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534f4b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00534f4d mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00534f53 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00534f55 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534f58u; SAVEALL; call_ind(c, t_); RETCHK(0x534f58u, 0x534f55u); LOADALL; }
  /* 00534f58 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00534f5e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00534f60 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00534f62 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534f65u; SAVEALL; call_ind(c, t_); RETCHK(0x534f65u, 0x534f62u); LOADALL; }
  /* 00534f65 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00534f6b lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00534f6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534f6f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00534f71 call dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534f74u; SAVEALL; call_ind(c, t_); RETCHK(0x534f74u, 0x534f71u); LOADALL; }
  /* 00534f74 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00534f79 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00534f7c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00534f7d push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00534f7f call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534f82u; SAVEALL; call_ind(c, t_); RETCHK(0x534f82u, 0x534f7fu); LOADALL; }
  /* 00534f82 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00534f88 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00534f8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534f8c push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 00534f8e call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534f91u; SAVEALL; call_ind(c, t_); RETCHK(0x534f91u, 0x534f8eu); LOADALL; }
  /* 00534f91 mov eax, dword ptr [esi + 0x180] */ { const u32 m_ = (u32)(esi + 0x180u); eax = (u32)(M32(m_)); }
  /* 00534f97 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534f9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00534f9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00534f9d je 0x534fa4 */ if (ZF_) goto L_00534fa4;
  /* 00534f9f call 0x530010 */ esp -= 4; M32(esp) = 0x534fa4u; SAVEALL; F_00530010(c); ABI_CHECK(0x530010u, 0x534f9fu); RETCHK(0x534fa4u, 0x534f9fu); LOADALL;
L_00534fa4:;
  /* 00534fa4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00534fa7 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00534fad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534fae push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00534fb0 call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534fb3u; SAVEALL; call_ind(c, t_); RETCHK(0x534fb3u, 0x534fb0u); LOADALL; }
  /* 00534fb3 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00534fb6 mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 00534fbb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00534fbc push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00534fbe call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534fc1u; SAVEALL; call_ind(c, t_); RETCHK(0x534fc1u, 0x534fbeu); LOADALL; }
  /* 00534fc1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00534fc4 mov edx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); edx = (u32)(M32(m_)); }
  /* 00534fca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00534fcb push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 00534fcd call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534fd0u; SAVEALL; call_ind(c, t_); RETCHK(0x534fd0u, 0x534fcdu); LOADALL; }
  /* 00534fd0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00534fd3 mov ecx, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); ecx = (u32)(M32(m_)); }
  /* 00534fd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00534fda push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00534fdc call dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x534fdfu; SAVEALL; call_ind(c, t_); RETCHK(0x534fdfu, 0x534fdcu); LOADALL; }
  /* 00534fdf add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00534fe2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00534fe4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00534fe5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00534ff0(CPU *c) {
  NATIVE_HOOK(0x534ff0u) REGS; LOADALL;
L_00534ff0:;
  /* 00534ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00534ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00534ff3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00534ff5 push 0x620030 */ { u32 v_ = 0x620030u; esp -= 4; M32(esp) = v_; }
  /* 00534ffa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00535000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535001 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00535008 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053500b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0053500c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053500d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0053500f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535012 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00535014 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535016 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535017 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0053501a jne 0x535031 */ if (!ZF_) goto L_00535031;
  /* 0053501c xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0053501e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00535021 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00535028 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535029 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053502a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053502b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053502d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053502e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00535031:;
  /* 00535031 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00535033 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x535036u; SAVEALL; call_ind(c, t_); RETCHK(0x535036u, 0x535033u); LOADALL; }
  /* 00535036 push 0x6501c0 */ { u32 v_ = 0x6501c0u; esp -= 4; M32(esp) = v_; }
  /* 0053503b mov edi, eax */ { edi = (u32)(eax); }
  /* 0053503d call 0x560fd0 */ esp -= 4; M32(esp) = 0x535042u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x53503du); RETCHK(0x535042u, 0x53503du); LOADALL;
  /* 00535042 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00535045 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00535048 push 0x6501bc */ { u32 v_ = 0x6501bcu; esp -= 4; M32(esp) = v_; }
  /* 0053504d mov eax, edi */ { eax = (u32)(edi); }
  /* 0053504f fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00535052 call 0x560fd0 */ esp -= 4; M32(esp) = 0x535057u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x535052u); RETCHK(0x535057u, 0x535052u); LOADALL;
  /* 00535057 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053505a fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053505d push 0x6501b4 */ { u32 v_ = 0x6501b4u; esp -= 4; M32(esp) = v_; }
  /* 00535062 mov eax, edi */ { eax = (u32)(edi); }
  /* 00535064 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00535067 call 0x560fd0 */ esp -= 4; M32(esp) = 0x53506cu; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x535067u); RETCHK(0x53506cu, 0x535067u); LOADALL;
  /* 0053506c mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0053506f fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 00535072 push 0x6501ac */ { u32 v_ = 0x6501acu; esp -= 4; M32(esp) = v_; }
  /* 00535077 mov eax, edi */ { eax = (u32)(edi); }
  /* 00535079 fadd dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0053507c fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053507f call 0x560fd0 */ esp -= 4; M32(esp) = 0x535084u; SAVEALL; F_00560fd0(c); ABI_CHECK(0x560fd0u, 0x53507fu); RETCHK(0x535084u, 0x53507fu); LOADALL;
  /* 00535084 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00535087 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0053508a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053508b mov eax, 0x653970 */ { eax = (u32)(0x653970u); }
  /* 00535090 fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00535093 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00535096 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53509bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x535096u); RETCHK(0x53509bu, 0x535096u); LOADALL;
  /* 0053509b mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0053509e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053509f mov eax, 0x653964 */ { eax = (u32)(0x653964u); }
  /* 005350a4 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5350a9u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5350a4u); RETCHK(0x5350a9u, 0x5350a4u); LOADALL;
  /* 005350a9 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 005350ac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005350ad mov eax, 0x65395c */ { eax = (u32)(0x65395cu); }
  /* 005350b2 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5350b7u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5350b2u); RETCHK(0x5350b7u, 0x5350b2u); LOADALL;
  /* 005350b7 mov ecx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 005350ba cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005350bc mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005350bf je 0x5350d0 */ if (ZF_) goto L_005350d0;
  /* 005350c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005350c2 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005350c5 call 0x52d060 */ esp -= 4; M32(esp) = 0x5350cau; SAVEALL; F_0052d060(c); ABI_CHECK(0x52d060u, 0x5350c5u); RETCHK(0x5350cau, 0x5350c5u); LOADALL;
  /* 005350ca mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005350cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005350d0:;
  /* 005350d0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005350d2 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 005350d9 je 0x5350ed */ if (ZF_) goto L_005350ed;
  /* 005350db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005350dc call 0x5fe92e */ esp -= 4; M32(esp) = 0x5350e1u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5350dcu); RETCHK(0x5350e1u, 0x5350dcu); LOADALL;
  /* 005350e1 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 005350e4 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 005350e7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005350ea fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
L_005350ed:;
  /* 005350ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005350ee mov eax, 0x65326c */ { eax = (u32)(0x65326cu); }
  /* 005350f3 call 0x560ed0 */ esp -= 4; M32(esp) = 0x5350f8u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x5350f3u); RETCHK(0x5350f8u, 0x5350f3u); LOADALL;
  /* 005350f8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005350fa mov dword ptr [ebp + 8], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x3f800000u); }
  /* 00535101 je 0x53510f */ if (ZF_) goto L_0053510f;
  /* 00535103 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535104 call 0x5fea82 */ esp -= 4; M32(esp) = 0x535109u; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x535104u); RETCHK(0x535109u, 0x535104u); LOADALL;
  /* 00535109 fstp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053510c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053510f:;
  /* 0053510f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535110 mov eax, 0x645584 */ { eax = (u32)(0x645584u); }
  /* 00535115 call 0x560ed0 */ esp -= 4; M32(esp) = 0x53511au; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x535115u); RETCHK(0x53511au, 0x535115u); LOADALL;
  /* 0053511a mov esi, eax */ { esi = (u32)(eax); }
  /* 0053511c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0053511e mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 00535125 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 00535128 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053512b lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 0053512e mov edi, edi */ { edi = (u32)(edi); }
L_00535130:;
  /* 00535130 mov al, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00535132 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00535133 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00535135 jne 0x535130 */ if (!ZF_) goto L_00535130;
  /* 00535137 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00535139 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053513a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053513b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0053513e call 0x404420 */ esp -= 4; M32(esp) = 0x535143u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53513eu); RETCHK(0x535143u, 0x53513eu); LOADALL;
  /* 00535143 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00535146 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00535149 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0053514c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053514f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535150 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535151 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535154 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00535156 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0053515b mov dword ptr [ecx + 0x18], edi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edi); }
  /* 0053515e mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00535161 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 00535164 mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00535167 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0053516a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00535170:;
  /* 00535170 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00535172 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00535173 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00535175 jne 0x535170 */ if (!ZF_) goto L_00535170;
  /* 00535177 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535179 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053517a mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0053517d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053517e call 0x404420 */ esp -= 4; M32(esp) = 0x535183u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x53517eu); RETCHK(0x535183u, 0x53517eu); LOADALL;
  /* 00535183 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00535186 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535189 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0053518b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0053518f mov dword ptr [ecx + 0x18], edi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edi); }
  /* 00535192 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00535195 mov dword ptr [ebp - 0x14], esp */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esp); }
  /* 00535198 mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0053519b lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0053519e mov edi, edi */ { edi = (u32)(edi); }
L_005351a0:;
  /* 005351a0 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005351a2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005351a3 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005351a5 jne 0x5351a0 */ if (!ZF_) goto L_005351a0;
  /* 005351a7 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 005351aa sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005351ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005351ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005351ae call 0x404420 */ esp -= 4; M32(esp) = 0x5351b3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5351aeu); RETCHK(0x5351b3u, 0x5351aeu); LOADALL;
  /* 005351b3 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005351b6 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005351b9 mov ebx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ebx = (u32)(M32(m_)); }
  /* 005351bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005351bd lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 005351c0 call 0x5351f0 */ esp -= 4; M32(esp) = 0x5351c5u; SAVEALL; F_005351f0(c); ABI_CHECK(0x5351f0u, 0x5351c0u); RETCHK(0x5351c5u, 0x5351c0u); LOADALL;
  /* 005351c5 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 005351c7 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005351cb jb 0x5351d9 */ if (CF_) goto L_005351d9;
  /* 005351cd mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 005351d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005351d1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5351d6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5351d1u); RETCHK(0x5351d6u, 0x5351d1u); LOADALL;
  /* 005351d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005351d9:;
  /* 005351d9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005351dc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005351dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005351de mov al, bl */ { eax = (eax & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 005351e0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005351e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005351e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005351ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005351eb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005351f0(CPU *c) {
  NATIVE_HOOK(0x5351f0u) REGS; LOADALL;
L_005351f0:;
  /* 005351f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005351f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005351f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005351f5 push 0x620010 */ { u32 v_ = 0x620010u; esp -= 4; M32(esp) = v_; }
  /* 005351fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00535200 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535201 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00535208 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053520b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00535210 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00535213 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535214 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535217 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535218 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535219 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0053521b mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00535222 call 0x507260 */ esp -= 4; M32(esp) = 0x535227u; SAVEALL; F_00507260(c); ABI_CHECK(0x507260u, 0x535222u); RETCHK(0x535227u, 0x535222u); LOADALL;
  /* 00535227 cmp dword ptr [ebp + 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053522b mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0053522e jae 0x535233 */ if (!CF_) goto L_00535233;
  /* 00535230 lea esi, [ebp + 0x10] */ esi = (u32)((u32)(ebp + 0x10u));
L_00535233:;
  /* 00535233 call 0x518bb0 */ esp -= 4; M32(esp) = 0x535238u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x535233u); RETCHK(0x535238u, 0x535233u); LOADALL;
  /* 00535238 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0053523a lea edx, [eax + 0x164] */ edx = (u32)((u32)(eax + 0x164u));
  /* 00535240 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00535242 call 0x5355b0 */ esp -= 4; M32(esp) = 0x535247u; SAVEALL; F_005355b0(c); ABI_CHECK(0x5355b0u, 0x535242u); RETCHK(0x535247u, 0x535242u); LOADALL;
  /* 00535247 mov esi, eax */ { esi = (u32)(eax); }
  /* 00535249 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053524b je 0x535411 */ if (ZF_) goto L_00535411;
  /* 00535251 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535252 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00535254 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535255 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00535257 call 0x52ffa0 */ esp -= 4; M32(esp) = 0x53525cu; SAVEALL; F_0052ffa0(c); ABI_CHECK(0x52ffa0u, 0x535257u); RETCHK(0x53525cu, 0x535257u); LOADALL;
  /* 0053525c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0053525f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00535261 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535262 lea edx, [ebp + 0x28] */ edx = (u32)((u32)(ebp + 0x28u));
  /* 00535265 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535266 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00535269 mov dword ptr [ebx + 0x180], eax */ { const u32 m_ = (u32)(ebx + 0x180u); M32(m_) = (u32)(eax); }
  /* 0053526f mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00535276 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00535279 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0053527d call 0x404140 */ esp -= 4; M32(esp) = 0x535282u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x53527du); RETCHK(0x535282u, 0x53527du); LOADALL;
  /* 00535282 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00535284 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00535288 mov eax, dword ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 0053528b push 0x653954 */ { u32 v_ = 0x653954u; esp -= 4; M32(esp) = v_; }
  /* 00535290 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535291 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00535292 lea ecx, [ebp + 0x28] */ ecx = (u32)((u32)(ebp + 0x28u));
  /* 00535295 call 0x405de0 */ esp -= 4; M32(esp) = 0x53529au; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x535295u); RETCHK(0x53529au, 0x535295u); LOADALL;
  /* 0053529a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053529c jne 0x5352f2 */ if (!ZF_) goto L_005352f2;
  /* 0053529e mov eax, esi */ { eax = (u32)(esi); }
  /* 005352a0 call 0x52ff80 */ esp -= 4; M32(esp) = 0x5352a5u; SAVEALL; F_0052ff80(c); ABI_CHECK(0x52ff80u, 0x5352a0u); RETCHK(0x5352a5u, 0x5352a0u); LOADALL;
  /* 005352a5 mov edi, eax */ { edi = (u32)(eax); }
  /* 005352a7 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5352adu; SAVEALL; call_ind(c, t_); RETCHK(0x5352adu, 0x5352a7u); LOADALL; }
  /* 005352ad xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005352af div edi */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, edi, &q_, &r_, 0x5352afu); eax = q_; edx = r_; }
  /* 005352b1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005352b3 mov eax, edx */ { eax = (u32)(edx); }
  /* 005352b5 call 0x52ff90 */ esp -= 4; M32(esp) = 0x5352bau; SAVEALL; F_0052ff90(c); ABI_CHECK(0x52ff90u, 0x5352b5u); RETCHK(0x5352bau, 0x5352b5u); LOADALL;
  /* 005352ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005352bb lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 005352be call 0x403060 */ esp -= 4; M32(esp) = 0x5352c3u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x5352beu); RETCHK(0x5352c3u, 0x5352beu); LOADALL;
  /* 005352c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005352c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005352c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005352c8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005352cb mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 005352cf call 0x404140 */ esp -= 4; M32(esp) = 0x5352d4u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5352cfu); RETCHK(0x5352d4u, 0x5352cfu); LOADALL;
  /* 005352d4 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 005352d8 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 005352db mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 005352e0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005352e2 jb 0x5352f7 */ if (CF_) goto L_005352f7;
  /* 005352e4 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 005352e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005352e8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5352edu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5352e8u); RETCHK(0x5352edu, 0x5352e8u); LOADALL;
  /* 005352ed add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005352f0 jmp 0x5352f7 */ goto L_005352f7;
L_005352f2:;
  /* 005352f2 mov edi, 0x10 */ { edi = (u32)(0x10u); }
L_005352f7:;
  /* 005352f7 mov eax, dword ptr [ebx + 0x180] */ { const u32 m_ = (u32)(ebx + 0x180u); eax = (u32)(M32(m_)); }
  /* 005352fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005352ff je 0x5353ff */ if (ZF_) goto L_005353ff;
  /* 00535305 cmp dword ptr [ebp + 0x40], edi */ { const u32 m_ = (u32)(ebp + 0x40u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535308 mov eax, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0053530b jae 0x535310 */ if (!CF_) goto L_00535310;
  /* 0053530d lea eax, [ebp + 0x2c] */ eax = (u32)((u32)(ebp + 0x2cu));
L_00535310:;
  /* 00535310 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00535315 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535316 lea esi, [ebx + 0x18c] */ esi = (u32)((u32)(ebx + 0x18cu));
  /* 0053531c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0053531d call 0x5fe7ca */ esp -= 4; M32(esp) = 0x535322u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x53531du); RETCHK(0x535322u, 0x53531du); LOADALL;
  /* 00535322 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535325 mov byte ptr [esi + 0xff], 0 */ { const u32 m_ = (u32)(esi + 0xffu); M8(m_) = (u8)(0x0u); }
  /* 0053532c fld dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0053532f fsub dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00535332 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535335 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0053533b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0053533d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00535340 je 0x53534a */ if (ZF_) goto L_0053534a;
  /* 00535342 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00535344 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00535347 fsub dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0053534a:;
  /* 0053534a fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0053534d fsub dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0053534f fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00535355 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00535357 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053535a je 0x535363 */ if (ZF_) goto L_00535363;
  /* 0053535c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0053535e fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00535360 fsub dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00535363:;
  /* 00535363 mov eax, dword ptr [ebx + 0x180] */ { const u32 m_ = (u32)(ebx + 0x180u); eax = (u32)(M32(m_)); }
  /* 00535369 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0053536b fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00535371 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535374 fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00535377 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0053537b fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00535381 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00535383 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00535386 call 0x530050 */ esp -= 4; M32(esp) = 0x53538bu; SAVEALL; F_00530050(c); ABI_CHECK(0x530050u, 0x535386u); RETCHK(0x53538bu, 0x535386u); LOADALL;
  /* 0053538b mov eax, dword ptr [ebx + 0x180] */ { const u32 m_ = (u32)(ebx + 0x180u); eax = (u32)(M32(m_)); }
  /* 00535391 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00535396 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0053539b call 0x530070 */ esp -= 4; M32(esp) = 0x5353a0u; SAVEALL; F_00530070(c); ABI_CHECK(0x530070u, 0x53539bu); RETCHK(0x5353a0u, 0x53539bu); LOADALL;
  /* 005353a0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005353a3 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 005353a6 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005353a9 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005353ab jae 0x5353b0 */ if (!CF_) goto L_005353b0;
  /* 005353ad lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_005353b0:;
  /* 005353b0 mov edx, dword ptr [ebx + 0x180] */ { const u32 m_ = (u32)(ebx + 0x180u); edx = (u32)(M32(m_)); }
  /* 005353b6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005353b8 call 0x530030 */ esp -= 4; M32(esp) = 0x5353bdu; SAVEALL; F_00530030(c); ABI_CHECK(0x530030u, 0x5353b8u); RETCHK(0x5353bdu, 0x5353b8u); LOADALL;
  /* 005353bd mov edx, dword ptr [ebp + 0x44] */ { const u32 m_ = (u32)(ebp + 0x44u); edx = (u32)(M32(m_)); }
  /* 005353c0 mov eax, dword ptr [ebx + 0x180] */ { const u32 m_ = (u32)(ebx + 0x180u); eax = (u32)(M32(m_)); }
  /* 005353c6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005353c7 call 0x530090 */ esp -= 4; M32(esp) = 0x5353ccu; SAVEALL; F_00530090(c); ABI_CHECK(0x530090u, 0x5353c7u); RETCHK(0x5353ccu, 0x5353c7u); LOADALL;
  /* 005353cc fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 005353d2 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005353d8 mov eax, dword ptr [ebx + 0x180] */ { const u32 m_ = (u32)(ebx + 0x180u); eax = (u32)(M32(m_)); }
  /* 005353de fmul dword ptr [ebp + 0x48] */ { const u32 m_ = (u32)(ebp + 0x48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005353e1 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005353e4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005353e5 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 005353eb fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 005353f1 fmul dword ptr [ebp + 0x48] */ { const u32 m_ = (u32)(ebp + 0x48u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005353f4 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005353f7 call 0x530070 */ esp -= 4; M32(esp) = 0x5353fcu; SAVEALL; F_00530070(c); ABI_CHECK(0x530070u, 0x5353f7u); RETCHK(0x5353fcu, 0x5353f7u); LOADALL;
  /* 005353fc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005353ff:;
  /* 005353ff cmp dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535402 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535403 jb 0x535411 */ if (CF_) goto L_00535411;
  /* 00535405 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00535408 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535409 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53540eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x535409u); RETCHK(0x53540eu, 0x535409u); LOADALL;
  /* 0053540e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00535411:;
  /* 00535411 mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 00535414 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00535419 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053541b jb 0x535429 */ if (CF_) goto L_00535429;
  /* 0053541d mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00535420 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535421 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x535426u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x535421u); RETCHK(0x535426u, 0x535421u); LOADALL;
  /* 00535426 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00535429:;
  /* 00535429 cmp dword ptr [ebp + 0x40], esi */ { const u32 m_ = (u32)(ebp + 0x40u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053542c mov dword ptr [ebp + 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0x24u); M32(m_) = (u32)(0xfu); }
  /* 00535433 mov dword ptr [ebp + 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 0053543a mov byte ptr [ebp + 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 0053543e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053543f jb 0x53544d */ if (CF_) goto L_0053544d;
  /* 00535441 mov edx, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00535444 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535445 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x53544au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x535445u); RETCHK(0x53544au, 0x535445u); LOADALL;
  /* 0053544a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0053544d:;
  /* 0053544d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00535450 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00535457 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0053545a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0053545c call 0x61af31 */ esp -= 4; M32(esp) = 0x535461u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x53545cu); RETCHK(0x535461u, 0x53545cu); LOADALL;
  /* 00535461 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535463 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535464 ret 0x44 */ c->popped = M32(esp); esp += 72u; SAVEALL; return;
}

void F_00535470(CPU *c) {
  NATIVE_HOOK(0x535470u) REGS; LOADALL;
L_00535470:;
  /* 00535470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535473 mov edx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); edx = (u32)(M32(m_)); }
  /* 00535479 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053547b je 0x53548f */ if (ZF_) goto L_0053548f;
  /* 0053547d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053547f jne 0x535487 */ if (!ZF_) goto L_00535487;
  /* 00535481 lea ecx, [eax + 0x18c] */ ecx = (u32)((u32)(eax + 0x18cu));
L_00535487:;
  /* 00535487 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0053548a call 0x530030 */ esp -= 4; M32(esp) = 0x53548fu; SAVEALL; F_00530030(c); ABI_CHECK(0x530030u, 0x53548au); RETCHK(0x53548fu, 0x53548au); LOADALL;
L_0053548f:;
  /* 0053548f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535490 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005354a0(CPU *c) {
  NATIVE_HOOK(0x5354a0u) REGS; LOADALL;
  goto L_005354a0;
L_00530040:;
  /* 00530040 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00530042 je 0x530049 */ if (ZF_) goto L_00530049;
  /* 00530044 jmp 0x52f390 */ SAVEALL; F_0052f390(c); return;
L_00530049:;
  /* 00530049 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005354a0:;
  /* 005354a0 mov eax, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); eax = (u32)(M32(m_)); }
  /* 005354a6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005354a8 je 0x5354af */ if (ZF_) goto L_005354af;
  /* 005354aa jmp 0x530040 */ goto L_00530040;
L_005354af:;
  /* 005354af ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005354b0(CPU *c) {
  NATIVE_HOOK(0x5354b0u) REGS; LOADALL;
  goto L_005354b0;
L_005300a0:;
  /* 005300a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005300a2 je 0x5300aa */ if (ZF_) goto L_005300aa;
  /* 005300a4 mov dword ptr [eax + 0x54], ecx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(ecx); }
  /* 005300a7 mov dword ptr [eax + 0x58], edx */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(edx); }
L_005300aa:;
  /* 005300aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005354b0:;
  /* 005354b0 mov dword ptr [eax + 0x184], ecx */ { const u32 m_ = (u32)(eax + 0x184u); M32(m_) = (u32)(ecx); }
  /* 005354b6 mov dword ptr [eax + 0x188], edx */ { const u32 m_ = (u32)(eax + 0x188u); M32(m_) = (u32)(edx); }
  /* 005354bc mov eax, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); eax = (u32)(M32(m_)); }
  /* 005354c2 jmp 0x5300a0 */ goto L_005300a0;
}

void F_005354d0(CPU *c) {
  NATIVE_HOOK(0x5354d0u) REGS; LOADALL;
L_005354d0:;
  /* 005354d0 mov eax, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); eax = (u32)(M32(m_)); }
  /* 005354d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005354d8 je 0x5354e4 */ if (ZF_) goto L_005354e4;
  /* 005354da call 0x530020 */ esp -= 4; M32(esp) = 0x5354dfu; SAVEALL; F_00530020(c); ABI_CHECK(0x530020u, 0x5354dau); RETCHK(0x5354dfu, 0x5354dau); LOADALL;
  /* 005354df jmp 0x52ff80 */ SAVEALL; F_0052ff80(c); return;
L_005354e4:;
  /* 005354e4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005354e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005354f0(CPU *c) {
  NATIVE_HOOK(0x5354f0u) REGS; LOADALL;
L_005354f0:;
  /* 005354f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005354f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005354f3 sub esp, 0x304 */ { u32 a_ = esp, b_ = 0x304u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005354f9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005354fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005354ff mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00535502 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00535504 call 0x5b18a0 */ esp -= 4; M32(esp) = 0x535509u; SAVEALL; F_005b18a0(c); ABI_CHECK(0x5b18a0u, 0x535504u); RETCHK(0x535509u, 0x535504u); LOADALL;
  /* 00535509 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 0053550e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053550f lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00535515 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535516 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x53551bu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x535516u); RETCHK(0x53551bu, 0x535516u); LOADALL;
  /* 0053551b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053551e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053551f add esi, 0x28 */ { u32 a_ = esi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00535522 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535523 push 0x649280 */ { u32 v_ = 0x649280u; esp -= 4; M32(esp) = v_; }
  /* 00535528 lea edx, [ebp - 0x304] */ edx = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 0053552e push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00535533 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535534 mov byte ptr [ebp - 5], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)(0x0u); }
  /* 00535538 call 0x5fe928 */ esp -= 4; M32(esp) = 0x53553du; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x535538u); RETCHK(0x53553du, 0x535538u); LOADALL;
  /* 0053553d push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00535542 call 0x5b17e0 */ esp -= 4; M32(esp) = 0x535547u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x535542u); RETCHK(0x535547u, 0x535542u); LOADALL;
  /* 00535547 lea eax, [ebp - 0x304] */ eax = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 0053554d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053554e call 0x52ff30 */ esp -= 4; M32(esp) = 0x535553u; SAVEALL; F_0052ff30(c); ABI_CHECK(0x52ff30u, 0x53554eu); RETCHK(0x535553u, 0x53554eu); LOADALL;
  /* 00535553 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00535556 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0053555c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053555d mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0053555f call 0x5b17e0 */ esp -= 4; M32(esp) = 0x535564u; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x53555fu); RETCHK(0x535564u, 0x53555fu); LOADALL;
  /* 00535564 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00535566 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535569 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0053556b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053556d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00535570 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00535573 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535574 call 0x61af31 */ esp -= 4; M32(esp) = 0x535579u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x535574u); RETCHK(0x535579u, 0x535574u); LOADALL;
  /* 00535579 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053557b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053557c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00535580(CPU *c) {
  NATIVE_HOOK(0x535580u) REGS; LOADALL;
L_00535580:;
  /* 00535580 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535581 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535583 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535584 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00535587 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00535589 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053558b je 0x535598 */ if (ZF_) goto L_00535598;
  /* 0053558d call 0x52ff70 */ esp -= 4; M32(esp) = 0x535592u; SAVEALL; F_0052ff70(c); ABI_CHECK(0x52ff70u, 0x53558du); RETCHK(0x535592u, 0x53558du); LOADALL;
  /* 00535592 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
L_00535598:;
  /* 00535598 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0053559d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053559e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053559f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005355b0(CPU *c) {
  NATIVE_HOOK(0x5355b0u) REGS; LOADALL;
L_005355b0:;
  /* 005355b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005355b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005355b3 sub esp, 0x110 */ { u32 a_ = esp, b_ = 0x110u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005355b9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005355be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005355bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005355c0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005355c2 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 005355c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005355c5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005355c6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005355c9 call 0x535750 */ esp -= 4; M32(esp) = 0x5355ceu; SAVEALL; F_00535750(c); ABI_CHECK(0x535750u, 0x5355c9u); RETCHK(0x5355ceu, 0x5355c9u); LOADALL;
  /* 005355ce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005355d0 jne 0x5356c0 */ if (!ZF_) goto L_005356c0;
  /* 005355d6 lea edx, [ebp - 0x108] */ edx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 005355dc mov dword ptr [ebp - 8], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x1u); }
  /* 005355e3 mov eax, esi */ { eax = (u32)(esi); }
  /* 005355e5 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_005355e7:;
  /* 005355e7 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005355e9 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005355ec inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005355ed test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005355ef jne 0x5355e7 */ if (!ZF_) goto L_005355e7;
  /* 005355f1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005355f4 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005355f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005355f7 mov dword ptr [ebp - 0x10c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(eax); }
  /* 005355fd lea eax, [ebp - 0x10c] */ eax = (u32)((u32)(ebp + 0xfffffef4u));
  /* 00535603 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535604 lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0053560a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053560b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0053560d call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x53560fu; SAVEALL; call_ind(c, t_); RETCHK(0x53560fu, 0x53560du); LOADALL; }
  /* 0053560f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535611 je 0x535642 */ if (ZF_) goto L_00535642;
  /* 00535613 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535616 lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
  /* 00535619 lea edx, [ebp - 0x108] */ edx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0053561f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535620 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535621 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00535624 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535625 call 0x535900 */ esp -= 4; M32(esp) = 0x53562au; SAVEALL; F_00535900(c); ABI_CHECK(0x535900u, 0x535625u); RETCHK(0x53562au, 0x535625u); LOADALL;
  /* 0053562a mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0053562d lea eax, [ebx + 0x14] */ eax = (u32)((u32)(ebx + 0x14u));
  /* 00535630 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535631 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535632 lea eax, [ebp - 0x10c] */ eax = (u32)((u32)(ebp + 0xfffffef4u));
  /* 00535638 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0053563d call 0x4d2620 */ esp -= 4; M32(esp) = 0x535642u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x53563du); RETCHK(0x535642u, 0x53563du); LOADALL;
L_00535642:;
  /* 00535642 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 00535645 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535647 lea ecx, [ebx + 0x14] */ ecx = (u32)((u32)(ebx + 0x14u));
  /* 0053564a mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0053564d jne 0x535653 */ if (!ZF_) goto L_00535653;
  /* 0053564f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00535651 jmp 0x53565b */ goto L_0053565b;
L_00535653:;
  /* 00535653 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535656 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535658 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0053565b:;
  /* 0053565b cmp eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0053565e jle 0x5356b9 */ if ((ZF_|LT_)) goto L_005356b9;
  /* 00535660 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00535663 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535665 jne 0x53566b */ if (!ZF_) goto L_0053566b;
  /* 00535667 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00535669 jmp 0x535673 */ goto L_00535673;
L_0053566b:;
  /* 0053566b mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0053566e sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00535670 sar edi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
L_00535673:;
  /* 00535673 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00535674 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535676 jle 0x5356b9 */ if ((ZF_|LT_)) goto L_005356b9;
  /* 00535678 mov ecx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0053567b mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053567e mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00535680 mov esi, edi */ { esi = (u32)(edi); }
  /* 00535682 imul esi, esi, 0x104 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535688 lea ecx, [ecx + edi*4] */ ecx = (u32)((u32)(ecx + edi * 4u));
  /* 0053568b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053568c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053568d add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0053568f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535690 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00535692 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x535695u; SAVEALL; call_ind(c, t_); RETCHK(0x535695u, 0x535692u); LOADALL; }
  /* 00535695 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00535698 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0053569b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053569d jle 0x5356a1 */ if ((ZF_|LT_)) goto L_005356a1;
  /* 0053569f add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_005356a1:;
  /* 005356a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005356a2 lea eax, [ebp - 0x110] */ eax = (u32)((u32)(ebp + 0xfffffef0u));
  /* 005356a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005356a9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005356aa call 0x535970 */ esp -= 4; M32(esp) = 0x5356afu; SAVEALL; F_00535970(c); ABI_CHECK(0x535970u, 0x5356aau); RETCHK(0x5356afu, 0x5356aau); LOADALL;
  /* 005356af mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005356b2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005356b4 call 0x535870 */ esp -= 4; M32(esp) = 0x5356b9u; SAVEALL; F_00535870(c); ABI_CHECK(0x535870u, 0x5356b4u); RETCHK(0x5356b9u, 0x5356b4u); LOADALL;
L_005356b9:;
  /* 005356b9 mov eax, dword ptr [ebp - 0x10c] */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); eax = (u32)(M32(m_)); }
  /* 005356bf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005356c0:;
  /* 005356c0 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005356c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005356c4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005356c5 call 0x61af31 */ esp -= 4; M32(esp) = 0x5356cau; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5356c5u); RETCHK(0x5356cau, 0x5356c5u); LOADALL;
  /* 005356ca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005356cc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005356cd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005356d0(CPU *c) {
  NATIVE_HOOK(0x5356d0u) REGS; LOADALL;
L_005356d0:;
  /* 005356d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005356d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005356d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005356d5 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 005356da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005356e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005356e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005356e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005356e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005356ea push 0x5358a0 */ { u32 v_ = 0x5358a0u; esp -= 4; M32(esp) = v_; }
  /* 005356ef sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005356f2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005356f4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 005356f6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005356f9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 005356fc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005356fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005356ff lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00535702 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00535709 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0053570c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053570d mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00535710 call 0x404140 */ esp -= 4; M32(esp) = 0x535715u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x535710u); RETCHK(0x535715u, 0x535710u); LOADALL;
  /* 00535715 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00535718 call 0x405c00 */ esp -= 4; M32(esp) = 0x53571du; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x535718u); RETCHK(0x53571du, 0x535718u); LOADALL;
  /* 0053571d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0053571f call 0x405c80 */ esp -= 4; M32(esp) = 0x535724u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x53571fu); RETCHK(0x535724u, 0x53571fu); LOADALL;
  /* 00535724 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535728 jb 0x535736 */ if (CF_) goto L_00535736;
  /* 0053572a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0053572d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053572e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x535733u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x53572eu); RETCHK(0x535733u, 0x53572eu); LOADALL;
  /* 00535733 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00535736:;
  /* 00535736 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00535739 mov eax, esi */ { eax = (u32)(esi); }
  /* 0053573b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00535742 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00535743 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00535745 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535746 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_00535750(CPU *c) {
  NATIVE_HOOK(0x535750u) REGS; LOADALL;
L_00535750:;
  /* 00535750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535753 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535754 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535755 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00535758 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535759 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053575a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0053575c mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0053575f add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_00535762:;
  /* 00535762 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00535765 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535767 je 0x53577f */ if (ZF_) goto L_0053577f;
  /* 00535769 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0053576c sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0053576e mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535773 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535775 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535778 mov eax, edx */ { eax = (u32)(edx); }
  /* 0053577a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0053577d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0053577f:;
  /* 0053577f cmp dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00535782 jge 0x535863 */ if (!LT_) goto L_00535863;
  /* 00535788 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053578b mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053578e mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00535791 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00535793:;
  /* 00535793 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00535795 mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 00535797 cmp dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00535799 jne 0x5357b7 */ if (!ZF_) goto L_005357b7;
  /* 0053579b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0053579d je 0x5357b3 */ if (ZF_) goto L_005357b3;
  /* 0053579f mov dl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005357a2 mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 005357a4 cmp dl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005357a7 jne 0x5357b7 */ if (!ZF_) goto L_005357b7;
  /* 005357a9 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005357ac add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005357af test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005357b1 jne 0x535793 */ if (!ZF_) goto L_00535793;
L_005357b3:;
  /* 005357b3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005357b5 jmp 0x5357bc */ goto L_005357bc;
L_005357b7:;
  /* 005357b7 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005357b9 sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_005357bc:;
  /* 005357bc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005357be je 0x5357cb */ if (ZF_) goto L_005357cb;
  /* 005357c0 inc dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005357c3 add edi, 0x104 */ { u32 a_ = edi, b_ = 0x104u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005357c9 jmp 0x535762 */ goto L_00535762;
L_005357cb:;
  /* 005357cb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005357ce mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005357d1 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005357d4 mov edx, dword ptr [eax + ecx*4] */ { const u32 m_ = (u32)(eax + ecx * 4u); edx = (u32)(M32(m_)); }
  /* 005357d7 lea eax, [eax + ecx*4] */ eax = (u32)((u32)(eax + ecx * 4u));
  /* 005357da imul ecx, ecx, 0x104 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005357e0 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005357e3 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 005357e6 add ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005357e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005357ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005357eb lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 005357ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005357ef mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005357f1 call 0x535900 */ esp -= 4; M32(esp) = 0x5357f6u; SAVEALL; F_00535900(c); ABI_CHECK(0x535900u, 0x5357f1u); RETCHK(0x5357f6u, 0x5357f1u); LOADALL;
  /* 005357f6 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 005357f9 add esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005357fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005357fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005357fe lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00535801 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00535806 call 0x4d2620 */ esp -= 4; M32(esp) = 0x53580bu; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x535806u); RETCHK(0x53580bu, 0x535806u); LOADALL;
  /* 0053580b mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
  /* 0053580e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00535811 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00535812 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535814 jle 0x535820 */ if ((ZF_|LT_)) goto L_00535820;
  /* 00535816 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00535818 imul ecx, ecx, 0x104 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0053581e add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00535820:;
  /* 00535820 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535821 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 00535824 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535825 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535826 call 0x535970 */ esp -= 4; M32(esp) = 0x53582bu; SAVEALL; F_00535970(c); ABI_CHECK(0x535970u, 0x535826u); RETCHK(0x53582bu, 0x535826u); LOADALL;
  /* 0053582b test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053582d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00535830 jle 0x535835 */ if ((ZF_|LT_)) goto L_00535835;
  /* 00535832 lea eax, [eax + edi*4] */ eax = (u32)((u32)(eax + edi * 4u));
L_00535835:;
  /* 00535835 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00535838 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 0053583b sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0053583d sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535840 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535843 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535844 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00535845 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00535846 call 0x5fe998 */ esp -= 4; M32(esp) = 0x53584bu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x535846u); RETCHK(0x53584bu, 0x535846u); LOADALL;
  /* 0053584b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053584e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535851 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535854 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535855 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00535858 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053585b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053585c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053585d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053585f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535860 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00535863:;
  /* 00535863 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00535864 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00535865 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00535867 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00535868 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0053586a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0053586b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00535870(CPU *c) {
  NATIVE_HOOK(0x535870u) REGS; LOADALL;
L_00535870:;
  /* 00535870 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00535872 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00535875 jle 0x53587a */ if ((ZF_|LT_)) goto L_0053587a;
  /* 00535877 lea eax, [eax + ecx*4] */ eax = (u32)((u32)(eax + ecx * 4u));
L_0053587a:;
  /* 0053587a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0053587d lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00535880 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00535882 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535885 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00535888 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00535889 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0053588a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0053588b call 0x5fe998 */ esp -= 4; M32(esp) = 0x535890u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x53588bu); RETCHK(0x535890u, 0x53588bu); LOADALL;
  /* 00535890 add dword ptr [esi + 8], -4 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00535894 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00535897 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0053589c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005358a0(CPU *c) {
  NATIVE_HOOK(0x5358a0u) REGS; LOADALL;
L_005358a0:;
  /* 005358a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005358a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005358a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005358a5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 005358aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005358b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005358b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005358b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005358b9 push 0x28c */ { u32 v_ = 0x28cu; esp -= 4; M32(esp) = v_; }
  /* 005358be call 0x5fe934 */ esp -= 4; M32(esp) = 0x5358c3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5358beu); RETCHK(0x5358c3u, 0x5358beu); LOADALL;
  /* 005358c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005358c6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005358c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005358cb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005358d2 je 0x5358e8 */ if (ZF_) goto L_005358e8;
  /* 005358d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005358d5 call 0x534dc0 */ esp -= 4; M32(esp) = 0x5358dau; SAVEALL; F_00534dc0(c); ABI_CHECK(0x534dc0u, 0x5358d5u); RETCHK(0x5358dau, 0x5358d5u); LOADALL;
  /* 005358da mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005358dd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005358e4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005358e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005358e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005358e8:;
  /* 005358e8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005358eb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005358ed mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005358f4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005358f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005358f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00535900(CPU *c) {
  NATIVE_HOOK(0x535900u) REGS; LOADALL;
L_00535900:;
  /* 00535900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00535901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00535903 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535904 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00535907 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00535908 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0053590b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0053590d je 0x53592a */ if (ZF_) goto L_0053592a;
  /* 0053590f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00535912 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00535914 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535919 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0053591b sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0053591e mov eax, edx */ { eax = (u32)(edx); }
  /* 00535920 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00535923 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00535925 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 00535928 jne 0x53592e */ if (!ZF_) goto L_0053592e;
L_0053592a:;
  /* 0053592a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0053592c jmp 0x535943 */ goto L_00535943;
L_0053592e:;
  /* 0053592e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00535930 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00535932 mov eax, 0x7e07e07f */ { eax = (u32)(0x7e07e07fu); }
  /* 00535937 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535939 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0053593c mov esi, edx */ { esi = (u32)(edx); }
  /* 0053593e shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00535941 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00535943:;
  /* 00535943 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00535946 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00535948 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00535949 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0053594a call 0x5359f0 */ esp -= 4; M32(esp) = 0x53594fu; SAVEALL; F_005359f0(c); ABI_CHECK(0x5359f0u, 0x53594au); RETCHK(0x53594fu, 0x53594au); LOADALL;
  /* 0053594f imul esi, esi, 0x104 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x104u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00535955 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00535958 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0053595b mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0053595d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0053595e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0053595f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00535960 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}
