#include "funcs.h"

void F_004985b0(CPU *c) {
  NATIVE_HOOK(0x4985b0u) REGS; LOADALL;
L_004985b0:;
  /* 004985b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004985b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004985b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004985b5 push 0x61eb9b */ { u32 v_ = 0x61eb9bu; esp -= 4; M32(esp) = v_; }
  /* 004985ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004985c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004985c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004985c8 sub esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004985ce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004985d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004985d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004985d5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004985d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004985d9 lea edi, [esi + 0x17c] */ edi = (u32)((u32)(esi + 0x17cu));
  /* 004985df mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004985e2 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004985e5 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004985e7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004985e9 mov dword ptr [ebp - 0xa8], edi */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(edi); }
  /* 004985ef je 0x4985fa */ if (ZF_) goto L_004985fa;
  /* 004985f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004985f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4985f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4985f2u); RETCHK(0x4985f7u, 0x4985f2u); LOADALL;
  /* 004985f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004985fa:;
  /* 004985fa lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498600 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00498603 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00498606 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00498609 call 0x5680c0 */ esp -= 4; M32(esp) = 0x49860eu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498609u); RETCHK(0x49860eu, 0x498609u); LOADALL;
  /* 0049860e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00498611 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00498614 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00498617 call 0x568120 */ esp -= 4; M32(esp) = 0x49861cu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x498617u); RETCHK(0x49861cu, 0x498617u); LOADALL;
  /* 0049861c lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0049861f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498620 lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498626 call 0x568230 */ esp -= 4; M32(esp) = 0x49862bu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498626u); RETCHK(0x49862bu, 0x498626u); LOADALL;
  /* 0049862b lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0049862e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049862f lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498635 call 0x568230 */ esp -= 4; M32(esp) = 0x49863au; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498635u); RETCHK(0x49863au, 0x498635u); LOADALL;
  /* 0049863a lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0049863d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049863e lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498644 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 00498647 call 0x568230 */ esp -= 4; M32(esp) = 0x49864cu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498647u); RETCHK(0x49864cu, 0x498647u); LOADALL;
  /* 0049864c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049864e jle 0x498778 */ if ((ZF_|LT_)) goto L_00498778;
  /* 00498654 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498657 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498659 jle 0x498697 */ if ((ZF_|LT_)) goto L_00498697;
  /* 0049865b mov esi, eax */ { esi = (u32)(eax); }
  /* 0049865d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00498660:;
  /* 00498660 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 00498665 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049866b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049866c lea ebx, [ebp - 0xa4] */ ebx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498672 call 0x5682e0 */ esp -= 4; M32(esp) = 0x498677u; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x498672u); RETCHK(0x498677u, 0x498672u); LOADALL;
  /* 00498677 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0049867a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049867b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049867d call 0x568230 */ esp -= 4; M32(esp) = 0x498682u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x49867du); RETCHK(0x498682u, 0x49867du); LOADALL;
  /* 00498682 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 00498688 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049868a call 0x499e20 */ esp -= 4; M32(esp) = 0x49868fu; SAVEALL; F_00499e20(c); ABI_CHECK(0x499e20u, 0x49868au); RETCHK(0x49868fu, 0x49868au); LOADALL;
  /* 0049868f dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00498690 jne 0x498660 */ if (!ZF_) goto L_00498660;
  /* 00498692 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00498695 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00498697:;
  /* 00498697 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00498698 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0049869e call 0x499b00 */ esp -= 4; M32(esp) = 0x4986a3u; SAVEALL; F_00499b00(c); ABI_CHECK(0x499b00u, 0x49869eu); RETCHK(0x4986a3u, 0x49869eu); LOADALL;
  /* 004986a3 mov esi, dword ptr [esi + 0xfc] */ { const u32 m_ = (u32)(esi + 0xfcu); esi = (u32)(M32(m_)); }
  /* 004986a9 call 0x5156e0 */ esp -= 4; M32(esp) = 0x4986aeu; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x4986a9u); RETCHK(0x4986aeu, 0x4986a9u); LOADALL;
  /* 004986ae mov dword ptr [ebp + 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x0u); }
L_004986b5:;
  /* 004986b5 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004986b8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004986ba mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 004986bd je 0x4986d5 */ if (ZF_) goto L_004986d5;
  /* 004986bf mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004986c2 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004986c4 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 004986c9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004986cb sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004986ce mov eax, edx */ { eax = (u32)(edx); }
  /* 004986d0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004986d3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004986d5:;
  /* 004986d5 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004986d7 jge 0x498778 */ if (!LT_) goto L_00498778;
  /* 004986dd mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004986e0 mov esi, dword ptr [edx + 0x180] */ { const u32 m_ = (u32)(edx + 0x180u); esi = (u32)(M32(m_)); }
  /* 004986e6 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004986e9 mov byte ptr [ebp - 0x90], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M8(m_) = (u8)(0x0u); }
  /* 004986f0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004986f2 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 004986f7 lea edi, [ebp - 0x8f] */ edi = (u32)((u32)(ebp + 0xffffff71u));
  /* 004986fd rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004986ff stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00498701 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00498703 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00498704 mov eax, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); eax = (u32)(M32(m_)); }
  /* 0049870a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049870b push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 00498710 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00498716 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 0049871b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049871c call 0x5fe928 */ esp -= 4; M32(esp) = 0x498721u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x49871cu); RETCHK(0x498721u, 0x49871cu); LOADALL;
  /* 00498721 push 0x640 */ { u32 v_ = 0x640u; esp -= 4; M32(esp) = v_; }
  /* 00498726 call 0x5fe934 */ esp -= 4; M32(esp) = 0x49872bu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x498726u); RETCHK(0x49872bu, 0x498726u); LOADALL;
  /* 0049872b add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049872e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00498730 je 0x498750 */ if (ZF_) goto L_00498750;
  /* 00498732 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498734 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00498739 lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0049873f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00498740 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00498741 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00498742 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00498744 mov esi, eax */ { esi = (u32)(eax); }
  /* 00498746 call 0x496050 */ esp -= 4; M32(esp) = 0x49874bu; SAVEALL; F_00496050(c); ABI_CHECK(0x496050u, 0x498746u); RETCHK(0x49874bu, 0x498746u); LOADALL;
  /* 0049874b mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049874e jmp 0x498752 */ goto L_00498752;
L_00498750:;
  /* 00498750 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00498752:;
  /* 00498752 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498753 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00498756 mov edi, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); edi = (u32)(M32(m_)); }
  /* 0049875c call 0x515650 */ esp -= 4; M32(esp) = 0x498761u; SAVEALL; F_00515650(c); ABI_CHECK(0x515650u, 0x49875cu); RETCHK(0x498761u, 0x49875cu); LOADALL;
  /* 00498761 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498764 mov edi, dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); edi = (u32)(M32(m_)); }
  /* 0049876a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049876b add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00498770 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00498773 jmp 0x4986b5 */ goto L_004986b5;
L_00498778:;
  /* 00498778 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049877b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049877c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049877d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00498784 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00498787 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00498788 call 0x61af31 */ esp -= 4; M32(esp) = 0x49878du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498788u); RETCHK(0x49878du, 0x498788u); LOADALL;
  /* 0049878d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049878f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498790 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00498860(CPU *c) {
  NATIVE_HOOK(0x498860u) REGS; LOADALL;
L_00498860:;
  /* 00498860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00498861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00498863 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498865 push 0x61eb9b */ { u32 v_ = 0x61eb9bu; esp -= 4; M32(esp) = v_; }
  /* 0049886a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498870 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498871 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498878 sub esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049887e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498883 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00498884 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00498885 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00498888 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498889 lea edi, [esi + 0x18c] */ edi = (u32)((u32)(esi + 0x18cu));
  /* 0049888f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498892 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00498895 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00498897 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498899 mov dword ptr [ebp - 0xa8], edi */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(edi); }
  /* 0049889f je 0x4988aa */ if (ZF_) goto L_004988aa;
  /* 004988a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004988a2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4988a7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4988a2u); RETCHK(0x4988a7u, 0x4988a2u); LOADALL;
  /* 004988a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004988aa:;
  /* 004988aa lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 004988b0 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004988b3 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 004988b6 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 004988b9 call 0x5680c0 */ esp -= 4; M32(esp) = 0x4988beu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x4988b9u); RETCHK(0x4988beu, 0x4988b9u); LOADALL;
  /* 004988be mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004988c1 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004988c4 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004988c7 call 0x568120 */ esp -= 4; M32(esp) = 0x4988ccu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x4988c7u); RETCHK(0x4988ccu, 0x4988c7u); LOADALL;
  /* 004988cc lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 004988cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004988d0 lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 004988d6 call 0x568230 */ esp -= 4; M32(esp) = 0x4988dbu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4988d6u); RETCHK(0x4988dbu, 0x4988d6u); LOADALL;
  /* 004988db lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 004988de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004988df lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 004988e5 call 0x568230 */ esp -= 4; M32(esp) = 0x4988eau; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4988e5u); RETCHK(0x4988eau, 0x4988e5u); LOADALL;
  /* 004988ea lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 004988ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004988ee lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 004988f4 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 004988f7 call 0x568230 */ esp -= 4; M32(esp) = 0x4988fcu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4988f7u); RETCHK(0x4988fcu, 0x4988f7u); LOADALL;
  /* 004988fc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004988fe jle 0x498a28 */ if ((ZF_|LT_)) goto L_00498a28;
  /* 00498904 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498907 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498909 jle 0x498947 */ if ((ZF_|LT_)) goto L_00498947;
  /* 0049890b mov esi, eax */ { esi = (u32)(eax); }
  /* 0049890d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00498910:;
  /* 00498910 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 00498915 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049891b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049891c lea ebx, [ebp - 0xa4] */ ebx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498922 call 0x5682e0 */ esp -= 4; M32(esp) = 0x498927u; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x498922u); RETCHK(0x498927u, 0x498922u); LOADALL;
  /* 00498927 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0049892a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049892b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049892d call 0x568230 */ esp -= 4; M32(esp) = 0x498932u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x49892du); RETCHK(0x498932u, 0x49892du); LOADALL;
  /* 00498932 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 00498938 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049893a call 0x499e20 */ esp -= 4; M32(esp) = 0x49893fu; SAVEALL; F_00499e20(c); ABI_CHECK(0x499e20u, 0x49893au); RETCHK(0x49893fu, 0x49893au); LOADALL;
  /* 0049893f dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00498940 jne 0x498910 */ if (!ZF_) goto L_00498910;
  /* 00498942 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00498945 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00498947:;
  /* 00498947 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00498948 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 0049894e call 0x499b00 */ esp -= 4; M32(esp) = 0x498953u; SAVEALL; F_00499b00(c); ABI_CHECK(0x499b00u, 0x49894eu); RETCHK(0x498953u, 0x49894eu); LOADALL;
  /* 00498953 mov esi, dword ptr [esi + 0xfc] */ { const u32 m_ = (u32)(esi + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00498959 call 0x5156e0 */ esp -= 4; M32(esp) = 0x49895eu; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x498959u); RETCHK(0x49895eu, 0x498959u); LOADALL;
  /* 0049895e mov dword ptr [ebp + 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x0u); }
L_00498965:;
  /* 00498965 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00498968 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049896a mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0049896d je 0x498985 */ if (ZF_) goto L_00498985;
  /* 0049896f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00498972 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00498974 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 00498979 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049897b sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049897e mov eax, edx */ { eax = (u32)(edx); }
  /* 00498980 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00498983 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00498985:;
  /* 00498985 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498987 jge 0x498a28 */ if (!LT_) goto L_00498a28;
  /* 0049898d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00498990 mov esi, dword ptr [edx + 0x190] */ { const u32 m_ = (u32)(edx + 0x190u); esi = (u32)(M32(m_)); }
  /* 00498996 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00498999 mov byte ptr [ebp - 0x90], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M8(m_) = (u8)(0x0u); }
  /* 004989a0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004989a2 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 004989a7 lea edi, [ebp - 0x8f] */ edi = (u32)((u32)(ebp + 0xffffff71u));
  /* 004989ad rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004989af stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 004989b1 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004989b3 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 004989b4 mov eax, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); eax = (u32)(M32(m_)); }
  /* 004989ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004989bb push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 004989c0 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 004989c6 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004989cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004989cc call 0x5fe928 */ esp -= 4; M32(esp) = 0x4989d1u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4989ccu); RETCHK(0x4989d1u, 0x4989ccu); LOADALL;
  /* 004989d1 push 0x640 */ { u32 v_ = 0x640u; esp -= 4; M32(esp) = v_; }
  /* 004989d6 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4989dbu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4989d6u); RETCHK(0x4989dbu, 0x4989d6u); LOADALL;
  /* 004989db add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004989de test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004989e0 je 0x498a00 */ if (ZF_) goto L_00498a00;
  /* 004989e2 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004989e4 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 004989e9 lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 004989ef inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004989f0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004989f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004989f2 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 004989f4 mov esi, eax */ { esi = (u32)(eax); }
  /* 004989f6 call 0x496050 */ esp -= 4; M32(esp) = 0x4989fbu; SAVEALL; F_00496050(c); ABI_CHECK(0x496050u, 0x4989f6u); RETCHK(0x4989fbu, 0x4989f6u); LOADALL;
  /* 004989fb mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004989fe jmp 0x498a02 */ goto L_00498a02;
L_00498a00:;
  /* 00498a00 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00498a02:;
  /* 00498a02 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498a03 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00498a06 mov edi, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); edi = (u32)(M32(m_)); }
  /* 00498a0c call 0x515650 */ esp -= 4; M32(esp) = 0x498a11u; SAVEALL; F_00515650(c); ABI_CHECK(0x515650u, 0x498a0cu); RETCHK(0x498a11u, 0x498a0cu); LOADALL;
  /* 00498a11 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498a14 mov edi, dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); edi = (u32)(M32(m_)); }
  /* 00498a1a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00498a1b add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00498a20 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00498a23 jmp 0x498965 */ goto L_00498965;
L_00498a28:;
  /* 00498a28 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498a2b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00498a2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00498a2d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00498a34 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00498a37 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00498a38 call 0x61af31 */ esp -= 4; M32(esp) = 0x498a3du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498a38u); RETCHK(0x498a3du, 0x498a38u); LOADALL;
  /* 00498a3d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498a3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498a40 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00498b10(CPU *c) {
  NATIVE_HOOK(0x498b10u) REGS; LOADALL;
L_00498b10:;
  /* 00498b10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00498b11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00498b13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498b15 push 0x61eb9b */ { u32 v_ = 0x61eb9bu; esp -= 4; M32(esp) = v_; }
  /* 00498b1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498b20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498b21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498b28 sub esp, 0x98 */ { u32 a_ = esp, b_ = 0x98u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00498b2e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498b33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00498b34 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00498b37 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00498b38 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498b39 lea edi, [ebx + 0x19c] */ edi = (u32)((u32)(ebx + 0x19cu));
  /* 00498b3f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498b42 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00498b45 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00498b47 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498b49 mov dword ptr [ebp - 0x94], edi */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(edi); }
  /* 00498b4f je 0x498b5a */ if (ZF_) goto L_00498b5a;
  /* 00498b51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498b52 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x498b57u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x498b52u); RETCHK(0x498b57u, 0x498b52u); LOADALL;
  /* 00498b57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00498b5a:;
  /* 00498b5a lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498b60 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 00498b63 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00498b66 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 00498b69 call 0x5680c0 */ esp -= 4; M32(esp) = 0x498b6eu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498b69u); RETCHK(0x498b6eu, 0x498b69u); LOADALL;
  /* 00498b6e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00498b71 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00498b74 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00498b77 call 0x568120 */ esp -= 4; M32(esp) = 0x498b7cu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x498b77u); RETCHK(0x498b7cu, 0x498b77u); LOADALL;
  /* 00498b7c lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 00498b7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498b80 lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498b86 call 0x568230 */ esp -= 4; M32(esp) = 0x498b8bu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498b86u); RETCHK(0x498b8bu, 0x498b86u); LOADALL;
  /* 00498b8b lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 00498b8e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498b8f lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498b95 call 0x568230 */ esp -= 4; M32(esp) = 0x498b9au; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498b95u); RETCHK(0x498b9au, 0x498b95u); LOADALL;
  /* 00498b9a lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 00498b9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00498b9e lea eax, [ebp - 0xa4] */ eax = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498ba4 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 00498ba7 call 0x568230 */ esp -= 4; M32(esp) = 0x498bacu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498ba7u); RETCHK(0x498bacu, 0x498ba7u); LOADALL;
  /* 00498bac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00498bae jle 0x498c8a */ if ((ZF_|LT_)) goto L_00498c8a;
  /* 00498bb4 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498bb7 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498bb9 jle 0x498bec */ if ((ZF_|LT_)) goto L_00498bec;
  /* 00498bbb mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00498bbe mov edi, edi */ { edi = (u32)(edi); }
L_00498bc0:;
  /* 00498bc0 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 00498bc5 lea eax, [ebp - 0x90] */ eax = (u32)((u32)(ebp + 0xffffff70u));
  /* 00498bcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498bcc lea ebx, [ebp - 0xa4] */ ebx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498bd2 call 0x5682e0 */ esp -= 4; M32(esp) = 0x498bd7u; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x498bd2u); RETCHK(0x498bd7u, 0x498bd2u); LOADALL;
  /* 00498bd7 lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00498bdd mov esi, edi */ { esi = (u32)(edi); }
  /* 00498bdf call 0x499eb0 */ esp -= 4; M32(esp) = 0x498be4u; SAVEALL; F_00499eb0(c); ABI_CHECK(0x499eb0u, 0x498bdfu); RETCHK(0x498be4u, 0x498bdfu); LOADALL;
  /* 00498be4 dec dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00498be7 jne 0x498bc0 */ if (!ZF_) goto L_00498bc0;
  /* 00498be9 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_00498bec:;
  /* 00498bec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00498bed lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00498bf3 call 0x499b00 */ esp -= 4; M32(esp) = 0x498bf8u; SAVEALL; F_00499b00(c); ABI_CHECK(0x499b00u, 0x498bf3u); RETCHK(0x498bf8u, 0x498bf3u); LOADALL;
  /* 00498bf8 mov esi, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00498bfe call 0x5156e0 */ esp -= 4; M32(esp) = 0x498c03u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x498bfeu); RETCHK(0x498c03u, 0x498bfeu); LOADALL;
  /* 00498c03 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00498c05 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 00498c08 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 00498c0b jmp 0x498c10 */ goto L_00498c10;
L_00498c10:;
  /* 00498c10 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00498c13 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00498c15 jne 0x498c1b */ if (!ZF_) goto L_00498c1b;
  /* 00498c17 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00498c19 jmp 0x498c23 */ goto L_00498c23;
L_00498c1b:;
  /* 00498c1b mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00498c1e sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00498c20 sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00498c23:;
  /* 00498c23 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498c25 jge 0x498c8a */ if (!LT_) goto L_00498c8a;
  /* 00498c27 mov ebx, dword ptr [ebx + 0x1a0] */ { const u32 m_ = (u32)(ebx + 0x1a0u); ebx = (u32)(M32(m_)); }
  /* 00498c2d mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498c30 push 0x640 */ { u32 v_ = 0x640u; esp -= 4; M32(esp) = v_; }
  /* 00498c35 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00498c37 call 0x5fe934 */ esp -= 4; M32(esp) = 0x498c3cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x498c37u); RETCHK(0x498c3cu, 0x498c37u); LOADALL;
  /* 00498c3c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00498c3f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00498c41 je 0x498c5a */ if (ZF_) goto L_00498c5a;
  /* 00498c43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498c45 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00498c4a inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00498c4b push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00498c50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00498c51 mov esi, eax */ { esi = (u32)(eax); }
  /* 00498c53 call 0x496050 */ esp -= 4; M32(esp) = 0x498c58u; SAVEALL; F_00496050(c); ABI_CHECK(0x496050u, 0x498c53u); RETCHK(0x498c58u, 0x498c53u); LOADALL;
  /* 00498c58 jmp 0x498c5c */ goto L_00498c5c;
L_00498c5a:;
  /* 00498c5a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00498c5c:;
  /* 00498c5c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00498c5f mov edi, dword ptr [ecx + 0xfc] */ { const u32 m_ = (u32)(ecx + 0xfcu); edi = (u32)(M32(m_)); }
  /* 00498c65 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498c66 call 0x515650 */ esp -= 4; M32(esp) = 0x498c6bu; SAVEALL; F_00515650(c); ABI_CHECK(0x515650u, 0x498c66u); RETCHK(0x498c6bu, 0x498c66u); LOADALL;
  /* 00498c6b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00498c6e mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498c71 mov edi, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); edi = (u32)(M32(m_)); }
  /* 00498c77 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00498c7a inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00498c7b add eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00498c80 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00498c83 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00498c86 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00498c88 jmp 0x498c10 */ goto L_00498c10;
L_00498c8a:;
  /* 00498c8a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498c8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00498c8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00498c8f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00498c96 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00498c99 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00498c9a call 0x61af31 */ esp -= 4; M32(esp) = 0x498c9fu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498c9au); RETCHK(0x498c9fu, 0x498c9au); LOADALL;
  /* 00498c9f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498ca1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498ca2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00498d70(CPU *c) {
  NATIVE_HOOK(0x498d70u) REGS; LOADALL;
L_00498d70:;
  /* 00498d70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00498d71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00498d73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498d75 push 0x61eb7b */ { u32 v_ = 0x61eb7bu; esp -= 4; M32(esp) = v_; }
  /* 00498d7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498d80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498d81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498d88 sub esp, 0xc4 */ { u32 a_ = esp, b_ = 0xc4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00498d8e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498d93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00498d94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00498d95 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00498d98 add esi, 0x1ac */ { u32 a_ = esi, b_ = 0x1acu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00498d9e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498da1 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00498da4 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00498da6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498da8 mov dword ptr [ebp - 0xd0], esi */ { const u32 m_ = (u32)(ebp + 0xffffff30u); M32(m_) = (u32)(esi); }
  /* 00498dae je 0x498db9 */ if (ZF_) goto L_00498db9;
  /* 00498db0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498db1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x498db6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x498db1u); RETCHK(0x498db6u, 0x498db1u); LOADALL;
  /* 00498db6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00498db9:;
  /* 00498db9 lea eax, [ebp - 0xcc] */ eax = (u32)((u32)(ebp + 0xffffff34u));
  /* 00498dbf mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00498dc2 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00498dc5 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00498dc8 call 0x5680c0 */ esp -= 4; M32(esp) = 0x498dcdu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498dc8u); RETCHK(0x498dcdu, 0x498dc8u); LOADALL;
  /* 00498dcd mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00498dd0 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00498dd3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00498dd6 call 0x568120 */ esp -= 4; M32(esp) = 0x498ddbu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x498dd6u); RETCHK(0x498ddbu, 0x498dd6u); LOADALL;
  /* 00498ddb lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 00498dde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498ddf lea eax, [ebp - 0xcc] */ eax = (u32)((u32)(ebp + 0xffffff34u));
  /* 00498de5 call 0x568230 */ esp -= 4; M32(esp) = 0x498deau; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498de5u); RETCHK(0x498deau, 0x498de5u); LOADALL;
  /* 00498dea lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 00498ded push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498dee lea eax, [ebp - 0xcc] */ eax = (u32)((u32)(ebp + 0xffffff34u));
  /* 00498df4 call 0x568230 */ esp -= 4; M32(esp) = 0x498df9u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498df4u); RETCHK(0x498df9u, 0x498df4u); LOADALL;
  /* 00498df9 lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 00498dfc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00498dfd lea eax, [ebp - 0xcc] */ eax = (u32)((u32)(ebp + 0xffffff34u));
  /* 00498e03 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 00498e06 call 0x568230 */ esp -= 4; M32(esp) = 0x498e0bu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498e06u); RETCHK(0x498e0bu, 0x498e06u); LOADALL;
  /* 00498e0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00498e0d jle 0x498f34 */ if ((ZF_|LT_)) goto L_00498f34;
  /* 00498e13 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498e14 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 00498e17 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498e19 jle 0x498e6d */ if ((ZF_|LT_)) goto L_00498e6d;
  /* 00498e1b jmp 0x498e20 */ goto L_00498e20;
L_00498e20:;
  /* 00498e20 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 00498e25 lea eax, [ebp - 0xbc] */ eax = (u32)((u32)(ebp + 0xffffff44u));
  /* 00498e2b mov dword ptr [ebp - 0x3c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(ebx); }
  /* 00498e2e mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 00498e31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498e32 lea ebx, [ebp - 0xcc] */ ebx = (u32)((u32)(ebp + 0xffffff34u));
  /* 00498e38 mov dword ptr [ebp - 0x34], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0xffffffffu); }
  /* 00498e3f call 0x5682e0 */ esp -= 4; M32(esp) = 0x498e44u; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x498e3fu); RETCHK(0x498e44u, 0x498e3fu); LOADALL;
  /* 00498e44 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00498e47 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498e48 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00498e4a call 0x568230 */ esp -= 4; M32(esp) = 0x498e4fu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498e4au); RETCHK(0x498e4fu, 0x498e4au); LOADALL;
  /* 00498e4f lea edx, [ebp - 0x34] */ edx = (u32)((u32)(ebp + 0xffffffccu));
  /* 00498e52 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00498e53 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00498e55 call 0x568230 */ esp -= 4; M32(esp) = 0x498e5au; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x498e55u); RETCHK(0x498e5au, 0x498e55u); LOADALL;
  /* 00498e5a lea eax, [ebp - 0xbc] */ eax = (u32)((u32)(ebp + 0xffffff44u));
  /* 00498e60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498e61 mov eax, esi */ { eax = (u32)(esi); }
  /* 00498e63 call 0x499f50 */ esp -= 4; M32(esp) = 0x498e68u; SAVEALL; F_00499f50(c); ABI_CHECK(0x499f50u, 0x498e63u); RETCHK(0x498e68u, 0x498e63u); LOADALL;
  /* 00498e68 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00498e6a dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00498e6b jne 0x498e20 */ if (!ZF_) goto L_00498e20;
L_00498e6d:;
  /* 00498e6d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00498e70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498e71 lea ecx, [ebp - 0xcc] */ ecx = (u32)((u32)(ebp + 0xffffff34u));
  /* 00498e77 call 0x499b00 */ esp -= 4; M32(esp) = 0x498e7cu; SAVEALL; F_00499b00(c); ABI_CHECK(0x499b00u, 0x498e77u); RETCHK(0x498e7cu, 0x498e77u); LOADALL;
  /* 00498e7c xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00498e7e mov dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edi); }
  /* 00498e81 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
L_00498e84:;
  /* 00498e84 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00498e87 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498e89 je 0x498f33 */ if (ZF_) goto L_00498f33;
  /* 00498e8f mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00498e92 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00498e94 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 00498e99 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00498e9b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00498e9d sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00498ea0 mov eax, edx */ { eax = (u32)(edx); }
  /* 00498ea2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00498ea5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00498ea7 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00498ea9 jae 0x498f33 */ if (!CF_) goto L_00498f33;
  /* 00498eaf mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00498eb2 mov ebx, dword ptr [edx + 0x1b0] */ { const u32 m_ = (u32)(edx + 0x1b0u); ebx = (u32)(M32(m_)); }
  /* 00498eb8 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00498ebb mov eax, dword ptr [ebx + edx + 0x80] */ { const u32 m_ = (u32)(ebx + edx + 0x80u); eax = (u32)(M32(m_)); }
  /* 00498ec2 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00498ec4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498ec5 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 00498eca lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00498ecd push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 00498ecf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498ed0 call 0x5fe928 */ esp -= 4; M32(esp) = 0x498ed5u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x498ed0u); RETCHK(0x498ed5u, 0x498ed0u); LOADALL;
  /* 00498ed5 push 0x640 */ { u32 v_ = 0x640u; esp -= 4; M32(esp) = v_; }
  /* 00498eda call 0x5fe934 */ esp -= 4; M32(esp) = 0x498edfu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x498edau); RETCHK(0x498edfu, 0x498edau); LOADALL;
  /* 00498edf add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00498ee2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00498ee4 je 0x498f01 */ if (ZF_) goto L_00498f01;
  /* 00498ee6 mov edx, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); edx = (u32)(M32(m_)); }
  /* 00498eec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00498eed push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00498ef2 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00498ef5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498ef6 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00498ef7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498ef8 mov esi, eax */ { esi = (u32)(eax); }
  /* 00498efa call 0x496050 */ esp -= 4; M32(esp) = 0x498effu; SAVEALL; F_00496050(c); ABI_CHECK(0x496050u, 0x498efau); RETCHK(0x498effu, 0x498efau); LOADALL;
  /* 00498eff jmp 0x498f03 */ goto L_00498f03;
L_00498f01:;
  /* 00498f01 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00498f03:;
  /* 00498f03 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00498f06 mov edi, dword ptr [edx + 0xfc] */ { const u32 m_ = (u32)(edx + 0xfcu); edi = (u32)(M32(m_)); }
  /* 00498f0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498f0d call 0x515650 */ esp -= 4; M32(esp) = 0x498f12u; SAVEALL; F_00515650(c); ABI_CHECK(0x515650u, 0x498f0du); RETCHK(0x498f12u, 0x498f0du); LOADALL;
  /* 00498f12 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00498f15 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00498f18 mov esi, dword ptr [ebp - 0xd0] */ { const u32 m_ = (u32)(ebp + 0xffffff30u); esi = (u32)(M32(m_)); }
  /* 00498f1e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00498f1f add eax, 0x8c */ { u32 a_ = eax, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00498f24 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00498f27 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00498f2a mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00498f2c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00498f2e jmp 0x498e84 */ goto L_00498e84;
L_00498f33:;
  /* 00498f33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00498f34:;
  /* 00498f34 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498f37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00498f38 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00498f3f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00498f42 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00498f43 call 0x61af31 */ esp -= 4; M32(esp) = 0x498f48u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498f43u); RETCHK(0x498f48u, 0x498f43u); LOADALL;
  /* 00498f48 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498f4a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498f4b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00499010(CPU *c) {
  NATIVE_HOOK(0x499010u) REGS; LOADALL;
L_00499010:;
  /* 00499010 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499011 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499013 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00499015 push 0x61eb5b */ { u32 v_ = 0x61eb5bu; esp -= 4; M32(esp) = v_; }
  /* 0049901a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00499020 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499021 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00499028 sub esp, 0xe4 */ { u32 a_ = esp, b_ = 0xe4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049902e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00499033 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499034 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499035 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00499038 add esi, 0x1bc */ { u32 a_ = esi, b_ = 0x1bcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049903e mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00499041 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00499044 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00499046 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499048 mov dword ptr [ebp - 0xf0], esi */ { const u32 m_ = (u32)(ebp + 0xffffff10u); M32(m_) = (u32)(esi); }
  /* 0049904e je 0x499059 */ if (ZF_) goto L_00499059;
  /* 00499050 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499051 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x499056u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x499051u); RETCHK(0x499056u, 0x499051u); LOADALL;
  /* 00499056 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00499059:;
  /* 00499059 lea eax, [ebp - 0xec] */ eax = (u32)((u32)(ebp + 0xffffff14u));
  /* 0049905f mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00499062 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00499065 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00499068 call 0x5680c0 */ esp -= 4; M32(esp) = 0x49906du; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x499068u); RETCHK(0x49906du, 0x499068u); LOADALL;
  /* 0049906d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00499070 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00499073 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00499076 call 0x568120 */ esp -= 4; M32(esp) = 0x49907bu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x499076u); RETCHK(0x49907bu, 0x499076u); LOADALL;
  /* 0049907b lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0049907e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049907f lea eax, [ebp - 0xec] */ eax = (u32)((u32)(ebp + 0xffffff14u));
  /* 00499085 call 0x568230 */ esp -= 4; M32(esp) = 0x49908au; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x499085u); RETCHK(0x49908au, 0x499085u); LOADALL;
  /* 0049908a lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0049908d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049908e lea eax, [ebp - 0xec] */ eax = (u32)((u32)(ebp + 0xffffff14u));
  /* 00499094 call 0x568230 */ esp -= 4; M32(esp) = 0x499099u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x499094u); RETCHK(0x499099u, 0x499094u); LOADALL;
  /* 00499099 lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0049909c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049909d lea eax, [ebp - 0xec] */ eax = (u32)((u32)(ebp + 0xffffff14u));
  /* 004990a3 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 004990a6 call 0x568230 */ esp -= 4; M32(esp) = 0x4990abu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4990a6u); RETCHK(0x4990abu, 0x4990a6u); LOADALL;
  /* 004990ab test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004990ad jle 0x499237 */ if ((ZF_|LT_)) goto L_00499237;
  /* 004990b3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004990b4 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 004990b7 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004990b9 jle 0x499118 */ if ((ZF_|LT_)) goto L_00499118;
  /* 004990bb jmp 0x4990c0 */ goto L_004990c0;
L_004990c0:;
  /* 004990c0 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 004990c5 lea eax, [ebp - 0xdc] */ eax = (u32)((u32)(ebp + 0xffffff24u));
  /* 004990cb mov dword ptr [ebp - 0x5c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ebx); }
  /* 004990ce mov dword ptr [ebp - 0x58], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ebx); }
  /* 004990d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004990d2 lea ebx, [ebp - 0xec] */ ebx = (u32)((u32)(ebp + 0xffffff14u));
  /* 004990d8 mov dword ptr [ebp - 0x54], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xffffffffu); }
  /* 004990df call 0x5682e0 */ esp -= 4; M32(esp) = 0x4990e4u; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x4990dfu); RETCHK(0x4990e4u, 0x4990dfu); LOADALL;
  /* 004990e4 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 004990e7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004990e8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004990ea call 0x568230 */ esp -= 4; M32(esp) = 0x4990efu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4990eau); RETCHK(0x4990efu, 0x4990eau); LOADALL;
  /* 004990ef lea edx, [ebp - 0x58] */ edx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 004990f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004990f3 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004990f5 call 0x568230 */ esp -= 4; M32(esp) = 0x4990fau; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x4990f5u); RETCHK(0x4990fau, 0x4990f5u); LOADALL;
  /* 004990fa lea eax, [ebp - 0x54] */ eax = (u32)((u32)(ebp + 0xffffffacu));
  /* 004990fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004990fe mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00499100 call 0x568230 */ esp -= 4; M32(esp) = 0x499105u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x499100u); RETCHK(0x499105u, 0x499100u); LOADALL;
  /* 00499105 lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 0049910b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049910c mov eax, esi */ { eax = (u32)(esi); }
  /* 0049910e call 0x499f50 */ esp -= 4; M32(esp) = 0x499113u; SAVEALL; F_00499f50(c); ABI_CHECK(0x499f50u, 0x49910eu); RETCHK(0x499113u, 0x49910eu); LOADALL;
  /* 00499113 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00499115 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00499116 jne 0x4990c0 */ if (!ZF_) goto L_004990c0;
L_00499118:;
  /* 00499118 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049911b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049911c lea ecx, [ebp - 0xec] */ ecx = (u32)((u32)(ebp + 0xffffff14u));
  /* 00499122 call 0x499b00 */ esp -= 4; M32(esp) = 0x499127u; SAVEALL; F_00499b00(c); ABI_CHECK(0x499b00u, 0x499122u); RETCHK(0x499127u, 0x499122u); LOADALL;
  /* 00499127 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00499129 mov dword ptr [ebp + 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edi); }
  /* 0049912c mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0049912f nop */ ;
L_00499130:;
  /* 00499130 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00499133 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499135 je 0x499236 */ if (ZF_) goto L_00499236;
  /* 0049913b mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049913e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499140 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 00499145 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499147 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00499149 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049914c mov eax, edx */ { eax = (u32)(edx); }
  /* 0049914e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499151 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499153 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499155 jae 0x499236 */ if (!CF_) goto L_00499236;
  /* 0049915b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049915e mov esi, dword ptr [eax + 0x1c0] */ { const u32 m_ = (u32)(eax + 0x1c0u); esi = (u32)(M32(m_)); }
  /* 00499164 add esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00499167 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00499169 mov dword ptr [ebp - 0x4f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb1u); M32(m_) = (u32)(ecx); }
  /* 0049916c mov dword ptr [ebp - 0x4b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb5u); M32(m_) = (u32)(ecx); }
  /* 0049916f mov dword ptr [ebp - 0x47], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb9u); M32(m_) = (u32)(ecx); }
  /* 00499172 mov dword ptr [ebp - 0x43], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbdu); M32(m_) = (u32)(ecx); }
  /* 00499175 mov dword ptr [ebp - 0x3f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc1u); M32(m_) = (u32)(ecx); }
  /* 00499178 mov dword ptr [ebp - 0x3b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); M32(m_) = (u32)(ecx); }
  /* 0049917b mov dword ptr [ebp - 0x37], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc9u); M32(m_) = (u32)(ecx); }
  /* 0049917e mov word ptr [ebp - 0x33], cx */ { const u32 m_ = (u32)(ebp + 0xffffffcdu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00499182 mov byte ptr [ebp - 0x50], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00499185 mov byte ptr [ebp - 0x31], cl */ { const u32 m_ = (u32)(ebp + 0xffffffcfu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00499188 mov edx, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); edx = (u32)(M32(m_)); }
  /* 0049918e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049918f push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 00499194 lea eax, [ebp - 0x50] */ eax = (u32)((u32)(ebp + 0xffffffb0u));
  /* 00499197 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 00499199 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049919a call 0x5fe928 */ esp -= 4; M32(esp) = 0x49919fu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x49919au); RETCHK(0x49919fu, 0x49919au); LOADALL;
  /* 0049919f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004991a1 mov dword ptr [ebp - 0x2f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M32(m_) = (u32)(ecx); }
  /* 004991a4 mov dword ptr [ebp - 0x2b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd5u); M32(m_) = (u32)(ecx); }
  /* 004991a7 mov dword ptr [ebp - 0x27], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd9u); M32(m_) = (u32)(ecx); }
  /* 004991aa mov dword ptr [ebp - 0x23], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(ecx); }
  /* 004991ad mov dword ptr [ebp - 0x1f], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(ecx); }
  /* 004991b0 mov dword ptr [ebp - 0x1b], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(ecx); }
  /* 004991b3 mov dword ptr [ebp - 0x17], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(ecx); }
  /* 004991b6 mov word ptr [ebp - 0x13], cx */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 004991ba mov byte ptr [ebp - 0x30], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004991bd mov byte ptr [ebp - 0x11], cl */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004991c0 mov edx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); edx = (u32)(M32(m_)); }
  /* 004991c6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004991c7 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 004991cc lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004991cf push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 004991d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004991d2 call 0x5fe928 */ esp -= 4; M32(esp) = 0x4991d7u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x4991d2u); RETCHK(0x4991d7u, 0x4991d2u); LOADALL;
  /* 004991d7 push 0x640 */ { u32 v_ = 0x640u; esp -= 4; M32(esp) = v_; }
  /* 004991dc call 0x5fe934 */ esp -= 4; M32(esp) = 0x4991e1u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4991dcu); RETCHK(0x4991e1u, 0x4991dcu); LOADALL;
  /* 004991e1 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004991e4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004991e6 je 0x499206 */ if (ZF_) goto L_00499206;
  /* 004991e8 mov ecx, dword ptr [esi + 0x88] */ { const u32 m_ = (u32)(esi + 0x88u); ecx = (u32)(M32(m_)); }
  /* 004991ee push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004991ef lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004991f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004991f3 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004991f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004991f7 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004991f8 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 004991fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004991fb mov esi, eax */ { esi = (u32)(eax); }
  /* 004991fd call 0x496050 */ esp -= 4; M32(esp) = 0x499202u; SAVEALL; F_00496050(c); ABI_CHECK(0x496050u, 0x4991fdu); RETCHK(0x499202u, 0x4991fdu); LOADALL;
  /* 00499202 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00499204 jmp 0x499208 */ goto L_00499208;
L_00499206:;
  /* 00499206 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00499208:;
  /* 00499208 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049920b mov edi, dword ptr [edx + 0xfc] */ { const u32 m_ = (u32)(edx + 0xfcu); edi = (u32)(M32(m_)); }
  /* 00499211 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499212 call 0x515650 */ esp -= 4; M32(esp) = 0x499217u; SAVEALL; F_00515650(c); ABI_CHECK(0x515650u, 0x499212u); RETCHK(0x499217u, 0x499212u); LOADALL;
  /* 00499217 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049921a mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049921d mov esi, dword ptr [ebp - 0xf0] */ { const u32 m_ = (u32)(ebp + 0xffffff10u); esi = (u32)(M32(m_)); }
  /* 00499223 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00499224 add eax, 0x8c */ { u32 a_ = eax, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499229 mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0049922c mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0049922f mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00499231 jmp 0x499130 */ goto L_00499130;
L_00499236:;
  /* 00499236 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00499237:;
  /* 00499237 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049923a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049923b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00499242 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00499245 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499246 call 0x61af31 */ esp -= 4; M32(esp) = 0x49924bu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x499246u); RETCHK(0x49924bu, 0x499246u); LOADALL;
  /* 0049924b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049924d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049924e ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00499260(CPU *c) {
  NATIVE_HOOK(0x499260u) REGS; LOADALL;
L_00499260:;
  /* 00499260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499263 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00499265 push 0x620690 */ { u32 v_ = 0x620690u; esp -= 4; M32(esp) = v_; }
  /* 0049926a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00499270 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499271 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00499278 sub esp, 0x154 */ { u32 a_ = esp, b_ = 0x154u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049927e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049927f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00499281 mov eax, dword ptr [ebx + 0xd0] */ { const u32 m_ = (u32)(ebx + 0xd0u); eax = (u32)(M32(m_)); }
  /* 00499287 mov eax, dword ptr [eax + 0x188] */ { const u32 m_ = (u32)(eax + 0x188u); eax = (u32)(M32(m_)); }
  /* 0049928d cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499290 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499291 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499292 ja 0x49975f */ if (!(CF_|ZF_)) goto L_0049975f;
  /* 00499298 jmp dword ptr [eax*4 + 0x4998e8] */ { const u32 m_ = (u32)(eax * 4u + 0x4998e8u); u32 t_ = M32(m_); switch (t_) { case 0x49929fu: goto L_0049929f; case 0x4993b0u: goto L_004993b0; case 0x4994aeu: goto L_004994ae; case 0x499590u: goto L_00499590; case 0x499628u: goto L_00499628; default: SAVEALL; call_ind(c, t_); return; } }
L_0049929f:;
  /* 0049929f mov esi, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); esi = (u32)(M32(m_)); }
  /* 004992a5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004992a7 mov dword ptr [ebx + 0xf4], edi */ { const u32 m_ = (u32)(ebx + 0xf4u); M32(m_) = (u32)(edi); }
  /* 004992ad call 0x5156e0 */ esp -= 4; M32(esp) = 0x4992b2u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x4992adu); RETCHK(0x4992b2u, 0x4992adu); LOADALL;
  /* 004992b2 lea esi, [ebx + 0xe4] */ esi = (u32)((u32)(ebx + 0xe4u));
  /* 004992b8 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x4992bdu; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x4992b8u); RETCHK(0x4992bdu, 0x4992b8u); LOADALL;
  /* 004992bd push 0x64be2c */ { u32 v_ = 0x64be2cu; esp -= 4; M32(esp) = v_; }
  /* 004992c2 lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 004992c8 call 0x403060 */ esp -= 4; M32(esp) = 0x4992cdu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4992c8u); RETCHK(0x4992cdu, 0x4992c8u); LOADALL;
  /* 004992cd lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 004992d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004992d4 mov eax, esi */ { eax = (u32)(esi); }
  /* 004992d6 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004992d9 call 0x4030f0 */ esp -= 4; M32(esp) = 0x4992deu; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x4992d9u); RETCHK(0x4992deu, 0x4992d9u); LOADALL;
  /* 004992de or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004992e1 lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 004992e7 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004992ea call 0x43ee60 */ esp -= 4; M32(esp) = 0x4992efu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4992eau); RETCHK(0x4992efu, 0x4992eau); LOADALL;
  /* 004992ef push 0x64be0c */ { u32 v_ = 0x64be0cu; esp -= 4; M32(esp) = v_; }
  /* 004992f4 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 004992fa call 0x403060 */ esp -= 4; M32(esp) = 0x4992ffu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4992fau); RETCHK(0x4992ffu, 0x4992fau); LOADALL;
  /* 004992ff lea edx, [ebp - 0x9c] */ edx = (u32)((u32)(ebp + 0xffffff64u));
  /* 00499305 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499306 mov eax, esi */ { eax = (u32)(esi); }
  /* 00499308 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0049930f call 0x4030f0 */ esp -= 4; M32(esp) = 0x499314u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x49930fu); RETCHK(0x499314u, 0x49930fu); LOADALL;
  /* 00499314 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049931a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0049931d call 0x43ee60 */ esp -= 4; M32(esp) = 0x499322u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x49931du); RETCHK(0x499322u, 0x49931du); LOADALL;
  /* 00499322 push 0x64bde8 */ { u32 v_ = 0x64bde8u; esp -= 4; M32(esp) = v_; }
  /* 00499327 lea ecx, [ebp - 0x10c] */ ecx = (u32)((u32)(ebp + 0xfffffef4u));
  /* 0049932d call 0x403060 */ esp -= 4; M32(esp) = 0x499332u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x49932du); RETCHK(0x499332u, 0x49932du); LOADALL;
  /* 00499332 lea eax, [ebp - 0x10c] */ eax = (u32)((u32)(ebp + 0xfffffef4u));
  /* 00499338 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499339 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049933b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00499342 call 0x4030f0 */ esp -= 4; M32(esp) = 0x499347u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x499342u); RETCHK(0x499347u, 0x499342u); LOADALL;
  /* 00499347 lea ecx, [ebp - 0x10c] */ ecx = (u32)((u32)(ebp + 0xfffffef4u));
  /* 0049934d mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00499350 call 0x43ee60 */ esp -= 4; M32(esp) = 0x499355u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x499350u); RETCHK(0x499355u, 0x499350u); LOADALL;
  /* 00499355 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499358 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0049935a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049935d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049935e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00499360 call 0x40c9c0 */ esp -= 4; M32(esp) = 0x499365u; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x499360u); RETCHK(0x499365u, 0x499360u); LOADALL;
  /* 00499365 mov edx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); edx = (u32)(M32(m_)); }
  /* 0049936b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049936c call 0x4468b0 */ esp -= 4; M32(esp) = 0x499371u; SAVEALL; F_004468b0(c); ABI_CHECK(0x4468b0u, 0x49936cu); RETCHK(0x499371u, 0x49936cu); LOADALL;
  /* 00499371 mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499377 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00499379 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049937b call dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x499381u; SAVEALL; call_ind(c, t_); RETCHK(0x499381u, 0x49937bu); LOADALL; }
  /* 00499381 mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499387 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00499389 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049938b call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x499391u; SAVEALL; call_ind(c, t_); RETCHK(0x499391u, 0x49938bu); LOADALL; }
  /* 00499391 call 0x499900 */ esp -= 4; M32(esp) = 0x499396u; SAVEALL; F_00499900(c); ABI_CHECK(0x499900u, 0x499391u); RETCHK(0x499396u, 0x499391u); LOADALL;
  /* 00499396 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 0049939c mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 004993a1 call 0x515620 */ esp -= 4; M32(esp) = 0x4993a6u; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x4993a1u); RETCHK(0x4993a6u, 0x4993a1u); LOADALL;
  /* 004993a6 mov edi, 0x64be6c */ { edi = (u32)(0x64be6cu); }
  /* 004993ab jmp 0x499486 */ goto L_00499486;
L_004993b0:;
  /* 004993b0 mov esi, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); esi = (u32)(M32(m_)); }
  /* 004993b6 mov dword ptr [ebx + 0xf4], 4 */ { const u32 m_ = (u32)(ebx + 0xf4u); M32(m_) = (u32)(0x4u); }
  /* 004993c0 call 0x5156e0 */ esp -= 4; M32(esp) = 0x4993c5u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x4993c0u); RETCHK(0x4993c5u, 0x4993c0u); LOADALL;
  /* 004993c5 lea esi, [ebx + 0xe4] */ esi = (u32)((u32)(ebx + 0xe4u));
  /* 004993cb call 0x45c6a0 */ esp -= 4; M32(esp) = 0x4993d0u; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x4993cbu); RETCHK(0x4993d0u, 0x4993cbu); LOADALL;
  /* 004993d0 push 0x64bdcc */ { u32 v_ = 0x64bdccu; esp -= 4; M32(esp) = v_; }
  /* 004993d5 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004993d8 call 0x403060 */ esp -= 4; M32(esp) = 0x4993ddu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4993d8u); RETCHK(0x4993ddu, 0x4993d8u); LOADALL;
  /* 004993dd lea eax, [ebp - 0x64] */ eax = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004993e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004993e1 mov eax, esi */ { eax = (u32)(esi); }
  /* 004993e3 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 004993ea call 0x4030f0 */ esp -= 4; M32(esp) = 0x4993efu; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x4993eau); RETCHK(0x4993efu, 0x4993eau); LOADALL;
  /* 004993ef or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004993f2 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 004993f5 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004993f8 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4993fdu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4993f8u); RETCHK(0x4993fdu, 0x4993f8u); LOADALL;
  /* 004993fd push 0x64bda4 */ { u32 v_ = 0x64bda4u; esp -= 4; M32(esp) = v_; }
  /* 00499402 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 00499408 call 0x403060 */ esp -= 4; M32(esp) = 0x49940du; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x499408u); RETCHK(0x49940du, 0x499408u); LOADALL;
  /* 0049940d lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 00499413 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499414 mov eax, esi */ { eax = (u32)(esi); }
  /* 00499416 mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 0049941d call 0x4030f0 */ esp -= 4; M32(esp) = 0x499422u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x49941du); RETCHK(0x499422u, 0x49941du); LOADALL;
  /* 00499422 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 00499428 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0049942b call 0x43ee60 */ esp -= 4; M32(esp) = 0x499430u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x49942bu); RETCHK(0x499430u, 0x49942bu); LOADALL;
  /* 00499430 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499433 mov edx, esp */ { edx = (u32)(esp); }
  /* 00499435 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00499438 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499439 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049943b call 0x40c9c0 */ esp -= 4; M32(esp) = 0x499440u; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x49943bu); RETCHK(0x499440u, 0x49943bu); LOADALL;
  /* 00499440 mov eax, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); eax = (u32)(M32(m_)); }
  /* 00499446 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499447 call 0x4468b0 */ esp -= 4; M32(esp) = 0x49944cu; SAVEALL; F_004468b0(c); ABI_CHECK(0x4468b0u, 0x499447u); RETCHK(0x49944cu, 0x499447u); LOADALL;
  /* 0049944c mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499452 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00499454 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00499456 call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49945cu; SAVEALL; call_ind(c, t_); RETCHK(0x49945cu, 0x499456u); LOADALL; }
  /* 0049945c mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499462 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00499464 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00499466 call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49946cu; SAVEALL; call_ind(c, t_); RETCHK(0x49946cu, 0x499466u); LOADALL; }
  /* 0049946c call 0x499900 */ esp -= 4; M32(esp) = 0x499471u; SAVEALL; F_00499900(c); ABI_CHECK(0x499900u, 0x49946cu); RETCHK(0x499471u, 0x49946cu); LOADALL;
  /* 00499471 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00499477 mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 0049947c call 0x515620 */ esp -= 4; M32(esp) = 0x499481u; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x49947cu); RETCHK(0x499481u, 0x49947cu); LOADALL;
  /* 00499481 mov edi, 0x64bd90 */ { edi = (u32)(0x64bd90u); }
L_00499486:;
  /* 00499486 mov esi, eax */ { esi = (u32)(eax); }
  /* 00499488 call 0x496010 */ esp -= 4; M32(esp) = 0x49948du; SAVEALL; F_00496010(c); ABI_CHECK(0x496010u, 0x499488u); RETCHK(0x49948du, 0x499488u); LOADALL;
  /* 0049948d mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00499493 mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 00499498 call 0x515620 */ esp -= 4; M32(esp) = 0x49949du; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x499498u); RETCHK(0x49949du, 0x499498u); LOADALL;
  /* 0049949d mov edi, 0x64be58 */ { edi = (u32)(0x64be58u); }
  /* 004994a2 mov esi, eax */ { esi = (u32)(eax); }
  /* 004994a4 call 0x496010 */ esp -= 4; M32(esp) = 0x4994a9u; SAVEALL; F_00496010(c); ABI_CHECK(0x496010u, 0x4994a4u); RETCHK(0x4994a9u, 0x4994a4u); LOADALL;
  /* 004994a9 jmp 0x49983a */ goto L_0049983a;
L_004994ae:;
  /* 004994ae mov esi, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); esi = (u32)(M32(m_)); }
  /* 004994b4 mov dword ptr [ebx + 0xf4], 1 */ { const u32 m_ = (u32)(ebx + 0xf4u); M32(m_) = (u32)(0x1u); }
  /* 004994be call 0x5156e0 */ esp -= 4; M32(esp) = 0x4994c3u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x4994beu); RETCHK(0x4994c3u, 0x4994beu); LOADALL;
  /* 004994c3 lea esi, [ebx + 0xe4] */ esi = (u32)((u32)(ebx + 0xe4u));
  /* 004994c9 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x4994ceu; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x4994c9u); RETCHK(0x4994ceu, 0x4994c9u); LOADALL;
  /* 004994ce push 0x64bd74 */ { u32 v_ = 0x64bd74u; esp -= 4; M32(esp) = v_; }
  /* 004994d3 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004994d6 call 0x403060 */ esp -= 4; M32(esp) = 0x4994dbu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4994d6u); RETCHK(0x4994dbu, 0x4994d6u); LOADALL;
  /* 004994db lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004994de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004994df mov eax, esi */ { eax = (u32)(esi); }
  /* 004994e1 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 004994e8 call 0x4030f0 */ esp -= 4; M32(esp) = 0x4994edu; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x4994e8u); RETCHK(0x4994edu, 0x4994e8u); LOADALL;
  /* 004994ed or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004994f0 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004994f3 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004994f6 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4994fbu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4994f6u); RETCHK(0x4994fbu, 0x4994f6u); LOADALL;
  /* 004994fb push 0x64bd58 */ { u32 v_ = 0x64bd58u; esp -= 4; M32(esp) = v_; }
  /* 00499500 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00499506 call 0x403060 */ esp -= 4; M32(esp) = 0x49950bu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x499506u); RETCHK(0x49950bu, 0x499506u); LOADALL;
  /* 0049950b lea edx, [ebp - 0xb8] */ edx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00499511 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499512 mov eax, esi */ { eax = (u32)(esi); }
  /* 00499514 mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 0049951b call 0x4030f0 */ esp -= 4; M32(esp) = 0x499520u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x49951bu); RETCHK(0x499520u, 0x49951bu); LOADALL;
  /* 00499520 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00499526 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00499529 call 0x43ee60 */ esp -= 4; M32(esp) = 0x49952eu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x499529u); RETCHK(0x49952eu, 0x499529u); LOADALL;
  /* 0049952e sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499531 mov eax, esp */ { eax = (u32)(esp); }
  /* 00499533 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00499536 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499537 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00499539 call 0x40c9c0 */ esp -= 4; M32(esp) = 0x49953eu; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x499539u); RETCHK(0x49953eu, 0x499539u); LOADALL;
  /* 0049953e mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499544 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499545 call 0x4468b0 */ esp -= 4; M32(esp) = 0x49954au; SAVEALL; F_004468b0(c); ABI_CHECK(0x4468b0u, 0x499545u); RETCHK(0x49954au, 0x499545u); LOADALL;
  /* 0049954a mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499550 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00499552 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00499554 call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49955au; SAVEALL; call_ind(c, t_); RETCHK(0x49955au, 0x499554u); LOADALL; }
  /* 0049955a mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499560 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00499562 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00499564 call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49956au; SAVEALL; call_ind(c, t_); RETCHK(0x49956au, 0x499564u); LOADALL; }
  /* 0049956a call 0x499900 */ esp -= 4; M32(esp) = 0x49956fu; SAVEALL; F_00499900(c); ABI_CHECK(0x499900u, 0x49956au); RETCHK(0x49956fu, 0x49956au); LOADALL;
  /* 0049956f mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00499575 mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 0049957a call 0x515620 */ esp -= 4; M32(esp) = 0x49957fu; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x49957au); RETCHK(0x49957fu, 0x49957au); LOADALL;
  /* 0049957f mov edi, 0x64bd3c */ { edi = (u32)(0x64bd3cu); }
  /* 00499584 mov esi, eax */ { esi = (u32)(eax); }
  /* 00499586 call 0x496010 */ esp -= 4; M32(esp) = 0x49958bu; SAVEALL; F_00496010(c); ABI_CHECK(0x496010u, 0x499586u); RETCHK(0x49958bu, 0x499586u); LOADALL;
  /* 0049958b jmp 0x49983a */ goto L_0049983a;
L_00499590:;
  /* 00499590 mov esi, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00499596 mov dword ptr [ebx + 0xf4], 2 */ { const u32 m_ = (u32)(ebx + 0xf4u); M32(m_) = (u32)(0x2u); }
  /* 004995a0 call 0x5156e0 */ esp -= 4; M32(esp) = 0x4995a5u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x4995a0u); RETCHK(0x4995a5u, 0x4995a0u); LOADALL;
  /* 004995a5 lea esi, [ebx + 0xe4] */ esi = (u32)((u32)(ebx + 0xe4u));
  /* 004995ab call 0x45c6a0 */ esp -= 4; M32(esp) = 0x4995b0u; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x4995abu); RETCHK(0x4995b0u, 0x4995abu); LOADALL;
  /* 004995b0 push 0x64bde8 */ { u32 v_ = 0x64bde8u; esp -= 4; M32(esp) = v_; }
  /* 004995b5 lea ecx, [ebp - 0xf0] */ ecx = (u32)((u32)(ebp + 0xffffff10u));
  /* 004995bb call 0x403060 */ esp -= 4; M32(esp) = 0x4995c0u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4995bbu); RETCHK(0x4995c0u, 0x4995bbu); LOADALL;
  /* 004995c0 lea ecx, [ebp - 0xf0] */ ecx = (u32)((u32)(ebp + 0xffffff10u));
  /* 004995c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004995c7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004995c9 mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
  /* 004995d0 call 0x4030f0 */ esp -= 4; M32(esp) = 0x4995d5u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x4995d0u); RETCHK(0x4995d5u, 0x4995d0u); LOADALL;
  /* 004995d5 lea ecx, [ebp - 0xf0] */ ecx = (u32)((u32)(ebp + 0xffffff10u));
  /* 004995db mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004995e2 call 0x43ee60 */ esp -= 4; M32(esp) = 0x4995e7u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4995e2u); RETCHK(0x4995e7u, 0x4995e2u); LOADALL;
  /* 004995e7 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004995ea mov edx, esp */ { edx = (u32)(esp); }
  /* 004995ec mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 004995ef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004995f0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004995f2 call 0x40c9c0 */ esp -= 4; M32(esp) = 0x4995f7u; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x4995f2u); RETCHK(0x4995f7u, 0x4995f2u); LOADALL;
  /* 004995f7 mov eax, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); eax = (u32)(M32(m_)); }
  /* 004995fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004995fe call 0x4468b0 */ esp -= 4; M32(esp) = 0x499603u; SAVEALL; F_004468b0(c); ABI_CHECK(0x4468b0u, 0x4995feu); RETCHK(0x499603u, 0x4995feu); LOADALL;
  /* 00499603 mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499609 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049960b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049960d call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x499613u; SAVEALL; call_ind(c, t_); RETCHK(0x499613u, 0x49960du); LOADALL; }
  /* 00499613 mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499619 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0049961b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049961d call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x499623u; SAVEALL; call_ind(c, t_); RETCHK(0x499623u, 0x49961du); LOADALL; }
  /* 00499623 jmp 0x499835 */ goto L_00499835;
L_00499628:;
  /* 00499628 mov esi, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); esi = (u32)(M32(m_)); }
  /* 0049962e mov dword ptr [ebx + 0xf4], 3 */ { const u32 m_ = (u32)(ebx + 0xf4u); M32(m_) = (u32)(0x3u); }
  /* 00499638 call 0x5156e0 */ esp -= 4; M32(esp) = 0x49963du; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499638u); RETCHK(0x49963du, 0x499638u); LOADALL;
  /* 0049963d lea esi, [ebx + 0xe4] */ esi = (u32)((u32)(ebx + 0xe4u));
  /* 00499643 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x499648u; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x499643u); RETCHK(0x499648u, 0x499643u); LOADALL;
  /* 00499648 push 0x64bd28 */ { u32 v_ = 0x64bd28u; esp -= 4; M32(esp) = v_; }
  /* 0049964d lea ecx, [ebp - 0x128] */ ecx = (u32)((u32)(ebp + 0xfffffed8u));
  /* 00499653 call 0x403060 */ esp -= 4; M32(esp) = 0x499658u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x499653u); RETCHK(0x499658u, 0x499653u); LOADALL;
  /* 00499658 lea ecx, [ebp - 0x128] */ ecx = (u32)((u32)(ebp + 0xfffffed8u));
  /* 0049965e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049965f mov eax, esi */ { eax = (u32)(esi); }
  /* 00499661 mov dword ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x8u); }
  /* 00499668 call 0x4030f0 */ esp -= 4; M32(esp) = 0x49966du; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x499668u); RETCHK(0x49966du, 0x499668u); LOADALL;
  /* 0049966d or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00499670 lea ecx, [ebp - 0x128] */ ecx = (u32)((u32)(ebp + 0xfffffed8u));
  /* 00499676 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00499679 call 0x43ee60 */ esp -= 4; M32(esp) = 0x49967eu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x499679u); RETCHK(0x49967eu, 0x499679u); LOADALL;
  /* 0049967e push 0x64bd10 */ { u32 v_ = 0x64bd10u; esp -= 4; M32(esp) = v_; }
  /* 00499683 lea ecx, [ebp - 0x160] */ ecx = (u32)((u32)(ebp + 0xfffffea0u));
  /* 00499689 call 0x403060 */ esp -= 4; M32(esp) = 0x49968eu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x499689u); RETCHK(0x49968eu, 0x499689u); LOADALL;
  /* 0049968e lea edx, [ebp - 0x160] */ edx = (u32)((u32)(ebp + 0xfffffea0u));
  /* 00499694 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499695 mov eax, esi */ { eax = (u32)(esi); }
  /* 00499697 mov dword ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x9u); }
  /* 0049969e call 0x4030f0 */ esp -= 4; M32(esp) = 0x4996a3u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x49969eu); RETCHK(0x4996a3u, 0x49969eu); LOADALL;
  /* 004996a3 lea ecx, [ebp - 0x160] */ ecx = (u32)((u32)(ebp + 0xfffffea0u));
  /* 004996a9 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004996ac call 0x43ee60 */ esp -= 4; M32(esp) = 0x4996b1u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x4996acu); RETCHK(0x4996b1u, 0x4996acu); LOADALL;
  /* 004996b1 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004996b4 mov eax, esp */ { eax = (u32)(esp); }
  /* 004996b6 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 004996b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004996ba mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004996bc call 0x40c9c0 */ esp -= 4; M32(esp) = 0x4996c1u; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x4996bcu); RETCHK(0x4996c1u, 0x4996bcu); LOADALL;
  /* 004996c1 mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 004996c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004996c8 call 0x4468b0 */ esp -= 4; M32(esp) = 0x4996cdu; SAVEALL; F_004468b0(c); ABI_CHECK(0x4468b0u, 0x4996c8u); RETCHK(0x4996cdu, 0x4996c8u); LOADALL;
  /* 004996cd mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 004996d3 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004996d5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004996d7 call dword ptr [edx + 0xec] */ { const u32 m_ = (u32)(edx + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4996ddu; SAVEALL; call_ind(c, t_); RETCHK(0x4996ddu, 0x4996d7u); LOADALL; }
  /* 004996dd mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 004996e3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004996e5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004996e7 call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4996edu; SAVEALL; call_ind(c, t_); RETCHK(0x4996edu, 0x4996e7u); LOADALL; }
  /* 004996ed mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 004996f3 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004996f5 call 0x515620 */ esp -= 4; M32(esp) = 0x4996fau; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x4996f5u); RETCHK(0x4996fau, 0x4996f5u); LOADALL;
  /* 004996fa mov edi, 0x64bcf8 */ { edi = (u32)(0x64bcf8u); }
  /* 004996ff mov esi, eax */ { esi = (u32)(eax); }
  /* 00499701 call 0x496010 */ esp -= 4; M32(esp) = 0x499706u; SAVEALL; F_00496010(c); ABI_CHECK(0x496010u, 0x499701u); RETCHK(0x499706u, 0x499701u); LOADALL;
  /* 00499706 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 0049970c mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 00499711 call 0x515620 */ esp -= 4; M32(esp) = 0x499716u; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x499711u); RETCHK(0x499716u, 0x499711u); LOADALL;
  /* 00499716 mov edi, 0x64be80 */ { edi = (u32)(0x64be80u); }
  /* 0049971b mov esi, eax */ { esi = (u32)(eax); }
  /* 0049971d call 0x496010 */ esp -= 4; M32(esp) = 0x499722u; SAVEALL; F_00496010(c); ABI_CHECK(0x496010u, 0x49971du); RETCHK(0x499722u, 0x49971du); LOADALL;
  /* 00499722 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00499728 mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 0049972d call 0x515620 */ esp -= 4; M32(esp) = 0x499732u; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x49972du); RETCHK(0x499732u, 0x49972du); LOADALL;
  /* 00499732 mov edi, 0x64bce0 */ { edi = (u32)(0x64bce0u); }
  /* 00499737 mov esi, eax */ { esi = (u32)(eax); }
  /* 00499739 call 0x496010 */ esp -= 4; M32(esp) = 0x49973eu; SAVEALL; F_00496010(c); ABI_CHECK(0x496010u, 0x499739u); RETCHK(0x49973eu, 0x499739u); LOADALL;
  /* 0049973e mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00499744 mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 00499749 call 0x515620 */ esp -= 4; M32(esp) = 0x49974eu; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x499749u); RETCHK(0x49974eu, 0x499749u); LOADALL;
  /* 0049974e mov edi, 0x64bcc4 */ { edi = (u32)(0x64bcc4u); }
  /* 00499753 mov esi, eax */ { esi = (u32)(eax); }
  /* 00499755 call 0x496010 */ esp -= 4; M32(esp) = 0x49975au; SAVEALL; F_00496010(c); ABI_CHECK(0x496010u, 0x499755u); RETCHK(0x49975au, 0x499755u); LOADALL;
  /* 0049975a jmp 0x49983a */ goto L_0049983a;
L_0049975f:;
  /* 0049975f mov esi, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00499765 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00499767 mov dword ptr [ebx + 0xf4], edi */ { const u32 m_ = (u32)(ebx + 0xf4u); M32(m_) = (u32)(edi); }
  /* 0049976d call 0x5156e0 */ esp -= 4; M32(esp) = 0x499772u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x49976du); RETCHK(0x499772u, 0x49976du); LOADALL;
  /* 00499772 mov eax, dword ptr [ebx + 0xe8] */ { const u32 m_ = (u32)(ebx + 0xe8u); eax = (u32)(M32(m_)); }
  /* 00499778 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049977a lea esi, [ebx + 0xe4] */ esi = (u32)((u32)(ebx + 0xe4u));
  /* 00499780 je 0x49979c */ if (ZF_) goto L_0049979c;
  /* 00499782 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00499785 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 00499788 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499789 call 0x403f60 */ esp -= 4; M32(esp) = 0x49978eu; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x499789u); RETCHK(0x49978eu, 0x499789u); LOADALL;
  /* 0049978e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00499791 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499792 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x499797u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x499792u); RETCHK(0x499797u, 0x499792u); LOADALL;
  /* 00499797 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049979a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0049979c:;
  /* 0049979c push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0049979e push 0x64bca8 */ { u32 v_ = 0x64bca8u; esp -= 4; M32(esp) = v_; }
  /* 004997a3 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004997a6 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 004997a9 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 004997ac mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 004997af mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 004997b6 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 004997b9 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 004997bd call 0x404420 */ esp -= 4; M32(esp) = 0x4997c2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4997bdu); RETCHK(0x4997c2u, 0x4997bdu); LOADALL;
  /* 004997c2 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 004997c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004997c6 mov eax, esi */ { eax = (u32)(esi); }
  /* 004997c8 mov dword ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xau); }
  /* 004997cf call 0x4030f0 */ esp -= 4; M32(esp) = 0x4997d4u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x4997cfu); RETCHK(0x4997d4u, 0x4997cfu); LOADALL;
  /* 004997d4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004997db cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004997df jb 0x4997ed */ if (CF_) goto L_004997ed;
  /* 004997e1 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004997e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004997e5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4997eau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4997e5u); RETCHK(0x4997eau, 0x4997e5u); LOADALL;
  /* 004997ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004997ed:;
  /* 004997ed sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004997f0 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 004997f2 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 004997f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004997f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004997f8 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 004997ff mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00499802 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00499806 call 0x40c9c0 */ esp -= 4; M32(esp) = 0x49980bu; SAVEALL; F_0040c9c0(c); ABI_CHECK(0x40c9c0u, 0x499806u); RETCHK(0x49980bu, 0x499806u); LOADALL;
  /* 0049980b mov edx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); edx = (u32)(M32(m_)); }
  /* 00499811 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499812 call 0x4468b0 */ esp -= 4; M32(esp) = 0x499817u; SAVEALL; F_004468b0(c); ABI_CHECK(0x4468b0u, 0x499812u); RETCHK(0x499817u, 0x499812u); LOADALL;
  /* 00499817 mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 0049981d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0049981f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499820 call dword ptr [eax + 0xec] */ { const u32 m_ = (u32)(eax + 0xecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x499826u; SAVEALL; call_ind(c, t_); RETCHK(0x499826u, 0x499820u); LOADALL; }
  /* 00499826 mov ecx, dword ptr [ebx + 0xe0] */ { const u32 m_ = (u32)(ebx + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 0049982c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049982e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049982f call dword ptr [edx + 0xe4] */ { const u32 m_ = (u32)(edx + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x499835u; SAVEALL; call_ind(c, t_); RETCHK(0x499835u, 0x49982fu); LOADALL; }
L_00499835:;
  /* 00499835 call 0x499900 */ esp -= 4; M32(esp) = 0x49983au; SAVEALL; F_00499900(c); ABI_CHECK(0x499900u, 0x499835u); RETCHK(0x49983au, 0x499835u); LOADALL;
L_0049983a:;
  /* 0049983a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049983c push 0x64343c */ { u32 v_ = 0x64343cu; esp -= 4; M32(esp) = v_; }
  /* 00499841 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00499844 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0049984b mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00499852 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00499856 call 0x404420 */ esp -= 4; M32(esp) = 0x49985bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x499856u); RETCHK(0x49985bu, 0x499856u); LOADALL;
  /* 0049985b mov dword ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xbu); }
  /* 00499862 mov esi, dword ptr [ebx + 0x100] */ { const u32 m_ = (u32)(ebx + 0x100u); esi = (u32)(M32(m_)); }
  /* 00499868 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049986b call 0x5224b0 */ esp -= 4; M32(esp) = 0x499870u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x49986bu); RETCHK(0x499870u, 0x49986bu); LOADALL;
  /* 00499870 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00499877 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049987a mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0049987f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499881 jb 0x49988f */ if (CF_) goto L_0049988f;
  /* 00499883 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00499886 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499887 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49988cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x499887u); RETCHK(0x49988cu, 0x499887u); LOADALL;
  /* 0049988c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049988f:;
  /* 0049988f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00499891 push 0x64343c */ { u32 v_ = 0x64343cu; esp -= 4; M32(esp) = v_; }
  /* 00499896 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00499899 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 004998a0 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 004998a7 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 004998ab call 0x404420 */ esp -= 4; M32(esp) = 0x4998b0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4998abu); RETCHK(0x4998b0u, 0x4998abu); LOADALL;
  /* 004998b0 mov dword ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xcu); }
  /* 004998b7 mov esi, dword ptr [ebx + 0x104] */ { const u32 m_ = (u32)(ebx + 0x104u); esi = (u32)(M32(m_)); }
  /* 004998bd lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 004998c0 call 0x5224b0 */ esp -= 4; M32(esp) = 0x4998c5u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x4998c0u); RETCHK(0x4998c5u, 0x4998c0u); LOADALL;
  /* 004998c5 cmp dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004998c8 jb 0x4998d6 */ if (CF_) goto L_004998d6;
  /* 004998ca mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 004998cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004998ce call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4998d3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4998ceu); RETCHK(0x4998d3u, 0x4998ceu); LOADALL;
  /* 004998d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004998d6:;
  /* 004998d6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004998d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004998da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004998db mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004998e2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004998e3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004998e5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004998e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499900(CPU *c) {
  NATIVE_HOOK(0x499900u) REGS; LOADALL;
L_00499900:;
  /* 00499900 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 00499906 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499907 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499908 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049990a call 0x515620 */ esp -= 4; M32(esp) = 0x49990fu; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x49990au); RETCHK(0x49990fu, 0x49990au); LOADALL;
  /* 0049990f mov esi, eax */ { esi = (u32)(eax); }
  /* 00499911 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00499914 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00499916 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499918 je 0x499926 */ if (ZF_) goto L_00499926;
  /* 0049991a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049991b call 0x5ab020 */ esp -= 4; M32(esp) = 0x499920u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x49991bu); RETCHK(0x499920u, 0x49991bu); LOADALL;
  /* 00499920 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499923 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_00499926:;
  /* 00499926 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00499928 cmp eax, 0x64be94 */ { u32 a_ = eax, b_ = 0x64be94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049992d jne 0x499934 */ if (!ZF_) goto L_00499934;
  /* 0049992f mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00499932 jmp 0x499944 */ goto L_00499944;
L_00499934:;
  /* 00499934 push 0x64be94 */ { u32 v_ = 0x64be94u; esp -= 4; M32(esp) = v_; }
  /* 00499939 call 0x5ab540 */ esp -= 4; M32(esp) = 0x49993eu; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x499939u); RETCHK(0x49993eu, 0x499939u); LOADALL;
  /* 0049993e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499941 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00499944:;
  /* 00499944 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 0049994a mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 0049994f call 0x515620 */ esp -= 4; M32(esp) = 0x499954u; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x49994fu); RETCHK(0x499954u, 0x49994fu); LOADALL;
  /* 00499954 mov esi, eax */ { esi = (u32)(eax); }
  /* 00499956 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00499959 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049995b je 0x499969 */ if (ZF_) goto L_00499969;
  /* 0049995d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049995e call 0x5ab020 */ esp -= 4; M32(esp) = 0x499963u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x49995eu); RETCHK(0x499963u, 0x49995eu); LOADALL;
  /* 00499963 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499966 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_00499969:;
  /* 00499969 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0049996b cmp ecx, 0x64be80 */ { u32 a_ = ecx, b_ = 0x64be80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499971 jne 0x499978 */ if (!ZF_) goto L_00499978;
  /* 00499973 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00499976 jmp 0x499988 */ goto L_00499988;
L_00499978:;
  /* 00499978 push 0x64be80 */ { u32 v_ = 0x64be80u; esp -= 4; M32(esp) = v_; }
  /* 0049997d call 0x5ab540 */ esp -= 4; M32(esp) = 0x499982u; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x49997du); RETCHK(0x499982u, 0x49997du); LOADALL;
  /* 00499982 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499985 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_00499988:;
  /* 00499988 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 0049998e mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 00499993 call 0x515620 */ esp -= 4; M32(esp) = 0x499998u; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x499993u); RETCHK(0x499998u, 0x499993u); LOADALL;
  /* 00499998 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049999a mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049999d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049999f je 0x4999ad */ if (ZF_) goto L_004999ad;
  /* 004999a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004999a2 call 0x5ab020 */ esp -= 4; M32(esp) = 0x4999a7u; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4999a2u); RETCHK(0x4999a7u, 0x4999a2u); LOADALL;
  /* 004999a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004999aa mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_004999ad:;
  /* 004999ad mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 004999b0 mov ecx, dword ptr [ebx + 0xfc] */ { const u32 m_ = (u32)(ebx + 0xfcu); ecx = (u32)(M32(m_)); }
  /* 004999b6 mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 004999bb call 0x515620 */ esp -= 4; M32(esp) = 0x4999c0u; SAVEALL; F_00515620(c); ABI_CHECK(0x515620u, 0x4999bbu); RETCHK(0x4999c0u, 0x4999bbu); LOADALL;
  /* 004999c0 mov esi, eax */ { esi = (u32)(eax); }
  /* 004999c2 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004999c5 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004999c7 je 0x4999d5 */ if (ZF_) goto L_004999d5;
  /* 004999c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004999ca call 0x5ab020 */ esp -= 4; M32(esp) = 0x4999cfu; SAVEALL; F_005ab020(c); ABI_CHECK(0x5ab020u, 0x4999cau); RETCHK(0x4999cfu, 0x4999cau); LOADALL;
  /* 004999cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004999d2 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_004999d5:;
  /* 004999d5 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 004999d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004999d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004999da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004999e0(CPU *c) {
  NATIVE_HOOK(0x4999e0u) REGS; LOADALL;
  goto L_004999e0;
L_00497740:;
  /* 00497740 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00497741 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00497743 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00497745 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 0049774a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00497750 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00497751 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00497758 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049775e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00497763 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00497766 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00497767 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00497769 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00497770 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00497775 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 0049777b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0049777d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0049777f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00497780 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497786 call 0x5680c0 */ esp -= 4; M32(esp) = 0x49778bu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x497786u); RETCHK(0x49778bu, 0x497786u); LOADALL;
  /* 0049778b mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00497790 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00497796 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049779d call 0x568120 */ esp -= 4; M32(esp) = 0x4977a2u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x49779du); RETCHK(0x4977a2u, 0x49779du); LOADALL;
  /* 004977a2 push 0x1000011e */ { u32 v_ = 0x1000011eu; esp -= 4; M32(esp) = v_; }
  /* 004977a7 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4977acu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4977a7u); RETCHK(0x4977acu, 0x4977a7u); LOADALL;
  /* 004977ac push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004977ae lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 004977b4 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4977b9u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4977b4u); RETCHK(0x4977b9u, 0x4977b4u); LOADALL;
  /* 004977b9 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 004977bf call 0x464860 */ esp -= 4; M32(esp) = 0x4977c4u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x4977bfu); RETCHK(0x4977c4u, 0x4977bfu); LOADALL;
  /* 004977c4 mov edx, eax */ { edx = (u32)(eax); }
  /* 004977c6 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 004977cc call 0x4648e0 */ esp -= 4; M32(esp) = 0x4977d1u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x4977ccu); RETCHK(0x4977d1u, 0x4977ccu); LOADALL;
  /* 004977d1 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 004977d7 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 004977dc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004977dd call 0x565810 */ esp -= 4; M32(esp) = 0x4977e2u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x4977ddu); RETCHK(0x4977e2u, 0x4977ddu); LOADALL;
  /* 004977e2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004977e5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004977ec mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004977ef pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004977f0 call 0x61af31 */ esp -= 4; M32(esp) = 0x4977f5u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4977f0u); RETCHK(0x4977f5u, 0x4977f0u); LOADALL;
  /* 004977f5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004977f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004977f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00497a10:;
  /* 00497a10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00497a11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00497a13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00497a15 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 00497a1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00497a20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00497a21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00497a28 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00497a2e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00497a33 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00497a36 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00497a37 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00497a39 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00497a40 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00497a45 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 00497a4b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00497a4d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00497a4f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00497a50 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497a56 call 0x5680c0 */ esp -= 4; M32(esp) = 0x497a5bu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x497a56u); RETCHK(0x497a5bu, 0x497a56u); LOADALL;
  /* 00497a5b mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00497a60 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00497a66 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00497a6d call 0x568120 */ esp -= 4; M32(esp) = 0x497a72u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x497a6du); RETCHK(0x497a72u, 0x497a6du); LOADALL;
  /* 00497a72 push 0x10000152 */ { u32 v_ = 0x10000152u; esp -= 4; M32(esp) = v_; }
  /* 00497a77 call 0x5681f0 */ esp -= 4; M32(esp) = 0x497a7cu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x497a77u); RETCHK(0x497a7cu, 0x497a77u); LOADALL;
  /* 00497a7c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00497a7e lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497a84 call 0x5681f0 */ esp -= 4; M32(esp) = 0x497a89u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x497a84u); RETCHK(0x497a89u, 0x497a84u); LOADALL;
  /* 00497a89 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497a8f call 0x464860 */ esp -= 4; M32(esp) = 0x497a94u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x497a8fu); RETCHK(0x497a94u, 0x497a8fu); LOADALL;
  /* 00497a94 mov edx, eax */ { edx = (u32)(eax); }
  /* 00497a96 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497a9c call 0x4648e0 */ esp -= 4; M32(esp) = 0x497aa1u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x497a9cu); RETCHK(0x497aa1u, 0x497a9cu); LOADALL;
  /* 00497aa1 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00497aa7 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 00497aac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00497aad call 0x565810 */ esp -= 4; M32(esp) = 0x497ab2u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x497aadu); RETCHK(0x497ab2u, 0x497aadu); LOADALL;
  /* 00497ab2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00497ab5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00497abc mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00497abf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00497ac0 call 0x61af31 */ esp -= 4; M32(esp) = 0x497ac5u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x497ac0u); RETCHK(0x497ac5u, 0x497ac0u); LOADALL;
  /* 00497ac5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00497ac7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00497ac8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00497ce0:;
  /* 00497ce0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00497ce1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00497ce3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00497ce5 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 00497cea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00497cf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00497cf1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00497cf8 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00497cfe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00497d03 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00497d06 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00497d07 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00497d09 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00497d10 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00497d15 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 00497d1b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00497d1d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00497d1f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00497d20 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497d26 call 0x5680c0 */ esp -= 4; M32(esp) = 0x497d2bu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x497d26u); RETCHK(0x497d2bu, 0x497d26u); LOADALL;
  /* 00497d2b mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00497d30 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00497d36 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00497d3d call 0x568120 */ esp -= 4; M32(esp) = 0x497d42u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x497d3du); RETCHK(0x497d42u, 0x497d3du); LOADALL;
  /* 00497d42 push 0x10000122 */ { u32 v_ = 0x10000122u; esp -= 4; M32(esp) = v_; }
  /* 00497d47 call 0x5681f0 */ esp -= 4; M32(esp) = 0x497d4cu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x497d47u); RETCHK(0x497d4cu, 0x497d47u); LOADALL;
  /* 00497d4c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00497d4e lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497d54 call 0x5681f0 */ esp -= 4; M32(esp) = 0x497d59u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x497d54u); RETCHK(0x497d59u, 0x497d54u); LOADALL;
  /* 00497d59 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497d5f call 0x464860 */ esp -= 4; M32(esp) = 0x497d64u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x497d5fu); RETCHK(0x497d64u, 0x497d5fu); LOADALL;
  /* 00497d64 mov edx, eax */ { edx = (u32)(eax); }
  /* 00497d66 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497d6c call 0x4648e0 */ esp -= 4; M32(esp) = 0x497d71u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x497d6cu); RETCHK(0x497d71u, 0x497d6cu); LOADALL;
  /* 00497d71 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00497d77 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 00497d7c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00497d7d call 0x565810 */ esp -= 4; M32(esp) = 0x497d82u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x497d7du); RETCHK(0x497d82u, 0x497d7du); LOADALL;
  /* 00497d82 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00497d85 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00497d8c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00497d8f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00497d90 call 0x61af31 */ esp -= 4; M32(esp) = 0x497d95u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x497d90u); RETCHK(0x497d95u, 0x497d90u); LOADALL;
  /* 00497d95 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00497d97 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00497d98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00497fb0:;
  /* 00497fb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00497fb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00497fb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00497fb5 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 00497fba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00497fc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00497fc1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00497fc8 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00497fce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00497fd3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00497fd6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00497fd7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00497fd9 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00497fe0 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00497fe5 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 00497feb rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00497fed stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00497fef stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00497ff0 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00497ff6 call 0x5680c0 */ esp -= 4; M32(esp) = 0x497ffbu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x497ff6u); RETCHK(0x497ffbu, 0x497ff6u); LOADALL;
  /* 00497ffb mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00498000 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00498006 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049800d call 0x568120 */ esp -= 4; M32(esp) = 0x498012u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x49800du); RETCHK(0x498012u, 0x49800du); LOADALL;
  /* 00498012 push 0x10000120 */ { u32 v_ = 0x10000120u; esp -= 4; M32(esp) = v_; }
  /* 00498017 call 0x5681f0 */ esp -= 4; M32(esp) = 0x49801cu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498017u); RETCHK(0x49801cu, 0x498017u); LOADALL;
  /* 0049801c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049801e lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498024 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498029u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498024u); RETCHK(0x498029u, 0x498024u); LOADALL;
  /* 00498029 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0049802f call 0x464860 */ esp -= 4; M32(esp) = 0x498034u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x49802fu); RETCHK(0x498034u, 0x49802fu); LOADALL;
  /* 00498034 mov edx, eax */ { edx = (u32)(eax); }
  /* 00498036 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0049803c call 0x4648e0 */ esp -= 4; M32(esp) = 0x498041u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x49803cu); RETCHK(0x498041u, 0x49803cu); LOADALL;
  /* 00498041 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00498047 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0049804c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049804d call 0x565810 */ esp -= 4; M32(esp) = 0x498052u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x49804du); RETCHK(0x498052u, 0x49804du); LOADALL;
  /* 00498052 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498055 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049805c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049805f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00498060 call 0x61af31 */ esp -= 4; M32(esp) = 0x498065u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498060u); RETCHK(0x498065u, 0x498060u); LOADALL;
  /* 00498065 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498067 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498068 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00498250:;
  /* 00498250 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00498251 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00498253 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498255 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 0049825a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498260 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498261 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498268 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049826e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498273 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498276 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498277 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00498279 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00498280 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00498285 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 0049828b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0049828d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0049828f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00498290 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498296 call 0x5680c0 */ esp -= 4; M32(esp) = 0x49829bu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498296u); RETCHK(0x49829bu, 0x498296u); LOADALL;
  /* 0049829b mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 004982a0 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 004982a6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004982ad call 0x568120 */ esp -= 4; M32(esp) = 0x4982b2u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x4982adu); RETCHK(0x4982b2u, 0x4982adu); LOADALL;
  /* 004982b2 push 0x10000154 */ { u32 v_ = 0x10000154u; esp -= 4; M32(esp) = v_; }
  /* 004982b7 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4982bcu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4982b7u); RETCHK(0x4982bcu, 0x4982b7u); LOADALL;
  /* 004982bc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004982be lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 004982c4 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4982c9u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4982c4u); RETCHK(0x4982c9u, 0x4982c4u); LOADALL;
  /* 004982c9 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 004982cf call 0x464860 */ esp -= 4; M32(esp) = 0x4982d4u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x4982cfu); RETCHK(0x4982d4u, 0x4982cfu); LOADALL;
  /* 004982d4 mov edx, eax */ { edx = (u32)(eax); }
  /* 004982d6 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 004982dc call 0x4648e0 */ esp -= 4; M32(esp) = 0x4982e1u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x4982dcu); RETCHK(0x4982e1u, 0x4982dcu); LOADALL;
  /* 004982e1 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 004982e7 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 004982ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004982ed call 0x565810 */ esp -= 4; M32(esp) = 0x4982f2u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x4982edu); RETCHK(0x4982f2u, 0x4982edu); LOADALL;
  /* 004982f2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004982f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004982fc mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004982ff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00498300 call 0x61af31 */ esp -= 4; M32(esp) = 0x498305u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498300u); RETCHK(0x498305u, 0x498300u); LOADALL;
  /* 00498305 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498307 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498308 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004984f0:;
  /* 004984f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004984f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004984f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004984f5 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 004984fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498500 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498501 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498508 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049850e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498513 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498516 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498517 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00498519 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00498520 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00498525 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 0049852b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0049852d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0049852f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00498530 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498536 call 0x5680c0 */ esp -= 4; M32(esp) = 0x49853bu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498536u); RETCHK(0x49853bu, 0x498536u); LOADALL;
  /* 0049853b mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00498540 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00498546 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049854d call 0x568120 */ esp -= 4; M32(esp) = 0x498552u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x49854du); RETCHK(0x498552u, 0x49854du); LOADALL;
  /* 00498552 push 0x10000124 */ { u32 v_ = 0x10000124u; esp -= 4; M32(esp) = v_; }
  /* 00498557 call 0x5681f0 */ esp -= 4; M32(esp) = 0x49855cu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498557u); RETCHK(0x49855cu, 0x498557u); LOADALL;
  /* 0049855c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049855e lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498564 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498569u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498564u); RETCHK(0x498569u, 0x498564u); LOADALL;
  /* 00498569 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0049856f call 0x464860 */ esp -= 4; M32(esp) = 0x498574u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x49856fu); RETCHK(0x498574u, 0x49856fu); LOADALL;
  /* 00498574 mov edx, eax */ { edx = (u32)(eax); }
  /* 00498576 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0049857c call 0x4648e0 */ esp -= 4; M32(esp) = 0x498581u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x49857cu); RETCHK(0x498581u, 0x49857cu); LOADALL;
  /* 00498581 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00498587 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0049858c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049858d call 0x565810 */ esp -= 4; M32(esp) = 0x498592u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x49858du); RETCHK(0x498592u, 0x49858du); LOADALL;
  /* 00498592 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498595 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049859c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049859f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004985a0 call 0x61af31 */ esp -= 4; M32(esp) = 0x4985a5u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x4985a0u); RETCHK(0x4985a5u, 0x4985a0u); LOADALL;
  /* 004985a5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004985a7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004985a8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004987a0:;
  /* 004987a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004987a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004987a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004987a5 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 004987aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004987b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004987b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004987b8 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004987be mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 004987c3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004987c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004987c7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004987c9 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 004987d0 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 004987d5 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 004987db rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004987dd stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 004987df stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 004987e0 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 004987e6 call 0x5680c0 */ esp -= 4; M32(esp) = 0x4987ebu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x4987e6u); RETCHK(0x4987ebu, 0x4987e6u); LOADALL;
  /* 004987eb mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 004987f0 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 004987f6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004987fd call 0x568120 */ esp -= 4; M32(esp) = 0x498802u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x4987fdu); RETCHK(0x498802u, 0x4987fdu); LOADALL;
  /* 00498802 push 0x10000126 */ { u32 v_ = 0x10000126u; esp -= 4; M32(esp) = v_; }
  /* 00498807 call 0x5681f0 */ esp -= 4; M32(esp) = 0x49880cu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498807u); RETCHK(0x49880cu, 0x498807u); LOADALL;
  /* 0049880c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049880e lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498814 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498819u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498814u); RETCHK(0x498819u, 0x498814u); LOADALL;
  /* 00498819 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0049881f call 0x464860 */ esp -= 4; M32(esp) = 0x498824u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x49881fu); RETCHK(0x498824u, 0x49881fu); LOADALL;
  /* 00498824 mov edx, eax */ { edx = (u32)(eax); }
  /* 00498826 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0049882c call 0x4648e0 */ esp -= 4; M32(esp) = 0x498831u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x49882cu); RETCHK(0x498831u, 0x49882cu); LOADALL;
  /* 00498831 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00498837 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0049883c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049883d call 0x565810 */ esp -= 4; M32(esp) = 0x498842u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x49883du); RETCHK(0x498842u, 0x49883du); LOADALL;
  /* 00498842 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498845 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049884c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049884f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00498850 call 0x61af31 */ esp -= 4; M32(esp) = 0x498855u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498850u); RETCHK(0x498855u, 0x498850u); LOADALL;
  /* 00498855 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498857 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498858 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00498a50:;
  /* 00498a50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00498a51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00498a53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498a55 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 00498a5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498a60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498a61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498a68 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00498a6e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498a73 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498a76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498a77 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00498a79 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00498a80 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00498a85 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 00498a8b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00498a8d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00498a8f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00498a90 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498a96 call 0x5680c0 */ esp -= 4; M32(esp) = 0x498a9bu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498a96u); RETCHK(0x498a9bu, 0x498a96u); LOADALL;
  /* 00498a9b mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00498aa0 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00498aa6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00498aad call 0x568120 */ esp -= 4; M32(esp) = 0x498ab2u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x498aadu); RETCHK(0x498ab2u, 0x498aadu); LOADALL;
  /* 00498ab2 push 0x10000128 */ { u32 v_ = 0x10000128u; esp -= 4; M32(esp) = v_; }
  /* 00498ab7 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498abcu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498ab7u); RETCHK(0x498abcu, 0x498ab7u); LOADALL;
  /* 00498abc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00498abe lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498ac4 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498ac9u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498ac4u); RETCHK(0x498ac9u, 0x498ac4u); LOADALL;
  /* 00498ac9 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498acf call 0x464860 */ esp -= 4; M32(esp) = 0x498ad4u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x498acfu); RETCHK(0x498ad4u, 0x498acfu); LOADALL;
  /* 00498ad4 mov edx, eax */ { edx = (u32)(eax); }
  /* 00498ad6 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498adc call 0x4648e0 */ esp -= 4; M32(esp) = 0x498ae1u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x498adcu); RETCHK(0x498ae1u, 0x498adcu); LOADALL;
  /* 00498ae1 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00498ae7 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 00498aec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498aed call 0x565810 */ esp -= 4; M32(esp) = 0x498af2u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x498aedu); RETCHK(0x498af2u, 0x498aedu); LOADALL;
  /* 00498af2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498af5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00498afc mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00498aff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00498b00 call 0x61af31 */ esp -= 4; M32(esp) = 0x498b05u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498b00u); RETCHK(0x498b05u, 0x498b00u); LOADALL;
  /* 00498b05 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498b07 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498b08 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00498cb0:;
  /* 00498cb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00498cb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00498cb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498cb5 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 00498cba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498cc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498cc1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498cc8 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00498cce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498cd3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498cd6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498cd7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00498cd9 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00498ce0 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00498ce5 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 00498ceb rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00498ced stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00498cef stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00498cf0 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498cf6 call 0x5680c0 */ esp -= 4; M32(esp) = 0x498cfbu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498cf6u); RETCHK(0x498cfbu, 0x498cf6u); LOADALL;
  /* 00498cfb mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00498d00 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00498d06 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00498d0d call 0x568120 */ esp -= 4; M32(esp) = 0x498d12u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x498d0du); RETCHK(0x498d12u, 0x498d0du); LOADALL;
  /* 00498d12 push 0x1000012a */ { u32 v_ = 0x1000012au; esp -= 4; M32(esp) = v_; }
  /* 00498d17 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498d1cu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498d17u); RETCHK(0x498d1cu, 0x498d17u); LOADALL;
  /* 00498d1c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00498d1e lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498d24 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498d29u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498d24u); RETCHK(0x498d29u, 0x498d24u); LOADALL;
  /* 00498d29 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498d2f call 0x464860 */ esp -= 4; M32(esp) = 0x498d34u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x498d2fu); RETCHK(0x498d34u, 0x498d2fu); LOADALL;
  /* 00498d34 mov edx, eax */ { edx = (u32)(eax); }
  /* 00498d36 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498d3c call 0x4648e0 */ esp -= 4; M32(esp) = 0x498d41u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x498d3cu); RETCHK(0x498d41u, 0x498d3cu); LOADALL;
  /* 00498d41 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00498d47 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 00498d4c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498d4d call 0x565810 */ esp -= 4; M32(esp) = 0x498d52u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x498d4du); RETCHK(0x498d52u, 0x498d4du); LOADALL;
  /* 00498d52 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498d55 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00498d5c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00498d5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00498d60 call 0x61af31 */ esp -= 4; M32(esp) = 0x498d65u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x498d60u); RETCHK(0x498d65u, 0x498d60u); LOADALL;
  /* 00498d65 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00498d67 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00498d68 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00498f50:;
  /* 00498f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00498f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00498f53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00498f55 push 0x61b57b */ { u32 v_ = 0x61b57bu; esp -= 4; M32(esp) = v_; }
  /* 00498f5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00498f60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00498f61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00498f68 sub esp, 0x414 */ { u32 a_ = esp, b_ = 0x414u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00498f6e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00498f73 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00498f76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00498f77 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00498f79 mov byte ptr [ebp - 0x410], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)(0x0u); }
  /* 00498f80 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00498f85 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 00498f8b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00498f8d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00498f8f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00498f90 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498f96 call 0x5680c0 */ esp -= 4; M32(esp) = 0x498f9bu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x498f96u); RETCHK(0x498f9bu, 0x498f96u); LOADALL;
  /* 00498f9b mov edx, 0x400 */ { edx = (u32)(0x400u); }
  /* 00498fa0 lea ecx, [ebp - 0x410] */ ecx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00498fa6 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00498fad call 0x568120 */ esp -= 4; M32(esp) = 0x498fb2u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x498fadu); RETCHK(0x498fb2u, 0x498fadu); LOADALL;
  /* 00498fb2 push 0x1000012c */ { u32 v_ = 0x1000012cu; esp -= 4; M32(esp) = v_; }
  /* 00498fb7 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498fbcu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498fb7u); RETCHK(0x498fbcu, 0x498fb7u); LOADALL;
  /* 00498fbc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00498fbe lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498fc4 call 0x5681f0 */ esp -= 4; M32(esp) = 0x498fc9u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x498fc4u); RETCHK(0x498fc9u, 0x498fc4u); LOADALL;
  /* 00498fc9 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498fcf call 0x464860 */ esp -= 4; M32(esp) = 0x498fd4u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x498fcfu); RETCHK(0x498fd4u, 0x498fcfu); LOADALL;
  /* 00498fd4 mov edx, eax */ { edx = (u32)(eax); }
  /* 00498fd6 lea eax, [ebp - 0x420] */ eax = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 00498fdc call 0x4648e0 */ esp -= 4; M32(esp) = 0x498fe1u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x498fdcu); RETCHK(0x498fe1u, 0x498fdcu); LOADALL;
  /* 00498fe1 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00498fe7 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 00498fec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00498fed call 0x565810 */ esp -= 4; M32(esp) = 0x498ff2u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x498fedu); RETCHK(0x498ff2u, 0x498fedu); LOADALL;
  /* 00498ff2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00498ff5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00498ffc mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00498fff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499000 call 0x61af31 */ esp -= 4; M32(esp) = 0x499005u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x499000u); RETCHK(0x499005u, 0x499000u); LOADALL;
  /* 00499005 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499007 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499008 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004999e0:;
  /* 004999e0 mov ecx, dword ptr [eax + 0xf4] */ { const u32 m_ = (u32)(eax + 0xf4u); ecx = (u32)(M32(m_)); }
  /* 004999e6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004999e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004999e9 jne 0x499a2d */ if (!ZF_) goto L_00499a2d;
  /* 004999eb mov ecx, dword ptr [eax + 0xe0] */ { const u32 m_ = (u32)(eax + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 004999f1 mov ecx, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); ecx = (u32)(M32(m_)); }
  /* 004999f7 sub ecx, 0 */ { u32 a_ = ecx, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004999fa mov esi, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00499a00 je 0x499a22 */ if (ZF_) goto L_00499a22;
  /* 00499a02 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00499a03 je 0x499a17 */ if (ZF_) goto L_00499a17;
  /* 00499a05 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00499a06 jne 0x499ab2 */ if (!ZF_) goto L_00499ab2;
  /* 00499a0c call 0x5156e0 */ esp -= 4; M32(esp) = 0x499a11u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499a0cu); RETCHK(0x499a11u, 0x499a0cu); LOADALL;
  /* 00499a11 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499a12 jmp 0x497fb0 */ goto L_00497fb0;
L_00499a17:;
  /* 00499a17 call 0x5156e0 */ esp -= 4; M32(esp) = 0x499a1cu; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499a17u); RETCHK(0x499a1cu, 0x499a17u); LOADALL;
  /* 00499a1c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499a1d jmp 0x497ce0 */ goto L_00497ce0;
L_00499a22:;
  /* 00499a22 call 0x5156e0 */ esp -= 4; M32(esp) = 0x499a27u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499a22u); RETCHK(0x499a27u, 0x499a22u); LOADALL;
  /* 00499a27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499a28 jmp 0x497740 */ goto L_00497740;
L_00499a2d:;
  /* 00499a2d cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499a30 jne 0x499a62 */ if (!ZF_) goto L_00499a62;
  /* 00499a32 mov edx, dword ptr [eax + 0xe0] */ { const u32 m_ = (u32)(eax + 0xe0u); edx = (u32)(M32(m_)); }
  /* 00499a38 mov ecx, dword ptr [edx + 0x188] */ { const u32 m_ = (u32)(edx + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00499a3e sub ecx, 0 */ { u32 a_ = ecx, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499a41 mov esi, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00499a47 je 0x499a57 */ if (ZF_) goto L_00499a57;
  /* 00499a49 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00499a4a jne 0x499ab2 */ if (!ZF_) goto L_00499ab2;
  /* 00499a4c call 0x5156e0 */ esp -= 4; M32(esp) = 0x499a51u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499a4cu); RETCHK(0x499a51u, 0x499a4cu); LOADALL;
  /* 00499a51 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499a52 jmp 0x498250 */ goto L_00498250;
L_00499a57:;
  /* 00499a57 call 0x5156e0 */ esp -= 4; M32(esp) = 0x499a5cu; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499a57u); RETCHK(0x499a5cu, 0x499a57u); LOADALL;
  /* 00499a5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499a5d jmp 0x497a10 */ goto L_00497a10;
L_00499a62:;
  /* 00499a62 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499a65 jne 0x499a97 */ if (!ZF_) goto L_00499a97;
  /* 00499a67 mov ecx, dword ptr [eax + 0xe0] */ { const u32 m_ = (u32)(eax + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499a6d mov ecx, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00499a73 sub ecx, 0 */ { u32 a_ = ecx, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499a76 mov esi, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00499a7c je 0x499a8c */ if (ZF_) goto L_00499a8c;
  /* 00499a7e dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00499a7f jne 0x499ab2 */ if (!ZF_) goto L_00499ab2;
  /* 00499a81 call 0x5156e0 */ esp -= 4; M32(esp) = 0x499a86u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499a81u); RETCHK(0x499a86u, 0x499a81u); LOADALL;
  /* 00499a86 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499a87 jmp 0x4987a0 */ goto L_004987a0;
L_00499a8c:;
  /* 00499a8c call 0x5156e0 */ esp -= 4; M32(esp) = 0x499a91u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499a8cu); RETCHK(0x499a91u, 0x499a8cu); LOADALL;
  /* 00499a91 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499a92 jmp 0x4984f0 */ goto L_004984f0;
L_00499a97:;
  /* 00499a97 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499a9a jne 0x499ac4 */ if (!ZF_) goto L_00499ac4;
  /* 00499a9c mov edx, dword ptr [eax + 0xe0] */ { const u32 m_ = (u32)(eax + 0xe0u); edx = (u32)(M32(m_)); }
  /* 00499aa2 mov ecx, dword ptr [edx + 0x188] */ { const u32 m_ = (u32)(edx + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00499aa8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499aaa mov esi, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00499ab0 je 0x499ab9 */ if (ZF_) goto L_00499ab9;
L_00499ab2:;
  /* 00499ab2 call 0x5156e0 */ esp -= 4; M32(esp) = 0x499ab7u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499ab2u); RETCHK(0x499ab7u, 0x499ab2u); LOADALL;
L_00499ab7:;
  /* 00499ab7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499ab8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00499ab9:;
  /* 00499ab9 call 0x5156e0 */ esp -= 4; M32(esp) = 0x499abeu; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499ab9u); RETCHK(0x499abeu, 0x499ab9u); LOADALL;
  /* 00499abe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499abf jmp 0x498a50 */ goto L_00498a50;
L_00499ac4:;
  /* 00499ac4 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499ac7 jne 0x499ab7 */ if (!ZF_) goto L_00499ab7;
  /* 00499ac9 mov ecx, dword ptr [eax + 0xe0] */ { const u32 m_ = (u32)(eax + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00499acf mov ecx, dword ptr [ecx + 0x188] */ { const u32 m_ = (u32)(ecx + 0x188u); ecx = (u32)(M32(m_)); }
  /* 00499ad5 sub ecx, 0 */ { u32 a_ = ecx, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499ad8 mov esi, dword ptr [eax + 0xfc] */ { const u32 m_ = (u32)(eax + 0xfcu); esi = (u32)(M32(m_)); }
  /* 00499ade je 0x499aee */ if (ZF_) goto L_00499aee;
  /* 00499ae0 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00499ae1 jne 0x499ab2 */ if (!ZF_) goto L_00499ab2;
  /* 00499ae3 call 0x5156e0 */ esp -= 4; M32(esp) = 0x499ae8u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499ae3u); RETCHK(0x499ae8u, 0x499ae3u); LOADALL;
  /* 00499ae8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499ae9 jmp 0x498f50 */ goto L_00498f50;
L_00499aee:;
  /* 00499aee call 0x5156e0 */ esp -= 4; M32(esp) = 0x499af3u; SAVEALL; F_005156e0(c); ABI_CHECK(0x5156e0u, 0x499aeeu); RETCHK(0x499af3u, 0x499aeeu); LOADALL;
  /* 00499af3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499af4 jmp 0x498cb0 */ goto L_00498cb0;
}

void F_00499b00(CPU *c) {
  NATIVE_HOOK(0x499b00u) REGS; LOADALL;
L_00499b00:;
  /* 00499b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499b03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00499b05 push 0x61eb46 */ { u32 v_ = 0x61eb46u; esp -= 4; M32(esp) = v_; }
  /* 00499b0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00499b10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499b11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00499b18 sub esp, 0x43c */ { u32 a_ = esp, b_ = 0x43cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499b1e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00499b23 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00499b26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499b27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499b28 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00499b2a mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00499b2c xor dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00499b2e mov byte ptr [ebp - 0x410], dl */ { const u32 m_ = (u32)(ebp + 0xfffffbf0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00499b34 mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
  /* 00499b39 lea edi, [ebp - 0x40f] */ edi = (u32)((u32)(ebp + 0xfffffbf1u));
  /* 00499b3f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00499b41 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00499b43 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00499b44 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00499b46 mov byte ptr [ebp - 0x210], dl */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00499b4c mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
  /* 00499b51 lea edi, [ebp - 0x20f] */ edi = (u32)((u32)(ebp + 0xfffffdf1u));
  /* 00499b57 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00499b59 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00499b5b stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00499b5c push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00499b61 lea eax, [ebp - 0x410] */ eax = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00499b67 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499b68 call 0x5682e0 */ esp -= 4; M32(esp) = 0x499b6du; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x499b68u); RETCHK(0x499b6du, 0x499b68u); LOADALL;
  /* 00499b6d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499b6f jg 0x499b7e */ if (!(ZF_|LT_)) goto L_00499b7e;
L_00499b71:;
  /* 00499b71 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00499b74 call 0x499c90 */ esp -= 4; M32(esp) = 0x499b79u; SAVEALL; F_00499c90(c); ABI_CHECK(0x499c90u, 0x499b74u); RETCHK(0x499b79u, 0x499b74u); LOADALL;
  /* 00499b79 jmp 0x499c73 */ goto L_00499c73;
L_00499b7e:;
  /* 00499b7e push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00499b83 lea ecx, [ebp - 0x210] */ ecx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00499b89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499b8a call 0x5682e0 */ esp -= 4; M32(esp) = 0x499b8fu; SAVEALL; F_005682e0(c); ABI_CHECK(0x5682e0u, 0x499b8au); RETCHK(0x499b8fu, 0x499b8au); LOADALL;
  /* 00499b8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499b91 jle 0x499b71 */ if ((ZF_|LT_)) goto L_00499b71;
  /* 00499b93 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00499b95 lea eax, [ebp - 0x410] */ eax = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00499b9b mov dword ptr [ebp - 0x430], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffbd0u); M32(m_) = (u32)(0xfu); }
  /* 00499ba5 mov dword ptr [ebp - 0x434], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffbccu); M32(m_) = (u32)(ebx); }
  /* 00499bab mov byte ptr [ebp - 0x444], bl */ { const u32 m_ = (u32)(ebp + 0xfffffbbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00499bb1 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00499bb4:;
  /* 00499bb4 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00499bb6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00499bb7 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00499bb9 jne 0x499bb4 */ if (!ZF_) goto L_00499bb4;
  /* 00499bbb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499bbc sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499bbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499bbf lea edx, [ebp - 0x410] */ edx = (u32)((u32)(ebp + 0xfffffbf0u));
  /* 00499bc5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499bc6 lea ecx, [ebp - 0x448] */ ecx = (u32)((u32)(ebp + 0xfffffbb8u));
  /* 00499bcc call 0x404420 */ esp -= 4; M32(esp) = 0x499bd1u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x499bccu); RETCHK(0x499bd1u, 0x499bccu); LOADALL;
  /* 00499bd1 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00499bd4 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00499bd7 mov esi, dword ptr [edi + 0x100] */ { const u32 m_ = (u32)(edi + 0x100u); esi = (u32)(M32(m_)); }
  /* 00499bdd lea eax, [ebp - 0x448] */ eax = (u32)((u32)(ebp + 0xfffffbb8u));
  /* 00499be3 call 0x5224b0 */ esp -= 4; M32(esp) = 0x499be8u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x499be3u); RETCHK(0x499be8u, 0x499be3u); LOADALL;
  /* 00499be8 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00499bef cmp dword ptr [ebp - 0x430], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffbd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499bf6 jb 0x499c07 */ if (CF_) goto L_00499c07;
  /* 00499bf8 mov eax, dword ptr [ebp - 0x444] */ { const u32 m_ = (u32)(ebp + 0xfffffbbcu); eax = (u32)(M32(m_)); }
  /* 00499bfe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499bff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x499c04u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x499bffu); RETCHK(0x499c04u, 0x499bffu); LOADALL;
  /* 00499c04 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00499c07:;
  /* 00499c07 lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00499c0d mov dword ptr [ebp - 0x414], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffbecu); M32(m_) = (u32)(0xfu); }
  /* 00499c17 mov dword ptr [ebp - 0x418], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffbe8u); M32(m_) = (u32)(ebx); }
  /* 00499c1d mov byte ptr [ebp - 0x428], bl */ { const u32 m_ = (u32)(ebp + 0xfffffbd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00499c23 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00499c26:;
  /* 00499c26 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00499c28 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00499c29 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00499c2b jne 0x499c26 */ if (!ZF_) goto L_00499c26;
  /* 00499c2d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499c2f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499c30 lea ecx, [ebp - 0x210] */ ecx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00499c36 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499c37 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00499c3d call 0x404420 */ esp -= 4; M32(esp) = 0x499c42u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x499c3du); RETCHK(0x499c42u, 0x499c3du); LOADALL;
  /* 00499c42 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00499c49 mov esi, dword ptr [edi + 0x104] */ { const u32 m_ = (u32)(edi + 0x104u); esi = (u32)(M32(m_)); }
  /* 00499c4f lea eax, [ebp - 0x42c] */ eax = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00499c55 call 0x5224b0 */ esp -= 4; M32(esp) = 0x499c5au; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x499c55u); RETCHK(0x499c5au, 0x499c55u); LOADALL;
  /* 00499c5a cmp dword ptr [ebp - 0x414], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffbecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499c61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499c62 jb 0x499c73 */ if (CF_) goto L_00499c73;
  /* 00499c64 mov edx, dword ptr [ebp - 0x428] */ { const u32 m_ = (u32)(ebp + 0xfffffbd8u); edx = (u32)(M32(m_)); }
  /* 00499c6a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499c6b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x499c70u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x499c6bu); RETCHK(0x499c70u, 0x499c6bu); LOADALL;
  /* 00499c70 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00499c73:;
  /* 00499c73 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00499c76 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499c77 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00499c7e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00499c81 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499c82 call 0x61af31 */ esp -= 4; M32(esp) = 0x499c87u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x499c82u); RETCHK(0x499c87u, 0x499c82u); LOADALL;
  /* 00499c87 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499c89 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499c8a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00499c90(CPU *c) {
  NATIVE_HOOK(0x499c90u) REGS; LOADALL;
L_00499c90:;
  /* 00499c90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499c91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499c93 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00499c95 push 0x61f820 */ { u32 v_ = 0x61f820u; esp -= 4; M32(esp) = v_; }
  /* 00499c9a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00499ca0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499ca1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00499ca8 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499cab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499cac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499cad xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00499caf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499cb0 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00499cb5 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00499cb8 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00499cbf mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00499cc2 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00499cc5 call 0x404420 */ esp -= 4; M32(esp) = 0x499ccau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x499cc5u); RETCHK(0x499ccau, 0x499cc5u); LOADALL;
  /* 00499cca mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00499ccd mov esi, dword ptr [edi + 0x100] */ { const u32 m_ = (u32)(edi + 0x100u); esi = (u32)(M32(m_)); }
  /* 00499cd3 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00499cd6 call 0x5224b0 */ esp -= 4; M32(esp) = 0x499cdbu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x499cd6u); RETCHK(0x499cdbu, 0x499cd6u); LOADALL;
  /* 00499cdb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00499ce2 cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499ce6 jb 0x499cf4 */ if (CF_) goto L_00499cf4;
  /* 00499ce8 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00499ceb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499cec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x499cf1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x499cecu); RETCHK(0x499cf1u, 0x499cecu); LOADALL;
  /* 00499cf1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00499cf4:;
  /* 00499cf4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499cf5 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00499cfa lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00499cfd mov dword ptr [ebp - 0x2c], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0xfu); }
  /* 00499d04 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 00499d07 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00499d0a call 0x404420 */ esp -= 4; M32(esp) = 0x499d0fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x499d0au); RETCHK(0x499d0fu, 0x499d0au); LOADALL;
  /* 00499d0f mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00499d16 mov esi, dword ptr [edi + 0x104] */ { const u32 m_ = (u32)(edi + 0x104u); esi = (u32)(M32(m_)); }
  /* 00499d1c lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00499d1f call 0x5224b0 */ esp -= 4; M32(esp) = 0x499d24u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x499d1fu); RETCHK(0x499d24u, 0x499d1fu); LOADALL;
  /* 00499d24 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499d28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499d29 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499d2a jb 0x499d38 */ if (CF_) goto L_00499d38;
  /* 00499d2c mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 00499d2f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499d30 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x499d35u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x499d30u); RETCHK(0x499d35u, 0x499d30u); LOADALL;
  /* 00499d35 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00499d38:;
  /* 00499d38 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00499d3b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00499d42 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499d44 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499d45 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499d50(CPU *c) {
  NATIVE_HOOK(0x499d50u) REGS; LOADALL;
L_00499d50:;
  /* 00499d50 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00499d53 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499d55 jne 0x499d58 */ if (!ZF_) goto L_00499d58;
  /* 00499d57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00499d58:;
  /* 00499d58 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499d5b sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499d5d mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 00499d62 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499d64 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499d67 mov eax, edx */ { eax = (u32)(edx); }
  /* 00499d69 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499d6c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499d6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499d70(CPU *c) {
  NATIVE_HOOK(0x499d70u) REGS; LOADALL;
L_00499d70:;
  /* 00499d70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499d71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499d73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499d74 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499d75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499d76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499d77 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00499d79 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00499d7c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499d7e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00499d80 jne 0x499d86 */ if (!ZF_) goto L_00499d86;
  /* 00499d82 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00499d84 jmp 0x499d9c */ goto L_00499d9c;
L_00499d86:;
  /* 00499d86 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499d89 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499d8b mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 00499d90 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499d92 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499d95 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00499d97 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00499d9a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00499d9c:;
  /* 00499d9c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499d9e je 0x499de0 */ if (ZF_) goto L_00499de0;
  /* 00499da0 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00499da3 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00499da5 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 00499daa imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499dac sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499daf mov eax, edx */ { eax = (u32)(edx); }
  /* 00499db1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499db4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499db6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499db8 jae 0x499de0 */ if (!CF_) goto L_00499de0;
  /* 00499dba mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00499dbd mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00499dc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499dc1 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00499dc6 mov eax, esi */ { eax = (u32)(esi); }
  /* 00499dc8 call 0x49ae50 */ esp -= 4; M32(esp) = 0x499dcdu; SAVEALL; F_0049ae50(c); ABI_CHECK(0x49ae50u, 0x499dc8u); RETCHK(0x499dcdu, 0x499dc8u); LOADALL;
  /* 00499dcd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499dd0 add esi, 0x88 */ { u32 a_ = esi, b_ = 0x88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00499dd6 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00499dd9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499dda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499ddb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499ddc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499dde pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499ddf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00499de0:;
  /* 00499de0 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00499de3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499de4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499de5 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00499de8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499de9 call 0x49a050 */ esp -= 4; M32(esp) = 0x499deeu; SAVEALL; F_0049a050(c); ABI_CHECK(0x49a050u, 0x499de9u); RETCHK(0x499deeu, 0x499de9u); LOADALL;
  /* 00499dee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499def pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499df0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499df1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499df3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499df4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499e00(CPU *c) {
  NATIVE_HOOK(0x499e00u) REGS; LOADALL;
L_00499e00:;
  /* 00499e00 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00499e03 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499e05 jne 0x499e08 */ if (!ZF_) goto L_00499e08;
  /* 00499e07 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00499e08:;
  /* 00499e08 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499e0b sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499e0d mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 00499e12 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499e14 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499e17 mov eax, edx */ { eax = (u32)(edx); }
  /* 00499e19 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499e1c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499e1e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499e20(CPU *c) {
  NATIVE_HOOK(0x499e20u) REGS; LOADALL;
L_00499e20:;
  /* 00499e20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499e21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499e23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499e24 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499e25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499e26 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499e27 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00499e29 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00499e2c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499e2e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00499e30 jne 0x499e36 */ if (!ZF_) goto L_00499e36;
  /* 00499e32 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00499e34 jmp 0x499e4c */ goto L_00499e4c;
L_00499e36:;
  /* 00499e36 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499e39 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499e3b mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 00499e40 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499e42 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499e45 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00499e47 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00499e4a add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00499e4c:;
  /* 00499e4c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499e4e je 0x499e90 */ if (ZF_) goto L_00499e90;
  /* 00499e50 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00499e53 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00499e55 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 00499e5a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499e5c sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499e5f mov eax, edx */ { eax = (u32)(edx); }
  /* 00499e61 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499e64 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499e66 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499e68 jae 0x499e90 */ if (!CF_) goto L_00499e90;
  /* 00499e6a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00499e6d mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00499e70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499e71 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00499e76 mov eax, esi */ { eax = (u32)(esi); }
  /* 00499e78 call 0x49ae80 */ esp -= 4; M32(esp) = 0x499e7du; SAVEALL; F_0049ae80(c); ABI_CHECK(0x49ae80u, 0x499e78u); RETCHK(0x499e7du, 0x499e78u); LOADALL;
  /* 00499e7d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499e80 add esi, 0x84 */ { u32 a_ = esi, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00499e86 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00499e89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499e8a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499e8b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499e8c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499e8e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499e8f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00499e90:;
  /* 00499e90 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00499e93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499e94 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499e95 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00499e98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499e99 call 0x49a0f0 */ esp -= 4; M32(esp) = 0x499e9eu; SAVEALL; F_0049a0f0(c); ABI_CHECK(0x49a0f0u, 0x499e99u); RETCHK(0x499e9eu, 0x499e99u); LOADALL;
  /* 00499e9e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499e9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499ea0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499ea1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499ea3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499ea4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499eb0(CPU *c) {
  NATIVE_HOOK(0x499eb0u) REGS; LOADALL;
L_00499eb0:;
  /* 00499eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499eb3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499eb4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499eb5 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 00499eb8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499eba jne 0x499ec0 */ if (!ZF_) goto L_00499ec0;
  /* 00499ebc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00499ebe jmp 0x499ec8 */ goto L_00499ec8;
L_00499ec0:;
  /* 00499ec0 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499ec3 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499ec5 sar ecx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
L_00499ec8:;
  /* 00499ec8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499eca je 0x499f00 */ if (ZF_) goto L_00499f00;
  /* 00499ecc mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00499ecf sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499ed1 sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499ed4 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499ed6 jae 0x499f00 */ if (!CF_) goto L_00499f00;
  /* 00499ed8 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00499edb mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 00499ede push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499edf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499ee0 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00499ee2 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00499ee7 mov eax, edi */ { eax = (u32)(edi); }
  /* 00499ee9 call 0x49aeb0 */ esp -= 4; M32(esp) = 0x499eeeu; SAVEALL; F_0049aeb0(c); ABI_CHECK(0x49aeb0u, 0x499ee9u); RETCHK(0x499eeeu, 0x499ee9u); LOADALL;
  /* 00499eee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499ef1 add edi, 0x80 */ { u32 a_ = edi, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00499ef7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499ef8 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00499efb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499efc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499efe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499eff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00499f00:;
  /* 00499f00 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00499f03 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00499f05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499f06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499f07 call 0x49aa20 */ esp -= 4; M32(esp) = 0x499f0cu; SAVEALL; F_0049aa20(c); ABI_CHECK(0x49aa20u, 0x499f07u); RETCHK(0x499f0cu, 0x499f07u); LOADALL;
  /* 00499f0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499f0d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00499f0f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499f10 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499f20(CPU *c) {
  NATIVE_HOOK(0x499f20u) REGS; LOADALL;
L_00499f20:;
  /* 00499f20 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00499f23 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499f25 jne 0x499f28 */ if (!ZF_) goto L_00499f28;
  /* 00499f27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00499f28:;
  /* 00499f28 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499f2b sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499f2d mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 00499f32 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499f34 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00499f36 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499f39 mov eax, edx */ { eax = (u32)(edx); }
  /* 00499f3b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499f3e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499f40 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00499f50(CPU *c) {
  NATIVE_HOOK(0x499f50u) REGS; LOADALL;
L_00499f50:;
  /* 00499f50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499f51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499f53 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499f54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499f55 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00499f56 mov edi, eax */ { edi = (u32)(eax); }
  /* 00499f58 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00499f5b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499f5d jne 0x499f63 */ if (!ZF_) goto L_00499f63;
  /* 00499f5f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00499f61 jmp 0x499f7b */ goto L_00499f7b;
L_00499f63:;
  /* 00499f63 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499f66 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499f68 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 00499f6d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499f6f add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00499f71 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499f74 mov esi, edx */ { esi = (u32)(edx); }
  /* 00499f76 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00499f79 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00499f7b:;
  /* 00499f7b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499f7d je 0x499fc4 */ if (ZF_) goto L_00499fc4;
  /* 00499f7f mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00499f82 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499f84 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 00499f89 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499f8b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00499f8d sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00499f90 mov eax, edx */ { eax = (u32)(edx); }
  /* 00499f92 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00499f95 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00499f97 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00499f99 jae 0x499fc4 */ if (!CF_) goto L_00499fc4;
  /* 00499f9b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00499f9e mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00499fa1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00499fa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499fa5 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00499faa mov eax, esi */ { eax = (u32)(esi); }
  /* 00499fac call 0x49ae20 */ esp -= 4; M32(esp) = 0x499fb1u; SAVEALL; F_0049ae20(c); ABI_CHECK(0x49ae20u, 0x499facu); RETCHK(0x499fb1u, 0x499facu); LOADALL;
  /* 00499fb1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00499fb4 add esi, 0x8c */ { u32 a_ = esi, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00499fba mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00499fbd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499fbe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499fbf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499fc0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499fc1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00499fc4:;
  /* 00499fc4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499fc7 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00499fca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00499fcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00499fcc lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 00499fcf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00499fd0 call 0x499fe0 */ esp -= 4; M32(esp) = 0x499fd5u; SAVEALL; F_00499fe0(c); ABI_CHECK(0x499fe0u, 0x499fd0u); RETCHK(0x499fd5u, 0x499fd0u); LOADALL;
  /* 00499fd5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00499fd6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00499fd7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00499fd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00499fd9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00499fe0(CPU *c) {
  NATIVE_HOOK(0x499fe0u) REGS; LOADALL;
L_00499fe0:;
  /* 00499fe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00499fe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00499fe3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00499fe4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00499fe7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00499fe8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00499feb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00499fed je 0x49a00c */ if (ZF_) goto L_0049a00c;
  /* 00499fef mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00499ff2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00499ff4 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 00499ff9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00499ffb add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00499ffd sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a000 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a002 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a005 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a007 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049a00a jne 0x49a010 */ if (!ZF_) goto L_0049a010;
L_0049a00c:;
  /* 0049a00c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a00e jmp 0x49a027 */ goto L_0049a027;
L_0049a010:;
  /* 0049a010 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049a012 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a014 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a019 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a01b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a01d sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a020 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a022 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049a025 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a027:;
  /* 0049a027 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a02a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049a02c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a02d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a02e call 0x49a1c0 */ esp -= 4; M32(esp) = 0x49a033u; SAVEALL; F_0049a1c0(c); ABI_CHECK(0x49a1c0u, 0x49a02eu); RETCHK(0x49a033u, 0x49a02eu); LOADALL;
  /* 0049a033 imul esi, esi, 0x8c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a039 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a03c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a03f mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0049a041 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a042 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a043 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a044 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a050(CPU *c) {
  NATIVE_HOOK(0x49a050u) REGS; LOADALL;
L_0049a050:;
  /* 0049a050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a051 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a053 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a054 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049a057 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a058 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0049a05b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a05d je 0x49a07a */ if (ZF_) goto L_0049a07a;
  /* 0049a05f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a062 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a064 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a069 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a06b sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a06e mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a070 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a073 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a075 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049a078 jne 0x49a07e */ if (!ZF_) goto L_0049a07e;
L_0049a07a:;
  /* 0049a07a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a07c jmp 0x49a093 */ goto L_0049a093;
L_0049a07e:;
  /* 0049a07e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049a080 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a082 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a087 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a089 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a08c mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a08e shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049a091 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a093:;
  /* 0049a093 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a096 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049a098 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a099 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a09a call 0x49a4a0 */ esp -= 4; M32(esp) = 0x49a09fu; SAVEALL; F_0049a4a0(c); ABI_CHECK(0x49a4a0u, 0x49a09au); RETCHK(0x49a09fu, 0x49a09au); LOADALL;
  /* 0049a09f imul esi, esi, 0x88 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a0a5 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a0a8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a0ab mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0049a0ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a0ae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a0af pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a0b0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a0c0(CPU *c) {
  NATIVE_HOOK(0x49a0c0u) REGS; LOADALL;
L_0049a0c0:;
  /* 0049a0c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a0c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a0c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a0c4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0049a0c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a0c8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049a0ca mov eax, edi */ { eax = (u32)(edi); }
  /* 0049a0cc call 0x49ae50 */ esp -= 4; M32(esp) = 0x49a0d1u; SAVEALL; F_0049ae50(c); ABI_CHECK(0x49ae50u, 0x49a0ccu); RETCHK(0x49a0d1u, 0x49a0ccu); LOADALL;
  /* 0049a0d1 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049a0d3 imul eax, eax, 0x88 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a0d9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a0dc add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a0de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a0e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a0e1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049a0f0(CPU *c) {
  NATIVE_HOOK(0x49a0f0u) REGS; LOADALL;
L_0049a0f0:;
  /* 0049a0f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a0f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a0f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a0f4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049a0f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a0f8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0049a0fb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a0fd je 0x49a11a */ if (ZF_) goto L_0049a11a;
  /* 0049a0ff mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a102 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a104 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a109 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a10b sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a10e mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a110 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a113 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a115 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049a118 jne 0x49a11e */ if (!ZF_) goto L_0049a11e;
L_0049a11a:;
  /* 0049a11a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a11c jmp 0x49a133 */ goto L_0049a133;
L_0049a11e:;
  /* 0049a11e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049a120 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a122 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a127 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a129 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a12c mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a12e shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049a131 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a133:;
  /* 0049a133 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a136 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049a138 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a139 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a13a call 0x49a760 */ esp -= 4; M32(esp) = 0x49a13fu; SAVEALL; F_0049a760(c); ABI_CHECK(0x49a760u, 0x49a13au); RETCHK(0x49a13fu, 0x49a13au); LOADALL;
  /* 0049a13f imul esi, esi, 0x84 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a145 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a148 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a14b mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0049a14d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a14e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a14f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a150 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a160(CPU *c) {
  NATIVE_HOOK(0x49a160u) REGS; LOADALL;
L_0049a160:;
  /* 0049a160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a163 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a164 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0049a167 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a168 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049a16a mov eax, edi */ { eax = (u32)(edi); }
  /* 0049a16c call 0x49ae80 */ esp -= 4; M32(esp) = 0x49a171u; SAVEALL; F_0049ae80(c); ABI_CHECK(0x49ae80u, 0x49a16cu); RETCHK(0x49a171u, 0x49a16cu); LOADALL;
  /* 0049a171 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049a173 imul eax, eax, 0x84 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a179 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a17c add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a17e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a180 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a181 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049a190(CPU *c) {
  NATIVE_HOOK(0x49a190u) REGS; LOADALL;
L_0049a190:;
  /* 0049a190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a191 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a193 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a194 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0049a197 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a198 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049a19a mov eax, edi */ { eax = (u32)(edi); }
  /* 0049a19c call 0x49ae20 */ esp -= 4; M32(esp) = 0x49a1a1u; SAVEALL; F_0049ae20(c); ABI_CHECK(0x49ae20u, 0x49a19cu); RETCHK(0x49a1a1u, 0x49a19cu); LOADALL;
  /* 0049a1a1 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049a1a3 imul eax, eax, 0x8c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a1a9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a1ac add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a1ae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a1b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a1b1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049a1c0(CPU *c) {
  NATIVE_HOOK(0x49a1c0u) REGS; LOADALL;
L_0049a1c0:;
  /* 0049a1c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a1c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a1c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049a1c5 push 0x61cd70 */ { u32 v_ = 0x61cd70u; esp -= 4; M32(esp) = v_; }
  /* 0049a1ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049a1d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a1d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049a1d8 sub esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a1de mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049a1e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a1e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a1e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a1e6 mov ecx, 0x23 */ { ecx = (u32)(0x23u); }
  /* 0049a1eb mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a1ed lea edi, [ebp - 0xa0] */ edi = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a1f3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049a1f5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049a1f8 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0049a1fb test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a1fd mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0049a200 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049a203 jne 0x49a209 */ if (!ZF_) goto L_0049a209;
  /* 0049a205 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a207 jmp 0x49a221 */ goto L_0049a221;
L_0049a209:;
  /* 0049a209 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049a20c sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a20e mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a213 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a215 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a217 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a21a mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a21c shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049a21f add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a221:;
  /* 0049a221 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049a224 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a226 je 0x49a478 */ if (ZF_) goto L_0049a478;
  /* 0049a22c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a22e jne 0x49a234 */ if (!ZF_) goto L_0049a234;
  /* 0049a230 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a232 jmp 0x49a24c */ goto L_0049a24c;
L_0049a234:;
  /* 0049a234 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a237 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a239 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a23e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a240 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a242 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a245 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a247 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a24a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a24c:;
  /* 0049a24c mov ecx, 0x1d41d41 */ { ecx = (u32)(0x1d41d41u); }
  /* 0049a251 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a253 cmp ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a256 jae 0x49a25d */ if (!CF_) goto L_0049a25d;
  /* 0049a258 call 0x49ac70 */ esp -= 4; M32(esp) = 0x49a25du; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x49a258u); RETCHK(0x49a25du, 0x49a258u); LOADALL;
L_0049a25d:;
  /* 0049a25d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a25f jne 0x49a265 */ if (!ZF_) goto L_0049a265;
  /* 0049a261 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a263 jmp 0x49a27d */ goto L_0049a27d;
L_0049a265:;
  /* 0049a265 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a268 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a26a mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a26f imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a271 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a273 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a276 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a278 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a27b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a27d:;
  /* 0049a27d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a280 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a282 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a284 jae 0x49a3a7 */ if (!CF_) goto L_0049a3a7;
  /* 0049a28a mov eax, esi */ { eax = (u32)(esi); }
  /* 0049a28c shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a28e mov ecx, 0x1d41d41 */ { ecx = (u32)(0x1d41d41u); }
  /* 0049a293 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a295 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a297 jae 0x49a29d */ if (!CF_) goto L_0049a29d;
  /* 0049a299 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a29b jmp 0x49a29f */ goto L_0049a29f;
L_0049a29d:;
  /* 0049a29d add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a29f:;
  /* 0049a29f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a2a1 jne 0x49a2a7 */ if (!ZF_) goto L_0049a2a7;
  /* 0049a2a3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a2a5 jmp 0x49a2bf */ goto L_0049a2bf;
L_0049a2a7:;
  /* 0049a2a7 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a2aa sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a2ac mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a2b1 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a2b3 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a2b5 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a2b8 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a2ba shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a2bd add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a2bf:;
  /* 0049a2bf mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a2c2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a2c4 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a2c6 jae 0x49a2d4 */ if (!CF_) goto L_0049a2d4;
  /* 0049a2c8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049a2ca call 0x499f20 */ esp -= 4; M32(esp) = 0x49a2cfu; SAVEALL; F_00499f20(c); ABI_CHECK(0x499f20u, 0x49a2cau); RETCHK(0x49a2cfu, 0x49a2cau); LOADALL;
  /* 0049a2cf mov esi, eax */ { esi = (u32)(eax); }
  /* 0049a2d1 add esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a2d4:;
  /* 0049a2d4 imul esi, esi, 0x8c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a2da push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a2db call 0x5fe934 */ esp -= 4; M32(esp) = 0x49a2e0u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x49a2dbu); RETCHK(0x49a2e0u, 0x49a2dbu); LOADALL;
  /* 0049a2e0 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049a2e3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049a2ea mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a2ed mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049a2f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a2f1 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a2f7 call 0x49af70 */ esp -= 4; M32(esp) = 0x49a2fcu; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a2f7u); RETCHK(0x49a2fcu, 0x49a2f7u); LOADALL;
  /* 0049a2fc mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a2ff mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a302 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a305 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a306 lea ebx, [ebp - 0xa0] */ ebx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a30c mov dword ptr [ebp - 0xa8], eax */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(eax); }
  /* 0049a312 call 0x49ae20 */ esp -= 4; M32(esp) = 0x49a317u; SAVEALL; F_0049ae20(c); ABI_CHECK(0x49ae20u, 0x49a312u); RETCHK(0x49a317u, 0x49a312u); LOADALL;
  /* 0049a317 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a31a mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a31d imul ecx, ecx, 0x8c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a323 mov eax, dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); eax = (u32)(M32(m_)); }
  /* 0049a329 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a32c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a32f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a330 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049a333 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a335 call 0x49af70 */ esp -= 4; M32(esp) = 0x49a33au; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a335u); RETCHK(0x49a33au, 0x49a335u); LOADALL;
  /* 0049a33a mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049a33d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a340 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a342 je 0x49a35c */ if (ZF_) goto L_0049a35c;
  /* 0049a344 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a347 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a349 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a34e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a350 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a352 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a355 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a357 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a35a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a35c:;
  /* 0049a35c mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0049a35f add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a361 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049a364 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a366 je 0x49a371 */ if (ZF_) goto L_0049a371;
  /* 0049a368 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a369 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49a36eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49a369u); RETCHK(0x49a36eu, 0x49a369u); LOADALL;
  /* 0049a36e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049a371:;
  /* 0049a371 mov eax, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); eax = (u32)(M32(m_)); }
  /* 0049a377 imul ebx, ebx, 0x8c */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a37d add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a37f add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a381 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 0049a384 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049a387 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0049a38a jmp 0x49a478 */ goto L_0049a478;
L_0049a3a7:;
  /* 0049a3a7 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a3aa mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a3ad mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049a3af sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a3b1 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a3b6 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3b8 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049a3bb add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a3bd sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a3c0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049a3c2 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049a3c5 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a3c7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a3c9 jae 0x49a433 */ if (!CF_) goto L_0049a433;
  /* 0049a3cb mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a3ce imul eax, eax, 0x8c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3d4 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a3da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a3db add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a3dd mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a3df call 0x49af70 */ esp -= 4; M32(esp) = 0x49a3e4u; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a3dfu); RETCHK(0x49a3e4u, 0x49a3dfu); LOADALL;
  /* 0049a3e4 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a3eb mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a3ee mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049a3f0 sub ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a3f2 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a3f5 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a3fa imul ebx */ { s64 p_ = (s64)(s32)eax * (s32)ebx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3fc add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a3fe sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a401 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a403 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a406 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a409 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a40b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a40c sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a40e lea ebx, [ebp - 0xa0] */ ebx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a414 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a416 call 0x49a190 */ esp -= 4; M32(esp) = 0x49a41bu; SAVEALL; F_0049a190(c); ABI_CHECK(0x49a190u, 0x49a416u); RETCHK(0x49a41bu, 0x49a416u); LOADALL;
  /* 0049a41b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a41e mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a421 mov ecx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); ecx = (u32)(M32(m_)); }
  /* 0049a427 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a429 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a42c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a42f sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a431 jmp 0x49a46d */ goto L_0049a46d;
L_0049a433:;
  /* 0049a433 imul eax, eax, 0x8c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a439 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a43b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a43d mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a440 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a443 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a449 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a44a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a44c call 0x49af70 */ esp -= 4; M32(esp) = 0x49a451u; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a44cu); RETCHK(0x49a451u, 0x49a44cu); LOADALL;
  /* 0049a451 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a454 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a457 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a459 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a45c mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a45e call 0x49adf0 */ esp -= 4; M32(esp) = 0x49a463u; SAVEALL; F_0049adf0(c); ABI_CHECK(0x49adf0u, 0x49a45eu); RETCHK(0x49a463u, 0x49a45eu); LOADALL;
  /* 0049a463 mov edx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); edx = (u32)(M32(m_)); }
  /* 0049a469 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a46b mov eax, esi */ { eax = (u32)(esi); }
L_0049a46d:;
  /* 0049a46d lea ebx, [ebp - 0xa0] */ ebx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a473 call 0x49ace0 */ esp -= 4; M32(esp) = 0x49a478u; SAVEALL; F_0049ace0(c); ABI_CHECK(0x49ace0u, 0x49a473u); RETCHK(0x49a478u, 0x49a473u); LOADALL;
L_0049a478:;
  /* 0049a478 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049a47b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049a482 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049a485 call 0x61af31 */ esp -= 4; M32(esp) = 0x49a48au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49a485u); RETCHK(0x49a48au, 0x49a485u); LOADALL;
  /* 0049a48a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049a48b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a48c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a48d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a48f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a490 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a38f(CPU *c) {
  NATIVE_HOOK(0x49a38fu) REGS; LOADALL;
L_0049a38f:;
  /* 0049a38f mov eax, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); eax = (u32)(M32(m_)); }
  /* 0049a395 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a396 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49a39bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49a396u); RETCHK(0x49a39bu, 0x49a396u); LOADALL;
  /* 0049a39b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a39e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a3a0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a3a2 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049a3a7 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a3aa mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a3ad mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049a3af sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a3b1 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a3b6 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3b8 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049a3bb add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a3bd sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a3c0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049a3c2 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049a3c5 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a3c7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a3c9 jae 0x49a433 */ if (!CF_) goto L_0049a433;
  /* 0049a3cb mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a3ce imul eax, eax, 0x8c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3d4 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a3da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a3db add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a3dd mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a3df call 0x49af70 */ esp -= 4; M32(esp) = 0x49a3e4u; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a3dfu); RETCHK(0x49a3e4u, 0x49a3dfu); LOADALL;
  /* 0049a3e4 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a3eb mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a3ee mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049a3f0 sub ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a3f2 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a3f5 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a3fa imul ebx */ { s64 p_ = (s64)(s32)eax * (s32)ebx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3fc add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a3fe sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a401 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a403 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a406 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a409 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a40b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a40c sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a40e lea ebx, [ebp - 0xa0] */ ebx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a414 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a416 call 0x49a190 */ esp -= 4; M32(esp) = 0x49a41bu; SAVEALL; F_0049a190(c); ABI_CHECK(0x49a190u, 0x49a416u); RETCHK(0x49a41bu, 0x49a416u); LOADALL;
  /* 0049a41b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a41e mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a421 mov ecx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); ecx = (u32)(M32(m_)); }
  /* 0049a427 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a429 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a42c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a42f sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a431 jmp 0x49a46d */ goto L_0049a46d;
L_0049a433:;
  /* 0049a433 imul eax, eax, 0x8c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a439 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a43b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a43d mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a440 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a443 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a449 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a44a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a44c call 0x49af70 */ esp -= 4; M32(esp) = 0x49a451u; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a44cu); RETCHK(0x49a451u, 0x49a44cu); LOADALL;
  /* 0049a451 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a454 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a457 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a459 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a45c mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a45e call 0x49adf0 */ esp -= 4; M32(esp) = 0x49a463u; SAVEALL; F_0049adf0(c); ABI_CHECK(0x49adf0u, 0x49a45eu); RETCHK(0x49a463u, 0x49a45eu); LOADALL;
  /* 0049a463 mov edx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); edx = (u32)(M32(m_)); }
  /* 0049a469 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a46b mov eax, esi */ { eax = (u32)(esi); }
L_0049a46d:;
  /* 0049a46d lea ebx, [ebp - 0xa0] */ ebx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a473 call 0x49ace0 */ esp -= 4; M32(esp) = 0x49a478u; SAVEALL; F_0049ace0(c); ABI_CHECK(0x49ace0u, 0x49a473u); RETCHK(0x49a478u, 0x49a473u); LOADALL;
  /* 0049a478 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049a47b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049a482 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049a485 call 0x61af31 */ esp -= 4; M32(esp) = 0x49a48au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49a485u); RETCHK(0x49a48au, 0x49a485u); LOADALL;
  /* 0049a48a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049a48b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a48c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a48d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a48f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a490 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a39e(CPU *c) {
  NATIVE_HOOK(0x49a39eu) REGS; LOADALL;
L_0049a39e:;
  /* 0049a39e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a3a0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a3a2 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049a3a7 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a3aa mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a3ad mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049a3af sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a3b1 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a3b6 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3b8 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049a3bb add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a3bd sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a3c0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049a3c2 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049a3c5 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a3c7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a3c9 jae 0x49a433 */ if (!CF_) goto L_0049a433;
  /* 0049a3cb mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a3ce imul eax, eax, 0x8c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3d4 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a3da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a3db add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a3dd mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a3df call 0x49af70 */ esp -= 4; M32(esp) = 0x49a3e4u; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a3dfu); RETCHK(0x49a3e4u, 0x49a3dfu); LOADALL;
  /* 0049a3e4 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a3eb mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a3ee mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049a3f0 sub ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a3f2 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a3f5 mov eax, 0xea0ea0eb */ { eax = (u32)(0xea0ea0ebu); }
  /* 0049a3fa imul ebx */ { s64 p_ = (s64)(s32)eax * (s32)ebx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a3fc add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a3fe sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a401 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a403 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a406 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a409 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a40b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a40c sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a40e lea ebx, [ebp - 0xa0] */ ebx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a414 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a416 call 0x49a190 */ esp -= 4; M32(esp) = 0x49a41bu; SAVEALL; F_0049a190(c); ABI_CHECK(0x49a190u, 0x49a416u); RETCHK(0x49a41bu, 0x49a416u); LOADALL;
  /* 0049a41b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a41e mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a421 mov ecx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); ecx = (u32)(M32(m_)); }
  /* 0049a427 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a429 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a42c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a42f sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a431 jmp 0x49a46d */ goto L_0049a46d;
L_0049a433:;
  /* 0049a433 imul eax, eax, 0x8c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x8cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a439 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a43b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a43d mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a440 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a443 mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a449 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a44a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a44c call 0x49af70 */ esp -= 4; M32(esp) = 0x49a451u; SAVEALL; F_0049af70(c); ABI_CHECK(0x49af70u, 0x49a44cu); RETCHK(0x49a451u, 0x49a44cu); LOADALL;
  /* 0049a451 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a454 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a457 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a459 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a45c mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a45e call 0x49adf0 */ esp -= 4; M32(esp) = 0x49a463u; SAVEALL; F_0049adf0(c); ABI_CHECK(0x49adf0u, 0x49a45eu); RETCHK(0x49a463u, 0x49a45eu); LOADALL;
  /* 0049a463 mov edx, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); edx = (u32)(M32(m_)); }
  /* 0049a469 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a46b mov eax, esi */ { eax = (u32)(esi); }
L_0049a46d:;
  /* 0049a46d lea ebx, [ebp - 0xa0] */ ebx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0049a473 call 0x49ace0 */ esp -= 4; M32(esp) = 0x49a478u; SAVEALL; F_0049ace0(c); ABI_CHECK(0x49ace0u, 0x49a473u); RETCHK(0x49a478u, 0x49a473u); LOADALL;
  /* 0049a478 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049a47b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049a482 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049a485 call 0x61af31 */ esp -= 4; M32(esp) = 0x49a48au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49a485u); RETCHK(0x49a48au, 0x49a485u); LOADALL;
  /* 0049a48a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049a48b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a48c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a48d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a48f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a490 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a4a0(CPU *c) {
  NATIVE_HOOK(0x49a4a0u) REGS; LOADALL;
L_0049a4a0:;
  /* 0049a4a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a4a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a4a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049a4a5 push 0x61cd60 */ { u32 v_ = 0x61cd60u; esp -= 4; M32(esp) = v_; }
  /* 0049a4aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049a4b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a4b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049a4b8 sub esp, 0x98 */ { u32 a_ = esp, b_ = 0x98u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a4be mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049a4c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a4c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a4c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a4c6 mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 0049a4cb mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a4cd lea edi, [ebp - 0x9c] */ edi = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a4d3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049a4d5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049a4d8 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0049a4db test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a4dd mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0049a4e0 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049a4e3 jne 0x49a4e9 */ if (!ZF_) goto L_0049a4e9;
  /* 0049a4e5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a4e7 jmp 0x49a4ff */ goto L_0049a4ff;
L_0049a4e9:;
  /* 0049a4e9 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049a4ec sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a4ee mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a4f3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a4f5 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a4f8 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a4fa shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049a4fd add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a4ff:;
  /* 0049a4ff mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a502 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a504 je 0x49a742 */ if (ZF_) goto L_0049a742;
  /* 0049a50a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a50c jne 0x49a512 */ if (!ZF_) goto L_0049a512;
  /* 0049a50e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a510 jmp 0x49a528 */ goto L_0049a528;
L_0049a512:;
  /* 0049a512 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a515 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a517 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a51c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a51e sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a521 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a523 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a526 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a528:;
  /* 0049a528 mov edx, 0x1e1e1e1 */ { edx = (u32)(0x1e1e1e1u); }
  /* 0049a52d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a52f cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a531 jae 0x49a538 */ if (!CF_) goto L_0049a538;
  /* 0049a533 call 0x49ac70 */ esp -= 4; M32(esp) = 0x49a538u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x49a533u); RETCHK(0x49a538u, 0x49a533u); LOADALL;
L_0049a538:;
  /* 0049a538 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a53a jne 0x49a540 */ if (!ZF_) goto L_0049a540;
  /* 0049a53c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a53e jmp 0x49a556 */ goto L_0049a556;
L_0049a540:;
  /* 0049a540 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a543 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a545 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a54a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a54c sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a54f mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a551 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a554 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a556:;
  /* 0049a556 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a558 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a55a jae 0x49a676 */ if (!CF_) goto L_0049a676;
  /* 0049a560 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049a562 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a564 mov edx, 0x1e1e1e1 */ { edx = (u32)(0x1e1e1e1u); }
  /* 0049a569 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a56b cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a56d jae 0x49a573 */ if (!CF_) goto L_0049a573;
  /* 0049a56f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a571 jmp 0x49a575 */ goto L_0049a575;
L_0049a573:;
  /* 0049a573 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a575:;
  /* 0049a575 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a577 jne 0x49a57d */ if (!ZF_) goto L_0049a57d;
  /* 0049a579 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a57b jmp 0x49a593 */ goto L_0049a593;
L_0049a57d:;
  /* 0049a57d mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a580 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a582 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a587 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a589 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a58c mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a58e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a591 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a593:;
  /* 0049a593 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a595 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a597 jae 0x49a5a5 */ if (!CF_) goto L_0049a5a5;
  /* 0049a599 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049a59b call 0x499d50 */ esp -= 4; M32(esp) = 0x49a5a0u; SAVEALL; F_00499d50(c); ABI_CHECK(0x499d50u, 0x49a59bu); RETCHK(0x49a5a0u, 0x49a59bu); LOADALL;
  /* 0049a5a0 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049a5a2 add esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a5a5:;
  /* 0049a5a5 imul esi, esi, 0x88 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a5ab push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a5ac call 0x5fe934 */ esp -= 4; M32(esp) = 0x49a5b1u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x49a5acu); RETCHK(0x49a5b1u, 0x49a5acu); LOADALL;
  /* 0049a5b1 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049a5b4 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049a5bb mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a5be mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049a5c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a5c2 mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a5c8 call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a5cdu; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a5c8u); RETCHK(0x49a5cdu, 0x49a5c8u); LOADALL;
  /* 0049a5cd mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a5d0 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a5d3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a5d6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a5d7 lea ebx, [ebp - 0x9c] */ ebx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a5dd mov dword ptr [ebp - 0xa4], eax */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(eax); }
  /* 0049a5e3 call 0x49ae50 */ esp -= 4; M32(esp) = 0x49a5e8u; SAVEALL; F_0049ae50(c); ABI_CHECK(0x49ae50u, 0x49a5e3u); RETCHK(0x49a5e8u, 0x49a5e3u); LOADALL;
  /* 0049a5e8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a5eb mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a5ee imul ecx, ecx, 0x88 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a5f4 mov eax, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); eax = (u32)(M32(m_)); }
  /* 0049a5fa mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a5fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a600 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a601 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049a604 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a606 call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a60bu; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a606u); RETCHK(0x49a60bu, 0x49a606u); LOADALL;
  /* 0049a60b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049a60e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a611 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a613 je 0x49a62b */ if (ZF_) goto L_0049a62b;
  /* 0049a615 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a618 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a61a mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a61f imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a621 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a624 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a626 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a629 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a62b:;
  /* 0049a62b mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0049a62e add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a630 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049a633 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a635 je 0x49a640 */ if (ZF_) goto L_0049a640;
  /* 0049a637 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a638 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49a63du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49a638u); RETCHK(0x49a63du, 0x49a638u); LOADALL;
  /* 0049a63d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049a640:;
  /* 0049a640 mov eax, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); eax = (u32)(M32(m_)); }
  /* 0049a646 imul ebx, ebx, 0x88 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a64c add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a64e add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a650 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 0049a653 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049a656 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0049a659 jmp 0x49a742 */ goto L_0049a742;
L_0049a676:;
  /* 0049a676 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a679 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a67c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a67e sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a680 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a685 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a687 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a68a mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a68c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a68f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a691 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a693 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049a695 jae 0x49a6fd */ if (!CF_) goto L_0049a6fd;
  /* 0049a697 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a69a imul eax, eax, 0x88 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a6a0 mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a6a6 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a6a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a6a9 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a6ab call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a6b0u; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a6abu); RETCHK(0x49a6b0u, 0x49a6abu); LOADALL;
  /* 0049a6b0 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a6b7 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a6ba mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049a6bc sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6be mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a6c1 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a6c6 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a6c8 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a6cb mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a6cd shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a6d0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a6d3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a6d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a6d6 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a6d8 lea ebx, [ebp - 0x9c] */ ebx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a6de mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a6e0 call 0x49a0c0 */ esp -= 4; M32(esp) = 0x49a6e5u; SAVEALL; F_0049a0c0(c); ABI_CHECK(0x49a0c0u, 0x49a6e0u); RETCHK(0x49a6e5u, 0x49a6e0u); LOADALL;
  /* 0049a6e5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a6e8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a6eb mov ecx, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); ecx = (u32)(M32(m_)); }
  /* 0049a6f1 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6f3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a6f6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a6f9 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6fb jmp 0x49a737 */ goto L_0049a737;
L_0049a6fd:;
  /* 0049a6fd imul eax, eax, 0x88 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a703 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a705 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a707 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a70a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a70d mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a713 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a714 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a716 call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a71bu; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a716u); RETCHK(0x49a71bu, 0x49a716u); LOADALL;
  /* 0049a71b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a71e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a721 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a723 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a726 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a728 call 0x49ad20 */ esp -= 4; M32(esp) = 0x49a72du; SAVEALL; F_0049ad20(c); ABI_CHECK(0x49ad20u, 0x49a728u); RETCHK(0x49a72du, 0x49a728u); LOADALL;
  /* 0049a72d mov edx, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); edx = (u32)(M32(m_)); }
  /* 0049a733 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a735 mov eax, esi */ { eax = (u32)(esi); }
L_0049a737:;
  /* 0049a737 lea ebx, [ebp - 0x9c] */ ebx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a73d call 0x49ad00 */ esp -= 4; M32(esp) = 0x49a742u; SAVEALL; F_0049ad00(c); ABI_CHECK(0x49ad00u, 0x49a73du); RETCHK(0x49a742u, 0x49a73du); LOADALL;
L_0049a742:;
  /* 0049a742 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049a745 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049a74c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049a74f call 0x61af31 */ esp -= 4; M32(esp) = 0x49a754u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49a74fu); RETCHK(0x49a754u, 0x49a74fu); LOADALL;
  /* 0049a754 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049a755 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a756 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a757 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a759 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a75a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a65e(CPU *c) {
  NATIVE_HOOK(0x49a65eu) REGS; LOADALL;
L_0049a65e:;
  /* 0049a65e mov eax, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); eax = (u32)(M32(m_)); }
  /* 0049a664 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a665 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49a66au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49a665u); RETCHK(0x49a66au, 0x49a665u); LOADALL;
  /* 0049a66a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a66d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a66f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a671 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049a676 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a679 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a67c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a67e sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a680 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a685 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a687 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a68a mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a68c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a68f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a691 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a693 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049a695 jae 0x49a6fd */ if (!CF_) goto L_0049a6fd;
  /* 0049a697 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a69a imul eax, eax, 0x88 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a6a0 mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a6a6 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a6a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a6a9 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a6ab call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a6b0u; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a6abu); RETCHK(0x49a6b0u, 0x49a6abu); LOADALL;
  /* 0049a6b0 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a6b7 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a6ba mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049a6bc sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6be mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a6c1 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a6c6 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a6c8 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a6cb mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a6cd shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a6d0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a6d3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a6d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a6d6 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a6d8 lea ebx, [ebp - 0x9c] */ ebx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a6de mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a6e0 call 0x49a0c0 */ esp -= 4; M32(esp) = 0x49a6e5u; SAVEALL; F_0049a0c0(c); ABI_CHECK(0x49a0c0u, 0x49a6e0u); RETCHK(0x49a6e5u, 0x49a6e0u); LOADALL;
  /* 0049a6e5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a6e8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a6eb mov ecx, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); ecx = (u32)(M32(m_)); }
  /* 0049a6f1 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6f3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a6f6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a6f9 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6fb jmp 0x49a737 */ goto L_0049a737;
L_0049a6fd:;
  /* 0049a6fd imul eax, eax, 0x88 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a703 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a705 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a707 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a70a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a70d mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a713 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a714 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a716 call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a71bu; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a716u); RETCHK(0x49a71bu, 0x49a716u); LOADALL;
  /* 0049a71b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a71e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a721 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a723 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a726 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a728 call 0x49ad20 */ esp -= 4; M32(esp) = 0x49a72du; SAVEALL; F_0049ad20(c); ABI_CHECK(0x49ad20u, 0x49a728u); RETCHK(0x49a72du, 0x49a728u); LOADALL;
  /* 0049a72d mov edx, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); edx = (u32)(M32(m_)); }
  /* 0049a733 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a735 mov eax, esi */ { eax = (u32)(esi); }
L_0049a737:;
  /* 0049a737 lea ebx, [ebp - 0x9c] */ ebx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a73d call 0x49ad00 */ esp -= 4; M32(esp) = 0x49a742u; SAVEALL; F_0049ad00(c); ABI_CHECK(0x49ad00u, 0x49a73du); RETCHK(0x49a742u, 0x49a73du); LOADALL;
  /* 0049a742 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049a745 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049a74c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049a74f call 0x61af31 */ esp -= 4; M32(esp) = 0x49a754u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49a74fu); RETCHK(0x49a754u, 0x49a74fu); LOADALL;
  /* 0049a754 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049a755 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a756 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a757 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a759 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a75a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a66d(CPU *c) {
  NATIVE_HOOK(0x49a66du) REGS; LOADALL;
L_0049a66d:;
  /* 0049a66d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a66f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a671 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049a676 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a679 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a67c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a67e sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a680 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a685 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a687 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a68a mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a68c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a68f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a691 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a693 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049a695 jae 0x49a6fd */ if (!CF_) goto L_0049a6fd;
  /* 0049a697 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a69a imul eax, eax, 0x88 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a6a0 mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a6a6 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a6a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a6a9 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a6ab call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a6b0u; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a6abu); RETCHK(0x49a6b0u, 0x49a6abu); LOADALL;
  /* 0049a6b0 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a6b7 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a6ba mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049a6bc sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6be mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a6c1 mov eax, 0x78787879 */ { eax = (u32)(0x78787879u); }
  /* 0049a6c6 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a6c8 sar edx, 6 */ { u32 n_ = (6u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a6cb mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a6cd shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a6d0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a6d3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a6d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a6d6 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a6d8 lea ebx, [ebp - 0x9c] */ ebx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a6de mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a6e0 call 0x49a0c0 */ esp -= 4; M32(esp) = 0x49a6e5u; SAVEALL; F_0049a0c0(c); ABI_CHECK(0x49a0c0u, 0x49a6e0u); RETCHK(0x49a6e5u, 0x49a6e0u); LOADALL;
  /* 0049a6e5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a6e8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a6eb mov ecx, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); ecx = (u32)(M32(m_)); }
  /* 0049a6f1 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6f3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a6f6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a6f9 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a6fb jmp 0x49a737 */ goto L_0049a737;
L_0049a6fd:;
  /* 0049a6fd imul eax, eax, 0x88 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x88u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a703 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a705 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a707 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a70a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a70d mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a713 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a714 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a716 call 0x49aee0 */ esp -= 4; M32(esp) = 0x49a71bu; SAVEALL; F_0049aee0(c); ABI_CHECK(0x49aee0u, 0x49a716u); RETCHK(0x49a71bu, 0x49a716u); LOADALL;
  /* 0049a71b mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a71e mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a721 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a723 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a726 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a728 call 0x49ad20 */ esp -= 4; M32(esp) = 0x49a72du; SAVEALL; F_0049ad20(c); ABI_CHECK(0x49ad20u, 0x49a728u); RETCHK(0x49a72du, 0x49a728u); LOADALL;
  /* 0049a72d mov edx, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); edx = (u32)(M32(m_)); }
  /* 0049a733 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a735 mov eax, esi */ { eax = (u32)(esi); }
L_0049a737:;
  /* 0049a737 lea ebx, [ebp - 0x9c] */ ebx = (u32)((u32)(ebp + 0xffffff64u));
  /* 0049a73d call 0x49ad00 */ esp -= 4; M32(esp) = 0x49a742u; SAVEALL; F_0049ad00(c); ABI_CHECK(0x49ad00u, 0x49a73du); RETCHK(0x49a742u, 0x49a73du); LOADALL;
  /* 0049a742 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049a745 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049a74c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049a74f call 0x61af31 */ esp -= 4; M32(esp) = 0x49a754u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49a74fu); RETCHK(0x49a754u, 0x49a74fu); LOADALL;
  /* 0049a754 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049a755 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049a756 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049a757 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049a759 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049a75a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a760(CPU *c) {
  NATIVE_HOOK(0x49a760u) REGS; LOADALL;
L_0049a760:;
  /* 0049a760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049a761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049a763 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049a765 push 0x61cd50 */ { u32 v_ = 0x61cd50u; esp -= 4; M32(esp) = v_; }
  /* 0049a76a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049a770 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a771 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049a778 sub esp, 0x94 */ { u32 a_ = esp, b_ = 0x94u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a77e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049a783 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049a784 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a785 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a786 mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 0049a78b mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a78d lea edi, [ebp - 0x98] */ edi = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a793 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049a795 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049a798 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0049a79b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a79d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0049a7a0 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049a7a3 jne 0x49a7a9 */ if (!ZF_) goto L_0049a7a9;
  /* 0049a7a5 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a7a7 jmp 0x49a7bf */ goto L_0049a7bf;
L_0049a7a9:;
  /* 0049a7a9 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049a7ac sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a7ae mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a7b3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a7b5 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a7b8 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049a7ba shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049a7bd add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a7bf:;
  /* 0049a7bf mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a7c2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a7c4 je 0x49aa02 */ if (ZF_) goto L_0049aa02;
  /* 0049a7ca test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a7cc jne 0x49a7d2 */ if (!ZF_) goto L_0049a7d2;
  /* 0049a7ce xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a7d0 jmp 0x49a7e8 */ goto L_0049a7e8;
L_0049a7d2:;
  /* 0049a7d2 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a7d5 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a7d7 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a7dc imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a7de sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a7e1 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a7e3 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a7e6 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a7e8:;
  /* 0049a7e8 mov edx, 0x1f07c1f */ { edx = (u32)(0x1f07c1fu); }
  /* 0049a7ed sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a7ef cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a7f1 jae 0x49a7f8 */ if (!CF_) goto L_0049a7f8;
  /* 0049a7f3 call 0x49ac70 */ esp -= 4; M32(esp) = 0x49a7f8u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x49a7f3u); RETCHK(0x49a7f8u, 0x49a7f3u); LOADALL;
L_0049a7f8:;
  /* 0049a7f8 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a7fa jne 0x49a800 */ if (!ZF_) goto L_0049a800;
  /* 0049a7fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a7fe jmp 0x49a816 */ goto L_0049a816;
L_0049a800:;
  /* 0049a800 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a803 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a805 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a80a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a80c sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a80f mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a811 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a814 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a816:;
  /* 0049a816 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a818 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a81a jae 0x49a936 */ if (!CF_) goto L_0049a936;
  /* 0049a820 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049a822 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a824 mov edx, 0x1f07c1f */ { edx = (u32)(0x1f07c1fu); }
  /* 0049a829 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a82b cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a82d jae 0x49a833 */ if (!CF_) goto L_0049a833;
  /* 0049a82f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049a831 jmp 0x49a835 */ goto L_0049a835;
L_0049a833:;
  /* 0049a833 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a835:;
  /* 0049a835 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a837 jne 0x49a83d */ if (!ZF_) goto L_0049a83d;
  /* 0049a839 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049a83b jmp 0x49a853 */ goto L_0049a853;
L_0049a83d:;
  /* 0049a83d mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a840 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a842 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a847 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a849 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a84c mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a84e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a851 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a853:;
  /* 0049a853 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a855 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a857 jae 0x49a865 */ if (!CF_) goto L_0049a865;
  /* 0049a859 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049a85b call 0x499e00 */ esp -= 4; M32(esp) = 0x49a860u; SAVEALL; F_00499e00(c); ABI_CHECK(0x499e00u, 0x49a85bu); RETCHK(0x49a860u, 0x49a85bu); LOADALL;
  /* 0049a860 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049a862 add esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049a865:;
  /* 0049a865 imul esi, esi, 0x84 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a86b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049a86c call 0x5fe934 */ esp -= 4; M32(esp) = 0x49a871u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x49a86cu); RETCHK(0x49a871u, 0x49a86cu); LOADALL;
  /* 0049a871 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049a874 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049a87b mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a87e mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049a881 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a882 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049a888 call 0x49af10 */ esp -= 4; M32(esp) = 0x49a88du; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a888u); RETCHK(0x49a88du, 0x49a888u); LOADALL;
  /* 0049a88d mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a890 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a893 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a896 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a897 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a89d mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 0049a8a3 call 0x49ae80 */ esp -= 4; M32(esp) = 0x49a8a8u; SAVEALL; F_0049ae80(c); ABI_CHECK(0x49ae80u, 0x49a8a3u); RETCHK(0x49a8a8u, 0x49a8a3u); LOADALL;
  /* 0049a8a8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a8ab mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a8ae imul ecx, ecx, 0x84 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a8b4 mov eax, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); eax = (u32)(M32(m_)); }
  /* 0049a8ba mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a8bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a8c0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049a8c1 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049a8c4 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a8c6 call 0x49af10 */ esp -= 4; M32(esp) = 0x49a8cbu; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a8c6u); RETCHK(0x49a8cbu, 0x49a8c6u); LOADALL;
  /* 0049a8cb mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049a8ce add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a8d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a8d3 je 0x49a8eb */ if (ZF_) goto L_0049a8eb;
  /* 0049a8d5 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a8d8 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049a8da mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a8df imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a8e1 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a8e4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a8e6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a8e9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049a8eb:;
  /* 0049a8eb mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0049a8ee add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a8f0 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049a8f3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049a8f5 je 0x49a900 */ if (ZF_) goto L_0049a900;
  /* 0049a8f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a8f8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49a8fdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49a8f8u); RETCHK(0x49a8fdu, 0x49a8f8u); LOADALL;
  /* 0049a8fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049a900:;
  /* 0049a900 mov eax, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); eax = (u32)(M32(m_)); }
  /* 0049a906 imul ebx, ebx, 0x84 */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a90c add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a90e add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049a910 mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 0049a913 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049a916 mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0049a919 jmp 0x49aa02 */ goto L_0049aa02;
L_0049a936:;
  /* 0049a936 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a939 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a93c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a93e sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a940 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a945 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a947 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a94a mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a94c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a94f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a951 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a953 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049a955 jae 0x49a9bd */ if (!CF_) goto L_0049a9bd;
  /* 0049a957 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a95a imul eax, eax, 0x84 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a960 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049a966 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a968 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a969 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a96b call 0x49af10 */ esp -= 4; M32(esp) = 0x49a970u; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a96bu); RETCHK(0x49a970u, 0x49a96bu); LOADALL;
  /* 0049a970 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a977 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a97a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049a97c sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a97e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a981 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a986 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a988 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a98b mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a98d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a990 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a993 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a995 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a996 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a998 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a99e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a9a0 call 0x49a160 */ esp -= 4; M32(esp) = 0x49a9a5u; SAVEALL; F_0049a160(c); ABI_CHECK(0x49a160u, 0x49a9a0u); RETCHK(0x49a9a5u, 0x49a9a0u); LOADALL;
  /* 0049a9a5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a9a8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a9ab mov ecx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 0049a9b1 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9b3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a9b6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a9b9 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9bb jmp 0x49a9f7 */ goto L_0049a9f7;
L_0049a9bd:;
  /* 0049a9bd imul eax, eax, 0x84 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a9c3 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a9c5 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9c7 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a9ca mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a9cd mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049a9d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a9d4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a9d6 call 0x49af10 */ esp -= 4; M32(esp) = 0x49a9dbu; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a9d6u); RETCHK(0x49a9dbu, 0x49a9d6u); LOADALL;
  /* 0049a9db mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a9de mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a9e1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a9e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a9e6 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a9e8 call 0x49ad70 */ esp -= 4; M32(esp) = 0x49a9edu; SAVEALL; F_0049ad70(c); ABI_CHECK(0x49ad70u, 0x49a9e8u); RETCHK(0x49a9edu, 0x49a9e8u); LOADALL;
  /* 0049a9ed mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 0049a9f3 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9f5 mov eax, esi */ { eax = (u32)(esi); }
L_0049a9f7:;
  /* 0049a9f7 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a9fd call 0x49ad50 */ esp -= 4; M32(esp) = 0x49aa02u; SAVEALL; F_0049ad50(c); ABI_CHECK(0x49ad50u, 0x49a9fdu); RETCHK(0x49aa02u, 0x49a9fdu); LOADALL;
L_0049aa02:;
  /* 0049aa02 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049aa05 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049aa0c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049aa0f call 0x61af31 */ esp -= 4; M32(esp) = 0x49aa14u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49aa0fu); RETCHK(0x49aa14u, 0x49aa0fu); LOADALL;
  /* 0049aa14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049aa15 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049aa16 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049aa17 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049aa19 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049aa1a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a91e(CPU *c) {
  NATIVE_HOOK(0x49a91eu) REGS; LOADALL;
L_0049a91e:;
  /* 0049a91e mov eax, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); eax = (u32)(M32(m_)); }
  /* 0049a924 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049a925 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49a92au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49a925u); RETCHK(0x49a92au, 0x49a925u); LOADALL;
  /* 0049a92a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a92d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a92f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a931 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049a936 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a939 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a93c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a93e sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a940 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a945 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a947 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a94a mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a94c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a94f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a951 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a953 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049a955 jae 0x49a9bd */ if (!CF_) goto L_0049a9bd;
  /* 0049a957 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a95a imul eax, eax, 0x84 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a960 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049a966 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a968 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a969 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a96b call 0x49af10 */ esp -= 4; M32(esp) = 0x49a970u; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a96bu); RETCHK(0x49a970u, 0x49a96bu); LOADALL;
  /* 0049a970 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a977 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a97a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049a97c sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a97e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a981 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a986 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a988 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a98b mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a98d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a990 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a993 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a995 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a996 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a998 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a99e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a9a0 call 0x49a160 */ esp -= 4; M32(esp) = 0x49a9a5u; SAVEALL; F_0049a160(c); ABI_CHECK(0x49a160u, 0x49a9a0u); RETCHK(0x49a9a5u, 0x49a9a0u); LOADALL;
  /* 0049a9a5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a9a8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a9ab mov ecx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 0049a9b1 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9b3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a9b6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a9b9 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9bb jmp 0x49a9f7 */ goto L_0049a9f7;
L_0049a9bd:;
  /* 0049a9bd imul eax, eax, 0x84 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a9c3 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a9c5 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9c7 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a9ca mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a9cd mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049a9d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a9d4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a9d6 call 0x49af10 */ esp -= 4; M32(esp) = 0x49a9dbu; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a9d6u); RETCHK(0x49a9dbu, 0x49a9d6u); LOADALL;
  /* 0049a9db mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a9de mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a9e1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a9e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a9e6 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a9e8 call 0x49ad70 */ esp -= 4; M32(esp) = 0x49a9edu; SAVEALL; F_0049ad70(c); ABI_CHECK(0x49ad70u, 0x49a9e8u); RETCHK(0x49a9edu, 0x49a9e8u); LOADALL;
  /* 0049a9ed mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 0049a9f3 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9f5 mov eax, esi */ { eax = (u32)(esi); }
L_0049a9f7:;
  /* 0049a9f7 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a9fd call 0x49ad50 */ esp -= 4; M32(esp) = 0x49aa02u; SAVEALL; F_0049ad50(c); ABI_CHECK(0x49ad50u, 0x49a9fdu); RETCHK(0x49aa02u, 0x49a9fdu); LOADALL;
  /* 0049aa02 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049aa05 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049aa0c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049aa0f call 0x61af31 */ esp -= 4; M32(esp) = 0x49aa14u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49aa0fu); RETCHK(0x49aa14u, 0x49aa0fu); LOADALL;
  /* 0049aa14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049aa15 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049aa16 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049aa17 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049aa19 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049aa1a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049a92d(CPU *c) {
  NATIVE_HOOK(0x49a92du) REGS; LOADALL;
L_0049a92d:;
  /* 0049a92d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a92f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049a931 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049a936 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049a939 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049a93c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a93e sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a940 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a945 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a947 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a94a mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a94c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a94f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a951 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049a953 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049a955 jae 0x49a9bd */ if (!CF_) goto L_0049a9bd;
  /* 0049a957 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a95a imul eax, eax, 0x84 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a960 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049a966 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a968 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a969 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049a96b call 0x49af10 */ esp -= 4; M32(esp) = 0x49a970u; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a96bu); RETCHK(0x49a970u, 0x49a96bu); LOADALL;
  /* 0049a970 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049a977 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049a97a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049a97c sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a97e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049a981 mov eax, 0x3e0f83e1 */ { eax = (u32)(0x3e0f83e1u); }
  /* 0049a986 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a988 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049a98b mov eax, edx */ { eax = (u32)(edx); }
  /* 0049a98d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049a990 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a993 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049a995 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049a996 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049a998 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a99e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049a9a0 call 0x49a160 */ esp -= 4; M32(esp) = 0x49a9a5u; SAVEALL; F_0049a160(c); ABI_CHECK(0x49a160u, 0x49a9a0u); RETCHK(0x49a9a5u, 0x49a9a0u); LOADALL;
  /* 0049a9a5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049a9a8 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049a9ab mov ecx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); ecx = (u32)(M32(m_)); }
  /* 0049a9b1 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9b3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049a9b6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049a9b9 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9bb jmp 0x49a9f7 */ goto L_0049a9f7;
L_0049a9bd:;
  /* 0049a9bd imul eax, eax, 0x84 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x84u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049a9c3 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049a9c5 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9c7 mov dword ptr [ebp + 0x10], edx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0049a9ca mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049a9cd mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049a9d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049a9d4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a9d6 call 0x49af10 */ esp -= 4; M32(esp) = 0x49a9dbu; SAVEALL; F_0049af10(c); ABI_CHECK(0x49af10u, 0x49a9d6u); RETCHK(0x49a9dbu, 0x49a9d6u); LOADALL;
  /* 0049a9db mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049a9de mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049a9e1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049a9e3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049a9e6 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049a9e8 call 0x49ad70 */ esp -= 4; M32(esp) = 0x49a9edu; SAVEALL; F_0049ad70(c); ABI_CHECK(0x49ad70u, 0x49a9e8u); RETCHK(0x49a9edu, 0x49a9e8u); LOADALL;
  /* 0049a9ed mov edx, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); edx = (u32)(M32(m_)); }
  /* 0049a9f3 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049a9f5 mov eax, esi */ { eax = (u32)(esi); }
L_0049a9f7:;
  /* 0049a9f7 lea ebx, [ebp - 0x98] */ ebx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0049a9fd call 0x49ad50 */ esp -= 4; M32(esp) = 0x49aa02u; SAVEALL; F_0049ad50(c); ABI_CHECK(0x49ad50u, 0x49a9fdu); RETCHK(0x49aa02u, 0x49a9fdu); LOADALL;
  /* 0049aa02 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049aa05 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049aa0c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049aa0f call 0x61af31 */ esp -= 4; M32(esp) = 0x49aa14u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49aa0fu); RETCHK(0x49aa14u, 0x49aa0fu); LOADALL;
  /* 0049aa14 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049aa15 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049aa16 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049aa17 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049aa19 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049aa1a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049aa20(CPU *c) {
  NATIVE_HOOK(0x49aa20u) REGS; LOADALL;
L_0049aa20:;
  /* 0049aa20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049aa21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049aa23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049aa25 push 0x61cd40 */ { u32 v_ = 0x61cd40u; esp -= 4; M32(esp) = v_; }
  /* 0049aa2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049aa30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049aa31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049aa38 sub esp, 0x90 */ { u32 a_ = esp, b_ = 0x90u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049aa3e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049aa43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049aa44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049aa45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049aa46 mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0049aa4b mov esi, edx */ { esi = (u32)(edx); }
  /* 0049aa4d lea edi, [ebp - 0x94] */ edi = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049aa53 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049aa55 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049aa58 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049aa5b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aa5d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0049aa60 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049aa63 jne 0x49aa69 */ if (!ZF_) goto L_0049aa69;
  /* 0049aa65 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049aa67 jmp 0x49aa71 */ goto L_0049aa71;
L_0049aa69:;
  /* 0049aa69 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049aa6c sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049aa6e sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0049aa71:;
  /* 0049aa71 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049aa74 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aa76 je 0x49ac4f */ if (ZF_) goto L_0049ac4f;
  /* 0049aa7c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aa7e jne 0x49aa84 */ if (!ZF_) goto L_0049aa84;
  /* 0049aa80 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0049aa82 jmp 0x49aa8c */ goto L_0049aa8c;
L_0049aa84:;
  /* 0049aa84 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049aa87 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049aa89 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0049aa8c:;
  /* 0049aa8c mov ebx, 0x1ffffff */ { ebx = (u32)(0x1ffffffu); }
  /* 0049aa91 sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049aa93 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049aa95 jae 0x49aa9c */ if (!CF_) goto L_0049aa9c;
  /* 0049aa97 call 0x49ac70 */ esp -= 4; M32(esp) = 0x49aa9cu; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x49aa97u); RETCHK(0x49aa9cu, 0x49aa97u); LOADALL;
L_0049aa9c:;
  /* 0049aa9c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aa9e jne 0x49aaa4 */ if (!ZF_) goto L_0049aaa4;
  /* 0049aaa0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0049aaa2 jmp 0x49aaac */ goto L_0049aaac;
L_0049aaa4:;
  /* 0049aaa4 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049aaa7 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049aaa9 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0049aaac:;
  /* 0049aaac add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049aaae cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049aab0 jae 0x49abaf */ if (!CF_) goto L_0049abaf;
  /* 0049aab6 mov edx, eax */ { edx = (u32)(eax); }
  /* 0049aab8 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049aaba mov ebx, 0x1ffffff */ { ebx = (u32)(0x1ffffffu); }
  /* 0049aabf sub ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049aac1 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049aac3 jae 0x49aac9 */ if (!CF_) goto L_0049aac9;
  /* 0049aac5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049aac7 jmp 0x49aacb */ goto L_0049aacb;
L_0049aac9:;
  /* 0049aac9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049aacb:;
  /* 0049aacb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aacd jne 0x49aad3 */ if (!ZF_) goto L_0049aad3;
  /* 0049aacf xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0049aad1 jmp 0x49aadb */ goto L_0049aadb;
L_0049aad3:;
  /* 0049aad3 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049aad6 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049aad8 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_0049aadb:;
  /* 0049aadb add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049aadd cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049aadf jae 0x49aaf3 */ if (!CF_) goto L_0049aaf3;
  /* 0049aae1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aae3 jne 0x49aae9 */ if (!ZF_) goto L_0049aae9;
  /* 0049aae5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049aae7 jmp 0x49aaf1 */ goto L_0049aaf1;
L_0049aae9:;
  /* 0049aae9 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049aaec sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049aaee sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0049aaf1:;
  /* 0049aaf1 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049aaf3:;
  /* 0049aaf3 shl eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049aaf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049aaf7 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049aafa call 0x5fe934 */ esp -= 4; M32(esp) = 0x49aaffu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x49aafau); RETCHK(0x49aaffu, 0x49aafau); LOADALL;
  /* 0049aaff mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049ab06 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049ab09 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049ab0c mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049ab0f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049ab10 mov dword ptr [ebp - 0x98], eax */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(eax); }
  /* 0049ab16 call 0x49af40 */ esp -= 4; M32(esp) = 0x49ab1bu; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49ab16u); RETCHK(0x49ab1bu, 0x49ab16u); LOADALL;
  /* 0049ab1b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ab1e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ab21 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ab22 lea ebx, [ebp - 0x94] */ ebx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049ab28 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049ab2a mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049ab30 call 0x49aeb0 */ esp -= 4; M32(esp) = 0x49ab35u; SAVEALL; F_0049aeb0(c); ABI_CHECK(0x49aeb0u, 0x49ab30u); RETCHK(0x49ab35u, 0x49ab30u); LOADALL;
  /* 0049ab35 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ab38 mov eax, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); eax = (u32)(M32(m_)); }
  /* 0049ab3e mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049ab41 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049ab43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ab46 shl ecx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049ab49 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ab4a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ab4d add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ab4f call 0x49af40 */ esp -= 4; M32(esp) = 0x49ab54u; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49ab4fu); RETCHK(0x49ab54u, 0x49ab4fu); LOADALL;
  /* 0049ab54 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049ab57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ab5a test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ab5c jne 0x49ab62 */ if (!ZF_) goto L_0049ab62;
  /* 0049ab5e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049ab60 jmp 0x49ab6a */ goto L_0049ab6a;
L_0049ab62:;
  /* 0049ab62 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049ab65 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ab67 sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0049ab6a:;
  /* 0049ab6a add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ab6c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ab6e je 0x49ab79 */ if (ZF_) goto L_0049ab79;
  /* 0049ab70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049ab71 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49ab76u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49ab71u); RETCHK(0x49ab76u, 0x49ab71u); LOADALL;
  /* 0049ab76 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049ab79:;
  /* 0049ab79 mov eax, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); eax = (u32)(M32(m_)); }
  /* 0049ab7f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049ab82 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049ab84 shl esi, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049ab87 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ab89 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0049ab8c mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049ab8f mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0049ab92 jmp 0x49ac4f */ goto L_0049ac4f;
L_0049abaf:;
  /* 0049abaf mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049abb2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049abb5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049abb7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049abb9 sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049abbc cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049abbe jae 0x49ac0f */ if (!CF_) goto L_0049ac0f;
  /* 0049abc0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049abc3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049abc5 shl eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049abc8 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049abcb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049abcd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049abce call 0x49af40 */ esp -= 4; M32(esp) = 0x49abd3u; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49abceu); RETCHK(0x49abd3u, 0x49abceu); LOADALL;
  /* 0049abd3 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049abda mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049abdd mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049abe0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049abe3 mov edx, eax */ { edx = (u32)(eax); }
  /* 0049abe5 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049abe7 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049abea sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049abec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049abed lea ebx, [ebp - 0x94] */ ebx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049abf3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049abf5 call 0x49aeb0 */ esp -= 4; M32(esp) = 0x49abfau; SAVEALL; F_0049aeb0(c); ABI_CHECK(0x49aeb0u, 0x49abf5u); RETCHK(0x49abfau, 0x49abf5u); LOADALL;
  /* 0049abfa mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049abfd mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049ac00 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ac02 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ac05 mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049ac08 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ac0a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049ac0d jmp 0x49ac44 */ goto L_0049ac44;
L_0049ac0f:;
  /* 0049ac0f mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ac12 shl esi, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049ac15 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049ac17 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ac19 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ac1b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049ac1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ac1f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049ac21 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049ac23 call 0x49af40 */ esp -= 4; M32(esp) = 0x49ac28u; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49ac23u); RETCHK(0x49ac28u, 0x49ac23u); LOADALL;
  /* 0049ac28 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049ac2a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049ac2d mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049ac30 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049ac32 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ac35 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049ac37 call 0x49adc0 */ esp -= 4; M32(esp) = 0x49ac3cu; SAVEALL; F_0049adc0(c); ABI_CHECK(0x49adc0u, 0x49ac37u); RETCHK(0x49ac3cu, 0x49ac37u); LOADALL;
  /* 0049ac3c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049ac3f lea edx, [eax + esi] */ edx = (u32)((u32)(eax + esi));
  /* 0049ac42 mov eax, esi */ { eax = (u32)(esi); }
L_0049ac44:;
  /* 0049ac44 lea ebx, [ebp - 0x94] */ ebx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049ac4a call 0x49ada0 */ esp -= 4; M32(esp) = 0x49ac4fu; SAVEALL; F_0049ada0(c); ABI_CHECK(0x49ada0u, 0x49ac4au); RETCHK(0x49ac4fu, 0x49ac4au); LOADALL;
L_0049ac4f:;
  /* 0049ac4f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049ac52 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049ac59 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049ac5c call 0x61af31 */ esp -= 4; M32(esp) = 0x49ac61u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49ac5cu); RETCHK(0x49ac61u, 0x49ac5cu); LOADALL;
  /* 0049ac61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ac62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049ac63 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049ac64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049ac66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049ac67 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049ab97(CPU *c) {
  NATIVE_HOOK(0x49ab97u) REGS; LOADALL;
L_0049ab97:;
  /* 0049ab97 mov edx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); edx = (u32)(M32(m_)); }
  /* 0049ab9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ab9e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49aba3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49ab9eu); RETCHK(0x49aba3u, 0x49ab9eu); LOADALL;
  /* 0049aba3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049aba6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049aba8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049abaa call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049abaf mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049abb2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049abb5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049abb7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049abb9 sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049abbc cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049abbe jae 0x49ac0f */ if (!CF_) goto L_0049ac0f;
  /* 0049abc0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049abc3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049abc5 shl eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049abc8 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049abcb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049abcd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049abce call 0x49af40 */ esp -= 4; M32(esp) = 0x49abd3u; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49abceu); RETCHK(0x49abd3u, 0x49abceu); LOADALL;
  /* 0049abd3 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049abda mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049abdd mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049abe0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049abe3 mov edx, eax */ { edx = (u32)(eax); }
  /* 0049abe5 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049abe7 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049abea sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049abec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049abed lea ebx, [ebp - 0x94] */ ebx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049abf3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049abf5 call 0x49aeb0 */ esp -= 4; M32(esp) = 0x49abfau; SAVEALL; F_0049aeb0(c); ABI_CHECK(0x49aeb0u, 0x49abf5u); RETCHK(0x49abfau, 0x49abf5u); LOADALL;
  /* 0049abfa mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049abfd mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049ac00 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ac02 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ac05 mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049ac08 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ac0a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049ac0d jmp 0x49ac44 */ goto L_0049ac44;
L_0049ac0f:;
  /* 0049ac0f mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ac12 shl esi, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049ac15 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049ac17 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ac19 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ac1b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049ac1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ac1f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049ac21 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049ac23 call 0x49af40 */ esp -= 4; M32(esp) = 0x49ac28u; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49ac23u); RETCHK(0x49ac28u, 0x49ac23u); LOADALL;
  /* 0049ac28 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049ac2a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049ac2d mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049ac30 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049ac32 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ac35 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049ac37 call 0x49adc0 */ esp -= 4; M32(esp) = 0x49ac3cu; SAVEALL; F_0049adc0(c); ABI_CHECK(0x49adc0u, 0x49ac37u); RETCHK(0x49ac3cu, 0x49ac37u); LOADALL;
  /* 0049ac3c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049ac3f lea edx, [eax + esi] */ edx = (u32)((u32)(eax + esi));
  /* 0049ac42 mov eax, esi */ { eax = (u32)(esi); }
L_0049ac44:;
  /* 0049ac44 lea ebx, [ebp - 0x94] */ ebx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049ac4a call 0x49ada0 */ esp -= 4; M32(esp) = 0x49ac4fu; SAVEALL; F_0049ada0(c); ABI_CHECK(0x49ada0u, 0x49ac4au); RETCHK(0x49ac4fu, 0x49ac4au); LOADALL;
  /* 0049ac4f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049ac52 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049ac59 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049ac5c call 0x61af31 */ esp -= 4; M32(esp) = 0x49ac61u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49ac5cu); RETCHK(0x49ac61u, 0x49ac5cu); LOADALL;
  /* 0049ac61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ac62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049ac63 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049ac64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049ac66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049ac67 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049aba6(CPU *c) {
  NATIVE_HOOK(0x49aba6u) REGS; LOADALL;
L_0049aba6:;
  /* 0049aba6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049aba8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049abaa call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049abaf mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049abb2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049abb5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049abb7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049abb9 sar eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049abbc cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049abbe jae 0x49ac0f */ if (!CF_) goto L_0049ac0f;
  /* 0049abc0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049abc3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049abc5 shl eax, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049abc8 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049abcb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049abcd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049abce call 0x49af40 */ esp -= 4; M32(esp) = 0x49abd3u; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49abceu); RETCHK(0x49abd3u, 0x49abceu); LOADALL;
  /* 0049abd3 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049abda mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049abdd mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049abe0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049abe3 mov edx, eax */ { edx = (u32)(eax); }
  /* 0049abe5 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049abe7 sar edx, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049abea sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049abec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049abed lea ebx, [ebp - 0x94] */ ebx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049abf3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049abf5 call 0x49aeb0 */ esp -= 4; M32(esp) = 0x49abfau; SAVEALL; F_0049aeb0(c); ABI_CHECK(0x49aeb0u, 0x49abf5u); RETCHK(0x49abfau, 0x49abf5u); LOADALL;
  /* 0049abfa mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049abfd mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049ac00 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ac02 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ac05 mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049ac08 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ac0a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049ac0d jmp 0x49ac44 */ goto L_0049ac44;
L_0049ac0f:;
  /* 0049ac0f mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ac12 shl esi, 7 */ { u32 n_ = (7u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049ac15 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049ac17 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ac19 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ac1b mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049ac1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ac1f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049ac21 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049ac23 call 0x49af40 */ esp -= 4; M32(esp) = 0x49ac28u; SAVEALL; F_0049af40(c); ABI_CHECK(0x49af40u, 0x49ac23u); RETCHK(0x49ac28u, 0x49ac23u); LOADALL;
  /* 0049ac28 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049ac2a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049ac2d mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049ac30 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049ac32 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ac35 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049ac37 call 0x49adc0 */ esp -= 4; M32(esp) = 0x49ac3cu; SAVEALL; F_0049adc0(c); ABI_CHECK(0x49adc0u, 0x49ac37u); RETCHK(0x49ac3cu, 0x49ac37u); LOADALL;
  /* 0049ac3c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049ac3f lea edx, [eax + esi] */ edx = (u32)((u32)(eax + esi));
  /* 0049ac42 mov eax, esi */ { eax = (u32)(esi); }
L_0049ac44:;
  /* 0049ac44 lea ebx, [ebp - 0x94] */ ebx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 0049ac4a call 0x49ada0 */ esp -= 4; M32(esp) = 0x49ac4fu; SAVEALL; F_0049ada0(c); ABI_CHECK(0x49ada0u, 0x49ac4au); RETCHK(0x49ac4fu, 0x49ac4au); LOADALL;
  /* 0049ac4f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049ac52 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049ac59 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049ac5c call 0x61af31 */ esp -= 4; M32(esp) = 0x49ac61u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49ac5cu); RETCHK(0x49ac61u, 0x49ac5cu); LOADALL;
  /* 0049ac61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ac62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049ac63 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049ac64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049ac66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049ac67 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049ac70(CPU *c) {
  NATIVE_HOOK(0x49ac70u) REGS; LOADALL;
L_0049ac70:;
  /* 0049ac70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049ac71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049ac73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049ac75 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0049ac7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049ac80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ac81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049ac88 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ac8b push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 0049ac8d push 0x63e760 */ { u32 v_ = 0x63e760u; esp -= 4; M32(esp) = v_; }
  /* 0049ac92 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0049ac95 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0049ac9c mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
  /* 0049aca3 mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0049aca7 call 0x404420 */ esp -= 4; M32(esp) = 0x49acacu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49aca7u); RETCHK(0x49acacu, 0x49aca7u); LOADALL;
  /* 0049acac lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0049acaf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049acb0 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049acb3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049acba call 0x4040e0 */ esp -= 4; M32(esp) = 0x49acbfu; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x49acbau); RETCHK(0x49acbfu, 0x49acbau); LOADALL;
  /* 0049acbf push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 0049acc4 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049acc7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049acc8 mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 0049accf call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049acd4 int3 */ TRAP(0x49acd4u, "int3");
}

void F_0049ace0(CPU *c) {
  NATIVE_HOOK(0x49ace0u) REGS; LOADALL;
L_0049ace0:;
  /* 0049ace0 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ace2 je 0x49acfc */ if (ZF_) goto L_0049acfc;
  /* 0049ace4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ace5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049ace6:;
  /* 0049ace6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ace8 add eax, 0x8c */ { u32 a_ = eax, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049aced cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049acef mov ecx, 0x23 */ { ecx = (u32)(0x23u); }
  /* 0049acf4 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049acf6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049acf8 jne 0x49ace6 */ if (!ZF_) goto L_0049ace6;
  /* 0049acfa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049acfb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049acfc:;
  /* 0049acfc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ad00(CPU *c) {
  NATIVE_HOOK(0x49ad00u) REGS; LOADALL;
L_0049ad00:;
  /* 0049ad00 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad02 je 0x49ad1c */ if (ZF_) goto L_0049ad1c;
  /* 0049ad04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ad05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049ad06:;
  /* 0049ad06 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ad08 add eax, 0x88 */ { u32 a_ = eax, b_ = 0x88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ad0d cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad0f mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 0049ad14 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ad16 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049ad18 jne 0x49ad06 */ if (!ZF_) goto L_0049ad06;
  /* 0049ad1a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ad1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ad1c:;
  /* 0049ad1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ad20(CPU *c) {
  NATIVE_HOOK(0x49ad20u) REGS; LOADALL;
L_0049ad20:;
  /* 0049ad20 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad22 je 0x49ad4c */ if (ZF_) goto L_0049ad4c;
  /* 0049ad24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ad25 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049ad26 jmp 0x49ad30 */ goto L_0049ad30;
L_0049ad30:;
  /* 0049ad30 sub edx, 0x88 */ { u32 a_ = edx, b_ = 0x88u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ad36 sub eax, 0x88 */ { u32 a_ = eax, b_ = 0x88u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ad3b cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad3d mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 0049ad42 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049ad44 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ad46 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049ad48 jne 0x49ad30 */ if (!ZF_) goto L_0049ad30;
  /* 0049ad4a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ad4b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ad4c:;
  /* 0049ad4c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ad50(CPU *c) {
  NATIVE_HOOK(0x49ad50u) REGS; LOADALL;
L_0049ad50:;
  /* 0049ad50 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad52 je 0x49ad6c */ if (ZF_) goto L_0049ad6c;
  /* 0049ad54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ad55 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049ad56:;
  /* 0049ad56 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ad58 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ad5d cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad5f mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 0049ad64 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ad66 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049ad68 jne 0x49ad56 */ if (!ZF_) goto L_0049ad56;
  /* 0049ad6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ad6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ad6c:;
  /* 0049ad6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ad70(CPU *c) {
  NATIVE_HOOK(0x49ad70u) REGS; LOADALL;
L_0049ad70:;
  /* 0049ad70 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad72 je 0x49ad9c */ if (ZF_) goto L_0049ad9c;
  /* 0049ad74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ad75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049ad76 jmp 0x49ad80 */ goto L_0049ad80;
L_0049ad80:;
  /* 0049ad80 sub edx, 0x84 */ { u32 a_ = edx, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ad86 sub eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ad8b cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ad8d mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 0049ad92 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049ad94 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ad96 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049ad98 jne 0x49ad80 */ if (!ZF_) goto L_0049ad80;
  /* 0049ad9a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ad9b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ad9c:;
  /* 0049ad9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ada0(CPU *c) {
  NATIVE_HOOK(0x49ada0u) REGS; LOADALL;
L_0049ada0:;
  /* 0049ada0 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ada2 je 0x49adbc */ if (ZF_) goto L_0049adbc;
  /* 0049ada4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ada5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049ada6:;
  /* 0049ada6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ada8 add eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049adad cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049adaf mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0049adb4 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049adb6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049adb8 jne 0x49ada6 */ if (!ZF_) goto L_0049ada6;
  /* 0049adba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049adbb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049adbc:;
  /* 0049adbc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049adc0(CPU *c) {
  NATIVE_HOOK(0x49adc0u) REGS; LOADALL;
L_0049adc0:;
  /* 0049adc0 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049adc2 je 0x49adec */ if (ZF_) goto L_0049adec;
  /* 0049adc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049adc5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049adc6 jmp 0x49add0 */ goto L_0049add0;
L_0049add0:;
  /* 0049add0 sub edx, 0x80 */ { u32 a_ = edx, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049add6 sub eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049addb cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049addd mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0049ade2 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049ade4 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ade6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049ade8 jne 0x49add0 */ if (!ZF_) goto L_0049add0;
  /* 0049adea pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049adeb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049adec:;
  /* 0049adec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049adf0(CPU *c) {
  NATIVE_HOOK(0x49adf0u) REGS; LOADALL;
L_0049adf0:;
  /* 0049adf0 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049adf2 je 0x49ae1c */ if (ZF_) goto L_0049ae1c;
  /* 0049adf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049adf5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049adf6 jmp 0x49ae00 */ goto L_0049ae00;
L_0049ae00:;
  /* 0049ae00 sub edx, 0x8c */ { u32 a_ = edx, b_ = 0x8cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ae06 sub eax, 0x8c */ { u32 a_ = eax, b_ = 0x8cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ae0b cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ae0d mov ecx, 0x23 */ { ecx = (u32)(0x23u); }
  /* 0049ae12 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049ae14 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ae16 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0049ae18 jne 0x49ae00 */ if (!ZF_) goto L_0049ae00;
  /* 0049ae1a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ae1b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ae1c:;
  /* 0049ae1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ae20(CPU *c) {
  NATIVE_HOOK(0x49ae20u) REGS; LOADALL;
L_0049ae20:;
  /* 0049ae20 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ae22 jbe 0x49ae41 */ if ((CF_|ZF_)) goto L_0049ae41;
  /* 0049ae24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ae25 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049ae27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049ae28:;
  /* 0049ae28 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ae2a je 0x49ae37 */ if (ZF_) goto L_0049ae37;
  /* 0049ae2c mov ecx, 0x23 */ { ecx = (u32)(0x23u); }
  /* 0049ae31 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ae33 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ae35 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049ae37:;
  /* 0049ae37 add eax, 0x8c */ { u32 a_ = eax, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ae3c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049ae3d jne 0x49ae28 */ if (!ZF_) goto L_0049ae28;
  /* 0049ae3f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ae40 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ae41:;
  /* 0049ae41 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ae50(CPU *c) {
  NATIVE_HOOK(0x49ae50u) REGS; LOADALL;
L_0049ae50:;
  /* 0049ae50 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ae52 jbe 0x49ae71 */ if ((CF_|ZF_)) goto L_0049ae71;
  /* 0049ae54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ae55 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049ae57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049ae58:;
  /* 0049ae58 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ae5a je 0x49ae67 */ if (ZF_) goto L_0049ae67;
  /* 0049ae5c mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 0049ae61 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ae63 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ae65 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049ae67:;
  /* 0049ae67 add eax, 0x88 */ { u32 a_ = eax, b_ = 0x88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ae6c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049ae6d jne 0x49ae58 */ if (!ZF_) goto L_0049ae58;
  /* 0049ae6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ae70 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ae71:;
  /* 0049ae71 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ae80(CPU *c) {
  NATIVE_HOOK(0x49ae80u) REGS; LOADALL;
L_0049ae80:;
  /* 0049ae80 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ae82 jbe 0x49aea1 */ if ((CF_|ZF_)) goto L_0049aea1;
  /* 0049ae84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ae85 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049ae87 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049ae88:;
  /* 0049ae88 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ae8a je 0x49ae97 */ if (ZF_) goto L_0049ae97;
  /* 0049ae8c mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 0049ae91 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049ae93 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049ae95 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049ae97:;
  /* 0049ae97 add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ae9c dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049ae9d jne 0x49ae88 */ if (!ZF_) goto L_0049ae88;
  /* 0049ae9f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049aea0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049aea1:;
  /* 0049aea1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049aeb0(CPU *c) {
  NATIVE_HOOK(0x49aeb0u) REGS; LOADALL;
L_0049aeb0:;
  /* 0049aeb0 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aeb2 jbe 0x49aed1 */ if ((CF_|ZF_)) goto L_0049aed1;
  /* 0049aeb4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049aeb5 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049aeb7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049aeb8:;
  /* 0049aeb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aeba je 0x49aec7 */ if (ZF_) goto L_0049aec7;
  /* 0049aebc mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0049aec1 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049aec3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049aec5 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049aec7:;
  /* 0049aec7 add eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049aecc dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049aecd jne 0x49aeb8 */ if (!ZF_) goto L_0049aeb8;
  /* 0049aecf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049aed0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049aed1:;
  /* 0049aed1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049aee0(CPU *c) {
  NATIVE_HOOK(0x49aee0u) REGS; LOADALL;
L_0049aee0:;
  /* 0049aee0 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049aee2 je 0x49af06 */ if (ZF_) goto L_0049af06;
  /* 0049aee4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049aee5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049aee6:;
  /* 0049aee6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aee8 je 0x49aef5 */ if (ZF_) goto L_0049aef5;
  /* 0049aeea mov ecx, 0x22 */ { ecx = (u32)(0x22u); }
  /* 0049aeef mov esi, edx */ { esi = (u32)(edx); }
  /* 0049aef1 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049aef3 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049aef5:;
  /* 0049aef5 add edx, 0x88 */ { u32 a_ = edx, b_ = 0x88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049aefb add eax, 0x88 */ { u32 a_ = eax, b_ = 0x88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049af00 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049af02 jne 0x49aee6 */ if (!ZF_) goto L_0049aee6;
  /* 0049af04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049af05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049af06:;
  /* 0049af06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049af10(CPU *c) {
  NATIVE_HOOK(0x49af10u) REGS; LOADALL;
L_0049af10:;
  /* 0049af10 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049af12 je 0x49af36 */ if (ZF_) goto L_0049af36;
  /* 0049af14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049af15 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049af16:;
  /* 0049af16 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049af18 je 0x49af25 */ if (ZF_) goto L_0049af25;
  /* 0049af1a mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 0049af1f mov esi, edx */ { esi = (u32)(edx); }
  /* 0049af21 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049af23 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049af25:;
  /* 0049af25 add edx, 0x84 */ { u32 a_ = edx, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049af2b add eax, 0x84 */ { u32 a_ = eax, b_ = 0x84u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049af30 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049af32 jne 0x49af16 */ if (!ZF_) goto L_0049af16;
  /* 0049af34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049af35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049af36:;
  /* 0049af36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049af40(CPU *c) {
  NATIVE_HOOK(0x49af40u) REGS; LOADALL;
L_0049af40:;
  /* 0049af40 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049af42 je 0x49af66 */ if (ZF_) goto L_0049af66;
  /* 0049af44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049af45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049af46:;
  /* 0049af46 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049af48 je 0x49af55 */ if (ZF_) goto L_0049af55;
  /* 0049af4a mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 0049af4f mov esi, edx */ { esi = (u32)(edx); }
  /* 0049af51 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049af53 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049af55:;
  /* 0049af55 add edx, 0x80 */ { u32 a_ = edx, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049af5b add eax, 0x80 */ { u32 a_ = eax, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049af60 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049af62 jne 0x49af46 */ if (!ZF_) goto L_0049af46;
  /* 0049af64 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049af65 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049af66:;
  /* 0049af66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049af70(CPU *c) {
  NATIVE_HOOK(0x49af70u) REGS; LOADALL;
L_0049af70:;
  /* 0049af70 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049af72 je 0x49af96 */ if (ZF_) goto L_0049af96;
  /* 0049af74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049af75 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049af76:;
  /* 0049af76 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049af78 je 0x49af85 */ if (ZF_) goto L_0049af85;
  /* 0049af7a mov ecx, 0x23 */ { ecx = (u32)(0x23u); }
  /* 0049af7f mov esi, edx */ { esi = (u32)(edx); }
  /* 0049af81 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049af83 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_0049af85:;
  /* 0049af85 add edx, 0x8c */ { u32 a_ = edx, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049af8b add eax, 0x8c */ { u32 a_ = eax, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049af90 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049af92 jne 0x49af76 */ if (!ZF_) goto L_0049af76;
  /* 0049af94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049af95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049af96:;
  /* 0049af96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049afa0(CPU *c) {
  NATIVE_HOOK(0x49afa0u) REGS; LOADALL;
L_0049afa0:;
  /* 0049afa0 mov eax, dword ptr [esi + 0x1e0] */ { const u32 m_ = (u32)(esi + 0x1e0u); eax = (u32)(M32(m_)); }
  /* 0049afa6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049afa8 je 0x49afb3 */ if (ZF_) goto L_0049afb3;
  /* 0049afaa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049afab call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49afb0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49afabu); RETCHK(0x49afb0u, 0x49afabu); LOADALL;
  /* 0049afb0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049afb3:;
  /* 0049afb3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049afb4 mov dword ptr [esi + 0x1e0], 0 */ { const u32 m_ = (u32)(esi + 0x1e0u); M32(m_) = (u32)(0x0u); }
  /* 0049afbe mov dword ptr [esi + 0x1e4], 0 */ { const u32 m_ = (u32)(esi + 0x1e4u); M32(m_) = (u32)(0x0u); }
  /* 0049afc8 mov dword ptr [esi + 0x1e8], 0 */ { const u32 m_ = (u32)(esi + 0x1e8u); M32(m_) = (u32)(0x0u); }
  /* 0049afd2 call 0x4aad30 */ esp -= 4; M32(esp) = 0x49afd7u; SAVEALL; F_004aad30(c); ABI_CHECK(0x4aad30u, 0x49afd2u); RETCHK(0x49afd7u, 0x49afd2u); LOADALL;
  /* 0049afd7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049afe0(CPU *c) {
  NATIVE_HOOK(0x49afe0u) REGS; LOADALL;
L_0049afe0:;
  /* 0049afe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049afe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049afe3 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049afe7 jne 0x49afff */ if (!ZF_) goto L_0049afff;
  /* 0049afe9 mov eax, dword ptr [0x686a60] */ { const u32 m_ = (u32)(0x686a60u); eax = (u32)(M32(m_)); }
  /* 0049afee test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049aff0 jle 0x49afff */ if ((ZF_|LT_)) goto L_0049afff;
  /* 0049aff2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049aff3 call 0x4047e0 */ esp -= 4; M32(esp) = 0x49aff8u; SAVEALL; F_004047e0(c); ABI_CHECK(0x4047e0u, 0x49aff3u); RETCHK(0x49aff8u, 0x49aff3u); LOADALL;
  /* 0049aff8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049affa call 0x49c020 */ esp -= 4; M32(esp) = 0x49afffu; SAVEALL; F_0049c020(c); ABI_CHECK(0x49c020u, 0x49affau); RETCHK(0x49afffu, 0x49affau); LOADALL;
L_0049afff:;
  /* 0049afff mov dword ptr [0x686a60], 0xffffffff */ { const u32 m_ = (u32)(0x686a60u); M32(m_) = (u32)(0xffffffffu); }
  /* 0049b009 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b00a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049b010(CPU *c) {
  NATIVE_HOOK(0x49b010u) REGS; LOADALL;
L_0049b010:;
  /* 0049b010 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b011 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b013 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049b019 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049b01b push 0x61cd36 */ { u32 v_ = 0x61cd36u; esp -= 4; M32(esp) = v_; }
  /* 0049b020 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0049b022 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b023 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049b026 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049b02d mov dword ptr [eax], 0x64bf78 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x64bf78u); }
  /* 0049b033 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0049b036 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0049b039 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0049b03c mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0049b03f mov dword ptr [eax + 0x1c], 0xffffffff */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049b046 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0049b049 mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0049b04c mov edx, 0xf */ { edx = (u32)(0xfu); }
  /* 0049b051 mov dword ptr [eax + 0x3c], edx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(edx); }
  /* 0049b054 mov byte ptr [eax + 0x28], cl */ { const u32 m_ = (u32)(eax + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049b057 mov dword ptr [eax + 0x58], edx */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(edx); }
  /* 0049b05a mov dword ptr [eax + 0x54], ecx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(ecx); }
  /* 0049b05d mov byte ptr [eax + 0x44], cl */ { const u32 m_ = (u32)(eax + 0x44u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049b060 mov dword ptr [eax + 0x74], edx */ { const u32 m_ = (u32)(eax + 0x74u); M32(m_) = (u32)(edx); }
  /* 0049b063 mov dword ptr [eax + 0x70], ecx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(ecx); }
  /* 0049b066 mov byte ptr [eax + 0x60], cl */ { const u32 m_ = (u32)(eax + 0x60u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049b069 mov dword ptr [eax + 0x90], edx */ { const u32 m_ = (u32)(eax + 0x90u); M32(m_) = (u32)(edx); }
  /* 0049b06f mov dword ptr [eax + 0x8c], ecx */ { const u32 m_ = (u32)(eax + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 0049b075 mov byte ptr [eax + 0x7c], cl */ { const u32 m_ = (u32)(eax + 0x7cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049b078 mov dword ptr [eax + 0x94], ecx */ { const u32 m_ = (u32)(eax + 0x94u); M32(m_) = (u32)(ecx); }
  /* 0049b07e mov dword ptr [eax + 0x98], ecx */ { const u32 m_ = (u32)(eax + 0x98u); M32(m_) = (u32)(ecx); }
  /* 0049b084 mov dword ptr [eax + 0x9c], ecx */ { const u32 m_ = (u32)(eax + 0x9cu); M32(m_) = (u32)(ecx); }
  /* 0049b08a mov dword ptr [eax + 0xa0], ecx */ { const u32 m_ = (u32)(eax + 0xa0u); M32(m_) = (u32)(ecx); }
  /* 0049b090 mov dword ptr [eax + 0xa4], ecx */ { const u32 m_ = (u32)(eax + 0xa4u); M32(m_) = (u32)(ecx); }
  /* 0049b096 mov dword ptr [eax + 0xac], ecx */ { const u32 m_ = (u32)(eax + 0xacu); M32(m_) = (u32)(ecx); }
  /* 0049b09c mov dword ptr [eax + 0xb0], ecx */ { const u32 m_ = (u32)(eax + 0xb0u); M32(m_) = (u32)(ecx); }
  /* 0049b0a2 mov dword ptr [eax + 0xb4], ecx */ { const u32 m_ = (u32)(eax + 0xb4u); M32(m_) = (u32)(ecx); }
  /* 0049b0a8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049b0ab mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049b0b2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049b0b4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b0b5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049b140(CPU *c) {
  NATIVE_HOOK(0x49b140u) REGS; LOADALL;
L_0049b140:;
  /* 0049b140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b143 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b149 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049b14e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0049b151 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0049b157 push 0x64bfdc */ { u32 v_ = 0x64bfdcu; esp -= 4; M32(esp) = v_; }
  /* 0049b15c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b15d call 0x5fe9aa */ esp -= 4; M32(esp) = 0x49b162u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x49b15du); RETCHK(0x49b162u, 0x49b15du); LOADALL;
  /* 0049b162 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b165 lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0049b16b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b16c call dword ptr [0x62e198] */ { const u32 m_ = (u32)(0x62e198u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b172u; SAVEALL; call_ind(c, t_); RETCHK(0x49b172u, 0x49b16cu); LOADALL; }
  /* 0049b172 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049b174 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049b177 je 0x49b1c2 */ if (ZF_) goto L_0049b1c2;
  /* 0049b179 push 0x64bfc8 */ { u32 v_ = 0x64bfc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b17e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b17f call dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b185u; SAVEALL; call_ind(c, t_); RETCHK(0x49b185u, 0x49b17fu); LOADALL; }
  /* 0049b185 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049b187 jne 0x49b1a8 */ if (!ZF_) goto L_0049b1a8;
  /* 0049b189 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049b18c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049b18d call dword ptr [0x62e194] */ { const u32 m_ = (u32)(0x62e194u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b193u; SAVEALL; call_ind(c, t_); RETCHK(0x49b193u, 0x49b18du); LOADALL; }
  /* 0049b193 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0049b19a xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0049b19c mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0049b19f call 0x61af31 */ esp -= 4; M32(esp) = 0x49b1a4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49b19fu); RETCHK(0x49b1a4u, 0x49b19fu); LOADALL;
  /* 0049b1a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049b1a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b1a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049b1a8:;
  /* 0049b1a8 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x49b1aau; SAVEALL; call_ind(c, t_); RETCHK(0x49b1aau, 0x49b1a8u); LOADALL; }
  /* 0049b1aa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049b1ac mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0049b1af jne 0x49b1d0 */ if (!ZF_) goto L_0049b1d0;
  /* 0049b1b1 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049b1b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b1b5 call dword ptr [0x62e194] */ { const u32 m_ = (u32)(0x62e194u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b1bbu; SAVEALL; call_ind(c, t_); RETCHK(0x49b1bbu, 0x49b1b5u); LOADALL; }
  /* 0049b1bb mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
L_0049b1c2:;
  /* 0049b1c2 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0049b1c4 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0049b1c7 call 0x61af31 */ esp -= 4; M32(esp) = 0x49b1ccu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49b1c7u); RETCHK(0x49b1ccu, 0x49b1c7u); LOADALL;
  /* 0049b1cc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049b1ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b1cf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049b1d0:;
  /* 0049b1d0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0049b1d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049b1d3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049b1d5 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b1d7u; SAVEALL; call_ind(c, t_); RETCHK(0x49b1d7u, 0x49b1d5u); LOADALL; }
  /* 0049b1d7 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0049b1da mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0049b1dc call 0x61af31 */ esp -= 4; M32(esp) = 0x49b1e1u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49b1dcu); RETCHK(0x49b1e1u, 0x49b1dcu); LOADALL;
  /* 0049b1e1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049b1e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b1e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049b1f0(CPU *c) {
  NATIVE_HOOK(0x49b1f0u) REGS; LOADALL;
L_0049b1f0:;
  /* 0049b1f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b1f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b1f3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b1f5 call 0x4019a0 */ esp -= 4; M32(esp) = 0x49b1fau; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x49b1f5u); RETCHK(0x49b1fau, 0x49b1f5u); LOADALL;
  /* 0049b1fa mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0049b200 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b203 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049b205 je 0x49b21d */ if (ZF_) goto L_0049b21d;
  /* 0049b207 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049b20a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049b20d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b20e call 0x55f570 */ esp -= 4; M32(esp) = 0x49b213u; SAVEALL; F_0055f570(c); ABI_CHECK(0x55f570u, 0x49b20eu); RETCHK(0x49b213u, 0x49b20eu); LOADALL;
  /* 0049b213 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049b215 jge 0x49b21d */ if (!LT_) goto L_0049b21d;
  /* 0049b217 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0049b219 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b21a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0049b21d:;
  /* 0049b21d mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0049b21f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b220 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0049b230(CPU *c) {
  NATIVE_HOOK(0x49b230u) REGS; LOADALL;
L_0049b230:;
  /* 0049b230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b233 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049b236 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049b238 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b239 jmp dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0049b240(CPU *c) {
  NATIVE_HOOK(0x49b240u) REGS; LOADALL;
L_0049b240:;
  /* 0049b240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b243 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049b246 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049b248 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049b249 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049b24b jne 0x49b2aa */ if (!ZF_) goto L_0049b2aa;
  /* 0049b24d push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b252 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b257 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b258 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b259 push 0x281 */ { u32 v_ = 0x281u; esp -= 4; M32(esp) = v_; }
  /* 0049b25e push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049b263 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b269u; SAVEALL; call_ind(c, t_); RETCHK(0x49b269u, 0x49b263u); LOADALL; }
  /* 0049b269 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b26a push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049b26c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b26e call 0x50b090 */ esp -= 4; M32(esp) = 0x49b273u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49b26eu); RETCHK(0x49b273u, 0x49b26eu); LOADALL;
  /* 0049b273 mov al, byte ptr [0x7a6bb0] */ { const u32 m_ = (u32)(0x7a6bb0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b278 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b27b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b27d je 0x49b29e */ if (ZF_) goto L_0049b29e;
  /* 0049b27f mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b285 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049b287 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b289 call 0x4a08f0 */ esp -= 4; M32(esp) = 0x49b28eu; SAVEALL; F_004a08f0(c); ABI_CHECK(0x4a08f0u, 0x49b289u); RETCHK(0x49b28eu, 0x49b289u); LOADALL;
  /* 0049b28e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049b291 mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b297 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b298 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b299 call 0x4a1e50 */ esp -= 4; M32(esp) = 0x49b29eu; SAVEALL; F_004a1e50(c); ABI_CHECK(0x4a1e50u, 0x49b299u); RETCHK(0x49b29eu, 0x49b299u); LOADALL;
L_0049b29e:;
  /* 0049b29e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049b2a0 call 0x49c080 */ esp -= 4; M32(esp) = 0x49b2a5u; SAVEALL; F_0049c080(c); ABI_CHECK(0x49c080u, 0x49b2a0u); RETCHK(0x49b2a5u, 0x49b2a0u); LOADALL;
  /* 0049b2a5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049b2a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b2a7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0049b2aa:;
  /* 0049b2aa cmp eax, 0x12 */ { u32 a_ = eax, b_ = 0x12u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b2ad jne 0x49b2df */ if (!ZF_) goto L_0049b2df;
  /* 0049b2af push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b2b4 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b2b9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b2bb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b2bd push 0x2bd */ { u32 v_ = 0x2bdu; esp -= 4; M32(esp) = v_; }
L_0049b2c2:;
  /* 0049b2c2 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049b2c7 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b2cdu; SAVEALL; call_ind(c, t_); RETCHK(0x49b2cdu, 0x49b2c7u); LOADALL; }
  /* 0049b2cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b2ce push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049b2d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b2d2 call 0x50b090 */ esp -= 4; M32(esp) = 0x49b2d7u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49b2d2u); RETCHK(0x49b2d7u, 0x49b2d2u); LOADALL;
  /* 0049b2d7 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b2da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049b2db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b2dc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0049b2df:;
  /* 0049b2df cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b2e2 jne 0x49b2f9 */ if (!ZF_) goto L_0049b2f9;
  /* 0049b2e4 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b2e9 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b2ee push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b2f0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b2f2 push 0x2be */ { u32 v_ = 0x2beu; esp -= 4; M32(esp) = v_; }
  /* 0049b2f7 jmp 0x49b2c2 */ goto L_0049b2c2;
L_0049b2f9:;
  /* 0049b2f9 cmp eax, 0x13 */ { u32 a_ = eax, b_ = 0x13u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b2fc jne 0x49b313 */ if (!ZF_) goto L_0049b313;
  /* 0049b2fe push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b303 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b308 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b30a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b30c push 0x2bf */ { u32 v_ = 0x2bfu; esp -= 4; M32(esp) = v_; }
  /* 0049b311 jmp 0x49b2c2 */ goto L_0049b2c2;
L_0049b313:;
  /* 0049b313 cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b316 jne 0x49b32d */ if (!ZF_) goto L_0049b32d;
  /* 0049b318 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b31d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b322 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b324 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b326 push 0x2c0 */ { u32 v_ = 0x2c0u; esp -= 4; M32(esp) = v_; }
  /* 0049b32b jmp 0x49b2c2 */ goto L_0049b2c2;
L_0049b32d:;
  /* 0049b32d cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b330 jne 0x49b34a */ if (!ZF_) goto L_0049b34a;
  /* 0049b332 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b337 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b33c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b33e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b340 push 0x2c1 */ { u32 v_ = 0x2c1u; esp -= 4; M32(esp) = v_; }
  /* 0049b345 jmp 0x49b2c2 */ goto L_0049b2c2;
L_0049b34a:;
  /* 0049b34a cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b34d jne 0x49b367 */ if (!ZF_) goto L_0049b367;
  /* 0049b34f push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b354 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b359 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b35b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b35d push 0x2c2 */ { u32 v_ = 0x2c2u; esp -= 4; M32(esp) = v_; }
  /* 0049b362 jmp 0x49b2c2 */ goto L_0049b2c2;
L_0049b367:;
  /* 0049b367 cmp eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b36a jne 0x49b384 */ if (!ZF_) goto L_0049b384;
  /* 0049b36c push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b371 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b376 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b378 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b37a push 0x2c3 */ { u32 v_ = 0x2c3u; esp -= 4; M32(esp) = v_; }
  /* 0049b37f jmp 0x49b2c2 */ goto L_0049b2c2;
L_0049b384:;
  /* 0049b384 call 0x49c140 */ esp -= 4; M32(esp) = 0x49b389u; SAVEALL; F_0049c140(c); ABI_CHECK(0x49c140u, 0x49b384u); RETCHK(0x49b389u, 0x49b384u); LOADALL;
  /* 0049b389 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049b38a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b38b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049b390(CPU *c) {
  NATIVE_HOOK(0x49b390u) REGS; LOADALL;
L_0049b390:;
  /* 0049b390 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b391 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b393 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049b395 push 0x6205f8 */ { u32 v_ = 0x6205f8u; esp -= 4; M32(esp) = v_; }
  /* 0049b39a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049b3a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b3a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049b3a8 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b3ab mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049b3b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049b3b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049b3b2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049b3b3 lea edi, [ecx + 0xc] */ edi = (u32)((u32)(ecx + 0xcu));
  /* 0049b3b6 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049b3b9 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049b3bc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049b3be cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b3c0 je 0x49b406 */ if (ZF_) goto L_0049b406;
  /* 0049b3c2 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049b3c5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b3c7 mov dword ptr [ebp - 0x44], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ecx); }
  /* 0049b3ca je 0x49b3fa */ if (ZF_) goto L_0049b3fa;
  /* 0049b3cc lea esi, [eax + 0x1c] */ esi = (u32)((u32)(eax + 0x1cu));
  /* 0049b3cf nop */ ;
L_0049b3d0:;
  /* 0049b3d0 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b3d3 jb 0x49b3e4 */ if (CF_) goto L_0049b3e4;
  /* 0049b3d5 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049b3d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b3d9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b3deu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b3d9u); RETCHK(0x49b3deu, 0x49b3d9u); LOADALL;
  /* 0049b3de mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0049b3e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b3e4:;
  /* 0049b3e4 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0049b3ea mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049b3ed mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b3f0 add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049b3f3 lea eax, [esi - 0x1c] */ eax = (u32)((u32)(esi + 0xffffffe4u));
  /* 0049b3f6 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b3f8 jne 0x49b3d0 */ if (!ZF_) goto L_0049b3d0;
L_0049b3fa:;
  /* 0049b3fa mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049b3fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b3fe call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b403u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b3feu); RETCHK(0x49b403u, 0x49b3feu); LOADALL;
  /* 0049b403 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b406:;
  /* 0049b406 movzx eax, word ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M16(m_)); }
  /* 0049b40a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b40c mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0049b40f mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049b412 mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0049b415 jle 0x49b4c5 */ if ((ZF_|LT_)) goto L_0049b4c5;
  /* 0049b41b mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049b41e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049b421 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049b424 jmp 0x49b430 */ goto L_0049b430;
L_0049b430:;
  /* 0049b430 mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 0049b437 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 0049b43a mov byte ptr [ebp - 0x38], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b43d mov byte ptr [ebp - 0x1c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b440 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0049b443 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0049b446 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049b449 movzx edx, word ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M16(m_)); }
  /* 0049b44d mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0049b450 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049b452 mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 0049b455 mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 0049b458 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0049b45b jmp 0x49b460 */ goto L_0049b460;
L_0049b460:;
  /* 0049b460 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b462 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b463 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0049b465 jne 0x49b460 */ if (!ZF_) goto L_0049b460;
  /* 0049b467 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049b469 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b46a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049b46b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0049b46e call 0x404420 */ esp -= 4; M32(esp) = 0x49b473u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49b46eu); RETCHK(0x49b473u, 0x49b46eu); LOADALL;
  /* 0049b473 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049b476 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0049b479 mov dl, byte ptr [esi + 0x22] */ { const u32 m_ = (u32)(esi + 0x22u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b47c mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0049b47f mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0049b482 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0049b485 mov eax, edi */ { eax = (u32)(edi); }
  /* 0049b487 mov byte ptr [ebp - 0x1c], dl */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049b48a call 0x49c860 */ esp -= 4; M32(esp) = 0x49b48fu; SAVEALL; F_0049c860(c); ABI_CHECK(0x49c860u, 0x49b48au); RETCHK(0x49b48fu, 0x49b48au); LOADALL;
  /* 0049b48f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049b496 cmp dword ptr [ebp - 0x24], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b49a jb 0x49b4a8 */ if (CF_) goto L_0049b4a8;
  /* 0049b49c mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 0049b49f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b4a0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b4a5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b4a0u); RETCHK(0x49b4a5u, 0x49b4a0u); LOADALL;
  /* 0049b4a5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b4a8:;
  /* 0049b4a8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049b4ab add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049b4ae dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049b4af mov dword ptr [ebp - 0x24], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xfu); }
  /* 0049b4b6 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 0049b4b9 mov byte ptr [ebp - 0x38], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b4bc mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049b4bf jne 0x49b430 */ if (!ZF_) goto L_0049b430;
L_0049b4c5:;
  /* 0049b4c5 mov al, byte ptr [0x7a6bb0] */ { const u32 m_ = (u32)(0x7a6bb0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b4ca pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049b4cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049b4cc cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0049b4ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049b4cf je 0x49b4f7 */ if (ZF_) goto L_0049b4f7;
  /* 0049b4d1 mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b4d7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049b4d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b4da call 0x4a1890 */ esp -= 4; M32(esp) = 0x49b4dfu; SAVEALL; F_004a1890(c); ABI_CHECK(0x4a1890u, 0x49b4dau); RETCHK(0x49b4dfu, 0x49b4dau); LOADALL;
  /* 0049b4df mov edx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); edx = (u32)(M32(m_)); }
  /* 0049b4e5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049b4e6 call 0x4a19f0 */ esp -= 4; M32(esp) = 0x49b4ebu; SAVEALL; F_004a19f0(c); ABI_CHECK(0x4a19f0u, 0x49b4e6u); RETCHK(0x49b4ebu, 0x49b4e6u); LOADALL;
  /* 0049b4eb mov eax, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); eax = (u32)(M32(m_)); }
  /* 0049b4f0 mov byte ptr [eax + 0x1c6], 1 */ { const u32 m_ = (u32)(eax + 0x1c6u); M8(m_) = (u8)(0x1u); }
L_0049b4f7:;
  /* 0049b4f7 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049b4fa mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049b501 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049b504 call 0x61af31 */ esp -= 4; M32(esp) = 0x49b509u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49b504u); RETCHK(0x49b509u, 0x49b504u); LOADALL;
  /* 0049b509 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049b50b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b50c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049b510(CPU *c) {
  NATIVE_HOOK(0x49b510u) REGS; LOADALL;
L_0049b510:;
  /* 0049b510 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b511 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b513 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049b515 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 0049b51a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049b520 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b521 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049b528 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b52b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049b530 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049b531 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049b532 mov edi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); edi = (u32)(M32(m_)); }
  /* 0049b538 push 0x284 */ { u32 v_ = 0x284u; esp -= 4; M32(esp) = v_; }
  /* 0049b53d push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049b542 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049b545 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x49b547u; SAVEALL; call_ind(c, t_); RETCHK(0x49b547u, 0x49b545u); LOADALL; }
  /* 0049b547 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049b549 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0049b550 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0049b557 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0049b55b lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 0049b55e mov edi, edi */ { edi = (u32)(edi); }
L_0049b560:;
  /* 0049b560 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b562 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b563 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b565 jne 0x49b560 */ if (!ZF_) goto L_0049b560;
  /* 0049b567 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049b569 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b56a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b56b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049b56e call 0x404420 */ esp -= 4; M32(esp) = 0x49b573u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49b56eu); RETCHK(0x49b573u, 0x49b56eu); LOADALL;
  /* 0049b573 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049b576 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049b578 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049b57f lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0049b582:;
  /* 0049b582 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b584 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b585 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b587 jne 0x49b582 */ if (!ZF_) goto L_0049b582;
  /* 0049b589 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049b58b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b58c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049b58f call 0x40d260 */ esp -= 4; M32(esp) = 0x49b594u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x49b58fu); RETCHK(0x49b594u, 0x49b58fu); LOADALL;
  /* 0049b594 push 0x285 */ { u32 v_ = 0x285u; esp -= 4; M32(esp) = v_; }
  /* 0049b599 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049b59e call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x49b5a0u; SAVEALL; call_ind(c, t_); RETCHK(0x49b5a0u, 0x49b59eu); LOADALL; }
  /* 0049b5a0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049b5a2 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0049b5a5:;
  /* 0049b5a5 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b5a7 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b5a8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b5aa jne 0x49b5a5 */ if (!ZF_) goto L_0049b5a5;
  /* 0049b5ac sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049b5ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b5af lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049b5b2 call 0x40d260 */ esp -= 4; M32(esp) = 0x49b5b7u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x49b5b2u); RETCHK(0x49b5b7u, 0x49b5b2u); LOADALL;
  /* 0049b5b7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049b5ba mov dword ptr [0x686a60], eax */ { const u32 m_ = (u32)(0x686a60u); M32(m_) = (u32)(eax); }
  /* 0049b5bf mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049b5c2 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0049b5c7 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b5c9 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0049b5cc jae 0x49b5d1 */ if (!CF_) goto L_0049b5d1;
  /* 0049b5ce lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0049b5d1:;
  /* 0049b5d1 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049b5d6 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049b5db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b5dd push 0x49afe0 */ { u32 v_ = 0x49afe0u; esp -= 4; M32(esp) = v_; }
  /* 0049b5e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b5e3 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0049b5e5 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049b5e7 call 0x50b090 */ esp -= 4; M32(esp) = 0x49b5ecu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49b5e7u); RETCHK(0x49b5ecu, 0x49b5e7u); LOADALL;
  /* 0049b5ec mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049b5ef add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b5f2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049b5f3 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b5f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049b5f6 jb 0x49b604 */ if (CF_) goto L_0049b604;
  /* 0049b5f8 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0049b5fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b5fc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49b601u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49b5fcu); RETCHK(0x49b601u, 0x49b5fcu); LOADALL;
  /* 0049b601 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049b604:;
  /* 0049b604 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049b607 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049b60e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049b611 call 0x61af31 */ esp -= 4; M32(esp) = 0x49b616u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49b611u); RETCHK(0x49b616u, 0x49b611u); LOADALL;
  /* 0049b616 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049b618 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b619 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049b620(CPU *c) {
  NATIVE_HOOK(0x49b620u) REGS; LOADALL;
L_0049b620:;
  /* 0049b620 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049b621 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049b623 sub esp, 0xa4 */ { u32 a_ = esp, b_ = 0xa4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b629 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049b62e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049b62f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049b630 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0049b633 mov al, byte ptr [0x7a6bb0] */ { const u32 m_ = (u32)(0x7a6bb0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b638 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b63a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049b63b mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049b63d mov dword ptr [ebp - 0xa0], edi */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(edi); }
  /* 0049b643 je 0x49b9e4 */ if (ZF_) goto L_0049b9e4;
  /* 0049b649 mov eax, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); eax = (u32)(M32(m_)); }
  /* 0049b64e mov ecx, dword ptr [eax + 0xd4] */ { const u32 m_ = (u32)(eax + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 0049b654 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049b656 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b659u; SAVEALL; call_ind(c, t_); RETCHK(0x49b659u, 0x49b656u); LOADALL; }
  /* 0049b659 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b65b je 0x49b9e4 */ if (ZF_) goto L_0049b9e4;
  /* 0049b661 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049b664 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0049b666 mov dword ptr [edi + 0x1c], eax */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0049b669 movzx ecx, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M16(m_)); }
  /* 0049b66d mov dword ptr [edi + 0x20], ecx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0049b670 mov edx, dword ptr [esi + 0x12c] */ { const u32 m_ = (u32)(esi + 0x12cu); edx = (u32)(M32(m_)); }
  /* 0049b676 mov dword ptr [edi + 0x98], edx */ { const u32 m_ = (u32)(edi + 0x98u); M32(m_) = (u32)(edx); }
  /* 0049b67c mov eax, dword ptr [esi + 0x128] */ { const u32 m_ = (u32)(esi + 0x128u); eax = (u32)(M32(m_)); }
  /* 0049b682 mov dword ptr [edi + 0x94], eax */ { const u32 m_ = (u32)(edi + 0x94u); M32(m_) = (u32)(eax); }
  /* 0049b688 mov ecx, dword ptr [esi + 0x134] */ { const u32 m_ = (u32)(esi + 0x134u); ecx = (u32)(M32(m_)); }
  /* 0049b68e lea edx, [esi + 0x27] */ edx = (u32)((u32)(esi + 0x27u));
  /* 0049b691 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049b693 mov dword ptr [edi + 0x9c], ecx */ { const u32 m_ = (u32)(edi + 0x9cu); M32(m_) = (u32)(ecx); }
  /* 0049b699 lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 0049b69c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0049b6a0:;
  /* 0049b6a0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b6a2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b6a3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b6a5 jne 0x49b6a0 */ if (!ZF_) goto L_0049b6a0;
  /* 0049b6a7 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049b6a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b6aa lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 0049b6ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049b6ae mov dword ptr [ebp - 0x98], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(ecx); }
  /* 0049b6b4 call 0x404420 */ esp -= 4; M32(esp) = 0x49b6b9u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49b6b4u); RETCHK(0x49b6b9u, 0x49b6b4u); LOADALL;
  /* 0049b6b9 lea edx, [esi + 7] */ edx = (u32)((u32)(esi + 0x7u));
  /* 0049b6bc mov eax, edx */ { eax = (u32)(edx); }
  /* 0049b6be lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_0049b6c1:;
  /* 0049b6c1 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b6c3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b6c4 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b6c6 jne 0x49b6c1 */ if (!ZF_) goto L_0049b6c1;
  /* 0049b6c8 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049b6ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b6cb lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 0049b6ce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049b6cf mov dword ptr [ebp - 0xa4], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); M32(m_) = (u32)(ecx); }
  /* 0049b6d5 call 0x404420 */ esp -= 4; M32(esp) = 0x49b6dau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49b6d5u); RETCHK(0x49b6dau, 0x49b6d5u); LOADALL;
  /* 0049b6da lea edx, [esi + 0x174] */ edx = (u32)((u32)(esi + 0x174u));
  /* 0049b6e0 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049b6e2 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_0049b6e5:;
  /* 0049b6e5 mov bl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b6e7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b6e8 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b6ea jne 0x49b6e5 */ if (!ZF_) goto L_0049b6e5;
  /* 0049b6ec sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049b6ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b6ef lea ecx, [edi + 0x5c] */ ecx = (u32)((u32)(edi + 0x5cu));
  /* 0049b6f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049b6f3 mov dword ptr [ebp - 0x94], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(ecx); }
  /* 0049b6f9 call 0x404420 */ esp -= 4; M32(esp) = 0x49b6feu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49b6f9u); RETCHK(0x49b6feu, 0x49b6f9u); LOADALL;
  /* 0049b6fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b700 lea ebx, [edi + 0x78] */ ebx = (u32)((u32)(edi + 0x78u));
  /* 0049b703 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0049b708 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049b70a call 0x404420 */ esp -= 4; M32(esp) = 0x49b70fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49b70au); RETCHK(0x49b70fu, 0x49b70au); LOADALL;
  /* 0049b70f mov eax, dword ptr [esi + 0x1118] */ { const u32 m_ = (u32)(esi + 0x1118u); eax = (u32)(M32(m_)); }
  /* 0049b715 mov edx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0049b718 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049b71a mov dword ptr [ebp - 0x88], eax */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(eax); }
  /* 0049b720 mov dword ptr [edi + 0xa0], eax */ { const u32 m_ = (u32)(edi + 0xa0u); M32(m_) = (u32)(eax); }
  /* 0049b726 call 0x49c120 */ esp -= 4; M32(esp) = 0x49b72bu; SAVEALL; F_0049c120(c); ABI_CHECK(0x49c120u, 0x49b726u); RETCHK(0x49b72bu, 0x49b726u); LOADALL;
  /* 0049b72b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0049b72d cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b72f je 0x49b742 */ if (ZF_) goto L_0049b742;
  /* 0049b731 mov ecx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); ecx = (u32)(M32(m_)); }
  /* 0049b737 sub ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049b73a mov dword ptr [edi + 0xa4], ecx */ { const u32 m_ = (u32)(edi + 0xa4u); M32(m_) = (u32)(ecx); }
  /* 0049b740 jmp 0x49b748 */ goto L_0049b748;
L_0049b742:;
  /* 0049b742 mov dword ptr [edi + 0xa4], edx */ { const u32 m_ = (u32)(edi + 0xa4u); M32(m_) = (u32)(edx); }
L_0049b748:;
  /* 0049b748 cmp word ptr [esi + 0x288], dx */ { const u32 m_ = (u32)(esi + 0x288u); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0049b74f mov dword ptr [ebp - 0x88], edx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(edx); }
  /* 0049b755 jbe 0x49b896 */ if ((CF_|ZF_)) goto L_0049b896;
  /* 0049b75b lea eax, [esi + 0x28c] */ eax = (u32)((u32)(esi + 0x28cu));
  /* 0049b761 mov dword ptr [ebp - 0x8c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(eax); }
  /* 0049b767 jmp 0x49b771 */ goto L_0049b771;
L_0049b769:;
  /* 0049b769 mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 0049b76f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0049b771:;
  /* 0049b771 cmp word ptr [eax], dx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (edx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0049b774 mov dword ptr [ebp - 0x9c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(edx); }
  /* 0049b77a jbe 0x49b85d */ if ((CF_|ZF_)) goto L_0049b85d;
  /* 0049b780 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049b783 mov dword ptr [ebp - 0x90], eax */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(eax); }
  /* 0049b789 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0049b790:;
  /* 0049b790 mov edx, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); edx = (u32)(M32(m_)); }
  /* 0049b796 mov esi, dword ptr [edx - 4] */ { const u32 m_ = (u32)(edx + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0049b799 call 0x556030 */ esp -= 4; M32(esp) = 0x49b79eu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x49b799u); RETCHK(0x49b79eu, 0x49b799u); LOADALL;
  /* 0049b79e mov edx, esi */ { edx = (u32)(esi); }
  /* 0049b7a0 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049b7a2 call 0x555a00 */ esp -= 4; M32(esp) = 0x49b7a7u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x49b7a2u); RETCHK(0x49b7a7u, 0x49b7a2u); LOADALL;
  /* 0049b7a7 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049b7a9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049b7ab je 0x49b82d */ if (ZF_) goto L_0049b82d;
  /* 0049b7b1 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0049b7b3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049b7b5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049b7b7 call 0x419e40 */ esp -= 4; M32(esp) = 0x49b7bcu; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x49b7b7u); RETCHK(0x49b7bcu, 0x49b7b7u); LOADALL;
  /* 0049b7bc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b7be add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049b7c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049b7c2 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049b7c5 call 0x40d160 */ esp -= 4; M32(esp) = 0x49b7cau; SAVEALL; F_0040d160(c); ABI_CHECK(0x40d160u, 0x49b7c5u); RETCHK(0x49b7cau, 0x49b7c5u); LOADALL;
  /* 0049b7ca xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049b7cc mov byte ptr [ebp - 0x84], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M8(m_) = (u8)(0x0u); }
  /* 0049b7d3 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 0049b7d8 lea edi, [ebp - 0x83] */ edi = (u32)((u32)(ebp + 0xffffff7du));
  /* 0049b7de rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0049b7e0 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0049b7e2 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0049b7e3 mov eax, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); eax = (u32)(M32(m_)); }
  /* 0049b7e9 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0049b7eb cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b7ee jbe 0x49b827 */ if ((CF_|ZF_)) goto L_0049b827;
  /* 0049b7f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b7f1 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0049b7f7 push 0x64bfc4 */ { u32 v_ = 0x64bfc4u; esp -= 4; M32(esp) = v_; }
  /* 0049b7fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b7fd call 0x5fe9aa */ esp -= 4; M32(esp) = 0x49b802u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x49b7fdu); RETCHK(0x49b802u, 0x49b7fdu); LOADALL;
  /* 0049b802 lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0049b808 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b80b lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0049b80e mov edi, edi */ { edi = (u32)(edi); }
L_0049b810:;
  /* 0049b810 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b812 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b813 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b815 jne 0x49b810 */ if (!ZF_) goto L_0049b810;
  /* 0049b817 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049b819 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b81a lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0049b820 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049b822 call 0x40d260 */ esp -= 4; M32(esp) = 0x49b827u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x49b822u); RETCHK(0x49b827u, 0x49b822u); LOADALL;
L_0049b827:;
  /* 0049b827 mov edi, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); edi = (u32)(M32(m_)); }
L_0049b82d:;
  /* 0049b82d mov edx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); edx = (u32)(M32(m_)); }
  /* 0049b833 mov eax, dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); eax = (u32)(M32(m_)); }
  /* 0049b839 mov esi, dword ptr [ebp - 0x90] */ { const u32 m_ = (u32)(ebp + 0xffffff70u); esi = (u32)(M32(m_)); }
  /* 0049b83f movzx ecx, word ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M16(m_)); }
  /* 0049b842 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b843 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049b846 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b848 mov dword ptr [ebp - 0x9c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(eax); }
  /* 0049b84e mov dword ptr [ebp - 0x90], esi */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(esi); }
  /* 0049b854 jl 0x49b790 */ if (LT_) goto L_0049b790;
  /* 0049b85a mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
L_0049b85d:;
  /* 0049b85d push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 0049b85f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049b861 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049b863 call 0x419e40 */ esp -= 4; M32(esp) = 0x49b868u; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x49b863u); RETCHK(0x49b868u, 0x49b863u); LOADALL;
  /* 0049b868 mov edx, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); edx = (u32)(M32(m_)); }
  /* 0049b86e mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 0049b874 add edx, 0xc4 */ { u32 a_ = edx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049b87a mov dword ptr [ebp - 0x8c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(edx); }
  /* 0049b880 movzx edx, word ptr [esi + 0x288] */ { const u32 m_ = (u32)(esi + 0x288u); edx = (u32)(M16(m_)); }
  /* 0049b887 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b888 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b88a mov dword ptr [ebp - 0x88], eax */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(eax); }
  /* 0049b890 jl 0x49b769 */ if (LT_) goto L_0049b769;
L_0049b896:;
  /* 0049b896 push 0x280 */ { u32 v_ = 0x280u; esp -= 4; M32(esp) = v_; }
  /* 0049b89b push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049b8a0 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49b8a6u; SAVEALL; call_ind(c, t_); RETCHK(0x49b8a6u, 0x49b8a0u); LOADALL; }
  /* 0049b8a6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049b8a8 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0049b8ab mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0049b8ae mov edi, edi */ { edi = (u32)(edi); }
L_0049b8b0:;
  /* 0049b8b0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b8b2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b8b3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b8b5 jne 0x49b8b0 */ if (!ZF_) goto L_0049b8b0;
  /* 0049b8b7 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049b8ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b8bb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049b8bd call 0x40d260 */ esp -= 4; M32(esp) = 0x49b8c2u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x49b8bdu); RETCHK(0x49b8c2u, 0x49b8bdu); LOADALL;
  /* 0049b8c2 add esi, 0xecc */ { u32 a_ = esi, b_ = 0xeccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049b8c8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049b8ca lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
  /* 0049b8cd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0049b8d0:;
  /* 0049b8d0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049b8d2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049b8d3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049b8d5 jne 0x49b8d0 */ if (!ZF_) goto L_0049b8d0;
  /* 0049b8d7 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049b8d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049b8da mov eax, esi */ { eax = (u32)(esi); }
  /* 0049b8dc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049b8de call 0x40d260 */ esp -= 4; M32(esp) = 0x49b8e3u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x49b8deu); RETCHK(0x49b8e3u, 0x49b8deu); LOADALL;
  /* 0049b8e3 mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 0049b8e9 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b8ec mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0049b8ee mov dword ptr [ebp - 0x88], esp */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(esp); }
  /* 0049b8f4 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049b8f6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b8f8 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 0049b8fd mov dword ptr [ecx + 0x18], esi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(esi); }
  /* 0049b900 mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0049b907 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b908 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0049b90c call 0x404140 */ esp -= 4; M32(esp) = 0x49b911u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49b90cu); RETCHK(0x49b911u, 0x49b90cu); LOADALL;
  /* 0049b911 mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b917 call 0x4a0ab0 */ esp -= 4; M32(esp) = 0x49b91cu; SAVEALL; F_004a0ab0(c); ABI_CHECK(0x4a0ab0u, 0x49b917u); RETCHK(0x49b91cu, 0x49b917u); LOADALL;
  /* 0049b91c sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b91f mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0049b921 mov dword ptr [ebp - 0x94], esp */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(esp); }
  /* 0049b927 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049b929 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b92b mov dword ptr [ecx + 0x18], esi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(esi); }
  /* 0049b92e mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0049b935 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049b936 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0049b93a call 0x404140 */ esp -= 4; M32(esp) = 0x49b93fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49b93au); RETCHK(0x49b93fu, 0x49b93au); LOADALL;
  /* 0049b93f mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b945 call 0x4a0b10 */ esp -= 4; M32(esp) = 0x49b94au; SAVEALL; F_004a0b10(c); ABI_CHECK(0x4a0b10u, 0x49b945u); RETCHK(0x49b94au, 0x49b945u); LOADALL;
  /* 0049b94a mov edx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); edx = (u32)(M32(m_)); }
  /* 0049b950 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b953 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0049b955 mov dword ptr [ebp - 0x94], esp */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(esp); }
  /* 0049b95b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049b95d push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049b95f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049b960 mov dword ptr [ecx + 0x18], esi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(esi); }
  /* 0049b963 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0049b966 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049b967 mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b96a call 0x404140 */ esp -= 4; M32(esp) = 0x49b96fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49b96au); RETCHK(0x49b96fu, 0x49b96au); LOADALL;
  /* 0049b96f mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b975 call 0x4a0a50 */ esp -= 4; M32(esp) = 0x49b97au; SAVEALL; F_004a0a50(c); ABI_CHECK(0x4a0a50u, 0x49b975u); RETCHK(0x49b97au, 0x49b975u); LOADALL;
  /* 0049b97a mov eax, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); eax = (u32)(M32(m_)); }
  /* 0049b980 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049b983 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0049b985 mov dword ptr [ebp - 0x98], esp */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(esp); }
  /* 0049b98b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049b98d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049b98e mov dword ptr [ecx + 0x18], esi */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(esi); }
  /* 0049b991 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0049b994 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049b995 mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049b998 call 0x404140 */ esp -= 4; M32(esp) = 0x49b99du; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49b998u); RETCHK(0x49b99du, 0x49b998u); LOADALL;
  /* 0049b99d mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b9a3 call 0x4a0d80 */ esp -= 4; M32(esp) = 0x49b9a8u; SAVEALL; F_004a0d80(c); ABI_CHECK(0x4a0d80u, 0x49b9a3u); RETCHK(0x49b9a8u, 0x49b9a3u); LOADALL;
  /* 0049b9a8 mov ebx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ebx = (u32)(M32(m_)); }
  /* 0049b9ae call 0x4a0b70 */ esp -= 4; M32(esp) = 0x49b9b3u; SAVEALL; F_004a0b70(c); ABI_CHECK(0x4a0b70u, 0x49b9aeu); RETCHK(0x49b9b3u, 0x49b9aeu); LOADALL;
  /* 0049b9b3 mov eax, dword ptr [edi + 0xac] */ { const u32 m_ = (u32)(edi + 0xacu); eax = (u32)(M32(m_)); }
  /* 0049b9b9 cmp eax, dword ptr [edi + 0xb0] */ { const u32 m_ = (u32)(edi + 0xb0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b9bf je 0x49b9d5 */ if (ZF_) goto L_0049b9d5;
  /* 0049b9c1 mov ecx, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); ecx = (u32)(M32(m_)); }
L_0049b9c4:;
  /* 0049b9c4 cmp dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b9c6 je 0x49b9f5 */ if (ZF_) goto L_0049b9f5;
  /* 0049b9c8 mov edx, dword ptr [edi + 0xb0] */ { const u32 m_ = (u32)(edi + 0xb0u); edx = (u32)(M32(m_)); }
  /* 0049b9ce add eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049b9d1 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049b9d3 jne 0x49b9c4 */ if (!ZF_) goto L_0049b9c4;
L_0049b9d5:;
  /* 0049b9d5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049b9d7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
L_0049b9d9:;
  /* 0049b9d9 mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049b9df call 0x4a08f0 */ esp -= 4; M32(esp) = 0x49b9e4u; SAVEALL; F_004a08f0(c); ABI_CHECK(0x4a08f0u, 0x49b9dfu); RETCHK(0x49b9e4u, 0x49b9dfu); LOADALL;
L_0049b9e4:;
  /* 0049b9e4 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0049b9e7 call 0x61af31 */ esp -= 4; M32(esp) = 0x49b9ecu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49b9e7u); RETCHK(0x49b9ecu, 0x49b9e7u); LOADALL;
  /* 0049b9ec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049b9ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049b9ee pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049b9ef mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049b9f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049b9f2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0049b9f5:;
  /* 0049b9f5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049b9f7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049b9f9 jmp 0x49b9d9 */ goto L_0049b9d9;
}

void F_0049ba00(CPU *c) {
  NATIVE_HOOK(0x49ba00u) REGS; LOADALL;
L_0049ba00:;
  /* 0049ba00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049ba01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049ba03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049ba05 push 0x6205d8 */ { u32 v_ = 0x6205d8u; esp -= 4; M32(esp) = v_; }
  /* 0049ba0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049ba10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ba11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049ba18 sub esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ba1b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049ba20 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049ba21 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ba22 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049ba23 lea edi, [ecx + 0xa8] */ edi = (u32)((u32)(ecx + 0xa8u));
  /* 0049ba29 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049ba2c mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049ba2f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049ba31 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ba33 mov dword ptr [ebp - 0x50], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ecx); }
  /* 0049ba36 je 0x49ba7e */ if (ZF_) goto L_0049ba7e;
  /* 0049ba38 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049ba3b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ba3d mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 0049ba40 je 0x49ba6f */ if (ZF_) goto L_0049ba6f;
  /* 0049ba42 lea esi, [eax + 0x1c] */ esi = (u32)((u32)(eax + 0x1cu));
L_0049ba45:;
  /* 0049ba45 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ba48 jb 0x49ba59 */ if (CF_) goto L_0049ba59;
  /* 0049ba4a mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049ba4d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ba4e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49ba53u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49ba4eu); RETCHK(0x49ba53u, 0x49ba4eu); LOADALL;
  /* 0049ba53 mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 0049ba56 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049ba59:;
  /* 0049ba59 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0049ba5f mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049ba62 mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049ba65 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ba68 lea eax, [esi - 0x1c] */ eax = (u32)((u32)(esi + 0xffffffe4u));
  /* 0049ba6b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ba6d jne 0x49ba45 */ if (!ZF_) goto L_0049ba45;
L_0049ba6f:;
  /* 0049ba6f mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049ba72 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ba73 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49ba78u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49ba73u); RETCHK(0x49ba78u, 0x49ba73u); LOADALL;
  /* 0049ba78 mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
  /* 0049ba7b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049ba7e:;
  /* 0049ba7e movzx eax, word ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M16(m_)); }
  /* 0049ba82 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ba84 mov dword ptr [edi + 4], ebx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0049ba87 mov dword ptr [edi + 8], ebx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049ba8a mov dword ptr [edi + 0xc], ebx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0049ba8d jle 0x49bb49 */ if ((ZF_|LT_)) goto L_0049bb49;
  /* 0049ba93 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049ba96 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ba99 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049ba9c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0049baa0:;
  /* 0049baa0 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 0049baa7 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 0049baaa mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049baad mov dword ptr [ebp - 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ebx); }
  /* 0049bab0 mov byte ptr [ebp - 0x24], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x1u); }
  /* 0049bab4 mov byte ptr [ebp - 0x23], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M8(m_) = (u8)(0x1u); }
  /* 0049bab8 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0049babb mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0049babe mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0049bac1 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0049bac4 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049bac7 mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049baca mov ecx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0049bacd mov eax, esi */ { eax = (u32)(esi); }
  /* 0049bacf mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 0049bad2 mov dword ptr [ebp - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 0049bad5 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0049bad8:;
  /* 0049bad8 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049bada inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049badb cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0049badd jne 0x49bad8 */ if (!ZF_) goto L_0049bad8;
  /* 0049badf sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049bae1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bae2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049bae3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0049bae6 call 0x404420 */ esp -= 4; M32(esp) = 0x49baebu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49bae6u); RETCHK(0x49baebu, 0x49bae6u); LOADALL;
  /* 0049baeb mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0049baee mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0049baf1 movzx edx, byte ptr [esi + 0x25] */ { const u32 m_ = (u32)(esi + 0x25u); edx = (u32)(M8(m_)); }
  /* 0049baf5 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 0049baf8 movzx eax, byte ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M8(m_)); }
  /* 0049bafc mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 0049baff lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0049bb02 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0049bb05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049bb06 mov eax, edi */ { eax = (u32)(edi); }
  /* 0049bb08 mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 0049bb0b call 0x49c8e0 */ esp -= 4; M32(esp) = 0x49bb10u; SAVEALL; F_0049c8e0(c); ABI_CHECK(0x49c8e0u, 0x49bb0bu); RETCHK(0x49bb10u, 0x49bb0bu); LOADALL;
  /* 0049bb10 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049bb17 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bb1b jb 0x49bb29 */ if (CF_) goto L_0049bb29;
  /* 0049bb1d mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 0049bb20 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049bb21 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49bb26u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49bb21u); RETCHK(0x49bb26u, 0x49bb21u); LOADALL;
  /* 0049bb26 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049bb29:;
  /* 0049bb29 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049bb2c add esi, 0x34 */ { u32 a_ = esi, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049bb2f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049bb30 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 0049bb37 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 0049bb3a mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049bb3d mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049bb40 jne 0x49baa0 */ if (!ZF_) goto L_0049baa0;
  /* 0049bb46 mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
L_0049bb49:;
  /* 0049bb49 mov esi, dword ptr [ecx + 0xb0] */ { const u32 m_ = (u32)(ecx + 0xb0u); esi = (u32)(M32(m_)); }
  /* 0049bb4f mov edi, dword ptr [ecx + 0xac] */ { const u32 m_ = (u32)(ecx + 0xacu); edi = (u32)(M32(m_)); }
  /* 0049bb55 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049bb57 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049bb59 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049bb5e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049bb60 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049bb62 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049bb65 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049bb67 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049bb6a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049bb6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bb6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049bb6e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049bb6f call 0x49d1e0 */ esp -= 4; M32(esp) = 0x49bb74u; SAVEALL; F_0049d1e0(c); ABI_CHECK(0x49d1e0u, 0x49bb6fu); RETCHK(0x49bb74u, 0x49bb6fu); LOADALL;
  /* 0049bb74 mov al, byte ptr [0x7a6bb0] */ { const u32 m_ = (u32)(0x7a6bb0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049bb79 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bb7c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049bb7d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049bb7e cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0049bb80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049bb81 je 0x49bb9c */ if (ZF_) goto L_0049bb9c;
  /* 0049bb83 mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049bb89 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049bb8a call 0x4a1c50 */ esp -= 4; M32(esp) = 0x49bb8fu; SAVEALL; F_004a1c50(c); ABI_CHECK(0x4a1c50u, 0x49bb8au); RETCHK(0x49bb8fu, 0x49bb8au); LOADALL;
  /* 0049bb8f mov edx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); edx = (u32)(M32(m_)); }
  /* 0049bb95 mov byte ptr [edx + 0x1c5], 1 */ { const u32 m_ = (u32)(edx + 0x1c5u); M8(m_) = (u8)(0x1u); }
L_0049bb9c:;
  /* 0049bb9c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049bb9f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049bba6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049bba9 call 0x61af31 */ esp -= 4; M32(esp) = 0x49bbaeu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49bba9u); RETCHK(0x49bbaeu, 0x49bba9u); LOADALL;
  /* 0049bbae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bbb0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bbb1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049bbc0(CPU *c) {
  NATIVE_HOOK(0x49bbc0u) REGS; LOADALL;
L_0049bbc0:;
  /* 0049bbc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049bbc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049bbc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049bbc4 mov al, byte ptr [0x7a6bb0] */ { const u32 m_ = (u32)(0x7a6bb0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049bbc9 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049bbcb mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049bbce je 0x49bcdf */ if (ZF_) goto L_0049bcdf;
  /* 0049bbd4 mov eax, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); eax = (u32)(M32(m_)); }
  /* 0049bbd9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049bbdb call 0x4a1e40 */ esp -= 4; M32(esp) = 0x49bbe0u; SAVEALL; F_004a1e40(c); ABI_CHECK(0x4a1e40u, 0x49bbdbu); RETCHK(0x49bbe0u, 0x49bbdbu); LOADALL;
  /* 0049bbe0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049bbe3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049bbe5 jne 0x49bbfd */ if (!ZF_) goto L_0049bbfd;
  /* 0049bbe7 mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049bbed movzx eax, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M16(m_)); }
  /* 0049bbf1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049bbf2 call 0x4a1840 */ esp -= 4; M32(esp) = 0x49bbf7u; SAVEALL; F_004a1840(c); ABI_CHECK(0x4a1840u, 0x49bbf2u); RETCHK(0x49bbf7u, 0x49bbf2u); LOADALL;
  /* 0049bbf7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bbf9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bbfa ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0049bbfd:;
  /* 0049bbfd cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc00 jne 0x49bc1a */ if (!ZF_) goto L_0049bc1a;
  /* 0049bc02 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bc07 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bc0c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc0e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc10 push 0x2c4 */ { u32 v_ = 0x2c4u; esp -= 4; M32(esp) = v_; }
  /* 0049bc15 jmp 0x49bcc7 */ goto L_0049bcc7;
L_0049bc1a:;
  /* 0049bc1a cmp eax, 0xa */ { u32 a_ = eax, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc1d jne 0x49bc37 */ if (!ZF_) goto L_0049bc37;
  /* 0049bc1f push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bc24 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bc29 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc2b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc2d push 0x2c5 */ { u32 v_ = 0x2c5u; esp -= 4; M32(esp) = v_; }
  /* 0049bc32 jmp 0x49bcc7 */ goto L_0049bcc7;
L_0049bc37:;
  /* 0049bc37 cmp eax, 0xe */ { u32 a_ = eax, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc3a je 0x49bcb4 */ if (ZF_) goto L_0049bcb4;
  /* 0049bc3c cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc3f je 0x49bcb4 */ if (ZF_) goto L_0049bcb4;
  /* 0049bc41 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc44 jne 0x49bc5b */ if (!ZF_) goto L_0049bc5b;
  /* 0049bc46 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bc4b push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bc50 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc52 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc54 push 0x2c7 */ { u32 v_ = 0x2c7u; esp -= 4; M32(esp) = v_; }
  /* 0049bc59 jmp 0x49bcc7 */ goto L_0049bcc7;
L_0049bc5b:;
  /* 0049bc5b cmp eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc5e jne 0x49bc75 */ if (!ZF_) goto L_0049bc75;
  /* 0049bc60 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bc65 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bc6a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc6c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc6e push 0x2c8 */ { u32 v_ = 0x2c8u; esp -= 4; M32(esp) = v_; }
  /* 0049bc73 jmp 0x49bcc7 */ goto L_0049bcc7;
L_0049bc75:;
  /* 0049bc75 cmp eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc78 jne 0x49bc8f */ if (!ZF_) goto L_0049bc8f;
  /* 0049bc7a push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bc7f push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bc84 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc86 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bc88 push 0x2c9 */ { u32 v_ = 0x2c9u; esp -= 4; M32(esp) = v_; }
  /* 0049bc8d jmp 0x49bcc7 */ goto L_0049bcc7;
L_0049bc8f:;
  /* 0049bc8f cmp eax, 0x17 */ { u32 a_ = eax, b_ = 0x17u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bc92 jne 0x49bca9 */ if (!ZF_) goto L_0049bca9;
  /* 0049bc94 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bc99 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bc9e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bca0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bca2 push 0x2ca */ { u32 v_ = 0x2cau; esp -= 4; M32(esp) = v_; }
  /* 0049bca7 jmp 0x49bcc7 */ goto L_0049bcc7;
L_0049bca9:;
  /* 0049bca9 call 0x49c140 */ esp -= 4; M32(esp) = 0x49bcaeu; SAVEALL; F_0049c140(c); ABI_CHECK(0x49c140u, 0x49bca9u); RETCHK(0x49bcaeu, 0x49bca9u); LOADALL;
  /* 0049bcae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bcb0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bcb1 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0049bcb4:;
  /* 0049bcb4 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bcb9 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bcbe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bcc0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bcc2 push 0x2c6 */ { u32 v_ = 0x2c6u; esp -= 4; M32(esp) = v_; }
L_0049bcc7:;
  /* 0049bcc7 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049bccc call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49bcd2u; SAVEALL; call_ind(c, t_); RETCHK(0x49bcd2u, 0x49bcccu); LOADALL; }
  /* 0049bcd2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bcd3 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049bcd5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bcd7 call 0x50b090 */ esp -= 4; M32(esp) = 0x49bcdcu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49bcd7u); RETCHK(0x49bcdcu, 0x49bcd7u); LOADALL;
  /* 0049bcdc add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049bcdf:;
  /* 0049bcdf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bce1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bce2 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0049bcf0(CPU *c) {
  NATIVE_HOOK(0x49bcf0u) REGS; LOADALL;
L_0049bcf0:;
  /* 0049bcf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049bcf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049bcf3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049bcf4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049bcf7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049bcf9 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049bcfc jne 0x49bd2d */ if (!ZF_) goto L_0049bd2d;
  /* 0049bcfe push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bd03 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bd08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bd09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bd0a push 0x28c */ { u32 v_ = 0x28cu; esp -= 4; M32(esp) = v_; }
  /* 0049bd0f push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049bd14 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49bd1au; SAVEALL; call_ind(c, t_); RETCHK(0x49bd1au, 0x49bd14u); LOADALL; }
  /* 0049bd1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bd1b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049bd1d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bd1f call 0x50b090 */ esp -= 4; M32(esp) = 0x49bd24u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49bd1fu); RETCHK(0x49bd24u, 0x49bd1fu); LOADALL;
  /* 0049bd24 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bd27 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bd29 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bd2a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0049bd2d:;
  /* 0049bd2d call 0x49c140 */ esp -= 4; M32(esp) = 0x49bd32u; SAVEALL; F_0049c140(c); ABI_CHECK(0x49c140u, 0x49bd2du); RETCHK(0x49bd32u, 0x49bd2du); LOADALL;
  /* 0049bd32 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bd34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bd35 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0049bd40(CPU *c) {
  NATIVE_HOOK(0x49bd40u) REGS; LOADALL;
L_0049bd40:;
  /* 0049bd40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049bd41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049bd43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049bd44 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049bd47 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049bd49 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049bd4c jne 0x49bd7d */ if (!ZF_) goto L_0049bd7d;
  /* 0049bd4e push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bd53 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bd58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bd59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bd5a push 0x28d */ { u32 v_ = 0x28du; esp -= 4; M32(esp) = v_; }
L_0049bd5f:;
  /* 0049bd5f push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049bd64 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49bd6au; SAVEALL; call_ind(c, t_); RETCHK(0x49bd6au, 0x49bd64u); LOADALL; }
  /* 0049bd6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bd6b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049bd6d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bd6f call 0x50b090 */ esp -= 4; M32(esp) = 0x49bd74u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49bd6fu); RETCHK(0x49bd74u, 0x49bd6fu); LOADALL;
  /* 0049bd74 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bd77 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bd79 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bd7a ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0049bd7d:;
  /* 0049bd7d cmp eax, 0x15 */ { u32 a_ = eax, b_ = 0x15u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bd80 jne 0x49bd97 */ if (!ZF_) goto L_0049bd97;
  /* 0049bd82 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bd87 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bd8c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bd8e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bd90 push 0x2cb */ { u32 v_ = 0x2cbu; esp -= 4; M32(esp) = v_; }
  /* 0049bd95 jmp 0x49bd5f */ goto L_0049bd5f;
L_0049bd97:;
  /* 0049bd97 cmp eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bd9a jne 0x49bdb1 */ if (!ZF_) goto L_0049bdb1;
  /* 0049bd9c push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bda1 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bda6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bda8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bdaa push 0x2cc */ { u32 v_ = 0x2ccu; esp -= 4; M32(esp) = v_; }
  /* 0049bdaf jmp 0x49bd5f */ goto L_0049bd5f;
L_0049bdb1:;
  /* 0049bdb1 cmp eax, 0x19 */ { u32 a_ = eax, b_ = 0x19u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bdb4 jne 0x49bdcb */ if (!ZF_) goto L_0049bdcb;
  /* 0049bdb6 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bdbb push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bdc0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bdc2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bdc4 push 0x2cd */ { u32 v_ = 0x2cdu; esp -= 4; M32(esp) = v_; }
  /* 0049bdc9 jmp 0x49bd5f */ goto L_0049bd5f;
L_0049bdcb:;
  /* 0049bdcb call 0x49c140 */ esp -= 4; M32(esp) = 0x49bdd0u; SAVEALL; F_0049c140(c); ABI_CHECK(0x49c140u, 0x49bdcbu); RETCHK(0x49bdd0u, 0x49bdcbu); LOADALL;
  /* 0049bdd0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049bdd2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049bdd3 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0049bde0(CPU *c) {
  NATIVE_HOOK(0x49bde0u) REGS; LOADALL;
L_0049bde0:;
  /* 0049bde0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049bde1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049bde3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049bde5 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 0049bdea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049bdf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bdf1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049bdf8 sub esp, 0xa4 */ { u32 a_ = esp, b_ = 0xa4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bdfe mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049be03 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049be06 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049be09 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049be0a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049be0c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049be0e mov dword ptr [ebp - 0xb0], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(ecx); }
  /* 0049be14 jne 0x49bf6e */ if (!ZF_) goto L_0049bf6e;
  /* 0049be1a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049be1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049be1c push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0049be21 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049be24 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0049be2b mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0049be2e mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049be31 call 0x404420 */ esp -= 4; M32(esp) = 0x49be36u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49be31u); RETCHK(0x49be36u, 0x49be31u); LOADALL;
  /* 0049be36 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0049be39 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049be3c cmp word ptr [eax], bx */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0049be3f mov dword ptr [ebp - 0xb0], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(ebx); }
  /* 0049be45 jbe 0x49befd */ if ((CF_|ZF_)) goto L_0049befd;
  /* 0049be4b add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049be4e mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049be51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0049be52:;
  /* 0049be52 call 0x556030 */ esp -= 4; M32(esp) = 0x49be57u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x49be52u); RETCHK(0x49be57u, 0x49be52u); LOADALL;
  /* 0049be57 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049be5a mov edx, dword ptr [ecx - 4] */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0049be5d mov esi, eax */ { esi = (u32)(eax); }
  /* 0049be5f call 0x555a00 */ esp -= 4; M32(esp) = 0x49be64u; SAVEALL; F_00555a00(c); ABI_CHECK(0x555a00u, 0x49be5fu); RETCHK(0x49be64u, 0x49be5fu); LOADALL;
  /* 0049be64 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049be66 je 0x49bed8 */ if (ZF_) goto L_0049bed8;
  /* 0049be68 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049be6b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049be6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049be6e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049be71 lea ebx, [ebp - 0x2c] */ ebx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049be74 call 0x40d160 */ esp -= 4; M32(esp) = 0x49be79u; SAVEALL; F_0040d160(c); ABI_CHECK(0x40d160u, 0x49be74u); RETCHK(0x49be79u, 0x49be74u); LOADALL;
  /* 0049be79 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049be7c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049be7e mov byte ptr [ebp - 0xac], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M8(m_) = (u8)(0x0u); }
  /* 0049be85 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 0049be8a lea edi, [ebp - 0xab] */ edi = (u32)((u32)(ebp + 0xffffff55u));
  /* 0049be90 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0049be92 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0049be94 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0049be95 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0049be97 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049be9a jbe 0x49bed8 */ if ((CF_|ZF_)) goto L_0049bed8;
  /* 0049be9c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049be9d lea eax, [ebp - 0xac] */ eax = (u32)((u32)(ebp + 0xffffff54u));
  /* 0049bea3 push 0x64ac38 */ { u32 v_ = 0x64ac38u; esp -= 4; M32(esp) = v_; }
  /* 0049bea8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bea9 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x49beaeu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x49bea9u); RETCHK(0x49beaeu, 0x49bea9u); LOADALL;
  /* 0049beae lea eax, [ebp - 0xac] */ eax = (u32)((u32)(ebp + 0xffffff54u));
  /* 0049beb4 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049beb7 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0049beba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0049bec0:;
  /* 0049bec0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049bec2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049bec3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049bec5 jne 0x49bec0 */ if (!ZF_) goto L_0049bec0;
  /* 0049bec7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049bec9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049beca lea eax, [ebp - 0xac] */ eax = (u32)((u32)(ebp + 0xffffff54u));
  /* 0049bed0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049bed3 call 0x40d260 */ esp -= 4; M32(esp) = 0x49bed8u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x49bed3u); RETCHK(0x49bed8u, 0x49bed3u); LOADALL;
L_0049bed8:;
  /* 0049bed8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049bedb mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0049bede mov eax, dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); eax = (u32)(M32(m_)); }
  /* 0049bee4 add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049bee7 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049beea movzx edx, word ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M16(m_)); }
  /* 0049beed inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049beee cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bef0 mov dword ptr [ebp - 0xb0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(eax); }
  /* 0049bef6 jl 0x49be52 */ if (LT_) goto L_0049be52;
  /* 0049befc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0049befd:;
  /* 0049befd push 0x28e */ { u32 v_ = 0x28eu; esp -= 4; M32(esp) = v_; }
  /* 0049bf02 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049bf07 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49bf0du; SAVEALL; call_ind(c, t_); RETCHK(0x49bf0du, 0x49bf07u); LOADALL; }
  /* 0049bf0d mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049bf0f lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0049bf12:;
  /* 0049bf12 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049bf14 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049bf15 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049bf17 jne 0x49bf12 */ if (!ZF_) goto L_0049bf12;
  /* 0049bf19 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049bf1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049bf1c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0049bf1f call 0x40d260 */ esp -= 4; M32(esp) = 0x49bf24u; SAVEALL; F_0040d260(c); ABI_CHECK(0x40d260u, 0x49bf1fu); RETCHK(0x49bf24u, 0x49bf1fu); LOADALL;
  /* 0049bf24 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049bf27 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0049bf2c cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bf2e mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0049bf31 jae 0x49bf36 */ if (!CF_) goto L_0049bf36;
  /* 0049bf33 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0049bf36:;
  /* 0049bf36 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bf3b push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bf40 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bf42 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bf44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bf45 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049bf47 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049bf49 call 0x50b090 */ esp -= 4; M32(esp) = 0x49bf4eu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49bf49u); RETCHK(0x49bf4eu, 0x49bf49u); LOADALL;
  /* 0049bf4e mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049bf51 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bf54 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bf56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049bf57 jb 0x49c000 */ if (CF_) goto L_0049c000;
  /* 0049bf5d mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0049bf60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bf61 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49bf66u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49bf61u); RETCHK(0x49bf66u, 0x49bf61u); LOADALL;
  /* 0049bf66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bf69 jmp 0x49c000 */ goto L_0049c000;
L_0049bf6e:;
  /* 0049bf6e cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bf71 jne 0x49bf9d */ if (!ZF_) goto L_0049bf9d;
  /* 0049bf73 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bf78 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bf7d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bf7e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bf7f push 0x2ce */ { u32 v_ = 0x2ceu; esp -= 4; M32(esp) = v_; }
  /* 0049bf84 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049bf89 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49bf8fu; SAVEALL; call_ind(c, t_); RETCHK(0x49bf8fu, 0x49bf89u); LOADALL; }
  /* 0049bf8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bf90 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049bf92 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bf93 call 0x50b090 */ esp -= 4; M32(esp) = 0x49bf98u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49bf93u); RETCHK(0x49bf98u, 0x49bf93u); LOADALL;
  /* 0049bf98 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bf9b jmp 0x49c000 */ goto L_0049c000;
L_0049bf9d:;
  /* 0049bf9d cmp eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bfa0 jne 0x49bfcc */ if (!ZF_) goto L_0049bfcc;
  /* 0049bfa2 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bfa7 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bfac push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bfad push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bfae push 0x2cf */ { u32 v_ = 0x2cfu; esp -= 4; M32(esp) = v_; }
  /* 0049bfb3 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049bfb8 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49bfbeu; SAVEALL; call_ind(c, t_); RETCHK(0x49bfbeu, 0x49bfb8u); LOADALL; }
  /* 0049bfbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bfbf push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049bfc1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bfc2 call 0x50b090 */ esp -= 4; M32(esp) = 0x49bfc7u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49bfc2u); RETCHK(0x49bfc7u, 0x49bfc2u); LOADALL;
  /* 0049bfc7 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bfca jmp 0x49c000 */ goto L_0049c000;
L_0049bfcc:;
  /* 0049bfcc cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049bfcf jne 0x49bffb */ if (!ZF_) goto L_0049bffb;
  /* 0049bfd1 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049bfd6 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049bfdb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bfdc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bfdd push 0x2d0 */ { u32 v_ = 0x2d0u; esp -= 4; M32(esp) = v_; }
  /* 0049bfe2 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049bfe7 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49bfedu; SAVEALL; call_ind(c, t_); RETCHK(0x49bfedu, 0x49bfe7u); LOADALL; }
  /* 0049bfed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049bfee push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049bff0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049bff1 call 0x50b090 */ esp -= 4; M32(esp) = 0x49bff6u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49bff1u); RETCHK(0x49bff6u, 0x49bff1u); LOADALL;
  /* 0049bff6 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049bff9 jmp 0x49c000 */ goto L_0049c000;
L_0049bffb:;
  /* 0049bffb call 0x49c140 */ esp -= 4; M32(esp) = 0x49c000u; SAVEALL; F_0049c140(c); ABI_CHECK(0x49c140u, 0x49bffbu); RETCHK(0x49c000u, 0x49bffbu); LOADALL;
L_0049c000:;
  /* 0049c000 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049c003 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049c00a mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049c00d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049c00e call 0x61af31 */ esp -= 4; M32(esp) = 0x49c013u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49c00eu); RETCHK(0x49c013u, 0x49c00eu); LOADALL;
  /* 0049c013 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c015 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c016 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0049c020(CPU *c) {
  NATIVE_HOOK(0x49c020u) REGS; LOADALL;
L_0049c020:;
  /* 0049c020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c023 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c028 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c02b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c02d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c02e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c02f mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c034 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c037 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c038 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c03bu; SAVEALL; call_ind(c, t_); RETCHK(0x49c03bu, 0x49c038u); LOADALL; }
  /* 0049c03b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c03c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c040(CPU *c) {
  NATIVE_HOOK(0x49c040u) REGS; LOADALL;
L_0049c040:;
  /* 0049c040 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c045 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c048 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c04a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c04b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c04c mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c051 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c054u; SAVEALL; call_ind(c, t_); RETCHK(0x49c054u, 0x49c051u); LOADALL; }
  /* 0049c054 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c060(CPU *c) {
  NATIVE_HOOK(0x49c060u) REGS; LOADALL;
L_0049c060:;
  /* 0049c060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c063 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c068 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c06b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c06d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c06e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c06f mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c074 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c077 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c078 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c07bu; SAVEALL; call_ind(c, t_); RETCHK(0x49c07bu, 0x49c078u); LOADALL; }
  /* 0049c07b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c07c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c080(CPU *c) {
  NATIVE_HOOK(0x49c080u) REGS; LOADALL;
L_0049c080:;
  /* 0049c080 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c085 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c088 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c08a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c08b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c08c mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c091 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c094u; SAVEALL; call_ind(c, t_); RETCHK(0x49c094u, 0x49c091u); LOADALL; }
  /* 0049c094 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c0a0(CPU *c) {
  NATIVE_HOOK(0x49c0a0u) REGS; LOADALL;
L_0049c0a0:;
  /* 0049c0a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c0a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c0a3 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c0a8 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c0ab mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c0ad inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c0ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c0af mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c0b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c0b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c0b8 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c0bbu; SAVEALL; call_ind(c, t_); RETCHK(0x49c0bbu, 0x49c0b8u); LOADALL; }
  /* 0049c0bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c0bc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c0c0(CPU *c) {
  NATIVE_HOOK(0x49c0c0u) REGS; LOADALL;
L_0049c0c0:;
  /* 0049c0c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c0c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c0c3 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c0c8 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c0cb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c0cd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c0ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c0cf mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c0d4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c0d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c0d8 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c0dbu; SAVEALL; call_ind(c, t_); RETCHK(0x49c0dbu, 0x49c0d8u); LOADALL; }
  /* 0049c0db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c0dc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c0e0(CPU *c) {
  NATIVE_HOOK(0x49c0e0u) REGS; LOADALL;
L_0049c0e0:;
  /* 0049c0e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c0e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c0e3 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c0e8 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c0eb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c0ed inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c0ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c0ef mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c0f4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c0f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c0f8 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c0fbu; SAVEALL; call_ind(c, t_); RETCHK(0x49c0fbu, 0x49c0f8u); LOADALL; }
  /* 0049c0fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c0fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c100(CPU *c) {
  NATIVE_HOOK(0x49c100u) REGS; LOADALL;
L_0049c100:;
  /* 0049c100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c103 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c108 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c10b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c10d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c10e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c10f mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c114 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c117 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c118 call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c11bu; SAVEALL; call_ind(c, t_); RETCHK(0x49c11bu, 0x49c118u); LOADALL; }
  /* 0049c11b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c11c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c120(CPU *c) {
  NATIVE_HOOK(0x49c120u) REGS; LOADALL;
L_0049c120:;
  /* 0049c120 mov eax, dword ptr [ecx + 0xac] */ { const u32 m_ = (u32)(ecx + 0xacu); eax = (u32)(M32(m_)); }
  /* 0049c126 mov ecx, dword ptr [ecx + 0xb0] */ { const u32 m_ = (u32)(ecx + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 0049c12c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c12e je 0x49c13b */ if (ZF_) goto L_0049c13b;
L_0049c130:;
  /* 0049c130 cmp dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c132 je 0x49c13d */ if (ZF_) goto L_0049c13d;
  /* 0049c134 add eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049c137 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c139 jne 0x49c130 */ if (!ZF_) goto L_0049c130;
L_0049c13b:;
  /* 0049c13b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0049c13d:;
  /* 0049c13d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c140(CPU *c) {
  NATIVE_HOOK(0x49c140u) REGS; LOADALL;
L_0049c140:;
  /* 0049c140 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049c141 cmp eax, 0x18 */ { u32 a_ = eax, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c144 ja 0x49c3aa */ if (!(CF_|ZF_)) goto L_0049c3aa;
  /* 0049c14a jmp dword ptr [eax*4 + 0x49c3ac] */ { const u32 m_ = (u32)(eax * 4u + 0x49c3acu); u32 t_ = M32(m_); switch (t_) { case 0x49c151u: goto L_0049c151; case 0x49c169u: goto L_0049c169; case 0x49c181u: goto L_0049c181; case 0x49c199u: goto L_0049c199; case 0x49c1b1u: goto L_0049c1b1; case 0x49c1c9u: goto L_0049c1c9; case 0x49c1e1u: goto L_0049c1e1; case 0x49c1f9u: goto L_0049c1f9; case 0x49c211u: goto L_0049c211; case 0x49c229u: goto L_0049c229; case 0x49c241u: goto L_0049c241; case 0x49c259u: goto L_0049c259; case 0x49c271u: goto L_0049c271; case 0x49c289u: goto L_0049c289; case 0x49c2a1u: goto L_0049c2a1; case 0x49c2b9u: goto L_0049c2b9; case 0x49c2d1u: goto L_0049c2d1; case 0x49c2e9u: goto L_0049c2e9; case 0x49c301u: goto L_0049c301; case 0x49c316u: goto L_0049c316; case 0x49c32bu: goto L_0049c32b; case 0x49c340u: goto L_0049c340; case 0x49c355u: goto L_0049c355; case 0x49c36au: goto L_0049c36a; case 0x49c37fu: goto L_0049c37f; default: SAVEALL; call_ind(c, t_); return; } }
L_0049c151:;
  /* 0049c151 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c156 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c15b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c15d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c15f push 0x277 */ { u32 v_ = 0x277u; esp -= 4; M32(esp) = v_; }
  /* 0049c164 jmp 0x49c392 */ goto L_0049c392;
L_0049c169:;
  /* 0049c169 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c16e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c173 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c175 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c177 push 0x278 */ { u32 v_ = 0x278u; esp -= 4; M32(esp) = v_; }
  /* 0049c17c jmp 0x49c392 */ goto L_0049c392;
L_0049c181:;
  /* 0049c181 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c186 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c18b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c18d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c18f push 0x279 */ { u32 v_ = 0x279u; esp -= 4; M32(esp) = v_; }
  /* 0049c194 jmp 0x49c392 */ goto L_0049c392;
L_0049c199:;
  /* 0049c199 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c19e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c1a3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1a5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1a7 push 0x27a */ { u32 v_ = 0x27au; esp -= 4; M32(esp) = v_; }
  /* 0049c1ac jmp 0x49c392 */ goto L_0049c392;
L_0049c1b1:;
  /* 0049c1b1 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c1b6 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c1bb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1bd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1bf push 0x27b */ { u32 v_ = 0x27bu; esp -= 4; M32(esp) = v_; }
  /* 0049c1c4 jmp 0x49c392 */ goto L_0049c392;
L_0049c1c9:;
  /* 0049c1c9 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c1ce push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c1d3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1d5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1d7 push 0x27c */ { u32 v_ = 0x27cu; esp -= 4; M32(esp) = v_; }
  /* 0049c1dc jmp 0x49c392 */ goto L_0049c392;
L_0049c1e1:;
  /* 0049c1e1 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c1e6 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c1eb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1ed push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c1ef push 0x27d */ { u32 v_ = 0x27du; esp -= 4; M32(esp) = v_; }
  /* 0049c1f4 jmp 0x49c392 */ goto L_0049c392;
L_0049c1f9:;
  /* 0049c1f9 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c1fe push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c203 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c205 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c207 push 0x27e */ { u32 v_ = 0x27eu; esp -= 4; M32(esp) = v_; }
  /* 0049c20c jmp 0x49c392 */ goto L_0049c392;
L_0049c211:;
  /* 0049c211 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c216 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c21b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c21d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c21f push 0x286 */ { u32 v_ = 0x286u; esp -= 4; M32(esp) = v_; }
  /* 0049c224 jmp 0x49c392 */ goto L_0049c392;
L_0049c229:;
  /* 0049c229 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c22e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c233 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c235 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c237 push 0x287 */ { u32 v_ = 0x287u; esp -= 4; M32(esp) = v_; }
  /* 0049c23c jmp 0x49c392 */ goto L_0049c392;
L_0049c241:;
  /* 0049c241 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c246 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c24b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c24d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c24f push 0x288 */ { u32 v_ = 0x288u; esp -= 4; M32(esp) = v_; }
  /* 0049c254 jmp 0x49c392 */ goto L_0049c392;
L_0049c259:;
  /* 0049c259 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c25e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c263 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c265 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c267 push 0x289 */ { u32 v_ = 0x289u; esp -= 4; M32(esp) = v_; }
  /* 0049c26c jmp 0x49c392 */ goto L_0049c392;
L_0049c271:;
  /* 0049c271 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c276 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c27b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c27d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c27f push 0x28a */ { u32 v_ = 0x28au; esp -= 4; M32(esp) = v_; }
  /* 0049c284 jmp 0x49c392 */ goto L_0049c392;
L_0049c289:;
  /* 0049c289 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c28e push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c293 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c295 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c297 push 0x28b */ { u32 v_ = 0x28bu; esp -= 4; M32(esp) = v_; }
  /* 0049c29c jmp 0x49c392 */ goto L_0049c392;
L_0049c2a1:;
  /* 0049c2a1 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c2a6 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c2ab push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2ad push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2af push 0x291 */ { u32 v_ = 0x291u; esp -= 4; M32(esp) = v_; }
  /* 0049c2b4 jmp 0x49c392 */ goto L_0049c392;
L_0049c2b9:;
  /* 0049c2b9 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c2be push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c2c3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2c7 push 0x292 */ { u32 v_ = 0x292u; esp -= 4; M32(esp) = v_; }
  /* 0049c2cc jmp 0x49c392 */ goto L_0049c392;
L_0049c2d1:;
  /* 0049c2d1 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c2d6 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c2db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2dd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2df push 0x293 */ { u32 v_ = 0x293u; esp -= 4; M32(esp) = v_; }
  /* 0049c2e4 jmp 0x49c392 */ goto L_0049c392;
L_0049c2e9:;
  /* 0049c2e9 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c2ee push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c2f3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2f5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c2f7 push 0x294 */ { u32 v_ = 0x294u; esp -= 4; M32(esp) = v_; }
  /* 0049c2fc jmp 0x49c392 */ goto L_0049c392;
L_0049c301:;
  /* 0049c301 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c306 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c30b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c30d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c30f push 0x295 */ { u32 v_ = 0x295u; esp -= 4; M32(esp) = v_; }
  /* 0049c314 jmp 0x49c392 */ goto L_0049c392;
L_0049c316:;
  /* 0049c316 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c31b push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c320 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c322 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c324 push 0x296 */ { u32 v_ = 0x296u; esp -= 4; M32(esp) = v_; }
  /* 0049c329 jmp 0x49c392 */ goto L_0049c392;
L_0049c32b:;
  /* 0049c32b push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c330 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c335 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c337 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c339 push 0x297 */ { u32 v_ = 0x297u; esp -= 4; M32(esp) = v_; }
  /* 0049c33e jmp 0x49c392 */ goto L_0049c392;
L_0049c340:;
  /* 0049c340 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c345 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c34a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c34c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c34e push 0x298 */ { u32 v_ = 0x298u; esp -= 4; M32(esp) = v_; }
  /* 0049c353 jmp 0x49c392 */ goto L_0049c392;
L_0049c355:;
  /* 0049c355 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c35a push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c35f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c361 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c363 push 0x299 */ { u32 v_ = 0x299u; esp -= 4; M32(esp) = v_; }
  /* 0049c368 jmp 0x49c392 */ goto L_0049c392;
L_0049c36a:;
  /* 0049c36a push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c36f push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c374 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c376 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c378 push 0x29a */ { u32 v_ = 0x29au; esp -= 4; M32(esp) = v_; }
  /* 0049c37d jmp 0x49c392 */ goto L_0049c392;
L_0049c37f:;
  /* 0049c37f push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c384 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c389 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c38b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c38d push 0x29c */ { u32 v_ = 0x29cu; esp -= 4; M32(esp) = v_; }
L_0049c392:;
  /* 0049c392 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049c397 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c39du; SAVEALL; call_ind(c, t_); RETCHK(0x49c39du, 0x49c397u); LOADALL; }
  /* 0049c39d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c39e push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049c3a0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c3a2 call 0x50b090 */ esp -= 4; M32(esp) = 0x49c3a7u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49c3a2u); RETCHK(0x49c3a7u, 0x49c3a2u); LOADALL;
  /* 0049c3a7 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049c3aa:;
  /* 0049c3aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c410(CPU *c) {
  NATIVE_HOOK(0x49c410u) REGS; LOADALL;
L_0049c410:;
  /* 0049c410 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c415 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c418 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c41a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c41b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c41c mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c421 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c424u; SAVEALL; call_ind(c, t_); RETCHK(0x49c424u, 0x49c421u); LOADALL; }
  /* 0049c424 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c430(CPU *c) {
  NATIVE_HOOK(0x49c430u) REGS; LOADALL;
L_0049c430:;
  /* 0049c430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c433 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c438 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c43b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c43d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c43e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c43f mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c444 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c447 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c448 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c44bu; SAVEALL; call_ind(c, t_); RETCHK(0x49c44bu, 0x49c448u); LOADALL; }
  /* 0049c44b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c44c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c450(CPU *c) {
  NATIVE_HOOK(0x49c450u) REGS; LOADALL;
L_0049c450:;
  /* 0049c450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c453 mov edx, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); edx = (u32)(M32(m_)); }
  /* 0049c459 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c45c mov eax, dword ptr [eax + 0xb8] */ { const u32 m_ = (u32)(eax + 0xb8u); eax = (u32)(M32(m_)); }
  /* 0049c462 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c463 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0049c465 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c466 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c467 mov dword ptr [0x7a6ba0], edx */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(edx); }
  /* 0049c46d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049c470 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c471 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049c474 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c475 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c476 call dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c479u; SAVEALL; call_ind(c, t_); RETCHK(0x49c479u, 0x49c476u); LOADALL; }
  /* 0049c479 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c47a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c47b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0049c480(CPU *c) {
  NATIVE_HOOK(0x49c480u) REGS; LOADALL;
L_0049c480:;
  /* 0049c480 mov edx, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); edx = (u32)(M32(m_)); }
  /* 0049c486 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c489 mov eax, dword ptr [eax + 0xb8] */ { const u32 m_ = (u32)(eax + 0xb8u); eax = (u32)(M32(m_)); }
  /* 0049c48f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c490 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0049c492 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c493 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c494 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c495 mov dword ptr [0x7a6ba0], edx */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(edx); }
  /* 0049c49b call dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c49eu; SAVEALL; call_ind(c, t_); RETCHK(0x49c49eu, 0x49c49bu); LOADALL; }
  /* 0049c49e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c49f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c4a0(CPU *c) {
  NATIVE_HOOK(0x49c4a0u) REGS; LOADALL;
L_0049c4a0:;
  /* 0049c4a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c4a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c4a3 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c4a8 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c4ab mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c4ad inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c4ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c4af mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c4b4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c4b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c4b8 call dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c4bbu; SAVEALL; call_ind(c, t_); RETCHK(0x49c4bbu, 0x49c4b8u); LOADALL; }
  /* 0049c4bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c4bc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c4c0(CPU *c) {
  NATIVE_HOOK(0x49c4c0u) REGS; LOADALL;
L_0049c4c0:;
  /* 0049c4c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c4c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c4c3 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c4c8 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c4cb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c4cd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c4ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c4cf mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c4d4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c4d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c4d8 call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c4dbu; SAVEALL; call_ind(c, t_); RETCHK(0x49c4dbu, 0x49c4d8u); LOADALL; }
  /* 0049c4db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c4dc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c4e0(CPU *c) {
  NATIVE_HOOK(0x49c4e0u) REGS; LOADALL;
L_0049c4e0:;
  /* 0049c4e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c4e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c4e3 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c4e8 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c4eb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c4ed inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c4ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c4ef mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c4f4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c4f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c4f8 call dword ptr [edx + 0x50] */ { const u32 m_ = (u32)(edx + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c4fbu; SAVEALL; call_ind(c, t_); RETCHK(0x49c4fbu, 0x49c4f8u); LOADALL; }
  /* 0049c4fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c4fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c500(CPU *c) {
  NATIVE_HOOK(0x49c500u) REGS; LOADALL;
L_0049c500:;
  /* 0049c500 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c505 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c508 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c50a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c50b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c50c mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c511 call dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c514u; SAVEALL; call_ind(c, t_); RETCHK(0x49c514u, 0x49c511u); LOADALL; }
  /* 0049c514 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c520(CPU *c) {
  NATIVE_HOOK(0x49c520u) REGS; LOADALL;
L_0049c520:;
  /* 0049c520 mov eax, dword ptr [0x7a6ba0] */ { const u32 m_ = (u32)(0x7a6ba0u); eax = (u32)(M32(m_)); }
  /* 0049c525 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c528 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c52a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049c52b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c52c mov dword ptr [0x7a6ba0], eax */ { const u32 m_ = (u32)(0x7a6ba0u); M32(m_) = (u32)(eax); }
  /* 0049c531 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c534u; SAVEALL; call_ind(c, t_); RETCHK(0x49c534u, 0x49c531u); LOADALL; }
  /* 0049c534 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c540(CPU *c) {
  NATIVE_HOOK(0x49c540u) REGS; LOADALL;
L_0049c540:;
  /* 0049c540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c543 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c546 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0049c548 add ecx, 0xb8 */ { u32 a_ = ecx, b_ = 0xb8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049c54e mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0049c550 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049c553 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0049c556 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049c559 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049c55c mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049c55f mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049c562 mov al, byte ptr [0x7a6b3f] */ { const u32 m_ = (u32)(0x7a6b3fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c567 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c569 je 0x49c580 */ if (ZF_) goto L_0049c580;
  /* 0049c56b mov ecx, dword ptr [0x7a6af4] */ { const u32 m_ = (u32)(0x7a6af4u); ecx = (u32)(M32(m_)); }
  /* 0049c571 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049c573 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 0049c578 push 0x3131 */ { u32 v_ = 0x3131u; esp -= 4; M32(esp) = v_; }
  /* 0049c57d call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c580u; SAVEALL; call_ind(c, t_); RETCHK(0x49c580u, 0x49c57du); LOADALL; }
L_0049c580:;
  /* 0049c580 mov al, byte ptr [0x7a6b09] */ { const u32 m_ = (u32)(0x7a6b09u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c585 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c587 je 0x49c59e */ if (ZF_) goto L_0049c59e;
  /* 0049c589 mov ecx, dword ptr [0x7a6b04] */ { const u32 m_ = (u32)(0x7a6b04u); ecx = (u32)(M32(m_)); }
  /* 0049c58f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0049c591 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 0049c596 push 0x3131 */ { u32 v_ = 0x3131u; esp -= 4; M32(esp) = v_; }
  /* 0049c59b call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c59eu; SAVEALL; call_ind(c, t_); RETCHK(0x49c59eu, 0x49c59bu); LOADALL; }
L_0049c59e:;
  /* 0049c59e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c59f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0049c5b0(CPU *c) {
  NATIVE_HOOK(0x49c5b0u) REGS; LOADALL;
L_0049c5b0:;
  /* 0049c5b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c5b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c5b3 mov al, byte ptr [0x7a6be7] */ { const u32 m_ = (u32)(0x7a6be7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c5b8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c5ba je 0x49c5d1 */ if (ZF_) goto L_0049c5d1;
  /* 0049c5bc mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049c5bf mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049c5c2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049c5c3 mov ebx, dword ptr [0x7a6be8] */ { const u32 m_ = (u32)(0x7a6be8u); ebx = (u32)(M32(m_)); }
  /* 0049c5c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c5ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c5cb call 0x4ab4f0 */ esp -= 4; M32(esp) = 0x49c5d0u; SAVEALL; F_004ab4f0(c); ABI_CHECK(0x4ab4f0u, 0x49c5cbu); RETCHK(0x49c5d0u, 0x49c5cbu); LOADALL;
  /* 0049c5d0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0049c5d1:;
  /* 0049c5d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c5d2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049c5e0(CPU *c) {
  NATIVE_HOOK(0x49c5e0u) REGS; LOADALL;
L_0049c5e0:;
  /* 0049c5e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c5e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c5e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c5e4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c5e7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c5e9 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049c5ec jne 0x49c633 */ if (!ZF_) goto L_0049c633;
  /* 0049c5ee push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c5f3 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c5f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c5f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c5fa push 0x320 */ { u32 v_ = 0x320u; esp -= 4; M32(esp) = v_; }
  /* 0049c5ff push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049c604 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c60au; SAVEALL; call_ind(c, t_); RETCHK(0x49c60au, 0x49c604u); LOADALL; }
  /* 0049c60a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c60b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049c60d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c60f call 0x50b090 */ esp -= 4; M32(esp) = 0x49c614u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49c60fu); RETCHK(0x49c614u, 0x49c60fu); LOADALL;
  /* 0049c614 mov al, byte ptr [0x7a6be7] */ { const u32 m_ = (u32)(0x7a6be7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c619 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049c61c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c61e je 0x49c638 */ if (ZF_) goto L_0049c638;
  /* 0049c620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c621 mov esi, dword ptr [0x7a6be8] */ { const u32 m_ = (u32)(0x7a6be8u); esi = (u32)(M32(m_)); }
  /* 0049c627 call 0x49afa0 */ esp -= 4; M32(esp) = 0x49c62cu; SAVEALL; F_0049afa0(c); ABI_CHECK(0x49afa0u, 0x49c627u); RETCHK(0x49c62cu, 0x49c627u); LOADALL;
  /* 0049c62c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c62d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c62f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c630 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0049c633:;
  /* 0049c633 call 0x49c7d0 */ esp -= 4; M32(esp) = 0x49c638u; SAVEALL; F_0049c7d0(c); ABI_CHECK(0x49c7d0u, 0x49c633u); RETCHK(0x49c638u, 0x49c633u); LOADALL;
L_0049c638:;
  /* 0049c638 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c63a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c63b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0049c640(CPU *c) {
  NATIVE_HOOK(0x49c640u) REGS; LOADALL;
L_0049c640:;
  /* 0049c640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c643 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c644 mov al, byte ptr [0x7a6be7] */ { const u32 m_ = (u32)(0x7a6be7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c649 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c64b mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049c64e je 0x49c675 */ if (ZF_) goto L_0049c675;
  /* 0049c650 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c653 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c655 jne 0x49c670 */ if (!ZF_) goto L_0049c670;
  /* 0049c657 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049c65a mov ecx, dword ptr [0x7a6be8] */ { const u32 m_ = (u32)(0x7a6be8u); ecx = (u32)(M32(m_)); }
  /* 0049c660 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c661 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c662 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049c665 call 0x4ab680 */ esp -= 4; M32(esp) = 0x49c66au; SAVEALL; F_004ab680(c); ABI_CHECK(0x4ab680u, 0x49c665u); RETCHK(0x49c66au, 0x49c665u); LOADALL;
  /* 0049c66a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c66c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c66d ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0049c670:;
  /* 0049c670 call 0x49c7d0 */ esp -= 4; M32(esp) = 0x49c675u; SAVEALL; F_0049c7d0(c); ABI_CHECK(0x49c7d0u, 0x49c670u); RETCHK(0x49c675u, 0x49c670u); LOADALL;
L_0049c675:;
  /* 0049c675 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c677 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c678 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0049c680(CPU *c) {
  NATIVE_HOOK(0x49c680u) REGS; LOADALL;
L_0049c680:;
  /* 0049c680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c683 mov al, byte ptr [0x7a6be7] */ { const u32 m_ = (u32)(0x7a6be7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c688 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c68a je 0x49c6a0 */ if (ZF_) goto L_0049c6a0;
  /* 0049c68c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049c68f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049c692 mov edx, dword ptr [0x7a6be8] */ { const u32 m_ = (u32)(0x7a6be8u); edx = (u32)(M32(m_)); }
  /* 0049c698 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c699 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c69a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c69b call 0x4aba10 */ esp -= 4; M32(esp) = 0x49c6a0u; SAVEALL; F_004aba10(c); ABI_CHECK(0x4aba10u, 0x49c69bu); RETCHK(0x49c6a0u, 0x49c69bu); LOADALL;
L_0049c6a0:;
  /* 0049c6a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c6a1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049c6b0(CPU *c) {
  NATIVE_HOOK(0x49c6b0u) REGS; LOADALL;
L_0049c6b0:;
  /* 0049c6b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c6b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c6b3 mov al, byte ptr [0x7a6be7] */ { const u32 m_ = (u32)(0x7a6be7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c6b8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c6ba je 0x49c6d0 */ if (ZF_) goto L_0049c6d0;
  /* 0049c6bc mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049c6bf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049c6c2 mov edx, dword ptr [0x7a6be8] */ { const u32 m_ = (u32)(0x7a6be8u); edx = (u32)(M32(m_)); }
  /* 0049c6c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c6c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c6ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c6cb call 0x4abdc0 */ esp -= 4; M32(esp) = 0x49c6d0u; SAVEALL; F_004abdc0(c); ABI_CHECK(0x4abdc0u, 0x49c6cbu); RETCHK(0x49c6d0u, 0x49c6cbu); LOADALL;
L_0049c6d0:;
  /* 0049c6d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c6d1 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0049c6e0(CPU *c) {
  NATIVE_HOOK(0x49c6e0u) REGS; LOADALL;
L_0049c6e0:;
  /* 0049c6e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c6e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c6e3 mov al, byte ptr [0x7a6be7] */ { const u32 m_ = (u32)(0x7a6be7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c6e8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c6ea je 0x49c700 */ if (ZF_) goto L_0049c700;
  /* 0049c6ec mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049c6ef mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049c6f2 mov edx, dword ptr [0x7a6be8] */ { const u32 m_ = (u32)(0x7a6be8u); edx = (u32)(M32(m_)); }
  /* 0049c6f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c6f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c6fa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c6fb call 0x4ac140 */ esp -= 4; M32(esp) = 0x49c700u; SAVEALL; F_004ac140(c); ABI_CHECK(0x4ac140u, 0x49c6fbu); RETCHK(0x49c700u, 0x49c6fbu); LOADALL;
L_0049c700:;
  /* 0049c700 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c701 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049c710(CPU *c) {
  NATIVE_HOOK(0x49c710u) REGS; LOADALL;
L_0049c710:;
  /* 0049c710 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c711 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c713 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c714 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c717 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c719 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049c71c jne 0x49c73d */ if (!ZF_) goto L_0049c73d;
  /* 0049c71e mov al, byte ptr [0x7a6be7] */ { const u32 m_ = (u32)(0x7a6be7u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049c723 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049c725 je 0x49c778 */ if (ZF_) goto L_0049c778;
  /* 0049c727 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049c72a mov ecx, dword ptr [0x7a6be8] */ { const u32 m_ = (u32)(0x7a6be8u); ecx = (u32)(M32(m_)); }
  /* 0049c730 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c731 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c732 call 0x4ac590 */ esp -= 4; M32(esp) = 0x49c737u; SAVEALL; F_004ac590(c); ABI_CHECK(0x4ac590u, 0x49c732u); RETCHK(0x49c737u, 0x49c732u); LOADALL;
  /* 0049c737 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c739 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c73a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0049c73d:;
  /* 0049c73d cmp eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c740 jne 0x49c773 */ if (!ZF_) goto L_0049c773;
  /* 0049c742 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c747 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c74c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c74e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c750 push 0x337 */ { u32 v_ = 0x337u; esp -= 4; M32(esp) = v_; }
  /* 0049c755 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049c75a call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c760u; SAVEALL; call_ind(c, t_); RETCHK(0x49c760u, 0x49c75au); LOADALL; }
  /* 0049c760 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c761 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049c763 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c765 call 0x50b090 */ esp -= 4; M32(esp) = 0x49c76au; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49c765u); RETCHK(0x49c76au, 0x49c765u); LOADALL;
  /* 0049c76a add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049c76d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c76f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c770 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0049c773:;
  /* 0049c773 call 0x49c7d0 */ esp -= 4; M32(esp) = 0x49c778u; SAVEALL; F_0049c7d0(c); ABI_CHECK(0x49c7d0u, 0x49c773u); RETCHK(0x49c778u, 0x49c773u); LOADALL;
L_0049c778:;
  /* 0049c778 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c77a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c77b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049c780(CPU *c) {
  NATIVE_HOOK(0x49c780u) REGS; LOADALL;
L_0049c780:;
  /* 0049c780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c783 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c784 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c787 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c789 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049c78c jne 0x49c7bd */ if (!ZF_) goto L_0049c7bd;
  /* 0049c78e push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c793 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c798 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c799 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c79a push 0x321 */ { u32 v_ = 0x321u; esp -= 4; M32(esp) = v_; }
  /* 0049c79f push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049c7a4 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c7aau; SAVEALL; call_ind(c, t_); RETCHK(0x49c7aau, 0x49c7a4u); LOADALL; }
  /* 0049c7aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c7ab push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049c7ad push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c7af call 0x50b090 */ esp -= 4; M32(esp) = 0x49c7b4u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49c7afu); RETCHK(0x49c7b4u, 0x49c7afu); LOADALL;
  /* 0049c7b4 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049c7b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c7b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c7ba ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0049c7bd:;
  /* 0049c7bd call 0x49c7d0 */ esp -= 4; M32(esp) = 0x49c7c2u; SAVEALL; F_0049c7d0(c); ABI_CHECK(0x49c7d0u, 0x49c7bdu); RETCHK(0x49c7c2u, 0x49c7bdu); LOADALL;
  /* 0049c7c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c7c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c7c5 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049c7d0(CPU *c) {
  NATIVE_HOOK(0x49c7d0u) REGS; LOADALL;
L_0049c7d0:;
  /* 0049c7d0 cmp eax, -5 */ { u32 a_ = eax, b_ = 0xfffffffbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c7d3 je 0x49c7ef */ if (ZF_) goto L_0049c7ef;
  /* 0049c7d5 cmp eax, -3 */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c7d8 jne 0x49c81a */ if (!ZF_) goto L_0049c81a;
  /* 0049c7da push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c7df push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c7e4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c7e6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c7e8 push 0x2ba */ { u32 v_ = 0x2bau; esp -= 4; M32(esp) = v_; }
  /* 0049c7ed jmp 0x49c802 */ goto L_0049c802;
L_0049c7ef:;
  /* 0049c7ef push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0049c7f4 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0049c7f9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c7fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c7fd push 0x339 */ { u32 v_ = 0x339u; esp -= 4; M32(esp) = v_; }
L_0049c802:;
  /* 0049c802 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049c807 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49c80du; SAVEALL; call_ind(c, t_); RETCHK(0x49c80du, 0x49c807u); LOADALL; }
  /* 0049c80d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c80e push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049c810 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049c812 call 0x50b090 */ esp -= 4; M32(esp) = 0x49c817u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x49c812u); RETCHK(0x49c817u, 0x49c812u); LOADALL;
  /* 0049c817 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049c81a:;
  /* 0049c81a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c860(CPU *c) {
  NATIVE_HOOK(0x49c860u) REGS; LOADALL;
L_0049c860:;
  /* 0049c860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c863 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c864 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049c865 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c866 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049c867 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049c869 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0049c86c test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c86e jne 0x49c874 */ if (!ZF_) goto L_0049c874;
  /* 0049c870 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049c872 jmp 0x49c88a */ goto L_0049c88a;
L_0049c874:;
  /* 0049c874 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049c877 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049c879 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049c87e imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049c880 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049c883 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049c885 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049c888 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049c88a:;
  /* 0049c88a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c88c je 0x49c8ca */ if (ZF_) goto L_0049c8ca;
  /* 0049c88e mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049c891 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049c893 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049c898 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049c89a sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049c89d mov eax, edx */ { eax = (u32)(edx); }
  /* 0049c89f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049c8a2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049c8a4 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c8a6 jae 0x49c8ca */ if (!CF_) goto L_0049c8ca;
  /* 0049c8a8 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0049c8ab mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049c8ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c8af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c8b0 mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 0049c8b5 call 0x49d310 */ esp -= 4; M32(esp) = 0x49c8bau; SAVEALL; F_0049d310(c); ABI_CHECK(0x49d310u, 0x49c8b5u); RETCHK(0x49c8bau, 0x49c8b5u); LOADALL;
  /* 0049c8ba add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049c8bd add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049c8c0 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049c8c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049c8c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c8c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049c8c6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c8c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c8c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049c8ca:;
  /* 0049c8ca mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c8cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c8ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c8cf lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0049c8d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c8d3 call 0x49c970 */ esp -= 4; M32(esp) = 0x49c8d8u; SAVEALL; F_0049c970(c); ABI_CHECK(0x49c970u, 0x49c8d3u); RETCHK(0x49c8d8u, 0x49c8d3u); LOADALL;
  /* 0049c8d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049c8d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c8da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049c8db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049c8dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c8de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049c8e0(CPU *c) {
  NATIVE_HOOK(0x49c8e0u) REGS; LOADALL;
L_0049c8e0:;
  /* 0049c8e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c8e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c8e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049c8e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c8e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049c8e6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049c8e8 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049c8eb test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c8ed jne 0x49c8f3 */ if (!ZF_) goto L_0049c8f3;
  /* 0049c8ef xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049c8f1 jmp 0x49c90b */ goto L_0049c90b;
L_0049c8f3:;
  /* 0049c8f3 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049c8f6 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049c8f8 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049c8fd imul esi */ { s64 p_ = (s64)(s32)eax * (s32)esi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049c8ff add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049c901 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049c904 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0049c906 shr ebx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ebx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0049c909 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_0049c90b:;
  /* 0049c90b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c90d je 0x49c94d */ if (ZF_) goto L_0049c94d;
  /* 0049c90f mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049c912 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049c914 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049c919 imul esi */ { s64 p_ = (s64)(s32)eax * (s32)esi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049c91b add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049c91d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049c920 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049c922 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049c925 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049c927 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049c929 jae 0x49c94d */ if (!CF_) goto L_0049c94d;
  /* 0049c92b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c92e mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049c931 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049c934 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c935 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049c937 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c938 call 0x49d3b0 */ esp -= 4; M32(esp) = 0x49c93du; SAVEALL; F_0049d3b0(c); ABI_CHECK(0x49d3b0u, 0x49c938u); RETCHK(0x49c93du, 0x49c938u); LOADALL;
  /* 0049c93d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049c940 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049c943 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049c946 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049c947 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c948 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049c949 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c94a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0049c94d:;
  /* 0049c94d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049c950 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c953 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049c954 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049c955 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 0049c958 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049c959 call 0x49c9e0 */ esp -= 4; M32(esp) = 0x49c95eu; SAVEALL; F_0049c9e0(c); ABI_CHECK(0x49c9e0u, 0x49c959u); RETCHK(0x49c95eu, 0x49c959u); LOADALL;
  /* 0049c95e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049c95f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c960 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049c961 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c962 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049c970(CPU *c) {
  NATIVE_HOOK(0x49c970u) REGS; LOADALL;
L_0049c970:;
  /* 0049c970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c973 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049c974 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049c977 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c978 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0049c97b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c97d je 0x49c99a */ if (ZF_) goto L_0049c99a;
  /* 0049c97f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049c982 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049c984 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049c989 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049c98b sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049c98e mov eax, edx */ { eax = (u32)(edx); }
  /* 0049c990 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049c993 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049c995 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049c998 jne 0x49c99e */ if (!ZF_) goto L_0049c99e;
L_0049c99a:;
  /* 0049c99a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049c99c jmp 0x49c9b3 */ goto L_0049c9b3;
L_0049c99e:;
  /* 0049c99e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049c9a0 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049c9a2 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049c9a7 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049c9a9 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049c9ac mov esi, edx */ { esi = (u32)(edx); }
  /* 0049c9ae shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049c9b1 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049c9b3:;
  /* 0049c9b3 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049c9b6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049c9b8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049c9b9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049c9ba call 0x49ca70 */ esp -= 4; M32(esp) = 0x49c9bfu; SAVEALL; F_0049ca70(c); ABI_CHECK(0x49ca70u, 0x49c9bau); RETCHK(0x49c9bfu, 0x49c9bau); LOADALL;
  /* 0049c9bf mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049c9c2 lea ecx, [esi + esi*2] */ ecx = (u32)((u32)(esi + esi * 2u));
  /* 0049c9c5 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049c9c8 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049c9ca mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049c9cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049c9ce mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0049c9d0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049c9d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049c9d2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049c9e0(CPU *c) {
  NATIVE_HOOK(0x49c9e0u) REGS; LOADALL;
L_0049c9e0:;
  /* 0049c9e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049c9e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049c9e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049c9e4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049c9e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049c9e8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0049c9eb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049c9ed je 0x49ca0c */ if (ZF_) goto L_0049ca0c;
  /* 0049c9ef mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049c9f2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049c9f4 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049c9f9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049c9fb add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049c9fd sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049ca00 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049ca02 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049ca05 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ca07 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049ca0a jne 0x49ca10 */ if (!ZF_) goto L_0049ca10;
L_0049ca0c:;
  /* 0049ca0c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049ca0e jmp 0x49ca27 */ goto L_0049ca27;
L_0049ca10:;
  /* 0049ca10 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049ca12 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049ca14 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049ca19 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ca1b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ca1d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049ca20 mov esi, edx */ { esi = (u32)(edx); }
  /* 0049ca22 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049ca25 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0049ca27:;
  /* 0049ca27 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049ca2a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049ca2c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049ca2d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049ca2e call 0x49cdc0 */ esp -= 4; M32(esp) = 0x49ca33u; SAVEALL; F_0049cdc0(c); ABI_CHECK(0x49cdc0u, 0x49ca2eu); RETCHK(0x49ca33u, 0x49ca2eu); LOADALL;
  /* 0049ca33 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ca36 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ca39 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049ca3c mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0049ca3e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049ca3f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049ca40 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049ca41 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049ca50(CPU *c) {
  NATIVE_HOOK(0x49ca50u) REGS; LOADALL;
L_0049ca50:;
  /* 0049ca50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ca51 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049ca53 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ca55 je 0x49ca63 */ if (ZF_) goto L_0049ca63;
L_0049ca57:;
  /* 0049ca57 call 0x5577c0 */ esp -= 4; M32(esp) = 0x49ca5cu; SAVEALL; F_005577c0(c); ABI_CHECK(0x5577c0u, 0x49ca57u); RETCHK(0x49ca5cu, 0x49ca57u); LOADALL;
  /* 0049ca5c add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049ca5f cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ca61 jne 0x49ca57 */ if (!ZF_) goto L_0049ca57;
L_0049ca63:;
  /* 0049ca63 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049ca64 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049ca70(CPU *c) {
  NATIVE_HOOK(0x49ca70u) REGS; LOADALL;
L_0049ca70:;
  /* 0049ca70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049ca71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049ca73 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049ca75 push 0x61eb18 */ { u32 v_ = 0x61eb18u; esp -= 4; M32(esp) = v_; }
  /* 0049ca7a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049ca80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ca81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049ca88 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ca8b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049ca90 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049ca91 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0049ca94 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049ca95 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049ca98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049ca99 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049ca9c mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049ca9e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049caa0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049caa2 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049caa5 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0049caa8 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0049caaa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049caab lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0049caae mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 0049cab1 mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 0049cab8 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 0049cabf mov byte ptr [ebp - 0x3c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)(0x0u); }
  /* 0049cac3 call 0x404140 */ esp -= 4; M32(esp) = 0x49cac8u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49cac3u); RETCHK(0x49cac8u, 0x49cac3u); LOADALL;
  /* 0049cac8 mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049cacb mov al, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049cace mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0049cad1 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 0049cad4 mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0049cad7 mov byte ptr [ebp - 0x20], al */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049cada mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 0049cadd mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 0049cae0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0049cae2 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049cae5 mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0049cae8 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049caea je 0x49cb02 */ if (ZF_) goto L_0049cb02;
  /* 0049caec mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049caef sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049caf1 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049caf6 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049caf8 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cafb mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049cafd shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049cb00 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0049cb02:;
  /* 0049cb02 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cb04 je 0x49cd70 */ if (ZF_) goto L_0049cd70;
  /* 0049cb0a test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cb0c jne 0x49cb12 */ if (!ZF_) goto L_0049cb12;
  /* 0049cb0e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049cb10 jmp 0x49cb28 */ goto L_0049cb28;
L_0049cb12:;
  /* 0049cb12 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049cb15 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cb17 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049cb1c imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cb1e sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cb21 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cb23 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cb26 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049cb28:;
  /* 0049cb28 mov edx, 0x5555555 */ { edx = (u32)(0x5555555u); }
  /* 0049cb2d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cb2f cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cb31 jae 0x49cb38 */ if (!CF_) goto L_0049cb38;
  /* 0049cb33 call 0x49ac70 */ esp -= 4; M32(esp) = 0x49cb38u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x49cb33u); RETCHK(0x49cb38u, 0x49cb33u); LOADALL;
L_0049cb38:;
  /* 0049cb38 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cb3a jne 0x49cb40 */ if (!ZF_) goto L_0049cb40;
  /* 0049cb3c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049cb3e jmp 0x49cb56 */ goto L_0049cb56;
L_0049cb40:;
  /* 0049cb40 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049cb43 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cb45 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049cb4a imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cb4c sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cb4f mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cb51 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cb54 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049cb56:;
  /* 0049cb56 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cb58 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cb5a jae 0x49cc82 */ if (!CF_) goto L_0049cc82;
  /* 0049cb60 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049cb62 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cb64 mov edx, 0x5555555 */ { edx = (u32)(0x5555555u); }
  /* 0049cb69 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cb6b cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cb6d jae 0x49cb73 */ if (!CF_) goto L_0049cb73;
  /* 0049cb6f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0049cb71 jmp 0x49cb75 */ goto L_0049cb75;
L_0049cb73:;
  /* 0049cb73 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0049cb75:;
  /* 0049cb75 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cb77 jne 0x49cb7d */ if (!ZF_) goto L_0049cb7d;
  /* 0049cb79 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049cb7b jmp 0x49cb93 */ goto L_0049cb93;
L_0049cb7d:;
  /* 0049cb7d mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049cb80 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cb82 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049cb87 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cb89 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cb8c mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cb8e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cb91 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049cb93:;
  /* 0049cb93 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cb95 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cb97 jae 0x49cba4 */ if (!CF_) goto L_0049cba4;
  /* 0049cb99 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049cb9b call 0x40cc60 */ esp -= 4; M32(esp) = 0x49cba0u; SAVEALL; F_0040cc60(c); ABI_CHECK(0x40cc60u, 0x49cb9bu); RETCHK(0x49cba0u, 0x49cb9bu); LOADALL;
  /* 0049cba0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049cba2 add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0049cba4:;
  /* 0049cba4 lea ecx, [ecx + ecx*2] */ ecx = (u32)((u32)(ecx + ecx * 2u));
  /* 0049cba7 shl ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049cbaa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cbab mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0049cbae call 0x5fe934 */ esp -= 4; M32(esp) = 0x49cbb3u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x49cbaeu); RETCHK(0x49cbb3u, 0x49cbaeu); LOADALL;
  /* 0049cbb3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049cbb5 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0049cbb9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049cbbc mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049cbbf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cbc2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cbc3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049cbc4 mov dword ptr [ebp - 0x48], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(edi); }
  /* 0049cbc7 mov dword ptr [ebp - 0x4c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(edi); }
  /* 0049cbca call 0x49d7e0 */ esp -= 4; M32(esp) = 0x49cbcfu; SAVEALL; F_0049d7e0(c); ABI_CHECK(0x49d7e0u, 0x49cbcau); RETCHK(0x49cbcfu, 0x49cbcau); LOADALL;
  /* 0049cbcf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cbd2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cbd5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cbd6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cbd7 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049cbda mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049cbdc mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 0049cbdf call 0x49d310 */ esp -= 4; M32(esp) = 0x49cbe4u; SAVEALL; F_0049d310(c); ABI_CHECK(0x49d310u, 0x49cbdfu); RETCHK(0x49cbe4u, 0x49cbdfu); LOADALL;
  /* 0049cbe4 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 0049cbe7 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cbea lea edx, [ebx + ebx*2] */ edx = (u32)((u32)(ebx + ebx * 2u));
  /* 0049cbed shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cbf0 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cbf2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cbf5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cbf8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cbf9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cbfc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cbfd mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 0049cc00 call 0x49d7e0 */ esp -= 4; M32(esp) = 0x49cc05u; SAVEALL; F_0049d7e0(c); ABI_CHECK(0x49d7e0u, 0x49cc00u); RETCHK(0x49cc05u, 0x49cc00u); LOADALL;
  /* 0049cc05 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049cc08 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cc0b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cc0d jne 0x49cc13 */ if (!ZF_) goto L_0049cc13;
  /* 0049cc0f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049cc11 jmp 0x49cc29 */ goto L_0049cc29;
L_0049cc13:;
  /* 0049cc13 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049cc16 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cc18 mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049cc1d imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cc1f sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cc22 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cc24 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cc27 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049cc29:;
  /* 0049cc29 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cc2b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cc2d je 0x49cc48 */ if (ZF_) goto L_0049cc48;
  /* 0049cc2f mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049cc32 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049cc34 call 0x49ca50 */ esp -= 4; M32(esp) = 0x49cc39u; SAVEALL; F_0049ca50(c); ABI_CHECK(0x49ca50u, 0x49cc34u); RETCHK(0x49cc39u, 0x49cc34u); LOADALL;
  /* 0049cc39 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049cc3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cc3d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49cc42u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49cc3du); RETCHK(0x49cc42u, 0x49cc3du); LOADALL;
  /* 0049cc42 mov edi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); edi = (u32)(M32(m_)); }
  /* 0049cc45 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049cc48:;
  /* 0049cc48 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049cc4b lea edx, [ebx + ebx*2] */ edx = (u32)((u32)(ebx + ebx * 2u));
  /* 0049cc4e add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049cc50 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cc53 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cc55 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0049cc58 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0049cc5b mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0049cc5e jmp 0x49cd70 */ goto L_0049cd70;
L_0049cc82:;
  /* 0049cc82 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cc85 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0049cc88 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049cc8a sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cc8c mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049cc91 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cc93 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cc96 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cc98 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cc9b lea edi, [ebx + ebx*2] */ edi = (u32)((u32)(ebx + ebx * 2u));
  /* 0049cc9e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cca0 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0049cca3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cca5 mov dword ptr [ebp - 0x48], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ecx); }
  /* 0049cca8 jae 0x49cd3c */ if (!CF_) goto L_0049cd3c;
  /* 0049ccae mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ccb1 lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 0049ccb4 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ccb7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ccb8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ccbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ccbc call 0x49d7e0 */ esp -= 4; M32(esp) = 0x49ccc1u; SAVEALL; F_0049d7e0(c); ABI_CHECK(0x49d7e0u, 0x49ccbcu); RETCHK(0x49ccc1u, 0x49ccbcu); LOADALL;
  /* 0049ccc1 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0049ccc5 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049ccc8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049cccb mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049cccd sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cccf mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049ccd4 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ccd6 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049ccd9 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049ccdb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049ccde add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cce0 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cce3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cce4 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cce6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cce7 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049ccea mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049ccec call 0x49d310 */ esp -= 4; M32(esp) = 0x49ccf1u; SAVEALL; F_0049d310(c); ABI_CHECK(0x49d310u, 0x49ccecu); RETCHK(0x49ccf1u, 0x49ccecu); LOADALL;
  /* 0049ccf1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049ccf8 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049ccfb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049ccfe add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cd00 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049cd03 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049cd05 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049cd07 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cd0a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049cd0b lea edi, [ebp - 0x44] */ edi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049cd0e call 0x49d130 */ esp -= 4; M32(esp) = 0x49cd13u; SAVEALL; F_0049d130(c); ABI_CHECK(0x49d130u, 0x49cd0eu); RETCHK(0x49cd13u, 0x49cd0eu); LOADALL;
  /* 0049cd13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cd16 jmp 0x49cd70 */ goto L_0049cd70;
L_0049cd3c:;
  /* 0049cd3c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049cd3f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049cd41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cd42 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cd44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cd45 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049cd47 call 0x49d7e0 */ esp -= 4; M32(esp) = 0x49cd4cu; SAVEALL; F_0049d7e0(c); ABI_CHECK(0x49d7e0u, 0x49cd47u); RETCHK(0x49cd4cu, 0x49cd47u); LOADALL;
  /* 0049cd4c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cd4f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cd50 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049cd53 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0049cd56 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049cd58 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049cd5b call 0x49d4b0 */ esp -= 4; M32(esp) = 0x49cd60u; SAVEALL; F_0049d4b0(c); ABI_CHECK(0x49d4b0u, 0x49cd5bu); RETCHK(0x49cd60u, 0x49cd5bu); LOADALL;
  /* 0049cd60 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049cd62 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049cd63 lea edi, [ebp - 0x44] */ edi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049cd66 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049cd68 call 0x49d130 */ esp -= 4; M32(esp) = 0x49cd6du; SAVEALL; F_0049d130(c); ABI_CHECK(0x49d130u, 0x49cd68u); RETCHK(0x49cd6du, 0x49cd68u); LOADALL;
  /* 0049cd6d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049cd70:;
  /* 0049cd70 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cd74 jb 0x49cd82 */ if (CF_) goto L_0049cd82;
  /* 0049cd76 mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 0049cd79 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cd7a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49cd7fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49cd7au); RETCHK(0x49cd7fu, 0x49cd7au); LOADALL;
  /* 0049cd7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049cd82:;
  /* 0049cd82 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049cd85 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049cd8c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049cd8f call 0x61af31 */ esp -= 4; M32(esp) = 0x49cd94u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49cd8fu); RETCHK(0x49cd94u, 0x49cd8fu); LOADALL;
  /* 0049cd94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049cd95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049cd96 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049cd97 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049cd99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049cd9a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049cc63(CPU *c) {
  NATIVE_HOOK(0x49cc63u) REGS; LOADALL;
L_0049cc63:;
  /* 0049cc63 mov esi, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); esi = (u32)(M32(m_)); }
  /* 0049cc66 mov edi, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edi = (u32)(M32(m_)); }
  /* 0049cc69 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049cc6b call 0x49ca50 */ esp -= 4; M32(esp) = 0x49cc70u; SAVEALL; F_0049ca50(c); ABI_CHECK(0x49ca50u, 0x49cc6bu); RETCHK(0x49cc70u, 0x49cc6bu); LOADALL;
  /* 0049cc70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049cc71 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49cc76u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49cc71u); RETCHK(0x49cc76u, 0x49cc71u); LOADALL;
  /* 0049cc76 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cc79 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049cc7b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049cc7d call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049cc82 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cc85 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0049cc88 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049cc8a sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cc8c mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049cc91 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cc93 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cc96 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cc98 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cc9b lea edi, [ebx + ebx*2] */ edi = (u32)((u32)(ebx + ebx * 2u));
  /* 0049cc9e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cca0 shl edi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0049cca3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cca5 mov dword ptr [ebp - 0x48], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(ecx); }
  /* 0049cca8 jae 0x49cd3c */ if (!CF_) goto L_0049cd3c;
  /* 0049ccae mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ccb1 lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 0049ccb4 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ccb7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ccb8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ccbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ccbc call 0x49d7e0 */ esp -= 4; M32(esp) = 0x49ccc1u; SAVEALL; F_0049d7e0(c); ABI_CHECK(0x49d7e0u, 0x49ccbcu); RETCHK(0x49ccc1u, 0x49ccbcu); LOADALL;
  /* 0049ccc1 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0049ccc5 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049ccc8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049cccb mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0049cccd sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cccf mov eax, 0x2aaaaaab */ { eax = (u32)(0x2aaaaaabu); }
  /* 0049ccd4 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ccd6 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049ccd9 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049ccdb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049ccde add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cce0 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cce3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cce4 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cce6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cce7 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049ccea mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049ccec call 0x49d310 */ esp -= 4; M32(esp) = 0x49ccf1u; SAVEALL; F_0049d310(c); ABI_CHECK(0x49d310u, 0x49ccecu); RETCHK(0x49ccf1u, 0x49ccecu); LOADALL;
  /* 0049ccf1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049ccf8 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049ccfb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049ccfe add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cd00 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049cd03 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049cd05 sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049cd07 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cd0a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049cd0b lea edi, [ebp - 0x44] */ edi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049cd0e call 0x49d130 */ esp -= 4; M32(esp) = 0x49cd13u; SAVEALL; F_0049d130(c); ABI_CHECK(0x49d130u, 0x49cd0eu); RETCHK(0x49cd13u, 0x49cd0eu); LOADALL;
  /* 0049cd13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cd16 jmp 0x49cd70 */ goto L_0049cd70;
L_0049cd3c:;
  /* 0049cd3c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049cd3f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049cd41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cd42 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cd44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cd45 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049cd47 call 0x49d7e0 */ esp -= 4; M32(esp) = 0x49cd4cu; SAVEALL; F_0049d7e0(c); ABI_CHECK(0x49d7e0u, 0x49cd47u); RETCHK(0x49cd4cu, 0x49cd47u); LOADALL;
  /* 0049cd4c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cd4f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cd50 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049cd53 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0049cd56 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049cd58 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049cd5b call 0x49d4b0 */ esp -= 4; M32(esp) = 0x49cd60u; SAVEALL; F_0049d4b0(c); ABI_CHECK(0x49d4b0u, 0x49cd5bu); RETCHK(0x49cd60u, 0x49cd5bu); LOADALL;
  /* 0049cd60 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049cd62 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049cd63 lea edi, [ebp - 0x44] */ edi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049cd66 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049cd68 call 0x49d130 */ esp -= 4; M32(esp) = 0x49cd6du; SAVEALL; F_0049d130(c); ABI_CHECK(0x49d130u, 0x49cd68u); RETCHK(0x49cd6du, 0x49cd68u); LOADALL;
  /* 0049cd6d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049cd70:;
  /* 0049cd70 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cd74 jb 0x49cd82 */ if (CF_) goto L_0049cd82;
  /* 0049cd76 mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 0049cd79 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cd7a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49cd7fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49cd7au); RETCHK(0x49cd7fu, 0x49cd7au); LOADALL;
  /* 0049cd7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049cd82:;
  /* 0049cd82 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049cd85 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049cd8c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049cd8f call 0x61af31 */ esp -= 4; M32(esp) = 0x49cd94u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49cd8fu); RETCHK(0x49cd94u, 0x49cd8fu); LOADALL;
  /* 0049cd94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049cd95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049cd96 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049cd97 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049cd99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049cd9a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049cd18(CPU *c) {
  NATIVE_HOOK(0x49cd18u) REGS; LOADALL;
L_0049cd18:;
  /* 0049cd18 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049cd1b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cd1e mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049cd21 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cd24 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 0049cd27 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cd2a add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049cd2c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cd2e call 0x49ca50 */ esp -= 4; M32(esp) = 0x49cd33u; SAVEALL; F_0049ca50(c); ABI_CHECK(0x49ca50u, 0x49cd2eu); RETCHK(0x49cd33u, 0x49cd2eu); LOADALL;
  /* 0049cd33 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049cd35 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049cd37 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049cd3c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049cd3f mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049cd41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cd42 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049cd44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cd45 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0049cd47 call 0x49d7e0 */ esp -= 4; M32(esp) = 0x49cd4cu; SAVEALL; F_0049d7e0(c); ABI_CHECK(0x49d7e0u, 0x49cd47u); RETCHK(0x49cd4cu, 0x49cd47u); LOADALL;
  /* 0049cd4c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cd4f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cd50 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049cd53 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0049cd56 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049cd58 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049cd5b call 0x49d4b0 */ esp -= 4; M32(esp) = 0x49cd60u; SAVEALL; F_0049d4b0(c); ABI_CHECK(0x49d4b0u, 0x49cd5bu); RETCHK(0x49cd60u, 0x49cd5bu); LOADALL;
  /* 0049cd60 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049cd62 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049cd63 lea edi, [ebp - 0x44] */ edi = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049cd66 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049cd68 call 0x49d130 */ esp -= 4; M32(esp) = 0x49cd6du; SAVEALL; F_0049d130(c); ABI_CHECK(0x49d130u, 0x49cd68u); RETCHK(0x49cd6du, 0x49cd68u); LOADALL;
  /* 0049cd6d add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cd70 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cd74 jb 0x49cd82 */ if (CF_) goto L_0049cd82;
  /* 0049cd76 mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 0049cd79 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cd7a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49cd7fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49cd7au); RETCHK(0x49cd7fu, 0x49cd7au); LOADALL;
  /* 0049cd7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049cd82:;
  /* 0049cd82 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049cd85 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049cd8c mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049cd8f call 0x61af31 */ esp -= 4; M32(esp) = 0x49cd94u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49cd8fu); RETCHK(0x49cd94u, 0x49cd8fu); LOADALL;
  /* 0049cd94 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049cd95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049cd96 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049cd97 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049cd99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049cd9a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049cda0(CPU *c) {
  NATIVE_HOOK(0x49cda0u) REGS; LOADALL;
L_0049cda0:;
  /* 0049cda0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049cda1 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049cda3 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cda5 je 0x49cdb3 */ if (ZF_) goto L_0049cdb3;
L_0049cda7:;
  /* 0049cda7 call 0x5577c0 */ esp -= 4; M32(esp) = 0x49cdacu; SAVEALL; F_005577c0(c); ABI_CHECK(0x5577c0u, 0x49cda7u); RETCHK(0x49cdacu, 0x49cda7u); LOADALL;
  /* 0049cdac add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049cdaf cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cdb1 jne 0x49cda7 */ if (!ZF_) goto L_0049cda7;
L_0049cdb3:;
  /* 0049cdb3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049cdb4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049cdc0(CPU *c) {
  NATIVE_HOOK(0x49cdc0u) REGS; LOADALL;
L_0049cdc0:;
  /* 0049cdc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049cdc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049cdc3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049cdc5 push 0x61eaf8 */ { u32 v_ = 0x61eaf8u; esp -= 4; M32(esp) = v_; }
  /* 0049cdca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049cdd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cdd1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049cdd8 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cddb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049cde0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049cde1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049cde4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049cde5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049cde6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049cde8 lea esi, [ebp - 0x50] */ esi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049cdeb mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0049cdee mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049cdf1 call 0x49d0d0 */ esp -= 4; M32(esp) = 0x49cdf6u; SAVEALL; F_0049d0d0(c); ABI_CHECK(0x49d0d0u, 0x49cdf1u); RETCHK(0x49cdf6u, 0x49cdf1u); LOADALL;
  /* 0049cdf6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0049cdf8 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0049cdfb mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0049cdfe cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ce00 je 0x49ce1a */ if (ZF_) goto L_0049ce1a;
  /* 0049ce02 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049ce05 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049ce07 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049ce0c imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ce0e add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ce10 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049ce13 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049ce15 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049ce18 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0049ce1a:;
  /* 0049ce1a mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049ce1d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ce1f je 0x49d099 */ if (ZF_) goto L_0049d099;
  /* 0049ce25 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ce27 jne 0x49ce2d */ if (!ZF_) goto L_0049ce2d;
  /* 0049ce29 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049ce2b jmp 0x49ce48 */ goto L_0049ce48;
L_0049ce2d:;
  /* 0049ce2d mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049ce30 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049ce33 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049ce35 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049ce3a imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ce3c add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ce3e sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049ce41 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049ce43 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049ce46 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049ce48:;
  /* 0049ce48 mov edx, 0x4444444 */ { edx = (u32)(0x4444444u); }
  /* 0049ce4d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ce4f cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ce51 jae 0x49ce58 */ if (!CF_) goto L_0049ce58;
  /* 0049ce53 call 0x49ac70 */ esp -= 4; M32(esp) = 0x49ce58u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x49ce53u); RETCHK(0x49ce58u, 0x49ce53u); LOADALL;
L_0049ce58:;
  /* 0049ce58 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049ce5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049ce5d jne 0x49ce63 */ if (!ZF_) goto L_0049ce63;
  /* 0049ce5f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049ce61 jmp 0x49ce7e */ goto L_0049ce7e;
L_0049ce63:;
  /* 0049ce63 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049ce66 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049ce69 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049ce6b mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049ce70 imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ce72 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ce74 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049ce77 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049ce79 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049ce7c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049ce7e:;
  /* 0049ce7e add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049ce80 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ce82 jae 0x49cfab */ if (!CF_) goto L_0049cfab;
  /* 0049ce88 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0049ce8a shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049ce8c mov edx, 0x4444444 */ { edx = (u32)(0x4444444u); }
  /* 0049ce91 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ce93 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ce95 jae 0x49ce9b */ if (!CF_) goto L_0049ce9b;
  /* 0049ce97 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0049ce99 jmp 0x49ce9d */ goto L_0049ce9d;
L_0049ce9b:;
  /* 0049ce9b add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0049ce9d:;
  /* 0049ce9d mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049cea0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cea2 jne 0x49cea8 */ if (!ZF_) goto L_0049cea8;
  /* 0049cea4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049cea6 jmp 0x49cec3 */ goto L_0049cec3;
L_0049cea8:;
  /* 0049cea8 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049ceab mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049ceae sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049ceb0 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049ceb5 imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ceb7 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049ceb9 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cebc mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cebe shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cec1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049cec3:;
  /* 0049cec3 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cec5 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cec7 jae 0x49ced4 */ if (!CF_) goto L_0049ced4;
  /* 0049cec9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049cecb call 0x45d4a0 */ esp -= 4; M32(esp) = 0x49ced0u; SAVEALL; F_0045d4a0(c); ABI_CHECK(0x45d4a0u, 0x49cecbu); RETCHK(0x49ced0u, 0x49cecbu); LOADALL;
  /* 0049ced0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049ced2 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0049ced4:;
  /* 0049ced4 imul ecx, ecx, 0x3c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049ced7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049ced8 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0049cedb call 0x5fe934 */ esp -= 4; M32(esp) = 0x49cee0u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x49cedbu); RETCHK(0x49cee0u, 0x49cedbu); LOADALL;
  /* 0049cee0 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049cee2 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0049cee6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049cee9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049ceec mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049ceef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cef0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049cef1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cef2 mov dword ptr [ebp - 0x54], edi */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edi); }
  /* 0049cef5 mov dword ptr [ebp - 0x58], edi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(edi); }
  /* 0049cef8 call 0x49d890 */ esp -= 4; M32(esp) = 0x49cefdu; SAVEALL; F_0049d890(c); ABI_CHECK(0x49d890u, 0x49cef8u); RETCHK(0x49cefdu, 0x49cef8u); LOADALL;
  /* 0049cefd mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cf00 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cf03 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cf04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049cf05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cf06 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049cf09 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 0049cf0c call 0x49d3b0 */ esp -= 4; M32(esp) = 0x49cf11u; SAVEALL; F_0049d3b0(c); ABI_CHECK(0x49d3b0u, 0x49cf0cu); RETCHK(0x49cf11u, 0x49cf0cu); LOADALL;
  /* 0049cf11 mov ecx, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ecx = (u32)(M32(m_)); }
  /* 0049cf14 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049cf17 mov edx, esi */ { edx = (u32)(esi); }
  /* 0049cf19 imul edx, edx, 0x3c */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cf1c add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049cf1e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cf21 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cf24 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cf25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cf26 mov dword ptr [ebp - 0x58], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ecx); }
  /* 0049cf29 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cf2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cf2d call 0x49d890 */ esp -= 4; M32(esp) = 0x49cf32u; SAVEALL; F_0049d890(c); ABI_CHECK(0x49d890u, 0x49cf2du); RETCHK(0x49cf32u, 0x49cf2du); LOADALL;
  /* 0049cf32 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049cf35 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cf38 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cf3a je 0x49cf54 */ if (ZF_) goto L_0049cf54;
  /* 0049cf3c mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cf3f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049cf41 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049cf46 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cf48 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cf4a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cf4d mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cf4f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cf52 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0049cf54:;
  /* 0049cf54 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049cf56 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049cf59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049cf5b je 0x49cf74 */ if (ZF_) goto L_0049cf74;
  /* 0049cf5d mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049cf60 call 0x49cda0 */ esp -= 4; M32(esp) = 0x49cf65u; SAVEALL; F_0049cda0(c); ABI_CHECK(0x49cda0u, 0x49cf60u); RETCHK(0x49cf65u, 0x49cf60u); LOADALL;
  /* 0049cf65 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049cf68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cf69 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49cf6eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49cf69u); RETCHK(0x49cf6eu, 0x49cf69u); LOADALL;
  /* 0049cf6e mov edi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edi = (u32)(M32(m_)); }
  /* 0049cf71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049cf74:;
  /* 0049cf74 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049cf77 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cf7a add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049cf7c add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049cf7e mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0049cf81 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049cf84 mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 0049cf87 jmp 0x49d099 */ goto L_0049d099;
L_0049cfab:;
  /* 0049cfab mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cfae mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cfb1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049cfb3 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049cfb5 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049cfba imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cfbc add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cfbe sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cfc1 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cfc3 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cfc6 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cfc8 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cfca mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cfcd mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 0049cfd0 jae 0x49d064 */ if (!CF_) goto L_0049d064;
  /* 0049cfd6 mov edi, esi */ { edi = (u32)(esi); }
  /* 0049cfd8 imul edi, edi, 0x3c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cfdb lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 0049cfde mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cfe1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cfe2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cfe3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cfe4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cfe7 call 0x49d890 */ esp -= 4; M32(esp) = 0x49cfecu; SAVEALL; F_0049d890(c); ABI_CHECK(0x49d890u, 0x49cfe7u); RETCHK(0x49cfecu, 0x49cfe7u); LOADALL;
  /* 0049cfec mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0049cff0 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cff3 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049cff6 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049cffb imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cffd add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cfff mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049d002 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d005 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d007 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d00a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d00c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d00d sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d00f mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d012 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d013 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d014 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049d017 call 0x49d3b0 */ esp -= 4; M32(esp) = 0x49d01cu; SAVEALL; F_0049d3b0(c); ABI_CHECK(0x49d3b0u, 0x49d017u); RETCHK(0x49d01cu, 0x49d017u); LOADALL;
  /* 0049d01c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049d023 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049d026 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d029 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d02b mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049d02e mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049d030 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049d032 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d035 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d036 lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049d039 call 0x49d180 */ esp -= 4; M32(esp) = 0x49d03eu; SAVEALL; F_0049d180(c); ABI_CHECK(0x49d180u, 0x49d039u); RETCHK(0x49d03eu, 0x49d039u); LOADALL;
  /* 0049d03e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d041 jmp 0x49d099 */ goto L_0049d099;
L_0049d064:;
  /* 0049d064 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d067 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d068 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049d06a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d06b sub edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d06d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d06e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d070 call 0x49d890 */ esp -= 4; M32(esp) = 0x49d075u; SAVEALL; F_0049d890(c); ABI_CHECK(0x49d890u, 0x49d070u); RETCHK(0x49d075u, 0x49d070u); LOADALL;
  /* 0049d075 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049d078 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d07b mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049d07e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d07f mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 0049d082 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d084 call 0x49d500 */ esp -= 4; M32(esp) = 0x49d089u; SAVEALL; F_0049d500(c); ABI_CHECK(0x49d500u, 0x49d084u); RETCHK(0x49d089u, 0x49d084u); LOADALL;
  /* 0049d089 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d08b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d08c lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049d08f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049d091 call 0x49d180 */ esp -= 4; M32(esp) = 0x49d096u; SAVEALL; F_0049d180(c); ABI_CHECK(0x49d180u, 0x49d091u); RETCHK(0x49d096u, 0x49d091u); LOADALL;
  /* 0049d096 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d099:;
  /* 0049d099 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d09d jb 0x49d0ab */ if (CF_) goto L_0049d0ab;
  /* 0049d09f mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0049d0a2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d0a3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49d0a8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49d0a3u); RETCHK(0x49d0a8u, 0x49d0a3u); LOADALL;
  /* 0049d0a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d0ab:;
  /* 0049d0ab mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d0ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d0b5 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049d0b8 call 0x61af31 */ esp -= 4; M32(esp) = 0x49d0bdu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49d0b8u); RETCHK(0x49d0bdu, 0x49d0b8u); LOADALL;
  /* 0049d0bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d0be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d0bf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d0c0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d0c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d0c3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049cf8c(CPU *c) {
  NATIVE_HOOK(0x49cf8cu) REGS; LOADALL;
L_0049cf8c:;
  /* 0049cf8c mov esi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); esi = (u32)(M32(m_)); }
  /* 0049cf8f mov edi, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); edi = (u32)(M32(m_)); }
  /* 0049cf92 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049cf94 call 0x49cda0 */ esp -= 4; M32(esp) = 0x49cf99u; SAVEALL; F_0049cda0(c); ABI_CHECK(0x49cda0u, 0x49cf94u); RETCHK(0x49cf99u, 0x49cf94u); LOADALL;
  /* 0049cf99 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049cf9a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49cf9fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49cf9au); RETCHK(0x49cf9fu, 0x49cf9au); LOADALL;
  /* 0049cf9f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049cfa2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049cfa4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049cfa6 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049cfab mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cfae mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cfb1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049cfb3 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049cfb5 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049cfba imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cfbc add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cfbe sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049cfc1 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049cfc3 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049cfc6 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049cfc8 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049cfca mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cfcd mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 0049cfd0 jae 0x49d064 */ if (!CF_) goto L_0049d064;
  /* 0049cfd6 mov edi, esi */ { edi = (u32)(esi); }
  /* 0049cfd8 imul edi, edi, 0x3c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cfdb lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 0049cfde mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049cfe1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049cfe2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049cfe3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049cfe4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049cfe7 call 0x49d890 */ esp -= 4; M32(esp) = 0x49cfecu; SAVEALL; F_0049d890(c); ABI_CHECK(0x49d890u, 0x49cfe7u); RETCHK(0x49cfecu, 0x49cfe7u); LOADALL;
  /* 0049cfec mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0049cff0 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049cff3 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049cff6 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049cffb imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049cffd add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049cfff mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049d002 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d005 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d007 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d00a add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d00c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d00d sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d00f mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d012 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d013 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d014 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049d017 call 0x49d3b0 */ esp -= 4; M32(esp) = 0x49d01cu; SAVEALL; F_0049d3b0(c); ABI_CHECK(0x49d3b0u, 0x49d017u); RETCHK(0x49d01cu, 0x49d017u); LOADALL;
  /* 0049d01c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049d023 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049d026 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d029 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d02b mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049d02e mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049d030 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049d032 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d035 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d036 lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049d039 call 0x49d180 */ esp -= 4; M32(esp) = 0x49d03eu; SAVEALL; F_0049d180(c); ABI_CHECK(0x49d180u, 0x49d039u); RETCHK(0x49d03eu, 0x49d039u); LOADALL;
  /* 0049d03e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d041 jmp 0x49d099 */ goto L_0049d099;
L_0049d064:;
  /* 0049d064 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d067 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d068 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049d06a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d06b sub edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d06d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d06e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d070 call 0x49d890 */ esp -= 4; M32(esp) = 0x49d075u; SAVEALL; F_0049d890(c); ABI_CHECK(0x49d890u, 0x49d070u); RETCHK(0x49d075u, 0x49d070u); LOADALL;
  /* 0049d075 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049d078 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d07b mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049d07e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d07f mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 0049d082 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d084 call 0x49d500 */ esp -= 4; M32(esp) = 0x49d089u; SAVEALL; F_0049d500(c); ABI_CHECK(0x49d500u, 0x49d084u); RETCHK(0x49d089u, 0x49d084u); LOADALL;
  /* 0049d089 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d08b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d08c lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049d08f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049d091 call 0x49d180 */ esp -= 4; M32(esp) = 0x49d096u; SAVEALL; F_0049d180(c); ABI_CHECK(0x49d180u, 0x49d091u); RETCHK(0x49d096u, 0x49d091u); LOADALL;
  /* 0049d096 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d099:;
  /* 0049d099 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d09d jb 0x49d0ab */ if (CF_) goto L_0049d0ab;
  /* 0049d09f mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0049d0a2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d0a3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49d0a8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49d0a3u); RETCHK(0x49d0a8u, 0x49d0a3u); LOADALL;
  /* 0049d0a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d0ab:;
  /* 0049d0ab mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d0ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d0b5 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049d0b8 call 0x61af31 */ esp -= 4; M32(esp) = 0x49d0bdu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49d0b8u); RETCHK(0x49d0bdu, 0x49d0b8u); LOADALL;
  /* 0049d0bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d0be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d0bf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d0c0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d0c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d0c3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049d043(CPU *c) {
  NATIVE_HOOK(0x49d043u) REGS; LOADALL;
L_0049d043:;
  /* 0049d043 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049d046 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0049d049 imul eax, eax, 0x3c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d04c mov edi, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049d04f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049d052 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d054 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d056 call 0x49cda0 */ esp -= 4; M32(esp) = 0x49d05bu; SAVEALL; F_0049cda0(c); ABI_CHECK(0x49cda0u, 0x49d056u); RETCHK(0x49d05bu, 0x49d056u); LOADALL;
  /* 0049d05b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d05d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d05f call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049d064 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d067 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d068 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049d06a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d06b sub edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d06d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d06e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d070 call 0x49d890 */ esp -= 4; M32(esp) = 0x49d075u; SAVEALL; F_0049d890(c); ABI_CHECK(0x49d890u, 0x49d070u); RETCHK(0x49d075u, 0x49d070u); LOADALL;
  /* 0049d075 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049d078 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d07b mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049d07e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d07f mov eax, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M32(m_)); }
  /* 0049d082 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d084 call 0x49d500 */ esp -= 4; M32(esp) = 0x49d089u; SAVEALL; F_0049d500(c); ABI_CHECK(0x49d500u, 0x49d084u); RETCHK(0x49d089u, 0x49d084u); LOADALL;
  /* 0049d089 add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d08b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d08c lea edi, [ebp - 0x50] */ edi = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0049d08f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049d091 call 0x49d180 */ esp -= 4; M32(esp) = 0x49d096u; SAVEALL; F_0049d180(c); ABI_CHECK(0x49d180u, 0x49d091u); RETCHK(0x49d096u, 0x49d091u); LOADALL;
  /* 0049d096 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d099 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d09d jb 0x49d0ab */ if (CF_) goto L_0049d0ab;
  /* 0049d09f mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0049d0a2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d0a3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49d0a8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49d0a3u); RETCHK(0x49d0a8u, 0x49d0a3u); LOADALL;
  /* 0049d0a8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d0ab:;
  /* 0049d0ab mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d0ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d0b5 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0049d0b8 call 0x61af31 */ esp -= 4; M32(esp) = 0x49d0bdu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49d0b8u); RETCHK(0x49d0bdu, 0x49d0b8u); LOADALL;
  /* 0049d0bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d0be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d0bf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d0c0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d0c2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d0c3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0049d0d0(CPU *c) {
  NATIVE_HOOK(0x49d0d0u) REGS; LOADALL;
L_0049d0d0:;
  /* 0049d0d0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0049d0d2 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0049d0d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049d0d6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d0d8 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d0db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d0dc lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 0049d0df mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0049d0e6 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0049d0e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d0ea mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049d0ed call 0x404140 */ esp -= 4; M32(esp) = 0x49d0f2u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d0edu); RETCHK(0x49d0f2u, 0x49d0edu); LOADALL;
  /* 0049d0f2 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0049d0f5 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0049d0f8 mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0049d0fb mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0049d0fe mov dl, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d101 mov byte ptr [esi + 0x28], dl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049d104 mov al, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d107 mov byte ptr [esi + 0x29], al */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049d10a mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0049d10d mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0049d110 mov edx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); edx = (u32)(M32(m_)); }
  /* 0049d113 mov dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edx); }
  /* 0049d116 mov eax, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (u32)(M32(m_)); }
  /* 0049d119 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0049d11c mov ecx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0049d11f mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0049d122 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049d124 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d130(CPU *c) {
  NATIVE_HOOK(0x49d130u) REGS; LOADALL;
L_0049d130:;
  /* 0049d130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d133 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d134 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049d136 cmp esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d139 je 0x49d174 */ if (ZF_) goto L_0049d174;
  /* 0049d13b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d13c lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
  /* 0049d13f nop */ ;
L_0049d140:;
  /* 0049d140 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0049d142 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d144 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d146 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d147 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d14a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0049d14c call 0x404140 */ esp -= 4; M32(esp) = 0x49d151u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d14cu); RETCHK(0x49d151u, 0x49d14cu); LOADALL;
  /* 0049d151 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0049d154 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0049d157 mov dl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d15a mov byte ptr [esi + 0x24], dl */ { const u32 m_ = (u32)(esi + 0x24u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049d15d mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0049d160 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 0049d163 mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0049d166 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d169 mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0049d16c add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d16f cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d171 jne 0x49d140 */ if (!ZF_) goto L_0049d140;
  /* 0049d173 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0049d174:;
  /* 0049d174 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d175 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d176 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d180(CPU *c) {
  NATIVE_HOOK(0x49d180u) REGS; LOADALL;
L_0049d180:;
  /* 0049d180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d183 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d184 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049d186 cmp esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d189 je 0x49d1dc */ if (ZF_) goto L_0049d1dc;
  /* 0049d18b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d18c lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
  /* 0049d18f nop */ ;
L_0049d190:;
  /* 0049d190 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0049d192 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d194 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d196 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d197 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d19a mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0049d19c call 0x404140 */ esp -= 4; M32(esp) = 0x49d1a1u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d19cu); RETCHK(0x49d1a1u, 0x49d19cu); LOADALL;
  /* 0049d1a1 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0049d1a4 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0049d1a7 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 0049d1aa mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
  /* 0049d1ad mov al, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d1b0 mov byte ptr [esi + 0x28], al */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049d1b3 mov cl, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d1b6 mov byte ptr [esi + 0x29], cl */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049d1b9 mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0049d1bc mov dword ptr [esi + 0x2c], edx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0049d1bf mov eax, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); eax = (u32)(M32(m_)); }
  /* 0049d1c2 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0049d1c5 mov ecx, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0049d1c8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d1cb mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0049d1ce mov edx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); edx = (u32)(M32(m_)); }
  /* 0049d1d1 mov dword ptr [esi + 0x38], edx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(edx); }
  /* 0049d1d4 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d1d7 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d1d9 jne 0x49d190 */ if (!ZF_) goto L_0049d190;
  /* 0049d1db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0049d1dc:;
  /* 0049d1dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d1dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d1de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d1e0(CPU *c) {
  NATIVE_HOOK(0x49d1e0u) REGS; LOADALL;
L_0049d1e0:;
  /* 0049d1e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d1e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d1e3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d1e6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d1e7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049d1ea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d1eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d1ec mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0049d1ef mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d1f1 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d1f3 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d1f8 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d1fa add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d1fc sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d1ff mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d201 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d204 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d206 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d209 jle 0x49d2bd */ if ((ZF_|LT_)) goto L_0049d2bd;
  /* 0049d20f mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
L_0049d212:;
  /* 0049d212 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049d214 jle 0x49d2d3 */ if ((ZF_|LT_)) goto L_0049d2d3;
  /* 0049d21a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d21b lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0049d21e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d21f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d220 call 0x49d570 */ esp -= 4; M32(esp) = 0x49d225u; SAVEALL; F_0049d570(c); ABI_CHECK(0x49d570u, 0x49d220u); RETCHK(0x49d225u, 0x49d220u); LOADALL;
  /* 0049d225 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049d227 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049d228 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d22a sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d22c mov esi, eax */ { esi = (u32)(eax); }
  /* 0049d22e cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049d22f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d231 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0049d234 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d236 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d238 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d23a sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d23c mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d241 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d243 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d245 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0049d248 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d24b mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d24d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d250 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d252 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d254 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049d257 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d25c imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d25e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d261 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d263 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d266 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049d268 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049d26b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d26e add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d270 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d272 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d273 jge 0x49d28a */ if (!LT_) goto L_0049d28a;
  /* 0049d275 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0049d278 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d27b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d27c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d27d call 0x49d1e0 */ esp -= 4; M32(esp) = 0x49d282u; SAVEALL; F_0049d1e0(c); ABI_CHECK(0x49d1e0u, 0x49d27du); RETCHK(0x49d282u, 0x49d27du); LOADALL;
  /* 0049d282 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0049d285 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0049d288 jmp 0x49d29a */ goto L_0049d29a;
L_0049d28a:;
  /* 0049d28a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0049d28d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d28e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d28f call 0x49d1e0 */ esp -= 4; M32(esp) = 0x49d294u; SAVEALL; F_0049d1e0(c); ABI_CHECK(0x49d1e0u, 0x49d28fu); RETCHK(0x49d294u, 0x49d28fu); LOADALL;
  /* 0049d294 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 0049d297 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_0049d29a:;
  /* 0049d29a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d29c sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d29e mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d2a3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d2a5 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d2a7 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d2aa mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d2ac shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d2af add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d2b1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d2b4 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d2b7 jg 0x49d212 */ if (!(ZF_|LT_)) goto L_0049d212;
L_0049d2bd:;
  /* 0049d2bd cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d2c0 jle 0x49d2cc */ if ((ZF_|LT_)) goto L_0049d2cc;
  /* 0049d2c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d2c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d2c4 call 0x49d770 */ esp -= 4; M32(esp) = 0x49d2c9u; SAVEALL; F_0049d770(c); ABI_CHECK(0x49d770u, 0x49d2c4u); RETCHK(0x49d2c9u, 0x49d2c4u); LOADALL;
  /* 0049d2c9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d2cc:;
  /* 0049d2cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d2cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d2ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d2cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d2d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d2d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049d2d3:;
  /* 0049d2d3 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d2d6 jle 0x49d2bd */ if ((ZF_|LT_)) goto L_0049d2bd;
  /* 0049d2d8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d2da sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d2dc mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d2e1 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d2e3 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d2e5 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d2e8 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d2ea shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d2ed add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d2ef cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d2f2 jle 0x49d2fe */ if ((ZF_|LT_)) goto L_0049d2fe;
  /* 0049d2f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d2f5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d2f6 call 0x49daa0 */ esp -= 4; M32(esp) = 0x49d2fbu; SAVEALL; F_0049daa0(c); ABI_CHECK(0x49daa0u, 0x49d2f6u); RETCHK(0x49d2fbu, 0x49d2f6u); LOADALL;
  /* 0049d2fb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d2fe:;
  /* 0049d2fe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d2ff push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d300 call 0x49d710 */ esp -= 4; M32(esp) = 0x49d305u; SAVEALL; F_0049d710(c); ABI_CHECK(0x49d710u, 0x49d300u); RETCHK(0x49d305u, 0x49d300u); LOADALL;
  /* 0049d305 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d308 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d309 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d30a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d30b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d30d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d30e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d310(CPU *c) {
  NATIVE_HOOK(0x49d310u) REGS; LOADALL;
L_0049d310:;
  /* 0049d310 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d311 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d313 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d315 push 0x61cd10 */ { u32 v_ = 0x61cd10u; esp -= 4; M32(esp) = v_; }
  /* 0049d31a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049d320 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d321 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049d328 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d32b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d32c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d32d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049d330 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d331 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049d334 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049d336 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 0049d338 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0049d33b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
L_0049d342:;
  /* 0049d342 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049d344 jbe 0x49d39a */ if ((CF_|ZF_)) goto L_0049d39a;
  /* 0049d346 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d347 call 0x49d990 */ esp -= 4; M32(esp) = 0x49d34cu; SAVEALL; F_0049d990(c); ABI_CHECK(0x49d990u, 0x49d347u); RETCHK(0x49d34cu, 0x49d347u); LOADALL;
  /* 0049d34c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d34f dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049d350 add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d353 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049d356 jmp 0x49d342 */ goto L_0049d342;
L_0049d39a:;
  /* 0049d39a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d39d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d39e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d39f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d3a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d3a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d3a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d3aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d358(CPU *c) {
  NATIVE_HOOK(0x49d358u) REGS; LOADALL;
L_0049d358:;
  /* 0049d358 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0049d35b mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049d35e cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d360 je 0x49d391 */ if (ZF_) goto L_0049d391;
  /* 0049d362 lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
L_0049d365:;
  /* 0049d365 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d368 jb 0x49d376 */ if (CF_) goto L_0049d376;
  /* 0049d36a mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049d36d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d36e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49d373u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49d36eu); RETCHK(0x49d373u, 0x49d36eu); LOADALL;
  /* 0049d373 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d376:;
  /* 0049d376 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0049d37c mov dword ptr [esi - 4], 0 */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049d383 mov byte ptr [esi - 0x14], 0 */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)(0x0u); }
  /* 0049d387 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d38a add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d38d cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d38f jne 0x49d365 */ if (!ZF_) goto L_0049d365;
L_0049d391:;
  /* 0049d391 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d393 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d395 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049d39a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d39d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d39e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d39f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d3a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d3a7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d3a9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d3aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d3b0(CPU *c) {
  NATIVE_HOOK(0x49d3b0u) REGS; LOADALL;
L_0049d3b0:;
  /* 0049d3b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d3b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d3b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d3b5 push 0x61cd01 */ { u32 v_ = 0x61cd01u; esp -= 4; M32(esp) = v_; }
  /* 0049d3ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049d3c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d3c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049d3c8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d3cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d3cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d3cd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049d3d0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d3d1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049d3d3 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049d3d6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049d3d8 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0049d3db mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d3de mov edi, edi */ { edi = (u32)(edi); }
L_0049d3e0:;
  /* 0049d3e0 cmp dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d3e3 jbe 0x49d496 */ if ((CF_|ZF_)) goto L_0049d496;
  /* 0049d3e9 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0049d3ec cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d3ee mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0049d3f2 je 0x49d444 */ if (ZF_) goto L_0049d444;
  /* 0049d3f4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0049d3f6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d3f8 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d3fb mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0049d3fd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d3fe lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 0049d401 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0049d408 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0049d40b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d40c mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049d40f call 0x404140 */ esp -= 4; M32(esp) = 0x49d414u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d40fu); RETCHK(0x49d414u, 0x49d40fu); LOADALL;
  /* 0049d414 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0049d417 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0049d41a mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0049d41d mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0049d420 mov dl, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d423 mov byte ptr [esi + 0x28], dl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049d426 mov al, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d429 mov byte ptr [esi + 0x29], al */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049d42c mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0049d42f mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0049d432 mov edx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); edx = (u32)(M32(m_)); }
  /* 0049d435 mov dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edx); }
  /* 0049d438 mov eax, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (u32)(M32(m_)); }
  /* 0049d43b mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0049d43e mov ecx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0049d441 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
L_0049d444:;
  /* 0049d444 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049d447 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049d448 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d44b mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049d44e mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0049d451 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049d454 jmp 0x49d3e0 */ goto L_0049d3e0;
L_0049d496:;
  /* 0049d496 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d499 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d49a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d49b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d4a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d4a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d4a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d4a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d456(CPU *c) {
  NATIVE_HOOK(0x49d456u) REGS; LOADALL;
L_0049d456:;
  /* 0049d456 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0049d459 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d45c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049d45e cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d460 je 0x49d48f */ if (ZF_) goto L_0049d48f;
  /* 0049d462 lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
L_0049d465:;
  /* 0049d465 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d468 jb 0x49d476 */ if (CF_) goto L_0049d476;
  /* 0049d46a mov edx, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0049d46d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d46e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49d473u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49d46eu); RETCHK(0x49d473u, 0x49d46eu); LOADALL;
  /* 0049d473 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d476:;
  /* 0049d476 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d479 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0049d47f mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d482 mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049d485 add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d488 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d48b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d48d jne 0x49d465 */ if (!ZF_) goto L_0049d465;
L_0049d48f:;
  /* 0049d48f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d490 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d491 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049d496 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d499 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d49a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d49b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d4a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d4a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d4a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d4a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d4b0(CPU *c) {
  NATIVE_HOOK(0x49d4b0u) REGS; LOADALL;
L_0049d4b0:;
  /* 0049d4b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d4b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049d4b3 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d4b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d4b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049d4b8 je 0x49d4f7 */ if (ZF_) goto L_0049d4f7;
  /* 0049d4ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0049d4c0:;
  /* 0049d4c0 mov eax, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0049d4c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d4c5 sub esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d4c8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d4ca lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d4cd sub edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d4d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d4d1 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049d4d4 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0049d4d6 call 0x404140 */ esp -= 4; M32(esp) = 0x49d4dbu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d4d6u); RETCHK(0x49d4dbu, 0x49d4d6u); LOADALL;
  /* 0049d4db cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d4dd mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049d4e0 mov dword ptr [edi + 0x20], edx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0049d4e3 mov al, byte ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d4e6 mov byte ptr [edi + 0x24], al */ { const u32 m_ = (u32)(edi + 0x24u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049d4e9 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0049d4ec mov dword ptr [edi + 0x28], ecx */ { const u32 m_ = (u32)(edi + 0x28u); M32(m_) = (u32)(ecx); }
  /* 0049d4ef mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0049d4f2 mov dword ptr [edi + 0x2c], edx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0049d4f5 jne 0x49d4c0 */ if (!ZF_) goto L_0049d4c0;
L_0049d4f7:;
  /* 0049d4f7 mov eax, edi */ { eax = (u32)(edi); }
  /* 0049d4f9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d4fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d4fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d500(CPU *c) {
  NATIVE_HOOK(0x49d500u) REGS; LOADALL;
L_0049d500:;
  /* 0049d500 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d501 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049d503 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d505 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d506 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049d508 je 0x49d55f */ if (ZF_) goto L_0049d55f;
  /* 0049d50a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0049d510:;
  /* 0049d510 mov eax, dword ptr [esi - 0x3c] */ { const u32 m_ = (u32)(esi + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0049d513 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d515 sub esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d518 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049d51a lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d51d sub edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d520 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d521 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049d524 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0049d526 call 0x404140 */ esp -= 4; M32(esp) = 0x49d52bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d526u); RETCHK(0x49d52bu, 0x49d526u); LOADALL;
  /* 0049d52b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d52d mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049d530 mov dword ptr [edi + 0x20], edx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0049d533 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049d536 mov dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0049d539 mov cl, byte ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d53c mov byte ptr [edi + 0x28], cl */ { const u32 m_ = (u32)(edi + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049d53f mov dl, byte ptr [esi + 0x29] */ { const u32 m_ = (u32)(esi + 0x29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d542 mov byte ptr [edi + 0x29], dl */ { const u32 m_ = (u32)(edi + 0x29u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049d545 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0049d548 mov dword ptr [edi + 0x2c], eax */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0049d54b mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0049d54e mov dword ptr [edi + 0x30], ecx */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0049d551 mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 0049d554 mov dword ptr [edi + 0x34], edx */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(edx); }
  /* 0049d557 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 0049d55a mov dword ptr [edi + 0x38], eax */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0049d55d jne 0x49d510 */ if (!ZF_) goto L_0049d510;
L_0049d55f:;
  /* 0049d55f mov eax, edi */ { eax = (u32)(edi); }
  /* 0049d561 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d562 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d563 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d570(CPU *c) {
  NATIVE_HOOK(0x49d570u) REGS; LOADALL;
L_0049d570:;
  /* 0049d570 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d571 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d573 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d576 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d577 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0049d57a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d57b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d57c mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0049d57f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049d581 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d583 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d588 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d58a add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d58c sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d58f mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d591 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d594 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d596 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049d597 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d599 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049d59b sar esi, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0049d59d imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d5a0 lea eax, [ebx - 0x3c] */ eax = (u32)((u32)(ebx + 0xffffffc4u));
  /* 0049d5a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d5a4 add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d5a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d5a7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d5a8 call 0x49da00 */ esp -= 4; M32(esp) = 0x49d5adu; SAVEALL; F_0049da00(c); ABI_CHECK(0x49da00u, 0x49d5a8u); RETCHK(0x49d5adu, 0x49d5a8u); LOADALL;
  /* 0049d5ad add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d5b0 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d5b2 lea ebx, [esi + 0x3c] */ ebx = (u32)((u32)(esi + 0x3cu));
  /* 0049d5b5 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d5b8 jae 0x49d5d3 */ if (!CF_) goto L_0049d5d3;
  /* 0049d5ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0049d5c0:;
  /* 0049d5c0 mov eax, dword ptr [esi - 0x18] */ { const u32 m_ = (u32)(esi + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0049d5c3 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0049d5c6 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d5c8 ja 0x49d5d3 */ if (!(CF_|ZF_)) goto L_0049d5d3;
  /* 0049d5ca jb 0x49d5d3 */ if (CF_) goto L_0049d5d3;
  /* 0049d5cc sub esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d5cf cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d5d1 jb 0x49d5c0 */ if (CF_) goto L_0049d5c0;
L_0049d5d3:;
  /* 0049d5d3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049d5d6 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d5d8 jae 0x49d5f3 */ if (!CF_) goto L_0049d5f3;
  /* 0049d5da mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0049d5dd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0049d5e0:;
  /* 0049d5e0 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049d5e3 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d5e5 ja 0x49d5f0 */ if (!(CF_|ZF_)) goto L_0049d5f0;
  /* 0049d5e7 jb 0x49d5f0 */ if (CF_) goto L_0049d5f0;
  /* 0049d5e9 add ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049d5ec cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d5ee jb 0x49d5e0 */ if (CF_) goto L_0049d5e0;
L_0049d5f0:;
  /* 0049d5f0 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
L_0049d5f3:;
  /* 0049d5f3 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049d5f5 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0049d5f7 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0049d5fa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0049d600:;
  /* 0049d600 cmp edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d603 jae 0x49d630 */ if (!CF_) goto L_0049d630;
L_0049d605:;
  /* 0049d605 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0049d608 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 0049d60b cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d60d ja 0x49d626 */ if (!(CF_|ZF_)) goto L_0049d626;
  /* 0049d60f jb 0x49d630 */ if (CF_) goto L_0049d630;
  /* 0049d611 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049d613 add ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049d616 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d619 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0049d61b call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49d620u; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49d61bu); RETCHK(0x49d620u, 0x49d61bu); LOADALL;
  /* 0049d620 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0049d623 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
L_0049d626:;
  /* 0049d626 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049d629 add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d62c cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d62e jb 0x49d605 */ if (CF_) goto L_0049d605;
L_0049d630:;
  /* 0049d630 cmp eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d633 jbe 0x49d67d */ if ((CF_|ZF_)) goto L_0049d67d;
  /* 0049d635 lea ecx, [eax - 0x18] */ ecx = (u32)((u32)(eax + 0xffffffe8u));
  /* 0049d638 mov dword ptr [ebp - 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ecx); }
  /* 0049d63b jmp 0x49d640 */ goto L_0049d640;
L_0049d640:;
  /* 0049d640 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0049d643 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 0049d645 mov edx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); edx = (u32)(M32(m_)); }
  /* 0049d648 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d64a ja 0x49d664 */ if (!(CF_|ZF_)) goto L_0049d664;
  /* 0049d64c jb 0x49d67a */ if (CF_) goto L_0049d67a;
  /* 0049d64e mov ebx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ebx = (u32)(M32(m_)); }
  /* 0049d651 sub esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d654 add ebx, -0x24 */ { u32 a_ = ebx, b_ = 0xffffffdcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049d657 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049d659 call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49d65eu; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49d659u); RETCHK(0x49d65eu, 0x49d659u); LOADALL;
  /* 0049d65e mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0049d661 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
L_0049d664:;
  /* 0049d664 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0049d667 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049d66a sub eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d66d sub edx, 0x3c */ { u32 a_ = edx, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d670 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d672 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0049d675 mov dword ptr [ebp - 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edx); }
  /* 0049d678 jb 0x49d640 */ if (CF_) goto L_0049d640;
L_0049d67a:;
  /* 0049d67a cmp eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_0049d67d:;
  /* 0049d67d jne 0x49d6b2 */ if (!ZF_) goto L_0049d6b2;
  /* 0049d67f cmp edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d682 je 0x49d6fe */ if (ZF_) goto L_0049d6fe;
  /* 0049d684 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d686 je 0x49d692 */ if (ZF_) goto L_0049d692;
  /* 0049d688 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049d68a call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49d68fu; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49d68au); RETCHK(0x49d68fu, 0x49d68au); LOADALL;
  /* 0049d68f mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_0049d692:;
  /* 0049d692 add ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049d695 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d698 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0049d69a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049d69c add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d69f add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d6a2 call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49d6a7u; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49d6a2u); RETCHK(0x49d6a7u, 0x49d6a2u); LOADALL;
  /* 0049d6a7 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0049d6aa mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0049d6ad jmp 0x49d600 */ goto L_0049d600;
L_0049d6b2:;
  /* 0049d6b2 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049d6b5 sub eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d6b8 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d6ba mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0049d6bd jne 0x49d6e7 */ if (!ZF_) goto L_0049d6e7;
  /* 0049d6bf sub esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d6c2 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d6c4 je 0x49d6d2 */ if (ZF_) goto L_0049d6d2;
  /* 0049d6c6 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049d6c8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049d6ca call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49d6cfu; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49d6cau); RETCHK(0x49d6cfu, 0x49d6cau); LOADALL;
  /* 0049d6cf mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_0049d6d2:;
  /* 0049d6d2 sub ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049d6d5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049d6d7 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d6da call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49d6dfu; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49d6dau); RETCHK(0x49d6dfu, 0x49d6dau); LOADALL;
  /* 0049d6df mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0049d6e2 jmp 0x49d600 */ goto L_0049d600;
L_0049d6e7:;
  /* 0049d6e7 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049d6e9 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0049d6eb add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d6ee call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49d6f3u; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49d6eeu); RETCHK(0x49d6f3u, 0x49d6eeu); LOADALL;
  /* 0049d6f3 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 0049d6f6 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0049d6f9 jmp 0x49d600 */ goto L_0049d600;
L_0049d6fe:;
  /* 0049d6fe mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d701 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d702 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0049d704 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d705 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0049d708 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d709 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d70b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d70c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d710(CPU *c) {
  NATIVE_HOOK(0x49d710u) REGS; LOADALL;
L_0049d710:;
  /* 0049d710 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d711 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d713 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d714 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049d717 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d718 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049d71b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049d71d sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d71f mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d724 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d726 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d728 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d72b mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d72d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d730 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d732 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d735 jle 0x49d760 */ if ((ZF_|LT_)) goto L_0049d760;
L_0049d737:;
  /* 0049d737 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d738 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d739 call 0x49de40 */ esp -= 4; M32(esp) = 0x49d73eu; SAVEALL; F_0049de40(c); ABI_CHECK(0x49de40u, 0x49d739u); RETCHK(0x49d73eu, 0x49d739u); LOADALL;
  /* 0049d73e sub esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d741 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049d743 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049d745 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049d74a imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049d74c add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049d74e sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049d751 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049d753 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049d756 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d758 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d75b cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d75e jg 0x49d737 */ if (!(ZF_|LT_)) goto L_0049d737;
L_0049d760:;
  /* 0049d760 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d761 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d762 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d763 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d770(CPU *c) {
  NATIVE_HOOK(0x49d770u) REGS; LOADALL;
L_0049d770:;
  /* 0049d770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d773 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d774 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049d777 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d778 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049d77b cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d77d je 0x49d7d8 */ if (ZF_) goto L_0049d7d8;
  /* 0049d77f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d780 lea esi, [edi + 0x3c] */ esi = (u32)((u32)(edi + 0x3cu));
  /* 0049d783 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d785 je 0x49d7d7 */ if (ZF_) goto L_0049d7d7;
L_0049d787:;
  /* 0049d787 mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0049d78a cmp ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d78d jae 0x49d79f */ if (!CF_) goto L_0049d79f;
  /* 0049d78f cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d791 lea eax, [esi + 0x3c] */ eax = (u32)((u32)(esi + 0x3cu));
  /* 0049d794 je 0x49d7d0 */ if (ZF_) goto L_0049d7d0;
  /* 0049d796 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d798 je 0x49d7d0 */ if (ZF_) goto L_0049d7d0;
  /* 0049d79a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d79b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d79c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d79d jmp 0x49d7c8 */ goto L_0049d7c8;
L_0049d79f:;
  /* 0049d79f mov edx, dword ptr [esi - 0x18] */ { const u32 m_ = (u32)(esi + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0049d7a2 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d7a4 lea eax, [esi - 0x3c] */ eax = (u32)((u32)(esi + 0xffffffc4u));
  /* 0049d7a7 jae 0x49d7d0 */ if (!CF_) goto L_0049d7d0;
  /* 0049d7a9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0049d7b0:;
  /* 0049d7b0 mov edx, eax */ { edx = (u32)(eax); }
  /* 0049d7b2 sub eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049d7b5 cmp ecx, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d7b8 jb 0x49d7b0 */ if (CF_) goto L_0049d7b0;
  /* 0049d7ba cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d7bc je 0x49d7d0 */ if (ZF_) goto L_0049d7d0;
  /* 0049d7be lea eax, [esi + 0x3c] */ eax = (u32)((u32)(esi + 0x3cu));
  /* 0049d7c1 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d7c3 je 0x49d7d0 */ if (ZF_) goto L_0049d7d0;
  /* 0049d7c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d7c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d7c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
L_0049d7c8:;
  /* 0049d7c8 call 0x49e060 */ esp -= 4; M32(esp) = 0x49d7cdu; SAVEALL; F_0049e060(c); ABI_CHECK(0x49e060u, 0x49d7c8u); RETCHK(0x49d7cdu, 0x49d7c8u); LOADALL;
  /* 0049d7cd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d7d0:;
  /* 0049d7d0 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d7d3 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d7d5 jne 0x49d787 */ if (!ZF_) goto L_0049d787;
L_0049d7d7:;
  /* 0049d7d7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049d7d8:;
  /* 0049d7d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d7d9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d7da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d7db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d7e0(CPU *c) {
  NATIVE_HOOK(0x49d7e0u) REGS; LOADALL;
L_0049d7e0:;
  /* 0049d7e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d7e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d7e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d7e5 push 0x61eae0 */ { u32 v_ = 0x61eae0u; esp -= 4; M32(esp) = v_; }
  /* 0049d7ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049d7f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d7f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049d7f8 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d7fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d7fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d7fd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049d800 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d801 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049d804 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049d806 mov edi, edx */ { edi = (u32)(edx); }
  /* 0049d808 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0049d80b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
L_0049d812:;
  /* 0049d812 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d814 je 0x49d871 */ if (ZF_) goto L_0049d871;
  /* 0049d816 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d817 call 0x49d990 */ esp -= 4; M32(esp) = 0x49d81cu; SAVEALL; F_0049d990(c); ABI_CHECK(0x49d990u, 0x49d817u); RETCHK(0x49d81cu, 0x49d817u); LOADALL;
  /* 0049d81c add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d81f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d822 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0049d825 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d828 jmp 0x49d812 */ goto L_0049d812;
L_0049d871:;
  /* 0049d871 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d874 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d875 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049d877 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d878 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d87f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d880 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d882 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d883 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d82a(CPU *c) {
  NATIVE_HOOK(0x49d82au) REGS; LOADALL;
L_0049d82a:;
  /* 0049d82a mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0049d82d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d830 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049d832 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d834 je 0x49d86a */ if (ZF_) goto L_0049d86a;
  /* 0049d836 lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
  /* 0049d839 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0049d840:;
  /* 0049d840 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d843 jb 0x49d851 */ if (CF_) goto L_0049d851;
  /* 0049d845 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049d848 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d849 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49d84eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49d849u); RETCHK(0x49d84eu, 0x49d849u); LOADALL;
  /* 0049d84e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d851:;
  /* 0049d851 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049d854 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0049d85a mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d85d mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049d860 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d863 add esi, 0x30 */ { u32 a_ = esi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d866 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d868 jne 0x49d840 */ if (!ZF_) goto L_0049d840;
L_0049d86a:;
  /* 0049d86a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d86b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d86c call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049d871 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d874 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d875 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049d877 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d878 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d87f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d880 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d882 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d883 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d890(CPU *c) {
  NATIVE_HOOK(0x49d890u) REGS; LOADALL;
L_0049d890:;
  /* 0049d890 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d891 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d893 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d895 push 0x61ead1 */ { u32 v_ = 0x61ead1u; esp -= 4; M32(esp) = v_; }
  /* 0049d89a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049d8a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d8a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049d8a8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049d8ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d8ac push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d8ad mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049d8b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049d8b1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049d8b3 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049d8b6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049d8b8 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0049d8bb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d8be mov edi, edi */ { edi = (u32)(edi); }
L_0049d8c0:;
  /* 0049d8c0 cmp edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d8c3 je 0x49d972 */ if (ZF_) goto L_0049d972;
  /* 0049d8c9 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0049d8cc cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d8ce mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0049d8d2 je 0x49d924 */ if (ZF_) goto L_0049d924;
  /* 0049d8d4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0049d8d6 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d8d8 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d8db mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0049d8dd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d8de lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 0049d8e1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0049d8e8 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0049d8eb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d8ec mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049d8ef call 0x404140 */ esp -= 4; M32(esp) = 0x49d8f4u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d8efu); RETCHK(0x49d8f4u, 0x49d8efu); LOADALL;
  /* 0049d8f4 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0049d8f7 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0049d8fa mov ecx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0049d8fd mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0049d900 mov dl, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d903 mov byte ptr [esi + 0x28], dl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049d906 mov al, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d909 mov byte ptr [esi + 0x29], al */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049d90c mov ecx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 0049d90f mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0049d912 mov edx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); edx = (u32)(M32(m_)); }
  /* 0049d915 mov dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edx); }
  /* 0049d918 mov eax, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); eax = (u32)(M32(m_)); }
  /* 0049d91b mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0049d91e mov ecx, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); ecx = (u32)(M32(m_)); }
  /* 0049d921 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
L_0049d924:;
  /* 0049d924 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d927 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049d92a mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 0049d92d add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d930 jmp 0x49d8c0 */ goto L_0049d8c0;
L_0049d972:;
  /* 0049d972 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d975 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d976 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049d978 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d979 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d980 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d981 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d983 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d984 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d932(CPU *c) {
  NATIVE_HOOK(0x49d932u) REGS; LOADALL;
L_0049d932:;
  /* 0049d932 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0049d935 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d938 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049d93a cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d93c je 0x49d96b */ if (ZF_) goto L_0049d96b;
  /* 0049d93e lea esi, [edi + 0x1c] */ esi = (u32)((u32)(edi + 0x1cu));
L_0049d941:;
  /* 0049d941 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d944 jb 0x49d952 */ if (CF_) goto L_0049d952;
  /* 0049d946 mov edx, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0049d949 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d94a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49d94fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49d94au); RETCHK(0x49d94fu, 0x49d94au); LOADALL;
  /* 0049d94f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049d952:;
  /* 0049d952 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049d955 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0049d95b mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049d95e mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049d961 add edi, 0x3c */ { u32 a_ = edi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049d964 add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049d967 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d969 jne 0x49d941 */ if (!ZF_) goto L_0049d941;
L_0049d96b:;
  /* 0049d96b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d96c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049d96d call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0049d972 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d975 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049d976 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049d978 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d979 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d980 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049d981 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d983 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d984 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049d990(CPU *c) {
  NATIVE_HOOK(0x49d990u) REGS; LOADALL;
L_0049d990:;
  /* 0049d990 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049d991 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049d993 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d995 push 0x61cc91 */ { u32 v_ = 0x61cc91u; esp -= 4; M32(esp) = v_; }
  /* 0049d99a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049d9a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d9a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049d9a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049d9a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049d9aa mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049d9ad mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0049d9b0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049d9b2 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049d9b4 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0049d9b7 je 0x49d9f1 */ if (ZF_) goto L_0049d9f1;
  /* 0049d9b9 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0049d9bb mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0049d9bd push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049d9bf lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049d9c2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049d9c3 lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 0049d9c6 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0049d9cd mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0049d9d0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049d9d1 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049d9d4 call 0x404140 */ esp -= 4; M32(esp) = 0x49d9d9u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49d9d4u); RETCHK(0x49d9d9u, 0x49d9d4u); LOADALL;
  /* 0049d9d9 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 0049d9dc mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0049d9df mov cl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049d9e2 mov byte ptr [esi + 0x24], cl */ { const u32 m_ = (u32)(esi + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049d9e5 mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 0049d9e8 mov dword ptr [esi + 0x28], edx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edx); }
  /* 0049d9eb mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0049d9ee mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
L_0049d9f1:;
  /* 0049d9f1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049d9f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049d9f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049d9fc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049d9fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049d9ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049da00(CPU *c) {
  NATIVE_HOOK(0x49da00u) REGS; LOADALL;
L_0049da00:;
  /* 0049da00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049da01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049da03 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049da06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049da07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049da08 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0049da0b mov esi, edi */ { esi = (u32)(edi); }
  /* 0049da0d sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049da0f mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049da14 imul esi */ { s64 p_ = (s64)(s32)eax * (s32)esi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049da16 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049da18 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049da1b mov eax, edx */ { eax = (u32)(edx); }
  /* 0049da1d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049da20 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049da22 cmp eax, 0x28 */ { u32 a_ = eax, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049da25 jle 0x49da8b */ if ((ZF_|LT_)) goto L_0049da8b;
  /* 0049da27 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049da28 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049da29 and edx, 7 */ { u32 a_ = edx, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0049da2c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049da2e sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049da31 mov edi, eax */ { edi = (u32)(eax); }
  /* 0049da33 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049da35 imul edi, edi, 0x78 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x78u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049da38 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049da3b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049da3c lea edx, [edi + ecx] */ edx = (u32)((u32)(edi + ecx));
  /* 0049da3f lea eax, [esi + ecx] */ eax = (u32)((u32)(esi + ecx));
  /* 0049da42 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049da43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049da44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049da45 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0049da48 call 0x49db60 */ esp -= 4; M32(esp) = 0x49da4du; SAVEALL; F_0049db60(c); ABI_CHECK(0x49db60u, 0x49da48u); RETCHK(0x49da4du, 0x49da48u); LOADALL;
  /* 0049da4d mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049da50 lea ecx, [esi + ebx] */ ecx = (u32)((u32)(esi + ebx));
  /* 0049da53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049da54 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049da56 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049da58 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049da59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049da5a call 0x49db60 */ esp -= 4; M32(esp) = 0x49da5fu; SAVEALL; F_0049db60(c); ABI_CHECK(0x49db60u, 0x49da5au); RETCHK(0x49da5fu, 0x49da5au); LOADALL;
  /* 0049da5f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049da62 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049da64 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049da66 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049da67 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049da69 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049da6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049da6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049da6d mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0049da70 call 0x49db60 */ esp -= 4; M32(esp) = 0x49da75u; SAVEALL; F_0049db60(c); ABI_CHECK(0x49db60u, 0x49da70u); RETCHK(0x49da75u, 0x49da70u); LOADALL;
  /* 0049da75 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049da78 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0049da7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049da7c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049da7d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049da7e call 0x49db60 */ esp -= 4; M32(esp) = 0x49da83u; SAVEALL; F_0049db60(c); ABI_CHECK(0x49db60u, 0x49da7eu); RETCHK(0x49da83u, 0x49da7eu); LOADALL;
  /* 0049da83 add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049da86 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049da87 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049da88 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049da89 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049da8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049da8b:;
  /* 0049da8b mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049da8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049da8f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049da90 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049da91 call 0x49db60 */ esp -= 4; M32(esp) = 0x49da96u; SAVEALL; F_0049db60(c); ABI_CHECK(0x49db60u, 0x49da91u); RETCHK(0x49da96u, 0x49da91u); LOADALL;
  /* 0049da96 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049da99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049da9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049da9b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049da9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049daa0(CPU *c) {
  NATIVE_HOOK(0x49daa0u) REGS; LOADALL;
L_0049daa0:;
  /* 0049daa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049daa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049daa3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049daa4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049daa7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049daa8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049daa9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049daac sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049daae mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049dab3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049dab5 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049dab7 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049daba mov eax, edx */ { eax = (u32)(edx); }
  /* 0049dabc shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049dabf add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049dac1 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0049dac4 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049dac5 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049dac7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0049dac9 sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0049dacb test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049dacd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049dace jle 0x49db58 */ if ((ZF_|LT_)) goto L_0049db58;
  /* 0049dad4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0049dad6 imul eax, eax, 0x3c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049dad9 lea esi, [eax + esi + 0x20] */ esi = (u32)((u32)(eax + esi + 0x20u));
  /* 0049dadd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0049dae0:;
  /* 0049dae0 mov ecx, dword ptr [esi - 0x5c] */ { const u32 m_ = (u32)(esi + 0xffffffa4u); ecx = (u32)(M32(m_)); }
  /* 0049dae3 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049dae6 mov edi, esp */ { edi = (u32)(esp); }
  /* 0049dae8 sub esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049daeb mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0049daee mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 0049daf0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049daf2 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049daf5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049daf7 lea edx, [esi - 0x1c] */ edx = (u32)((u32)(esi + 0xffffffe4u));
  /* 0049dafa mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0049db01 mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0049db08 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049db09 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049db0a mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0049db0e call 0x404140 */ esp -= 4; M32(esp) = 0x49db13u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49db0eu); RETCHK(0x49db13u, 0x49db0eu); LOADALL;
  /* 0049db13 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0049db15 mov dword ptr [edi + 0x20], eax */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0049db18 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0049db1b mov dword ptr [edi + 0x24], ecx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0049db1e mov dl, byte ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049db21 mov byte ptr [edi + 0x28], dl */ { const u32 m_ = (u32)(edi + 0x28u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049db24 mov al, byte ptr [esi + 9] */ { const u32 m_ = (u32)(esi + 0x9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049db27 mov byte ptr [edi + 0x29], al */ { const u32 m_ = (u32)(edi + 0x29u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049db2a mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049db2d mov dword ptr [edi + 0x2c], ecx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0049db30 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0049db33 mov dword ptr [edi + 0x30], edx */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(edx); }
  /* 0049db36 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0049db39 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049db3c mov dword ptr [edi + 0x34], eax */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0049db3f mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0049db42 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049db45 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049db46 mov dword ptr [edi + 0x38], ecx */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0049db49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049db4a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049db4c call 0x49dca0 */ esp -= 4; M32(esp) = 0x49db51u; SAVEALL; F_0049dca0(c); ABI_CHECK(0x49dca0u, 0x49db4cu); RETCHK(0x49db51u, 0x49db4cu); LOADALL;
  /* 0049db51 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049db54 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049db56 jg 0x49dae0 */ if (!(ZF_|LT_)) goto L_0049dae0;
L_0049db58:;
  /* 0049db58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049db59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049db5a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049db5b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049db5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049db5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049db60(CPU *c) {
  NATIVE_HOOK(0x49db60u) REGS; LOADALL;
L_0049db60:;
  /* 0049db60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049db61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049db63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049db64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049db65 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0049db68 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049db6b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049db6c mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0049db6f cmp eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049db72 jae 0x49db7d */ if (!CF_) goto L_0049db7d;
  /* 0049db74 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0049db76 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049db78 call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49db7du; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49db78u); RETCHK(0x49db7du, 0x49db78u); LOADALL;
L_0049db7d:;
  /* 0049db7d mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049db80 mov edx, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); edx = (u32)(M32(m_)); }
  /* 0049db83 cmp edx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049db86 jae 0x49db8f */ if (!CF_) goto L_0049db8f;
  /* 0049db88 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0049db8a call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49db8fu; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49db8au); RETCHK(0x49db8fu, 0x49db8au); LOADALL;
L_0049db8f:;
  /* 0049db8f mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049db92 cmp eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049db95 jae 0x49dba0 */ if (!CF_) goto L_0049dba0;
  /* 0049db97 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 0049db99 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049db9b call 0x49dbb0 */ esp -= 4; M32(esp) = 0x49dba0u; SAVEALL; F_0049dbb0(c); ABI_CHECK(0x49dbb0u, 0x49db9bu); RETCHK(0x49dba0u, 0x49db9bu); LOADALL;
L_0049dba0:;
  /* 0049dba0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049dba1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049dba2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049dba3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049dba4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049dbb0(CPU *c) {
  NATIVE_HOOK(0x49dbb0u) REGS; LOADALL;
L_0049dbb0:;
  /* 0049dbb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049dbb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049dbb3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049dbb5 push 0x6205d8 */ { u32 v_ = 0x6205d8u; esp -= 4; M32(esp) = v_; }
  /* 0049dbba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049dbc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049dbc1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049dbc8 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049dbcb mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049dbd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049dbd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049dbd2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049dbd4 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0049dbd7 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049dbda call 0x49d0d0 */ esp -= 4; M32(esp) = 0x49dbdfu; SAVEALL; F_0049d0d0(c); ABI_CHECK(0x49d0d0u, 0x49dbdau); RETCHK(0x49dbdfu, 0x49dbdau); LOADALL;
  /* 0049dbdf push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049dbe1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049dbe8 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0049dbea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049dbec lea esi, [ebx + 4] */ esi = (u32)((u32)(ebx + 0x4u));
  /* 0049dbef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049dbf0 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049dbf3 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0049dbf5 call 0x404140 */ esp -= 4; M32(esp) = 0x49dbfau; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49dbf5u); RETCHK(0x49dbfau, 0x49dbf5u); LOADALL;
  /* 0049dbfa mov ecx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0049dbfd mov dword ptr [edi + 0x20], ecx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0049dc00 mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 0049dc03 mov dword ptr [edi + 0x24], edx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(edx); }
  /* 0049dc06 mov al, byte ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dc09 mov byte ptr [edi + 0x28], al */ { const u32 m_ = (u32)(edi + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049dc0c mov cl, byte ptr [ebx + 0x29] */ { const u32 m_ = (u32)(ebx + 0x29u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dc0f mov byte ptr [edi + 0x29], cl */ { const u32 m_ = (u32)(edi + 0x29u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049dc12 mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0049dc15 mov dword ptr [edi + 0x2c], edx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0049dc18 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 0049dc1b mov dword ptr [edi + 0x30], eax */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0049dc1e mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0049dc21 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 0049dc24 mov dword ptr [edi + 0x34], ecx */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0049dc27 mov edx, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); edx = (u32)(M32(m_)); }
  /* 0049dc2a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049dc2c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049dc2e lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0049dc31 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049dc32 mov dword ptr [edi + 0x38], edx */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(edx); }
  /* 0049dc35 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049dc37 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 0049dc39 call 0x404140 */ esp -= 4; M32(esp) = 0x49dc3eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49dc39u); RETCHK(0x49dc3eu, 0x49dc39u); LOADALL;
  /* 0049dc3e mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0049dc41 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0049dc44 mov cl, byte ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dc47 mov dword ptr [ebx + 0x24], eax */ { const u32 m_ = (u32)(ebx + 0x24u); M32(m_) = (u32)(eax); }
  /* 0049dc4a mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 0049dc4d mov dword ptr [ebx + 0x2c], eax */ { const u32 m_ = (u32)(ebx + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0049dc50 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0049dc53 mov dword ptr [ebx + 0x20], edx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(edx); }
  /* 0049dc56 mov dl, byte ptr [ebp - 0x23] */ { const u32 m_ = (u32)(ebp + 0xffffffddu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dc59 mov dword ptr [ebx + 0x38], eax */ { const u32 m_ = (u32)(ebx + 0x38u); M32(m_) = (u32)(eax); }
  /* 0049dc5c cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049dc60 mov byte ptr [ebx + 0x28], cl */ { const u32 m_ = (u32)(ebx + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049dc63 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 0049dc66 mov byte ptr [ebx + 0x29], dl */ { const u32 m_ = (u32)(ebx + 0x29u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049dc69 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0049dc6c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049dc6d mov dword ptr [ebx + 0x30], ecx */ { const u32 m_ = (u32)(ebx + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0049dc70 mov dword ptr [ebx + 0x34], edx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(edx); }
  /* 0049dc73 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049dc74 jb 0x49dc82 */ if (CF_) goto L_0049dc82;
  /* 0049dc76 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0049dc79 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049dc7a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49dc7fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49dc7au); RETCHK(0x49dc7fu, 0x49dc7au); LOADALL;
  /* 0049dc7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049dc82:;
  /* 0049dc82 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049dc85 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049dc8c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049dc8f call 0x61af31 */ esp -= 4; M32(esp) = 0x49dc94u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49dc8fu); RETCHK(0x49dc94u, 0x49dc8fu); LOADALL;
  /* 0049dc94 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049dc96 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049dc97 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049dca0(CPU *c) {
  NATIVE_HOOK(0x49dca0u) REGS; LOADALL;
L_0049dca0:;
  /* 0049dca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049dca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049dca3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049dca5 push 0x61ccd8 */ { u32 v_ = 0x61ccd8u; esp -= 4; M32(esp) = v_; }
  /* 0049dcaa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049dcb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049dcb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049dcb8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049dcb9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049dcba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049dcbb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049dcbc mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049dcbe mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049dcc1 lea ebx, [edi + edi + 2] */ ebx = (u32)((u32)(edi + edi + 0x2u));
  /* 0049dcc5 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049dcc7 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049dcce mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0049dcd1 jge 0x49dd49 */ if (!LT_) goto L_0049dd49;
L_0049dcd3:;
  /* 0049dcd3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049dcd6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049dcd8 imul ecx, ecx, 0x3c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049dcdb mov edx, dword ptr [ecx + eax + 0x24] */ { const u32 m_ = (u32)(ecx + eax + 0x24u); edx = (u32)(M32(m_)); }
  /* 0049dcdf mov esi, dword ptr [ecx + eax - 0x18] */ { const u32 m_ = (u32)(ecx + eax + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 0049dce3 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049dce5 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049dce7 jae 0x49dcea */ if (!CF_) goto L_0049dcea;
  /* 0049dce9 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_0049dcea:;
  /* 0049dcea mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049dcec imul edi, edi, 0x3c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049dcef imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049dcf2 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049dcf4 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049dcf6 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049dcf8 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0049dcfa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049dcfc lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049dcff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049dd00 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049dd03 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0049dd05 call 0x404140 */ esp -= 4; M32(esp) = 0x49dd0au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49dd05u); RETCHK(0x49dd0au, 0x49dd05u); LOADALL;
  /* 0049dd0a mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049dd0d mov dword ptr [edi + 0x20], edx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0049dd10 mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049dd13 mov dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0049dd16 mov cl, byte ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dd19 mov byte ptr [edi + 0x28], cl */ { const u32 m_ = (u32)(edi + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049dd1c mov dl, byte ptr [esi + 0x29] */ { const u32 m_ = (u32)(esi + 0x29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dd1f mov byte ptr [edi + 0x29], dl */ { const u32 m_ = (u32)(edi + 0x29u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049dd22 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0049dd25 mov dword ptr [edi + 0x2c], eax */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0049dd28 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0049dd2b mov dword ptr [edi + 0x30], ecx */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0049dd2e mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 0049dd31 mov dword ptr [edi + 0x34], edx */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(edx); }
  /* 0049dd34 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 0049dd37 mov dword ptr [edi + 0x38], eax */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0049dd3a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049dd3d mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0049dd3f lea ebx, [ebx + ebx + 2] */ ebx = (u32)((u32)(ebx + ebx + 0x2u));
  /* 0049dd43 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049dd45 jl 0x49dcd3 */ if (LT_) goto L_0049dcd3;
  /* 0049dd47 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_0049dd49:;
  /* 0049dd49 jne 0x49ddaa */ if (!ZF_) goto L_0049ddaa;
  /* 0049dd4b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049dd4d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049dd50 imul ecx, ecx, 0x3c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049dd53 mov edx, dword ptr [ecx + eax - 0x3c] */ { const u32 m_ = (u32)(ecx + eax + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 0049dd57 mov esi, edi */ { esi = (u32)(edi); }
  /* 0049dd59 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049dd5c lea ebx, [ecx + eax - 0x3c] */ ebx = (u32)((u32)(ecx + eax + 0xffffffc4u));
  /* 0049dd60 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049dd62 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049dd64 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049dd66 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 0049dd69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049dd6a lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049dd6d mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 0049dd6f call 0x404140 */ esp -= 4; M32(esp) = 0x49dd74u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49dd6fu); RETCHK(0x49dd74u, 0x49dd6fu); LOADALL;
  /* 0049dd74 mov ecx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0049dd77 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0049dd7a mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 0049dd7d mov dword ptr [esi + 0x24], edx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edx); }
  /* 0049dd80 mov al, byte ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dd83 mov byte ptr [esi + 0x28], al */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049dd86 mov cl, byte ptr [ebx + 0x29] */ { const u32 m_ = (u32)(ebx + 0x29u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dd89 mov byte ptr [esi + 0x29], cl */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049dd8c mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 0049dd8f mov dword ptr [esi + 0x2c], edx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0049dd92 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 0049dd95 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0049dd98 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0049dd9b mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049dd9e mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0049dda1 mov edx, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); edx = (u32)(M32(m_)); }
  /* 0049dda4 mov dword ptr [esi + 0x38], edx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(edx); }
  /* 0049dda7 lea edi, [eax - 1] */ edi = (u32)((u32)(eax + 0xffffffffu));
L_0049ddaa:;
  /* 0049ddaa mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049ddad sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049ddb0 mov esi, esp */ { esi = (u32)(esp); }
  /* 0049ddb2 mov dword ptr [ebp + 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esp); }
  /* 0049ddb5 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0049ddb7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049ddb9 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049ddbc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049ddbe lea edx, [ebp + 0x14] */ edx = (u32)((u32)(ebp + 0x14u));
  /* 0049ddc1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0049ddc8 mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0049ddcf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ddd0 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0049ddd4 call 0x404140 */ esp -= 4; M32(esp) = 0x49ddd9u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49ddd4u); RETCHK(0x49ddd9u, 0x49ddd4u); LOADALL;
  /* 0049ddd9 mov eax, dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); eax = (u32)(M32(m_)); }
  /* 0049dddc mov dl, byte ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dddf mov ecx, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0049dde2 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0049dde5 mov al, byte ptr [ebp + 0x39] */ { const u32 m_ = (u32)(ebp + 0x39u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dde8 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0049ddeb mov ecx, dword ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0049ddee mov byte ptr [esi + 0x28], dl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049ddf1 mov edx, dword ptr [ebp + 0x40] */ { const u32 m_ = (u32)(ebp + 0x40u); edx = (u32)(M32(m_)); }
  /* 0049ddf4 mov byte ptr [esi + 0x29], al */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049ddf7 mov eax, dword ptr [ebp + 0x44] */ { const u32 m_ = (u32)(ebp + 0x44u); eax = (u32)(M32(m_)); }
  /* 0049ddfa mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0049ddfd mov ecx, dword ptr [ebp + 0x48] */ { const u32 m_ = (u32)(ebp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 0049de00 mov dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edx); }
  /* 0049de03 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0049de06 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0049de09 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049de0c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049de0d mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0049de10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049de11 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049de13 call 0x49de70 */ esp -= 4; M32(esp) = 0x49de18u; SAVEALL; F_0049de70(c); ABI_CHECK(0x49de70u, 0x49de13u); RETCHK(0x49de18u, 0x49de13u); LOADALL;
  /* 0049de18 mov eax, dword ptr [ebp + 0x2c] */ { const u32 m_ = (u32)(ebp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0049de1b add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049de1e cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049de21 jb 0x49de2f */ if (CF_) goto L_0049de2f;
  /* 0049de23 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0049de26 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049de27 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49de2cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49de27u); RETCHK(0x49de2cu, 0x49de27u); LOADALL;
  /* 0049de2c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049de2f:;
  /* 0049de2f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049de32 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049de33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049de34 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049de3b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049de3c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049de3e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049de3f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049de40(CPU *c) {
  NATIVE_HOOK(0x49de40u) REGS; LOADALL;
L_0049de40:;
  /* 0049de40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049de41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049de43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049de44 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0049de47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049de48 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049de49 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049de4c lea edi, [ebx - 0x3c] */ edi = (u32)((u32)(ebx + 0xffffffc4u));
  /* 0049de4f mov esi, esp */ { esi = (u32)(esp); }
  /* 0049de51 mov dword ptr [ebp + 0xc], esp */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esp); }
  /* 0049de54 call 0x49d0d0 */ esp -= 4; M32(esp) = 0x49de59u; SAVEALL; F_0049d0d0(c); ABI_CHECK(0x49d0d0u, 0x49de54u); RETCHK(0x49de59u, 0x49de54u); LOADALL;
  /* 0049de59 lea eax, [ebx - 0x3c] */ eax = (u32)((u32)(ebx + 0xffffffc4u));
  /* 0049de5c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049de5d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049de5e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049de61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049de62 call 0x49df90 */ esp -= 4; M32(esp) = 0x49de67u; SAVEALL; F_0049df90(c); ABI_CHECK(0x49df90u, 0x49de62u); RETCHK(0x49de67u, 0x49de62u); LOADALL;
  /* 0049de67 add esp, 0x48 */ { u32 a_ = esp, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049de6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049de6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049de6c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049de6d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049de6e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049de70(CPU *c) {
  NATIVE_HOOK(0x49de70u) REGS; LOADALL;
L_0049de70:;
  /* 0049de70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049de71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049de73 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049de79 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049de7b push 0x61ccd8 */ { u32 v_ = 0x61ccd8u; esp -= 4; M32(esp) = v_; }
  /* 0049de80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049de81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049de88 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049de89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049de8a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049de8b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049de8d lea eax, [esi - 1] */ eax = (u32)((u32)(esi + 0xffffffffu));
  /* 0049de90 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049de91 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049de93 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0049de95 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0049de98 sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 0049de9a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049de9c mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049dea3 jge 0x49df12 */ if (!LT_) goto L_0049df12;
L_0049dea5:;
  /* 0049dea5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049dea8 mov edx, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); edx = (u32)(M32(m_)); }
  /* 0049deab mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049dead imul ecx, ecx, 0x3c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049deb0 lea edi, [ecx + eax] */ edi = (u32)((u32)(ecx + eax));
  /* 0049deb3 cmp dword ptr [edi + 0x24], edx */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049deb6 jae 0x49df15 */ if (!CF_) goto L_0049df15;
  /* 0049deb8 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049debb push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049debd add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049debf mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0049dec1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049dec3 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049dec6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049dec7 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049deca mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0049decc call 0x404140 */ esp -= 4; M32(esp) = 0x49ded1u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49deccu); RETCHK(0x49ded1u, 0x49deccu); LOADALL;
  /* 0049ded1 mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049ded4 mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0049ded7 mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049deda mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0049dedd mov cl, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dee0 mov byte ptr [esi + 0x28], cl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049dee3 mov dl, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dee6 mov byte ptr [esi + 0x29], dl */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049dee9 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0049deec mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0049deef mov ecx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0049def2 mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0049def5 mov edx, dword ptr [edi + 0x34] */ { const u32 m_ = (u32)(edi + 0x34u); edx = (u32)(M32(m_)); }
  /* 0049def8 mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 0049defb mov eax, dword ptr [edi + 0x38] */ { const u32 m_ = (u32)(edi + 0x38u); eax = (u32)(M32(m_)); }
  /* 0049defe mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0049df01 lea eax, [ebx - 1] */ eax = (u32)((u32)(ebx + 0xffffffffu));
  /* 0049df04 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049df05 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049df07 sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049df09 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0049df0b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0049df0d cmp dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049df10 jl 0x49dea5 */ if (LT_) goto L_0049dea5;
L_0049df12:;
  /* 0049df12 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_0049df15:;
  /* 0049df15 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049df18 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049df1b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049df1d add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049df1f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049df21 lea edx, [ebp + 0x14] */ edx = (u32)((u32)(ebp + 0x14u));
  /* 0049df24 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 0049df26 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049df27 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049df2a call 0x404140 */ esp -= 4; M32(esp) = 0x49df2fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49df2au); RETCHK(0x49df2fu, 0x49df2au); LOADALL;
  /* 0049df2f mov eax, dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); eax = (u32)(M32(m_)); }
  /* 0049df32 mov ecx, dword ptr [ebp + 0x34] */ { const u32 m_ = (u32)(ebp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 0049df35 mov dl, byte ptr [ebp + 0x38] */ { const u32 m_ = (u32)(ebp + 0x38u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049df38 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 0049df3b mov al, byte ptr [ebp + 0x39] */ { const u32 m_ = (u32)(ebp + 0x39u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049df3e mov byte ptr [esi + 0x29], al */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049df41 mov eax, dword ptr [ebp + 0x44] */ { const u32 m_ = (u32)(ebp + 0x44u); eax = (u32)(M32(m_)); }
  /* 0049df44 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0049df47 mov ecx, dword ptr [ebp + 0x3c] */ { const u32 m_ = (u32)(ebp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 0049df4a mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0049df4d cmp dword ptr [ebp + 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0x2cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049df51 mov byte ptr [esi + 0x28], dl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049df54 mov edx, dword ptr [ebp + 0x40] */ { const u32 m_ = (u32)(ebp + 0x40u); edx = (u32)(M32(m_)); }
  /* 0049df57 mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 0049df5a mov ecx, dword ptr [ebp + 0x48] */ { const u32 m_ = (u32)(ebp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 0049df5d mov dword ptr [esi + 0x30], edx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(edx); }
  /* 0049df60 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 0049df63 jb 0x49df71 */ if (CF_) goto L_0049df71;
  /* 0049df65 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0049df68 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049df69 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49df6eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49df69u); RETCHK(0x49df6eu, 0x49df69u); LOADALL;
  /* 0049df6e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049df71:;
  /* 0049df71 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049df74 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049df75 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049df76 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049df7d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049df7e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049df80 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049df81 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049df90(CPU *c) {
  NATIVE_HOOK(0x49df90u) REGS; LOADALL;
L_0049df90:;
  /* 0049df90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049df91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049df93 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049df99 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049df9b push 0x61eaa8 */ { u32 v_ = 0x61eaa8u; esp -= 4; M32(esp) = v_; }
  /* 0049dfa0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049dfa1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049dfa8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049dfa9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049dfaa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049dfab mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049dfae mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049dfb5 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049dfb8 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0049dfba push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049dfbc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049dfbe lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 0049dfc1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049dfc2 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049dfc5 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0049dfc7 call 0x404140 */ esp -= 4; M32(esp) = 0x49dfccu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49dfc7u); RETCHK(0x49dfccu, 0x49dfc7u); LOADALL;
  /* 0049dfcc mov edx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049dfcf mov dword ptr [esi + 0x20], edx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0049dfd2 mov eax, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049dfd5 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0049dfd8 mov cl, byte ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dfdb mov byte ptr [esi + 0x28], cl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049dfde mov dl, byte ptr [ebx + 0x29] */ { const u32 m_ = (u32)(ebx + 0x29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049dfe1 mov byte ptr [esi + 0x29], dl */ { const u32 m_ = (u32)(esi + 0x29u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049dfe4 mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0049dfe7 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0049dfea mov ecx, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0049dfed mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0049dff0 mov edx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); edx = (u32)(M32(m_)); }
  /* 0049dff3 mov dword ptr [esi + 0x34], edx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(edx); }
  /* 0049dff6 mov eax, dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); eax = (u32)(M32(m_)); }
  /* 0049dff9 sub esp, 0x3c */ { u32 a_ = esp, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049dffc mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0049dfff lea edi, [ebp + 0x14] */ edi = (u32)((u32)(ebp + 0x14u));
  /* 0049e002 mov esi, esp */ { esi = (u32)(esp); }
  /* 0049e004 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 0049e007 call 0x49d0d0 */ esp -= 4; M32(esp) = 0x49e00cu; SAVEALL; F_0049d0d0(c); ABI_CHECK(0x49d0d0u, 0x49e007u); RETCHK(0x49e00cu, 0x49e007u); LOADALL;
  /* 0049e00c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049e00f sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049e011 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049e016 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049e018 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049e01a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049e01d mov eax, edx */ { eax = (u32)(edx); }
  /* 0049e01f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049e022 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049e024 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e025 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e026 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0049e028 call 0x49dca0 */ esp -= 4; M32(esp) = 0x49e02du; SAVEALL; F_0049dca0(c); ABI_CHECK(0x49dca0u, 0x49e028u); RETCHK(0x49e02du, 0x49e028u); LOADALL;
  /* 0049e02d mov eax, dword ptr [ebp + 0x30] */ { const u32 m_ = (u32)(ebp + 0x30u); eax = (u32)(M32(m_)); }
  /* 0049e030 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e033 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e036 jb 0x49e044 */ if (CF_) goto L_0049e044;
  /* 0049e038 mov ecx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0049e03b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e03c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e041u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e03cu); RETCHK(0x49e041u, 0x49e03cu); LOADALL;
  /* 0049e041 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e044:;
  /* 0049e044 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049e047 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049e048 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e049 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049e050 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e051 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e053 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e054 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e060(CPU *c) {
  NATIVE_HOOK(0x49e060u) REGS; LOADALL;
L_0049e060:;
  /* 0049e060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e063 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e065 push 0x6205d8 */ { u32 v_ = 0x6205d8u; esp -= 4; M32(esp) = v_; }
  /* 0049e06a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049e070 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e071 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049e078 sub esp, 0x54 */ { u32 a_ = esp, b_ = 0x54u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e07b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049e080 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049e083 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e084 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e085 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049e086 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049e089 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0049e08c sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049e08e mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049e093 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049e095 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049e097 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049e09a mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0049e09d mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0049e09f sub esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0049e0a1 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0049e0a4 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049e0a6 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049e0ab imul esi */ { s64 p_ = (s64)(s32)eax * (s32)esi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049e0ad add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049e0af sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049e0b2 mov edi, edx */ { edi = (u32)(edx); }
  /* 0049e0b4 shr edi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 0049e0b7 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0049e0b9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049e0bb mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 0049e0be mov eax, edi */ { eax = (u32)(edi); }
  /* 0049e0c0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049e0c2 je 0x49e0cf */ if (ZF_) goto L_0049e0cf;
L_0049e0c4:;
  /* 0049e0c4 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0049e0c5 idiv esi */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, esi, &q_, &r_, 0x49e0c5u); eax = q_; edx = r_; }
  /* 0049e0c7 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049e0c9 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049e0cb mov esi, edx */ { esi = (u32)(edx); }
  /* 0049e0cd jne 0x49e0c4 */ if (!ZF_) goto L_0049e0c4;
L_0049e0cf:;
  /* 0049e0cf cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e0d1 jge 0x49e28f */ if (!LT_) goto L_0049e28f;
  /* 0049e0d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049e0d9 jle 0x49e28f */ if ((ZF_|LT_)) goto L_0049e28f;
  /* 0049e0df mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049e0e1 imul esi, esi, 0x3c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049e0e4 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049e0e6 imul ecx, ecx, 0x3c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049e0e9 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 0049e0ec lea ebx, [ecx + ebx + 0x20] */ ebx = (u32)((u32)(ecx + ebx + 0x20u));
  /* 0049e0f0 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 0049e0f3 jmp 0x49e0f8 */ goto L_0049e0f8;
L_0049e0f5:;
  /* 0049e0f5 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
L_0049e0f8:;
  /* 0049e0f8 mov edx, dword ptr [ebx - 0x20] */ { const u32 m_ = (u32)(ebx + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0049e0fb push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e0fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049e0ff lea eax, [ebx - 0x1c] */ eax = (u32)((u32)(ebx + 0xffffffe4u));
  /* 0049e102 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e103 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0049e106 lea edi, [ebx - 0x20] */ edi = (u32)((u32)(ebx + 0xffffffe0u));
  /* 0049e109 mov dword ptr [ebp - 0x4c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(edx); }
  /* 0049e10c mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 0049e113 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0049e11a mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0049e11e call 0x404140 */ esp -= 4; M32(esp) = 0x49e123u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49e11eu); RETCHK(0x49e123u, 0x49e11eu); LOADALL;
  /* 0049e123 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 0049e125 mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 0049e128 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0049e12b mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 0049e12e mov al, byte ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049e131 mov byte ptr [ebp - 0x24], al */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049e134 mov cl, byte ptr [ebx + 9] */ { const u32 m_ = (u32)(ebx + 0x9u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049e137 mov byte ptr [ebp - 0x23], cl */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049e13a mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0049e13d mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 0049e140 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 0049e143 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0049e146 mov ecx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0049e149 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0049e14c mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 0049e14f mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 0049e152 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049e159 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049e15c lea eax, [ebx + esi - 0x20] */ eax = (u32)((u32)(ebx + esi + 0xffffffe0u));
  /* 0049e160 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e162 jne 0x49e169 */ if (!ZF_) goto L_0049e169;
  /* 0049e164 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0049e167 jmp 0x49e16f */ goto L_0049e16f;
L_0049e169:;
  /* 0049e169 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 0049e16c lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
L_0049e16f:;
  /* 0049e16f mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0049e171 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e173 je 0x49e20f */ if (ZF_) goto L_0049e20f;
  /* 0049e179 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0049e180:;
  /* 0049e180 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0049e182 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e184 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049e186 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0049e189 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e18a lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049e18d mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0049e18f call 0x404140 */ esp -= 4; M32(esp) = 0x49e194u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49e18fu); RETCHK(0x49e194u, 0x49e18fu); LOADALL;
  /* 0049e194 mov edx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); edx = (u32)(M32(m_)); }
  /* 0049e197 mov dword ptr [edi + 0x20], edx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(edx); }
  /* 0049e19a mov eax, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M32(m_)); }
  /* 0049e19d mov dword ptr [edi + 0x24], eax */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0049e1a0 mov cl, byte ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049e1a3 mov byte ptr [edi + 0x28], cl */ { const u32 m_ = (u32)(edi + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049e1a6 mov dl, byte ptr [esi + 0x29] */ { const u32 m_ = (u32)(esi + 0x29u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049e1a9 mov byte ptr [edi + 0x29], dl */ { const u32 m_ = (u32)(edi + 0x29u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0049e1ac mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0049e1af mov dword ptr [edi + 0x2c], eax */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 0049e1b2 mov ecx, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0049e1b5 mov dword ptr [edi + 0x30], ecx */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0049e1b8 mov edx, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); edx = (u32)(M32(m_)); }
  /* 0049e1bb mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0049e1be mov dword ptr [edi + 0x34], edx */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(edx); }
  /* 0049e1c1 mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 0049e1c4 mov dword ptr [edi + 0x38], eax */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0049e1c7 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049e1c9 mov eax, 0x88888889 */ { eax = (u32)(0x88888889u); }
  /* 0049e1ce imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049e1d0 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0049e1d2 mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 0049e1d5 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0049e1d8 mov eax, edx */ { eax = (u32)(edx); }
  /* 0049e1da shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0049e1dd add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049e1df cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e1e1 mov edi, esi */ { edi = (u32)(esi); }
  /* 0049e1e3 jge 0x49e1f2 */ if (!LT_) goto L_0049e1f2;
  /* 0049e1e5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049e1e8 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049e1ea mov dword ptr [ebp - 0x5c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ecx); }
  /* 0049e1ed lea eax, [ebp - 0x5c] */ eax = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0049e1f0 jmp 0x49e202 */ goto L_0049e202;
L_0049e1f2:;
  /* 0049e1f2 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049e1f4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049e1f7 imul ecx, ecx, 0x3c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0049e1fa add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0049e1fc mov dword ptr [ebp - 0x58], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ecx); }
  /* 0049e1ff lea eax, [ebp - 0x58] */ eax = (u32)((u32)(ebp + 0xffffffa8u));
L_0049e202:;
  /* 0049e202 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0049e204 lea eax, [ebx - 0x20] */ eax = (u32)((u32)(ebx + 0xffffffe0u));
  /* 0049e207 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e209 jne 0x49e180 */ if (!ZF_) goto L_0049e180;
L_0049e20f:;
  /* 0049e20f mov edx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (u32)(M32(m_)); }
  /* 0049e212 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e214 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049e216 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0049e219 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e21a lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0049e21d mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 0049e21f call 0x404140 */ esp -= 4; M32(esp) = 0x49e224u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49e21fu); RETCHK(0x49e224u, 0x49e21fu); LOADALL;
  /* 0049e224 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 0049e227 mov dword ptr [edi + 0x20], ecx */ { const u32 m_ = (u32)(edi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0049e22a mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0049e22d mov dword ptr [edi + 0x24], edx */ { const u32 m_ = (u32)(edi + 0x24u); M32(m_) = (u32)(edx); }
  /* 0049e230 mov al, byte ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049e233 mov byte ptr [edi + 0x28], al */ { const u32 m_ = (u32)(edi + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049e236 mov cl, byte ptr [ebp - 0x23] */ { const u32 m_ = (u32)(ebp + 0xffffffddu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049e239 mov byte ptr [edi + 0x29], cl */ { const u32 m_ = (u32)(edi + 0x29u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0049e23c mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0049e23f mov dword ptr [edi + 0x2c], edx */ { const u32 m_ = (u32)(edi + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0049e242 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0049e245 mov dword ptr [edi + 0x30], eax */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(eax); }
  /* 0049e248 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0049e24b mov dword ptr [edi + 0x34], ecx */ { const u32 m_ = (u32)(edi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0049e24e mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0049e251 mov dword ptr [edi + 0x38], edx */ { const u32 m_ = (u32)(edi + 0x38u); M32(m_) = (u32)(edx); }
  /* 0049e254 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049e25b cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e25f jb 0x49e26d */ if (CF_) goto L_0049e26d;
  /* 0049e261 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0049e264 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e265 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e26au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e265u); RETCHK(0x49e26au, 0x49e265u); LOADALL;
  /* 0049e26a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e26d:;
  /* 0049e26d mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 0049e270 sub ebx, 0x3c */ { u32 a_ = ebx, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0049e273 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049e274 mov dword ptr [ebp - 0x30], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0xfu); }
  /* 0049e27b mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0049e282 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0049e286 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 0049e289 jne 0x49e0f5 */ if (!ZF_) goto L_0049e0f5;
L_0049e28f:;
  /* 0049e28f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049e292 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049e293 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e294 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049e29b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049e29e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e29f call 0x61af31 */ esp -= 4; M32(esp) = 0x49e2a4u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49e29fu); RETCHK(0x49e2a4u, 0x49e29fu); LOADALL;
  /* 0049e2a4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e2a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e2a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e2b0(CPU *c) {
  NATIVE_HOOK(0x49e2b0u) REGS; LOADALL;
L_0049e2b0:;
  /* 0049e2b0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e2b1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049e2b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e2b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e2b5 call 0x509940 */ esp -= 4; M32(esp) = 0x49e2bau; SAVEALL; F_00509940(c); ABI_CHECK(0x509940u, 0x49e2b5u); RETCHK(0x49e2bau, 0x49e2b5u); LOADALL;
  /* 0049e2ba mov dword ptr [esi], 0x64bff0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64bff0u); }
  /* 0049e2c0 mov dword ptr [esi + 0x364], ebx */ { const u32 m_ = (u32)(esi + 0x364u); M32(m_) = (u32)(ebx); }
  /* 0049e2c6 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0049e2cb mov dword ptr [esi + 0x368], eax */ { const u32 m_ = (u32)(esi + 0x368u); M32(m_) = (u32)(eax); }
  /* 0049e2d1 mov byte ptr [esi + 0x354], bl */ { const u32 m_ = (u32)(esi + 0x354u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e2d7 mov dword ptr [esi + 0x384], eax */ { const u32 m_ = (u32)(esi + 0x384u); M32(m_) = (u32)(eax); }
  /* 0049e2dd mov dword ptr [esi + 0x380], ebx */ { const u32 m_ = (u32)(esi + 0x380u); M32(m_) = (u32)(ebx); }
  /* 0049e2e3 mov byte ptr [esi + 0x370], bl */ { const u32 m_ = (u32)(esi + 0x370u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e2e9 mov dword ptr [esi + 0x3a0], eax */ { const u32 m_ = (u32)(esi + 0x3a0u); M32(m_) = (u32)(eax); }
  /* 0049e2ef mov dword ptr [esi + 0x39c], ebx */ { const u32 m_ = (u32)(esi + 0x39cu); M32(m_) = (u32)(ebx); }
  /* 0049e2f5 mov byte ptr [esi + 0x38c], bl */ { const u32 m_ = (u32)(esi + 0x38cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e2fb mov dword ptr [esi + 0x3a4], ebx */ { const u32 m_ = (u32)(esi + 0x3a4u); M32(m_) = (u32)(ebx); }
  /* 0049e301 mov dword ptr [esi + 0x3a8], ebx */ { const u32 m_ = (u32)(esi + 0x3a8u); M32(m_) = (u32)(ebx); }
  /* 0049e307 mov dword ptr [esi + 0x3ac], ebx */ { const u32 m_ = (u32)(esi + 0x3acu); M32(m_) = (u32)(ebx); }
  /* 0049e30d mov eax, esi */ { eax = (u32)(esi); }
  /* 0049e30f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e310 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e320(CPU *c) {
  NATIVE_HOOK(0x49e320u) REGS; LOADALL;
L_0049e320:;
  /* 0049e320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e323 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e324 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049e326 call 0x49e350 */ esp -= 4; M32(esp) = 0x49e32bu; SAVEALL; F_0049e350(c); ABI_CHECK(0x49e350u, 0x49e326u); RETCHK(0x49e32bu, 0x49e326u); LOADALL;
  /* 0049e32b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049e32f je 0x49e33a */ if (ZF_) goto L_0049e33a;
  /* 0049e331 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e332 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e337u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e332u); RETCHK(0x49e337u, 0x49e332u); LOADALL;
  /* 0049e337 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e33a:;
  /* 0049e33a mov eax, esi */ { eax = (u32)(esi); }
  /* 0049e33c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e33d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e33e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049e350(CPU *c) {
  NATIVE_HOOK(0x49e350u) REGS; LOADALL;
L_0049e350:;
  /* 0049e350 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e351 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e352 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049e354 mov dword ptr [esi], 0x64bff0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64bff0u); }
  /* 0049e35a cmp dword ptr [esi + 0x3a0], 0x10 */ { const u32 m_ = (u32)(esi + 0x3a0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e361 jb 0x49e372 */ if (CF_) goto L_0049e372;
  /* 0049e363 mov eax, dword ptr [esi + 0x38c] */ { const u32 m_ = (u32)(esi + 0x38cu); eax = (u32)(M32(m_)); }
  /* 0049e369 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e36a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e36fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e36au); RETCHK(0x49e36fu, 0x49e36au); LOADALL;
  /* 0049e36f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e372:;
  /* 0049e372 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049e374 mov dword ptr [esi + 0x3a0], 0xf */ { const u32 m_ = (u32)(esi + 0x3a0u); M32(m_) = (u32)(0xfu); }
  /* 0049e37e mov dword ptr [esi + 0x39c], ebx */ { const u32 m_ = (u32)(esi + 0x39cu); M32(m_) = (u32)(ebx); }
  /* 0049e384 mov byte ptr [esi + 0x38c], bl */ { const u32 m_ = (u32)(esi + 0x38cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e38a cmp dword ptr [esi + 0x384], 0x10 */ { const u32 m_ = (u32)(esi + 0x384u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e391 jb 0x49e3a2 */ if (CF_) goto L_0049e3a2;
  /* 0049e393 mov ecx, dword ptr [esi + 0x370] */ { const u32 m_ = (u32)(esi + 0x370u); ecx = (u32)(M32(m_)); }
  /* 0049e399 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e39a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e39fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e39au); RETCHK(0x49e39fu, 0x49e39au); LOADALL;
  /* 0049e39f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e3a2:;
  /* 0049e3a2 mov dword ptr [esi + 0x384], 0xf */ { const u32 m_ = (u32)(esi + 0x384u); M32(m_) = (u32)(0xfu); }
  /* 0049e3ac mov dword ptr [esi + 0x380], ebx */ { const u32 m_ = (u32)(esi + 0x380u); M32(m_) = (u32)(ebx); }
  /* 0049e3b2 mov byte ptr [esi + 0x370], bl */ { const u32 m_ = (u32)(esi + 0x370u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e3b8 cmp dword ptr [esi + 0x368], 0x10 */ { const u32 m_ = (u32)(esi + 0x368u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e3bf jb 0x49e3d0 */ if (CF_) goto L_0049e3d0;
  /* 0049e3c1 mov edx, dword ptr [esi + 0x354] */ { const u32 m_ = (u32)(esi + 0x354u); edx = (u32)(M32(m_)); }
  /* 0049e3c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049e3c8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e3cdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e3c8u); RETCHK(0x49e3cdu, 0x49e3c8u); LOADALL;
  /* 0049e3cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e3d0:;
  /* 0049e3d0 mov dword ptr [esi + 0x364], ebx */ { const u32 m_ = (u32)(esi + 0x364u); M32(m_) = (u32)(ebx); }
  /* 0049e3d6 mov dword ptr [esi + 0x368], 0xf */ { const u32 m_ = (u32)(esi + 0x368u); M32(m_) = (u32)(0xfu); }
  /* 0049e3e0 mov byte ptr [esi + 0x354], bl */ { const u32 m_ = (u32)(esi + 0x354u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e3e6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0049e3e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e3e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e3ea jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_0049e3f0(CPU *c) {
  NATIVE_HOOK(0x49e3f0u) REGS; LOADALL;
L_0049e3f0:;
  /* 0049e3f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e3f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e3f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e3f5 push 0x61c008 */ { u32 v_ = 0x61c008u; esp -= 4; M32(esp) = v_; }
  /* 0049e3fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049e400 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e401 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049e408 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e40b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e40c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e40d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049e40e push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0049e410 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0049e412 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049e414 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 0049e419 push 0x64c10c */ { u32 v_ = 0x64c10cu; esp -= 4; M32(esp) = v_; }
  /* 0049e41e lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049e421 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 0049e424 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0049e427 mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e42a call 0x404420 */ esp -= 4; M32(esp) = 0x49e42fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49e42au); RETCHK(0x49e42fu, 0x49e42au); LOADALL;
  /* 0049e42f lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049e432 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e433 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049e435 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049e438 call 0x5075d0 */ esp -= 4; M32(esp) = 0x49e43du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x49e438u); RETCHK(0x49e43du, 0x49e438u); LOADALL;
  /* 0049e43d mov dword ptr [edi + 0x3a4], eax */ { const u32 m_ = (u32)(edi + 0x3a4u); M32(m_) = (u32)(eax); }
  /* 0049e443 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049e44a cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e44e jb 0x49e45c */ if (CF_) goto L_0049e45c;
  /* 0049e450 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 0049e453 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e454 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e459u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e454u); RETCHK(0x49e459u, 0x49e454u); LOADALL;
  /* 0049e459 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e45c:;
  /* 0049e45c push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 0049e45e push 0x64c100 */ { u32 v_ = 0x64c100u; esp -= 4; M32(esp) = v_; }
  /* 0049e463 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049e466 mov dword ptr [ebp - 0x2c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(esi); }
  /* 0049e469 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0049e46c mov byte ptr [ebp - 0x40], bl */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e46f call 0x404420 */ esp -= 4; M32(esp) = 0x49e474u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49e46fu); RETCHK(0x49e474u, 0x49e46fu); LOADALL;
  /* 0049e474 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0049e477 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049e478 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049e47a mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0049e481 call 0x5075d0 */ esp -= 4; M32(esp) = 0x49e486u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x49e481u); RETCHK(0x49e486u, 0x49e481u); LOADALL;
  /* 0049e486 mov dword ptr [edi + 0x3a8], eax */ { const u32 m_ = (u32)(edi + 0x3a8u); M32(m_) = (u32)(eax); }
  /* 0049e48c mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049e493 cmp dword ptr [ebp - 0x2c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e497 jb 0x49e4a5 */ if (CF_) goto L_0049e4a5;
  /* 0049e499 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0049e49c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e49d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e4a2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e49du); RETCHK(0x49e4a2u, 0x49e49du); LOADALL;
  /* 0049e4a2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e4a5:;
  /* 0049e4a5 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0049e4a7 push 0x64c0f4 */ { u32 v_ = 0x64c0f4u; esp -= 4; M32(esp) = v_; }
  /* 0049e4ac lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0049e4af mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0049e4b2 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0049e4b5 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e4b8 call 0x404420 */ esp -= 4; M32(esp) = 0x49e4bdu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49e4b8u); RETCHK(0x49e4bdu, 0x49e4b8u); LOADALL;
  /* 0049e4bd lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0049e4c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e4c1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0049e4c3 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0049e4ca call 0x5075d0 */ esp -= 4; M32(esp) = 0x49e4cfu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x49e4cau); RETCHK(0x49e4cfu, 0x49e4cau); LOADALL;
  /* 0049e4cf mov dword ptr [edi + 0x3ac], eax */ { const u32 m_ = (u32)(edi + 0x3acu); M32(m_) = (u32)(eax); }
  /* 0049e4d5 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049e4dc cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e4e0 jb 0x49e4ee */ if (CF_) goto L_0049e4ee;
  /* 0049e4e2 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0049e4e5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049e4e6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e4ebu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e4e6u); RETCHK(0x49e4ebu, 0x49e4e6u); LOADALL;
  /* 0049e4eb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e4ee:;
  /* 0049e4ee mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0049e4f1 mov esi, dword ptr [edi + 0x3a4] */ { const u32 m_ = (u32)(edi + 0x3a4u); esi = (u32)(M32(m_)); }
  /* 0049e4f7 lea eax, [edi + 0x350] */ eax = (u32)((u32)(edi + 0x350u));
  /* 0049e4fd mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0049e500 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e503 call 0x5224b0 */ esp -= 4; M32(esp) = 0x49e508u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x49e503u); RETCHK(0x49e508u, 0x49e503u); LOADALL;
  /* 0049e508 mov esi, dword ptr [edi + 0x3a8] */ { const u32 m_ = (u32)(edi + 0x3a8u); esi = (u32)(M32(m_)); }
  /* 0049e50e lea eax, [edi + 0x36c] */ eax = (u32)((u32)(edi + 0x36cu));
  /* 0049e514 call 0x5224b0 */ esp -= 4; M32(esp) = 0x49e519u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x49e514u); RETCHK(0x49e519u, 0x49e514u); LOADALL;
  /* 0049e519 mov esi, dword ptr [edi + 0x3ac] */ { const u32 m_ = (u32)(edi + 0x3acu); esi = (u32)(M32(m_)); }
  /* 0049e51f lea eax, [edi + 0x388] */ eax = (u32)((u32)(edi + 0x388u));
  /* 0049e525 call 0x5224b0 */ esp -= 4; M32(esp) = 0x49e52au; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x49e525u); RETCHK(0x49e52au, 0x49e525u); LOADALL;
  /* 0049e52a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049e52d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049e52e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e52f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0049e531 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e532 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049e539 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e53b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e53c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e540(CPU *c) {
  NATIVE_HOOK(0x49e540u) REGS; LOADALL;
L_0049e540:;
  /* 0049e540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e543 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e544 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e545 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0049e548 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0049e54a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0049e54b mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049e54d jne 0x49e57e */ if (!ZF_) goto L_0049e57e;
  /* 0049e54f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0049e552 call 0x5075c0 */ esp -= 4; M32(esp) = 0x49e557u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x49e552u); RETCHK(0x49e557u, 0x49e552u); LOADALL;
  /* 0049e557 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0049e55a push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0049e55c push 0x64c0e8 */ { u32 v_ = 0x64c0e8u; esp -= 4; M32(esp) = v_; }
  /* 0049e561 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e562 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049e564 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049e566 call 0x405de0 */ esp -= 4; M32(esp) = 0x49e56bu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x49e566u); RETCHK(0x49e56bu, 0x49e566u); LOADALL;
  /* 0049e56b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049e56d jne 0x49e57e */ if (!ZF_) goto L_0049e57e;
  /* 0049e56f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0049e571 call 0x509d90 */ esp -= 4; M32(esp) = 0x49e576u; SAVEALL; F_00509d90(c); ABI_CHECK(0x509d90u, 0x49e571u); RETCHK(0x49e576u, 0x49e571u); LOADALL;
  /* 0049e576 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e577 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0049e579 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e57a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e57b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0049e57e:;
  /* 0049e57e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e57f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049e581 call 0x50a1b0 */ esp -= 4; M32(esp) = 0x49e586u; SAVEALL; F_0050a1b0(c); ABI_CHECK(0x50a1b0u, 0x49e581u); RETCHK(0x49e586u, 0x49e581u); LOADALL;
  /* 0049e586 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e587 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e588 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e589 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049e590(CPU *c) {
  NATIVE_HOOK(0x49e590u) REGS; LOADALL;
L_0049e590:;
  /* 0049e590 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e591 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e593 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e595 push 0x61ffa0 */ { u32 v_ = 0x61ffa0u; esp -= 4; M32(esp) = v_; }
  /* 0049e59a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049e5a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e5a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049e5a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e5a9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e5aa push 0x49e610 */ { u32 v_ = 0x49e610u; esp -= 4; M32(esp) = v_; }
  /* 0049e5af sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e5b2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0049e5b4 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0049e5b6 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0049e5b9 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0049e5bc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e5be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e5bf lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0049e5c2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0049e5c9 mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0049e5cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e5cd mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e5d0 call 0x404140 */ esp -= 4; M32(esp) = 0x49e5d5u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x49e5d0u); RETCHK(0x49e5d5u, 0x49e5d0u); LOADALL;
  /* 0049e5d5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0049e5d8 call 0x405c00 */ esp -= 4; M32(esp) = 0x49e5ddu; SAVEALL; F_00405c00(c); ABI_CHECK(0x405c00u, 0x49e5d8u); RETCHK(0x49e5ddu, 0x49e5d8u); LOADALL;
  /* 0049e5dd mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0049e5df call 0x405c80 */ esp -= 4; M32(esp) = 0x49e5e4u; SAVEALL; F_00405c80(c); ABI_CHECK(0x405c80u, 0x49e5dfu); RETCHK(0x49e5e4u, 0x49e5dfu); LOADALL;
  /* 0049e5e4 cmp dword ptr [ebp + 0x20], 0x10 */ { const u32 m_ = (u32)(ebp + 0x20u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e5e8 jb 0x49e5f6 */ if (CF_) goto L_0049e5f6;
  /* 0049e5ea mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0049e5ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e5ee call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e5f3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e5eeu); RETCHK(0x49e5f3u, 0x49e5eeu); LOADALL;
  /* 0049e5f3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e5f6:;
  /* 0049e5f6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049e5f9 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049e5fb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049e602 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e603 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e605 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e606 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0049e610(CPU *c) {
  NATIVE_HOOK(0x49e610u) REGS; LOADALL;
L_0049e610:;
  /* 0049e610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e613 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e615 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0049e61a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049e620 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e621 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049e628 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e629 push 0x3b0 */ { u32 v_ = 0x3b0u; esp -= 4; M32(esp) = v_; }
  /* 0049e62e call 0x5fe934 */ esp -= 4; M32(esp) = 0x49e633u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x49e62eu); RETCHK(0x49e633u, 0x49e62eu); LOADALL;
  /* 0049e633 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e636 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049e639 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049e63b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0049e642 je 0x49e65b */ if (ZF_) goto L_0049e65b;
  /* 0049e644 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e645 mov esi, eax */ { esi = (u32)(eax); }
  /* 0049e647 call 0x49e2b0 */ esp -= 4; M32(esp) = 0x49e64cu; SAVEALL; F_0049e2b0(c); ABI_CHECK(0x49e2b0u, 0x49e647u); RETCHK(0x49e64cu, 0x49e647u); LOADALL;
  /* 0049e64c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e64d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049e650 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049e657 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e659 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e65a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049e65b:;
  /* 0049e65b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049e65e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049e660 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049e667 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e669 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e66a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e670(CPU *c) {
  NATIVE_HOOK(0x49e670u) REGS; LOADALL;
L_0049e670:;
  /* 0049e670 mov eax, 0x3129 */ { eax = (u32)(0x3129u); }
  /* 0049e675 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e680(CPU *c) {
  NATIVE_HOOK(0x49e680u) REGS; LOADALL;
L_0049e680:;
  /* 0049e680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e683 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e686 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e68a jne 0x49e6d1 */ if (!ZF_) goto L_0049e6d1;
  /* 0049e68c mov ecx, dword ptr [0x7a6bac] */ { const u32 m_ = (u32)(0x7a6bacu); ecx = (u32)(M32(m_)); }
  /* 0049e692 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0049e694 mov dword ptr [ebp - 8], 0x1000000c */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x1000000cu); }
  /* 0049e69b call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49e69eu; SAVEALL; call_ind(c, t_); RETCHK(0x49e69eu, 0x49e69bu); LOADALL; }
  /* 0049e69e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049e6a0 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0049e6a3 call 0x4019a0 */ esp -= 4; M32(esp) = 0x49e6a8u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x49e6a3u); RETCHK(0x49e6a8u, 0x49e6a3u); LOADALL;
  /* 0049e6a8 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0049e6ae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e6b1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0049e6b3 je 0x49e6c3 */ if (ZF_) goto L_0049e6c3;
  /* 0049e6b5 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0049e6b8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049e6b9 mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 0049e6be call 0x55f4b0 */ esp -= 4; M32(esp) = 0x49e6c3u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x49e6beu); RETCHK(0x49e6c3u, 0x49e6beu); LOADALL;
L_0049e6c3:;
  /* 0049e6c3 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0049e6c5 call 0x54c180 */ esp -= 4; M32(esp) = 0x49e6cau; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x49e6c5u); RETCHK(0x49e6cau, 0x49e6c5u); LOADALL;
  /* 0049e6ca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e6cd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e6cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e6d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049e6d1:;
  /* 0049e6d1 mov dword ptr [0x7a6bfc], 0 */ { const u32 m_ = (u32)(0x7a6bfcu); M32(m_) = (u32)(0x0u); }
  /* 0049e6db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049e6dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e6de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e6e0(CPU *c) {
  NATIVE_HOOK(0x49e6e0u) REGS; LOADALL;
  goto L_0049e6e0;
L_00483be0:;
  /* 00483be0 mov eax, dword ptr [0x6861b8] */ { const u32 m_ = (u32)(0x6861b8u); eax = (u32)(M32(m_)); }
  /* 00483be5 mov ecx, dword ptr [ecx + 0x398] */ { const u32 m_ = (u32)(ecx + 0x398u); ecx = (u32)(M32(m_)); }
  /* 00483beb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00483bed inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00483bee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00483bef mov dword ptr [0x6861b8], eax */ { const u32 m_ = (u32)(0x6861b8u); M32(m_) = (u32)(eax); }
  /* 00483bf4 call dword ptr [edx + 0x70] */ { const u32 m_ = (u32)(edx + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x483bf7u; SAVEALL; call_ind(c, t_); RETCHK(0x483bf7u, 0x483bf4u); LOADALL; }
  /* 00483bf7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049e6e0:;
  /* 0049e6e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e6e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e6e3 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049e6e7 jne 0x49e6f6 */ if (!ZF_) goto L_0049e6f6;
  /* 0049e6e9 call 0x404700 */ esp -= 4; M32(esp) = 0x49e6eeu; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x49e6e9u); RETCHK(0x49e6eeu, 0x49e6e9u); LOADALL;
  /* 0049e6ee mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0049e6f0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e6f1 jmp 0x483be0 */ goto L_00483be0;
L_0049e6f6:;
  /* 0049e6f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e6f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e700(CPU *c) {
  NATIVE_HOOK(0x49e700u) REGS; LOADALL;
L_0049e700:;
  /* 0049e700 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e701 call 0x54ba60 */ esp -= 4; M32(esp) = 0x49e706u; SAVEALL; F_0054ba60(c); ABI_CHECK(0x54ba60u, 0x49e701u); RETCHK(0x49e706u, 0x49e701u); LOADALL;
  /* 0049e706 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049e708 mov dword ptr [esi + 0xc4], eax */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(eax); }
  /* 0049e70e mov dword ptr [esi + 0xc8], eax */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(eax); }
  /* 0049e714 mov dword ptr [esi + 0xcc], eax */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(eax); }
  /* 0049e71a mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 0049e720 mov dword ptr [esi + 0xd4], eax */ { const u32 m_ = (u32)(esi + 0xd4u); M32(m_) = (u32)(eax); }
  /* 0049e726 mov dword ptr [esi + 0xd8], eax */ { const u32 m_ = (u32)(esi + 0xd8u); M32(m_) = (u32)(eax); }
  /* 0049e72c mov dword ptr [esi + 0xdc], eax */ { const u32 m_ = (u32)(esi + 0xdcu); M32(m_) = (u32)(eax); }
  /* 0049e732 mov dword ptr [esi + 0xe0], eax */ { const u32 m_ = (u32)(esi + 0xe0u); M32(m_) = (u32)(eax); }
  /* 0049e738 mov dword ptr [esi + 0xe4], eax */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(eax); }
  /* 0049e73e mov dword ptr [esi + 0xe8], eax */ { const u32 m_ = (u32)(esi + 0xe8u); M32(m_) = (u32)(eax); }
  /* 0049e744 mov dword ptr [esi + 0xec], eax */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(eax); }
  /* 0049e74a mov dword ptr [esi + 0xf0], eax */ { const u32 m_ = (u32)(esi + 0xf0u); M32(m_) = (u32)(eax); }
  /* 0049e750 mov dword ptr [esi + 0xf4], eax */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(eax); }
  /* 0049e756 mov dword ptr [esi + 0xf8], eax */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(eax); }
  /* 0049e75c mov dword ptr [esi + 0xfc], eax */ { const u32 m_ = (u32)(esi + 0xfcu); M32(m_) = (u32)(eax); }
  /* 0049e762 mov dword ptr [esi + 0x100], eax */ { const u32 m_ = (u32)(esi + 0x100u); M32(m_) = (u32)(eax); }
  /* 0049e768 mov dword ptr [esi + 0x104], eax */ { const u32 m_ = (u32)(esi + 0x104u); M32(m_) = (u32)(eax); }
  /* 0049e76e mov dword ptr [esi + 0x108], eax */ { const u32 m_ = (u32)(esi + 0x108u); M32(m_) = (u32)(eax); }
  /* 0049e774 mov byte ptr [esi + 0x1c5], al */ { const u32 m_ = (u32)(esi + 0x1c5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049e77a mov byte ptr [esi + 0x1c6], al */ { const u32 m_ = (u32)(esi + 0x1c6u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049e780 mov byte ptr [esi + 0x1c7], al */ { const u32 m_ = (u32)(esi + 0x1c7u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0049e786 mov dword ptr [esi], 0x64c128 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x64c128u); }
  /* 0049e78c mov dword ptr [esi + 0x160], eax */ { const u32 m_ = (u32)(esi + 0x160u); M32(m_) = (u32)(eax); }
  /* 0049e792 mov dword ptr [esi + 0x170], eax */ { const u32 m_ = (u32)(esi + 0x170u); M32(m_) = (u32)(eax); }
  /* 0049e798 mov dword ptr [esi + 0x164], eax */ { const u32 m_ = (u32)(esi + 0x164u); M32(m_) = (u32)(eax); }
  /* 0049e79e mov dword ptr [esi + 0x174], eax */ { const u32 m_ = (u32)(esi + 0x174u); M32(m_) = (u32)(eax); }
  /* 0049e7a4 mov dword ptr [esi + 0x168], eax */ { const u32 m_ = (u32)(esi + 0x168u); M32(m_) = (u32)(eax); }
  /* 0049e7aa mov dword ptr [esi + 0x178], eax */ { const u32 m_ = (u32)(esi + 0x178u); M32(m_) = (u32)(eax); }
  /* 0049e7b0 mov dword ptr [esi + 0x16c], eax */ { const u32 m_ = (u32)(esi + 0x16cu); M32(m_) = (u32)(eax); }
  /* 0049e7b6 mov dword ptr [esi + 0x17c], eax */ { const u32 m_ = (u32)(esi + 0x17cu); M32(m_) = (u32)(eax); }
  /* 0049e7bc mov dword ptr [esi + 0x180], eax */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(eax); }
  /* 0049e7c2 mov dword ptr [esi + 0x18c], eax */ { const u32 m_ = (u32)(esi + 0x18cu); M32(m_) = (u32)(eax); }
  /* 0049e7c8 mov dword ptr [esi + 0x184], eax */ { const u32 m_ = (u32)(esi + 0x184u); M32(m_) = (u32)(eax); }
  /* 0049e7ce mov dword ptr [esi + 0x190], eax */ { const u32 m_ = (u32)(esi + 0x190u); M32(m_) = (u32)(eax); }
  /* 0049e7d4 mov dword ptr [esi + 0x188], eax */ { const u32 m_ = (u32)(esi + 0x188u); M32(m_) = (u32)(eax); }
  /* 0049e7da mov dword ptr [esi + 0x194], eax */ { const u32 m_ = (u32)(esi + 0x194u); M32(m_) = (u32)(eax); }
  /* 0049e7e0 mov dword ptr [esi + 0x198], eax */ { const u32 m_ = (u32)(esi + 0x198u); M32(m_) = (u32)(eax); }
  /* 0049e7e6 mov dword ptr [esi + 0x1ac], eax */ { const u32 m_ = (u32)(esi + 0x1acu); M32(m_) = (u32)(eax); }
  /* 0049e7ec mov dword ptr [esi + 0x19c], eax */ { const u32 m_ = (u32)(esi + 0x19cu); M32(m_) = (u32)(eax); }
  /* 0049e7f2 mov dword ptr [esi + 0x1b0], eax */ { const u32 m_ = (u32)(esi + 0x1b0u); M32(m_) = (u32)(eax); }
  /* 0049e7f8 mov dword ptr [esi + 0x1a0], eax */ { const u32 m_ = (u32)(esi + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 0049e7fe mov dword ptr [esi + 0x1b4], eax */ { const u32 m_ = (u32)(esi + 0x1b4u); M32(m_) = (u32)(eax); }
  /* 0049e804 mov dword ptr [esi + 0x1a4], eax */ { const u32 m_ = (u32)(esi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 0049e80a mov dword ptr [esi + 0x1b8], eax */ { const u32 m_ = (u32)(esi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 0049e810 mov dword ptr [esi + 0x1a8], eax */ { const u32 m_ = (u32)(esi + 0x1a8u); M32(m_) = (u32)(eax); }
  /* 0049e816 mov dword ptr [esi + 0x1bc], eax */ { const u32 m_ = (u32)(esi + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 0049e81c mov dword ptr [esi + 0x1c0], eax */ { const u32 m_ = (u32)(esi + 0x1c0u); M32(m_) = (u32)(eax); }
  /* 0049e822 mov dword ptr [esi + 0x10c], eax */ { const u32 m_ = (u32)(esi + 0x10cu); M32(m_) = (u32)(eax); }
  /* 0049e828 mov dword ptr [esi + 0x150], eax */ { const u32 m_ = (u32)(esi + 0x150u); M32(m_) = (u32)(eax); }
  /* 0049e82e mov dword ptr [esi + 0x154], eax */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(eax); }
  /* 0049e834 mov dword ptr [esi + 0x158], eax */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(eax); }
  /* 0049e83a mov dword ptr [esi + 0x15c], eax */ { const u32 m_ = (u32)(esi + 0x15cu); M32(m_) = (u32)(eax); }
  /* 0049e840 mov dword ptr [esi + 0x110], eax */ { const u32 m_ = (u32)(esi + 0x110u); M32(m_) = (u32)(eax); }
  /* 0049e846 mov dword ptr [esi + 0x120], eax */ { const u32 m_ = (u32)(esi + 0x120u); M32(m_) = (u32)(eax); }
  /* 0049e84c mov dword ptr [esi + 0x130], eax */ { const u32 m_ = (u32)(esi + 0x130u); M32(m_) = (u32)(eax); }
  /* 0049e852 mov dword ptr [esi + 0x140], eax */ { const u32 m_ = (u32)(esi + 0x140u); M32(m_) = (u32)(eax); }
  /* 0049e858 mov dword ptr [esi + 0x114], eax */ { const u32 m_ = (u32)(esi + 0x114u); M32(m_) = (u32)(eax); }
  /* 0049e85e mov dword ptr [esi + 0x124], eax */ { const u32 m_ = (u32)(esi + 0x124u); M32(m_) = (u32)(eax); }
  /* 0049e864 mov dword ptr [esi + 0x134], eax */ { const u32 m_ = (u32)(esi + 0x134u); M32(m_) = (u32)(eax); }
  /* 0049e86a mov dword ptr [esi + 0x144], eax */ { const u32 m_ = (u32)(esi + 0x144u); M32(m_) = (u32)(eax); }
  /* 0049e870 mov dword ptr [esi + 0x118], eax */ { const u32 m_ = (u32)(esi + 0x118u); M32(m_) = (u32)(eax); }
  /* 0049e876 mov dword ptr [esi + 0x128], eax */ { const u32 m_ = (u32)(esi + 0x128u); M32(m_) = (u32)(eax); }
  /* 0049e87c mov dword ptr [esi + 0x138], eax */ { const u32 m_ = (u32)(esi + 0x138u); M32(m_) = (u32)(eax); }
  /* 0049e882 mov dword ptr [esi + 0x148], eax */ { const u32 m_ = (u32)(esi + 0x148u); M32(m_) = (u32)(eax); }
  /* 0049e888 mov dword ptr [esi + 0x11c], eax */ { const u32 m_ = (u32)(esi + 0x11cu); M32(m_) = (u32)(eax); }
  /* 0049e88e mov dword ptr [esi + 0x12c], eax */ { const u32 m_ = (u32)(esi + 0x12cu); M32(m_) = (u32)(eax); }
  /* 0049e894 mov dword ptr [esi + 0x13c], eax */ { const u32 m_ = (u32)(esi + 0x13cu); M32(m_) = (u32)(eax); }
  /* 0049e89a mov dword ptr [esi + 0x14c], eax */ { const u32 m_ = (u32)(esi + 0x14cu); M32(m_) = (u32)(eax); }
  /* 0049e8a0 mov dword ptr [0x7a6bac], esi */ { const u32 m_ = (u32)(0x7a6bacu); M32(m_) = (u32)(esi); }
  /* 0049e8a6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0049e8a8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e8b0(CPU *c) {
  NATIVE_HOOK(0x49e8b0u) REGS; LOADALL;
L_0049e8b0:;
  /* 0049e8b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e8b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e8b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e8b4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0049e8b6 call 0x49e8e0 */ esp -= 4; M32(esp) = 0x49e8bbu; SAVEALL; F_0049e8e0(c); ABI_CHECK(0x49e8e0u, 0x49e8b6u); RETCHK(0x49e8bbu, 0x49e8b6u); LOADALL;
  /* 0049e8bb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049e8bf je 0x49e8ca */ if (ZF_) goto L_0049e8ca;
  /* 0049e8c1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e8c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49e8c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49e8c2u); RETCHK(0x49e8c7u, 0x49e8c2u); LOADALL;
  /* 0049e8c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049e8ca:;
  /* 0049e8ca mov eax, esi */ { eax = (u32)(esi); }
  /* 0049e8cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0049e8cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049e8ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0049e8e0(CPU *c) {
  NATIVE_HOOK(0x49e8e0u) REGS; LOADALL;
L_0049e8e0:;
  /* 0049e8e0 mov dword ptr [ecx], 0x64c128 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64c128u); }
  /* 0049e8e6 jmp 0x54bb00 */ SAVEALL; F_0054bb00(c); return;
}

void F_0049e8f0(CPU *c) {
  NATIVE_HOOK(0x49e8f0u) REGS; LOADALL;
L_0049e8f0:;
  /* 0049e8f0 call 0x54bc30 */ esp -= 4; M32(esp) = 0x49e8f5u; SAVEALL; F_0054bc30(c); ABI_CHECK(0x54bc30u, 0x49e8f0u); RETCHK(0x49e8f5u, 0x49e8f0u); LOADALL;
  /* 0049e8f5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049e8f7 jne 0x49e8fa */ if (!ZF_) goto L_0049e8fa;
  /* 0049e8f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0049e8fa:;
  /* 0049e8fa push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e8fb mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049e8fd call 0x49ed80 */ esp -= 4; M32(esp) = 0x49e902u; SAVEALL; F_0049ed80(c); ABI_CHECK(0x49ed80u, 0x49e8fdu); RETCHK(0x49e902u, 0x49e8fdu); LOADALL;
  /* 0049e902 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049e904 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0049e907 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049e908 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0049e910(CPU *c) {
  NATIVE_HOOK(0x49e910u) REGS; LOADALL;
L_0049e910:;
  /* 0049e910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0049e911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0049e913 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0049e915 push 0x62494b */ { u32 v_ = 0x62494bu; esp -= 4; M32(esp) = v_; }
  /* 0049e91a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0049e920 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e921 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0049e928 sub esp, 0x120 */ { u32 a_ = esp, b_ = 0x120u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e92e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0049e933 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e934 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0049e936 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0049e937 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0049e93a call 0x49ea80 */ esp -= 4; M32(esp) = 0x49e93fu; SAVEALL; F_0049ea80(c); ABI_CHECK(0x49ea80u, 0x49e93au); RETCHK(0x49e93fu, 0x49e93au); LOADALL;
  /* 0049e93f fld dword ptr [ebx + 0x15c] */ { const u32 m_ = (u32)(ebx + 0x15cu); FPUSH((double)MF32(m_)); }
  /* 0049e945 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0049e94b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0049e94d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049e950 jp 0x49e95f */ if (PF_) goto L_0049e95f;
  /* 0049e952 mov ecx, dword ptr [ebx + 0x154] */ { const u32 m_ = (u32)(ebx + 0x154u); ecx = (u32)(M32(m_)); }
  /* 0049e958 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0049e95a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0049e95c call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49e95fu; SAVEALL; call_ind(c, t_); RETCHK(0x49e95fu, 0x49e95cu); LOADALL; }
L_0049e95f:;
  /* 0049e95f mov ecx, dword ptr [ebx + 0x154] */ { const u32 m_ = (u32)(ebx + 0x154u); ecx = (u32)(M32(m_)); }
  /* 0049e965 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0049e967 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49e96au; SAVEALL; call_ind(c, t_); RETCHK(0x49e96au, 0x49e967u); LOADALL; }
  /* 0049e96a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049e96c je 0x49ea58 */ if (ZF_) goto L_0049ea58;
  /* 0049e972 fld dword ptr [ebx + 0x15c] */ { const u32 m_ = (u32)(ebx + 0x15cu); FPUSH((double)MF32(m_)); }
  /* 0049e978 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0049e979 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0049e97c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0049e97d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0049e97f mov byte ptr [ebp - 0x110], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)(0x0u); }
  /* 0049e986 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 0049e98b fst dword ptr [ebx + 0x15c] */ { const u32 m_ = (u32)(ebx + 0x15cu); MF32(m_) = (float)ST(0); }
  /* 0049e991 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 0049e997 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0049e999 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0049e99b stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0049e99c call 0x61b154 */ esp -= 4; M32(esp) = 0x49e9a1u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x49e99cu); RETCHK(0x49e9a1u, 0x49e99cu); LOADALL;
  /* 0049e9a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e9a2 push 0x36f */ { u32 v_ = 0x36fu; esp -= 4; M32(esp) = v_; }
  /* 0049e9a7 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0049e9ac call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x49e9b2u; SAVEALL; call_ind(c, t_); RETCHK(0x49e9b2u, 0x49e9acu); LOADALL; }
  /* 0049e9b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e9b3 lea eax, [ebp - 0x110] */ eax = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0049e9b9 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 0049e9be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e9bf call 0x5fe928 */ esp -= 4; M32(esp) = 0x49e9c4u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x49e9bfu); RETCHK(0x49e9c4u, 0x49e9bfu); LOADALL;
  /* 0049e9c4 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0049e9c7 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0049e9cc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0049e9ce lea eax, [ebp - 0x110] */ eax = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0049e9d4 mov dword ptr [ebp - 0x114], edi */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(edi); }
  /* 0049e9da mov dword ptr [ebp - 0x118], esi */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M32(m_) = (u32)(esi); }
  /* 0049e9e0 mov byte ptr [ebp - 0x128], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M8(m_) = (u8)(0x0u); }
  /* 0049e9e7 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0049e9ea lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0049e9f0:;
  /* 0049e9f0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0049e9f2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0049e9f3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0049e9f5 jne 0x49e9f0 */ if (!ZF_) goto L_0049e9f0;
  /* 0049e9f7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0049e9f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049e9fa lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0049ea00 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0049ea01 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0049ea07 call 0x404420 */ esp -= 4; M32(esp) = 0x49ea0cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x49ea07u); RETCHK(0x49ea0cu, 0x49ea07u); LOADALL;
  /* 0049ea0c mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0049ea0f mov esi, dword ptr [ebx + 0x158] */ { const u32 m_ = (u32)(ebx + 0x158u); esi = (u32)(M32(m_)); }
  /* 0049ea15 lea eax, [ebp - 0x12c] */ eax = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0049ea1b call 0x5224b0 */ esp -= 4; M32(esp) = 0x49ea20u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x49ea1bu); RETCHK(0x49ea20u, 0x49ea1bu); LOADALL;
  /* 0049ea20 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0049ea27 cmp dword ptr [ebp - 0x114], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0049ea2e jb 0x49ea3f */ if (CF_) goto L_0049ea3f;
  /* 0049ea30 mov edx, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); edx = (u32)(M32(m_)); }
  /* 0049ea36 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0049ea37 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x49ea3cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x49ea37u); RETCHK(0x49ea3cu, 0x49ea37u); LOADALL;
  /* 0049ea3c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0049ea3f:;
  /* 0049ea3f mov dword ptr [ebp - 0x114], edi */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(edi); }
  /* 0049ea45 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0049ea46 mov dword ptr [ebp - 0x118], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M32(m_) = (u32)(0x0u); }
  /* 0049ea50 mov byte ptr [ebp - 0x128], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M8(m_) = (u8)(0x0u); }
  /* 0049ea57 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0049ea58:;
  /* 0049ea58 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0049ea5b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0049ea5c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0049ea5e call 0x54bc40 */ esp -= 4; M32(esp) = 0x49ea63u; SAVEALL; F_0054bc40(c); ABI_CHECK(0x54bc40u, 0x49ea5eu); RETCHK(0x49ea63u, 0x49ea5eu); LOADALL;
  /* 0049ea63 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0049ea66 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0049ea6d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0049ea70 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0049ea71 call 0x61af31 */ esp -= 4; M32(esp) = 0x49ea76u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x49ea71u); RETCHK(0x49ea76u, 0x49ea71u); LOADALL;
  /* 0049ea76 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0049ea78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0049ea79 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}
