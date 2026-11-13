#include "funcs.h"

void F_00566530(CPU *c) {
  NATIVE_HOOK(0x566530u) REGS; LOADALL;
L_00566530:;
  /* 00566530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566533 lea eax, [esi + 0x10000] */ eax = (u32)((u32)(esi + 0x10000u));
  /* 00566539 call 0x568120 */ esp -= 4; M32(esp) = 0x56653eu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x566539u); RETCHK(0x56653eu, 0x566539u); LOADALL;
  /* 0056653e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00566541 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00566543 call 0x566590 */ esp -= 4; M32(esp) = 0x566548u; SAVEALL; F_00566590(c); ABI_CHECK(0x566590u, 0x566543u); RETCHK(0x566548u, 0x566543u); LOADALL;
  /* 00566548 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056654a jne 0x566553 */ if (!ZF_) goto L_00566553;
  /* 0056654c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056654f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566550 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00566553:;
  /* 00566553 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00566556 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566557 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00566559 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x56655bu; SAVEALL; call_ind(c, t_); RETCHK(0x56655bu, 0x566559u); LOADALL; }
  /* 0056655b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056655c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00566560(CPU *c) {
  NATIVE_HOOK(0x566560u) REGS; LOADALL;
L_00566560:;
  /* 00566560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566563 lea eax, [esi + 0x10000] */ eax = (u32)((u32)(esi + 0x10000u));
  /* 00566569 call 0x568120 */ esp -= 4; M32(esp) = 0x56656eu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x566569u); RETCHK(0x56656eu, 0x566569u); LOADALL;
  /* 0056656e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00566571 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00566573 call 0x5665a0 */ esp -= 4; M32(esp) = 0x566578u; SAVEALL; F_005665a0(c); ABI_CHECK(0x5665a0u, 0x566573u); RETCHK(0x566578u, 0x566573u); LOADALL;
  /* 00566578 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056657a jne 0x566583 */ if (!ZF_) goto L_00566583;
  /* 0056657c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056657f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566580 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00566583:;
  /* 00566583 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00566586 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566587 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00566589 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x56658bu; SAVEALL; call_ind(c, t_); RETCHK(0x56658bu, 0x566589u); LOADALL; }
  /* 0056658b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056658c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00566590(CPU *c) {
  NATIVE_HOOK(0x566590u) REGS; LOADALL;
L_00566590:;
  /* 00566590 cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566595 jl 0x56659a */ if (LT_) goto L_0056659a;
  /* 00566597 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566599 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056659a:;
  /* 0056659a mov eax, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0056659d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005665a0(CPU *c) {
  NATIVE_HOOK(0x5665a0u) REGS; LOADALL;
L_005665a0:;
  /* 005665a0 cmp eax, 0x2000 */ { u32 a_ = eax, b_ = 0x2000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005665a5 jl 0x5665aa */ if (LT_) goto L_005665aa;
  /* 005665a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005665a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005665aa:;
  /* 005665aa mov eax, dword ptr [ecx + eax*4 + 0x8000] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x8000u); eax = (u32)(M32(m_)); }
  /* 005665b1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00566670(CPU *c) {
  NATIVE_HOOK(0x566670u) REGS; LOADALL;
L_00566670:;
  /* 00566670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566673 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566674 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566675 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00566678 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056667a mov cl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056667c add eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566681 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00566684 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566685 call 0x567dc0 */ esp -= 4; M32(esp) = 0x56668au; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x566685u); RETCHK(0x56668au, 0x566685u); LOADALL;
  /* 0056668a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056668d jne 0x566698 */ if (!ZF_) goto L_00566698;
  /* 0056668f or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566691 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566692 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566694 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566695 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566698:;
  /* 00566698 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566699 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056669a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056669c lea ebx, [esi + 4] */ ebx = (u32)((u32)(esi + 0x4u));
  /* 0056669f jmp 0x5666a4 */ goto L_005666a4;
L_005666a1:;
  /* 005666a1 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_005666a4:;
  /* 005666a4 movzx edx, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M8(m_)); }
  /* 005666a7 cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005666a9 jge 0x5666c4 */ if (!LT_) goto L_005666c4;
  /* 005666ab mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005666ad mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 005666b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005666b1 call 0x567e70 */ esp -= 4; M32(esp) = 0x5666b6u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x5666b1u); RETCHK(0x5666b6u, 0x5666b1u); LOADALL;
  /* 005666b6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005666b9 je 0x5666d5 */ if (ZF_) goto L_005666d5;
  /* 005666bb inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005666bc add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005666bf cmp edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005666c2 jl 0x5666a1 */ if (LT_) goto L_005666a1;
L_005666c4:;
  /* 005666c4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005666c7 call 0x464860 */ esp -= 4; M32(esp) = 0x5666ccu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5666c7u); RETCHK(0x5666ccu, 0x5666c7u); LOADALL;
  /* 005666cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005666cd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005666ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005666cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005666d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005666d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005666d5:;
  /* 005666d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005666d6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005666d7 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005666da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005666db mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005666dd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005666de ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005666f0(CPU *c) {
  NATIVE_HOOK(0x5666f0u) REGS; LOADALL;
L_005666f0:;
  /* 005666f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005666f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005666f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005666f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005666f5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005666f8 add eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005666fd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005666fe mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00566701 call 0x568130 */ esp -= 4; M32(esp) = 0x566706u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x566701u); RETCHK(0x566706u, 0x566701u); LOADALL;
  /* 00566706 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566709 jne 0x566714 */ if (!ZF_) goto L_00566714;
  /* 0056670b or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056670d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056670e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566710 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566711 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566714:;
  /* 00566714 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566715 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566716 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00566718 lea ebx, [esi + 4] */ ebx = (u32)((u32)(esi + 0x4u));
  /* 0056671b jmp 0x566720 */ goto L_00566720;
L_0056671d:;
  /* 0056671d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
L_00566720:;
  /* 00566720 movzx eax, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M8(m_)); }
  /* 00566723 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566725 jge 0x56673e */ if (!LT_) goto L_0056673e;
  /* 00566727 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 0056672a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056672b call 0x567eb0 */ esp -= 4; M32(esp) = 0x566730u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x56672bu); RETCHK(0x566730u, 0x56672bu); LOADALL;
  /* 00566730 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566733 je 0x56674c */ if (ZF_) goto L_0056674c;
  /* 00566735 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566736 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00566739 cmp edi, 0x40 */ { u32 a_ = edi, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056673c jl 0x56671d */ if (LT_) goto L_0056671d;
L_0056673e:;
  /* 0056673e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056673f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566740 mov eax, 0x104 */ { eax = (u32)(0x104u); }
  /* 00566745 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566746 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566748 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566749 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056674c:;
  /* 0056674c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056674d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056674e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566751 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566752 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566754 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566755 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566760(CPU *c) {
  NATIVE_HOOK(0x566760u) REGS; LOADALL;
  goto L_00566760;
L_005665c0:;
  /* 005665c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005665c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005665c3 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005665c5 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005665cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005665cc call 0x567e70 */ esp -= 4; M32(esp) = 0x5665d1u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x5665ccu); RETCHK(0x5665d1u, 0x5665ccu); LOADALL;
  /* 005665d1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005665d4 jne 0x5665da */ if (!ZF_) goto L_005665da;
  /* 005665d6 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005665d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005665d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005665da:;
  /* 005665da mov eax, esi */ { eax = (u32)(esi); }
  /* 005665dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005665dd jmp 0x464860 */ SAVEALL; F_00464860(c); return;
L_00566610:;
  /* 00566610 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566611 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00566613 add ebx, 0x10000 */ { u32 a_ = ebx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00566619 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056661a mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 0056661f call 0x567ef0 */ esp -= 4; M32(esp) = 0x566624u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x56661fu); RETCHK(0x566624u, 0x56661fu); LOADALL;
  /* 00566624 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566627 jne 0x56662d */ if (!ZF_) goto L_0056662d;
  /* 00566629 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056662b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056662c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056662d:;
  /* 0056662d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056662f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566630 jmp 0x464860 */ SAVEALL; F_00464860(c); return;
L_00566760:;
  /* 00566760 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566761 je 0x56677b */ if (ZF_) goto L_0056677b;
  /* 00566763 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566764 je 0x566772 */ if (ZF_) goto L_00566772;
  /* 00566766 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566767 je 0x56676d */ if (ZF_) goto L_0056676d;
  /* 00566769 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056676c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056676d:;
  /* 0056676d jmp 0x566610 */ goto L_00566610;
L_00566772:;
  /* 00566772 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566773 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00566775 call 0x566670 */ esp -= 4; M32(esp) = 0x56677au; SAVEALL; F_00566670(c); ABI_CHECK(0x566670u, 0x566775u); RETCHK(0x56677au, 0x566775u); LOADALL;
  /* 0056677a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056677b:;
  /* 0056677b jmp 0x5665c0 */ goto L_005665c0;
}

void F_00566780(CPU *c) {
  NATIVE_HOOK(0x566780u) REGS; LOADALL;
  goto L_00566780;
L_005665f0:;
  /* 005665f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005665f1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005665f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005665f4 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005665fa call 0x567eb0 */ esp -= 4; M32(esp) = 0x5665ffu; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5665fau); RETCHK(0x5665ffu, 0x5665fau); LOADALL;
  /* 005665ff inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566600 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00566602 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00566604 and eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566607 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566608 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566609 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566640:;
  /* 00566640 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566641 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00566646 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00566648 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566649 add ebx, 0x10000 */ { u32 a_ = ebx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056664f call 0x567f70 */ esp -= 4; M32(esp) = 0x566654u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x56664fu); RETCHK(0x566654u, 0x56664fu); LOADALL;
  /* 00566654 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566655 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00566657 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00566659 and eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056665e dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056665f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566660 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00566780:;
  /* 00566780 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566781 je 0x56679b */ if (ZF_) goto L_0056679b;
  /* 00566783 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566784 je 0x566792 */ if (ZF_) goto L_00566792;
  /* 00566786 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566787 je 0x56678d */ if (ZF_) goto L_0056678d;
  /* 00566789 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056678c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056678d:;
  /* 0056678d jmp 0x566640 */ goto L_00566640;
L_00566792:;
  /* 00566792 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566793 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00566795 call 0x5666f0 */ esp -= 4; M32(esp) = 0x56679au; SAVEALL; F_005666f0(c); ABI_CHECK(0x5666f0u, 0x566795u); RETCHK(0x56679au, 0x566795u); LOADALL;
  /* 0056679a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056679b:;
  /* 0056679b jmp 0x5665f0 */ goto L_005665f0;
}

void F_005667a0(CPU *c) {
  NATIVE_HOOK(0x5667a0u) REGS; LOADALL;
L_005667a0:;
  /* 005667a0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005667a2 mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005667a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005667a5 lea edi, [ebx + 0x10000] */ edi = (u32)((u32)(ebx + 0x10000u));
  /* 005667ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005667ac mov eax, edi */ { eax = (u32)(edi); }
  /* 005667ae call 0x567dc0 */ esp -= 4; M32(esp) = 0x5667b3u; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x5667aeu); RETCHK(0x5667b3u, 0x5667aeu); LOADALL;
  /* 005667b3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005667b6 je 0x5667dd */ if (ZF_) goto L_005667dd;
  /* 005667b8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005667ba mov cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005667bd mov eax, edi */ { eax = (u32)(edi); }
  /* 005667bf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005667c0 call 0x567dc0 */ esp -= 4; M32(esp) = 0x5667c5u; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x5667c0u); RETCHK(0x5667c5u, 0x5667c0u); LOADALL;
  /* 005667c5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005667c8 je 0x5667dd */ if (ZF_) goto L_005667dd;
  /* 005667ca movzx edx, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); edx = (u32)(M8(m_)); }
  /* 005667ce lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 005667d1 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005667d3 call 0x566760 */ esp -= 4; M32(esp) = 0x5667d8u; SAVEALL; F_00566760(c); ABI_CHECK(0x566760u, 0x5667d3u); RETCHK(0x5667d8u, 0x5667d3u); LOADALL;
  /* 005667d8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005667db jne 0x5667e2 */ if (!ZF_) goto L_005667e2;
L_005667dd:;
  /* 005667dd or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005667e0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005667e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005667e2:;
  /* 005667e2 mov eax, edi */ { eax = (u32)(edi); }
  /* 005667e4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005667e5 jmp 0x464860 */ SAVEALL; F_00464860(c); return;
}

void F_005667f0(CPU *c) {
  NATIVE_HOOK(0x5667f0u) REGS; LOADALL;
L_005667f0:;
  /* 005667f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005667f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005667f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005667f4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005667f7 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005667fd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005667fe mov eax, esi */ { eax = (u32)(esi); }
  /* 00566800 call 0x568130 */ esp -= 4; M32(esp) = 0x566805u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x566800u); RETCHK(0x566805u, 0x566800u); LOADALL;
  /* 00566805 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566808 jne 0x566811 */ if (!ZF_) goto L_00566811;
  /* 0056680a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056680c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056680d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056680e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566811:;
  /* 00566811 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566812 lea edi, [ebx + 1] */ edi = (u32)((u32)(ebx + 0x1u));
  /* 00566815 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566816 mov eax, esi */ { eax = (u32)(esi); }
  /* 00566818 call 0x568130 */ esp -= 4; M32(esp) = 0x56681du; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x566818u); RETCHK(0x56681du, 0x566818u); LOADALL;
  /* 0056681d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566820 jne 0x56682a */ if (!ZF_) goto L_0056682a;
  /* 00566822 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566823 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566825 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566826 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566827 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056682a:;
  /* 0056682a movzx edx, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M8(m_)); }
  /* 0056682d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00566830 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 00566833 call 0x566780 */ esp -= 4; M32(esp) = 0x566838u; SAVEALL; F_00566780(c); ABI_CHECK(0x566780u, 0x566833u); RETCHK(0x566838u, 0x566833u); LOADALL;
  /* 00566838 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566839 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0056683b sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0056683d and eax, 0x109 */ { u32 a_ = eax, b_ = 0x109u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566842 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566843 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566844 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566845 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566846 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566850(CPU *c) {
  NATIVE_HOOK(0x566850u) REGS; LOADALL;
L_00566850:;
  /* 00566850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566853 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566854 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00566857 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566858 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0056685b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056685d mov cl, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056685f add eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00566864 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00566867 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566868 call 0x567dc0 */ esp -= 4; M32(esp) = 0x56686du; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x566868u); RETCHK(0x56686du, 0x566868u); LOADALL;
  /* 0056686d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566870 jne 0x56687b */ if (!ZF_) goto L_0056687b;
  /* 00566872 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566874 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566875 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566877 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566878 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0056687b:;
  /* 0056687b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056687c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056687d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056687f lea esi, [ebx + 4] */ esi = (u32)((u32)(ebx + 0x4u));
  /* 00566882 jmp 0x566887 */ goto L_00566887;
L_00566884:;
  /* 00566884 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
L_00566887:;
  /* 00566887 movzx edx, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M8(m_)); }
  /* 0056688a cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056688c jge 0x5668aa */ if (!LT_) goto L_005668aa;
  /* 0056688e mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00566891 call 0x5667a0 */ esp -= 4; M32(esp) = 0x566896u; SAVEALL; F_005667a0(c); ABI_CHECK(0x5667a0u, 0x566891u); RETCHK(0x566896u, 0x566891u); LOADALL;
  /* 00566896 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566899 je 0x5668bb */ if (ZF_) goto L_005668bb;
  /* 0056689b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056689c add esi, 0x108 */ { u32 a_ = esi, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005668a2 cmp edi, 0xc8 */ { u32 a_ = edi, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005668a8 jl 0x566884 */ if (LT_) goto L_00566884;
L_005668aa:;
  /* 005668aa mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005668ad call 0x464860 */ esp -= 4; M32(esp) = 0x5668b2u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5668adu); RETCHK(0x5668b2u, 0x5668adu); LOADALL;
  /* 005668b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005668b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005668b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005668b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005668b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005668b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005668bb:;
  /* 005668bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005668bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005668bd or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005668c0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005668c1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005668c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005668c4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005668d0(CPU *c) {
  NATIVE_HOOK(0x5668d0u) REGS; LOADALL;
L_005668d0:;
  /* 005668d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005668d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005668d3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005668d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005668d7 add eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005668dc call 0x568130 */ esp -= 4; M32(esp) = 0x5668e1u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x5668dcu); RETCHK(0x5668e1u, 0x5668dcu); LOADALL;
  /* 005668e1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005668e4 jne 0x5668ec */ if (!ZF_) goto L_005668ec;
  /* 005668e6 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005668e8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005668e9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005668ec:;
  /* 005668ec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005668ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005668ee xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005668f0 lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
L_005668f3:;
  /* 005668f3 movzx eax, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M8(m_)); }
  /* 005668f6 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005668f8 jge 0x566917 */ if (!LT_) goto L_00566917;
  /* 005668fa mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005668fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005668fe call 0x5667f0 */ esp -= 4; M32(esp) = 0x566903u; SAVEALL; F_005667f0(c); ABI_CHECK(0x5667f0u, 0x5668feu); RETCHK(0x566903u, 0x5668feu); LOADALL;
  /* 00566903 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566906 je 0x566922 */ if (ZF_) goto L_00566922;
  /* 00566908 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566909 add ebx, 0x108 */ { u32 a_ = ebx, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056690f cmp esi, 0xc8 */ { u32 a_ = esi, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566915 jl 0x5668f3 */ if (LT_) goto L_005668f3;
L_00566917:;
  /* 00566917 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566918 mov eax, 0xce44 */ { eax = (u32)(0xce44u); }
  /* 0056691d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056691e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056691f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566922:;
  /* 00566922 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566923 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566926 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566927 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566928 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566930(CPU *c) {
  NATIVE_HOOK(0x566930u) REGS; LOADALL;
L_00566930:;
  /* 00566930 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566931 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566933 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566934 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566935 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00566938 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566939 mov edi, eax */ { edi = (u32)(eax); }
  /* 0056693b add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00566941 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566942 mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 00566947 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00566949 call 0x567ef0 */ esp -= 4; M32(esp) = 0x56694eu; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566949u); RETCHK(0x56694eu, 0x566949u); LOADALL;
  /* 0056694e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566951 je 0x56698a */ if (ZF_) goto L_0056698a;
  /* 00566953 mov eax, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); eax = (u32)(M32(m_)); }
  /* 00566959 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056695a call 0x567e70 */ esp -= 4; M32(esp) = 0x56695fu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x56695au); RETCHK(0x56695fu, 0x56695au); LOADALL;
  /* 0056695f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566962 je 0x56698a */ if (ZF_) goto L_0056698a;
  /* 00566964 mov ecx, dword ptr [edi + 0x88] */ { const u32 m_ = (u32)(edi + 0x88u); ecx = (u32)(M32(m_)); }
  /* 0056696a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056696b call 0x567e70 */ esp -= 4; M32(esp) = 0x566970u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x56696bu); RETCHK(0x566970u, 0x56696bu); LOADALL;
  /* 00566970 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566973 je 0x56698a */ if (ZF_) goto L_0056698a;
  /* 00566975 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00566978 add edi, 0x8c */ { u32 a_ = edi, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056697e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056697f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566980 call 0x566850 */ esp -= 4; M32(esp) = 0x566985u; SAVEALL; F_00566850(c); ABI_CHECK(0x566850u, 0x566980u); RETCHK(0x566985u, 0x566980u); LOADALL;
  /* 00566985 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566988 jne 0x566994 */ if (!ZF_) goto L_00566994;
L_0056698a:;
  /* 0056698a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056698b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056698c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056698f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566990 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566991 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566994:;
  /* 00566994 mov eax, esi */ { eax = (u32)(esi); }
  /* 00566996 call 0x464860 */ esp -= 4; M32(esp) = 0x56699bu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x566996u); RETCHK(0x56699bu, 0x566996u); LOADALL;
  /* 0056699b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056699c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056699d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056699e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056699f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005669b0(CPU *c) {
  NATIVE_HOOK(0x5669b0u) REGS; LOADALL;
L_005669b0:;
  /* 005669b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005669b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005669b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005669b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005669b5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005669b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005669b9 mov edi, eax */ { edi = (u32)(eax); }
  /* 005669bb push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 005669c0 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005669c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005669c7 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 005669c9 call 0x567f70 */ esp -= 4; M32(esp) = 0x5669ceu; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5669c9u); RETCHK(0x5669ceu, 0x5669c9u); LOADALL;
  /* 005669ce cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005669d1 jne 0x5669dd */ if (!ZF_) goto L_005669dd;
L_005669d3:;
  /* 005669d3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005669d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005669d5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005669d8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005669d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005669da ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005669dd:;
  /* 005669dd lea eax, [edi + 0x84] */ eax = (u32)((u32)(edi + 0x84u));
  /* 005669e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005669e4 call 0x567eb0 */ esp -= 4; M32(esp) = 0x5669e9u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5669e4u); RETCHK(0x5669e9u, 0x5669e4u); LOADALL;
  /* 005669e9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005669ec je 0x5669d3 */ if (ZF_) goto L_005669d3;
  /* 005669ee lea ecx, [edi + 0x88] */ ecx = (u32)((u32)(edi + 0x88u));
  /* 005669f4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005669f5 call 0x567eb0 */ esp -= 4; M32(esp) = 0x5669fau; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5669f5u); RETCHK(0x5669fau, 0x5669f5u); LOADALL;
  /* 005669fa cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005669fd je 0x5669d3 */ if (ZF_) goto L_005669d3;
  /* 005669ff mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00566a02 add edi, 0x8c */ { u32 a_ = edi, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00566a08 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566a09 call 0x5668d0 */ esp -= 4; M32(esp) = 0x566a0eu; SAVEALL; F_005668d0(c); ABI_CHECK(0x5668d0u, 0x566a09u); RETCHK(0x566a0eu, 0x566a09u); LOADALL;
  /* 00566a0e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566a0f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00566a11 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00566a13 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566a14 and eax, 0xced1 */ { u32 a_ = eax, b_ = 0xced1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566a19 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566a1a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566a1b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566a1c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566a1d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566a20(CPU *c) {
  NATIVE_HOOK(0x566a20u) REGS; LOADALL;
L_00566a20:;
  /* 00566a20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566a21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566a23 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566a26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566a27 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566a28 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00566a2b mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00566a2d lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00566a33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566a34 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00566a37 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00566a3a call 0x567e70 */ esp -= 4; M32(esp) = 0x566a3fu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566a3au); RETCHK(0x566a3fu, 0x566a3au); LOADALL;
  /* 00566a3f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566a42 jne 0x566a4e */ if (!ZF_) goto L_00566a4e;
  /* 00566a44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566a45 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566a47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566a48 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566a4a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566a4b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566a4e:;
  /* 00566a4e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566a4f lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 00566a52 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566a53 mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 00566a58 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00566a5a call 0x567ef0 */ esp -= 4; M32(esp) = 0x566a5fu; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566a5au); RETCHK(0x566a5fu, 0x566a5au); LOADALL;
  /* 00566a5f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566a62 jne 0x566a70 */ if (!ZF_) goto L_00566a70;
L_00566a64:;
  /* 00566a64 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566a65 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566a66 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566a69 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566a6a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566a6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566a6d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566a70:;
  /* 00566a70 mov edx, dword ptr [edi + 0x88] */ { const u32 m_ = (u32)(edi + 0x88u); edx = (u32)(M32(m_)); }
  /* 00566a76 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00566a79 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566a7a call 0x567e70 */ esp -= 4; M32(esp) = 0x566a7fu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566a7au); RETCHK(0x566a7fu, 0x566a7au); LOADALL;
  /* 00566a7f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566a82 je 0x566a64 */ if (ZF_) goto L_00566a64;
  /* 00566a84 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00566a86 lea ebx, [edi + 0x8c] */ ebx = (u32)((u32)(edi + 0x8cu));
  /* 00566a8c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00566a90:;
  /* 00566a90 cmp esi, dword ptr [edi + 0x88] */ { const u32 m_ = (u32)(edi + 0x88u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566a96 jge 0x566ab4 */ if (!LT_) goto L_00566ab4;
  /* 00566a98 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00566a9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566a9c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566a9e call 0x566930 */ esp -= 4; M32(esp) = 0x566aa3u; SAVEALL; F_00566930(c); ABI_CHECK(0x566930u, 0x566a9eu); RETCHK(0x566aa3u, 0x566a9eu); LOADALL;
  /* 00566aa3 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566aa6 je 0x566a64 */ if (ZF_) goto L_00566a64;
  /* 00566aa8 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566aa9 add ebx, 0xced0 */ { u32 a_ = ebx, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00566aaf cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566ab2 jl 0x566a90 */ if (LT_) goto L_00566a90;
L_00566ab4:;
  /* 00566ab4 mov ecx, dword ptr [edi + 0x26cfc] */ { const u32 m_ = (u32)(edi + 0x26cfcu); ecx = (u32)(M32(m_)); }
  /* 00566aba mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00566abd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566abe add edi, 0x26d00 */ { u32 a_ = edi, b_ = 0x26d00u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00566ac4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566ac5 call 0x567ff0 */ esp -= 4; M32(esp) = 0x566acau; SAVEALL; F_00567ff0(c); ABI_CHECK(0x567ff0u, 0x566ac5u); RETCHK(0x566acau, 0x566ac5u); LOADALL;
  /* 00566aca cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566acd je 0x566a64 */ if (ZF_) goto L_00566a64;
  /* 00566acf mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566ad1 call 0x464860 */ esp -= 4; M32(esp) = 0x566ad6u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x566ad1u); RETCHK(0x566ad6u, 0x566ad1u); LOADALL;
  /* 00566ad6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566ad7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566ad8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566ad9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566adb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566adc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566ae0(CPU *c) {
  NATIVE_HOOK(0x566ae0u) REGS; LOADALL;
L_00566ae0:;
  /* 00566ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566ae3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566ae6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566ae7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566ae8 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00566aeb lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00566af1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566af2 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00566af5 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00566af8 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566afdu; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566af8u); RETCHK(0x566afdu, 0x566af8u); LOADALL;
  /* 00566afd cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566b00 jne 0x566b0c */ if (!ZF_) goto L_00566b0c;
  /* 00566b02 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566b03 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566b05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566b06 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566b08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566b09 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566b0c:;
  /* 00566b0c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566b0d push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 00566b12 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 00566b15 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566b16 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00566b18 call 0x567f70 */ esp -= 4; M32(esp) = 0x566b1du; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566b18u); RETCHK(0x566b1du, 0x566b18u); LOADALL;
  /* 00566b1d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566b20 jne 0x566b2e */ if (!ZF_) goto L_00566b2e;
L_00566b22:;
  /* 00566b22 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566b23 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566b24 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566b27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566b28 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566b2a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566b2b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566b2e:;
  /* 00566b2e mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00566b31 lea eax, [edi + 0x88] */ eax = (u32)((u32)(edi + 0x88u));
  /* 00566b37 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566b38 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566b3du; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566b38u); RETCHK(0x566b3du, 0x566b38u); LOADALL;
  /* 00566b3d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566b40 je 0x566b22 */ if (ZF_) goto L_00566b22;
  /* 00566b42 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00566b44 lea ebx, [edi + 0x8c] */ ebx = (u32)((u32)(edi + 0x8cu));
  /* 00566b4a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00566b50:;
  /* 00566b50 cmp esi, dword ptr [edi + 0x88] */ { const u32 m_ = (u32)(edi + 0x88u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566b56 jge 0x566b74 */ if (!LT_) goto L_00566b74;
  /* 00566b58 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 00566b5b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566b5c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566b5e call 0x5669b0 */ esp -= 4; M32(esp) = 0x566b63u; SAVEALL; F_005669b0(c); ABI_CHECK(0x5669b0u, 0x566b5eu); RETCHK(0x566b63u, 0x566b5eu); LOADALL;
  /* 00566b63 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566b66 je 0x566b22 */ if (ZF_) goto L_00566b22;
  /* 00566b68 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566b69 add ebx, 0xced0 */ { u32 a_ = ebx, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00566b6f cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566b72 jl 0x566b50 */ if (LT_) goto L_00566b50;
L_00566b74:;
  /* 00566b74 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00566b77 lea eax, [edi + 0x26cfc] */ eax = (u32)((u32)(edi + 0x26cfcu));
  /* 00566b7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566b7e add edi, 0x26d00 */ { u32 a_ = edi, b_ = 0x26d00u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00566b84 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566b85 mov dword ptr [eax], 0x4000 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x4000u); }
  /* 00566b8b call 0x568050 */ esp -= 4; M32(esp) = 0x566b90u; SAVEALL; F_00568050(c); ABI_CHECK(0x568050u, 0x566b8bu); RETCHK(0x566b90u, 0x566b8bu); LOADALL;
  /* 00566b90 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566b91 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00566b93 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00566b95 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566b96 and eax, 0x2ad01 */ { u32 a_ = eax, b_ = 0x2ad01u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566b9b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566b9c dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566b9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566b9e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566ba0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566ba1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566bb0(CPU *c) {
  NATIVE_HOOK(0x566bb0u) REGS; LOADALL;
L_00566bb0:;
  /* 00566bb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566bb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566bb3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566bb4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566bb5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00566bb8 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 00566bbe push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566bbf mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 00566bc4 call 0x567ef0 */ esp -= 4; M32(esp) = 0x566bc9u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566bc4u); RETCHK(0x566bc9u, 0x566bc4u); LOADALL;
  /* 00566bc9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566bcc je 0x566be4 */ if (ZF_) goto L_00566be4;
  /* 00566bce lea eax, [edi + 0x81] */ eax = (u32)((u32)(edi + 0x81u));
  /* 00566bd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566bd5 mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 00566bda call 0x567ef0 */ esp -= 4; M32(esp) = 0x566bdfu; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566bdau); RETCHK(0x566bdfu, 0x566bdau); LOADALL;
  /* 00566bdf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566be2 jne 0x566bed */ if (!ZF_) goto L_00566bed;
L_00566be4:;
  /* 00566be4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566be5 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566be8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566be9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566bea ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566bed:;
  /* 00566bed mov ecx, dword ptr [edi + 0xa4] */ { const u32 m_ = (u32)(edi + 0xa4u); ecx = (u32)(M32(m_)); }
  /* 00566bf3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566bf4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566bf5 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00566bf7 call 0x567e70 */ esp -= 4; M32(esp) = 0x566bfcu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566bf7u); RETCHK(0x566bfcu, 0x566bf7u); LOADALL;
  /* 00566bfc cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566bff jne 0x566c0b */ if (!ZF_) goto L_00566c0b;
L_00566c01:;
  /* 00566c01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566c02 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566c03 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566c06 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566c07 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566c08 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566c0b:;
  /* 00566c0b mov edx, dword ptr [edi + 0xa8] */ { const u32 m_ = (u32)(edi + 0xa8u); edx = (u32)(M32(m_)); }
  /* 00566c11 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566c12 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00566c14 call 0x567e70 */ esp -= 4; M32(esp) = 0x566c19u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566c14u); RETCHK(0x566c19u, 0x566c14u); LOADALL;
  /* 00566c19 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566c1c je 0x566c01 */ if (ZF_) goto L_00566c01;
  /* 00566c1e lea eax, [edi + 0xac] */ eax = (u32)((u32)(edi + 0xacu));
  /* 00566c24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566c25 mov ecx, 0x11 */ { ecx = (u32)(0x11u); }
  /* 00566c2a call 0x567ef0 */ esp -= 4; M32(esp) = 0x566c2fu; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566c2au); RETCHK(0x566c2fu, 0x566c2au); LOADALL;
  /* 00566c2f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566c32 je 0x566c01 */ if (ZF_) goto L_00566c01;
  /* 00566c34 mov ecx, dword ptr [edi + 0xc0] */ { const u32 m_ = (u32)(edi + 0xc0u); ecx = (u32)(M32(m_)); }
  /* 00566c3a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566c3b call 0x567e70 */ esp -= 4; M32(esp) = 0x566c40u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566c3bu); RETCHK(0x566c40u, 0x566c3bu); LOADALL;
  /* 00566c40 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566c43 je 0x566c01 */ if (ZF_) goto L_00566c01;
  /* 00566c45 add edi, 0xc4 */ { u32 a_ = edi, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00566c4b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566c4c mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 00566c51 call 0x567ef0 */ esp -= 4; M32(esp) = 0x566c56u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566c51u); RETCHK(0x566c56u, 0x566c51u); LOADALL;
  /* 00566c56 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566c59 je 0x566c01 */ if (ZF_) goto L_00566c01;
  /* 00566c5b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566c5d call 0x464860 */ esp -= 4; M32(esp) = 0x566c62u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x566c5du); RETCHK(0x566c62u, 0x566c5du); LOADALL;
  /* 00566c62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566c63 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566c64 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566c65 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566c66 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566c70(CPU *c) {
  NATIVE_HOOK(0x566c70u) REGS; LOADALL;
L_00566c70:;
  /* 00566c70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566c71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566c73 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566c74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566c75 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00566c78 push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 00566c7d lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 00566c83 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566c84 call 0x567f70 */ esp -= 4; M32(esp) = 0x566c89u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566c84u); RETCHK(0x566c89u, 0x566c84u); LOADALL;
  /* 00566c89 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566c8c jne 0x566c97 */ if (!ZF_) goto L_00566c97;
L_00566c8e:;
  /* 00566c8e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566c8f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566c92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566c93 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566c94 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566c97:;
  /* 00566c97 push 0x21 */ { u32 v_ = 0x21u; esp -= 4; M32(esp) = v_; }
  /* 00566c99 lea eax, [edi + 0x81] */ eax = (u32)((u32)(edi + 0x81u));
  /* 00566c9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566ca0 call 0x567f70 */ esp -= 4; M32(esp) = 0x566ca5u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566ca0u); RETCHK(0x566ca5u, 0x566ca0u); LOADALL;
  /* 00566ca5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566ca8 je 0x566c8e */ if (ZF_) goto L_00566c8e;
  /* 00566caa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566cab lea ecx, [edi + 0xa4] */ ecx = (u32)((u32)(edi + 0xa4u));
  /* 00566cb1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566cb2 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00566cb4 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566cb9u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566cb4u); RETCHK(0x566cb9u, 0x566cb4u); LOADALL;
  /* 00566cb9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566cbc jne 0x566cc8 */ if (!ZF_) goto L_00566cc8;
L_00566cbe:;
  /* 00566cbe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566cbf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566cc0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566cc3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566cc4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566cc5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566cc8:;
  /* 00566cc8 lea edx, [edi + 0xa8] */ edx = (u32)((u32)(edi + 0xa8u));
  /* 00566cce push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566ccf mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00566cd1 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566cd6u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566cd1u); RETCHK(0x566cd6u, 0x566cd1u); LOADALL;
  /* 00566cd6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566cd9 je 0x566cbe */ if (ZF_) goto L_00566cbe;
  /* 00566cdb push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 00566cdd lea eax, [edi + 0xac] */ eax = (u32)((u32)(edi + 0xacu));
  /* 00566ce3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566ce4 call 0x567f70 */ esp -= 4; M32(esp) = 0x566ce9u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566ce4u); RETCHK(0x566ce9u, 0x566ce4u); LOADALL;
  /* 00566ce9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566cec je 0x566cbe */ if (ZF_) goto L_00566cbe;
  /* 00566cee lea ecx, [edi + 0xc0] */ ecx = (u32)((u32)(edi + 0xc0u));
  /* 00566cf4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566cf5 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566cfau; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566cf5u); RETCHK(0x566cfau, 0x566cf5u); LOADALL;
  /* 00566cfa cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566cfd je 0x566cbe */ if (ZF_) goto L_00566cbe;
  /* 00566cff push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00566d01 add edi, 0xc4 */ { u32 a_ = edi, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00566d07 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566d08 call 0x567f70 */ esp -= 4; M32(esp) = 0x566d0du; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566d08u); RETCHK(0x566d0du, 0x566d08u); LOADALL;
  /* 00566d0d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566d0e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00566d10 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00566d12 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566d13 and eax, 0xd1 */ { u32 a_ = eax, b_ = 0xd1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566d18 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566d19 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566d1a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566d1b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566d1c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566d20(CPU *c) {
  NATIVE_HOOK(0x566d20u) REGS; LOADALL;
L_00566d20:;
  /* 00566d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566d23 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566d26 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566d27 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00566d2a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00566d2c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566d2d lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00566d33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566d34 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00566d37 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 00566d3a call 0x567e70 */ esp -= 4; M32(esp) = 0x566d3fu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566d3au); RETCHK(0x566d3fu, 0x566d3au); LOADALL;
  /* 00566d3f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566d42 je 0x566d52 */ if (ZF_) goto L_00566d52;
  /* 00566d44 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00566d47 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566d48 call 0x567e70 */ esp -= 4; M32(esp) = 0x566d4du; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566d48u); RETCHK(0x566d4du, 0x566d48u); LOADALL;
  /* 00566d4d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566d50 jne 0x566d5d */ if (!ZF_) goto L_00566d5d;
L_00566d52:;
  /* 00566d52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566d53 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566d56 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566d57 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566d59 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566d5a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566d5d:;
  /* 00566d5d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566d5e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00566d60 lea esi, [ebx + 8] */ esi = (u32)((u32)(ebx + 0x8u));
L_00566d63:;
  /* 00566d63 cmp edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566d66 jge 0x566d84 */ if (!LT_) goto L_00566d84;
  /* 00566d68 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00566d6b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566d6c mov eax, esi */ { eax = (u32)(esi); }
  /* 00566d6e call 0x566930 */ esp -= 4; M32(esp) = 0x566d73u; SAVEALL; F_00566930(c); ABI_CHECK(0x566930u, 0x566d6eu); RETCHK(0x566d73u, 0x566d6eu); LOADALL;
  /* 00566d73 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566d76 je 0x566d95 */ if (ZF_) goto L_00566d95;
  /* 00566d78 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566d79 add esi, 0xced0 */ { u32 a_ = esi, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00566d7f cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566d82 jl 0x566d63 */ if (LT_) goto L_00566d63;
L_00566d84:;
  /* 00566d84 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00566d87 call 0x464860 */ esp -= 4; M32(esp) = 0x566d8cu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x566d87u); RETCHK(0x566d8cu, 0x566d87u); LOADALL;
  /* 00566d8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566d8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566d8e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566d8f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566d91 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566d92 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566d95:;
  /* 00566d95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566d96 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566d97 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566d9a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566d9b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566d9d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566d9e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566db0(CPU *c) {
  NATIVE_HOOK(0x566db0u) REGS; LOADALL;
L_00566db0:;
  /* 00566db0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566db1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566db3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566db4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566db5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566db6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00566db9 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00566dbb lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 00566dc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566dc2 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566dc7u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566dc2u); RETCHK(0x566dc7u, 0x566dc2u); LOADALL;
  /* 00566dc7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566dca je 0x566e0e */ if (ZF_) goto L_00566e0e;
  /* 00566dcc lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 00566dcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566dd0 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00566dd3 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566dd8u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566dd3u); RETCHK(0x566dd8u, 0x566dd3u); LOADALL;
  /* 00566dd8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566ddb je 0x566e0e */ if (ZF_) goto L_00566e0e;
  /* 00566ddd xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00566ddf add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_00566de2:;
  /* 00566de2 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00566de5 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566de7 jge 0x566e02 */ if (!LT_) goto L_00566e02;
  /* 00566de9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566dea mov eax, edi */ { eax = (u32)(edi); }
  /* 00566dec call 0x5669b0 */ esp -= 4; M32(esp) = 0x566df1u; SAVEALL; F_005669b0(c); ABI_CHECK(0x5669b0u, 0x566decu); RETCHK(0x566df1u, 0x566decu); LOADALL;
  /* 00566df1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566df4 je 0x566e0e */ if (ZF_) goto L_00566e0e;
  /* 00566df6 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566df7 add edi, 0xced0 */ { u32 a_ = edi, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00566dfd cmp esi, 1 */ { u32 a_ = esi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566e00 jl 0x566de2 */ if (LT_) goto L_00566de2;
L_00566e02:;
  /* 00566e02 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566e03 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566e04 mov eax, 0xced8 */ { eax = (u32)(0xced8u); }
  /* 00566e09 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566e0a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566e0b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566e0e:;
  /* 00566e0e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566e0f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566e10 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566e13 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566e14 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566e15 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566e20(CPU *c) {
  NATIVE_HOOK(0x566e20u) REGS; LOADALL;
L_00566e20:;
  /* 00566e20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566e21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566e23 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566e24 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566e25 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00566e28 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 00566e2e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566e2f mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 00566e34 call 0x567ef0 */ esp -= 4; M32(esp) = 0x566e39u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566e34u); RETCHK(0x566e39u, 0x566e34u); LOADALL;
  /* 00566e39 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566e3c je 0x566e64 */ if (ZF_) goto L_00566e64;
  /* 00566e3e lea eax, [esi + 0x21] */ eax = (u32)((u32)(esi + 0x21u));
  /* 00566e41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566e42 mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 00566e47 call 0x567ef0 */ esp -= 4; M32(esp) = 0x566e4cu; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566e47u); RETCHK(0x566e4cu, 0x566e47u); LOADALL;
  /* 00566e4c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566e4f je 0x566e64 */ if (ZF_) goto L_00566e64;
  /* 00566e51 push 0x62da40 */ { u32 v_ = 0x62da40u; esp -= 4; M32(esp) = v_; }
  /* 00566e56 push 0x29 */ { u32 v_ = 0x29u; esp -= 4; M32(esp) = v_; }
  /* 00566e58 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00566e59 nop */ ;
  /* 00566e5a call 0x567ef0 */ esp -= 4; M32(esp) = 0x566e5fu; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x566e5au); RETCHK(0x566e5fu, 0x566e5au); LOADALL;
  /* 00566e5f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566e62 jne 0x566e6d */ if (!ZF_) goto L_00566e6d;
L_00566e64:;
  /* 00566e64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566e65 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566e68 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566e69 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566e6a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566e6d:;
  /* 00566e6d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566e6f call 0x464860 */ esp -= 4; M32(esp) = 0x566e74u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x566e6fu); RETCHK(0x566e74u, 0x566e6fu); LOADALL;
  /* 00566e74 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566e75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566e76 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566e77 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566e80(CPU *c) {
  NATIVE_HOOK(0x566e80u) REGS; LOADALL;
L_00566e80:;
  /* 00566e80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566e81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566e83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566e84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566e85 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00566e88 push 0x21 */ { u32 v_ = 0x21u; esp -= 4; M32(esp) = v_; }
  /* 00566e8a lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 00566e90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566e91 call 0x567f70 */ esp -= 4; M32(esp) = 0x566e96u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566e91u); RETCHK(0x566e96u, 0x566e91u); LOADALL;
  /* 00566e96 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566e99 jne 0x566ea4 */ if (!ZF_) goto L_00566ea4;
L_00566e9b:;
  /* 00566e9b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566e9c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566e9f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566ea0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566ea1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566ea4:;
  /* 00566ea4 push 0x21 */ { u32 v_ = 0x21u; esp -= 4; M32(esp) = v_; }
  /* 00566ea6 lea eax, [esi + 0x21] */ eax = (u32)((u32)(esi + 0x21u));
  /* 00566ea9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566eaa call 0x567f70 */ esp -= 4; M32(esp) = 0x566eafu; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566eaau); RETCHK(0x566eafu, 0x566eaau); LOADALL;
  /* 00566eaf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566eb2 je 0x566e9b */ if (ZF_) goto L_00566e9b;
  /* 00566eb4 push 0x21 */ { u32 v_ = 0x21u; esp -= 4; M32(esp) = v_; }
  /* 00566eb6 add esi, 0x42 */ { u32 a_ = esi, b_ = 0x42u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00566eb9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566eba call 0x567f70 */ esp -= 4; M32(esp) = 0x566ebfu; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x566ebau); RETCHK(0x566ebfu, 0x566ebau); LOADALL;
  /* 00566ebf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566ec0 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00566ec2 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00566ec4 and eax, 0x64 */ { u32 a_ = eax, b_ = 0x64u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566ec7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566ec8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00566ec9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566eca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566ecb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566ed0(CPU *c) {
  NATIVE_HOOK(0x566ed0u) REGS; LOADALL;
L_00566ed0:;
  /* 00566ed0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566ed1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566ed3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566ed6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566ed7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566ed8 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00566edb mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00566edd lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00566ee3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566ee4 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00566ee7 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 00566eea call 0x567e70 */ esp -= 4; M32(esp) = 0x566eefu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566eeau); RETCHK(0x566eefu, 0x566eeau); LOADALL;
  /* 00566eef cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566ef2 je 0x566f02 */ if (ZF_) goto L_00566f02;
  /* 00566ef4 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00566ef7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566ef8 call 0x567e70 */ esp -= 4; M32(esp) = 0x566efdu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x566ef8u); RETCHK(0x566efdu, 0x566ef8u); LOADALL;
  /* 00566efd cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566f00 jne 0x566f0d */ if (!ZF_) goto L_00566f0d;
L_00566f02:;
  /* 00566f02 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566f03 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566f06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566f07 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566f09 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566f0a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566f0d:;
  /* 00566f0d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566f0e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00566f10 lea esi, [edi + 8] */ esi = (u32)((u32)(edi + 0x8u));
L_00566f13:;
  /* 00566f13 cmp ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566f16 jge 0x566f34 */ if (!LT_) goto L_00566f34;
  /* 00566f18 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00566f1b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566f1c mov eax, esi */ { eax = (u32)(esi); }
  /* 00566f1e call 0x566930 */ esp -= 4; M32(esp) = 0x566f23u; SAVEALL; F_00566930(c); ABI_CHECK(0x566930u, 0x566f1eu); RETCHK(0x566f23u, 0x566f1eu); LOADALL;
  /* 00566f23 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566f26 je 0x566f89 */ if (ZF_) goto L_00566f89;
  /* 00566f28 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566f29 add esi, 0xced0 */ { u32 a_ = esi, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00566f2f cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566f32 jl 0x566f13 */ if (LT_) goto L_00566f13;
L_00566f34:;
  /* 00566f34 mov eax, dword ptr [edi + 0x26c78] */ { const u32 m_ = (u32)(edi + 0x26c78u); eax = (u32)(M32(m_)); }
  /* 00566f3a mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 00566f3d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566f3e lea ecx, [edi + 0x26c7c] */ ecx = (u32)((u32)(edi + 0x26c7cu));
  /* 00566f44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00566f45 call 0x567ff0 */ esp -= 4; M32(esp) = 0x566f4au; SAVEALL; F_00567ff0(c); ABI_CHECK(0x567ff0u, 0x566f45u); RETCHK(0x566f4au, 0x566f45u); LOADALL;
  /* 00566f4a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566f4d je 0x566f89 */ if (ZF_) goto L_00566f89;
  /* 00566f4f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00566f51 mov dl, byte ptr [edi + 0x2ac7c] */ { const u32 m_ = (u32)(edi + 0x2ac7cu); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00566f57 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566f59 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00566f5a call 0x567dc0 */ esp -= 4; M32(esp) = 0x566f5fu; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x566f5au); RETCHK(0x566f5fu, 0x566f5au); LOADALL;
  /* 00566f5f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566f62 je 0x566f89 */ if (ZF_) goto L_00566f89;
  /* 00566f64 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566f66 mov al, byte ptr [edi + 0x2ac7d] */ { const u32 m_ = (u32)(edi + 0x2ac7du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00566f6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566f6d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566f6f call 0x567dc0 */ esp -= 4; M32(esp) = 0x566f74u; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x566f6fu); RETCHK(0x566f74u, 0x566f6fu); LOADALL;
  /* 00566f74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566f77 je 0x566f89 */ if (ZF_) goto L_00566f89;
  /* 00566f79 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00566f7b call 0x464860 */ esp -= 4; M32(esp) = 0x566f80u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x566f7bu); RETCHK(0x566f80u, 0x566f7bu); LOADALL;
  /* 00566f80 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566f81 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566f82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566f83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566f85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566f86 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566f89:;
  /* 00566f89 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00566f8a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566f8b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566f8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566f8f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566f91 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566f92 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00566fa0(CPU *c) {
  NATIVE_HOOK(0x566fa0u) REGS; LOADALL;
L_00566fa0:;
  /* 00566fa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00566fa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00566fa3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00566fa6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00566fa7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566fa8 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00566fab lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00566fb1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00566fb2 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00566fb5 mov dword ptr [ebp - 8], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(esi); }
  /* 00566fb8 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566fbdu; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566fb8u); RETCHK(0x566fbdu, 0x566fb8u); LOADALL;
  /* 00566fbd cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566fc0 jne 0x566fcd */ if (!ZF_) goto L_00566fcd;
L_00566fc2:;
  /* 00566fc2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00566fc3 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00566fc6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00566fc7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00566fc9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00566fca ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00566fcd:;
  /* 00566fcd lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 00566fd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566fd1 call 0x567eb0 */ esp -= 4; M32(esp) = 0x566fd6u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x566fd1u); RETCHK(0x566fd6u, 0x566fd1u); LOADALL;
  /* 00566fd6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566fd9 je 0x566fc2 */ if (ZF_) goto L_00566fc2;
  /* 00566fdb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00566fdc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00566fde lea esi, [edi + 8] */ esi = (u32)((u32)(edi + 0x8u));
L_00566fe1:;
  /* 00566fe1 cmp ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566fe4 jge 0x567002 */ if (!LT_) goto L_00567002;
  /* 00566fe6 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00566fe9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00566fea mov eax, esi */ { eax = (u32)(esi); }
  /* 00566fec call 0x5669b0 */ esp -= 4; M32(esp) = 0x566ff1u; SAVEALL; F_005669b0(c); ABI_CHECK(0x5669b0u, 0x566fecu); RETCHK(0x566ff1u, 0x566fecu); LOADALL;
  /* 00566ff1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00566ff4 je 0x567058 */ if (ZF_) goto L_00567058;
  /* 00566ff6 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00566ff7 add esi, 0xced0 */ { u32 a_ = esi, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00566ffd cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567000 jl 0x566fe1 */ if (LT_) goto L_00566fe1;
L_00567002:;
  /* 00567002 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 00567005 lea eax, [edi + 0x26c78] */ eax = (u32)((u32)(edi + 0x26c78u));
  /* 0056700b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056700c lea ecx, [edi + 0x26c7c] */ ecx = (u32)((u32)(edi + 0x26c7cu));
  /* 00567012 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567013 mov dword ptr [eax], 0x4000 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x4000u); }
  /* 00567019 call 0x568050 */ esp -= 4; M32(esp) = 0x56701eu; SAVEALL; F_00568050(c); ABI_CHECK(0x568050u, 0x567019u); RETCHK(0x56701eu, 0x567019u); LOADALL;
  /* 0056701e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567021 je 0x567058 */ if (ZF_) goto L_00567058;
  /* 00567023 lea edx, [edi + 0x2ac7c] */ edx = (u32)((u32)(edi + 0x2ac7cu));
  /* 00567029 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056702a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056702c call 0x568130 */ esp -= 4; M32(esp) = 0x567031u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x56702cu); RETCHK(0x567031u, 0x56702cu); LOADALL;
  /* 00567031 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567034 je 0x567058 */ if (ZF_) goto L_00567058;
  /* 00567036 add edi, 0x2ac7d */ { u32 a_ = edi, b_ = 0x2ac7du; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056703c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056703d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056703f call 0x568130 */ esp -= 4; M32(esp) = 0x567044u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x56703fu); RETCHK(0x567044u, 0x56703fu); LOADALL;
  /* 00567044 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567045 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00567047 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567049 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056704a and eax, 0x2ac81 */ { u32 a_ = eax, b_ = 0x2ac81u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056704f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567050 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00567051 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567052 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567054 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567055 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567058:;
  /* 00567058 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567059 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056705a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056705d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056705e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567060 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567061 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567070(CPU *c) {
  NATIVE_HOOK(0x567070u) REGS; LOADALL;
L_00567070:;
  /* 00567070 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567071 mov esi, eax */ { esi = (u32)(eax); }
  /* 00567073 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567075 mov ax, word ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00567078 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056707e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056707f call 0x567df0 */ esp -= 4; M32(esp) = 0x567084u; SAVEALL; F_00567df0(c); ABI_CHECK(0x567df0u, 0x56707fu); RETCHK(0x567084u, 0x56707fu); LOADALL;
  /* 00567084 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567087 je 0x5670cc */ if (ZF_) goto L_005670cc;
  /* 00567089 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056708b mov cl, byte ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056708e mov eax, esi */ { eax = (u32)(esi); }
  /* 00567090 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567091 call 0x567dc0 */ esp -= 4; M32(esp) = 0x567096u; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x567091u); RETCHK(0x567096u, 0x567091u); LOADALL;
  /* 00567096 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567099 je 0x5670cc */ if (ZF_) goto L_005670cc;
  /* 0056709b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0056709d mov dl, byte ptr [edi + 3] */ { const u32 m_ = (u32)(edi + 0x3u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005670a0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005670a2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005670a3 call 0x567dc0 */ esp -= 4; M32(esp) = 0x5670a8u; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x5670a3u); RETCHK(0x5670a8u, 0x5670a3u); LOADALL;
  /* 005670a8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005670ab je 0x5670cc */ if (ZF_) goto L_005670cc;
  /* 005670ad mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005670b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005670b1 call 0x567e70 */ esp -= 4; M32(esp) = 0x5670b6u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x5670b1u); RETCHK(0x5670b6u, 0x5670b1u); LOADALL;
  /* 005670b6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005670b9 je 0x5670cc */ if (ZF_) goto L_005670cc;
  /* 005670bb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005670bd mov cx, word ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005670c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005670c2 call 0x567df0 */ esp -= 4; M32(esp) = 0x5670c7u; SAVEALL; F_00567df0(c); ABI_CHECK(0x567df0u, 0x5670c2u); RETCHK(0x5670c7u, 0x5670c2u); LOADALL;
  /* 005670c7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005670ca jne 0x5670d1 */ if (!ZF_) goto L_005670d1;
L_005670cc:;
  /* 005670cc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005670cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005670d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005670d1:;
  /* 005670d1 mov eax, esi */ { eax = (u32)(esi); }
  /* 005670d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005670d4 jmp 0x464860 */ SAVEALL; F_00464860(c); return;
}

void F_005670e0(CPU *c) {
  NATIVE_HOOK(0x5670e0u) REGS; LOADALL;
L_005670e0:;
  /* 005670e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005670e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005670e2 mov edi, eax */ { edi = (u32)(eax); }
  /* 005670e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005670e6 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005670ec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005670ed call 0x567e30 */ esp -= 4; M32(esp) = 0x5670f2u; SAVEALL; F_00567e30(c); ABI_CHECK(0x567e30u, 0x5670edu); RETCHK(0x5670f2u, 0x5670edu); LOADALL;
  /* 005670f2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005670f5 jne 0x5670fd */ if (!ZF_) goto L_005670fd;
L_005670f7:;
  /* 005670f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005670f8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005670fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005670fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005670fd:;
  /* 005670fd lea eax, [edi + 2] */ eax = (u32)((u32)(edi + 0x2u));
  /* 00567100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567101 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567103 call 0x568130 */ esp -= 4; M32(esp) = 0x567108u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x567103u); RETCHK(0x567108u, 0x567103u); LOADALL;
  /* 00567108 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056710b je 0x5670f7 */ if (ZF_) goto L_005670f7;
  /* 0056710d lea ecx, [edi + 3] */ ecx = (u32)((u32)(edi + 0x3u));
  /* 00567110 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567111 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567113 call 0x568130 */ esp -= 4; M32(esp) = 0x567118u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x567113u); RETCHK(0x567118u, 0x567113u); LOADALL;
  /* 00567118 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056711b je 0x5670f7 */ if (ZF_) goto L_005670f7;
  /* 0056711d lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 00567120 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00567121 call 0x567eb0 */ esp -= 4; M32(esp) = 0x567126u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x567121u); RETCHK(0x567126u, 0x567121u); LOADALL;
  /* 00567126 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567129 je 0x5670f7 */ if (ZF_) goto L_005670f7;
  /* 0056712b add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056712e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056712f call 0x567e30 */ esp -= 4; M32(esp) = 0x567134u; SAVEALL; F_00567e30(c); ABI_CHECK(0x567e30u, 0x56712fu); RETCHK(0x567134u, 0x56712fu); LOADALL;
  /* 00567134 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567135 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00567137 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567139 and eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056713c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056713d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056713e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056713f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00567140(CPU *c) {
  NATIVE_HOOK(0x567140u) REGS; LOADALL;
L_00567140:;
  /* 00567140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567143 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00567146 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567147 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 0056714d mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0056714f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567150 call 0x567e70 */ esp -= 4; M32(esp) = 0x567155u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567150u); RETCHK(0x567155u, 0x567150u); LOADALL;
  /* 00567155 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567158 jne 0x567161 */ if (!ZF_) goto L_00567161;
  /* 0056715a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056715c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056715d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056715e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567161:;
  /* 00567161 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567163 call 0x464860 */ esp -= 4; M32(esp) = 0x567168u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567163u); RETCHK(0x567168u, 0x567163u); LOADALL;
  /* 00567168 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567169 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056716a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567170(CPU *c) {
  NATIVE_HOOK(0x567170u) REGS; LOADALL;
L_00567170:;
  /* 00567170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567173 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00567176 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567177 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567178 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 0056717e call 0x567eb0 */ esp -= 4; M32(esp) = 0x567183u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x56717eu); RETCHK(0x567183u, 0x56717eu); LOADALL;
  /* 00567183 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567184 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00567186 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567188 and eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056718b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056718c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056718d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056718e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005671a0(CPU *c) {
  NATIVE_HOOK(0x5671a0u) REGS; LOADALL;
L_005671a0:;
  /* 005671a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005671a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005671a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005671a4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005671a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005671a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005671a7 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005671aa mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005671ac mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005671ae lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 005671b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005671b5 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005671b8 call 0x567e70 */ esp -= 4; M32(esp) = 0x5671bdu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x5671b8u); RETCHK(0x5671bdu, 0x5671b8u); LOADALL;
  /* 005671bd cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005671c0 je 0x5671f7 */ if (ZF_) goto L_005671f7;
  /* 005671c2 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005671c4 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005671c7:;
  /* 005671c7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005671ca cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005671cc jge 0x5671e6 */ if (!LT_) goto L_005671e6;
  /* 005671ce mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005671d0 call 0x567070 */ esp -= 4; M32(esp) = 0x5671d5u; SAVEALL; F_00567070(c); ABI_CHECK(0x567070u, 0x5671d0u); RETCHK(0x5671d5u, 0x5671d0u); LOADALL;
  /* 005671d5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005671d8 je 0x5671f7 */ if (ZF_) goto L_005671f7;
  /* 005671da inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005671db add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005671de cmp esi, 0xff */ { u32 a_ = esi, b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005671e4 jl 0x5671c7 */ if (LT_) goto L_005671c7;
L_005671e6:;
  /* 005671e6 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005671e9 call 0x464860 */ esp -= 4; M32(esp) = 0x5671eeu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5671e9u); RETCHK(0x5671eeu, 0x5671e9u); LOADALL;
  /* 005671ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005671ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005671f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005671f1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005671f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005671f4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005671f7:;
  /* 005671f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005671f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005671f9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005671fc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005671fd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005671ff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567200 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567210(CPU *c) {
  NATIVE_HOOK(0x567210u) REGS; LOADALL;
L_00567210:;
  /* 00567210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567213 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567214 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567215 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567216 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567219 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056721b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056721c lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 00567222 call 0x567eb0 */ esp -= 4; M32(esp) = 0x567227u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x567222u); RETCHK(0x567227u, 0x567222u); LOADALL;
  /* 00567227 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056722a je 0x56725e */ if (ZF_) goto L_0056725e;
  /* 0056722c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0056722e add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_00567231:;
  /* 00567231 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00567234 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567236 jge 0x567252 */ if (!LT_) goto L_00567252;
  /* 00567238 mov eax, edi */ { eax = (u32)(edi); }
  /* 0056723a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056723c call 0x5670e0 */ esp -= 4; M32(esp) = 0x567241u; SAVEALL; F_005670e0(c); ABI_CHECK(0x5670e0u, 0x56723cu); RETCHK(0x567241u, 0x56723cu); LOADALL;
  /* 00567241 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567244 je 0x56725e */ if (ZF_) goto L_0056725e;
  /* 00567246 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567247 add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056724a cmp esi, 0xff */ { u32 a_ = esi, b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567250 jl 0x567231 */ if (LT_) goto L_00567231;
L_00567252:;
  /* 00567252 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567253 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567254 mov eax, 0xbf8 */ { eax = (u32)(0xbf8u); }
  /* 00567259 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056725a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056725b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056725e:;
  /* 0056725e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056725f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567260 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567263 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567264 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567265 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567270(CPU *c) {
  NATIVE_HOOK(0x567270u) REGS; LOADALL;
L_00567270:;
  /* 00567270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567273 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00567276 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567277 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 0056727d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056727f mov cx, word ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00567282 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567283 call 0x567df0 */ esp -= 4; M32(esp) = 0x567288u; SAVEALL; F_00567df0(c); ABI_CHECK(0x567df0u, 0x567283u); RETCHK(0x567288u, 0x567283u); LOADALL;
  /* 00567288 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056728b jne 0x567294 */ if (!ZF_) goto L_00567294;
  /* 0056728d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056728f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567290 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567291 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567294:;
  /* 00567294 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567296 call 0x464860 */ esp -= 4; M32(esp) = 0x56729bu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567296u); RETCHK(0x56729bu, 0x567296u); LOADALL;
  /* 0056729b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056729c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056729d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005672a0(CPU *c) {
  NATIVE_HOOK(0x5672a0u) REGS; LOADALL;
L_005672a0:;
  /* 005672a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005672a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005672a3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005672a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005672a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005672a8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 005672ae call 0x567e30 */ esp -= 4; M32(esp) = 0x5672b3u; SAVEALL; F_00567e30(c); ABI_CHECK(0x567e30u, 0x5672aeu); RETCHK(0x5672b3u, 0x5672aeu); LOADALL;
  /* 005672b3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005672b4 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005672b6 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005672b8 and eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005672bb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005672bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005672bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005672be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005672d0(CPU *c) {
  NATIVE_HOOK(0x5672d0u) REGS; LOADALL;
L_005672d0:;
  /* 005672d0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005672d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005672d2 mov esi, eax */ { esi = (u32)(eax); }
  /* 005672d4 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005672da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005672db mov ecx, 0x20 */ { ecx = (u32)(0x20u); }
  /* 005672e0 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 005672e2 call 0x567ef0 */ esp -= 4; M32(esp) = 0x5672e7u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x5672e2u); RETCHK(0x5672e7u, 0x5672e2u); LOADALL;
  /* 005672e7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005672ea je 0x5672fd */ if (ZF_) goto L_005672fd;
  /* 005672ec xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005672ee mov ax, word ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005672f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005672f3 call 0x567df0 */ esp -= 4; M32(esp) = 0x5672f8u; SAVEALL; F_00567df0(c); ABI_CHECK(0x567df0u, 0x5672f3u); RETCHK(0x5672f8u, 0x5672f3u); LOADALL;
  /* 005672f8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005672fb jne 0x567303 */ if (!ZF_) goto L_00567303;
L_005672fd:;
  /* 005672fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005672fe or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567301 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567302 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00567303:;
  /* 00567303 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567305 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567306 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567307 jmp 0x464860 */ SAVEALL; F_00464860(c); return;
}

void F_00567310(CPU *c) {
  NATIVE_HOOK(0x567310u) REGS; LOADALL;
L_00567310:;
  /* 00567310 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567311 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567312 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567313 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00567315 mov edi, eax */ { edi = (u32)(eax); }
  /* 00567317 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 00567319 add esi, 0x10000 */ { u32 a_ = esi, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056731f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567320 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00567322 call 0x567f70 */ esp -= 4; M32(esp) = 0x567327u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x567322u); RETCHK(0x567327u, 0x567322u); LOADALL;
  /* 00567327 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056732a jne 0x567332 */ if (!ZF_) goto L_00567332;
  /* 0056732c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056732d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056732e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567330 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567331 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00567332:;
  /* 00567332 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567335 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567336 call 0x567e30 */ esp -= 4; M32(esp) = 0x56733bu; SAVEALL; F_00567e30(c); ABI_CHECK(0x567e30u, 0x567336u); RETCHK(0x56733bu, 0x567336u); LOADALL;
  /* 0056733b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056733c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0056733e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567341 and eax, 0x23 */ { u32 a_ = eax, b_ = 0x23u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567344 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567345 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00567346 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567347 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00567350(CPU *c) {
  NATIVE_HOOK(0x567350u) REGS; LOADALL;
L_00567350:;
  /* 00567350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567353 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567354 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567355 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567356 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567359 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0056735b mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056735d lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 00567363 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567364 call 0x567e70 */ esp -= 4; M32(esp) = 0x567369u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567364u); RETCHK(0x567369u, 0x567364u); LOADALL;
  /* 00567369 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056736c je 0x56737d */ if (ZF_) goto L_0056737d;
  /* 0056736e add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567371 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00567373 call 0x5672d0 */ esp -= 4; M32(esp) = 0x567378u; SAVEALL; F_005672d0(c); ABI_CHECK(0x5672d0u, 0x567373u); RETCHK(0x567378u, 0x567373u); LOADALL;
  /* 00567378 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056737b jne 0x567387 */ if (!ZF_) goto L_00567387;
L_0056737d:;
  /* 0056737d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056737e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056737f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567382 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567383 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567384 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567387:;
  /* 00567387 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567389 call 0x464860 */ esp -= 4; M32(esp) = 0x56738eu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567389u); RETCHK(0x56738eu, 0x567389u); LOADALL;
  /* 0056738e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056738f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567390 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567391 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567392 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005673a0(CPU *c) {
  NATIVE_HOOK(0x5673a0u) REGS; LOADALL;
L_005673a0:;
  /* 005673a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005673a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005673a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005673a4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005673a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005673a8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005673a9 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005673ab push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005673ac lea esi, [edi + 0x10000] */ esi = (u32)((u32)(edi + 0x10000u));
  /* 005673b2 call 0x567eb0 */ esp -= 4; M32(esp) = 0x5673b7u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5673b2u); RETCHK(0x5673b7u, 0x5673b2u); LOADALL;
  /* 005673b7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005673ba jne 0x5673c5 */ if (!ZF_) goto L_005673c5;
  /* 005673bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005673bd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005673be or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005673c0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005673c1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005673c2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005673c5:;
  /* 005673c5 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 005673c8 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005673ca call 0x567310 */ esp -= 4; M32(esp) = 0x5673cfu; SAVEALL; F_00567310(c); ABI_CHECK(0x567310u, 0x5673cau); RETCHK(0x5673cfu, 0x5673cau); LOADALL;
  /* 005673cf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005673d0 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005673d2 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005673d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005673d5 and eax, 0x29 */ { u32 a_ = eax, b_ = 0x29u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005673d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005673d9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005673da pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005673db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005673dc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005673e0(CPU *c) {
  NATIVE_HOOK(0x5673e0u) REGS; LOADALL;
L_005673e0:;
  /* 005673e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005673e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005673e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005673e4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005673e7 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005673e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005673ea push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005673eb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005673ed lea esi, [edi + 0x10000] */ esi = (u32)((u32)(edi + 0x10000u));
  /* 005673f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005673f4 call 0x567e70 */ esp -= 4; M32(esp) = 0x5673f9u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x5673f4u); RETCHK(0x5673f9u, 0x5673f4u); LOADALL;
  /* 005673f9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005673fc je 0x56740d */ if (ZF_) goto L_0056740d;
  /* 005673fe add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00567401 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567402 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567403 call 0x566850 */ esp -= 4; M32(esp) = 0x567408u; SAVEALL; F_00566850(c); ABI_CHECK(0x566850u, 0x567403u); RETCHK(0x567408u, 0x567403u); LOADALL;
  /* 00567408 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056740b jne 0x567417 */ if (!ZF_) goto L_00567417;
L_0056740d:;
  /* 0056740d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056740e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056740f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567412 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567413 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567414 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567417:;
  /* 00567417 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567419 call 0x464860 */ esp -= 4; M32(esp) = 0x56741eu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567419u); RETCHK(0x56741eu, 0x567419u); LOADALL;
  /* 0056741e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056741f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567420 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567421 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567422 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567430(CPU *c) {
  NATIVE_HOOK(0x567430u) REGS; LOADALL;
L_00567430:;
  /* 00567430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567433 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567434 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567435 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567436 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567439 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056743b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056743c lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 00567442 call 0x567eb0 */ esp -= 4; M32(esp) = 0x567447u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x567442u); RETCHK(0x567447u, 0x567442u); LOADALL;
  /* 00567447 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056744a jne 0x567455 */ if (!ZF_) goto L_00567455;
  /* 0056744c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056744d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056744e or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567450 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567451 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567452 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567455:;
  /* 00567455 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567458 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567459 call 0x5668d0 */ esp -= 4; M32(esp) = 0x56745eu; SAVEALL; F_005668d0(c); ABI_CHECK(0x5668d0u, 0x567459u); RETCHK(0x56745eu, 0x567459u); LOADALL;
  /* 0056745e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056745f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00567461 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567463 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567464 and eax, 0xce49 */ { u32 a_ = eax, b_ = 0xce49u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567469 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056746a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056746b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056746c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056746d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567470(CPU *c) {
  NATIVE_HOOK(0x567470u) REGS; LOADALL;
L_00567470:;
  /* 00567470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567473 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567474 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567475 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567476 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567479 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0056747b mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056747d lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 00567483 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567484 call 0x567e70 */ esp -= 4; M32(esp) = 0x567489u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567484u); RETCHK(0x567489u, 0x567484u); LOADALL;
  /* 00567489 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056748c je 0x5674ab */ if (ZF_) goto L_005674ab;
  /* 0056748e mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00567491 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567492 call 0x567e70 */ esp -= 4; M32(esp) = 0x567497u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567492u); RETCHK(0x567497u, 0x567492u); LOADALL;
  /* 00567497 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056749a je 0x5674ab */ if (ZF_) goto L_005674ab;
  /* 0056749c add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056749f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005674a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005674a1 call 0x566850 */ esp -= 4; M32(esp) = 0x5674a6u; SAVEALL; F_00566850(c); ABI_CHECK(0x566850u, 0x5674a1u); RETCHK(0x5674a6u, 0x5674a1u); LOADALL;
  /* 005674a6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005674a9 jne 0x5674b5 */ if (!ZF_) goto L_005674b5;
L_005674ab:;
  /* 005674ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005674ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005674ad or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005674b0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005674b1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005674b2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005674b5:;
  /* 005674b5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005674b7 call 0x464860 */ esp -= 4; M32(esp) = 0x5674bcu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5674b7u); RETCHK(0x5674bcu, 0x5674b7u); LOADALL;
  /* 005674bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005674bd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005674be pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005674bf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005674c0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005674d0(CPU *c) {
  NATIVE_HOOK(0x5674d0u) REGS; LOADALL;
L_005674d0:;
  /* 005674d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005674d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005674d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005674d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005674d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005674d6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005674d9 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005674db lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 005674e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005674e2 call 0x567eb0 */ esp -= 4; M32(esp) = 0x5674e7u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5674e2u); RETCHK(0x5674e7u, 0x5674e2u); LOADALL;
  /* 005674e7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005674ea jne 0x5674f6 */ if (!ZF_) goto L_005674f6;
L_005674ec:;
  /* 005674ec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005674ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005674ee or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005674f1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005674f2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005674f3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005674f6:;
  /* 005674f6 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 005674f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005674fa call 0x567eb0 */ esp -= 4; M32(esp) = 0x5674ffu; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5674fau); RETCHK(0x5674ffu, 0x5674fau); LOADALL;
  /* 005674ff cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567502 je 0x5674ec */ if (ZF_) goto L_005674ec;
  /* 00567504 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567507 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567508 call 0x5668d0 */ esp -= 4; M32(esp) = 0x56750du; SAVEALL; F_005668d0(c); ABI_CHECK(0x5668d0u, 0x567508u); RETCHK(0x56750du, 0x567508u); LOADALL;
  /* 0056750d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056750e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00567510 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567512 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567513 and eax, 0xce4d */ { u32 a_ = eax, b_ = 0xce4du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567518 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567519 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056751a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056751b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056751c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567520(CPU *c) {
  NATIVE_HOOK(0x567520u) REGS; LOADALL;
L_00567520:;
  /* 00567520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567523 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567524 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00567527 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567528 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056752a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0056752c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056752d lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 00567533 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567534 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00567537 call 0x567e70 */ esp -= 4; M32(esp) = 0x56753cu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567537u); RETCHK(0x56753cu, 0x567537u); LOADALL;
  /* 0056753c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056753f jne 0x56754b */ if (!ZF_) goto L_0056754b;
  /* 00567541 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567542 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567544 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567545 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567547 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567548 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056754b:;
  /* 0056754b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056754e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056754f xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00567551 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00567554:;
  /* 00567554 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00567557 cmp edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567559 jge 0x567574 */ if (!LT_) goto L_00567574;
  /* 0056755b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056755c mov eax, esi */ { eax = (u32)(esi); }
  /* 0056755e call 0x566930 */ esp -= 4; M32(esp) = 0x567563u; SAVEALL; F_00566930(c); ABI_CHECK(0x566930u, 0x56755eu); RETCHK(0x567563u, 0x56755eu); LOADALL;
  /* 00567563 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567566 je 0x567585 */ if (ZF_) goto L_00567585;
  /* 00567568 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567569 add esi, 0xced0 */ { u32 a_ = esi, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056756f cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567572 jl 0x567554 */ if (LT_) goto L_00567554;
L_00567574:;
  /* 00567574 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00567577 call 0x464860 */ esp -= 4; M32(esp) = 0x56757cu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567577u); RETCHK(0x56757cu, 0x567577u); LOADALL;
  /* 0056757c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056757d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056757e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056757f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567581 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567582 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567585:;
  /* 00567585 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567586 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567587 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056758a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056758b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056758d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056758e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005675a0(CPU *c) {
  NATIVE_HOOK(0x5675a0u) REGS; LOADALL;
L_005675a0:;
  /* 005675a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005675a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005675a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005675a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005675a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005675a6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005675a9 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 005675ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005675ac lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 005675b2 call 0x567eb0 */ esp -= 4; M32(esp) = 0x5675b7u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5675b2u); RETCHK(0x5675b7u, 0x5675b2u); LOADALL;
  /* 005675b7 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005675ba je 0x5675ed */ if (ZF_) goto L_005675ed;
  /* 005675bc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005675be add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_005675c1:;
  /* 005675c1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005675c4 cmp esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005675c6 jge 0x5675e1 */ if (!LT_) goto L_005675e1;
  /* 005675c8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005675c9 mov eax, edi */ { eax = (u32)(edi); }
  /* 005675cb call 0x5669b0 */ esp -= 4; M32(esp) = 0x5675d0u; SAVEALL; F_005669b0(c); ABI_CHECK(0x5669b0u, 0x5675cbu); RETCHK(0x5675d0u, 0x5675cbu); LOADALL;
  /* 005675d0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005675d3 je 0x5675ed */ if (ZF_) goto L_005675ed;
  /* 005675d5 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005675d6 add edi, 0xced0 */ { u32 a_ = edi, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005675dc cmp esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005675df jl 0x5675c1 */ if (LT_) goto L_005675c1;
L_005675e1:;
  /* 005675e1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005675e2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005675e3 mov eax, 0x67684 */ { eax = (u32)(0x67684u); }
  /* 005675e8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005675e9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005675ea ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005675ed:;
  /* 005675ed pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005675ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005675ef or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005675f2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005675f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005675f4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567600(CPU *c) {
  NATIVE_HOOK(0x567600u) REGS; LOADALL;
L_00567600:;
  /* 00567600 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567601 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567603 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567604 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567605 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567608 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0056760a lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00567610 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567611 call 0x567e70 */ esp -= 4; M32(esp) = 0x567616u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567611u); RETCHK(0x567616u, 0x567611u); LOADALL;
  /* 00567616 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567619 je 0x567629 */ if (ZF_) goto L_00567629;
  /* 0056761b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056761e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056761f call 0x567e70 */ esp -= 4; M32(esp) = 0x567624u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x56761fu); RETCHK(0x567624u, 0x56761fu); LOADALL;
  /* 00567624 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567627 jne 0x567632 */ if (!ZF_) goto L_00567632;
L_00567629:;
  /* 00567629 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056762a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056762d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056762e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056762f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567632:;
  /* 00567632 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567634 call 0x464860 */ esp -= 4; M32(esp) = 0x567639u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567634u); RETCHK(0x567639u, 0x567634u); LOADALL;
  /* 00567639 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056763a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056763b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056763c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567640(CPU *c) {
  NATIVE_HOOK(0x567640u) REGS; LOADALL;
L_00567640:;
  /* 00567640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567643 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567644 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567645 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567648 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 0056764e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056764f call 0x567eb0 */ esp -= 4; M32(esp) = 0x567654u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x56764fu); RETCHK(0x567654u, 0x56764fu); LOADALL;
  /* 00567654 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567657 jne 0x567661 */ if (!ZF_) goto L_00567661;
  /* 00567659 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056765a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056765c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056765d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056765e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567661:;
  /* 00567661 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567664 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567665 call 0x567eb0 */ esp -= 4; M32(esp) = 0x56766au; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x567665u); RETCHK(0x56766au, 0x567665u); LOADALL;
  /* 0056766a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056766b neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0056766d sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0056766f and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567672 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567673 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00567674 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567675 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567676 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567680(CPU *c) {
  NATIVE_HOOK(0x567680u) REGS; LOADALL;
L_00567680:;
  /* 00567680 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567681 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567683 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567684 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00567687 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00567689 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056768a lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00567690 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567691 call 0x567e70 */ esp -= 4; M32(esp) = 0x567696u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567691u); RETCHK(0x567696u, 0x567691u); LOADALL;
  /* 00567696 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567699 jne 0x5676a3 */ if (!ZF_) goto L_005676a3;
  /* 0056769b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056769c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056769e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056769f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005676a0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005676a3:;
  /* 005676a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005676a4 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005676a6 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005676a9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005676b0:;
  /* 005676b0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005676b3 cmp edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005676b5 jge 0x5676cd */ if (!LT_) goto L_005676cd;
  /* 005676b7 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005676b9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005676ba call 0x567e70 */ esp -= 4; M32(esp) = 0x5676bfu; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x5676bau); RETCHK(0x5676bfu, 0x5676bau); LOADALL;
  /* 005676bf cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005676c2 je 0x5676db */ if (ZF_) goto L_005676db;
  /* 005676c4 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005676c5 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005676c8 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005676cb jl 0x5676b0 */ if (LT_) goto L_005676b0;
L_005676cd:;
  /* 005676cd mov eax, esi */ { eax = (u32)(esi); }
  /* 005676cf call 0x464860 */ esp -= 4; M32(esp) = 0x5676d4u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5676cfu); RETCHK(0x5676d4u, 0x5676cfu); LOADALL;
  /* 005676d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005676d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005676d6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005676d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005676d8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005676db:;
  /* 005676db pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005676dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005676dd or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005676e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005676e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005676e2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005676f0(CPU *c) {
  NATIVE_HOOK(0x5676f0u) REGS; LOADALL;
L_005676f0:;
  /* 005676f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005676f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005676f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005676f4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005676f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005676f8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 005676fe push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005676ff call 0x567eb0 */ esp -= 4; M32(esp) = 0x567704u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x5676ffu); RETCHK(0x567704u, 0x5676ffu); LOADALL;
  /* 00567704 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567707 jne 0x567711 */ if (!ZF_) goto L_00567711;
  /* 00567709 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056770a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056770c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056770d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056770e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567711:;
  /* 00567711 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567712 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00567714 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_00567717:;
  /* 00567717 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056771a cmp edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056771c jge 0x567732 */ if (!LT_) goto L_00567732;
  /* 0056771e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056771f call 0x567eb0 */ esp -= 4; M32(esp) = 0x567724u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x56771fu); RETCHK(0x567724u, 0x56771fu); LOADALL;
  /* 00567724 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567727 je 0x56773e */ if (ZF_) goto L_0056773e;
  /* 00567729 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056772a add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056772d cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567730 jl 0x567717 */ if (LT_) goto L_00567717;
L_00567732:;
  /* 00567732 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567733 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567734 mov eax, 0x24 */ { eax = (u32)(0x24u); }
  /* 00567739 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056773a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056773b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056773e:;
  /* 0056773e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056773f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567740 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567743 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567744 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567745 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567750(CPU *c) {
  NATIVE_HOOK(0x567750u) REGS; LOADALL;
L_00567750:;
  /* 00567750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567753 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567754 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567755 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00567758 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056775a mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056775c lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 00567762 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567763 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00567765 call 0x567dc0 */ esp -= 4; M32(esp) = 0x56776au; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x567765u); RETCHK(0x56776au, 0x567765u); LOADALL;
  /* 0056776a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056776d je 0x567798 */ if (ZF_) goto L_00567798;
  /* 0056776f lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 00567772 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567773 mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 00567778 call 0x567ef0 */ esp -= 4; M32(esp) = 0x56777du; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x567778u); RETCHK(0x56777du, 0x567778u); LOADALL;
  /* 0056777d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567780 je 0x567798 */ if (ZF_) goto L_00567798;
  /* 00567782 add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00567788 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567789 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 0056778e call 0x567ef0 */ esp -= 4; M32(esp) = 0x567793u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x56778eu); RETCHK(0x567793u, 0x56778eu); LOADALL;
  /* 00567793 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567796 jne 0x5677a1 */ if (!ZF_) goto L_005677a1;
L_00567798:;
  /* 00567798 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567799 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056779c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056779d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056779e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005677a1:;
  /* 005677a1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005677a3 call 0x464860 */ esp -= 4; M32(esp) = 0x5677a8u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5677a3u); RETCHK(0x5677a8u, 0x5677a3u); LOADALL;
  /* 005677a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005677a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005677aa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005677ab ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005677b0(CPU *c) {
  NATIVE_HOOK(0x5677b0u) REGS; LOADALL;
L_005677b0:;
  /* 005677b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005677b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005677b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005677b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005677b5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005677b8 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 005677be push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005677bf mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005677c1 call 0x568130 */ esp -= 4; M32(esp) = 0x5677c6u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x5677c1u); RETCHK(0x5677c6u, 0x5677c1u); LOADALL;
  /* 005677c6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005677c9 jne 0x5677d4 */ if (!ZF_) goto L_005677d4;
L_005677cb:;
  /* 005677cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005677cc or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005677cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005677d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005677d1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005677d4:;
  /* 005677d4 push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 005677d9 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 005677dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005677dd call 0x567f70 */ esp -= 4; M32(esp) = 0x5677e2u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5677ddu); RETCHK(0x5677e2u, 0x5677ddu); LOADALL;
  /* 005677e2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005677e5 je 0x5677cb */ if (ZF_) goto L_005677cb;
  /* 005677e7 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 005677ec add esi, 0x82 */ { u32 a_ = esi, b_ = 0x82u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005677f2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005677f3 call 0x567f70 */ esp -= 4; M32(esp) = 0x5677f8u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5677f3u); RETCHK(0x5677f8u, 0x5677f3u); LOADALL;
  /* 005677f8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005677f9 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005677fb sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005677fd and eax, 0x182 */ { u32 a_ = eax, b_ = 0x182u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567802 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567803 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00567804 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567805 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567806 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567810(CPU *c) {
  NATIVE_HOOK(0x567810u) REGS; LOADALL;
L_00567810:;
  /* 00567810 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567811 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567813 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567814 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567815 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00567818 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056781a mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056781c lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 00567822 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567823 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00567825 call 0x567dc0 */ esp -= 4; M32(esp) = 0x56782au; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x567825u); RETCHK(0x56782au, 0x567825u); LOADALL;
  /* 0056782a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056782d je 0x56786e */ if (ZF_) goto L_0056786e;
  /* 0056782f lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 00567832 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567833 mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 00567838 call 0x567ef0 */ esp -= 4; M32(esp) = 0x56783du; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x567838u); RETCHK(0x56783du, 0x567838u); LOADALL;
  /* 0056783d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567840 je 0x56786e */ if (ZF_) goto L_0056786e;
  /* 00567842 lea edx, [esi + 0x82] */ edx = (u32)((u32)(esi + 0x82u));
  /* 00567848 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00567849 mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 0056784e call 0x567ef0 */ esp -= 4; M32(esp) = 0x567853u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x56784eu); RETCHK(0x567853u, 0x56784eu); LOADALL;
  /* 00567853 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567856 je 0x56786e */ if (ZF_) goto L_0056786e;
  /* 00567858 add esi, 0x103 */ { u32 a_ = esi, b_ = 0x103u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056785e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056785f mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00567864 call 0x567ef0 */ esp -= 4; M32(esp) = 0x567869u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x567864u); RETCHK(0x567869u, 0x567864u); LOADALL;
  /* 00567869 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056786c jne 0x567877 */ if (!ZF_) goto L_00567877;
L_0056786e:;
  /* 0056786e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056786f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567872 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567873 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567874 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567877:;
  /* 00567877 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00567879 call 0x464860 */ esp -= 4; M32(esp) = 0x56787eu; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567879u); RETCHK(0x56787eu, 0x567879u); LOADALL;
  /* 0056787e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056787f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567880 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567881 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567890(CPU *c) {
  NATIVE_HOOK(0x567890u) REGS; LOADALL;
L_00567890:;
  /* 00567890 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567891 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567893 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567894 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567895 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00567898 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 0056789e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056789f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005678a1 call 0x568130 */ esp -= 4; M32(esp) = 0x5678a6u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x5678a1u); RETCHK(0x5678a6u, 0x5678a1u); LOADALL;
  /* 005678a6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005678a9 jne 0x5678b4 */ if (!ZF_) goto L_005678b4;
L_005678ab:;
  /* 005678ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005678ac or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005678af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005678b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005678b1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005678b4:;
  /* 005678b4 push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 005678b9 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 005678bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005678bd call 0x567f70 */ esp -= 4; M32(esp) = 0x5678c2u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5678bdu); RETCHK(0x5678c2u, 0x5678bdu); LOADALL;
  /* 005678c2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005678c5 je 0x5678ab */ if (ZF_) goto L_005678ab;
  /* 005678c7 push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 005678cc lea ecx, [esi + 0x82] */ ecx = (u32)((u32)(esi + 0x82u));
  /* 005678d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005678d3 call 0x567f70 */ esp -= 4; M32(esp) = 0x5678d8u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5678d3u); RETCHK(0x5678d8u, 0x5678d3u); LOADALL;
  /* 005678d8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005678db je 0x5678ab */ if (ZF_) goto L_005678ab;
  /* 005678dd push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 005678e2 add esi, 0x103 */ { u32 a_ = esi, b_ = 0x103u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005678e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005678e9 call 0x567f70 */ esp -= 4; M32(esp) = 0x5678eeu; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5678e9u); RETCHK(0x5678eeu, 0x5678e9u); LOADALL;
  /* 005678ee inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005678ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005678f1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005678f3 and eax, 0x203 */ { u32 a_ = eax, b_ = 0x203u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005678f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005678f9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005678fa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005678fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005678fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567900(CPU *c) {
  NATIVE_HOOK(0x567900u) REGS; LOADALL;
L_00567900:;
  /* 00567900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567903 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567904 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567905 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567908 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056790a mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056790c lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 00567912 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567913 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00567915 call 0x567dc0 */ esp -= 4; M32(esp) = 0x56791au; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x567915u); RETCHK(0x56791au, 0x567915u); LOADALL;
  /* 0056791a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056791d je 0x567973 */ if (ZF_) goto L_00567973;
  /* 0056791f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00567921 mov cx, word ptr [edi + 2] */ { const u32 m_ = (u32)(edi + 0x2u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00567925 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567926 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00567928 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567929 call 0x567df0 */ esp -= 4; M32(esp) = 0x56792eu; SAVEALL; F_00567df0(c); ABI_CHECK(0x567df0u, 0x567929u); RETCHK(0x56792eu, 0x567929u); LOADALL;
  /* 0056792e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567931 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567932 je 0x567973 */ if (ZF_) goto L_00567973;
  /* 00567934 lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 00567937 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00567938 mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 0056793d call 0x567ef0 */ esp -= 4; M32(esp) = 0x567942u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x56793du); RETCHK(0x567942u, 0x56793du); LOADALL;
  /* 00567942 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567945 je 0x567973 */ if (ZF_) goto L_00567973;
  /* 00567947 lea eax, [edi + 0x85] */ eax = (u32)((u32)(edi + 0x85u));
  /* 0056794d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056794e mov ecx, 0x81 */ { ecx = (u32)(0x81u); }
  /* 00567953 call 0x567ef0 */ esp -= 4; M32(esp) = 0x567958u; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x567953u); RETCHK(0x567958u, 0x567953u); LOADALL;
  /* 00567958 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056795b je 0x567973 */ if (ZF_) goto L_00567973;
  /* 0056795d add edi, 0x106 */ { u32 a_ = edi, b_ = 0x106u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567963 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567964 mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00567969 call 0x567ef0 */ esp -= 4; M32(esp) = 0x56796eu; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x567969u); RETCHK(0x56796eu, 0x567969u); LOADALL;
  /* 0056796e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567971 jne 0x56797c */ if (!ZF_) goto L_0056797c;
L_00567973:;
  /* 00567973 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567974 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567977 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567978 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567979 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056797c:;
  /* 0056797c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056797e call 0x464860 */ esp -= 4; M32(esp) = 0x567983u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x56797eu); RETCHK(0x567983u, 0x56797eu); LOADALL;
  /* 00567983 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567984 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567985 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567986 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567990(CPU *c) {
  NATIVE_HOOK(0x567990u) REGS; LOADALL;
L_00567990:;
  /* 00567990 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567991 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567993 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567994 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567995 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567998 lea ebx, [ecx + 0x10000] */ ebx = (u32)((u32)(ecx + 0x10000u));
  /* 0056799e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056799f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005679a1 call 0x568130 */ esp -= 4; M32(esp) = 0x5679a6u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x5679a1u); RETCHK(0x5679a6u, 0x5679a1u); LOADALL;
  /* 005679a6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005679a9 jne 0x5679b4 */ if (!ZF_) goto L_005679b4;
L_005679ab:;
  /* 005679ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005679ac or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005679af pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005679b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005679b1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005679b4:;
  /* 005679b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005679b5 lea eax, [edi + 2] */ eax = (u32)((u32)(edi + 0x2u));
  /* 005679b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005679b9 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 005679bb call 0x567e30 */ esp -= 4; M32(esp) = 0x5679c0u; SAVEALL; F_00567e30(c); ABI_CHECK(0x567e30u, 0x5679bbu); RETCHK(0x5679c0u, 0x5679bbu); LOADALL;
  /* 005679c0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005679c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005679c4 je 0x5679ab */ if (ZF_) goto L_005679ab;
  /* 005679c6 push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 005679cb lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 005679ce push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005679cf call 0x567f70 */ esp -= 4; M32(esp) = 0x5679d4u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5679cfu); RETCHK(0x5679d4u, 0x5679cfu); LOADALL;
  /* 005679d4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005679d7 je 0x5679ab */ if (ZF_) goto L_005679ab;
  /* 005679d9 push 0x81 */ { u32 v_ = 0x81u; esp -= 4; M32(esp) = v_; }
  /* 005679de lea edx, [edi + 0x85] */ edx = (u32)((u32)(edi + 0x85u));
  /* 005679e4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005679e5 call 0x567f70 */ esp -= 4; M32(esp) = 0x5679eau; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5679e5u); RETCHK(0x5679eau, 0x5679e5u); LOADALL;
  /* 005679ea cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005679ed je 0x5679ab */ if (ZF_) goto L_005679ab;
  /* 005679ef push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 005679f4 add edi, 0x106 */ { u32 a_ = edi, b_ = 0x106u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005679fa push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005679fb call 0x567f70 */ esp -= 4; M32(esp) = 0x567a00u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x5679fbu); RETCHK(0x567a00u, 0x5679fbu); LOADALL;
  /* 00567a00 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567a01 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00567a03 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567a05 and eax, 0x207 */ { u32 a_ = eax, b_ = 0x207u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567a0a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567a0b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00567a0c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567a0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567a0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567a20(CPU *c) {
  NATIVE_HOOK(0x567a20u) REGS; LOADALL;
L_00567a20:;
  /* 00567a20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567a21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567a23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567a24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567a25 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567a28 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00567a2a lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00567a30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567a31 call 0x567e70 */ esp -= 4; M32(esp) = 0x567a36u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567a31u); RETCHK(0x567a36u, 0x567a31u); LOADALL;
  /* 00567a36 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567a39 je 0x567a60 */ if (ZF_) goto L_00567a60;
  /* 00567a3b mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00567a3e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567a3f call 0x567e70 */ esp -= 4; M32(esp) = 0x567a44u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567a3fu); RETCHK(0x567a44u, 0x567a3fu); LOADALL;
  /* 00567a44 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567a47 je 0x567a60 */ if (ZF_) goto L_00567a60;
  /* 00567a49 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567a4a add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567a4d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567a4e mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00567a53 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00567a55 call 0x567ef0 */ esp -= 4; M32(esp) = 0x567a5au; SAVEALL; F_00567ef0(c); ABI_CHECK(0x567ef0u, 0x567a55u); RETCHK(0x567a5au, 0x567a55u); LOADALL;
  /* 00567a5a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567a5d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567a5e jne 0x567a69 */ if (!ZF_) goto L_00567a69;
L_00567a60:;
  /* 00567a60 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567a61 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567a64 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567a65 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567a66 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567a69:;
  /* 00567a69 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567a6b call 0x464860 */ esp -= 4; M32(esp) = 0x567a70u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567a6bu); RETCHK(0x567a70u, 0x567a6bu); LOADALL;
  /* 00567a70 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567a71 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567a72 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567a73 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567a80(CPU *c) {
  NATIVE_HOOK(0x567a80u) REGS; LOADALL;
L_00567a80:;
  /* 00567a80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567a81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567a83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567a84 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567a85 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567a88 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00567a8e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567a8f call 0x567eb0 */ esp -= 4; M32(esp) = 0x567a94u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x567a8fu); RETCHK(0x567a94u, 0x567a8fu); LOADALL;
  /* 00567a94 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567a97 jne 0x567aa2 */ if (!ZF_) goto L_00567aa2;
L_00567a99:;
  /* 00567a99 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567a9a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567a9d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567a9e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567a9f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567aa2:;
  /* 00567aa2 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 00567aa5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567aa6 call 0x567eb0 */ esp -= 4; M32(esp) = 0x567aabu; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x567aa6u); RETCHK(0x567aabu, 0x567aa6u); LOADALL;
  /* 00567aab cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567aae je 0x567a99 */ if (ZF_) goto L_00567a99;
  /* 00567ab0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567ab1 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 00567ab6 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567ab9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567aba mov ebx, esi */ { ebx = (u32)(esi); }
  /* 00567abc call 0x567f70 */ esp -= 4; M32(esp) = 0x567ac1u; SAVEALL; F_00567f70(c); ABI_CHECK(0x567f70u, 0x567abcu); RETCHK(0x567ac1u, 0x567abcu); LOADALL;
  /* 00567ac1 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567ac2 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00567ac4 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00567ac6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567ac7 and eax, 0x109 */ { u32 a_ = eax, b_ = 0x109u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567acc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567acd dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00567ace pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567acf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567ad0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567ae0(CPU *c) {
  NATIVE_HOOK(0x567ae0u) REGS; LOADALL;
L_00567ae0:;
  /* 00567ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567ae3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567ae4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00567ae7 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00567ae9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567aea lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00567af0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567af1 call 0x567e70 */ esp -= 4; M32(esp) = 0x567af6u; SAVEALL; F_00567e70(c); ABI_CHECK(0x567e70u, 0x567af1u); RETCHK(0x567af6u, 0x567af1u); LOADALL;
  /* 00567af6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567af9 jne 0x567b03 */ if (!ZF_) goto L_00567b03;
  /* 00567afb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567afc or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567afe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567aff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567b00 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567b03:;
  /* 00567b03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567b04 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00567b06:;
  /* 00567b06 cmp edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567b08 jge 0x567b26 */ if (!LT_) goto L_00567b26;
  /* 00567b0a xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00567b0c mov cl, byte ptr [edi + ebx + 4] */ { const u32 m_ = (u32)(edi + ebx + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00567b10 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567b12 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567b13 call 0x567dc0 */ esp -= 4; M32(esp) = 0x567b18u; SAVEALL; F_00567dc0(c); ABI_CHECK(0x567dc0u, 0x567b13u); RETCHK(0x567b18u, 0x567b13u); LOADALL;
  /* 00567b18 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567b1b je 0x567b34 */ if (ZF_) goto L_00567b34;
  /* 00567b1d inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567b1e cmp edi, 0xea60 */ { u32 a_ = edi, b_ = 0xea60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567b24 jl 0x567b06 */ if (LT_) goto L_00567b06;
L_00567b26:;
  /* 00567b26 mov eax, esi */ { eax = (u32)(esi); }
  /* 00567b28 call 0x464860 */ esp -= 4; M32(esp) = 0x567b2du; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x567b28u); RETCHK(0x567b2du, 0x567b28u); LOADALL;
  /* 00567b2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567b2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567b2f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567b30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567b31 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567b34:;
  /* 00567b34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567b35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567b36 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567b39 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567b3a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567b3b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567b40(CPU *c) {
  NATIVE_HOOK(0x567b40u) REGS; LOADALL;
L_00567b40:;
  /* 00567b40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567b41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567b43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567b44 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00567b47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567b48 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 00567b4e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567b4f call 0x567eb0 */ esp -= 4; M32(esp) = 0x567b54u; SAVEALL; F_00567eb0(c); ABI_CHECK(0x567eb0u, 0x567b4fu); RETCHK(0x567b54u, 0x567b4fu); LOADALL;
  /* 00567b54 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567b57 jne 0x567b61 */ if (!ZF_) goto L_00567b61;
  /* 00567b59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567b5a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567b5c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567b5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567b5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567b61:;
  /* 00567b61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567b62 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00567b64:;
  /* 00567b64 cmp edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567b66 jge 0x567b82 */ if (!LT_) goto L_00567b82;
  /* 00567b68 lea eax, [edi + ebx + 4] */ eax = (u32)((u32)(edi + ebx + 0x4u));
  /* 00567b6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567b6d mov eax, esi */ { eax = (u32)(esi); }
  /* 00567b6f call 0x568130 */ esp -= 4; M32(esp) = 0x567b74u; SAVEALL; F_00568130(c); ABI_CHECK(0x568130u, 0x567b6fu); RETCHK(0x567b74u, 0x567b6fu); LOADALL;
  /* 00567b74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567b77 je 0x567b8e */ if (ZF_) goto L_00567b8e;
  /* 00567b79 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567b7a cmp edi, 0xea60 */ { u32 a_ = edi, b_ = 0xea60u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567b80 jl 0x567b64 */ if (LT_) goto L_00567b64;
L_00567b82:;
  /* 00567b82 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567b83 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567b84 mov eax, 0xea64 */ { eax = (u32)(0xea64u); }
  /* 00567b89 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567b8a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567b8b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567b8e:;
  /* 00567b8e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567b8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567b90 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567b93 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567b94 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567b95 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567ba0(CPU *c) {
  NATIVE_HOOK(0x567ba0u) REGS; LOADALL;
L_00567ba0:;
  /* 00567ba0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567ba1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567ba3 mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 00567ba8 mov edi, edx */ { edi = (u32)(edx); }
  /* 00567baa rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00567bac mov ecx, 0x2000 */ { ecx = (u32)(0x2000u); }
  /* 00567bb1 lea edi, [edx + 0x8000] */ edi = (u32)((u32)(edx + 0x8000u));
  /* 00567bb7 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00567bb9 mov eax, 0x567b40 */ { eax = (u32)(0x567b40u); }
  /* 00567bbe mov ecx, 0x567ae0 */ { ecx = (u32)(0x567ae0u); }
  /* 00567bc3 mov dword ptr [edx + 0x8fa0], eax */ { const u32 m_ = (u32)(edx + 0x8fa0u); M32(m_) = (u32)(eax); }
  /* 00567bc9 mov dword ptr [edx + 0x8fa4], eax */ { const u32 m_ = (u32)(edx + 0x8fa4u); M32(m_) = (u32)(eax); }
  /* 00567bcf mov dword ptr [edx + 0x8fa8], eax */ { const u32 m_ = (u32)(edx + 0x8fa8u); M32(m_) = (u32)(eax); }
  /* 00567bd5 mov dword ptr [edx + 0xf9c], 0x567a20 */ { const u32 m_ = (u32)(edx + 0xf9cu); M32(m_) = (u32)(0x567a20u); }
  /* 00567bdf mov dword ptr [edx + 0x8f9c], 0x567a80 */ { const u32 m_ = (u32)(edx + 0x8f9cu); M32(m_) = (u32)(0x567a80u); }
  /* 00567be9 mov dword ptr [edx + 0xfa0], ecx */ { const u32 m_ = (u32)(edx + 0xfa0u); M32(m_) = (u32)(ecx); }
  /* 00567bef mov dword ptr [edx + 0xfa4], ecx */ { const u32 m_ = (u32)(edx + 0xfa4u); M32(m_) = (u32)(ecx); }
  /* 00567bf5 mov dword ptr [edx + 0xfa8], ecx */ { const u32 m_ = (u32)(edx + 0xfa8u); M32(m_) = (u32)(ecx); }
  /* 00567bfb mov dword ptr [edx + 4], 0x566e20 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x566e20u); }
  /* 00567c02 mov dword ptr [edx + 0x8004], 0x566e80 */ { const u32 m_ = (u32)(edx + 0x8004u); M32(m_) = (u32)(0x566e80u); }
  /* 00567c0c mov dword ptr [edx + 8], 0x566a20 */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(0x566a20u); }
  /* 00567c13 mov dword ptr [edx + 0x8008], 0x566ae0 */ { const u32 m_ = (u32)(edx + 0x8008u); M32(m_) = (u32)(0x566ae0u); }
  /* 00567c1d mov dword ptr [edx + 0xc], 0x566bb0 */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(0x566bb0u); }
  /* 00567c24 mov dword ptr [edx + 0x800c], 0x566c70 */ { const u32 m_ = (u32)(edx + 0x800cu); M32(m_) = (u32)(0x566c70u); }
  /* 00567c2e mov dword ptr [edx + 0x10], 0x566d20 */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(0x566d20u); }
  /* 00567c35 mov dword ptr [edx + 0x8010], 0x566db0 */ { const u32 m_ = (u32)(edx + 0x8010u); M32(m_) = (u32)(0x566db0u); }
  /* 00567c3f mov dword ptr [edx + 0x14], 0x566e20 */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(0x566e20u); }
  /* 00567c46 mov dword ptr [edx + 0x8014], 0x566e80 */ { const u32 m_ = (u32)(edx + 0x8014u); M32(m_) = (u32)(0x566e80u); }
  /* 00567c50 mov dword ptr [edx + 0x18], 0x566ed0 */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(0x566ed0u); }
  /* 00567c57 mov dword ptr [edx + 0x8018], 0x566fa0 */ { const u32 m_ = (u32)(edx + 0x8018u); M32(m_) = (u32)(0x566fa0u); }
  /* 00567c61 mov dword ptr [edx + 0x2c], 0x567140 */ { const u32 m_ = (u32)(edx + 0x2cu); M32(m_) = (u32)(0x567140u); }
  /* 00567c68 mov dword ptr [edx + 0x802c], 0x567170 */ { const u32 m_ = (u32)(edx + 0x802cu); M32(m_) = (u32)(0x567170u); }
  /* 00567c72 mov dword ptr [edx + 0x30], 0x5671a0 */ { const u32 m_ = (u32)(edx + 0x30u); M32(m_) = (u32)(0x5671a0u); }
  /* 00567c79 mov dword ptr [edx + 0x8030], 0x567210 */ { const u32 m_ = (u32)(edx + 0x8030u); M32(m_) = (u32)(0x567210u); }
  /* 00567c83 mov dword ptr [edx + 0x34], 0x567270 */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(0x567270u); }
  /* 00567c8a mov dword ptr [edx + 0x8034], 0x5672a0 */ { const u32 m_ = (u32)(edx + 0x8034u); M32(m_) = (u32)(0x5672a0u); }
  /* 00567c94 mov dword ptr [edx + 0x38], 0x567350 */ { const u32 m_ = (u32)(edx + 0x38u); M32(m_) = (u32)(0x567350u); }
  /* 00567c9b mov dword ptr [edx + 0x8038], 0x5673a0 */ { const u32 m_ = (u32)(edx + 0x8038u); M32(m_) = (u32)(0x5673a0u); }
  /* 00567ca5 mov dword ptr [edx + 0x190], 0x5673e0 */ { const u32 m_ = (u32)(edx + 0x190u); M32(m_) = (u32)(0x5673e0u); }
  /* 00567caf mov dword ptr [edx + 0x8190], 0x567430 */ { const u32 m_ = (u32)(edx + 0x8190u); M32(m_) = (u32)(0x567430u); }
  /* 00567cb9 mov dword ptr [edx + 0x194], 0x5673e0 */ { const u32 m_ = (u32)(edx + 0x194u); M32(m_) = (u32)(0x5673e0u); }
  /* 00567cc3 mov dword ptr [edx + 0x8194], 0x567430 */ { const u32 m_ = (u32)(edx + 0x8194u); M32(m_) = (u32)(0x567430u); }
  /* 00567ccd mov dword ptr [edx + 0x198], 0x567470 */ { const u32 m_ = (u32)(edx + 0x198u); M32(m_) = (u32)(0x567470u); }
  /* 00567cd7 mov dword ptr [edx + 0x8198], 0x5674d0 */ { const u32 m_ = (u32)(edx + 0x8198u); M32(m_) = (u32)(0x5674d0u); }
  /* 00567ce1 mov dword ptr [edx + 0x1b8], 0x567520 */ { const u32 m_ = (u32)(edx + 0x1b8u); M32(m_) = (u32)(0x567520u); }
  /* 00567ceb mov dword ptr [edx + 0x81b8], 0x5675a0 */ { const u32 m_ = (u32)(edx + 0x81b8u); M32(m_) = (u32)(0x5675a0u); }
  /* 00567cf5 mov dword ptr [edx + 0x1bc], 0x567600 */ { const u32 m_ = (u32)(edx + 0x1bcu); M32(m_) = (u32)(0x567600u); }
  /* 00567cff mov dword ptr [edx + 0x81bc], 0x567640 */ { const u32 m_ = (u32)(edx + 0x81bcu); M32(m_) = (u32)(0x567640u); }
  /* 00567d09 mov dword ptr [edx + 0x1c0], 0x567680 */ { const u32 m_ = (u32)(edx + 0x1c0u); M32(m_) = (u32)(0x567680u); }
  /* 00567d13 mov dword ptr [edx + 0x81c0], 0x5676f0 */ { const u32 m_ = (u32)(edx + 0x81c0u); M32(m_) = (u32)(0x5676f0u); }
  /* 00567d1d mov dword ptr [edx + 0x1e4], 0x567750 */ { const u32 m_ = (u32)(edx + 0x1e4u); M32(m_) = (u32)(0x567750u); }
  /* 00567d27 mov dword ptr [edx + 0x81e4], 0x5677b0 */ { const u32 m_ = (u32)(edx + 0x81e4u); M32(m_) = (u32)(0x5677b0u); }
  /* 00567d31 mov dword ptr [edx + 0x1e8], 0x567810 */ { const u32 m_ = (u32)(edx + 0x1e8u); M32(m_) = (u32)(0x567810u); }
  /* 00567d3b mov dword ptr [edx + 0x81e8], 0x567890 */ { const u32 m_ = (u32)(edx + 0x81e8u); M32(m_) = (u32)(0x567890u); }
  /* 00567d45 mov dword ptr [edx + 0x1ec], 0x567900 */ { const u32 m_ = (u32)(edx + 0x1ecu); M32(m_) = (u32)(0x567900u); }
  /* 00567d4f mov dword ptr [edx + 0x81ec], 0x567990 */ { const u32 m_ = (u32)(edx + 0x81ecu); M32(m_) = (u32)(0x567990u); }
  /* 00567d59 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00567d5b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567d5c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00567d60(CPU *c) {
  NATIVE_HOOK(0x567d60u) REGS; LOADALL;
L_00567d60:;
  /* 00567d60 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00567d62 mov dword ptr [eax], 0x656ce4 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x656ce4u); }
  /* 00567d68 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00567d6b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00567d6e mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00567d71 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00567d80(CPU *c) {
  NATIVE_HOOK(0x567d80u) REGS; LOADALL;
L_00567d80:;
  /* 00567d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567d83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567d84 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00567d86 call 0x567db0 */ esp -= 4; M32(esp) = 0x567d8bu; SAVEALL; F_00567db0(c); ABI_CHECK(0x567db0u, 0x567d86u); RETCHK(0x567d8bu, 0x567d86u); LOADALL;
  /* 00567d8b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00567d8f je 0x567d9a */ if (ZF_) goto L_00567d9a;
  /* 00567d91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567d92 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x567d97u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x567d92u); RETCHK(0x567d97u, 0x567d92u); LOADALL;
  /* 00567d97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00567d9a:;
  /* 00567d9a mov eax, esi */ { eax = (u32)(esi); }
  /* 00567d9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567d9d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567d9e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567db0(CPU *c) {
  NATIVE_HOOK(0x567db0u) REGS; LOADALL;
L_00567db0:;
  /* 00567db0 mov dword ptr [ecx], 0x656ce4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656ce4u); }
  /* 00567db6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00567dc0(CPU *c) {
  NATIVE_HOOK(0x567dc0u) REGS; LOADALL;
L_00567dc0:;
  /* 00567dc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567dc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567dc3 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00567dc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00567dc7 mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00567dca lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 00567dcd cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567dcf jle 0x567dd9 */ if ((ZF_|LT_)) goto L_00567dd9;
  /* 00567dd1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567dd4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567dd5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567dd6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567dd9:;
  /* 00567dd9 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 00567ddc mov bl, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00567ddf mov byte ptr [ecx + edx], bl */ { const u32 m_ = (u32)(ecx + edx); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00567de2 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00567de5 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00567de6 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00567de9 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00567deb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00567dec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567ded ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567df0(CPU *c) {
  NATIVE_HOOK(0x567df0u) REGS; LOADALL;
L_00567df0:;
  /* 00567df0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567df1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567df3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567df6 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00567df9 add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00567dfc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567dfe jle 0x567e07 */ if ((ZF_|LT_)) goto L_00567e07;
  /* 00567e00 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567e03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567e04 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567e07:;
  /* 00567e07 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00567e0a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567e0b call 0x5f13b0 */ esp -= 4; M32(esp) = 0x567e10u; SAVEALL; F_005f13b0(c); ABI_CHECK(0x5f13b0u, 0x567e0bu); RETCHK(0x567e10u, 0x567e0bu); LOADALL;
  /* 00567e10 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00567e13 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00567e16 mov word ptr [edx + ecx], ax */ { const u32 m_ = (u32)(edx + ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00567e1a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567e1d add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00567e20 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00567e23 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567e24 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567e30(CPU *c) {
  NATIVE_HOOK(0x567e30u) REGS; LOADALL;
L_00567e30:;
  /* 00567e30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567e31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567e33 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567e36 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00567e39 lea ecx, [eax + 2] */ ecx = (u32)((u32)(eax + 0x2u));
  /* 00567e3c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567e3e jle 0x567e47 */ if ((ZF_|LT_)) goto L_00567e47;
  /* 00567e40 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567e43 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567e44 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567e47:;
  /* 00567e47 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00567e4a movzx eax, word ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M16(m_)); }
  /* 00567e4e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567e4f call 0x5f13d4 */ esp -= 4; M32(esp) = 0x567e54u; SAVEALL; F_005f13d4(c); ABI_CHECK(0x5f13d4u, 0x567e4fu); RETCHK(0x567e54u, 0x567e4fu); LOADALL;
  /* 00567e54 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00567e57 mov word ptr [ecx], ax */ { const u32 m_ = (u32)(ecx); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00567e5a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567e5d add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00567e60 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00567e63 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567e64 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567e70(CPU *c) {
  NATIVE_HOOK(0x567e70u) REGS; LOADALL;
L_00567e70:;
  /* 00567e70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567e71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567e73 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567e76 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00567e79 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00567e7c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567e7e jle 0x567e87 */ if ((ZF_|LT_)) goto L_00567e87;
  /* 00567e80 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567e83 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567e84 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567e87:;
  /* 00567e87 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00567e8a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567e8b call 0x5f1386 */ esp -= 4; M32(esp) = 0x567e90u; SAVEALL; F_005f1386(c); ABI_CHECK(0x5f1386u, 0x567e8bu); RETCHK(0x567e90u, 0x567e8bu); LOADALL;
  /* 00567e90 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00567e93 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00567e96 mov dword ptr [edx + ecx], eax */ { const u32 m_ = (u32)(edx + ecx); M32(m_) = (u32)(eax); }
  /* 00567e99 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567e9c add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00567e9f mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00567ea2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567ea3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567eb0(CPU *c) {
  NATIVE_HOOK(0x567eb0u) REGS; LOADALL;
L_00567eb0:;
  /* 00567eb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567eb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567eb3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567eb6 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00567eb9 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00567ebc cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567ebe jle 0x567ec7 */ if ((ZF_|LT_)) goto L_00567ec7;
  /* 00567ec0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567ec3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567ec4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567ec7:;
  /* 00567ec7 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00567eca mov eax, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); eax = (u32)(M32(m_)); }
  /* 00567ecd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567ece call 0x5f13da */ esp -= 4; M32(esp) = 0x567ed3u; SAVEALL; F_005f13da(c); ABI_CHECK(0x5f13dau, 0x567eceu); RETCHK(0x567ed3u, 0x567eceu); LOADALL;
  /* 00567ed3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00567ed6 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00567ed8 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567edb add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00567ede mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00567ee1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567ee2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567ef0(CPU *c) {
  NATIVE_HOOK(0x567ef0u) REGS; LOADALL;
L_00567ef0:;
  /* 00567ef0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567ef1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567ef3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567ef4 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00567ef7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567ef8 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00567ef9 call 0x568360 */ esp -= 4; M32(esp) = 0x567efeu; SAVEALL; F_00568360(c); ABI_CHECK(0x568360u, 0x567ef9u); RETCHK(0x567efeu, 0x567ef9u); LOADALL;
  /* 00567efe mov edi, eax */ { edi = (u32)(eax); }
  /* 00567f00 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567f03 lea ecx, [eax + edi + 2] */ ecx = (u32)((u32)(eax + edi + 0x2u));
  /* 00567f07 cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567f0a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00567f0d jle 0x567f19 */ if ((ZF_|LT_)) goto L_00567f19;
  /* 00567f0f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567f12 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567f13 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567f15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567f16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567f19:;
  /* 00567f19 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567f1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567f1b mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00567f1d call 0x567df0 */ esp -= 4; M32(esp) = 0x567f22u; SAVEALL; F_00567df0(c); ABI_CHECK(0x567df0u, 0x567f1du); RETCHK(0x567f22u, 0x567f1du); LOADALL;
  /* 00567f22 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567f25 jne 0x567f31 */ if (!ZF_) goto L_00567f31;
  /* 00567f27 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567f28 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567f2a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567f2b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567f2d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567f2e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00567f31:;
  /* 00567f31 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00567f34 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00567f37 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00567f3a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00567f3c mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00567f3f add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00567f41 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00567f43 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00567f46 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00567f48 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00567f4a and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00567f4d rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00567f4f mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00567f52 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00567f54 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567f55 mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00567f58 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00567f5a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567f5b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567f5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567f5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00567f70(CPU *c) {
  NATIVE_HOOK(0x567f70u) REGS; LOADALL;
L_00567f70:;
  /* 00567f70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567f71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567f73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00567f74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00567f75 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00567f78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00567f79 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00567f7b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00567f82 call 0x567e30 */ esp -= 4; M32(esp) = 0x567f87u; SAVEALL; F_00567e30(c); ABI_CHECK(0x567e30u, 0x567f82u); RETCHK(0x567f87u, 0x567f82u); LOADALL;
  /* 00567f87 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567f8a je 0x567fa7 */ if (ZF_) goto L_00567fa7;
  /* 00567f8c movzx eax, word ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 00567f90 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00567f93 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00567f96 lea ecx, [edx + eax] */ ecx = (u32)((u32)(edx + eax));
  /* 00567f99 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567f9b jg 0x567fa7 */ if (!(ZF_|LT_)) goto L_00567fa7;
  /* 00567f9d mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00567fa0 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 00567fa3 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00567fa5 jle 0x567fb1 */ if ((ZF_|LT_)) goto L_00567fb1;
L_00567fa7:;
  /* 00567fa7 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00567faa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567fab mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567fad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567fae ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00567fb1:;
  /* 00567fb1 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00567fb4 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00567fb6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567fb7 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00567fba mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00567fbc mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00567fbe shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00567fc1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00567fc3 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00567fc5 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00567fc8 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00567fca mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00567fcd mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 00567fd1 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00567fd4 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00567fd6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00567fd7 mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00567fda mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00567fdc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00567fdd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00567fdf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00567fe0 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00567ff0(CPU *c) {
  NATIVE_HOOK(0x567ff0u) REGS; LOADALL;
L_00567ff0:;
  /* 00567ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00567ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00567ff3 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00567ff6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00567ff7 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00567ffa lea ecx, [edi + eax + 2] */ ecx = (u32)((u32)(edi + eax + 0x2u));
  /* 00567ffe cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568001 jle 0x56800b */ if ((ZF_|LT_)) goto L_0056800b;
  /* 00568003 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568006 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00568007 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568008 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0056800b:;
  /* 0056800b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056800c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056800d mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0056800f call 0x567df0 */ esp -= 4; M32(esp) = 0x568014u; SAVEALL; F_00567df0(c); ABI_CHECK(0x567df0u, 0x56800fu); RETCHK(0x568014u, 0x56800fu); LOADALL;
  /* 00568014 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568017 jne 0x568021 */ if (!ZF_) goto L_00568021;
  /* 00568019 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056801a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056801c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056801d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056801e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00568021:;
  /* 00568021 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00568024 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00568027 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056802a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056802c mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0056802f add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00568031 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00568033 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00568036 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00568038 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0056803a and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056803d rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056803f mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568042 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00568044 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568045 mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00568048 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0056804a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056804b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056804c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00568050(CPU *c) {
  NATIVE_HOOK(0x568050u) REGS; LOADALL;
L_00568050:;
  /* 00568050 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568051 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568053 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568054 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568055 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00568058 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568059 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0056805b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00568062 call 0x567e30 */ esp -= 4; M32(esp) = 0x568067u; SAVEALL; F_00567e30(c); ABI_CHECK(0x567e30u, 0x568062u); RETCHK(0x568067u, 0x568062u); LOADALL;
  /* 00568067 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056806a je 0x568084 */ if (ZF_) goto L_00568084;
  /* 0056806c movzx eax, word ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 00568070 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 00568073 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00568076 lea ecx, [edx + eax] */ ecx = (u32)((u32)(edx + eax));
  /* 00568079 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056807b jg 0x568084 */ if (!(ZF_|LT_)) goto L_00568084;
  /* 0056807d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568080 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568082 jle 0x56808e */ if ((ZF_|LT_)) goto L_0056808e;
L_00568084:;
  /* 00568084 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568087 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568088 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056808a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056808b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0056808e:;
  /* 0056808e mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00568091 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00568093 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568094 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00568097 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00568099 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0056809b shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0056809e rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005680a0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005680a2 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005680a5 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005680a7 add dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005680aa mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005680ad pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005680ae mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005680b0 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005680b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005680b4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005680b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005680b7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005680c0(CPU *c) {
  NATIVE_HOOK(0x5680c0u) REGS; LOADALL;
L_005680c0:;
  /* 005680c0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005680c2 mov dword ptr [eax], 0x656ce0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x656ce0u); }
  /* 005680c8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005680cb mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005680ce mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005680d1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005680e0(CPU *c) {
  NATIVE_HOOK(0x5680e0u) REGS; LOADALL;
L_005680e0:;
  /* 005680e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005680e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005680e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005680e4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005680e6 call 0x568110 */ esp -= 4; M32(esp) = 0x5680ebu; SAVEALL; F_00568110(c); ABI_CHECK(0x568110u, 0x5680e6u); RETCHK(0x5680ebu, 0x5680e6u); LOADALL;
  /* 005680eb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005680ef je 0x5680fa */ if (ZF_) goto L_005680fa;
  /* 005680f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005680f2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5680f7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5680f2u); RETCHK(0x5680f7u, 0x5680f2u); LOADALL;
  /* 005680f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005680fa:;
  /* 005680fa mov eax, esi */ { eax = (u32)(esi); }
  /* 005680fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005680fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005680fe ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568110(CPU *c) {
  NATIVE_HOOK(0x568110u) REGS; LOADALL;
L_00568110:;
  /* 00568110 mov dword ptr [ecx], 0x656ce0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656ce0u); }
  /* 00568116 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568120(CPU *c) {
  NATIVE_HOOK(0x568120u) REGS; LOADALL;
L_00568120:;
  /* 00568120 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00568123 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 00568126 mov dword ptr [eax + 0xc], 0 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0056812d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568130(CPU *c) {
  NATIVE_HOOK(0x568130u) REGS; LOADALL;
L_00568130:;
  /* 00568130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568133 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568136 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568137 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056813a lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0056813d cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056813f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568140 jle 0x568149 */ if ((ZF_|LT_)) goto L_00568149;
  /* 00568142 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568145 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568146 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00568149:;
  /* 00568149 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056814c mov cl, byte ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056814f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00568152 mov byte ptr [edx], cl */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00568154 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568157 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00568158 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0056815b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0056815d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056815e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568170(CPU *c) {
  NATIVE_HOOK(0x568170u) REGS; LOADALL;
L_00568170:;
  /* 00568170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568173 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568176 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568177 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056817a lea edx, [ecx + 2] */ edx = (u32)((u32)(ecx + 0x2u));
  /* 0056817d cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056817f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568180 jle 0x568189 */ if ((ZF_|LT_)) goto L_00568189;
  /* 00568182 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568185 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568186 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00568189:;
  /* 00568189 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056818c mov cx, word ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00568190 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00568193 mov word ptr [edx], cx */ { const u32 m_ = (u32)(edx); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 00568196 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568199 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056819c mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0056819f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005681a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005681a2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005681b0(CPU *c) {
  NATIVE_HOOK(0x5681b0u) REGS; LOADALL;
L_005681b0:;
  /* 005681b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005681b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005681b3 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005681b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005681b7 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 005681ba lea edx, [ecx + 2] */ edx = (u32)((u32)(ecx + 0x2u));
  /* 005681bd cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005681bf jle 0x5681c9 */ if ((ZF_|LT_)) goto L_005681c9;
  /* 005681c1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005681c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005681c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005681c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005681c9:;
  /* 005681c9 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 005681cc mov si, word ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (esi & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 005681d0 mov word ptr [ecx + edx], si */ { const u32 m_ = (u32)(ecx + edx); M16(m_) = (u16)((esi & 0xffffu)); }
  /* 005681d4 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005681d7 add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005681da mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005681dd mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005681df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005681e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005681e1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005681f0(CPU *c) {
  NATIVE_HOOK(0x5681f0u) REGS; LOADALL;
L_005681f0:;
  /* 005681f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005681f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005681f3 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005681f6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005681f7 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 005681fa lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 005681fd cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005681ff jle 0x568209 */ if ((ZF_|LT_)) goto L_00568209;
  /* 00568201 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568204 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568205 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568206 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00568209:;
  /* 00568209 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056820c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056820f mov dword ptr [ecx + edx], esi */ { const u32 m_ = (u32)(ecx + edx); M32(m_) = (u32)(esi); }
  /* 00568212 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568215 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00568218 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0056821b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0056821d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056821e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056821f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568230(CPU *c) {
  NATIVE_HOOK(0x568230u) REGS; LOADALL;
L_00568230:;
  /* 00568230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568233 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568236 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568237 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056823a lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 0056823d cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056823f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568240 jle 0x568249 */ if ((ZF_|LT_)) goto L_00568249;
  /* 00568242 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568245 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568246 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00568249:;
  /* 00568249 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056824c mov ecx, dword ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); ecx = (u32)(M32(m_)); }
  /* 0056824f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00568252 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00568254 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568257 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056825a mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0056825d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0056825f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568260 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568270(CPU *c) {
  NATIVE_HOOK(0x568270u) REGS; LOADALL;
L_00568270:;
  /* 00568270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568273 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568274 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568275 mov esi, eax */ { esi = (u32)(eax); }
  /* 00568277 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568278 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00568279 mov edx, esi */ { edx = (u32)(esi); }
  /* 0056827b call 0x568360 */ esp -= 4; M32(esp) = 0x568280u; SAVEALL; F_00568360(c); ABI_CHECK(0x568360u, 0x56827bu); RETCHK(0x568280u, 0x56827bu); LOADALL;
  /* 00568280 mov edi, eax */ { edi = (u32)(eax); }
  /* 00568282 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00568285 lea ecx, [eax + edi + 2] */ ecx = (u32)((u32)(eax + edi + 0x2u));
  /* 00568289 cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056828c mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0056828f jg 0x56829e */ if (!(ZF_|LT_)) goto L_0056829e;
  /* 00568291 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568292 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00568294 call 0x5681b0 */ esp -= 4; M32(esp) = 0x568299u; SAVEALL; F_005681b0(c); ABI_CHECK(0x5681b0u, 0x568294u); RETCHK(0x568299u, 0x568294u); LOADALL;
  /* 00568299 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056829c jne 0x5682a7 */ if (!ZF_) goto L_005682a7;
L_0056829e:;
  /* 0056829e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056829f or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005682a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005682a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005682a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005682a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005682a7:;
  /* 005682a7 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005682aa mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005682ad mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005682af mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005682b2 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005682b4 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005682b6 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005682b9 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005682bb mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005682bd and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005682c0 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005682c2 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005682c5 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005682c7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005682c8 mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005682cb mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005682cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005682ce mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005682d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005682d1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005682e0(CPU *c) {
  NATIVE_HOOK(0x5682e0u) REGS; LOADALL;
L_005682e0:;
  /* 005682e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005682e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005682e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005682e4 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005682e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005682e8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005682ea mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005682f1 call 0x568170 */ esp -= 4; M32(esp) = 0x5682f6u; SAVEALL; F_00568170(c); ABI_CHECK(0x568170u, 0x5682f1u); RETCHK(0x5682f6u, 0x5682f1u); LOADALL;
  /* 005682f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005682f9 jne 0x568303 */ if (!ZF_) goto L_00568303;
  /* 005682fb or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005682fd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005682ff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568300 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00568303:;
  /* 00568303 movzx eax, word ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 00568307 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056830a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056830b mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056830e lea ecx, [edx + eax] */ ecx = (u32)((u32)(edx + eax));
  /* 00568311 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568313 jle 0x56831f */ if ((ZF_|LT_)) goto L_0056831f;
L_00568315:;
  /* 00568315 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568318 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568319 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056831b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056831c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0056831f:;
  /* 0056831f mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00568322 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 00568325 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568327 jg 0x568315 */ if (!(ZF_|LT_)) goto L_00568315;
  /* 00568329 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056832c add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056832e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056832f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00568332 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00568334 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00568336 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00568339 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056833b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0056833d and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00568340 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00568342 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00568345 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 00568349 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056834c add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056834e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056834f mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00568352 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00568354 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568355 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00568357 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568358 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00568360(CPU *c) {
  NATIVE_HOOK(0x568360u) REGS; LOADALL;
L_00568360:;
  /* 00568360 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568362 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568364 jle 0x568371 */ if ((ZF_|LT_)) goto L_00568371;
L_00568366:;
  /* 00568366 cmp byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056836a je 0x568373 */ if (ZF_) goto L_00568373;
  /* 0056836c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056836d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056836f jl 0x568366 */ if (LT_) goto L_00568366;
L_00568371:;
  /* 00568371 mov eax, ecx */ { eax = (u32)(ecx); }
L_00568373:;
  /* 00568373 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568380(CPU *c) {
  NATIVE_HOOK(0x568380u) REGS; LOADALL;
L_00568380:;
  /* 00568380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568383 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 00568386 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568387 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0056838a lea ecx, [esi + eax + 2] */ ecx = (u32)((u32)(esi + eax + 0x2u));
  /* 0056838e cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568391 jg 0x5683a0 */ if (!(ZF_|LT_)) goto L_005683a0;
  /* 00568393 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568394 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00568396 call 0x5681b0 */ esp -= 4; M32(esp) = 0x56839bu; SAVEALL; F_005681b0(c); ABI_CHECK(0x5681b0u, 0x568396u); RETCHK(0x56839bu, 0x568396u); LOADALL;
  /* 0056839b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056839e jne 0x5683a8 */ if (!ZF_) goto L_005683a8;
L_005683a0:;
  /* 005683a0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005683a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005683a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005683a5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_005683a8:;
  /* 005683a8 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005683ab mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005683ae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005683af mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 005683b2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005683b4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005683b7 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005683b9 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005683bb shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005683be rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005683c0 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005683c2 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005683c5 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005683c7 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005683ca add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005683cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005683cd mov dword ptr [ebx + 0xc], ecx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 005683d0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005683d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005683d3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005683d4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005683e0(CPU *c) {
  NATIVE_HOOK(0x5683e0u) REGS; LOADALL;
L_005683e0:;
  /* 005683e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005683e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005683e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005683e4 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005683e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005683e8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005683ea mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005683f1 call 0x568170 */ esp -= 4; M32(esp) = 0x5683f6u; SAVEALL; F_00568170(c); ABI_CHECK(0x568170u, 0x5683f1u); RETCHK(0x5683f6u, 0x5683f1u); LOADALL;
  /* 005683f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005683f9 jne 0x568403 */ if (!ZF_) goto L_00568403;
  /* 005683fb or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005683fd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005683ff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568400 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00568403:;
  /* 00568403 movzx eax, word ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M16(m_)); }
  /* 00568407 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056840a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056840b mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056840e lea ecx, [edx + eax] */ ecx = (u32)((u32)(edx + eax));
  /* 00568411 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568413 jle 0x56841f */ if ((ZF_|LT_)) goto L_0056841f;
L_00568415:;
  /* 00568415 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568418 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568419 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056841b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056841c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0056841f:;
  /* 0056841f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568422 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568424 jg 0x568415 */ if (!(ZF_|LT_)) goto L_00568415;
  /* 00568426 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00568429 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056842b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056842c mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056842f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00568431 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00568433 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00568436 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00568438 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0056843a and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056843d rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056843f add dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00568442 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568445 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00568446 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00568448 mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056844b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056844c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056844e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056844f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00568460(CPU *c) {
  NATIVE_HOOK(0x568460u) REGS; LOADALL;
L_00568460:;
  /* 00568460 mov cl, byte ptr [0x9b9198] */ { const u32 m_ = (u32)(0x9b9198u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00568466 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056846b test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056846d jne 0x568494 */ if (!ZF_) goto L_00568494;
  /* 0056846f mov edx, dword ptr [0x9b9198] */ { const u32 m_ = (u32)(0x9b9198u); edx = (u32)(M32(m_)); }
  /* 00568475 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00568477 mov eax, 0x9b9194 */ { eax = (u32)(0x9b9194u); }
  /* 0056847c mov dword ptr [0x9b9198], edx */ { const u32 m_ = (u32)(0x9b9198u); M32(m_) = (u32)(edx); }
  /* 00568482 call 0x5684a0 */ esp -= 4; M32(esp) = 0x568487u; SAVEALL; F_005684a0(c); ABI_CHECK(0x5684a0u, 0x568482u); RETCHK(0x568487u, 0x568482u); LOADALL;
  /* 00568487 push 0x62c9d0 */ { u32 v_ = 0x62c9d0u; esp -= 4; M32(esp) = v_; }
  /* 0056848c call 0x5fe916 */ esp -= 4; M32(esp) = 0x568491u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x56848cu); RETCHK(0x568491u, 0x56848cu); LOADALL;
  /* 00568491 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568494:;
  /* 00568494 mov eax, 0x9b9194 */ { eax = (u32)(0x9b9194u); }
  /* 00568499 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005684a0(CPU *c) {
  NATIVE_HOOK(0x5684a0u) REGS; LOADALL;
L_005684a0:;
  /* 005684a0 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 005684a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005684b0(CPU *c) {
  NATIVE_HOOK(0x5684b0u) REGS; LOADALL;
L_005684b0:;
  /* 005684b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005684b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005684b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005684b5 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 005684ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005684c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005684c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005684c8 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005684ce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005684d3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005684d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005684d7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005684d9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005684db mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005684e1 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 005684e6 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 005684ec rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005684ee stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 005684f0 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 005684f1 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005684f7 call 0x5680c0 */ esp -= 4; M32(esp) = 0x5684fcu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x5684f7u); RETCHK(0x5684fcu, 0x5684f7u); LOADALL;
  /* 005684fc mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005684ff mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 00568504 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0056850a call 0x568120 */ esp -= 4; M32(esp) = 0x56850fu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x56850au); RETCHK(0x56850fu, 0x56850au); LOADALL;
  /* 0056850f push 0x1000016a */ { u32 v_ = 0x1000016au; esp -= 4; M32(esp) = v_; }
  /* 00568514 call 0x5681f0 */ esp -= 4; M32(esp) = 0x568519u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568514u); RETCHK(0x568519u, 0x568514u); LOADALL;
  /* 00568519 call 0x568ab0 */ esp -= 4; M32(esp) = 0x56851eu; SAVEALL; F_00568ab0(c); ABI_CHECK(0x568ab0u, 0x568519u); RETCHK(0x56851eu, 0x568519u); LOADALL;
  /* 0056851e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056851f lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00568525 call 0x5681f0 */ esp -= 4; M32(esp) = 0x56852au; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568525u); RETCHK(0x56852au, 0x568525u); LOADALL;
  /* 0056852a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056852d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056852e lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00568534 call 0x5681f0 */ esp -= 4; M32(esp) = 0x568539u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568534u); RETCHK(0x568539u, 0x568534u); LOADALL;
  /* 00568539 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056853c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056853d lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00568543 call 0x5681f0 */ esp -= 4; M32(esp) = 0x568548u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568543u); RETCHK(0x568548u, 0x568543u); LOADALL;
  /* 00568548 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0056854e call 0x464860 */ esp -= 4; M32(esp) = 0x568553u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x56854eu); RETCHK(0x568553u, 0x56854eu); LOADALL;
  /* 00568553 mov edx, eax */ { edx = (u32)(eax); }
  /* 00568555 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0056855b call 0x4648e0 */ esp -= 4; M32(esp) = 0x568560u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x56855bu); RETCHK(0x568560u, 0x56855bu); LOADALL;
  /* 00568560 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00568566 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0056856b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056856c call 0x565810 */ esp -= 4; M32(esp) = 0x568571u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x56856cu); RETCHK(0x568571u, 0x56856cu); LOADALL;
  /* 00568571 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00568574 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056857b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0056857e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00568580 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00568581 call 0x61af31 */ esp -= 4; M32(esp) = 0x568586u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x568581u); RETCHK(0x568586u, 0x568581u); LOADALL;
  /* 00568586 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00568588 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568589 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00568590(CPU *c) {
  NATIVE_HOOK(0x568590u) REGS; LOADALL;
L_00568590:;
  /* 00568590 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568591 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568593 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00568595 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 0056859a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005685a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005685a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005685a8 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005685ae mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005685b3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005685b6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005685b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005685b9 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005685bb mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005685c1 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 005685c6 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 005685cc rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005685ce stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 005685d0 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 005685d1 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005685d7 call 0x5680c0 */ esp -= 4; M32(esp) = 0x5685dcu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x5685d7u); RETCHK(0x5685dcu, 0x5685d7u); LOADALL;
  /* 005685dc mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005685df mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 005685e4 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 005685ea call 0x568120 */ esp -= 4; M32(esp) = 0x5685efu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x5685eau); RETCHK(0x5685efu, 0x5685eau); LOADALL;
  /* 005685ef push 0x1000016c */ { u32 v_ = 0x1000016cu; esp -= 4; M32(esp) = v_; }
  /* 005685f4 call 0x5681f0 */ esp -= 4; M32(esp) = 0x5685f9u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x5685f4u); RETCHK(0x5685f9u, 0x5685f4u); LOADALL;
  /* 005685f9 call 0x568ab0 */ esp -= 4; M32(esp) = 0x5685feu; SAVEALL; F_00568ab0(c); ABI_CHECK(0x568ab0u, 0x5685f9u); RETCHK(0x5685feu, 0x5685f9u); LOADALL;
  /* 005685fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005685ff lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00568605 call 0x5681f0 */ esp -= 4; M32(esp) = 0x56860au; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568605u); RETCHK(0x56860au, 0x568605u); LOADALL;
  /* 0056860a mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056860d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056860e lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00568614 call 0x5681f0 */ esp -= 4; M32(esp) = 0x568619u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568614u); RETCHK(0x568619u, 0x568614u); LOADALL;
  /* 00568619 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0056861f call 0x464860 */ esp -= 4; M32(esp) = 0x568624u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x56861fu); RETCHK(0x568624u, 0x56861fu); LOADALL;
  /* 00568624 mov edx, eax */ { edx = (u32)(eax); }
  /* 00568626 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 0056862c call 0x4648e0 */ esp -= 4; M32(esp) = 0x568631u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x56862cu); RETCHK(0x568631u, 0x56862cu); LOADALL;
  /* 00568631 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 00568637 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0056863c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056863d call 0x565810 */ esp -= 4; M32(esp) = 0x568642u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x56863du); RETCHK(0x568642u, 0x56863du); LOADALL;
  /* 00568642 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00568645 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056864c mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0056864f mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00568651 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00568652 call 0x61af31 */ esp -= 4; M32(esp) = 0x568657u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x568652u); RETCHK(0x568657u, 0x568652u); LOADALL;
  /* 00568657 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00568659 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056865a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00568660(CPU *c) {
  NATIVE_HOOK(0x568660u) REGS; LOADALL;
L_00568660:;
  /* 00568660 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568661 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568663 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00568665 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 0056866a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00568670 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568671 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00568678 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056867e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00568683 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00568686 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568687 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568689 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0056868b mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00568691 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 00568696 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 0056869c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0056869e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 005686a0 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 005686a1 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005686a7 call 0x5680c0 */ esp -= 4; M32(esp) = 0x5686acu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x5686a7u); RETCHK(0x5686acu, 0x5686a7u); LOADALL;
  /* 005686ac mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 005686af mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 005686b4 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 005686ba call 0x568120 */ esp -= 4; M32(esp) = 0x5686bfu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x5686bau); RETCHK(0x5686bfu, 0x5686bau); LOADALL;
  /* 005686bf push 0x1000016e */ { u32 v_ = 0x1000016eu; esp -= 4; M32(esp) = v_; }
  /* 005686c4 call 0x5681f0 */ esp -= 4; M32(esp) = 0x5686c9u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x5686c4u); RETCHK(0x5686c9u, 0x5686c4u); LOADALL;
  /* 005686c9 call 0x568ab0 */ esp -= 4; M32(esp) = 0x5686ceu; SAVEALL; F_00568ab0(c); ABI_CHECK(0x568ab0u, 0x5686c9u); RETCHK(0x5686ceu, 0x5686c9u); LOADALL;
  /* 005686ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005686cf lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005686d5 call 0x5681f0 */ esp -= 4; M32(esp) = 0x5686dau; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x5686d5u); RETCHK(0x5686dau, 0x5686d5u); LOADALL;
  /* 005686da lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005686e0 call 0x464860 */ esp -= 4; M32(esp) = 0x5686e5u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5686e0u); RETCHK(0x5686e5u, 0x5686e0u); LOADALL;
  /* 005686e5 mov edx, eax */ { edx = (u32)(eax); }
  /* 005686e7 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005686ed call 0x4648e0 */ esp -= 4; M32(esp) = 0x5686f2u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x5686edu); RETCHK(0x5686f2u, 0x5686edu); LOADALL;
  /* 005686f2 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 005686f8 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 005686fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005686fe call 0x565810 */ esp -= 4; M32(esp) = 0x568703u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x5686feu); RETCHK(0x568703u, 0x5686feu); LOADALL;
  /* 00568703 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00568706 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056870d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00568710 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00568712 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00568713 call 0x61af31 */ esp -= 4; M32(esp) = 0x568718u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x568713u); RETCHK(0x568718u, 0x568713u); LOADALL;
  /* 00568718 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056871a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056871b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568720(CPU *c) {
  NATIVE_HOOK(0x568720u) REGS; LOADALL;
L_00568720:;
  /* 00568720 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568721 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568723 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00568725 push 0x61b5eb */ { u32 v_ = 0x61b5ebu; esp -= 4; M32(esp) = v_; }
  /* 0056872a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00568730 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568731 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00568738 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056873e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00568743 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00568746 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568747 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568749 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0056874b mov byte ptr [ebp - 0x110], dl */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00568751 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 00568756 lea edi, [ebp - 0x10f] */ edi = (u32)((u32)(ebp + 0xfffffef1u));
  /* 0056875c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0056875e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00568760 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00568761 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00568767 call 0x5680c0 */ esp -= 4; M32(esp) = 0x56876cu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x568767u); RETCHK(0x56876cu, 0x568767u); LOADALL;
  /* 0056876c mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 0056876f mov edx, 0x100 */ { edx = (u32)(0x100u); }
  /* 00568774 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0056877a call 0x568120 */ esp -= 4; M32(esp) = 0x56877fu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x56877au); RETCHK(0x56877fu, 0x56877au); LOADALL;
  /* 0056877f push 0x10000170 */ { u32 v_ = 0x10000170u; esp -= 4; M32(esp) = v_; }
  /* 00568784 call 0x5681f0 */ esp -= 4; M32(esp) = 0x568789u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568784u); RETCHK(0x568789u, 0x568784u); LOADALL;
  /* 00568789 call 0x568ab0 */ esp -= 4; M32(esp) = 0x56878eu; SAVEALL; F_00568ab0(c); ABI_CHECK(0x568ab0u, 0x568789u); RETCHK(0x56878eu, 0x568789u); LOADALL;
  /* 0056878e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056878f lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00568795 call 0x5681f0 */ esp -= 4; M32(esp) = 0x56879au; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x568795u); RETCHK(0x56879au, 0x568795u); LOADALL;
  /* 0056879a lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005687a0 call 0x464860 */ esp -= 4; M32(esp) = 0x5687a5u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x5687a0u); RETCHK(0x5687a5u, 0x5687a0u); LOADALL;
  /* 005687a5 mov edx, eax */ { edx = (u32)(eax); }
  /* 005687a7 lea eax, [ebp - 0x120] */ eax = (u32)((u32)(ebp + 0xfffffee0u));
  /* 005687ad call 0x4648e0 */ esp -= 4; M32(esp) = 0x5687b2u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x5687adu); RETCHK(0x5687b2u, 0x5687adu); LOADALL;
  /* 005687b2 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 005687b8 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 005687bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005687be call 0x565810 */ esp -= 4; M32(esp) = 0x5687c3u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x5687beu); RETCHK(0x5687c3u, 0x5687beu); LOADALL;
  /* 005687c3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005687c6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005687cd mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005687d0 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005687d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005687d3 call 0x61af31 */ esp -= 4; M32(esp) = 0x5687d8u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5687d3u); RETCHK(0x5687d8u, 0x5687d3u); LOADALL;
  /* 005687d8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005687da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005687db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005687e0(CPU *c) {
  NATIVE_HOOK(0x5687e0u) REGS; LOADALL;
L_005687e0:;
  /* 005687e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005687e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005687e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005687e5 push 0x624a28 */ { u32 v_ = 0x624a28u; esp -= 4; M32(esp) = v_; }
  /* 005687ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005687f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005687f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005687f8 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005687fb lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 005687fe mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 00568805 call 0x5680c0 */ esp -= 4; M32(esp) = 0x56880au; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x568805u); RETCHK(0x56880au, 0x568805u); LOADALL;
  /* 0056880a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00568811 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568814 call 0x568120 */ esp -= 4; M32(esp) = 0x568819u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x568814u); RETCHK(0x568819u, 0x568814u); LOADALL;
  /* 00568819 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0056881c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056881d lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00568820 call 0x568230 */ esp -= 4; M32(esp) = 0x568825u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x568820u); RETCHK(0x568825u, 0x568820u); LOADALL;
  /* 00568825 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00568828 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568829 lea eax, [ebp - 0x20] */ eax = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0056882c call 0x568230 */ esp -= 4; M32(esp) = 0x568831u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x56882cu); RETCHK(0x568831u, 0x56882cu); LOADALL;
  /* 00568831 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00568834 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00568836 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568838 je 0x568843 */ if (ZF_) goto L_00568843;
  /* 0056883a mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0056883d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056883f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568840 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x568843u; SAVEALL; call_ind(c, t_); RETCHK(0x568843u, 0x568840u); LOADALL; }
L_00568843:;
  /* 00568843 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00568846 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056884d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056884f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568850 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00568860(CPU *c) {
  NATIVE_HOOK(0x568860u) REGS; LOADALL;
L_00568860:;
  /* 00568860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568863 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00568865 push 0x61b318 */ { u32 v_ = 0x61b318u; esp -= 4; M32(esp) = v_; }
  /* 0056886a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00568870 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568871 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00568878 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056887b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056887c xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0056887e lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00568881 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00568884 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00568887 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0056888a call 0x5680c0 */ esp -= 4; M32(esp) = 0x56888fu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x56888au); RETCHK(0x56888fu, 0x56888au); LOADALL;
  /* 0056888f mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00568892 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568895 call 0x568120 */ esp -= 4; M32(esp) = 0x56889au; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x568895u); RETCHK(0x56889au, 0x568895u); LOADALL;
  /* 0056889a lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0056889d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056889e lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005688a1 call 0x568230 */ esp -= 4; M32(esp) = 0x5688a6u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5688a1u); RETCHK(0x5688a6u, 0x5688a1u); LOADALL;
  /* 005688a6 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 005688a9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005688aa lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005688ad call 0x568230 */ esp -= 4; M32(esp) = 0x5688b2u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5688adu); RETCHK(0x5688b2u, 0x5688adu); LOADALL;
  /* 005688b2 lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005688b5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005688b6 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005688b9 call 0x568230 */ esp -= 4; M32(esp) = 0x5688beu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5688b9u); RETCHK(0x5688beu, 0x5688b9u); LOADALL;
  /* 005688be lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 005688c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005688c2 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005688c5 call 0x568230 */ esp -= 4; M32(esp) = 0x5688cau; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5688c5u); RETCHK(0x5688cau, 0x5688c5u); LOADALL;
  /* 005688ca lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005688cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005688ce lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005688d1 call 0x568230 */ esp -= 4; M32(esp) = 0x5688d6u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5688d1u); RETCHK(0x5688d6u, 0x5688d1u); LOADALL;
  /* 005688d6 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005688d9 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 005688db cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005688dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005688de je 0x5688f1 */ if (ZF_) goto L_005688f1;
  /* 005688e0 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 005688e3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005688e5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005688e6 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 005688e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005688ea mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 005688ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005688ee call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5688f1u; SAVEALL; call_ind(c, t_); RETCHK(0x5688f1u, 0x5688eeu); LOADALL; }
L_005688f1:;
  /* 005688f1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005688f4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005688fb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005688fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005688fe ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00568910(CPU *c) {
  NATIVE_HOOK(0x568910u) REGS; LOADALL;
L_00568910:;
  /* 00568910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568913 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00568915 push 0x61b318 */ { u32 v_ = 0x61b318u; esp -= 4; M32(esp) = v_; }
  /* 0056891a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00568920 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568921 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00568928 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056892b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0056892e mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00568935 mov dword ptr [ebp - 0x14], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xffffffffu); }
  /* 0056893c mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 00568943 call 0x5680c0 */ esp -= 4; M32(esp) = 0x568948u; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x568943u); RETCHK(0x568948u, 0x568943u); LOADALL;
  /* 00568948 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056894f mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00568952 call 0x568120 */ esp -= 4; M32(esp) = 0x568957u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x568952u); RETCHK(0x568957u, 0x568952u); LOADALL;
  /* 00568957 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 0056895a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056895b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0056895e call 0x568230 */ esp -= 4; M32(esp) = 0x568963u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x56895eu); RETCHK(0x568963u, 0x56895eu); LOADALL;
  /* 00568963 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00568966 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568967 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0056896a call 0x568230 */ esp -= 4; M32(esp) = 0x56896fu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x56896au); RETCHK(0x56896fu, 0x56896au); LOADALL;
  /* 0056896f lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00568972 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568973 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00568976 call 0x568230 */ esp -= 4; M32(esp) = 0x56897bu; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x568976u); RETCHK(0x56897bu, 0x568976u); LOADALL;
  /* 0056897b lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 0056897e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056897f lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00568982 call 0x568230 */ esp -= 4; M32(esp) = 0x568987u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x568982u); RETCHK(0x568987u, 0x568982u); LOADALL;
  /* 00568987 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0056898a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056898b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0056898e call 0x568230 */ esp -= 4; M32(esp) = 0x568993u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x56898eu); RETCHK(0x568993u, 0x56898eu); LOADALL;
  /* 00568993 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00568996 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00568998 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056899a je 0x5689ad */ if (ZF_) goto L_005689ad;
  /* 0056899c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0056899f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005689a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005689a2 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 005689a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005689a6 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 005689a9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005689aa call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5689adu; SAVEALL; call_ind(c, t_); RETCHK(0x5689adu, 0x5689aau); LOADALL; }
L_005689ad:;
  /* 005689ad mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005689b0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005689b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005689b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005689ba ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_005689c0(CPU *c) {
  NATIVE_HOOK(0x5689c0u) REGS; LOADALL;
L_005689c0:;
  /* 005689c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005689c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005689c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005689c5 push 0x61b318 */ { u32 v_ = 0x61b318u; esp -= 4; M32(esp) = v_; }
  /* 005689ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005689d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005689d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005689d8 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005689db push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005689dc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005689de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005689df lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005689e2 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 005689e5 call 0x5680c0 */ esp -= 4; M32(esp) = 0x5689eau; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x5689e5u); RETCHK(0x5689eau, 0x5689e5u); LOADALL;
  /* 005689ea mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005689ed mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005689f0 call 0x568120 */ esp -= 4; M32(esp) = 0x5689f5u; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x5689f0u); RETCHK(0x5689f5u, 0x5689f0u); LOADALL;
  /* 005689f5 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 005689f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005689f9 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005689fc call 0x568230 */ esp -= 4; M32(esp) = 0x568a01u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5689fcu); RETCHK(0x568a01u, 0x5689fcu); LOADALL;
  /* 00568a01 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00568a04 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568a05 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00568a08 call 0x568230 */ esp -= 4; M32(esp) = 0x568a0du; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x568a08u); RETCHK(0x568a0du, 0x568a08u); LOADALL;
  /* 00568a0d lea edx, [ebp - 0x10] */ edx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00568a10 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568a11 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00568a14 call 0x568170 */ esp -= 4; M32(esp) = 0x568a19u; SAVEALL; F_00568170(c); ABI_CHECK(0x568170u, 0x568a14u); RETCHK(0x568a19u, 0x568a14u); LOADALL;
  /* 00568a19 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00568a1c cmp si, 0x400 */ { u32 a_ = (esi & 0xffffu), b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00568a21 ja 0x568a97 */ if (!(CF_|ZF_)) goto L_00568a97;
  /* 00568a23 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568a24 movzx edi, si */ { edi = (u32)((esi & 0xffffu)); }
  /* 00568a27 lea eax, [edi*8] */ eax = (u32)((u32)(edi * 8u));
  /* 00568a2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568a2f call 0x5fe9ce */ esp -= 4; M32(esp) = 0x568a34u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x568a2fu); RETCHK(0x568a34u, 0x568a2fu); LOADALL;
  /* 00568a34 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00568a37 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568a39 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00568a3c je 0x568a96 */ if (ZF_) goto L_00568a96;
  /* 00568a3e cmp si, bx */ { u32 a_ = (esi & 0xffffu), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00568a41 jbe 0x568a7a */ if ((CF_|ZF_)) goto L_00568a7a;
  /* 00568a43 mov esi, eax */ { esi = (u32)(eax); }
L_00568a45:;
  /* 00568a45 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 00568a48 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568a49 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00568a4c mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 00568a4f mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00568a52 call 0x568230 */ esp -= 4; M32(esp) = 0x568a57u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x568a52u); RETCHK(0x568a57u, 0x568a52u); LOADALL;
  /* 00568a57 lea edx, [ebp - 0x14] */ edx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00568a5a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568a5b lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00568a5e call 0x568230 */ esp -= 4; M32(esp) = 0x568a63u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x568a5eu); RETCHK(0x568a63u, 0x568a5eu); LOADALL;
  /* 00568a63 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00568a66 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00568a69 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00568a6b mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00568a6e add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00568a71 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00568a72 jne 0x568a45 */ if (!ZF_) goto L_00568a45;
  /* 00568a74 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 00568a77 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
L_00568a7a:;
  /* 00568a7a mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00568a7d mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00568a7f cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568a81 je 0x568a8d */ if (ZF_) goto L_00568a8d;
  /* 00568a83 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00568a85 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568a86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568a87 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x568a8au; SAVEALL; call_ind(c, t_); RETCHK(0x568a8au, 0x568a87u); LOADALL; }
  /* 00568a8a mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
L_00568a8d:;
  /* 00568a8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568a8e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568a93u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568a8eu); RETCHK(0x568a93u, 0x568a8eu); LOADALL;
  /* 00568a93 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568a96:;
  /* 00568a96 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00568a97:;
  /* 00568a97 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00568a9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568a9b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00568a9c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00568aa3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00568aa5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568aa6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00568ab0(CPU *c) {
  NATIVE_HOOK(0x568ab0u) REGS; LOADALL;
L_00568ab0:;
  /* 00568ab0 mov eax, dword ptr [0x9b9190] */ { const u32 m_ = (u32)(0x9b9190u); eax = (u32)(M32(m_)); }
  /* 00568ab5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00568ab6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568ab9 mov dword ptr [0x9b9190], eax */ { const u32 m_ = (u32)(0x9b9190u); M32(m_) = (u32)(eax); }
  /* 00568abe jne 0x568aca */ if (!ZF_) goto L_00568aca;
  /* 00568ac0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00568ac5 mov dword ptr [0x9b9190], eax */ { const u32 m_ = (u32)(0x9b9190u); M32(m_) = (u32)(eax); }
L_00568aca:;
  /* 00568aca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568ae0(CPU *c) {
  NATIVE_HOOK(0x568ae0u) REGS; LOADALL;
L_00568ae0:;
  /* 00568ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568ae3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00568ae7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568ae8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00568aea mov dword ptr [esi], 0x656d44 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656d44u); }
  /* 00568af0 je 0x568afb */ if (ZF_) goto L_00568afb;
  /* 00568af2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568af3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568af8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568af3u); RETCHK(0x568af8u, 0x568af3u); LOADALL;
  /* 00568af8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568afb:;
  /* 00568afb mov eax, esi */ { eax = (u32)(esi); }
  /* 00568afd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568afe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568aff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568b10(CPU *c) {
  NATIVE_HOOK(0x568b10u) REGS; LOADALL;
L_00568b10:;
  /* 00568b10 mov eax, 0x3135 */ { eax = (u32)(0x3135u); }
  /* 00568b15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568b20(CPU *c) {
  NATIVE_HOOK(0x568b20u) REGS; LOADALL;
L_00568b20:;
  /* 00568b20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568b21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568b23 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00568b29 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00568b2b push 0x61d524 */ { u32 v_ = 0x61d524u; esp -= 4; M32(esp) = v_; }
  /* 00568b30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568b31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00568b38 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568b39 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00568b3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568b3d call 0x54ba60 */ esp -= 4; M32(esp) = 0x568b42u; SAVEALL; F_0054ba60(c); ABI_CHECK(0x54ba60u, 0x568b3du); RETCHK(0x568b42u, 0x568b3du); LOADALL;
  /* 00568b42 mov dword ptr [esi + 0xc4], 0x656d44 */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(0x656d44u); }
  /* 00568b4c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00568b4e mov dword ptr [esi], 0x656d00 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656d00u); }
  /* 00568b54 mov dword ptr [esi + 0xc4], 0x656ce8 */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(0x656ce8u); }
  /* 00568b5e mov dword ptr [esi + 0xc8], eax */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(eax); }
  /* 00568b64 mov dword ptr [esi + 0xcc], eax */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(eax); }
  /* 00568b6a mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 00568b70 mov dword ptr [esi + 0xd4], eax */ { const u32 m_ = (u32)(esi + 0xd4u); M32(m_) = (u32)(eax); }
  /* 00568b76 mov dword ptr [esi + 0xec], eax */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(eax); }
  /* 00568b7c mov dword ptr [esi + 0x104], eax */ { const u32 m_ = (u32)(esi + 0x104u); M32(m_) = (u32)(eax); }
  /* 00568b82 mov dword ptr [esi + 0x108], eax */ { const u32 m_ = (u32)(esi + 0x108u); M32(m_) = (u32)(eax); }
  /* 00568b88 mov dword ptr [esi + 0x10c], eax */ { const u32 m_ = (u32)(esi + 0x10cu); M32(m_) = (u32)(eax); }
  /* 00568b8e mov dword ptr [esi + 0x110], eax */ { const u32 m_ = (u32)(esi + 0x110u); M32(m_) = (u32)(eax); }
  /* 00568b94 mov dword ptr [esi + 0x114], eax */ { const u32 m_ = (u32)(esi + 0x114u); M32(m_) = (u32)(eax); }
  /* 00568b9a mov dword ptr [esi + 0x144], eax */ { const u32 m_ = (u32)(esi + 0x144u); M32(m_) = (u32)(eax); }
  /* 00568ba0 mov dword ptr [esi + 0x148], eax */ { const u32 m_ = (u32)(esi + 0x148u); M32(m_) = (u32)(eax); }
  /* 00568ba6 mov dword ptr [esi + 0x14c], eax */ { const u32 m_ = (u32)(esi + 0x14cu); M32(m_) = (u32)(eax); }
  /* 00568bac mov dword ptr [esi + 0x154], eax */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(eax); }
  /* 00568bb2 mov dword ptr [esi + 0x158], eax */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(eax); }
  /* 00568bb8 mov dword ptr [esi + 0x15c], eax */ { const u32 m_ = (u32)(esi + 0x15cu); M32(m_) = (u32)(eax); }
  /* 00568bbe mov dword ptr [esi + 0x160], eax */ { const u32 m_ = (u32)(esi + 0x160u); M32(m_) = (u32)(eax); }
  /* 00568bc4 mov dword ptr [esi + 0x164], eax */ { const u32 m_ = (u32)(esi + 0x164u); M32(m_) = (u32)(eax); }
  /* 00568bca mov dword ptr [esi + 0x168], eax */ { const u32 m_ = (u32)(esi + 0x168u); M32(m_) = (u32)(eax); }
  /* 00568bd0 mov dword ptr [esi + 0x170], eax */ { const u32 m_ = (u32)(esi + 0x170u); M32(m_) = (u32)(eax); }
  /* 00568bd6 mov dword ptr [esi + 0x174], eax */ { const u32 m_ = (u32)(esi + 0x174u); M32(m_) = (u32)(eax); }
  /* 00568bdc or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00568bdf mov dword ptr [esi + 0x16c], ecx */ { const u32 m_ = (u32)(esi + 0x16cu); M32(m_) = (u32)(ecx); }
  /* 00568be5 mov dword ptr [esi + 0x178], ecx */ { const u32 m_ = (u32)(esi + 0x178u); M32(m_) = (u32)(ecx); }
  /* 00568beb mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00568bee mov dword ptr [esi + 0xd8], eax */ { const u32 m_ = (u32)(esi + 0xd8u); M32(m_) = (u32)(eax); }
  /* 00568bf4 mov dword ptr [esi + 0xf0], eax */ { const u32 m_ = (u32)(esi + 0xf0u); M32(m_) = (u32)(eax); }
  /* 00568bfa mov dword ptr [esi + 0xdc], eax */ { const u32 m_ = (u32)(esi + 0xdcu); M32(m_) = (u32)(eax); }
  /* 00568c00 mov dword ptr [esi + 0xf4], eax */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(eax); }
  /* 00568c06 mov dword ptr [esi + 0xe0], eax */ { const u32 m_ = (u32)(esi + 0xe0u); M32(m_) = (u32)(eax); }
  /* 00568c0c mov dword ptr [esi + 0xf8], eax */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(eax); }
  /* 00568c12 mov dword ptr [esi + 0xe4], eax */ { const u32 m_ = (u32)(esi + 0xe4u); M32(m_) = (u32)(eax); }
  /* 00568c18 mov dword ptr [esi + 0xfc], eax */ { const u32 m_ = (u32)(esi + 0xfcu); M32(m_) = (u32)(eax); }
  /* 00568c1e mov dword ptr [esi + 0xe8], eax */ { const u32 m_ = (u32)(esi + 0xe8u); M32(m_) = (u32)(eax); }
  /* 00568c24 mov dword ptr [esi + 0x100], eax */ { const u32 m_ = (u32)(esi + 0x100u); M32(m_) = (u32)(eax); }
  /* 00568c2a mov eax, esi */ { eax = (u32)(esi); }
  /* 00568c2c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00568c33 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568c34 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00568c36 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568c37 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568c40(CPU *c) {
  NATIVE_HOOK(0x568c40u) REGS; LOADALL;
L_00568c40:;
  /* 00568c40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568c41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568c43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568c44 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00568c46 call 0x568c70 */ esp -= 4; M32(esp) = 0x568c4bu; SAVEALL; F_00568c70(c); ABI_CHECK(0x568c70u, 0x568c46u); RETCHK(0x568c4bu, 0x568c46u); LOADALL;
  /* 00568c4b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00568c4f je 0x568c5a */ if (ZF_) goto L_00568c5a;
  /* 00568c51 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568c52 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568c57u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568c52u); RETCHK(0x568c57u, 0x568c52u); LOADALL;
  /* 00568c57 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568c5a:;
  /* 00568c5a mov eax, esi */ { eax = (u32)(esi); }
  /* 00568c5c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568c5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568c5e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568c70(CPU *c) {
  NATIVE_HOOK(0x568c70u) REGS; LOADALL;
L_00568c70:;
  /* 00568c70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568c71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568c73 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00568c76 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00568c77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568c78 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00568c7a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568c7b mov dword ptr [esi], 0x656d00 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656d00u); }
  /* 00568c81 mov dword ptr [esi + 0xc4], 0x656ce8 */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(0x656ce8u); }
  /* 00568c8b mov edi, dword ptr [esi + 0x154] */ { const u32 m_ = (u32)(esi + 0x154u); edi = (u32)(M32(m_)); }
  /* 00568c91 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00568c93 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568c95 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00568c98 je 0x568d0b */ if (ZF_) goto L_00568d0b;
  /* 00568c9a mov eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); eax = (u32)(M32(m_)); }
  /* 00568ca0 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568ca2 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00568ca5 je 0x568cfc */ if (ZF_) goto L_00568cfc;
  /* 00568ca7 lea esi, [edi + 0x48] */ esi = (u32)((u32)(edi + 0x48u));
  /* 00568caa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00568cb0:;
  /* 00568cb0 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568cb3 jb 0x568cc1 */ if (CF_) goto L_00568cc1;
  /* 00568cb5 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00568cb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568cb9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568cbeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568cb9u); RETCHK(0x568cbeu, 0x568cb9u); LOADALL;
  /* 00568cbe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568cc1:;
  /* 00568cc1 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 00568cc7 mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00568cca mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00568ccd cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568cd1 jb 0x568cdf */ if (CF_) goto L_00568cdf;
  /* 00568cd3 mov ecx, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 00568cd6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568cd7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568cdcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568cd7u); RETCHK(0x568cdcu, 0x568cd7u); LOADALL;
  /* 00568cdc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568cdf:;
  /* 00568cdf mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00568ce2 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 00568ce9 mov dword ptr [esi - 0x20], ebx */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 00568cec mov byte ptr [esi - 0x30], bl */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00568cef add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00568cf2 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00568cf5 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568cf7 jne 0x568cb0 */ if (!ZF_) goto L_00568cb0;
  /* 00568cf9 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
L_00568cfc:;
  /* 00568cfc mov edx, dword ptr [esi + 0x154] */ { const u32 m_ = (u32)(esi + 0x154u); edx = (u32)(M32(m_)); }
  /* 00568d02 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568d03 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568d08u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568d03u); RETCHK(0x568d08u, 0x568d03u); LOADALL;
  /* 00568d08 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568d0b:;
  /* 00568d0b mov dword ptr [esi + 0x154], ebx */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(ebx); }
  /* 00568d11 mov dword ptr [esi + 0x158], ebx */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(ebx); }
  /* 00568d17 mov dword ptr [esi + 0x15c], ebx */ { const u32 m_ = (u32)(esi + 0x15cu); M32(m_) = (u32)(ebx); }
  /* 00568d1d mov edi, dword ptr [esi + 0x144] */ { const u32 m_ = (u32)(esi + 0x144u); edi = (u32)(M32(m_)); }
  /* 00568d23 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568d25 je 0x568d92 */ if (ZF_) goto L_00568d92;
  /* 00568d27 mov eax, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); eax = (u32)(M32(m_)); }
  /* 00568d2d cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568d2f mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00568d32 je 0x568d83 */ if (ZF_) goto L_00568d83;
  /* 00568d34 lea esi, [edi + 0x48] */ esi = (u32)((u32)(edi + 0x48u));
L_00568d37:;
  /* 00568d37 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568d3a jb 0x568d48 */ if (CF_) goto L_00568d48;
  /* 00568d3c mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00568d3f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568d40 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568d45u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568d40u); RETCHK(0x568d45u, 0x568d40u); LOADALL;
  /* 00568d45 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568d48:;
  /* 00568d48 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 00568d4e mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00568d51 mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00568d54 cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568d58 jb 0x568d66 */ if (CF_) goto L_00568d66;
  /* 00568d5a mov ecx, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 00568d5d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568d5e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568d63u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568d5eu); RETCHK(0x568d63u, 0x568d5eu); LOADALL;
  /* 00568d63 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568d66:;
  /* 00568d66 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00568d69 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 00568d70 mov dword ptr [esi - 0x20], ebx */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 00568d73 mov byte ptr [esi - 0x30], bl */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00568d76 add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00568d79 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00568d7c cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568d7e jne 0x568d37 */ if (!ZF_) goto L_00568d37;
  /* 00568d80 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
L_00568d83:;
  /* 00568d83 mov edx, dword ptr [esi + 0x144] */ { const u32 m_ = (u32)(esi + 0x144u); edx = (u32)(M32(m_)); }
  /* 00568d89 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568d8a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568d8fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568d8au); RETCHK(0x568d8fu, 0x568d8au); LOADALL;
  /* 00568d8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568d92:;
  /* 00568d92 mov dword ptr [esi + 0x144], ebx */ { const u32 m_ = (u32)(esi + 0x144u); M32(m_) = (u32)(ebx); }
  /* 00568d98 mov dword ptr [esi + 0x148], ebx */ { const u32 m_ = (u32)(esi + 0x148u); M32(m_) = (u32)(ebx); }
  /* 00568d9e mov dword ptr [esi + 0x14c], ebx */ { const u32 m_ = (u32)(esi + 0x14cu); M32(m_) = (u32)(ebx); }
  /* 00568da4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00568da6 mov dword ptr [esi + 0xc4], 0x656d44 */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(0x656d44u); }
  /* 00568db0 call 0x54bb00 */ esp -= 4; M32(esp) = 0x568db5u; SAVEALL; F_0054bb00(c); ABI_CHECK(0x54bb00u, 0x568db0u); RETCHK(0x568db5u, 0x568db0u); LOADALL;
  /* 00568db5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00568db6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568db7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00568db8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00568dba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568dbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568dc0(CPU *c) {
  NATIVE_HOOK(0x568dc0u) REGS; LOADALL;
L_00568dc0:;
  /* 00568dc0 call 0x54bc30 */ esp -= 4; M32(esp) = 0x568dc5u; SAVEALL; F_0054bc30(c); ABI_CHECK(0x54bc30u, 0x568dc0u); RETCHK(0x568dc5u, 0x568dc0u); LOADALL;
  /* 00568dc5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00568dc7 jne 0x568dca */ if (!ZF_) goto L_00568dca;
  /* 00568dc9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00568dca:;
  /* 00568dca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568dcb call 0x568e30 */ esp -= 4; M32(esp) = 0x568dd0u; SAVEALL; F_00568e30(c); ABI_CHECK(0x568e30u, 0x568dcbu); RETCHK(0x568dd0u, 0x568dcbu); LOADALL;
  /* 00568dd0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00568dd2 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00568dd5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568de0(CPU *c) {
  NATIVE_HOOK(0x568de0u) REGS; LOADALL;
L_00568de0:;
  /* 00568de0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568de1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568de3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568de4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00568de6 mov eax, dword ptr [esi + 0x108] */ { const u32 m_ = (u32)(esi + 0x108u); eax = (u32)(M32(m_)); }
  /* 00568dec mov ecx, dword ptr [esi + 0x104] */ { const u32 m_ = (u32)(esi + 0x104u); ecx = (u32)(M32(m_)); }
  /* 00568df2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568df3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568df4 call 0x463480 */ esp -= 4; M32(esp) = 0x568df9u; SAVEALL; F_00463480(c); ABI_CHECK(0x463480u, 0x568df4u); RETCHK(0x568df9u, 0x568df4u); LOADALL;
  /* 00568df9 mov edx, dword ptr [esi + 0x10c] */ { const u32 m_ = (u32)(esi + 0x10cu); edx = (u32)(M32(m_)); }
  /* 00568dff push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568e00 call 0x463660 */ esp -= 4; M32(esp) = 0x568e05u; SAVEALL; F_00463660(c); ABI_CHECK(0x463660u, 0x568e00u); RETCHK(0x568e05u, 0x568e00u); LOADALL;
  /* 00568e05 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00568e08 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00568e0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568e0c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00568e0e call 0x54bc40 */ esp -= 4; M32(esp) = 0x568e13u; SAVEALL; F_0054bc40(c); ABI_CHECK(0x54bc40u, 0x568e0eu); RETCHK(0x568e13u, 0x568e0eu); LOADALL;
  /* 00568e13 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568e14 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00568e15 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00568e20(CPU *c) {
  NATIVE_HOOK(0x568e20u) REGS; LOADALL;
L_00568e20:;
  /* 00568e20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568e21 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00568e23 call 0x54bd10 */ esp -= 4; M32(esp) = 0x568e28u; SAVEALL; F_0054bd10(c); ABI_CHECK(0x54bd10u, 0x568e23u); RETCHK(0x568e28u, 0x568e23u); LOADALL;
  /* 00568e28 call 0x569e00 */ esp -= 4; M32(esp) = 0x568e2du; SAVEALL; F_00569e00(c); ABI_CHECK(0x569e00u, 0x568e28u); RETCHK(0x568e2du, 0x568e28u); LOADALL;
  /* 00568e2d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00568e2e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00568e30(CPU *c) {
  NATIVE_HOOK(0x568e30u) REGS; LOADALL;
L_00568e30:;
  /* 00568e30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00568e31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00568e33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00568e35 push 0x623e85 */ { u32 v_ = 0x623e85u; esp -= 4; M32(esp) = v_; }
  /* 00568e3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00568e40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568e41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00568e48 sub esp, 0x144 */ { u32 a_ = esp, b_ = 0x144u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00568e4e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00568e53 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00568e54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00568e55 mov esi, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); esi = (u32)(M32(m_)); }
  /* 00568e5b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568e5d mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00568e60 je 0x568e69 */ if (ZF_) goto L_00568e69;
  /* 00568e62 xor bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00568e64 call 0x418c80 */ esp -= 4; M32(esp) = 0x568e69u; SAVEALL; F_00418c80(c); ABI_CHECK(0x418c80u, 0x568e64u); RETCHK(0x568e69u, 0x568e64u); LOADALL;
L_00568e69:;
  /* 00568e69 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00568e6c mov eax, dword ptr [ebx + 0xcc] */ { const u32 m_ = (u32)(ebx + 0xccu); eax = (u32)(M32(m_)); }
  /* 00568e72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568e74 jne 0x568ea0 */ if (!ZF_) goto L_00568ea0;
  /* 00568e76 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00568e78 call 0x5fe934 */ esp -= 4; M32(esp) = 0x568e7du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x568e78u); RETCHK(0x568e7du, 0x568e78u); LOADALL;
  /* 00568e7d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00568e80 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568e82 je 0x568e8d */ if (ZF_) goto L_00568e8d;
  /* 00568e84 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00568e86 call 0x51c6f0 */ esp -= 4; M32(esp) = 0x568e8bu; SAVEALL; F_0051c6f0(c); ABI_CHECK(0x51c6f0u, 0x568e86u); RETCHK(0x568e8bu, 0x568e86u); LOADALL;
  /* 00568e8b jmp 0x568e8f */ goto L_00568e8f;
L_00568e8d:;
  /* 00568e8d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00568e8f:;
  /* 00568e8f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568e91 mov dword ptr [ebx + 0xcc], eax */ { const u32 m_ = (u32)(ebx + 0xccu); M32(m_) = (u32)(eax); }
  /* 00568e97 jne 0x568ea0 */ if (!ZF_) goto L_00568ea0;
  /* 00568e99 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00568e9b jmp 0x5699c1 */ goto L_005699c1;
L_00568ea0:;
  /* 00568ea0 mov eax, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); eax = (u32)(M32(m_)); }
  /* 00568ea5 mov eax, dword ptr [eax + 0xdc] */ { const u32 m_ = (u32)(eax + 0xdcu); eax = (u32)(M32(m_)); }
  /* 00568eab mov dword ptr [ebx + 0xd0], eax */ { const u32 m_ = (u32)(ebx + 0xd0u); M32(m_) = (u32)(eax); }
  /* 00568eb1 mov eax, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); eax = (u32)(M32(m_)); }
  /* 00568eb7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568eb9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00568eba jne 0x568f8e */ if (!ZF_) goto L_00568f8e;
  /* 00568ec0 push 0x1cc */ { u32 v_ = 0x1ccu; esp -= 4; M32(esp) = v_; }
  /* 00568ec5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x568ecau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x568ec5u); RETCHK(0x568ecau, 0x568ec5u); LOADALL;
  /* 00568eca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00568ecd mov dword ptr [ebp - 0x108], eax */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M32(m_) = (u32)(eax); }
  /* 00568ed3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568ed5 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00568edc je 0x568ee8 */ if (ZF_) goto L_00568ee8;
  /* 00568ede push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00568ee0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568ee1 call 0x50bb70 */ esp -= 4; M32(esp) = 0x568ee6u; SAVEALL; F_0050bb70(c); ABI_CHECK(0x50bb70u, 0x568ee1u); RETCHK(0x568ee6u, 0x568ee1u); LOADALL;
  /* 00568ee6 jmp 0x568eea */ goto L_00568eea;
L_00568ee8:;
  /* 00568ee8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00568eea:;
  /* 00568eea push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00568eec or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00568eef mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00568ef2 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 00568ef7 push 0x646ca4 */ { u32 v_ = 0x646ca4u; esp -= 4; M32(esp) = v_; }
  /* 00568efc lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00568f02 mov dword ptr [ebx + 0xc8], eax */ { const u32 m_ = (u32)(ebx + 0xc8u); M32(m_) = (u32)(eax); }
  /* 00568f08 mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 00568f0e mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 00568f18 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 00568f1f call 0x404420 */ esp -= 4; M32(esp) = 0x568f24u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x568f1fu); RETCHK(0x568f24u, 0x568f1fu); LOADALL;
  /* 00568f24 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00568f2a mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00568f31 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00568f32 mov ecx, dword ptr [ebx + 0xd0] */ { const u32 m_ = (u32)(ebx + 0xd0u); ecx = (u32)(M32(m_)); }
  /* 00568f38 call 0x5075d0 */ esp -= 4; M32(esp) = 0x568f3du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x568f38u); RETCHK(0x568f3du, 0x568f38u); LOADALL;
  /* 00568f3d mov edx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); edx = (u32)(M32(m_)); }
  /* 00568f43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568f44 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00568f45 mov edx, 0x656d64 */ { edx = (u32)(0x656d64u); }
  /* 00568f4a call 0x50c0f0 */ esp -= 4; M32(esp) = 0x568f4fu; SAVEALL; F_0050c0f0(c); ABI_CHECK(0x50c0f0u, 0x568f4au); RETCHK(0x568f4fu, 0x568f4au); LOADALL;
  /* 00568f4f mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00568f52 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568f59 jb 0x568f6a */ if (CF_) goto L_00568f6a;
  /* 00568f5b mov eax, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); eax = (u32)(M32(m_)); }
  /* 00568f61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568f62 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568f67u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568f62u); RETCHK(0x568f67u, 0x568f62u); LOADALL;
  /* 00568f67 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568f6a:;
  /* 00568f6a mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00568f70 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00568f72 je 0x568f96 */ if (ZF_) goto L_00568f96;
  /* 00568f74 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00568f76 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00568f78 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x568f7bu; SAVEALL; call_ind(c, t_); RETCHK(0x568f7bu, 0x568f78u); LOADALL; }
  /* 00568f7b mov ecx, dword ptr [ebx + 0xcc] */ { const u32 m_ = (u32)(ebx + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00568f81 mov eax, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); eax = (u32)(M32(m_)); }
  /* 00568f87 call 0x5079e0 */ esp -= 4; M32(esp) = 0x568f8cu; SAVEALL; F_005079e0(c); ABI_CHECK(0x5079e0u, 0x568f87u); RETCHK(0x568f8cu, 0x568f87u); LOADALL;
  /* 00568f8c jmp 0x568f96 */ goto L_00568f96;
L_00568f8e:;
  /* 00568f8e mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 00568f93 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00568f96:;
  /* 00568f96 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00568f98 push 0x647054 */ { u32 v_ = 0x647054u; esp -= 4; M32(esp) = v_; }
  /* 00568f9d lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00568fa3 mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 00568fa9 mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 00568fb3 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 00568fba call 0x404420 */ esp -= 4; M32(esp) = 0x568fbfu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x568fbau); RETCHK(0x568fbfu, 0x568fbau); LOADALL;
  /* 00568fbf lea eax, [ebp - 0xfc] */ eax = (u32)((u32)(ebp + 0xffffff04u));
  /* 00568fc5 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00568fcc mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00568fd2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568fd3 call 0x5075d0 */ esp -= 4; M32(esp) = 0x568fd8u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x568fd3u); RETCHK(0x568fd8u, 0x568fd3u); LOADALL;
  /* 00568fd8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00568fda mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00568fdc call dword ptr [edx + 0x48] */ { const u32 m_ = (u32)(edx + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x568fdfu; SAVEALL; call_ind(c, t_); RETCHK(0x568fdfu, 0x568fdcu); LOADALL; }
  /* 00568fdf mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00568fe2 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00568fe9 jb 0x568ffa */ if (CF_) goto L_00568ffa;
  /* 00568feb mov eax, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); eax = (u32)(M32(m_)); }
  /* 00568ff1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00568ff2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x568ff7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x568ff2u); RETCHK(0x568ff7u, 0x568ff2u); LOADALL;
  /* 00568ff7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00568ffa:;
  /* 00568ffa push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00568ffc push 0x647044 */ { u32 v_ = 0x647044u; esp -= 4; M32(esp) = v_; }
  /* 00569001 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00569007 mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 0056900d mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 00569017 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 0056901e call 0x404420 */ esp -= 4; M32(esp) = 0x569023u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x56901eu); RETCHK(0x569023u, 0x56901eu); LOADALL;
  /* 00569023 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00569029 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 00569030 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569031 mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569037 call 0x5075d0 */ esp -= 4; M32(esp) = 0x56903cu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x569037u); RETCHK(0x56903cu, 0x569037u); LOADALL;
  /* 0056903c mov dword ptr [ebx + 0xd4], eax */ { const u32 m_ = (u32)(ebx + 0xd4u); M32(m_) = (u32)(eax); }
  /* 00569042 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00569045 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056904c jb 0x56905d */ if (CF_) goto L_0056905d;
  /* 0056904e mov edx, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); edx = (u32)(M32(m_)); }
  /* 00569054 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00569055 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56905au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569055u); RETCHK(0x56905au, 0x569055u); LOADALL;
  /* 0056905a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056905d:;
  /* 0056905d push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0056905f push 0x647038 */ { u32 v_ = 0x647038u; esp -= 4; M32(esp) = v_; }
  /* 00569064 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 0056906a mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 00569070 mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 0056907a mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 00569081 call 0x404420 */ esp -= 4; M32(esp) = 0x569086u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x569081u); RETCHK(0x569086u, 0x569081u); LOADALL;
  /* 00569086 lea eax, [ebp - 0xfc] */ eax = (u32)((u32)(ebp + 0xffffff04u));
  /* 0056908c mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00569093 mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569099 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056909a call 0x5075d0 */ esp -= 4; M32(esp) = 0x56909fu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x56909au); RETCHK(0x56909fu, 0x56909au); LOADALL;
  /* 0056909f mov dword ptr [ebx + 0xec], eax */ { const u32 m_ = (u32)(ebx + 0xecu); M32(m_) = (u32)(eax); }
  /* 005690a5 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005690a8 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005690af jb 0x5690c0 */ if (CF_) goto L_005690c0;
  /* 005690b1 mov ecx, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); ecx = (u32)(M32(m_)); }
  /* 005690b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005690b8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5690bdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5690b8u); RETCHK(0x5690bdu, 0x5690b8u); LOADALL;
  /* 005690bd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005690c0:;
  /* 005690c0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005690c2 mov byte ptr [ebp - 0xdc], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff24u); M8(m_) = (u8)(0x0u); }
  /* 005690c9 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 005690ce lea edi, [ebp - 0xdb] */ edi = (u32)((u32)(ebp + 0xffffff25u));
  /* 005690d4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005690d6 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 005690d8 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 005690d9 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005690db lea edi, [ebx + 0xf0] */ edi = (u32)((u32)(ebx + 0xf0u));
L_005690e1:;
  /* 005690e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005690e2 push 0x64702c */ { u32 v_ = 0x64702cu; esp -= 4; M32(esp) = v_; }
  /* 005690e7 lea edx, [ebp - 0xdc] */ edx = (u32)((u32)(ebp + 0xffffff24u));
  /* 005690ed push 0x7f */ { u32 v_ = 0x7fu; esp -= 4; M32(esp) = v_; }
  /* 005690ef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005690f0 call 0x5fe928 */ esp -= 4; M32(esp) = 0x5690f5u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5690f0u); RETCHK(0x5690f5u, 0x5690f0u); LOADALL;
  /* 005690f5 lea eax, [ebp - 0xdc] */ eax = (u32)((u32)(ebp + 0xffffff24u));
  /* 005690fb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005690fe mov dword ptr [ebp - 0x10c], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(0xfu); }
  /* 00569108 mov dword ptr [ebp - 0x110], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(0x0u); }
  /* 00569112 mov byte ptr [ebp - 0x120], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M8(m_) = (u8)(0x0u); }
  /* 00569119 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0056911c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00569120:;
  /* 00569120 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00569122 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569123 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00569125 jne 0x569120 */ if (!ZF_) goto L_00569120;
  /* 00569127 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00569129 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056912a lea eax, [ebp - 0xdc] */ eax = (u32)((u32)(ebp + 0xffffff24u));
  /* 00569130 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569131 lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 00569137 call 0x404420 */ esp -= 4; M32(esp) = 0x56913cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x569137u); RETCHK(0x56913cu, 0x569137u); LOADALL;
  /* 0056913c lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 00569142 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 00569149 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056914a mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569150 call 0x5075d0 */ esp -= 4; M32(esp) = 0x569155u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x569150u); RETCHK(0x569155u, 0x569150u); LOADALL;
  /* 00569155 mov dword ptr [edi - 0x18], eax */ { const u32 m_ = (u32)(edi + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00569158 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0056915f cmp dword ptr [ebp - 0x10c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569166 jb 0x569177 */ if (CF_) goto L_00569177;
  /* 00569168 mov edx, dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); edx = (u32)(M32(m_)); }
  /* 0056916e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056916f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569174u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56916fu); RETCHK(0x569174u, 0x56916fu); LOADALL;
  /* 00569174 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569177:;
  /* 00569177 mov ecx, dword ptr [edi - 0x18] */ { const u32 m_ = (u32)(edi + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0056917a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056917c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056917e mov dword ptr [ebp - 0x10c], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(0xfu); }
  /* 00569188 mov dword ptr [ebp - 0x110], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(0x0u); }
  /* 00569192 mov byte ptr [ebp - 0x120], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M8(m_) = (u8)(0x0u); }
  /* 00569199 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56919cu; SAVEALL; call_ind(c, t_); RETCHK(0x56919cu, 0x569199u); LOADALL; }
  /* 0056919c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056919d push 0x647020 */ { u32 v_ = 0x647020u; esp -= 4; M32(esp) = v_; }
  /* 005691a2 lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 005691a8 push 0x7f */ { u32 v_ = 0x7fu; esp -= 4; M32(esp) = v_; }
  /* 005691aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005691ab call 0x5fe928 */ esp -= 4; M32(esp) = 0x5691b0u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5691abu); RETCHK(0x5691b0u, 0x5691abu); LOADALL;
  /* 005691b0 lea eax, [ebp - 0xdc] */ eax = (u32)((u32)(ebp + 0xffffff24u));
  /* 005691b6 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005691b9 mov dword ptr [ebp - 0xe4], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(0xfu); }
  /* 005691c3 mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 005691cd mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 005691d4 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_005691d7:;
  /* 005691d7 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005691d9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005691da test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005691dc jne 0x5691d7 */ if (!ZF_) goto L_005691d7;
  /* 005691de sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005691e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005691e1 lea edx, [ebp - 0xdc] */ edx = (u32)((u32)(ebp + 0xffffff24u));
  /* 005691e7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005691e8 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 005691ee call 0x404420 */ esp -= 4; M32(esp) = 0x5691f3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5691eeu); RETCHK(0x5691f3u, 0x5691eeu); LOADALL;
  /* 005691f3 lea eax, [ebp - 0xfc] */ eax = (u32)((u32)(ebp + 0xffffff04u));
  /* 005691f9 mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 00569200 mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569206 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569207 call 0x5075d0 */ esp -= 4; M32(esp) = 0x56920cu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x569207u); RETCHK(0x56920cu, 0x569207u); LOADALL;
  /* 0056920c mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0056920e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00569215 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056921c jb 0x56922d */ if (CF_) goto L_0056922d;
  /* 0056921e mov ecx, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); ecx = (u32)(M32(m_)); }
  /* 00569224 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569225 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56922au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569225u); RETCHK(0x56922au, 0x569225u); LOADALL;
  /* 0056922a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056922d:;
  /* 0056922d mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0056922f mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00569231 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569233 mov dword ptr [ebp - 0xe4], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(0xfu); }
  /* 0056923d mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 00569247 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 0056924e call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569251u; SAVEALL; call_ind(c, t_); RETCHK(0x569251u, 0x56924eu); LOADALL; }
  /* 00569251 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569252 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00569255 cmp esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569258 jl 0x5690e1 */ if (LT_) goto L_005690e1;
  /* 0056925e lea eax, [ebx + 0x118] */ eax = (u32)((u32)(ebx + 0x118u));
  /* 00569264 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00569266 mov dword ptr [ebp - 0x100], eax */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(eax); }
  /* 0056926c mov edi, 0xf */ { edi = (u32)(0xfu); }
L_00569271:;
  /* 00569271 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00569272 push 0x647014 */ { u32 v_ = 0x647014u; esp -= 4; M32(esp) = v_; }
  /* 00569277 lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 0056927d push 0x7f */ { u32 v_ = 0x7fu; esp -= 4; M32(esp) = v_; }
  /* 0056927f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569280 call 0x5fe928 */ esp -= 4; M32(esp) = 0x569285u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x569280u); RETCHK(0x569285u, 0x569280u); LOADALL;
  /* 00569285 lea eax, [ebp - 0xdc] */ eax = (u32)((u32)(ebp + 0xffffff24u));
  /* 0056928b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056928e mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 00569294 mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 0056929e mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 005692a5 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_005692a8:;
  /* 005692a8 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005692aa inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005692ab test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005692ad jne 0x5692a8 */ if (!ZF_) goto L_005692a8;
  /* 005692af sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005692b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005692b2 lea edx, [ebp - 0xdc] */ edx = (u32)((u32)(ebp + 0xffffff24u));
  /* 005692b8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005692b9 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 005692bf call 0x404420 */ esp -= 4; M32(esp) = 0x5692c4u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5692bfu); RETCHK(0x5692c4u, 0x5692bfu); LOADALL;
  /* 005692c4 lea eax, [ebp - 0xfc] */ eax = (u32)((u32)(ebp + 0xffffff04u));
  /* 005692ca mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
  /* 005692d1 mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 005692d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005692d8 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5692ddu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5692d8u); RETCHK(0x5692ddu, 0x5692d8u); LOADALL;
  /* 005692dd mov ecx, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); ecx = (u32)(M32(m_)); }
  /* 005692e3 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 005692e6 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005692ed cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005692f4 jb 0x569305 */ if (CF_) goto L_00569305;
  /* 005692f6 mov edx, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); edx = (u32)(M32(m_)); }
  /* 005692fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005692fd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569302u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5692fdu); RETCHK(0x569302u, 0x5692fdu); LOADALL;
  /* 00569302 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569305:;
  /* 00569305 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00569306 push 0x656d58 */ { u32 v_ = 0x656d58u; esp -= 4; M32(esp) = v_; }
  /* 0056930b lea eax, [ebp - 0xdc] */ eax = (u32)((u32)(ebp + 0xffffff24u));
  /* 00569311 push 0x7f */ { u32 v_ = 0x7fu; esp -= 4; M32(esp) = v_; }
  /* 00569313 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569314 mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 0056931a mov dword ptr [ebp - 0xe8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(0x0u); }
  /* 00569324 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 0056932b call 0x5fe928 */ esp -= 4; M32(esp) = 0x569330u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x56932bu); RETCHK(0x569330u, 0x56932bu); LOADALL;
  /* 00569330 lea eax, [ebp - 0xdc] */ eax = (u32)((u32)(ebp + 0xffffff24u));
  /* 00569336 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569339 mov dword ptr [ebp - 0x10c], edi */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(edi); }
  /* 0056933f mov dword ptr [ebp - 0x110], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(0x0u); }
  /* 00569349 mov byte ptr [ebp - 0x120], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M8(m_) = (u8)(0x0u); }
  /* 00569350 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00569353:;
  /* 00569353 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00569355 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569356 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00569358 jne 0x569353 */ if (!ZF_) goto L_00569353;
  /* 0056935a sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056935c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056935d lea ecx, [ebp - 0xdc] */ ecx = (u32)((u32)(ebp + 0xffffff24u));
  /* 00569363 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569364 lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 0056936a call 0x404420 */ esp -= 4; M32(esp) = 0x56936fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x56936au); RETCHK(0x56936fu, 0x56936au); LOADALL;
  /* 0056936f lea edx, [ebp - 0x124] */ edx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 00569375 mov dword ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x8u); }
  /* 0056937c mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569382 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00569383 call 0x5075d0 */ esp -= 4; M32(esp) = 0x569388u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x569383u); RETCHK(0x569388u, 0x569383u); LOADALL;
  /* 00569388 mov ecx, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); ecx = (u32)(M32(m_)); }
  /* 0056938e mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00569390 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00569397 cmp dword ptr [ebp - 0x10c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056939e jb 0x5693af */ if (CF_) goto L_005693af;
  /* 005693a0 mov edx, dword ptr [ebp - 0x120] */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); edx = (u32)(M32(m_)); }
  /* 005693a6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005693a7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5693acu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5693a7u); RETCHK(0x5693acu, 0x5693a7u); LOADALL;
  /* 005693ac add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005693af:;
  /* 005693af mov ecx, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); ecx = (u32)(M32(m_)); }
  /* 005693b5 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005693b6 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005693b9 cmp esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005693bc mov dword ptr [ebp - 0x10c], edi */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(edi); }
  /* 005693c2 mov dword ptr [ebp - 0x110], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(0x0u); }
  /* 005693cc mov byte ptr [ebp - 0x120], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M8(m_) = (u8)(0x0u); }
  /* 005693d3 mov dword ptr [ebp - 0x100], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(ecx); }
  /* 005693d9 jl 0x569271 */ if (LT_) goto L_00569271;
  /* 005693df mov ecx, dword ptr [ebx + 0xd8] */ { const u32 m_ = (u32)(ebx + 0xd8u); ecx = (u32)(M32(m_)); }
  /* 005693e5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005693e7 lea edx, [ebp - 0x150] */ edx = (u32)((u32)(ebp + 0xfffffeb0u));
  /* 005693ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005693ee call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5693f1u; SAVEALL; call_ind(c, t_); RETCHK(0x5693f1u, 0x5693eeu); LOADALL; }
  /* 005693f1 mov ecx, dword ptr [ebx + 0xd4] */ { const u32 m_ = (u32)(ebx + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 005693f7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 005693f9 lea edx, [ebp - 0x150] */ edx = (u32)((u32)(ebp + 0xfffffeb0u));
  /* 005693ff push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00569400 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569403u; SAVEALL; call_ind(c, t_); RETCHK(0x569403u, 0x569400u); LOADALL; }
  /* 00569403 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00569405 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00569406 call 0x4019a0 */ esp -= 4; M32(esp) = 0x56940bu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x569406u); RETCHK(0x56940bu, 0x569406u); LOADALL;
  /* 0056940b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056940e push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00569410 push 0x647008 */ { u32 v_ = 0x647008u; esp -= 4; M32(esp) = v_; }
  /* 00569415 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 0056941b mov dword ptr [ebp - 0xe0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(eax); }
  /* 00569421 mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 00569427 mov dword ptr [ebp - 0xe8], esi */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(esi); }
  /* 0056942d mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 00569434 call 0x404420 */ esp -= 4; M32(esp) = 0x569439u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x569434u); RETCHK(0x569439u, 0x569434u); LOADALL;
  /* 00569439 lea eax, [ebp - 0xfc] */ eax = (u32)((u32)(ebp + 0xffffff04u));
  /* 0056943f mov dword ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x9u); }
  /* 00569446 mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 0056944c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056944d call 0x5075d0 */ esp -= 4; M32(esp) = 0x569452u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x56944du); RETCHK(0x569452u, 0x56944du); LOADALL;
  /* 00569452 mov dword ptr [ebx + 0x104], eax */ { const u32 m_ = (u32)(ebx + 0x104u); M32(m_) = (u32)(eax); }
  /* 00569458 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0056945f cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569466 jb 0x569477 */ if (CF_) goto L_00569477;
  /* 00569468 mov ecx, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); ecx = (u32)(M32(m_)); }
  /* 0056946e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056946f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569474u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56946fu); RETCHK(0x569474u, 0x56946fu); LOADALL;
  /* 00569474 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569477:;
  /* 00569477 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00569479 push 0x646ffc */ { u32 v_ = 0x646ffcu; esp -= 4; M32(esp) = v_; }
  /* 0056947e lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00569484 mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 0056948a mov dword ptr [ebp - 0xe8], esi */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(esi); }
  /* 00569490 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 00569497 call 0x404420 */ esp -= 4; M32(esp) = 0x56949cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x569497u); RETCHK(0x56949cu, 0x569497u); LOADALL;
  /* 0056949c lea edx, [ebp - 0xfc] */ edx = (u32)((u32)(ebp + 0xffffff04u));
  /* 005694a2 mov dword ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xau); }
  /* 005694a9 mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 005694af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005694b0 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5694b5u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5694b0u); RETCHK(0x5694b5u, 0x5694b0u); LOADALL;
  /* 005694b5 mov dword ptr [ebx + 0x108], eax */ { const u32 m_ = (u32)(ebx + 0x108u); M32(m_) = (u32)(eax); }
  /* 005694bb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005694c2 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005694c9 jb 0x5694da */ if (CF_) goto L_005694da;
  /* 005694cb mov eax, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); eax = (u32)(M32(m_)); }
  /* 005694d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005694d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5694d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5694d2u); RETCHK(0x5694d7u, 0x5694d2u); LOADALL;
  /* 005694d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005694da:;
  /* 005694da push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 005694dc push 0x646fec */ { u32 v_ = 0x646fecu; esp -= 4; M32(esp) = v_; }
  /* 005694e1 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 005694e7 mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 005694ed mov dword ptr [ebp - 0xe8], esi */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(esi); }
  /* 005694f3 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 005694fa call 0x404420 */ esp -= 4; M32(esp) = 0x5694ffu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5694fau); RETCHK(0x5694ffu, 0x5694fau); LOADALL;
  /* 005694ff lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00569505 mov dword ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xbu); }
  /* 0056950c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056950d mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569513 call 0x5075d0 */ esp -= 4; M32(esp) = 0x569518u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x569513u); RETCHK(0x569518u, 0x569513u); LOADALL;
  /* 00569518 mov dword ptr [ebx + 0x10c], eax */ { const u32 m_ = (u32)(ebx + 0x10cu); M32(m_) = (u32)(eax); }
  /* 0056951e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00569525 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056952c jb 0x56953d */ if (CF_) goto L_0056953d;
  /* 0056952e mov edx, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); edx = (u32)(M32(m_)); }
  /* 00569534 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00569535 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56953au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569535u); RETCHK(0x56953au, 0x569535u); LOADALL;
  /* 0056953a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056953d:;
  /* 0056953d push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0056953f push 0x646fe0 */ { u32 v_ = 0x646fe0u; esp -= 4; M32(esp) = v_; }
  /* 00569544 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 0056954a mov dword ptr [ebp - 0xe4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); M32(m_) = (u32)(edi); }
  /* 00569550 mov dword ptr [ebp - 0xe8], esi */ { const u32 m_ = (u32)(ebp + 0xffffff18u); M32(m_) = (u32)(esi); }
  /* 00569556 mov byte ptr [ebp - 0xf8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff08u); M8(m_) = (u8)(0x0u); }
  /* 0056955d call 0x404420 */ esp -= 4; M32(esp) = 0x569562u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x56955du); RETCHK(0x569562u, 0x56955du); LOADALL;
  /* 00569562 lea eax, [ebp - 0xfc] */ eax = (u32)((u32)(ebp + 0xffffff04u));
  /* 00569568 mov dword ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xcu); }
  /* 0056956f mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569575 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569576 call 0x5075d0 */ esp -= 4; M32(esp) = 0x56957bu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x569576u); RETCHK(0x56957bu, 0x569576u); LOADALL;
  /* 0056957b mov dword ptr [ebx + 0x110], eax */ { const u32 m_ = (u32)(ebx + 0x110u); M32(m_) = (u32)(eax); }
  /* 00569581 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00569588 cmp dword ptr [ebp - 0xe4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056958f jb 0x5695a0 */ if (CF_) goto L_005695a0;
  /* 00569591 mov ecx, dword ptr [ebp - 0xf8] */ { const u32 m_ = (u32)(ebp + 0xffffff08u); ecx = (u32)(M32(m_)); }
  /* 00569597 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569598 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56959du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569598u); RETCHK(0x56959du, 0x569598u); LOADALL;
  /* 0056959d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005695a0:;
  /* 005695a0 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005695a2 push 0x646fd4 */ { u32 v_ = 0x646fd4u; esp -= 4; M32(esp) = v_; }
  /* 005695a7 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 005695ad mov dword ptr [ebp - 0x130], edi */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M32(m_) = (u32)(edi); }
  /* 005695b3 mov dword ptr [ebp - 0x134], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(esi); }
  /* 005695b9 mov byte ptr [ebp - 0x144], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M8(m_) = (u8)(0x0u); }
  /* 005695c0 call 0x404420 */ esp -= 4; M32(esp) = 0x5695c5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5695c0u); RETCHK(0x5695c5u, 0x5695c0u); LOADALL;
  /* 005695c5 lea edx, [ebp - 0x148] */ edx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 005695cb mov dword ptr [ebp - 4], 0xd */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xdu); }
  /* 005695d2 mov ecx, dword ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 005695d8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005695d9 call 0x5075d0 */ esp -= 4; M32(esp) = 0x5695deu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x5695d9u); RETCHK(0x5695deu, 0x5695d9u); LOADALL;
  /* 005695de mov dword ptr [ebx + 0x114], eax */ { const u32 m_ = (u32)(ebx + 0x114u); M32(m_) = (u32)(eax); }
  /* 005695e4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005695eb cmp dword ptr [ebp - 0x130], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005695f2 jb 0x569603 */ if (CF_) goto L_00569603;
  /* 005695f4 mov eax, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); eax = (u32)(M32(m_)); }
  /* 005695fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005695fb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569600u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5695fbu); RETCHK(0x569600u, 0x5695fbu); LOADALL;
  /* 00569600 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569603:;
  /* 00569603 mov eax, dword ptr [ebx + 0x110] */ { const u32 m_ = (u32)(ebx + 0x110u); eax = (u32)(M32(m_)); }
  /* 00569609 mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 0056960e mov dword ptr [eax + 0x294], ecx */ { const u32 m_ = (u32)(eax + 0x294u); M32(m_) = (u32)(ecx); }
  /* 00569614 mov eax, dword ptr [ebx + 0x110] */ { const u32 m_ = (u32)(ebx + 0x110u); eax = (u32)(M32(m_)); }
  /* 0056961a mov dword ptr [eax + 0x298], ecx */ { const u32 m_ = (u32)(eax + 0x298u); M32(m_) = (u32)(ecx); }
  /* 00569620 mov eax, dword ptr [ebx + 0x114] */ { const u32 m_ = (u32)(ebx + 0x114u); eax = (u32)(M32(m_)); }
  /* 00569626 mov dword ptr [eax + 0x294], ecx */ { const u32 m_ = (u32)(eax + 0x294u); M32(m_) = (u32)(ecx); }
  /* 0056962c mov eax, dword ptr [ebx + 0x114] */ { const u32 m_ = (u32)(ebx + 0x114u); eax = (u32)(M32(m_)); }
  /* 00569632 mov dword ptr [eax + 0x298], ecx */ { const u32 m_ = (u32)(eax + 0x298u); M32(m_) = (u32)(ecx); }
  /* 00569638 mov ecx, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); ecx = (u32)(M32(m_)); }
  /* 0056963e mov eax, dword ptr [ecx + 0xc38] */ { const u32 m_ = (u32)(ecx + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00569644 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569646 mov dword ptr [ebp - 0x130], edi */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M32(m_) = (u32)(edi); }
  /* 0056964c mov dword ptr [ebp - 0x134], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(esi); }
  /* 00569652 mov byte ptr [ebp - 0x144], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M8(m_) = (u8)(0x0u); }
  /* 00569659 je 0x569695 */ if (ZF_) goto L_00569695;
  /* 0056965b mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00569661 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569663 je 0x56966e */ if (ZF_) goto L_0056966e;
  /* 00569665 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00569667 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00569669 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56966cu; SAVEALL; call_ind(c, t_); RETCHK(0x56966cu, 0x569669u); LOADALL; }
  /* 0056966c jmp 0x569671 */ goto L_00569671;
L_0056966e:;
  /* 0056966e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00569671:;
  /* 00569671 mov ecx, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); ecx = (u32)(M32(m_)); }
  /* 00569677 mov ecx, dword ptr [ecx + 0xc38] */ { const u32 m_ = (u32)(ecx + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0056967d cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056967f je 0x569695 */ if (ZF_) goto L_00569695;
  /* 00569681 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569682 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00569684 call 0x55ead0 */ esp -= 4; M32(esp) = 0x569689u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x569684u); RETCHK(0x569689u, 0x569684u); LOADALL;
  /* 00569689 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056968b cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056968d mov dword ptr [ebp - 0x104], eax */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); M32(m_) = (u32)(eax); }
  /* 00569693 jne 0x56969c */ if (!ZF_) goto L_0056969c;
L_00569695:;
  /* 00569695 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00569697 jmp 0x5699c0 */ goto L_005699c0;
L_0056969c:;
  /* 0056969c call 0x556030 */ esp -= 4; M32(esp) = 0x5696a1u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x56969cu); RETCHK(0x5696a1u, 0x56969cu); LOADALL;
  /* 005696a1 lea esi, [ebx + 0x140] */ esi = (u32)((u32)(ebx + 0x140u));
  /* 005696a7 mov dword ptr [ebp - 0x12c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(eax); }
  /* 005696ad mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005696b0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005696b2 mov dword ptr [ebp - 0x100], esi */ { const u32 m_ = (u32)(ebp + 0xffffff00u); M32(m_) = (u32)(esi); }
  /* 005696b8 je 0x569730 */ if (ZF_) goto L_00569730;
  /* 005696ba mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005696bd cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005696bf mov dword ptr [ebp - 0xe0], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(ecx); }
  /* 005696c5 je 0x569724 */ if (ZF_) goto L_00569724;
  /* 005696c7 lea esi, [eax + 0x48] */ esi = (u32)((u32)(eax + 0x48u));
  /* 005696ca lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005696d0:;
  /* 005696d0 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005696d3 jb 0x5696e1 */ if (CF_) goto L_005696e1;
  /* 005696d5 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005696d8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005696d9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5696deu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5696d9u); RETCHK(0x5696deu, 0x5696d9u); LOADALL;
  /* 005696de add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005696e1:;
  /* 005696e1 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 005696e7 mov dword ptr [esi - 4], edi */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 005696ea mov byte ptr [esi - 0x14], 0 */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)(0x0u); }
  /* 005696ee cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005696f2 jb 0x569700 */ if (CF_) goto L_00569700;
  /* 005696f4 mov eax, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 005696f7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005696f8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5696fdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5696f8u); RETCHK(0x5696fdu, 0x5696f8u); LOADALL;
  /* 005696fd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569700:;
  /* 00569700 mov eax, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); eax = (u32)(M32(m_)); }
  /* 00569706 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0056970d mov dword ptr [esi - 0x20], edi */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 00569710 mov byte ptr [esi - 0x30], 0 */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 00569714 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00569717 lea edx, [esi - 0x48] */ edx = (u32)((u32)(esi + 0xffffffb8u));
  /* 0056971a cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056971c jne 0x5696d0 */ if (!ZF_) goto L_005696d0;
  /* 0056971e mov esi, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); esi = (u32)(M32(m_)); }
L_00569724:;
  /* 00569724 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00569727 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569728 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56972du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569728u); RETCHK(0x56972du, 0x569728u); LOADALL;
  /* 0056972d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569730:;
  /* 00569730 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00569733 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00569736 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 00569739 mov eax, dword ptr [ebx + 0x154] */ { const u32 m_ = (u32)(ebx + 0x154u); eax = (u32)(M32(m_)); }
  /* 0056973f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569741 je 0x5697b9 */ if (ZF_) goto L_005697b9;
  /* 00569743 mov ecx, dword ptr [ebx + 0x158] */ { const u32 m_ = (u32)(ebx + 0x158u); ecx = (u32)(M32(m_)); }
  /* 00569749 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056974b mov dword ptr [ebp - 0xe0], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(ecx); }
  /* 00569751 je 0x5697aa */ if (ZF_) goto L_005697aa;
  /* 00569753 lea esi, [eax + 0x48] */ esi = (u32)((u32)(eax + 0x48u));
L_00569756:;
  /* 00569756 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569759 jb 0x569767 */ if (CF_) goto L_00569767;
  /* 0056975b mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056975e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056975f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569764u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56975fu); RETCHK(0x569764u, 0x56975fu); LOADALL;
  /* 00569764 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569767:;
  /* 00569767 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0056976d mov dword ptr [esi - 4], edi */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00569770 mov byte ptr [esi - 0x14], 0 */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)(0x0u); }
  /* 00569774 cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569778 jb 0x569786 */ if (CF_) goto L_00569786;
  /* 0056977a mov eax, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0056977d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056977e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569783u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56977eu); RETCHK(0x569783u, 0x56977eu); LOADALL;
  /* 00569783 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569786:;
  /* 00569786 mov ecx, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); ecx = (u32)(M32(m_)); }
  /* 0056978c mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 00569793 mov dword ptr [esi - 0x20], edi */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 00569796 mov byte ptr [esi - 0x30], 0 */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 0056979a add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056979d lea eax, [esi - 0x48] */ eax = (u32)((u32)(esi + 0xffffffb8u));
  /* 005697a0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005697a2 jne 0x569756 */ if (!ZF_) goto L_00569756;
  /* 005697a4 mov esi, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); esi = (u32)(M32(m_)); }
L_005697aa:;
  /* 005697aa mov eax, dword ptr [ebx + 0x154] */ { const u32 m_ = (u32)(ebx + 0x154u); eax = (u32)(M32(m_)); }
  /* 005697b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005697b1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5697b6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5697b1u); RETCHK(0x5697b6u, 0x5697b1u); LOADALL;
  /* 005697b6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005697b9:;
  /* 005697b9 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 005697be mov dword ptr [ebx + 0x154], edi */ { const u32 m_ = (u32)(ebx + 0x154u); M32(m_) = (u32)(edi); }
  /* 005697c4 mov dword ptr [ebx + 0x158], edi */ { const u32 m_ = (u32)(ebx + 0x158u); M32(m_) = (u32)(edi); }
  /* 005697ca mov dword ptr [ebx + 0x15c], edi */ { const u32 m_ = (u32)(ebx + 0x15cu); M32(m_) = (u32)(edi); }
  /* 005697d0 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 005697d3 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 005697d6 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 005697da mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 005697dd mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 005697e0 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 005697e4 mov ecx, dword ptr [ebp - 0x104] */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); ecx = (u32)(M32(m_)); }
  /* 005697ea call 0x9c5324 */ esp -= 4; M32(esp) = 0x5697efu; SAVEALL; F_009c5324(c); ABI_CHECK(0x9c5324u, 0x5697eau); RETCHK(0x5697efu, 0x5697eau); LOADALL;
  /* 005697ef nop */ ;
  /* 005697f0 nop */ ;
  /* 005697f1 nop */ ;
  /* 005697f2 nop */ ;
  /* 005697f3 nop */ ;
  /* 005697f4 nop */ ;
  /* 005697f5 nop */ ;
  /* 005697f6 nop */ ;
  /* 005697f7 nop */ ;
  /* 005697f8 nop */ ;
  /* 005697f9 nop */ ;
  /* 005697fa nop */ ;
  /* 005697fb nop */ ;
  /* 005697fc nop */ ;
  /* 005697fd nop */ ;
  /* 005697fe nop */ ;
  /* 005697ff nop */ ;
  /* 00569800 nop */ ;
  /* 00569801 nop */ ;
  /* 00569802 nop */ ;
  /* 00569803 nop */ ;
  /* 00569804 nop */ ;
  /* 00569805 nop */ ;
  /* 00569806 nop */ ;
  /* 00569807 nop */ ;
  /* 00569808 nop */ ;
  /* 00569809 nop */ ;
  /* 0056980a nop */ ;
  /* 0056980b nop */ ;
  /* 0056980c nop */ ;
  /* 0056980d nop */ ;
  /* 0056980e nop */ ;
  /* 0056980f cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569811 mov dword ptr [ebp - 0x108], edx */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M32(m_) = (u32)(edx); }
  /* 00569817 mov dword ptr [ebp - 0xe0], edi */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(edi); }
  /* 0056981d jle 0x5698e1 */ if ((ZF_|LT_)) goto L_005698e1;
  /* 00569823 mov esi, dword ptr [ebp - 0x104] */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); esi = (u32)(M32(m_)); }
  /* 00569829 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056982b sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056982d mov edi, eax */ { edi = (u32)(eax); }
  /* 0056982f mov dword ptr [ebp - 0x104], esi */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); M32(m_) = (u32)(esi); }
  /* 00569835 mov dword ptr [ebp - 0x128], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(ecx); }
  /* 0056983b jmp 0x569843 */ goto L_00569843;
L_0056983d:;
  /* 0056983d mov esi, dword ptr [ebp - 0x104] */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); esi = (u32)(M32(m_)); }
L_00569843:;
  /* 00569843 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 00569845 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569847 jle 0x5698bb */ if ((ZF_|LT_)) goto L_005698bb;
  /* 00569849 test dword ptr [esi + edi], 0x1000000 */ { const u32 m_ = (u32)(esi + edi); u32 a_ = M32(m_), b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569850 jne 0x5698bb */ if (!ZF_) goto L_005698bb;
  /* 00569852 mov ecx, dword ptr [ebp - 0x12c] */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); ecx = (u32)(M32(m_)); }
  /* 00569858 call 0x555800 */ esp -= 4; M32(esp) = 0x56985du; SAVEALL; F_00555800(c); ABI_CHECK(0x555800u, 0x569858u); RETCHK(0x56985du, 0x569858u); LOADALL;
  /* 0056985d mov esi, eax */ { esi = (u32)(eax); }
  /* 0056985f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569861 je 0x5698bb */ if (ZF_) goto L_005698bb;
  /* 00569863 mov eax, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); eax = (u32)(M32(m_)); }
  /* 00569869 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056986b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056986d lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 00569870 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569871 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00569874 mov dword ptr [ebp - 0x5c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edx); }
  /* 00569877 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 0056987a call 0x404140 */ esp -= 4; M32(esp) = 0x56987fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56987au); RETCHK(0x56987fu, 0x56987au); LOADALL;
  /* 0056987f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00569881 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569883 lea edx, [esi + 0x24] */ edx = (u32)((u32)(esi + 0x24u));
  /* 00569886 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00569887 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056988a call 0x404140 */ esp -= 4; M32(esp) = 0x56988fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56988au); RETCHK(0x56988fu, 0x56988au); LOADALL;
  /* 0056988f mov eax, dword ptr [ebp - 0x128] */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); eax = (u32)(M32(m_)); }
  /* 00569895 mov ecx, dword ptr [eax + edi] */ { const u32 m_ = (u32)(eax + edi); ecx = (u32)(M32(m_)); }
  /* 00569898 mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 0056989b mov edx, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); edx = (u32)(M32(m_)); }
  /* 0056989e mov dword ptr [ebp - 0x4c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(edx); }
  /* 005698a1 mov eax, dword ptr [esi + 0xc4] */ { const u32 m_ = (u32)(esi + 0xc4u); eax = (u32)(M32(m_)); }
  /* 005698a7 mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 005698aa mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 005698b0 lea ebx, [ebp - 0x5c] */ ebx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 005698b3 call 0x56af30 */ esp -= 4; M32(esp) = 0x5698b8u; SAVEALL; F_0056af30(c); ABI_CHECK(0x56af30u, 0x5698b3u); RETCHK(0x5698b8u, 0x5698b3u); LOADALL;
  /* 005698b8 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_005698bb:;
  /* 005698bb mov eax, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); eax = (u32)(M32(m_)); }
  /* 005698c1 mov ecx, dword ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); ecx = (u32)(M32(m_)); }
  /* 005698c7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005698c8 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005698cb cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005698cd mov dword ptr [ebp - 0xe0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff20u); M32(m_) = (u32)(eax); }
  /* 005698d3 jl 0x56983d */ if (LT_) goto L_0056983d;
  /* 005698d9 mov esi, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); esi = (u32)(M32(m_)); }
  /* 005698df xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_005698e1:;
  /* 005698e1 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005698e4 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005698e6 je 0x569903 */ if (ZF_) goto L_00569903;
  /* 005698e8 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005698eb sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005698ed mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 005698f2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005698f4 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005698f7 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005698f9 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005698fc add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005698fe mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00569901 jne 0x56990f */ if (!ZF_) goto L_0056990f;
L_00569903:;
  /* 00569903 mov dword ptr [ebx + 0x164], 1 */ { const u32 m_ = (u32)(ebx + 0x164u); M32(m_) = (u32)(0x1u); }
  /* 0056990d jmp 0x569944 */ goto L_00569944;
L_0056990f:;
  /* 0056990f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00569912 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569914 jne 0x56991a */ if (!ZF_) goto L_0056991a;
  /* 00569916 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00569918 jmp 0x569930 */ goto L_00569930;
L_0056991a:;
  /* 0056991a mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056991d sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056991f mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 00569924 imul esi */ { s64 p_ = (s64)(s32)eax * (s32)esi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00569926 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00569929 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056992b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056992e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00569930:;
  /* 00569930 lea edx, [eax - 1] */ edx = (u32)((u32)(eax + 0xffffffffu));
  /* 00569933 mov eax, 0xcccccccd */ { eax = (u32)(0xcccccccdu); }
  /* 00569938 mul edx */ { u64 p_ = (u64)eax * edx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056993a shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056993d inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056993e mov dword ptr [ebx + 0x164], edx */ { const u32 m_ = (u32)(ebx + 0x164u); M32(m_) = (u32)(edx); }
L_00569944:;
  /* 00569944 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00569946 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00569948 mov dword ptr [ebx + 0x168], esi */ { const u32 m_ = (u32)(ebx + 0x168u); M32(m_) = (u32)(esi); }
  /* 0056994e mov dword ptr [ebx + 0x174], esi */ { const u32 m_ = (u32)(ebx + 0x174u); M32(m_) = (u32)(esi); }
  /* 00569954 call 0x569a30 */ esp -= 4; M32(esp) = 0x569959u; SAVEALL; F_00569a30(c); ABI_CHECK(0x569a30u, 0x569954u); RETCHK(0x569959u, 0x569954u); LOADALL;
  /* 00569959 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0056995b call 0x569bc0 */ esp -= 4; M32(esp) = 0x569960u; SAVEALL; F_00569bc0(c); ABI_CHECK(0x569bc0u, 0x56995bu); RETCHK(0x569960u, 0x56995bu); LOADALL;
  /* 00569960 lea edi, [ebx + 0xc4] */ edi = (u32)((u32)(ebx + 0xc4u));
  /* 00569966 call 0x568460 */ esp -= 4; M32(esp) = 0x56996bu; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x569966u); RETCHK(0x56996bu, 0x569966u); LOADALL;
  /* 0056996b mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0056996d call 0x568460 */ esp -= 4; M32(esp) = 0x569972u; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x56996du); RETCHK(0x569972u, 0x56996du); LOADALL;
  /* 00569972 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569973 call 0x568660 */ esp -= 4; M32(esp) = 0x569978u; SAVEALL; F_00568660(c); ABI_CHECK(0x568660u, 0x569973u); RETCHK(0x569978u, 0x569973u); LOADALL;
  /* 00569978 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056997b mov dword ptr [ebx + 0x16c], eax */ { const u32 m_ = (u32)(ebx + 0x16cu); M32(m_) = (u32)(eax); }
  /* 00569981 mov dword ptr [ebx + 0x178], eax */ { const u32 m_ = (u32)(ebx + 0x178u); M32(m_) = (u32)(eax); }
  /* 00569987 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056998a mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0056998f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569991 jb 0x56999f */ if (CF_) goto L_0056999f;
  /* 00569993 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00569996 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569997 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56999cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569997u); RETCHK(0x56999cu, 0x569997u); LOADALL;
  /* 0056999c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056999f:;
  /* 0056999f cmp dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005699a2 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 005699a9 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 005699ac mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 005699b0 jb 0x5699be */ if (CF_) goto L_005699be;
  /* 005699b2 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 005699b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005699b6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5699bbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5699b6u); RETCHK(0x5699bbu, 0x5699b6u); LOADALL;
  /* 005699bb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005699be:;
  /* 005699be mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_005699c0:;
  /* 005699c0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_005699c1:;
  /* 005699c1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005699c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005699c5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005699cc mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005699cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005699d0 call 0x61af31 */ esp -= 4; M32(esp) = 0x5699d5u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5699d0u); RETCHK(0x5699d5u, 0x5699d0u); LOADALL;
  /* 005699d5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005699d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005699d8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005699e0(CPU *c) {
  NATIVE_HOOK(0x5699e0u) REGS; LOADALL;
L_005699e0:;
  /* 005699e0 cmp dword ptr [esi + 0x48], 0x10 */ { const u32 m_ = (u32)(esi + 0x48u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005699e4 jb 0x5699f2 */ if (CF_) goto L_005699f2;
  /* 005699e6 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 005699e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005699ea call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5699efu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5699eau); RETCHK(0x5699efu, 0x5699eau); LOADALL;
  /* 005699ef add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005699f2:;
  /* 005699f2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005699f3 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005699f5 mov dword ptr [esi + 0x48], 0xf */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(0xfu); }
  /* 005699fc mov dword ptr [esi + 0x44], ebx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ebx); }
  /* 005699ff mov byte ptr [esi + 0x34], bl */ { const u32 m_ = (u32)(esi + 0x34u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00569a02 cmp dword ptr [esi + 0x2c], 0x10 */ { const u32 m_ = (u32)(esi + 0x2cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569a06 jb 0x569a14 */ if (CF_) goto L_00569a14;
  /* 00569a08 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00569a0b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569a0c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569a11u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569a0cu); RETCHK(0x569a11u, 0x569a0cu); LOADALL;
  /* 00569a11 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569a14:;
  /* 00569a14 mov dword ptr [esi + 0x28], ebx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ebx); }
  /* 00569a17 mov dword ptr [esi + 0x2c], 0xf */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0xfu); }
  /* 00569a1e mov byte ptr [esi + 0x18], bl */ { const u32 m_ = (u32)(esi + 0x18u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00569a21 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00569a22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00569a30(CPU *c) {
  NATIVE_HOOK(0x569a30u) REGS; LOADALL;
L_00569a30:;
  /* 00569a30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00569a31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00569a33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00569a35 push 0x62284b */ { u32 v_ = 0x62284bu; esp -= 4; M32(esp) = v_; }
  /* 00569a3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00569a40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569a41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00569a48 sub esp, 0x224 */ { u32 a_ = esp, b_ = 0x224u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569a4e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00569a53 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00569a54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00569a55 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00569a57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00569a58 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00569a5b lea edi, [esi + 0xd8] */ edi = (u32)((u32)(esi + 0xd8u));
  /* 00569a61 mov ebx, 5 */ { ebx = (u32)(0x5u); }
L_00569a66:;
  /* 00569a66 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00569a68 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00569a6a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569a6c call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569a6fu; SAVEALL; call_ind(c, t_); RETCHK(0x569a6fu, 0x569a6cu); LOADALL; }
  /* 00569a6f add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00569a72 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00569a73 jne 0x569a66 */ if (!ZF_) goto L_00569a66;
  /* 00569a75 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00569a77 mov dword ptr [ebp - 0x214], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(ebx); }
  /* 00569a7d lea edi, [esi + 0xd8] */ edi = (u32)((u32)(esi + 0xd8u));
L_00569a83:;
  /* 00569a83 mov eax, dword ptr [esi + 0x144] */ { const u32 m_ = (u32)(esi + 0x144u); eax = (u32)(M32(m_)); }
  /* 00569a89 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569a8b je 0x569aa6 */ if (ZF_) goto L_00569aa6;
  /* 00569a8d mov ecx, dword ptr [esi + 0x148] */ { const u32 m_ = (u32)(esi + 0x148u); ecx = (u32)(M32(m_)); }
  /* 00569a93 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569a95 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 00569a9a imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00569a9c sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00569a9f mov eax, edx */ { eax = (u32)(edx); }
  /* 00569aa1 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00569aa4 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00569aa6:;
  /* 00569aa6 mov ecx, dword ptr [esi + 0x168] */ { const u32 m_ = (u32)(esi + 0x168u); ecx = (u32)(M32(m_)); }
  /* 00569aac lea edx, [ebx + ecx*4] */ edx = (u32)((u32)(ebx + ecx * 4u));
  /* 00569aaf add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569ab1 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569ab3 jae 0x569afb */ if (!CF_) goto L_00569afb;
  /* 00569ab5 cmp ebx, 5 */ { u32 a_ = ebx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569ab8 jge 0x569afb */ if (!LT_) goto L_00569afb;
  /* 00569aba mov edx, dword ptr [esi + 0x144] */ { const u32 m_ = (u32)(esi + 0x144u); edx = (u32)(M32(m_)); }
  /* 00569ac0 imul ecx, ecx, 0x4c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00569ac3 mov eax, dword ptr [ecx + edx + 0x48] */ { const u32 m_ = (u32)(ecx + edx + 0x48u); eax = (u32)(M32(m_)); }
  /* 00569ac7 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569ac9 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569acc jb 0x569ad3 */ if (CF_) goto L_00569ad3;
  /* 00569ace mov ecx, dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 00569ad1 jmp 0x569ad6 */ goto L_00569ad6;
L_00569ad3:;
  /* 00569ad3 add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00569ad6:;
  /* 00569ad6 mov ebx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ebx = (u32)(M32(m_)); }
  /* 00569ad8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569ad9 call 0x50dc70 */ esp -= 4; M32(esp) = 0x569adeu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x569ad9u); RETCHK(0x569adeu, 0x569ad9u); LOADALL;
  /* 00569ade mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 00569ae0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00569ae2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00569ae4 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569ae7u; SAVEALL; call_ind(c, t_); RETCHK(0x569ae7u, 0x569ae4u); LOADALL; }
  /* 00569ae7 mov ecx, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); ecx = (u32)(M32(m_)); }
  /* 00569aed inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569aee mov dword ptr [ebp - 0x214], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(ecx); }
  /* 00569af4 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00569af7 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00569af9 jmp 0x569a83 */ goto L_00569a83;
L_00569afb:;
  /* 00569afb mov ecx, dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 00569b01 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00569b03 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00569b05 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00569b06 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569b09u; SAVEALL; call_ind(c, t_); RETCHK(0x569b09u, 0x569b06u); LOADALL; }
  /* 00569b09 mov eax, dword ptr [esi + 0x164] */ { const u32 m_ = (u32)(esi + 0x164u); eax = (u32)(M32(m_)); }
  /* 00569b0f mov ecx, dword ptr [esi + 0x168] */ { const u32 m_ = (u32)(esi + 0x168u); ecx = (u32)(M32(m_)); }
  /* 00569b15 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569b16 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569b17 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569b18 push 0x644308 */ { u32 v_ = 0x644308u; esp -= 4; M32(esp) = v_; }
  /* 00569b1d lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00569b23 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00569b28 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00569b29 call 0x5fe928 */ esp -= 4; M32(esp) = 0x569b2eu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x569b29u); RETCHK(0x569b2eu, 0x569b29u); LOADALL;
  /* 00569b2e lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00569b34 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569b37 mov dword ptr [ebp - 0x218], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffde8u); M32(m_) = (u32)(0xfu); }
  /* 00569b41 mov dword ptr [ebp - 0x21c], edi */ { const u32 m_ = (u32)(ebp + 0xfffffde4u); M32(m_) = (u32)(edi); }
  /* 00569b47 mov byte ptr [ebp - 0x22c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffdd4u); M8(m_) = (u8)(0x0u); }
  /* 00569b4e lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00569b51:;
  /* 00569b51 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00569b53 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569b54 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00569b56 jne 0x569b51 */ if (!ZF_) goto L_00569b51;
  /* 00569b58 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00569b5a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569b5b lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00569b61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569b62 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00569b68 call 0x404420 */ esp -= 4; M32(esp) = 0x569b6du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x569b68u); RETCHK(0x569b6du, 0x569b68u); LOADALL;
  /* 00569b6d mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00569b70 mov esi, dword ptr [esi + 0x110] */ { const u32 m_ = (u32)(esi + 0x110u); esi = (u32)(M32(m_)); }
  /* 00569b76 lea eax, [ebp - 0x230] */ eax = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00569b7c call 0x5224b0 */ esp -= 4; M32(esp) = 0x569b81u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x569b7cu); RETCHK(0x569b81u, 0x569b7cu); LOADALL;
  /* 00569b81 cmp dword ptr [ebp - 0x218], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffde8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569b88 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00569b89 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00569b8a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00569b8b jb 0x569b9c */ if (CF_) goto L_00569b9c;
  /* 00569b8d mov ecx, dword ptr [ebp - 0x22c] */ { const u32 m_ = (u32)(ebp + 0xfffffdd4u); ecx = (u32)(M32(m_)); }
  /* 00569b93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569b94 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569b99u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569b94u); RETCHK(0x569b99u, 0x569b94u); LOADALL;
  /* 00569b99 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569b9c:;
  /* 00569b9c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00569b9f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00569ba6 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00569ba9 call 0x61af31 */ esp -= 4; M32(esp) = 0x569baeu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x569ba9u); RETCHK(0x569baeu, 0x569ba9u); LOADALL;
  /* 00569bae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00569bb0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00569bb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00569bc0(CPU *c) {
  NATIVE_HOOK(0x569bc0u) REGS; LOADALL;
L_00569bc0:;
  /* 00569bc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00569bc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00569bc3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00569bc5 push 0x62284b */ { u32 v_ = 0x62284bu; esp -= 4; M32(esp) = v_; }
  /* 00569bca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00569bd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569bd1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00569bd8 sub esp, 0x224 */ { u32 a_ = esp, b_ = 0x224u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569bde mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00569be3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00569be4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00569be5 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00569be8 lea esi, [edi + 0x12c] */ esi = (u32)((u32)(edi + 0x12cu));
  /* 00569bee mov ebx, 5 */ { ebx = (u32)(0x5u); }
L_00569bf3:;
  /* 00569bf3 mov ecx, dword ptr [esi - 0x3c] */ { const u32 m_ = (u32)(esi + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 00569bf6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00569bf8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569bfa call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569bfdu; SAVEALL; call_ind(c, t_); RETCHK(0x569bfdu, 0x569bfau); LOADALL; }
  /* 00569bfd mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00569bff mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00569c01 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569c03 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569c06u; SAVEALL; call_ind(c, t_); RETCHK(0x569c06u, 0x569c03u); LOADALL; }
  /* 00569c06 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00569c09 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00569c0a jne 0x569bf3 */ if (!ZF_) goto L_00569bf3;
  /* 00569c0c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00569c0e mov dword ptr [ebp - 0x214], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(ebx); }
  /* 00569c14 lea esi, [edi + 0xf0] */ esi = (u32)((u32)(edi + 0xf0u));
  /* 00569c1a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00569c20:;
  /* 00569c20 mov eax, dword ptr [edi + 0x154] */ { const u32 m_ = (u32)(edi + 0x154u); eax = (u32)(M32(m_)); }
  /* 00569c26 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569c28 je 0x569c43 */ if (ZF_) goto L_00569c43;
  /* 00569c2a mov ecx, dword ptr [edi + 0x158] */ { const u32 m_ = (u32)(edi + 0x158u); ecx = (u32)(M32(m_)); }
  /* 00569c30 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569c32 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 00569c37 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00569c39 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00569c3c mov eax, edx */ { eax = (u32)(edx); }
  /* 00569c3e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00569c41 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00569c43:;
  /* 00569c43 mov ecx, dword ptr [edi + 0x174] */ { const u32 m_ = (u32)(edi + 0x174u); ecx = (u32)(M32(m_)); }
  /* 00569c49 lea edx, [ebx + ecx*4] */ edx = (u32)((u32)(ebx + ecx * 4u));
  /* 00569c4c add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569c4e cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569c50 jae 0x569caf */ if (!CF_) goto L_00569caf;
  /* 00569c52 cmp ebx, 5 */ { u32 a_ = ebx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569c55 jge 0x569caf */ if (!LT_) goto L_00569caf;
  /* 00569c57 mov edx, dword ptr [edi + 0x154] */ { const u32 m_ = (u32)(edi + 0x154u); edx = (u32)(M32(m_)); }
  /* 00569c5d imul ecx, ecx, 0x4c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00569c60 mov eax, dword ptr [ecx + edx + 0x48] */ { const u32 m_ = (u32)(ecx + edx + 0x48u); eax = (u32)(M32(m_)); }
  /* 00569c64 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569c66 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569c69 jb 0x569c70 */ if (CF_) goto L_00569c70;
  /* 00569c6b mov eax, dword ptr [ecx + 0x34] */ { const u32 m_ = (u32)(ecx + 0x34u); eax = (u32)(M32(m_)); }
  /* 00569c6e jmp 0x569c73 */ goto L_00569c73;
L_00569c70:;
  /* 00569c70 lea eax, [ecx + 0x34] */ eax = (u32)((u32)(ecx + 0x34u));
L_00569c73:;
  /* 00569c73 mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 00569c75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569c76 call 0x50dc70 */ esp -= 4; M32(esp) = 0x569c7bu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x569c76u); RETCHK(0x569c7bu, 0x569c76u); LOADALL;
  /* 00569c7b mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00569c7d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00569c7f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00569c81 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569c84u; SAVEALL; call_ind(c, t_); RETCHK(0x569c84u, 0x569c81u); LOADALL; }
  /* 00569c84 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 00569c87 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00569c89 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00569c8b call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569c8eu; SAVEALL; call_ind(c, t_); RETCHK(0x569c8eu, 0x569c8bu); LOADALL; }
  /* 00569c8e mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 00569c91 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00569c93 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569c95 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569c98u; SAVEALL; call_ind(c, t_); RETCHK(0x569c98u, 0x569c95u); LOADALL; }
  /* 00569c98 mov ecx, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); ecx = (u32)(M32(m_)); }
  /* 00569c9e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569c9f mov dword ptr [ebp - 0x214], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(ecx); }
  /* 00569ca5 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00569ca8 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00569caa jmp 0x569c20 */ goto L_00569c20;
L_00569caf:;
  /* 00569caf mov eax, dword ptr [edi + 0x154] */ { const u32 m_ = (u32)(edi + 0x154u); eax = (u32)(M32(m_)); }
  /* 00569cb5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569cb7 je 0x569cd2 */ if (ZF_) goto L_00569cd2;
  /* 00569cb9 mov ecx, dword ptr [edi + 0x158] */ { const u32 m_ = (u32)(edi + 0x158u); ecx = (u32)(M32(m_)); }
  /* 00569cbf sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569cc1 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 00569cc6 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00569cc8 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00569ccb mov eax, edx */ { eax = (u32)(edx); }
  /* 00569ccd shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00569cd0 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00569cd2:;
  /* 00569cd2 mov ecx, dword ptr [edi + 0x174] */ { const u32 m_ = (u32)(edi + 0x174u); ecx = (u32)(M32(m_)); }
  /* 00569cd8 mov esi, dword ptr [edi + 0x160] */ { const u32 m_ = (u32)(edi + 0x160u); esi = (u32)(M32(m_)); }
  /* 00569cde inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569cdf lea ecx, [ecx + ecx*4] */ ecx = (u32)((u32)(ecx + ecx * 4u));
  /* 00569ce2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569ce4 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00569ce6 jns 0x569cea */ if (!SF_) goto L_00569cea;
  /* 00569ce8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00569cea:;
  /* 00569cea mov eax, 5 */ { eax = (u32)(0x5u); }
  /* 00569cef sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00569cf1 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569cf3 jge 0x569d1b */ if (!LT_) goto L_00569d1b;
  /* 00569cf5 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00569cf7 lea esi, [edi + ebx*4 + 0x12c] */ esi = (u32)((u32)(edi + ebx * 4u + 0x12cu));
  /* 00569cfe mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00569d00 add dword ptr [ebp - 0x214], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
L_00569d06:;
  /* 00569d06 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00569d08 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00569d0a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569d0c call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569d0fu; SAVEALL; call_ind(c, t_); RETCHK(0x569d0fu, 0x569d0cu); LOADALL; }
  /* 00569d0f add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00569d12 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00569d13 jne 0x569d06 */ if (!ZF_) goto L_00569d06;
  /* 00569d15 mov ebx, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); ebx = (u32)(M32(m_)); }
L_00569d1b:;
  /* 00569d1b cmp ebx, 5 */ { u32 a_ = ebx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569d1e jge 0x569d43 */ if (!LT_) goto L_00569d43;
  /* 00569d20 mov eax, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); eax = (u32)(M32(m_)); }
  /* 00569d26 lea esi, [edi + ebx*4 + 0x12c] */ esi = (u32)((u32)(edi + ebx * 4u + 0x12cu));
  /* 00569d2d mov ebx, 5 */ { ebx = (u32)(0x5u); }
  /* 00569d32 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
L_00569d34:;
  /* 00569d34 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00569d36 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00569d38 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00569d3a call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569d3du; SAVEALL; call_ind(c, t_); RETCHK(0x569d3du, 0x569d3au); LOADALL; }
  /* 00569d3d add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00569d40 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00569d41 jne 0x569d34 */ if (!ZF_) goto L_00569d34;
L_00569d43:;
  /* 00569d43 mov ecx, dword ptr [edi + 0xec] */ { const u32 m_ = (u32)(edi + 0xecu); ecx = (u32)(M32(m_)); }
  /* 00569d49 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00569d4b xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00569d4d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00569d4e call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569d51u; SAVEALL; call_ind(c, t_); RETCHK(0x569d51u, 0x569d4eu); LOADALL; }
  /* 00569d51 mov eax, dword ptr [edi + 0x170] */ { const u32 m_ = (u32)(edi + 0x170u); eax = (u32)(M32(m_)); }
  /* 00569d57 mov ecx, dword ptr [edi + 0x174] */ { const u32 m_ = (u32)(edi + 0x174u); ecx = (u32)(M32(m_)); }
  /* 00569d5d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569d5e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569d5f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569d60 push 0x644308 */ { u32 v_ = 0x644308u; esp -= 4; M32(esp) = v_; }
  /* 00569d65 lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00569d6b push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00569d70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00569d71 call 0x5fe928 */ esp -= 4; M32(esp) = 0x569d76u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x569d71u); RETCHK(0x569d76u, 0x569d71u); LOADALL;
  /* 00569d76 lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00569d7c add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569d7f mov dword ptr [ebp - 0x218], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffde8u); M32(m_) = (u32)(0xfu); }
  /* 00569d89 mov dword ptr [ebp - 0x21c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffde4u); M32(m_) = (u32)(esi); }
  /* 00569d8f mov byte ptr [ebp - 0x22c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffdd4u); M8(m_) = (u8)(0x0u); }
  /* 00569d96 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00569d99 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00569da0:;
  /* 00569da0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00569da2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00569da3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00569da5 jne 0x569da0 */ if (!ZF_) goto L_00569da0;
  /* 00569da7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00569da9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569daa lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00569db0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569db1 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00569db7 call 0x404420 */ esp -= 4; M32(esp) = 0x569dbcu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x569db7u); RETCHK(0x569dbcu, 0x569db7u); LOADALL;
  /* 00569dbc mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00569dbf mov esi, dword ptr [edi + 0x114] */ { const u32 m_ = (u32)(edi + 0x114u); esi = (u32)(M32(m_)); }
  /* 00569dc5 lea eax, [ebp - 0x230] */ eax = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00569dcb call 0x5224b0 */ esp -= 4; M32(esp) = 0x569dd0u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x569dcbu); RETCHK(0x569dd0u, 0x569dcbu); LOADALL;
  /* 00569dd0 cmp dword ptr [ebp - 0x218], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffde8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569dd7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00569dd8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00569dd9 jb 0x569dea */ if (CF_) goto L_00569dea;
  /* 00569ddb mov ecx, dword ptr [ebp - 0x22c] */ { const u32 m_ = (u32)(ebp + 0xfffffdd4u); ecx = (u32)(M32(m_)); }
  /* 00569de1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569de2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569de7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569de2u); RETCHK(0x569de7u, 0x569de2u); LOADALL;
  /* 00569de7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569dea:;
  /* 00569dea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00569ded mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00569df4 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00569df7 call 0x61af31 */ esp -= 4; M32(esp) = 0x569dfcu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x569df7u); RETCHK(0x569dfcu, 0x569df7u); LOADALL;
  /* 00569dfc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00569dfe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00569dff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00569e00(CPU *c) {
  NATIVE_HOOK(0x569e00u) REGS; LOADALL;
L_00569e00:;
  /* 00569e00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00569e01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00569e03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00569e05 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 00569e0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00569e10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569e11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00569e18 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569e1b mov ecx, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); ecx = (u32)(M32(m_)); }
  /* 00569e21 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00569e22 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00569e24 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569e26 je 0x569e3b */ if (ZF_) goto L_00569e3b;
  /* 00569e28 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00569e2a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00569e2b call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569e2eu; SAVEALL; call_ind(c, t_); RETCHK(0x569e2eu, 0x569e2bu); LOADALL; }
  /* 00569e2e mov eax, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); eax = (u32)(M32(m_)); }
  /* 00569e34 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00569e36 call 0x5079e0 */ esp -= 4; M32(esp) = 0x569e3bu; SAVEALL; F_005079e0(c); ABI_CHECK(0x5079e0u, 0x569e36u); RETCHK(0x569e3bu, 0x569e36u); LOADALL;
L_00569e3b:;
  /* 00569e3b mov ecx, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); ecx = (u32)(M32(m_)); }
  /* 00569e41 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569e43 je 0x569e51 */ if (ZF_) goto L_00569e51;
  /* 00569e45 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00569e47 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00569e49 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569e4bu; SAVEALL; call_ind(c, t_); RETCHK(0x569e4bu, 0x569e49u); LOADALL; }
  /* 00569e4b mov dword ptr [esi + 0xcc], ebx */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(ebx); }
L_00569e51:;
  /* 00569e51 cmp dword ptr [esi + 0xc8], ebx */ { const u32 m_ = (u32)(esi + 0xc8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569e57 je 0x569ea5 */ if (ZF_) goto L_00569ea5;
  /* 00569e59 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 00569e5b push 0x656d64 */ { u32 v_ = 0x656d64u; esp -= 4; M32(esp) = v_; }
  /* 00569e60 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00569e63 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 00569e6a mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00569e6d mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00569e70 call 0x404420 */ esp -= 4; M32(esp) = 0x569e75u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x569e70u); RETCHK(0x569e75u, 0x569e70u); LOADALL;
  /* 00569e75 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00569e78 mov eax, dword ptr [esi + 0xc8] */ { const u32 m_ = (u32)(esi + 0xc8u); eax = (u32)(M32(m_)); }
  /* 00569e7e call 0x507890 */ esp -= 4; M32(esp) = 0x569e83u; SAVEALL; F_00507890(c); ABI_CHECK(0x507890u, 0x569e7eu); RETCHK(0x569e83u, 0x569e7eu); LOADALL;
  /* 00569e83 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00569e85 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00569e88 call 0x5079f0 */ esp -= 4; M32(esp) = 0x569e8du; SAVEALL; F_005079f0(c); ABI_CHECK(0x5079f0u, 0x569e88u); RETCHK(0x569e8du, 0x569e88u); LOADALL;
  /* 00569e8d cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569e91 jb 0x569e9f */ if (CF_) goto L_00569e9f;
  /* 00569e93 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 00569e96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569e97 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x569e9cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x569e97u); RETCHK(0x569e9cu, 0x569e97u); LOADALL;
  /* 00569e9c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00569e9f:;
  /* 00569e9f mov dword ptr [esi + 0xc8], ebx */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(ebx); }
L_00569ea5:;
  /* 00569ea5 call 0x568460 */ esp -= 4; M32(esp) = 0x569eaau; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x569ea5u); RETCHK(0x569eaau, 0x569ea5u); LOADALL;
  /* 00569eaa mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00569ead mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00569eaf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00569eb0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00569eb7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00569eb9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00569eba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00569ec0(CPU *c) {
  NATIVE_HOOK(0x569ec0u) REGS; LOADALL;
L_00569ec0:;
  /* 00569ec0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00569ec1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00569ec3 cmp dword ptr [ebp + 8], 6 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569ec7 jne 0x569ed4 */ if (!ZF_) goto L_00569ed4;
  /* 00569ec9 call 0x568460 */ esp -= 4; M32(esp) = 0x569eceu; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x569ec9u); RETCHK(0x569eceu, 0x569ec9u); LOADALL;
  /* 00569ece push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569ecf call 0x568720 */ esp -= 4; M32(esp) = 0x569ed4u; SAVEALL; F_00568720(c); ABI_CHECK(0x568720u, 0x569ecfu); RETCHK(0x569ed4u, 0x569ecfu); LOADALL;
L_00569ed4:;
  /* 00569ed4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00569ed5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00569ee0(CPU *c) {
  NATIVE_HOOK(0x569ee0u) REGS; LOADALL;
L_00569ee0:;
  /* 00569ee0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00569ee1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00569ee3 sub esp, 0x104 */ { u32 a_ = esp, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569ee9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00569eee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00569eef push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569ef1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00569ef4 call 0x4019a0 */ esp -= 4; M32(esp) = 0x569ef9u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x569ef4u); RETCHK(0x569ef9u, 0x569ef4u); LOADALL;
  /* 00569ef9 mov esi, eax */ { esi = (u32)(eax); }
  /* 00569efb mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00569f01 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569f04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569f06 je 0x569f34 */ if (ZF_) goto L_00569f34;
  /* 00569f08 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00569f0e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569f10 je 0x569f1b */ if (ZF_) goto L_00569f1b;
  /* 00569f12 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00569f14 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00569f16 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569f19u; SAVEALL; call_ind(c, t_); RETCHK(0x569f19u, 0x569f16u); LOADALL; }
  /* 00569f19 jmp 0x569f1e */ goto L_00569f1e;
L_00569f1b:;
  /* 00569f1b or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00569f1e:;
  /* 00569f1e mov esi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 00569f24 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569f26 je 0x569f34 */ if (ZF_) goto L_00569f34;
  /* 00569f28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569f29 call 0x55ead0 */ esp -= 4; M32(esp) = 0x569f2eu; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x569f29u); RETCHK(0x569f2eu, 0x569f29u); LOADALL;
  /* 00569f2e mov esi, eax */ { esi = (u32)(eax); }
  /* 00569f30 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00569f32 jne 0x569f44 */ if (!ZF_) goto L_00569f44;
L_00569f34:;
  /* 00569f34 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00569f37 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00569f38 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00569f3b call 0x61af31 */ esp -= 4; M32(esp) = 0x569f40u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x569f3bu); RETCHK(0x569f40u, 0x569f3bu); LOADALL;
  /* 00569f40 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00569f42 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00569f43 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00569f44:;
  /* 00569f44 call 0x556030 */ esp -= 4; M32(esp) = 0x569f49u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x569f44u); RETCHK(0x569f49u, 0x569f44u); LOADALL;
  /* 00569f49 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00569f4b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00569f50 mov edx, 0x1e677e39 */ { edx = (u32)(0x1e677e39u); }
  /* 00569f55 call 0x5558d0 */ esp -= 4; M32(esp) = 0x569f5au; SAVEALL; F_005558d0(c); ABI_CHECK(0x5558d0u, 0x569f55u); RETCHK(0x569f5au, 0x569f55u); LOADALL;
  /* 00569f5a mov ecx, dword ptr [0x7a70e4] */ { const u32 m_ = (u32)(0x7a70e4u); ecx = (u32)(M32(m_)); }
  /* 00569f60 cmp ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569f63 jl 0x569f85 */ if (LT_) goto L_00569f85;
  /* 00569f65 cmp ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569f68 jge 0x569f6e */ if (!LT_) goto L_00569f6e;
  /* 00569f6a shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00569f6c jmp 0x569f85 */ goto L_00569f85;
L_00569f6e:;
  /* 00569f6e cmp ecx, 0x3c */ { u32 a_ = ecx, b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569f71 jge 0x569f78 */ if (!LT_) goto L_00569f78;
  /* 00569f73 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00569f76 jmp 0x569f85 */ goto L_00569f85;
L_00569f78:;
  /* 00569f78 cmp ecx, 0x50 */ { u32 a_ = ecx, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00569f7b jge 0x569f82 */ if (!LT_) goto L_00569f82;
  /* 00569f7d shl eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00569f80 jmp 0x569f85 */ goto L_00569f85;
L_00569f82:;
  /* 00569f82 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_00569f85:;
  /* 00569f85 mov ecx, dword ptr [esi + 0x60] */ { const u32 m_ = (u32)(esi + 0x60u); ecx = (u32)(M32(m_)); }
  /* 00569f88 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569f89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569f8a push 0x3df */ { u32 v_ = 0x3dfu; esp -= 4; M32(esp) = v_; }
  /* 00569f8f push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00569f94 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x569f9au; SAVEALL; call_ind(c, t_); RETCHK(0x569f9au, 0x569f94u); LOADALL; }
  /* 00569f9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569f9b lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00569fa1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00569fa2 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x569fa7u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x569fa2u); RETCHK(0x569fa7u, 0x569fa2u); LOADALL;
  /* 00569fa7 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00569fac push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00569fb1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00569fb3 push 0x569ec0 */ { u32 v_ = 0x569ec0u; esp -= 4; M32(esp) = v_; }
  /* 00569fb8 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00569fbe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00569fbf push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00569fc1 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00569fc3 call 0x50b090 */ esp -= 4; M32(esp) = 0x569fc8u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x569fc3u); RETCHK(0x569fc8u, 0x569fc3u); LOADALL;
  /* 00569fc8 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00569fcb add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00569fce xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00569fd0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00569fd1 call 0x61af31 */ esp -= 4; M32(esp) = 0x569fd6u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x569fd1u); RETCHK(0x569fd6u, 0x569fd1u); LOADALL;
  /* 00569fd6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00569fd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00569fd9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00569fe0(CPU *c) {
  NATIVE_HOOK(0x569fe0u) REGS; LOADALL;
L_00569fe0:;
  /* 00569fe0 jmp 0x569ee0 */ SAVEALL; F_00569ee0(c); return;
}

void F_00569ff0(CPU *c) {
  NATIVE_HOOK(0x569ff0u) REGS; LOADALL;
L_00569ff0:;
  /* 00569ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00569ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00569ff3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00569ff5 push 0x628c40 */ { u32 v_ = 0x628c40u; esp -= 4; M32(esp) = v_; }
  /* 00569ffa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056a000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a001 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056a008 sub esp, 0x80 */ { u32 a_ = esp, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a00e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0056a013 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056a014 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0056a017 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056a018 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056a01b mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a01e xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0056a020 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a022 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056a023 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056a025 je 0x56a4b1 */ if (ZF_) goto L_0056a4b1;
  /* 0056a02b call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a030u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a02bu); RETCHK(0x56a030u, 0x56a02bu); LOADALL;
  /* 0056a030 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056a032 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056a033 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a034 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a037 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0056a03e mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0056a041 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0056a045 call 0x404140 */ esp -= 4; M32(esp) = 0x56a04au; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56a045u); RETCHK(0x56a04au, 0x56a045u); LOADALL;
  /* 0056a04a mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0056a04d mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0056a04f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056a050 jne 0x56a49f */ if (!ZF_) goto L_0056a49f;
  /* 0056a056 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a059 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a05eu; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a059u); RETCHK(0x56a05eu, 0x56a059u); LOADALL;
  /* 0056a05e mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0056a061 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0056a063 push 0x646fc4 */ { u32 v_ = 0x646fc4u; esp -= 4; M32(esp) = v_; }
  /* 0056a068 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056a069 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056a06a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056a06c call 0x405de0 */ esp -= 4; M32(esp) = 0x56a071u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x56a06cu); RETCHK(0x56a071u, 0x56a06cu); LOADALL;
  /* 0056a071 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a073 jne 0x56a0be */ if (!ZF_) goto L_0056a0be;
  /* 0056a075 mov eax, dword ptr [edi + 0x168] */ { const u32 m_ = (u32)(edi + 0x168u); eax = (u32)(M32(m_)); }
  /* 0056a07b mov ecx, dword ptr [edi + 0x164] */ { const u32 m_ = (u32)(edi + 0x164u); ecx = (u32)(M32(m_)); }
  /* 0056a081 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a083 jge 0x56a0a1 */ if (!LT_) goto L_0056a0a1;
  /* 0056a085 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a087 jle 0x56a0a1 */ if ((ZF_|LT_)) goto L_0056a0a1;
  /* 0056a089 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056a08a cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a08c mov dword ptr [edi + 0x168], eax */ { const u32 m_ = (u32)(edi + 0x168u); M32(m_) = (u32)(eax); }
  /* 0056a092 jl 0x56a09a */ if (LT_) goto L_0056a09a;
  /* 0056a094 mov dword ptr [edi + 0x168], esi */ { const u32 m_ = (u32)(edi + 0x168u); M32(m_) = (u32)(esi); }
L_0056a09a:;
  /* 0056a09a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056a09c call 0x569a30 */ esp -= 4; M32(esp) = 0x56a0a1u; SAVEALL; F_00569a30(c); ABI_CHECK(0x569a30u, 0x56a09cu); RETCHK(0x56a0a1u, 0x56a09cu); LOADALL;
L_0056a0a1:;
  /* 0056a0a1 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a0a5 jb 0x56a5e3 */ if (CF_) goto L_0056a5e3;
  /* 0056a0ab mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0056a0ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a0af call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a0b4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a0afu); RETCHK(0x56a0b4u, 0x56a0afu); LOADALL;
  /* 0056a0b4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a0b7 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a0b9 jmp 0x56a4b3 */ goto L_0056a4b3;
L_0056a0be:;
  /* 0056a0be mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a0c1 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a0c6u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a0c1u); RETCHK(0x56a0c6u, 0x56a0c1u); LOADALL;
  /* 0056a0c6 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0056a0c9 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 0056a0cb push 0x646fb4 */ { u32 v_ = 0x646fb4u; esp -= 4; M32(esp) = v_; }
  /* 0056a0d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056a0d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056a0d2 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056a0d4 call 0x405de0 */ esp -= 4; M32(esp) = 0x56a0d9u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x56a0d4u); RETCHK(0x56a0d9u, 0x56a0d4u); LOADALL;
  /* 0056a0d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a0db jne 0x56a121 */ if (!ZF_) goto L_0056a121;
  /* 0056a0dd mov eax, dword ptr [edi + 0x168] */ { const u32 m_ = (u32)(edi + 0x168u); eax = (u32)(M32(m_)); }
  /* 0056a0e3 mov ecx, dword ptr [edi + 0x164] */ { const u32 m_ = (u32)(edi + 0x164u); ecx = (u32)(M32(m_)); }
  /* 0056a0e9 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a0eb jge 0x56a5db */ if (!LT_) goto L_0056a5db;
  /* 0056a0f1 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a0f3 jle 0x56a5db */ if ((ZF_|LT_)) goto L_0056a5db;
  /* 0056a0f9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056a0fa cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a0fc mov dword ptr [edi + 0x168], eax */ { const u32 m_ = (u32)(edi + 0x168u); M32(m_) = (u32)(eax); }
  /* 0056a102 jge 0x56a10b */ if (!LT_) goto L_0056a10b;
  /* 0056a104 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056a105 mov dword ptr [edi + 0x168], ecx */ { const u32 m_ = (u32)(edi + 0x168u); M32(m_) = (u32)(ecx); }
L_0056a10b:;
  /* 0056a10b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056a10d call 0x569a30 */ esp -= 4; M32(esp) = 0x56a112u; SAVEALL; F_00569a30(c); ABI_CHECK(0x569a30u, 0x56a10du); RETCHK(0x56a112u, 0x56a10du); LOADALL;
  /* 0056a112 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a115 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a11au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a115u); RETCHK(0x56a11au, 0x56a115u); LOADALL;
  /* 0056a11a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a11c jmp 0x56a4b3 */ goto L_0056a4b3;
L_0056a121:;
  /* 0056a121 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a124 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a129u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a124u); RETCHK(0x56a129u, 0x56a124u); LOADALL;
  /* 0056a129 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056a12b mov esi, 0x646fa4 */ { esi = (u32)(0x646fa4u); }
  /* 0056a130 call 0x405bd0 */ esp -= 4; M32(esp) = 0x56a135u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x56a130u); RETCHK(0x56a135u, 0x56a130u); LOADALL;
  /* 0056a135 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a137 je 0x56a17e */ if (ZF_) goto L_0056a17e;
  /* 0056a139 mov eax, dword ptr [edi + 0x174] */ { const u32 m_ = (u32)(edi + 0x174u); eax = (u32)(M32(m_)); }
  /* 0056a13f mov ecx, dword ptr [edi + 0x170] */ { const u32 m_ = (u32)(edi + 0x170u); ecx = (u32)(M32(m_)); }
  /* 0056a145 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a147 jge 0x56a5db */ if (!LT_) goto L_0056a5db;
  /* 0056a14d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a14f jle 0x56a5db */ if ((ZF_|LT_)) goto L_0056a5db;
  /* 0056a155 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056a156 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a158 mov dword ptr [edi + 0x174], eax */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(eax); }
  /* 0056a15e jl 0x56a16a */ if (LT_) goto L_0056a16a;
  /* 0056a160 mov dword ptr [edi + 0x174], 0 */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(0x0u); }
L_0056a16a:;
  /* 0056a16a call 0x569bc0 */ esp -= 4; M32(esp) = 0x56a16fu; SAVEALL; F_00569bc0(c); ABI_CHECK(0x569bc0u, 0x56a16au); RETCHK(0x56a16fu, 0x56a16au); LOADALL;
  /* 0056a16f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a172 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a177u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a172u); RETCHK(0x56a177u, 0x56a172u); LOADALL;
  /* 0056a177 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a179 jmp 0x56a4b3 */ goto L_0056a4b3;
L_0056a17e:;
  /* 0056a17e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a181 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a186u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a181u); RETCHK(0x56a186u, 0x56a181u); LOADALL;
  /* 0056a186 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056a188 mov esi, 0x646f94 */ { esi = (u32)(0x646f94u); }
  /* 0056a18d call 0x405bd0 */ esp -= 4; M32(esp) = 0x56a192u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x56a18du); RETCHK(0x56a192u, 0x56a18du); LOADALL;
  /* 0056a192 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a194 je 0x56a1d6 */ if (ZF_) goto L_0056a1d6;
  /* 0056a196 mov eax, dword ptr [edi + 0x174] */ { const u32 m_ = (u32)(edi + 0x174u); eax = (u32)(M32(m_)); }
  /* 0056a19c mov ecx, dword ptr [edi + 0x170] */ { const u32 m_ = (u32)(edi + 0x170u); ecx = (u32)(M32(m_)); }
  /* 0056a1a2 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a1a4 jge 0x56a5db */ if (!LT_) goto L_0056a5db;
  /* 0056a1aa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a1ac jle 0x56a5db */ if ((ZF_|LT_)) goto L_0056a5db;
  /* 0056a1b2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056a1b3 mov dword ptr [edi + 0x174], eax */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(eax); }
  /* 0056a1b9 jns 0x56a1c2 */ if (!SF_) goto L_0056a1c2;
  /* 0056a1bb dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056a1bc mov dword ptr [edi + 0x174], ecx */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(ecx); }
L_0056a1c2:;
  /* 0056a1c2 call 0x569bc0 */ esp -= 4; M32(esp) = 0x56a1c7u; SAVEALL; F_00569bc0(c); ABI_CHECK(0x569bc0u, 0x56a1c2u); RETCHK(0x56a1c7u, 0x56a1c2u); LOADALL;
  /* 0056a1c7 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a1ca call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a1cfu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a1cau); RETCHK(0x56a1cfu, 0x56a1cau); LOADALL;
  /* 0056a1cf mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a1d1 jmp 0x56a4b3 */ goto L_0056a4b3;
L_0056a1d6:;
  /* 0056a1d6 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a1d9 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a1deu; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a1d9u); RETCHK(0x56a1deu, 0x56a1d9u); LOADALL;
  /* 0056a1de mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056a1e0 mov esi, 0x647054 */ { esi = (u32)(0x647054u); }
  /* 0056a1e5 call 0x405bd0 */ esp -= 4; M32(esp) = 0x56a1eau; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x56a1e5u); RETCHK(0x56a1eau, 0x56a1e5u); LOADALL;
  /* 0056a1ea test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a1ec je 0x56a2f1 */ if (ZF_) goto L_0056a2f1;
  /* 0056a1f2 mov ecx, dword ptr [edi + 0xd4] */ { const u32 m_ = (u32)(edi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 0056a1f8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a1fa call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a1fdu; SAVEALL; call_ind(c, t_); RETCHK(0x56a1fdu, 0x56a1fau); LOADALL; }
  /* 0056a1fd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a1ff je 0x56a5db */ if (ZF_) goto L_0056a5db;
  /* 0056a205 mov esi, dword ptr [edi + 0x16c] */ { const u32 m_ = (u32)(edi + 0x16cu); esi = (u32)(M32(m_)); }
  /* 0056a20b lea ecx, [edi + 0x140] */ ecx = (u32)((u32)(edi + 0x140u));
  /* 0056a211 call 0x56af10 */ esp -= 4; M32(esp) = 0x56a216u; SAVEALL; F_0056af10(c); ABI_CHECK(0x56af10u, 0x56a211u); RETCHK(0x56a216u, 0x56a211u); LOADALL;
  /* 0056a216 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a218 jae 0x56a5db */ if (!CF_) goto L_0056a5db;
  /* 0056a21e cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a221 jle 0x56a5db */ if ((ZF_|LT_)) goto L_0056a5db;
  /* 0056a227 mov ebx, dword ptr [edi + 0x160] */ { const u32 m_ = (u32)(edi + 0x160u); ebx = (u32)(M32(m_)); }
  /* 0056a22d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a22f jg 0x56a2a7 */ if (!(ZF_|LT_)) goto L_0056a2a7;
  /* 0056a231 add edi, 0x150 */ { u32 a_ = edi, b_ = 0x150u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056a237 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056a239 call 0x56af10 */ esp -= 4; M32(esp) = 0x56a23eu; SAVEALL; F_0056af10(c); ABI_CHECK(0x56af10u, 0x56a239u); RETCHK(0x56a23eu, 0x56a239u); LOADALL;
  /* 0056a23e add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056a240 cmp eax, 0x400 */ { u32 a_ = eax, b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a245 jbe 0x56a281 */ if ((CF_|ZF_)) goto L_0056a281;
  /* 0056a247 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056a24c push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056a251 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a253 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a255 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
L_0056a25a:;
  /* 0056a25a push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0056a25f call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a265u; SAVEALL; call_ind(c, t_); RETCHK(0x56a265u, 0x56a25fu); LOADALL; }
  /* 0056a265 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a266 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056a268 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a26a call 0x50b090 */ esp -= 4; M32(esp) = 0x56a26fu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x56a26au); RETCHK(0x56a26fu, 0x56a26au); LOADALL;
  /* 0056a26f add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a272 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a275 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a27au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a275u); RETCHK(0x56a27au, 0x56a275u); LOADALL;
  /* 0056a27a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a27c jmp 0x56a4b3 */ goto L_0056a4b3;
L_0056a281:;
  /* 0056a281 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056a283 call 0x56af10 */ esp -= 4; M32(esp) = 0x56a288u; SAVEALL; F_0056af10(c); ABI_CHECK(0x56af10u, 0x56a283u); RETCHK(0x56a288u, 0x56a283u); LOADALL;
  /* 0056a288 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056a28d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056a292 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a294 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056a296 push 0x569fe0 */ { u32 v_ = 0x569fe0u; esp -= 4; M32(esp) = v_; }
  /* 0056a29b mov dword ptr [0x7a70e4], eax */ { const u32 m_ = (u32)(0x7a70e4u); M32(m_) = (u32)(eax); }
  /* 0056a2a0 push 0x3e3 */ { u32 v_ = 0x3e3u; esp -= 4; M32(esp) = v_; }
  /* 0056a2a5 jmp 0x56a25a */ goto L_0056a25a;
L_0056a2a7:;
  /* 0056a2a7 mov eax, dword ptr [edi + 0x144] */ { const u32 m_ = (u32)(edi + 0x144u); eax = (u32)(M32(m_)); }
  /* 0056a2ad imul esi, esi, 0x4c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056a2b0 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056a2b2 cmp dword ptr [esi + 8], -1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a2b6 jne 0x56a2d9 */ if (!ZF_) goto L_0056a2d9;
  /* 0056a2b8 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056a2bb mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0056a2bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056a2be push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a2bf call 0x568460 */ esp -= 4; M32(esp) = 0x56a2c4u; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x56a2bfu); RETCHK(0x56a2c4u, 0x56a2bfu); LOADALL;
  /* 0056a2c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a2c5 call 0x5684b0 */ esp -= 4; M32(esp) = 0x56a2cau; SAVEALL; F_005684b0(c); ABI_CHECK(0x5684b0u, 0x56a2c5u); RETCHK(0x56a2cau, 0x56a2c5u); LOADALL;
  /* 0056a2ca lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a2cd call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a2d2u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a2cdu); RETCHK(0x56a2d2u, 0x56a2cdu); LOADALL;
  /* 0056a2d2 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a2d4 jmp 0x56a4b3 */ goto L_0056a4b3;
L_0056a2d9:;
  /* 0056a2d9 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056a2de push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056a2e3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a2e5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a2e7 push 0x3dd */ { u32 v_ = 0x3ddu; esp -= 4; M32(esp) = v_; }
  /* 0056a2ec jmp 0x56a25a */ goto L_0056a25a;
L_0056a2f1:;
  /* 0056a2f1 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a2f4 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a2f9u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a2f4u); RETCHK(0x56a2f9u, 0x56a2f4u); LOADALL;
  /* 0056a2f9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056a2fb mov esi, 0x646f88 */ { esi = (u32)(0x646f88u); }
  /* 0056a300 call 0x405bd0 */ esp -= 4; M32(esp) = 0x56a305u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x56a300u); RETCHK(0x56a305u, 0x56a300u); LOADALL;
  /* 0056a305 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a307 je 0x56a367 */ if (ZF_) goto L_0056a367;
  /* 0056a309 mov ecx, dword ptr [edi + 0xec] */ { const u32 m_ = (u32)(edi + 0xecu); ecx = (u32)(M32(m_)); }
  /* 0056a30f mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056a311 call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a314u; SAVEALL; call_ind(c, t_); RETCHK(0x56a314u, 0x56a311u); LOADALL; }
  /* 0056a314 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a316 je 0x56a5db */ if (ZF_) goto L_0056a5db;
  /* 0056a31c mov esi, dword ptr [edi + 0x178] */ { const u32 m_ = (u32)(edi + 0x178u); esi = (u32)(M32(m_)); }
  /* 0056a322 lea ecx, [edi + 0x150] */ ecx = (u32)((u32)(edi + 0x150u));
  /* 0056a328 call 0x56af10 */ esp -= 4; M32(esp) = 0x56a32du; SAVEALL; F_0056af10(c); ABI_CHECK(0x56af10u, 0x56a328u); RETCHK(0x56a32du, 0x56a328u); LOADALL;
  /* 0056a32d cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a32f jae 0x56a5db */ if (!CF_) goto L_0056a5db;
  /* 0056a335 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a338 jle 0x56a5db */ if ((ZF_|LT_)) goto L_0056a5db;
  /* 0056a33e mov ebx, dword ptr [edi + 0x154] */ { const u32 m_ = (u32)(edi + 0x154u); ebx = (u32)(M32(m_)); }
  /* 0056a344 imul esi, esi, 0x4c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056a347 mov ecx, dword ptr [esi + ebx] */ { const u32 m_ = (u32)(esi + ebx); ecx = (u32)(M32(m_)); }
  /* 0056a34a add esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056a34c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056a34d call 0x568460 */ esp -= 4; M32(esp) = 0x56a352u; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x56a34du); RETCHK(0x56a352u, 0x56a34du); LOADALL;
  /* 0056a352 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a353 call 0x568590 */ esp -= 4; M32(esp) = 0x56a358u; SAVEALL; F_00568590(c); ABI_CHECK(0x568590u, 0x56a353u); RETCHK(0x56a358u, 0x56a353u); LOADALL;
  /* 0056a358 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a35b call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a360u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a35bu); RETCHK(0x56a360u, 0x56a35bu); LOADALL;
  /* 0056a360 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a362 jmp 0x56a4b3 */ goto L_0056a4b3;
L_0056a367:;
  /* 0056a367 lea edx, [edi + 0xf0] */ edx = (u32)((u32)(edi + 0xf0u));
  /* 0056a36d mov dword ptr [ebp - 0x84], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(0x0u); }
  /* 0056a377 mov dword ptr [ebp - 0x88], edx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(edx); }
  /* 0056a37d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0056a380:;
  /* 0056a380 push 0x646f80 */ { u32 v_ = 0x646f80u; esp -= 4; M32(esp) = v_; }
  /* 0056a385 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056a388 call 0x403060 */ esp -= 4; M32(esp) = 0x56a38du; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x56a388u); RETCHK(0x56a38du, 0x56a388u); LOADALL;
  /* 0056a38d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056a38f mov bl, byte ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056a395 add bl, 0x30 */ { u32 a_ = (ebx & 0xffu), b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ebx = (ebx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0056a398 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056a39b mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0056a39f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056a3a0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056a3a2 call 0x419e40 */ esp -= 4; M32(esp) = 0x56a3a7u; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x56a3a2u); RETCHK(0x56a3a7u, 0x56a3a2u); LOADALL;
  /* 0056a3a7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056a3aa mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a3ad call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a3b2u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a3adu); RETCHK(0x56a3b2u, 0x56a3adu); LOADALL;
  /* 0056a3b2 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056a3b5 call 0x40a560 */ esp -= 4; M32(esp) = 0x56a3bau; SAVEALL; F_0040a560(c); ABI_CHECK(0x40a560u, 0x56a3b5u); RETCHK(0x56a3bau, 0x56a3b5u); LOADALL;
  /* 0056a3ba test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a3bc je 0x56a3d4 */ if (ZF_) goto L_0056a3d4;
  /* 0056a3be mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 0056a3c4 mov ecx, dword ptr [eax - 0x18] */ { const u32 m_ = (u32)(eax + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0056a3c7 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a3c9 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a3ccu; SAVEALL; call_ind(c, t_); RETCHK(0x56a3ccu, 0x56a3c9u); LOADALL; }
  /* 0056a3cc test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a3ce jne 0x56a4ce */ if (!ZF_) goto L_0056a4ce;
L_0056a3d4:;
  /* 0056a3d4 push 0x646f78 */ { u32 v_ = 0x646f78u; esp -= 4; M32(esp) = v_; }
  /* 0056a3d9 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0056a3dc call 0x403060 */ esp -= 4; M32(esp) = 0x56a3e1u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x56a3dcu); RETCHK(0x56a3e1u, 0x56a3dcu); LOADALL;
  /* 0056a3e1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056a3e2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056a3e4 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0056a3e7 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0056a3eb call 0x419e40 */ esp -= 4; M32(esp) = 0x56a3f0u; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x56a3ebu); RETCHK(0x56a3f0u, 0x56a3ebu); LOADALL;
  /* 0056a3f0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a3f3 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a3f8u; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a3f3u); RETCHK(0x56a3f8u, 0x56a3f3u); LOADALL;
  /* 0056a3f8 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0056a3fb call 0x40a560 */ esp -= 4; M32(esp) = 0x56a400u; SAVEALL; F_0040a560(c); ABI_CHECK(0x40a560u, 0x56a3fbu); RETCHK(0x56a400u, 0x56a3fbu); LOADALL;
  /* 0056a400 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a402 je 0x56a419 */ if (ZF_) goto L_0056a419;
  /* 0056a404 mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 0056a40a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0056a40c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a40e call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a411u; SAVEALL; call_ind(c, t_); RETCHK(0x56a411u, 0x56a40eu); LOADALL; }
  /* 0056a411 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a413 jne 0x56a51c */ if (!ZF_) goto L_0056a51c;
L_0056a419:;
  /* 0056a419 push 0x646f70 */ { u32 v_ = 0x646f70u; esp -= 4; M32(esp) = v_; }
  /* 0056a41e lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0056a421 call 0x403060 */ esp -= 4; M32(esp) = 0x56a426u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x56a421u); RETCHK(0x56a426u, 0x56a421u); LOADALL;
  /* 0056a426 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056a427 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056a429 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0056a42c mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0056a430 call 0x419e40 */ esp -= 4; M32(esp) = 0x56a435u; SAVEALL; F_00419e40(c); ABI_CHECK(0x419e40u, 0x56a430u); RETCHK(0x56a435u, 0x56a430u); LOADALL;
  /* 0056a435 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a438 call 0x5075c0 */ esp -= 4; M32(esp) = 0x56a43du; SAVEALL; F_005075c0(c); ABI_CHECK(0x5075c0u, 0x56a438u); RETCHK(0x56a43du, 0x56a438u); LOADALL;
  /* 0056a43d lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0056a440 call 0x40a560 */ esp -= 4; M32(esp) = 0x56a445u; SAVEALL; F_0040a560(c); ABI_CHECK(0x40a560u, 0x56a440u); RETCHK(0x56a445u, 0x56a440u); LOADALL;
  /* 0056a445 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a447 je 0x56a45e */ if (ZF_) goto L_0056a45e;
  /* 0056a449 mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 0056a44f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0056a451 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a453 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a456u; SAVEALL; call_ind(c, t_); RETCHK(0x56a456u, 0x56a453u); LOADALL; }
  /* 0056a456 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056a458 je 0x56a567 */ if (ZF_) goto L_0056a567;
L_0056a45e:;
  /* 0056a45e lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0056a461 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a466u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a461u); RETCHK(0x56a466u, 0x56a461u); LOADALL;
  /* 0056a466 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0056a469 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a46eu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a469u); RETCHK(0x56a46eu, 0x56a469u); LOADALL;
  /* 0056a46e lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056a471 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0056a475 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a47au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a475u); RETCHK(0x56a47au, 0x56a475u); LOADALL;
  /* 0056a47a mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 0056a480 mov edx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edx = (u32)(M32(m_)); }
  /* 0056a486 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056a487 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056a48a cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a48d mov dword ptr [ebp - 0x84], eax */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M32(m_) = (u32)(eax); }
  /* 0056a493 mov dword ptr [ebp - 0x88], edx */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(edx); }
  /* 0056a499 jl 0x56a380 */ if (LT_) goto L_0056a380;
L_0056a49f:;
  /* 0056a49f cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a4a3 jb 0x56a4b1 */ if (CF_) goto L_0056a4b1;
  /* 0056a4a5 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0056a4a8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a4a9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a4aeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a4a9u); RETCHK(0x56a4aeu, 0x56a4a9u); LOADALL;
  /* 0056a4ae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056a4b1:;
  /* 0056a4b1 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0056a4b3:;
  /* 0056a4b3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056a4b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056a4b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056a4b8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056a4bf mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0056a4c2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056a4c3 call 0x61af31 */ esp -= 4; M32(esp) = 0x56a4c8u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56a4c3u); RETCHK(0x56a4c8u, 0x56a4c3u); LOADALL;
  /* 0056a4c8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056a4ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056a4cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0056a4ce:;
  /* 0056a4ce mov ecx, dword ptr [edi + 0xd4] */ { const u32 m_ = (u32)(edi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 0056a4d4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056a4d6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056a4d8 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a4dbu; SAVEALL; call_ind(c, t_); RETCHK(0x56a4dbu, 0x56a4d8u); LOADALL; }
  /* 0056a4db mov esi, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); esi = (u32)(M32(m_)); }
  /* 0056a4e1 mov ecx, dword ptr [edi + esi*4 + 0xd8] */ { const u32 m_ = (u32)(edi + esi * 4u + 0xd8u); ecx = (u32)(M32(m_)); }
  /* 0056a4e8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a4ea lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 0056a4f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a4f1 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a4f4u; SAVEALL; call_ind(c, t_); RETCHK(0x56a4f4u, 0x56a4f1u); LOADALL; }
  /* 0056a4f4 mov ecx, dword ptr [edi + 0xd4] */ { const u32 m_ = (u32)(edi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 0056a4fa mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a4fc lea eax, [ebp - 0x8c] */ eax = (u32)((u32)(ebp + 0xffffff74u));
  /* 0056a502 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a503 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a506u; SAVEALL; call_ind(c, t_); RETCHK(0x56a506u, 0x56a503u); LOADALL; }
  /* 0056a506 mov eax, dword ptr [edi + 0x168] */ { const u32 m_ = (u32)(edi + 0x168u); eax = (u32)(M32(m_)); }
  /* 0056a50c lea ecx, [esi + eax*4] */ ecx = (u32)((u32)(esi + eax * 4u));
  /* 0056a50f add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056a511 mov dword ptr [edi + 0x16c], ecx */ { const u32 m_ = (u32)(edi + 0x16cu); M32(m_) = (u32)(ecx); }
  /* 0056a517 jmp 0x56a5d3 */ goto L_0056a5d3;
L_0056a51c:;
  /* 0056a51c mov ecx, dword ptr [edi + 0xec] */ { const u32 m_ = (u32)(edi + 0xecu); ecx = (u32)(M32(m_)); }
  /* 0056a522 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a524 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056a526 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a529u; SAVEALL; call_ind(c, t_); RETCHK(0x56a529u, 0x56a526u); LOADALL; }
  /* 0056a529 mov esi, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); esi = (u32)(M32(m_)); }
  /* 0056a52f mov ecx, dword ptr [edi + esi*4 + 0xf0] */ { const u32 m_ = (u32)(edi + esi * 4u + 0xf0u); ecx = (u32)(M32(m_)); }
  /* 0056a536 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056a538 lea edx, [ebp - 0x8c] */ edx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0056a53e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a53f call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a542u; SAVEALL; call_ind(c, t_); RETCHK(0x56a542u, 0x56a53fu); LOADALL; }
  /* 0056a542 mov ecx, dword ptr [edi + 0xec] */ { const u32 m_ = (u32)(edi + 0xecu); ecx = (u32)(M32(m_)); }
  /* 0056a548 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056a54a lea edx, [ebp - 0x8c] */ edx = (u32)((u32)(ebp + 0xffffff74u));
  /* 0056a550 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a551 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a554u; SAVEALL; call_ind(c, t_); RETCHK(0x56a554u, 0x56a551u); LOADALL; }
  /* 0056a554 mov eax, dword ptr [edi + 0x174] */ { const u32 m_ = (u32)(edi + 0x174u); eax = (u32)(M32(m_)); }
  /* 0056a55a lea ecx, [esi + eax*4] */ ecx = (u32)((u32)(esi + eax * 4u));
  /* 0056a55d add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056a55f mov dword ptr [edi + 0x178], ecx */ { const u32 m_ = (u32)(edi + 0x178u); M32(m_) = (u32)(ecx); }
  /* 0056a565 jmp 0x56a5cb */ goto L_0056a5cb;
L_0056a567:;
  /* 0056a567 lea esi, [edi + 0x150] */ esi = (u32)((u32)(edi + 0x150u));
  /* 0056a56d mov edi, dword ptr [edi + 0x160] */ { const u32 m_ = (u32)(edi + 0x160u); edi = (u32)(M32(m_)); }
  /* 0056a573 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0056a575 call 0x56af10 */ esp -= 4; M32(esp) = 0x56a57au; SAVEALL; F_0056af10(c); ABI_CHECK(0x56af10u, 0x56a575u); RETCHK(0x56a57au, 0x56a575u); LOADALL;
  /* 0056a57a add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056a57c cmp eax, 0x400 */ { u32 a_ = eax, b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a581 jbe 0x56a5b0 */ if ((CF_|ZF_)) goto L_0056a5b0;
  /* 0056a583 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056a588 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056a58d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a58f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a591 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
  /* 0056a596 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0056a59b call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a5a1u; SAVEALL; call_ind(c, t_); RETCHK(0x56a5a1u, 0x56a59bu); LOADALL; }
  /* 0056a5a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a5a2 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056a5a4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a5a6 call 0x50b090 */ esp -= 4; M32(esp) = 0x56a5abu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x56a5a6u); RETCHK(0x56a5abu, 0x56a5a6u); LOADALL;
  /* 0056a5ab add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a5ae jmp 0x56a5c3 */ goto L_0056a5c3;
L_0056a5b0:;
  /* 0056a5b0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0056a5b2 call 0x56af10 */ esp -= 4; M32(esp) = 0x56a5b7u; SAVEALL; F_0056af10(c); ABI_CHECK(0x56af10u, 0x56a5b2u); RETCHK(0x56a5b7u, 0x56a5b2u); LOADALL;
  /* 0056a5b7 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056a5b9 mov dword ptr [0x7a70e4], eax */ { const u32 m_ = (u32)(0x7a70e4u); M32(m_) = (u32)(eax); }
  /* 0056a5be call 0x569ee0 */ esp -= 4; M32(esp) = 0x56a5c3u; SAVEALL; F_00569ee0(c); ABI_CHECK(0x569ee0u, 0x56a5beu); RETCHK(0x56a5c3u, 0x56a5beu); LOADALL;
L_0056a5c3:;
  /* 0056a5c3 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0056a5c6 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a5cbu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a5c6u); RETCHK(0x56a5cbu, 0x56a5c6u); LOADALL;
L_0056a5cb:;
  /* 0056a5cb lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0056a5ce call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a5d3u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a5ceu); RETCHK(0x56a5d3u, 0x56a5ceu); LOADALL;
L_0056a5d3:;
  /* 0056a5d3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056a5d6 call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a5dbu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a5d6u); RETCHK(0x56a5dbu, 0x56a5d6u); LOADALL;
L_0056a5db:;
  /* 0056a5db lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a5de call 0x43ee60 */ esp -= 4; M32(esp) = 0x56a5e3u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x56a5deu); RETCHK(0x56a5e3u, 0x56a5deu); LOADALL;
L_0056a5e3:;
  /* 0056a5e3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0056a5e5 jmp 0x56a4b3 */ goto L_0056a4b3;
}

void F_0056a5f0(CPU *c) {
  NATIVE_HOOK(0x56a5f0u) REGS; LOADALL;
L_0056a5f0:;
  /* 0056a5f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056a5f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056a5f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056a5f4 jmp 0x54c070 */ SAVEALL; F_0054c070(c); return;
}

void F_0056a600(CPU *c) {
  NATIVE_HOOK(0x56a600u) REGS; LOADALL;
L_0056a600:;
  /* 0056a600 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056a601 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056a603 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056a605 push 0x626878 */ { u32 v_ = 0x626878u; esp -= 4; M32(esp) = v_; }
  /* 0056a60a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056a610 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a611 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056a618 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a61b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0056a620 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056a623 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0056a626 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a628 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056a629 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056a62b jne 0x56a8a4 */ if (!ZF_) goto L_0056a8a4;
  /* 0056a631 mov eax, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); eax = (u32)(M32(m_)); }
  /* 0056a637 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 0056a63d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a63f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056a640 je 0x56a88a */ if (ZF_) goto L_0056a88a;
L_0056a646:;
  /* 0056a646 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056a649 cmp dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a64b jne 0x56a655 */ if (!ZF_) goto L_0056a655;
  /* 0056a64d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056a650 cmp dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a653 je 0x56a662 */ if (ZF_) goto L_0056a662;
L_0056a655:;
  /* 0056a655 mov edx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); edx = (u32)(M32(m_)); }
  /* 0056a65b add eax, 0x4c */ { u32 a_ = eax, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056a65e cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a660 jne 0x56a646 */ if (!ZF_) goto L_0056a646;
L_0056a662:;
  /* 0056a662 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a664 je 0x56a88a */ if (ZF_) goto L_0056a88a;
  /* 0056a66a mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056a66d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056a66e mov ebx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ebx = (u32)(M32(m_)); }
  /* 0056a674 lea ecx, [eax + 0x4c] */ ecx = (u32)((u32)(eax + 0x4cu));
  /* 0056a677 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a678 call 0x56b440 */ esp -= 4; M32(esp) = 0x56a67du; SAVEALL; F_0056b440(c); ABI_CHECK(0x56b440u, 0x56a678u); RETCHK(0x56a67du, 0x56a678u); LOADALL;
  /* 0056a67d mov edi, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); edi = (u32)(M32(m_)); }
  /* 0056a683 lea eax, [edi - 0x4c] */ eax = (u32)((u32)(edi + 0xffffffb4u));
  /* 0056a686 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a689 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a68b je 0x56a6e0 */ if (ZF_) goto L_0056a6e0;
  /* 0056a68d lea ebx, [eax + 0x48] */ ebx = (u32)((u32)(eax + 0x48u));
L_0056a690:;
  /* 0056a690 cmp dword ptr [ebx], 0x10 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a693 jb 0x56a6a1 */ if (CF_) goto L_0056a6a1;
  /* 0056a695 mov eax, dword ptr [ebx - 0x14] */ { const u32 m_ = (u32)(ebx + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056a698 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a699 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a69eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a699u); RETCHK(0x56a69eu, 0x56a699u); LOADALL;
  /* 0056a69e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056a6a1:;
  /* 0056a6a1 mov dword ptr [ebx], 0xf */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0xfu); }
  /* 0056a6a7 mov dword ptr [ebx - 4], 0 */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056a6ae mov byte ptr [ebx - 0x14], 0 */ { const u32 m_ = (u32)(ebx + 0xffffffecu); M8(m_) = (u8)(0x0u); }
  /* 0056a6b2 cmp dword ptr [ebx - 0x1c], 0x10 */ { const u32 m_ = (u32)(ebx + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a6b6 jb 0x56a6c4 */ if (CF_) goto L_0056a6c4;
  /* 0056a6b8 mov eax, dword ptr [ebx - 0x30] */ { const u32 m_ = (u32)(ebx + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0056a6bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a6bc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a6c1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a6bcu); RETCHK(0x56a6c1u, 0x56a6bcu); LOADALL;
  /* 0056a6c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056a6c4:;
  /* 0056a6c4 mov dword ptr [ebx - 0x1c], 0xf */ { const u32 m_ = (u32)(ebx + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0056a6cb mov dword ptr [ebx - 0x20], 0 */ { const u32 m_ = (u32)(ebx + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0056a6d2 mov byte ptr [ebx - 0x30], 0 */ { const u32 m_ = (u32)(ebx + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 0056a6d6 add ebx, 0x4c */ { u32 a_ = ebx, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056a6d9 lea eax, [ebx - 0x48] */ eax = (u32)((u32)(ebx + 0xffffffb8u));
  /* 0056a6dc cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a6de jne 0x56a690 */ if (!ZF_) goto L_0056a690;
L_0056a6e0:;
  /* 0056a6e0 add dword ptr [esi + 0x84], -0x4c */ { const u32 m_ = (u32)(esi + 0x84u); u32 a_ = M32(m_), b_ = 0xffffffb4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0056a6e7 mov eax, dword ptr [esi + 0x80] */ { const u32 m_ = (u32)(esi + 0x80u); eax = (u32)(M32(m_)); }
  /* 0056a6ed xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056a6ef cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a6f1 jne 0x56a6f7 */ if (!ZF_) goto L_0056a6f7;
  /* 0056a6f3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056a6f5 jmp 0x56a710 */ goto L_0056a710;
L_0056a6f7:;
  /* 0056a6f7 mov ecx, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); ecx = (u32)(M32(m_)); }
  /* 0056a6fd sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056a6ff mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056a704 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056a706 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056a709 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056a70b shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056a70e add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056a710:;
  /* 0056a710 lea ecx, [eax - 1] */ ecx = (u32)((u32)(eax + 0xffffffffu));
  /* 0056a713 mov eax, 0xcccccccd */ { eax = (u32)(0xcccccccdu); }
  /* 0056a718 mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056a71a mov ecx, dword ptr [esi + 0xa8] */ { const u32 m_ = (u32)(esi + 0xa8u); ecx = (u32)(M32(m_)); }
  /* 0056a720 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056a723 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056a724 mov dword ptr [esi + 0xa0], edx */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(edx); }
  /* 0056a72a dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056a72b mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0056a730 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056a732 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056a735 sar edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056a737 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056a739 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056a73c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056a73e mov dword ptr [esi + 0xa4], eax */ { const u32 m_ = (u32)(esi + 0xa4u); M32(m_) = (u32)(eax); }
  /* 0056a744 mov dword ptr [esi + 0xa8], 0xffffffff */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(0xffffffffu); }
  /* 0056a74e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a750 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056a751 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a754u; SAVEALL; call_ind(c, t_); RETCHK(0x56a754u, 0x56a751u); LOADALL; }
  /* 0056a754 call 0x556030 */ esp -= 4; M32(esp) = 0x56a759u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x56a754u); RETCHK(0x56a759u, 0x56a754u); LOADALL;
  /* 0056a759 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056a75c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056a75e call 0x555800 */ esp -= 4; M32(esp) = 0x56a763u; SAVEALL; F_00555800(c); ABI_CHECK(0x555800u, 0x56a75eu); RETCHK(0x56a763u, 0x56a75eu); LOADALL;
  /* 0056a763 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0056a765 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a767 je 0x56a87e */ if (ZF_) goto L_0056a87e;
  /* 0056a76d mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0056a772 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0056a775 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 0056a778 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0056a77c mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0056a77f mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0056a782 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0056a786 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056a789 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056a78b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056a78c lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 0056a78f mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0056a792 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056a793 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056a796 mov dword ptr [ebp - 0x5c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edx); }
  /* 0056a799 mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 0056a79c call 0x404140 */ esp -= 4; M32(esp) = 0x56a7a1u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56a79cu); RETCHK(0x56a7a1u, 0x56a79cu); LOADALL;
  /* 0056a7a1 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056a7a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056a7a4 lea edx, [ebx + 0x24] */ edx = (u32)((u32)(ebx + 0x24u));
  /* 0056a7a7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a7a8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056a7ab call 0x404140 */ esp -= 4; M32(esp) = 0x56a7b0u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56a7abu); RETCHK(0x56a7b0u, 0x56a7abu); LOADALL;
  /* 0056a7b0 mov eax, dword ptr [ebx + 0x7c] */ { const u32 m_ = (u32)(ebx + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0056a7b3 mov ecx, dword ptr [ebx + 0xc4] */ { const u32 m_ = (u32)(ebx + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 0056a7b9 mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 0056a7bc lea edi, [esi + 0x8c] */ edi = (u32)((u32)(esi + 0x8cu));
  /* 0056a7c2 lea ebx, [ebp - 0x5c] */ ebx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0056a7c5 mov eax, edi */ { eax = (u32)(edi); }
  /* 0056a7c7 mov dword ptr [ebp - 0x50], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ecx); }
  /* 0056a7ca call 0x56af30 */ esp -= 4; M32(esp) = 0x56a7cfu; SAVEALL; F_0056af30(c); ABI_CHECK(0x56af30u, 0x56a7cau); RETCHK(0x56a7cfu, 0x56a7cau); LOADALL;
  /* 0056a7cf mov ebx, dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); ebx = (u32)(M32(m_)); }
  /* 0056a7d5 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056a7d6 mov dword ptr [esi + 0x9c], ebx */ { const u32 m_ = (u32)(esi + 0x9cu); M32(m_) = (u32)(ebx); }
  /* 0056a7dc mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056a7df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a7e1 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056a7e3 je 0x56a7fb */ if (ZF_) goto L_0056a7fb;
  /* 0056a7e5 mov edi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056a7e8 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056a7ea mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056a7ef imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056a7f1 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056a7f4 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056a7f6 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056a7f9 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056a7fb:;
  /* 0056a7fb add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056a7fd mov eax, 0xcccccccd */ { eax = (u32)(0xcccccccdu); }
  /* 0056a802 mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056a804 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0056a807 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056a80a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056a80b mov dword ptr [esi + 0xac], edx */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(edx); }
  /* 0056a811 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056a813 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a815 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a818u; SAVEALL; call_ind(c, t_); RETCHK(0x56a818u, 0x56a815u); LOADALL; }
  /* 0056a818 lea edi, [esi - 0xc4] */ edi = (u32)((u32)(esi + 0xffffff3cu));
  /* 0056a81e mov dword ptr [esi + 0xb4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0xb4u); M32(m_) = (u32)(0xffffffffu); }
  /* 0056a828 call 0x569bc0 */ esp -= 4; M32(esp) = 0x56a82du; SAVEALL; F_00569bc0(c); ABI_CHECK(0x569bc0u, 0x56a828u); RETCHK(0x56a82du, 0x56a828u); LOADALL;
  /* 0056a82d mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0056a834 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056a837 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0056a83c cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a83e jb 0x56a84c */ if (CF_) goto L_0056a84c;
  /* 0056a840 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0056a843 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a844 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a849u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a844u); RETCHK(0x56a849u, 0x56a844u); LOADALL;
  /* 0056a849 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056a84c:;
  /* 0056a84c cmp dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a84f mov ebx, 0xf */ { ebx = (u32)(0xfu); }
  /* 0056a854 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0056a857 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0056a85e mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0056a862 jb 0x56a870 */ if (CF_) goto L_0056a870;
  /* 0056a864 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0056a867 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056a868 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a86du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a868u); RETCHK(0x56a86du, 0x56a868u); LOADALL;
  /* 0056a86d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056a870:;
  /* 0056a870 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 0056a873 mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 0056a87a mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
L_0056a87e:;
  /* 0056a87e lea ecx, [esi - 0xc4] */ ecx = (u32)((u32)(esi + 0xffffff3cu));
  /* 0056a884 call 0x569a30 */ esp -= 4; M32(esp) = 0x56a889u; SAVEALL; F_00569a30(c); ABI_CHECK(0x569a30u, 0x56a884u); RETCHK(0x56a889u, 0x56a884u); LOADALL;
  /* 0056a889 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0056a88a:;
  /* 0056a88a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0056a88b:;
  /* 0056a88b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056a88e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056a895 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0056a898 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056a899 call 0x61af31 */ esp -= 4; M32(esp) = 0x56a89eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56a899u); RETCHK(0x56a89eu, 0x56a899u); LOADALL;
  /* 0056a89e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056a8a0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056a8a1 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0056a8a4:;
  /* 0056a8a4 cmp eax, -3 */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a8a7 jne 0x56a8be */ if (!ZF_) goto L_0056a8be;
  /* 0056a8a9 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056a8ae push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056a8b3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a8b5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a8b7 push 0x3e2 */ { u32 v_ = 0x3e2u; esp -= 4; M32(esp) = v_; }
  /* 0056a8bc jmp 0x56a8f0 */ goto L_0056a8f0;
L_0056a8be:;
  /* 0056a8be cmp eax, -5 */ { u32 a_ = eax, b_ = 0xfffffffbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a8c1 jne 0x56a8d8 */ if (!ZF_) goto L_0056a8d8;
  /* 0056a8c3 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056a8c8 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056a8cd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a8cf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a8d1 push 0x3de */ { u32 v_ = 0x3deu; esp -= 4; M32(esp) = v_; }
  /* 0056a8d6 jmp 0x56a8f0 */ goto L_0056a8f0;
L_0056a8d8:;
  /* 0056a8d8 cmp eax, -6 */ { u32 a_ = eax, b_ = 0xfffffffau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a8db jne 0x56a88b */ if (!ZF_) goto L_0056a88b;
  /* 0056a8dd push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056a8e2 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056a8e7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a8e9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a8eb push 0x3dc */ { u32 v_ = 0x3dcu; esp -= 4; M32(esp) = v_; }
L_0056a8f0:;
  /* 0056a8f0 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0056a8f5 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56a8fbu; SAVEALL; call_ind(c, t_); RETCHK(0x56a8fbu, 0x56a8f5u); LOADALL; }
  /* 0056a8fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a8fc push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056a8fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056a900 call 0x50b090 */ esp -= 4; M32(esp) = 0x56a905u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x56a900u); RETCHK(0x56a905u, 0x56a900u); LOADALL;
  /* 0056a905 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a908 jmp 0x56a88b */ goto L_0056a88b;
}

void F_0056a910(CPU *c) {
  NATIVE_HOOK(0x56a910u) REGS; LOADALL;
L_0056a910:;
  /* 0056a910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056a911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056a913 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056a915 push 0x626878 */ { u32 v_ = 0x626878u; esp -= 4; M32(esp) = v_; }
  /* 0056a91a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056a920 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a921 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056a928 sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a92b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0056a930 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056a933 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0056a936 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056a938 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056a939 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056a93b jne 0x56ab97 */ if (!ZF_) goto L_0056ab97;
  /* 0056a941 mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0056a947 mov ecx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); ecx = (u32)(M32(m_)); }
  /* 0056a94d cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a94f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056a950 je 0x56ab7d */ if (ZF_) goto L_0056ab7d;
L_0056a956:;
  /* 0056a956 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056a959 cmp dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a95b je 0x56a96a */ if (ZF_) goto L_0056a96a;
  /* 0056a95d mov edx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); edx = (u32)(M32(m_)); }
  /* 0056a963 add eax, 0x4c */ { u32 a_ = eax, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056a966 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a968 jne 0x56a956 */ if (!ZF_) goto L_0056a956;
L_0056a96a:;
  /* 0056a96a cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a96c je 0x56ab7d */ if (ZF_) goto L_0056ab7d;
  /* 0056a972 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056a975 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056a976 mov ebx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); ebx = (u32)(M32(m_)); }
  /* 0056a97c lea ecx, [eax + 0x4c] */ ecx = (u32)((u32)(eax + 0x4cu));
  /* 0056a97f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056a980 call 0x56b440 */ esp -= 4; M32(esp) = 0x56a985u; SAVEALL; F_0056b440(c); ABI_CHECK(0x56b440u, 0x56a980u); RETCHK(0x56a985u, 0x56a980u); LOADALL;
  /* 0056a985 mov ebx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); ebx = (u32)(M32(m_)); }
  /* 0056a98b lea eax, [ebx - 0x4c] */ eax = (u32)((u32)(ebx + 0xffffffb4u));
  /* 0056a98e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056a991 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a993 je 0x56a9e8 */ if (ZF_) goto L_0056a9e8;
  /* 0056a995 lea edi, [eax + 0x48] */ edi = (u32)((u32)(eax + 0x48u));
L_0056a998:;
  /* 0056a998 cmp dword ptr [edi], 0x10 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a99b jb 0x56a9a9 */ if (CF_) goto L_0056a9a9;
  /* 0056a99d mov eax, dword ptr [edi - 0x14] */ { const u32 m_ = (u32)(edi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056a9a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a9a1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a9a6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a9a1u); RETCHK(0x56a9a6u, 0x56a9a1u); LOADALL;
  /* 0056a9a6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056a9a9:;
  /* 0056a9a9 mov dword ptr [edi], 0xf */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0xfu); }
  /* 0056a9af mov dword ptr [edi - 4], 0 */ { const u32 m_ = (u32)(edi + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056a9b6 mov byte ptr [edi - 0x14], 0 */ { const u32 m_ = (u32)(edi + 0xffffffecu); M8(m_) = (u8)(0x0u); }
  /* 0056a9ba cmp dword ptr [edi - 0x1c], 0x10 */ { const u32 m_ = (u32)(edi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a9be jb 0x56a9cc */ if (CF_) goto L_0056a9cc;
  /* 0056a9c0 mov eax, dword ptr [edi - 0x30] */ { const u32 m_ = (u32)(edi + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0056a9c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056a9c4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56a9c9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56a9c4u); RETCHK(0x56a9c9u, 0x56a9c4u); LOADALL;
  /* 0056a9c9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056a9cc:;
  /* 0056a9cc mov dword ptr [edi - 0x1c], 0xf */ { const u32 m_ = (u32)(edi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0056a9d3 mov dword ptr [edi - 0x20], 0 */ { const u32 m_ = (u32)(edi + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
  /* 0056a9da mov byte ptr [edi - 0x30], 0 */ { const u32 m_ = (u32)(edi + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 0056a9de add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056a9e1 lea eax, [edi - 0x48] */ eax = (u32)((u32)(edi + 0xffffffb8u));
  /* 0056a9e4 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056a9e6 jne 0x56a998 */ if (!ZF_) goto L_0056a998;
L_0056a9e8:;
  /* 0056a9e8 add dword ptr [esi + 0x94], -0x4c */ { const u32 m_ = (u32)(esi + 0x94u); u32 a_ = M32(m_), b_ = 0xffffffb4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 0056a9ef mov edx, dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); edx = (u32)(M32(m_)); }
  /* 0056a9f5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056a9f6 mov dword ptr [esi + 0x9c], edx */ { const u32 m_ = (u32)(esi + 0x9cu); M32(m_) = (u32)(edx); }
  /* 0056a9fc mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0056aa02 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056aa04 mov edi, edx */ { edi = (u32)(edx); }
  /* 0056aa06 je 0x56aa21 */ if (ZF_) goto L_0056aa21;
  /* 0056aa08 mov ecx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); ecx = (u32)(M32(m_)); }
  /* 0056aa0e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056aa10 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056aa15 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056aa17 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056aa1a mov eax, edx */ { eax = (u32)(edx); }
  /* 0056aa1c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056aa1f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056aa21:;
  /* 0056aa21 mov ecx, dword ptr [esi + 0xb4] */ { const u32 m_ = (u32)(esi + 0xb4u); ecx = (u32)(M32(m_)); }
  /* 0056aa27 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056aa29 mov eax, 0xcccccccd */ { eax = (u32)(0xcccccccdu); }
  /* 0056aa2e mul edi */ { u64 p_ = (u64)eax * edi; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056aa30 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056aa33 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056aa34 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056aa35 mov dword ptr [esi + 0xac], edx */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(edx); }
  /* 0056aa3b mov eax, 0x66666667 */ { eax = (u32)(0x66666667u); }
  /* 0056aa40 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056aa42 sar edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056aa44 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0056aa46 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0056aa49 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056aa4b mov dword ptr [esi + 0xb0], ecx */ { const u32 m_ = (u32)(esi + 0xb0u); M32(m_) = (u32)(ecx); }
  /* 0056aa51 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 0056aa54 mov dword ptr [esi + 0xb4], 0xffffffff */ { const u32 m_ = (u32)(esi + 0xb4u); M32(m_) = (u32)(0xffffffffu); }
  /* 0056aa5e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0056aa60 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056aa62 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56aa65u; SAVEALL; call_ind(c, t_); RETCHK(0x56aa65u, 0x56aa62u); LOADALL; }
  /* 0056aa65 lea edi, [esi - 0xc4] */ edi = (u32)((u32)(esi + 0xffffff3cu));
  /* 0056aa6b mov dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edi); }
  /* 0056aa6e call 0x569bc0 */ esp -= 4; M32(esp) = 0x56aa73u; SAVEALL; F_00569bc0(c); ABI_CHECK(0x569bc0u, 0x56aa6eu); RETCHK(0x56aa73u, 0x56aa6eu); LOADALL;
  /* 0056aa73 call 0x556030 */ esp -= 4; M32(esp) = 0x56aa78u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x56aa73u); RETCHK(0x56aa78u, 0x56aa73u); LOADALL;
  /* 0056aa78 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056aa7b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056aa7d call 0x555800 */ esp -= 4; M32(esp) = 0x56aa82u; SAVEALL; F_00555800(c); ABI_CHECK(0x555800u, 0x56aa7du); RETCHK(0x56aa82u, 0x56aa7du); LOADALL;
  /* 0056aa82 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0056aa84 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056aa86 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056aa88 je 0x56ab7c */ if (ZF_) goto L_0056ab7c;
  /* 0056aa8e mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 0056aa93 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 0056aa96 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 0056aa99 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0056aa9d mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0056aaa0 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0056aaa3 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0056aaa7 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056aaaa push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056aaac push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056aaad lea ecx, [ebx + 4] */ ecx = (u32)((u32)(ebx + 0x4u));
  /* 0056aab0 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0056aab3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056aab4 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056aab7 mov dword ptr [ebp - 0x5c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edx); }
  /* 0056aaba mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 0056aabd call 0x404140 */ esp -= 4; M32(esp) = 0x56aac2u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56aabdu); RETCHK(0x56aac2u, 0x56aabdu); LOADALL;
  /* 0056aac2 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056aac4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056aac5 lea edx, [ebx + 0x24] */ edx = (u32)((u32)(ebx + 0x24u));
  /* 0056aac8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056aac9 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056aacc call 0x404140 */ esp -= 4; M32(esp) = 0x56aad1u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56aaccu); RETCHK(0x56aad1u, 0x56aaccu); LOADALL;
  /* 0056aad1 mov eax, dword ptr [ebx + 0x7c] */ { const u32 m_ = (u32)(ebx + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0056aad4 mov ecx, dword ptr [ebx + 0xc4] */ { const u32 m_ = (u32)(ebx + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 0056aada mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 0056aadd lea edi, [esi + 0x7c] */ edi = (u32)((u32)(esi + 0x7cu));
  /* 0056aae0 lea ebx, [ebp - 0x5c] */ ebx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0056aae3 mov eax, edi */ { eax = (u32)(edi); }
  /* 0056aae5 mov dword ptr [ebp - 0x54], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(0xffffffffu); }
  /* 0056aaec mov dword ptr [ebp - 0x50], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ecx); }
  /* 0056aaef call 0x56af30 */ esp -= 4; M32(esp) = 0x56aaf4u; SAVEALL; F_0056af30(c); ABI_CHECK(0x56af30u, 0x56aaefu); RETCHK(0x56aaf4u, 0x56aaefu); LOADALL;
  /* 0056aaf4 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056aaf7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056aaf9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056aafb jne 0x56ab01 */ if (!ZF_) goto L_0056ab01;
  /* 0056aafd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056aaff jmp 0x56ab17 */ goto L_0056ab17;
L_0056ab01:;
  /* 0056ab01 mov edi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056ab04 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056ab06 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056ab0b imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056ab0d sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056ab10 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056ab12 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056ab15 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056ab17:;
  /* 0056ab17 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056ab1a lea edx, [eax - 1] */ edx = (u32)((u32)(eax + 0xffffffffu));
  /* 0056ab1d mov eax, 0xcccccccd */ { eax = (u32)(0xcccccccdu); }
  /* 0056ab22 mul edx */ { u64 p_ = (u64)eax * edx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056ab24 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056ab27 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056ab28 mov dword ptr [esi + 0xa0], edx */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(edx); }
  /* 0056ab2e mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056ab30 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056ab31 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56ab34u; SAVEALL; call_ind(c, t_); RETCHK(0x56ab34u, 0x56ab31u); LOADALL; }
  /* 0056ab34 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056ab37 mov dword ptr [esi + 0xa8], 0xffffffff */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(0xffffffffu); }
  /* 0056ab41 call 0x569a30 */ esp -= 4; M32(esp) = 0x56ab46u; SAVEALL; F_00569a30(c); ABI_CHECK(0x569a30u, 0x56ab41u); RETCHK(0x56ab46u, 0x56ab41u); LOADALL;
  /* 0056ab46 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056ab49 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0056ab4e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ab50 jb 0x56ab5e */ if (CF_) goto L_0056ab5e;
  /* 0056ab52 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0056ab55 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056ab56 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56ab5bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56ab56u); RETCHK(0x56ab5bu, 0x56ab56u); LOADALL;
  /* 0056ab5b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056ab5e:;
  /* 0056ab5e cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ab61 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0056ab68 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0056ab6b mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056ab6e jb 0x56ab7c */ if (CF_) goto L_0056ab7c;
  /* 0056ab70 mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 0056ab73 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056ab74 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56ab79u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56ab74u); RETCHK(0x56ab79u, 0x56ab74u); LOADALL;
  /* 0056ab79 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056ab7c:;
  /* 0056ab7c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0056ab7d:;
  /* 0056ab7d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0056ab7e:;
  /* 0056ab7e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056ab81 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056ab88 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0056ab8b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056ab8c call 0x61af31 */ esp -= 4; M32(esp) = 0x56ab91u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56ab8cu); RETCHK(0x56ab91u, 0x56ab8cu); LOADALL;
  /* 0056ab91 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056ab93 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056ab94 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0056ab97:;
  /* 0056ab97 cmp eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ab9a jne 0x56ab7e */ if (!ZF_) goto L_0056ab7e;
  /* 0056ab9c push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056aba1 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056aba6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056aba8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056abaa push 0x45d */ { u32 v_ = 0x45du; esp -= 4; M32(esp) = v_; }
  /* 0056abaf push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0056abb4 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56abbau; SAVEALL; call_ind(c, t_); RETCHK(0x56abbau, 0x56abb4u); LOADALL; }
  /* 0056abba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056abbb push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056abbd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056abbf call 0x50b090 */ esp -= 4; M32(esp) = 0x56abc4u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x56abbfu); RETCHK(0x56abc4u, 0x56abbfu); LOADALL;
  /* 0056abc4 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056abc7 jmp 0x56ab7e */ goto L_0056ab7e;
}

void F_0056abd0(CPU *c) {
  NATIVE_HOOK(0x56abd0u) REGS; LOADALL;
L_0056abd0:;
  /* 0056abd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056abd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056abd3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056abd6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056abd8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056abd9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056abdb jne 0x56ac5a */ if (!ZF_) goto L_0056ac5a;
  /* 0056abdd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056abde push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0056abe3 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 0056abe8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056abea push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056abec push 0x3e0 */ { u32 v_ = 0x3e0u; esp -= 4; M32(esp) = v_; }
  /* 0056abf1 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0056abf6 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56abfcu; SAVEALL; call_ind(c, t_); RETCHK(0x56abfcu, 0x56abf6u); LOADALL; }
  /* 0056abfc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056abfd push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056abff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056ac01 call 0x50b090 */ esp -= 4; M32(esp) = 0x56ac06u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x56ac01u); RETCHK(0x56ac06u, 0x56ac01u); LOADALL;
  /* 0056ac06 mov edx, dword ptr [esi + 0x9c] */ { const u32 m_ = (u32)(esi + 0x9cu); edx = (u32)(M32(m_)); }
  /* 0056ac0c add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056ac0f inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056ac10 mov dword ptr [esi + 0x9c], edx */ { const u32 m_ = (u32)(esi + 0x9cu); M32(m_) = (u32)(edx); }
  /* 0056ac16 mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0056ac1c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056ac1e mov edi, edx */ { edi = (u32)(edx); }
  /* 0056ac20 je 0x56ac3b */ if (ZF_) goto L_0056ac3b;
  /* 0056ac22 mov ecx, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); ecx = (u32)(M32(m_)); }
  /* 0056ac28 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056ac2a mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056ac2f imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056ac31 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056ac34 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056ac36 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056ac39 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056ac3b:;
  /* 0056ac3b add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056ac3d mov eax, 0xcccccccd */ { eax = (u32)(0xcccccccdu); }
  /* 0056ac42 mul edi */ { u64 p_ = (u64)eax * edi; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056ac44 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056ac47 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056ac48 lea edi, [esi - 0xc4] */ edi = (u32)((u32)(esi + 0xffffff3cu));
  /* 0056ac4e mov dword ptr [esi + 0xac], edx */ { const u32 m_ = (u32)(esi + 0xacu); M32(m_) = (u32)(edx); }
  /* 0056ac54 call 0x569bc0 */ esp -= 4; M32(esp) = 0x56ac59u; SAVEALL; F_00569bc0(c); ABI_CHECK(0x569bc0u, 0x56ac54u); RETCHK(0x56ac59u, 0x56ac54u); LOADALL;
  /* 0056ac59 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0056ac5a:;
  /* 0056ac5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056ac5b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056ac5c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0056ac60(CPU *c) {
  NATIVE_HOOK(0x56ac60u) REGS; LOADALL;
L_0056ac60:;
  /* 0056ac60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056ac61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056ac63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056ac65 push 0x626878 */ { u32 v_ = 0x626878u; esp -= 4; M32(esp) = v_; }
  /* 0056ac6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056ac70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056ac71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056ac78 sub esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056ac7b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0056ac80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056ac81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056ac82 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056ac83 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056ac85 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0056ac88 mov dword ptr [ebp - 0x64], edi */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(edi); }
  /* 0056ac8b call 0x556030 */ esp -= 4; M32(esp) = 0x56ac90u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x56ac8bu); RETCHK(0x56ac90u, 0x56ac8bu); LOADALL;
  /* 0056ac90 mov dword ptr [ebp - 0x68], eax */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(eax); }
  /* 0056ac93 mov eax, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0056ac99 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056ac9b cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ac9d je 0x56ad08 */ if (ZF_) goto L_0056ad08;
  /* 0056ac9f mov ecx, dword ptr [edi + 0x94] */ { const u32 m_ = (u32)(edi + 0x94u); ecx = (u32)(M32(m_)); }
  /* 0056aca5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056aca7 mov dword ptr [ebp - 0x60], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(ecx); }
  /* 0056acaa je 0x56acf9 */ if (ZF_) goto L_0056acf9;
  /* 0056acac lea esi, [eax + 0x48] */ esi = (u32)((u32)(eax + 0x48u));
  /* 0056acaf nop */ ;
L_0056acb0:;
  /* 0056acb0 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056acb3 jb 0x56acc1 */ if (CF_) goto L_0056acc1;
  /* 0056acb5 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056acb8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056acb9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56acbeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56acb9u); RETCHK(0x56acbeu, 0x56acb9u); LOADALL;
  /* 0056acbe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056acc1:;
  /* 0056acc1 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0056acc7 mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0056acca mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056accd cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056acd1 jb 0x56acdf */ if (CF_) goto L_0056acdf;
  /* 0056acd3 mov eax, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0056acd6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056acd7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56acdcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56acd7u); RETCHK(0x56acdcu, 0x56acd7u); LOADALL;
  /* 0056acdc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056acdf:;
  /* 0056acdf mov ecx, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ecx = (u32)(M32(m_)); }
  /* 0056ace2 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0056ace9 mov dword ptr [esi - 0x20], ebx */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0056acec mov byte ptr [esi - 0x30], bl */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056acef add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056acf2 lea eax, [esi - 0x48] */ eax = (u32)((u32)(esi + 0xffffffb8u));
  /* 0056acf5 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056acf7 jne 0x56acb0 */ if (!ZF_) goto L_0056acb0;
L_0056acf9:;
  /* 0056acf9 mov eax, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0056acff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056ad00 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56ad05u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56ad00u); RETCHK(0x56ad05u, 0x56ad00u); LOADALL;
  /* 0056ad05 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056ad08:;
  /* 0056ad08 movzx eax, word ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M16(m_)); }
  /* 0056ad0c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ad0e mov dword ptr [edi + 0x90], ebx */ { const u32 m_ = (u32)(edi + 0x90u); M32(m_) = (u32)(ebx); }
  /* 0056ad14 mov dword ptr [edi + 0x94], ebx */ { const u32 m_ = (u32)(edi + 0x94u); M32(m_) = (u32)(ebx); }
  /* 0056ad1a mov dword ptr [edi + 0x98], ebx */ { const u32 m_ = (u32)(edi + 0x98u); M32(m_) = (u32)(ebx); }
  /* 0056ad20 mov dword ptr [edi + 0x9c], ebx */ { const u32 m_ = (u32)(edi + 0x9cu); M32(m_) = (u32)(ebx); }
  /* 0056ad26 jle 0x56ae5d */ if ((ZF_|LT_)) goto L_0056ae5d;
  /* 0056ad2c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056ad2f add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056ad32 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0056ad35 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 0056ad38 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0056ad3b jmp 0x56ad40 */ goto L_0056ad40;
L_0056ad40:;
  /* 0056ad40 cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ad42 mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0056ad45 jbe 0x56ae47 */ if ((CF_|ZF_)) goto L_0056ae47;
  /* 0056ad4b jmp 0x56ad50 */ goto L_0056ad50;
L_0056ad50:;
  /* 0056ad50 mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 0056ad55 mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 0056ad58 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 0056ad5b mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056ad5e mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0056ad61 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0056ad64 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056ad67 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0056ad6a mov edx, dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0056ad6d cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ad6f jbe 0x56ae11 */ if ((CF_|ZF_)) goto L_0056ae11;
  /* 0056ad75 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ad77 je 0x56ae11 */ if (ZF_) goto L_0056ae11;
  /* 0056ad7d mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 0056ad80 call 0x555800 */ esp -= 4; M32(esp) = 0x56ad85u; SAVEALL; F_00555800(c); ABI_CHECK(0x555800u, 0x56ad80u); RETCHK(0x56ad85u, 0x56ad80u); LOADALL;
  /* 0056ad85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056ad86 mov esi, eax */ { esi = (u32)(eax); }
  /* 0056ad88 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056ad89 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0056ad8c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056ad8d lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0056ad90 mov dword ptr [ebp - 0x5c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edx); }
  /* 0056ad93 call 0x404140 */ esp -= 4; M32(esp) = 0x56ad98u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56ad93u); RETCHK(0x56ad98u, 0x56ad93u); LOADALL;
  /* 0056ad98 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056ad99 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056ad9a lea edx, [esi + 0x24] */ edx = (u32)((u32)(esi + 0x24u));
  /* 0056ad9d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056ad9e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0056ada1 call 0x404140 */ esp -= 4; M32(esp) = 0x56ada6u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56ada1u); RETCHK(0x56ada6u, 0x56ada1u); LOADALL;
  /* 0056ada6 mov dword ptr [ebp - 0x54], edi */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edi); }
  /* 0056ada9 mov eax, dword ptr [esi + 0x7c] */ { const u32 m_ = (u32)(esi + 0x7cu); eax = (u32)(M32(m_)); }
  /* 0056adac mov dword ptr [ebp - 0x4c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(eax); }
  /* 0056adaf mov ecx, dword ptr [esi + 0xc4] */ { const u32 m_ = (u32)(esi + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 0056adb5 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0056adb8 lea ebx, [ebp - 0x5c] */ ebx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 0056adbb add eax, 0x8c */ { u32 a_ = eax, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056adc0 mov dword ptr [ebp - 0x50], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ecx); }
  /* 0056adc3 call 0x56af30 */ esp -= 4; M32(esp) = 0x56adc8u; SAVEALL; F_0056af30(c); ABI_CHECK(0x56af30u, 0x56adc3u); RETCHK(0x56adc8u, 0x56adc3u); LOADALL;
  /* 0056adc8 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0056adcb cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056adcf jb 0x56addd */ if (CF_) goto L_0056addd;
  /* 0056add1 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0056add4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056add5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56addau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56add5u); RETCHK(0x56addau, 0x56add5u); LOADALL;
  /* 0056adda add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056addd:;
  /* 0056addd mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0056ade0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056ade2 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ade5 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 0056adea mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0056aded mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0056adf0 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056adf3 jb 0x56ae01 */ if (CF_) goto L_0056ae01;
  /* 0056adf5 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0056adf8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056adf9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56adfeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56adf9u); RETCHK(0x56adfeu, 0x56adf9u); LOADALL;
  /* 0056adfe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056ae01:;
  /* 0056ae01 mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 0056ae04 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056ae07 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 0056ae0a mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056ae0d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056ae0f jmp 0x56ae36 */ goto L_0056ae36;
L_0056ae11:;
  /* 0056ae11 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0056ae14 mov edx, dword ptr [eax + 0x9c] */ { const u32 m_ = (u32)(eax + 0x9cu); edx = (u32)(M32(m_)); }
  /* 0056ae1a mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0056ae1d inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056ae1e mov dword ptr [eax + 0x9c], edx */ { const u32 m_ = (u32)(eax + 0x9cu); M32(m_) = (u32)(edx); }
  /* 0056ae24 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0056ae27 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0056ae2a mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056ae2d mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 0056ae30 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 0056ae33 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
L_0056ae36:;
  /* 0056ae36 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056ae39 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0056ae3b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056ae3c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ae3e mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056ae41 jb 0x56ad50 */ if (CF_) goto L_0056ad50;
L_0056ae47:;
  /* 0056ae47 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 0056ae4a add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056ae4d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056ae4e mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0056ae51 mov dword ptr [ebp - 0x60], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(eax); }
  /* 0056ae54 jne 0x56ad40 */ if (!ZF_) goto L_0056ad40;
  /* 0056ae5a mov edi, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edi = (u32)(M32(m_)); }
L_0056ae5d:;
  /* 0056ae5d mov eax, dword ptr [edi + 0x90] */ { const u32 m_ = (u32)(edi + 0x90u); eax = (u32)(M32(m_)); }
  /* 0056ae63 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056ae65 jne 0x56ae6b */ if (!ZF_) goto L_0056ae6b;
  /* 0056ae67 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056ae69 jmp 0x56ae84 */ goto L_0056ae84;
L_0056ae6b:;
  /* 0056ae6b mov ecx, dword ptr [edi + 0x94] */ { const u32 m_ = (u32)(edi + 0x94u); ecx = (u32)(M32(m_)); }
  /* 0056ae71 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056ae73 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056ae78 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056ae7a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056ae7d mov eax, edx */ { eax = (u32)(edx); }
  /* 0056ae7f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056ae82 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056ae84:;
  /* 0056ae84 mov ecx, dword ptr [edi + 0x9c] */ { const u32 m_ = (u32)(edi + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 0056ae8a add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056ae8c mov eax, 0xcccccccd */ { eax = (u32)(0xcccccccdu); }
  /* 0056ae91 mul ecx */ { u64 p_ = (u64)eax * ecx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056ae93 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056ae96 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056ae97 mov dword ptr [edi + 0xac], edx */ { const u32 m_ = (u32)(edi + 0xacu); M32(m_) = (u32)(edx); }
  /* 0056ae9d mov dword ptr [edi + 0xb0], ebx */ { const u32 m_ = (u32)(edi + 0xb0u); M32(m_) = (u32)(ebx); }
  /* 0056aea3 add edi, 0xffffff3c */ { u32 a_ = edi, b_ = 0xffffff3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056aea9 call 0x569bc0 */ esp -= 4; M32(esp) = 0x56aeaeu; SAVEALL; F_00569bc0(c); ABI_CHECK(0x569bc0u, 0x56aea9u); RETCHK(0x56aeaeu, 0x56aea9u); LOADALL;
  /* 0056aeae mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056aeb1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056aeb2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056aeb3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056aeba mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0056aebd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056aebe call 0x61af31 */ esp -= 4; M32(esp) = 0x56aec3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56aebeu); RETCHK(0x56aec3u, 0x56aebeu); LOADALL;
  /* 0056aec3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056aec5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056aec6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0056af10(CPU *c) {
  NATIVE_HOOK(0x56af10u) REGS; LOADALL;
L_0056af10:;
  /* 0056af10 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056af13 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056af15 jne 0x56af18 */ if (!ZF_) goto L_0056af18;
  /* 0056af17 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056af18:;
  /* 0056af18 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056af1b sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056af1d mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056af22 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056af24 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056af27 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056af29 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056af2c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056af2e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056af30(CPU *c) {
  NATIVE_HOOK(0x56af30u) REGS; LOADALL;
L_0056af30:;
  /* 0056af30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056af31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056af33 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056af34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056af35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056af36 mov edi, eax */ { edi = (u32)(eax); }
  /* 0056af38 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056af3b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056af3d jne 0x56af43 */ if (!ZF_) goto L_0056af43;
  /* 0056af3f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056af41 jmp 0x56af59 */ goto L_0056af59;
L_0056af43:;
  /* 0056af43 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056af46 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056af48 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056af4d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056af4f sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056af52 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0056af54 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0056af57 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0056af59:;
  /* 0056af59 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056af5b je 0x56af99 */ if (ZF_) goto L_0056af99;
  /* 0056af5d mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056af60 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056af62 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056af67 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056af69 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056af6c mov eax, edx */ { eax = (u32)(edx); }
  /* 0056af6e shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056af71 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056af73 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056af75 jae 0x56af99 */ if (!CF_) goto L_0056af99;
  /* 0056af77 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0056af7a mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056af7d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056af7e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056af7f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056af80 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0056af85 call 0x56b4a0 */ esp -= 4; M32(esp) = 0x56af8au; SAVEALL; F_0056b4a0(c); ABI_CHECK(0x56b4a0u, 0x56af85u); RETCHK(0x56af8au, 0x56af85u); LOADALL;
  /* 0056af8a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056af8d add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056af90 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0056af93 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056af94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056af95 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056af97 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056af98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056af99:;
  /* 0056af99 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056af9c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056af9d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056af9e lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0056afa1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056afa2 call 0x56afb0 */ esp -= 4; M32(esp) = 0x56afa7u; SAVEALL; F_0056afb0(c); ABI_CHECK(0x56afb0u, 0x56afa2u); RETCHK(0x56afa7u, 0x56afa2u); LOADALL;
  /* 0056afa7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056afa8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056afa9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056afab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056afac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056afb0(CPU *c) {
  NATIVE_HOOK(0x56afb0u) REGS; LOADALL;
L_0056afb0:;
  /* 0056afb0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056afb1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056afb3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056afb4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0056afb7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056afb8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056afbb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056afbd je 0x56afda */ if (ZF_) goto L_0056afda;
  /* 0056afbf mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056afc2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056afc4 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056afc9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056afcb sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056afce mov eax, edx */ { eax = (u32)(edx); }
  /* 0056afd0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056afd3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056afd5 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056afd8 jne 0x56afde */ if (!ZF_) goto L_0056afde;
L_0056afda:;
  /* 0056afda xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0056afdc jmp 0x56aff3 */ goto L_0056aff3;
L_0056afde:;
  /* 0056afde mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056afe0 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056afe2 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056afe7 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056afe9 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056afec mov esi, edx */ { esi = (u32)(edx); }
  /* 0056afee shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0056aff1 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0056aff3:;
  /* 0056aff3 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056aff6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056aff8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056aff9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056affa call 0x56b030 */ esp -= 4; M32(esp) = 0x56afffu; SAVEALL; F_0056b030(c); ABI_CHECK(0x56b030u, 0x56affau); RETCHK(0x56afffu, 0x56affau); LOADALL;
  /* 0056afff imul esi, esi, 0x4c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b002 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b005 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056b008 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0056b00a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b00b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b00c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b00d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0056b010(CPU *c) {
  NATIVE_HOOK(0x56b010u) REGS; LOADALL;
L_0056b010:;
  /* 0056b010 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b011 mov esi, eax */ { esi = (u32)(eax); }
  /* 0056b013 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b015 je 0x56b023 */ if (ZF_) goto L_0056b023;
L_0056b017:;
  /* 0056b017 call 0x5699e0 */ esp -= 4; M32(esp) = 0x56b01cu; SAVEALL; F_005699e0(c); ABI_CHECK(0x5699e0u, 0x56b017u); RETCHK(0x56b01cu, 0x56b017u); LOADALL;
  /* 0056b01c add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b01f cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b021 jne 0x56b017 */ if (!ZF_) goto L_0056b017;
L_0056b023:;
  /* 0056b023 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b024 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b030(CPU *c) {
  NATIVE_HOOK(0x56b030u) REGS; LOADALL;
L_0056b030:;
  /* 0056b030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056b031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056b033 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b035 push 0x61d4e8 */ { u32 v_ = 0x61d4e8u; esp -= 4; M32(esp) = v_; }
  /* 0056b03a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056b040 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b041 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056b048 sub esp, 0x5c */ { u32 a_ = esp, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b04b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0056b050 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b051 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0056b054 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b055 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056b058 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b059 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0056b05c lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b05f mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0056b062 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b063 call 0x56b350 */ esp -= 4; M32(esp) = 0x56b068u; SAVEALL; F_0056b350(c); ABI_CHECK(0x56b350u, 0x56b063u); RETCHK(0x56b068u, 0x56b063u); LOADALL;
  /* 0056b068 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056b06a mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 0056b06d mov edi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0056b070 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b072 je 0x56b08a */ if (ZF_) goto L_0056b08a;
  /* 0056b074 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b077 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056b079 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b07e imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b080 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b083 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0056b085 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0056b088 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0056b08a:;
  /* 0056b08a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056b08c je 0x56b2f3 */ if (ZF_) goto L_0056b2f3;
  /* 0056b092 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056b094 jne 0x56b09a */ if (!ZF_) goto L_0056b09a;
  /* 0056b096 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056b098 jmp 0x56b0b0 */ goto L_0056b0b0;
L_0056b09a:;
  /* 0056b09a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b09d sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b09f mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b0a4 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b0a6 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b0a9 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b0ab shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b0ae add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056b0b0:;
  /* 0056b0b0 mov edx, 0x35e50d7 */ { edx = (u32)(0x35e50d7u); }
  /* 0056b0b5 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b0b7 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b0b9 jae 0x56b0c0 */ if (!CF_) goto L_0056b0c0;
  /* 0056b0bb call 0x49ac70 */ esp -= 4; M32(esp) = 0x56b0c0u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x56b0bbu); RETCHK(0x56b0c0u, 0x56b0bbu); LOADALL;
L_0056b0c0:;
  /* 0056b0c0 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056b0c2 jne 0x56b0c8 */ if (!ZF_) goto L_0056b0c8;
  /* 0056b0c4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056b0c6 jmp 0x56b0de */ goto L_0056b0de;
L_0056b0c8:;
  /* 0056b0c8 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b0cb sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b0cd mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b0d2 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b0d4 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b0d7 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b0d9 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b0dc add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056b0de:;
  /* 0056b0de add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056b0e0 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b0e2 jae 0x56b206 */ if (!CF_) goto L_0056b206;
  /* 0056b0e8 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0056b0ea shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b0ec mov edx, 0x35e50d7 */ { edx = (u32)(0x35e50d7u); }
  /* 0056b0f1 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b0f3 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b0f5 jae 0x56b0fb */ if (!CF_) goto L_0056b0fb;
  /* 0056b0f7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056b0f9 jmp 0x56b0fd */ goto L_0056b0fd;
L_0056b0fb:;
  /* 0056b0fb add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0056b0fd:;
  /* 0056b0fd test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056b0ff jne 0x56b105 */ if (!ZF_) goto L_0056b105;
  /* 0056b101 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056b103 jmp 0x56b11b */ goto L_0056b11b;
L_0056b105:;
  /* 0056b105 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b108 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b10a mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b10f imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b111 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b114 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b116 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b119 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056b11b:;
  /* 0056b11b add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056b11d cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b11f jae 0x56b12c */ if (!CF_) goto L_0056b12c;
  /* 0056b121 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0056b123 call 0x56af10 */ esp -= 4; M32(esp) = 0x56b128u; SAVEALL; F_0056af10(c); ABI_CHECK(0x56af10u, 0x56b123u); RETCHK(0x56b128u, 0x56b123u); LOADALL;
  /* 0056b128 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056b12a add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0056b12c:;
  /* 0056b12c imul ecx, ecx, 0x4c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b12f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b130 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0056b133 call 0x5fe934 */ esp -= 4; M32(esp) = 0x56b138u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x56b133u); RETCHK(0x56b138u, 0x56b133u); LOADALL;
  /* 0056b138 mov edi, eax */ { edi = (u32)(eax); }
  /* 0056b13a mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0056b13e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b141 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b144 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056b147 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b148 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b149 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b14a mov dword ptr [ebp - 0x64], edi */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(edi); }
  /* 0056b14d mov dword ptr [ebp - 0x68], edi */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(edi); }
  /* 0056b150 call 0x56b5d0 */ esp -= 4; M32(esp) = 0x56b155u; SAVEALL; F_0056b5d0(c); ABI_CHECK(0x56b5d0u, 0x56b150u); RETCHK(0x56b155u, 0x56b150u); LOADALL;
  /* 0056b155 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b158 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b15b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b15c lea edx, [ebp - 0x60] */ edx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b15f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b160 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b161 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b163 mov dword ptr [ebp - 0x68], eax */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(eax); }
  /* 0056b166 call 0x56b4a0 */ esp -= 4; M32(esp) = 0x56b16bu; SAVEALL; F_0056b4a0(c); ABI_CHECK(0x56b4a0u, 0x56b166u); RETCHK(0x56b16bu, 0x56b166u); LOADALL;
  /* 0056b16b mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 0056b16e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b171 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056b173 imul eax, eax, 0x4c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b176 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b179 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056b17b mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056b17e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b17f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b180 mov dword ptr [ebp - 0x68], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(ecx); }
  /* 0056b183 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b186 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b187 call 0x56b5d0 */ esp -= 4; M32(esp) = 0x56b18cu; SAVEALL; F_0056b5d0(c); ABI_CHECK(0x56b5d0u, 0x56b187u); RETCHK(0x56b18cu, 0x56b187u); LOADALL;
  /* 0056b18c mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056b18f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b192 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056b194 jne 0x56b19a */ if (!ZF_) goto L_0056b19a;
  /* 0056b196 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056b198 jmp 0x56b1b0 */ goto L_0056b1b0;
L_0056b19a:;
  /* 0056b19a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b19d sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b19f mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b1a4 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b1a6 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b1a9 mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b1ab shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b1ae add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0056b1b0:;
  /* 0056b1b0 add ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b1b2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056b1b4 je 0x56b1cf */ if (ZF_) goto L_0056b1cf;
  /* 0056b1b6 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056b1b9 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0056b1bb call 0x56b010 */ esp -= 4; M32(esp) = 0x56b1c0u; SAVEALL; F_0056b010(c); ABI_CHECK(0x56b010u, 0x56b1bbu); RETCHK(0x56b1c0u, 0x56b1bbu); LOADALL;
  /* 0056b1c0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056b1c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b1c4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b1c9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b1c4u); RETCHK(0x56b1c9u, 0x56b1c4u); LOADALL;
  /* 0056b1c9 mov edi, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); edi = (u32)(M32(m_)); }
  /* 0056b1cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b1cf:;
  /* 0056b1cf mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056b1d2 imul ebx, ebx, 0x4c */ { s64 p_ = (s64)(s32)ebx * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ebx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b1d5 add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056b1d7 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b1d9 mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0056b1dc mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0056b1df mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0056b1e2 jmp 0x56b2f3 */ goto L_0056b2f3;
L_0056b206:;
  /* 0056b206 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056b209 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0056b20c mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0056b20e sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b210 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b215 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b217 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b21a mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b21c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b21f mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0056b221 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056b223 imul edi, edi, 0x4c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b226 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b228 mov dword ptr [ebp - 0x64], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ecx); }
  /* 0056b22b jae 0x56b2be */ if (!CF_) goto L_0056b2be;
  /* 0056b231 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b234 lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 0056b237 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b23a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b23b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b23c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b23d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b240 call 0x56b5d0 */ esp -= 4; M32(esp) = 0x56b245u; SAVEALL; F_0056b5d0(c); ABI_CHECK(0x56b5d0u, 0x56b240u); RETCHK(0x56b245u, 0x56b240u); LOADALL;
  /* 0056b245 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0056b249 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056b24c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b24f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0056b251 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b253 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b258 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b25a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b25d mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b25f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b262 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056b264 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b267 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b269 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b26a lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b26d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b26e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b26f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b271 call 0x56b4a0 */ esp -= 4; M32(esp) = 0x56b276u; SAVEALL; F_0056b4a0(c); ABI_CHECK(0x56b4a0u, 0x56b271u); RETCHK(0x56b276u, 0x56b271u); LOADALL;
  /* 0056b276 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056b27d mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0056b280 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b283 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b285 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0056b288 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0056b28a sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b28c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b28f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b290 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b293 call 0x56b3e0 */ esp -= 4; M32(esp) = 0x56b298u; SAVEALL; F_0056b3e0(c); ABI_CHECK(0x56b3e0u, 0x56b293u); RETCHK(0x56b298u, 0x56b293u); LOADALL;
  /* 0056b298 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b29b jmp 0x56b2f3 */ goto L_0056b2f3;
L_0056b2be:;
  /* 0056b2be mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b2c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b2c2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056b2c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2c5 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b2c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2c8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b2ca call 0x56b5d0 */ esp -= 4; M32(esp) = 0x56b2cfu; SAVEALL; F_0056b5d0(c); ABI_CHECK(0x56b5d0u, 0x56b2cau); RETCHK(0x56b2cfu, 0x56b2cau); LOADALL;
  /* 0056b2cf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b2d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2d3 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056b2d6 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0056b2d9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b2db mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0056b2de call 0x56b570 */ esp -= 4; M32(esp) = 0x56b2e3u; SAVEALL; F_0056b570(c); ABI_CHECK(0x56b570u, 0x56b2deu); RETCHK(0x56b2e3u, 0x56b2deu); LOADALL;
  /* 0056b2e3 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b2e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b2e6 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b2e9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056b2eb call 0x56b3e0 */ esp -= 4; M32(esp) = 0x56b2f0u; SAVEALL; F_0056b3e0(c); ABI_CHECK(0x56b3e0u, 0x56b2ebu); RETCHK(0x56b2f0u, 0x56b2ebu); LOADALL;
  /* 0056b2f0 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b2f3:;
  /* 0056b2f3 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0056b2f6 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0056b2fb cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b2fd jb 0x56b30b */ if (CF_) goto L_0056b30b;
  /* 0056b2ff mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0056b302 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b303 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b308u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b303u); RETCHK(0x56b308u, 0x56b303u); LOADALL;
  /* 0056b308 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b30b:;
  /* 0056b30b cmp dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b30e mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0056b315 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0056b31c mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 0056b320 jb 0x56b32e */ if (CF_) goto L_0056b32e;
  /* 0056b322 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0056b325 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b326 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b32bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b326u); RETCHK(0x56b32bu, 0x56b326u); LOADALL;
  /* 0056b32b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b32e:;
  /* 0056b32e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b331 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b338 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0056b33b call 0x61af31 */ esp -= 4; M32(esp) = 0x56b340u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56b33bu); RETCHK(0x56b340u, 0x56b33bu); LOADALL;
  /* 0056b340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b341 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b342 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b343 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b345 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b346 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0056b1e7(CPU *c) {
  NATIVE_HOOK(0x56b1e7u) REGS; LOADALL;
L_0056b1e7:;
  /* 0056b1e7 mov esi, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); esi = (u32)(M32(m_)); }
  /* 0056b1ea mov edi, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); edi = (u32)(M32(m_)); }
  /* 0056b1ed mov eax, esi */ { eax = (u32)(esi); }
  /* 0056b1ef call 0x56b010 */ esp -= 4; M32(esp) = 0x56b1f4u; SAVEALL; F_0056b010(c); ABI_CHECK(0x56b010u, 0x56b1efu); RETCHK(0x56b1f4u, 0x56b1efu); LOADALL;
  /* 0056b1f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b1f5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b1fau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b1f5u); RETCHK(0x56b1fau, 0x56b1f5u); LOADALL;
  /* 0056b1fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b1fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b1ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b201 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0056b206 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056b209 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0056b20c mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0056b20e sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b210 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b215 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b217 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b21a mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b21c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b21f mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0056b221 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056b223 imul edi, edi, 0x4c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b226 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b228 mov dword ptr [ebp - 0x64], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ecx); }
  /* 0056b22b jae 0x56b2be */ if (!CF_) goto L_0056b2be;
  /* 0056b231 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b234 lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 0056b237 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b23a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b23b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b23c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b23d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b240 call 0x56b5d0 */ esp -= 4; M32(esp) = 0x56b245u; SAVEALL; F_0056b5d0(c); ABI_CHECK(0x56b5d0u, 0x56b240u); RETCHK(0x56b245u, 0x56b240u); LOADALL;
  /* 0056b245 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0056b249 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056b24c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b24f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0056b251 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0056b253 mov eax, 0x6bca1af3 */ { eax = (u32)(0x6bca1af3u); }
  /* 0056b258 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b25a sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0056b25d mov eax, edx */ { eax = (u32)(edx); }
  /* 0056b25f shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056b262 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056b264 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b267 sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b269 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b26a lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b26d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b26e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b26f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b271 call 0x56b4a0 */ esp -= 4; M32(esp) = 0x56b276u; SAVEALL; F_0056b4a0(c); ABI_CHECK(0x56b4a0u, 0x56b271u); RETCHK(0x56b276u, 0x56b271u); LOADALL;
  /* 0056b276 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056b27d mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0056b280 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b283 add ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b285 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0056b288 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0056b28a sub esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b28c add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b28f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b290 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b293 call 0x56b3e0 */ esp -= 4; M32(esp) = 0x56b298u; SAVEALL; F_0056b3e0(c); ABI_CHECK(0x56b3e0u, 0x56b293u); RETCHK(0x56b298u, 0x56b293u); LOADALL;
  /* 0056b298 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b29b jmp 0x56b2f3 */ goto L_0056b2f3;
L_0056b2be:;
  /* 0056b2be mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b2c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b2c2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056b2c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2c5 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b2c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2c8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b2ca call 0x56b5d0 */ esp -= 4; M32(esp) = 0x56b2cfu; SAVEALL; F_0056b5d0(c); ABI_CHECK(0x56b5d0u, 0x56b2cau); RETCHK(0x56b2cfu, 0x56b2cau); LOADALL;
  /* 0056b2cf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b2d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2d3 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056b2d6 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0056b2d9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b2db mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0056b2de call 0x56b570 */ esp -= 4; M32(esp) = 0x56b2e3u; SAVEALL; F_0056b570(c); ABI_CHECK(0x56b570u, 0x56b2deu); RETCHK(0x56b2e3u, 0x56b2deu); LOADALL;
  /* 0056b2e3 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b2e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b2e6 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b2e9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056b2eb call 0x56b3e0 */ esp -= 4; M32(esp) = 0x56b2f0u; SAVEALL; F_0056b3e0(c); ABI_CHECK(0x56b3e0u, 0x56b2ebu); RETCHK(0x56b2f0u, 0x56b2ebu); LOADALL;
  /* 0056b2f0 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b2f3:;
  /* 0056b2f3 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0056b2f6 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0056b2fb cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b2fd jb 0x56b30b */ if (CF_) goto L_0056b30b;
  /* 0056b2ff mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0056b302 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b303 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b308u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b303u); RETCHK(0x56b308u, 0x56b303u); LOADALL;
  /* 0056b308 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b30b:;
  /* 0056b30b cmp dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b30e mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0056b315 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0056b31c mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 0056b320 jb 0x56b32e */ if (CF_) goto L_0056b32e;
  /* 0056b322 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0056b325 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b326 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b32bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b326u); RETCHK(0x56b32bu, 0x56b326u); LOADALL;
  /* 0056b32b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b32e:;
  /* 0056b32e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b331 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b338 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0056b33b call 0x61af31 */ esp -= 4; M32(esp) = 0x56b340u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56b33bu); RETCHK(0x56b340u, 0x56b33bu); LOADALL;
  /* 0056b340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b341 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b342 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b343 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b345 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b346 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0056b29d(CPU *c) {
  NATIVE_HOOK(0x56b29du) REGS; LOADALL;
L_0056b29d:;
  /* 0056b29d mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0056b2a0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056b2a3 imul eax, eax, 0x4c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x4cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0056b2a6 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0056b2a9 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b2ac add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b2ae add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056b2b0 call 0x56b010 */ esp -= 4; M32(esp) = 0x56b2b5u; SAVEALL; F_0056b010(c); ABI_CHECK(0x56b010u, 0x56b2b0u); RETCHK(0x56b2b5u, 0x56b2b0u); LOADALL;
  /* 0056b2b5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b2b7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b2b9 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0056b2be mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b2c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b2c2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0056b2c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2c5 sub ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056b2c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2c8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b2ca call 0x56b5d0 */ esp -= 4; M32(esp) = 0x56b2cfu; SAVEALL; F_0056b5d0(c); ABI_CHECK(0x56b5d0u, 0x56b2cau); RETCHK(0x56b2cfu, 0x56b2cau); LOADALL;
  /* 0056b2cf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b2d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b2d3 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056b2d6 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 0056b2d9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0056b2db mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0056b2de call 0x56b570 */ esp -= 4; M32(esp) = 0x56b2e3u; SAVEALL; F_0056b570(c); ABI_CHECK(0x56b570u, 0x56b2deu); RETCHK(0x56b2e3u, 0x56b2deu); LOADALL;
  /* 0056b2e3 add edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b2e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b2e6 lea edi, [ebp - 0x60] */ edi = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0056b2e9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056b2eb call 0x56b3e0 */ esp -= 4; M32(esp) = 0x56b2f0u; SAVEALL; F_0056b3e0(c); ABI_CHECK(0x56b3e0u, 0x56b2ebu); RETCHK(0x56b2f0u, 0x56b2ebu); LOADALL;
  /* 0056b2f0 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b2f3 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0056b2f6 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0056b2fb cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b2fd jb 0x56b30b */ if (CF_) goto L_0056b30b;
  /* 0056b2ff mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0056b302 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b303 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b308u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b303u); RETCHK(0x56b308u, 0x56b303u); LOADALL;
  /* 0056b308 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b30b:;
  /* 0056b30b cmp dword ptr [ebp - 0x34], esi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b30e mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0056b315 mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 0056b31c mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 0056b320 jb 0x56b32e */ if (CF_) goto L_0056b32e;
  /* 0056b322 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 0056b325 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b326 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b32bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b326u); RETCHK(0x56b32bu, 0x56b326u); LOADALL;
  /* 0056b32b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b32e:;
  /* 0056b32e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b331 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b338 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0056b33b call 0x61af31 */ esp -= 4; M32(esp) = 0x56b340u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x56b33bu); RETCHK(0x56b340u, 0x56b33bu); LOADALL;
  /* 0056b340 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b341 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b342 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b343 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b345 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b346 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0056b350(CPU *c) {
  NATIVE_HOOK(0x56b350u) REGS; LOADALL;
L_0056b350:;
  /* 0056b350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056b351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056b353 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056b359 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b35b push 0x61b79b */ { u32 v_ = 0x61b79bu; esp -= 4; M32(esp) = v_; }
  /* 0056b360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b361 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056b368 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b369 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b36a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056b36d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b36e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056b370 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0056b372 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0056b374 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056b377 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0056b37a mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b37d mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0056b380 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b383 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056b386 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056b389 mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0056b38c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056b38e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b390 lea ecx, [esi + 0x14] */ ecx = (u32)((u32)(esi + 0x14u));
  /* 0056b393 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b394 lea edx, [edi + 0x14] */ edx = (u32)((u32)(edi + 0x14u));
  /* 0056b397 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0056b39e mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0056b3a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b3a2 mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b3a5 call 0x404140 */ esp -= 4; M32(esp) = 0x56b3aau; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b3a5u); RETCHK(0x56b3aau, 0x56b3a5u); LOADALL;
  /* 0056b3aa push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b3ac lea ecx, [esi + 0x30] */ ecx = (u32)((u32)(esi + 0x30u));
  /* 0056b3af mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0056b3b2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b3b3 add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b3b6 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0056b3bd mov dword ptr [ecx + 0x14], ebx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0056b3c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b3c1 mov byte ptr [ecx + 4], bl */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b3c4 call 0x404140 */ esp -= 4; M32(esp) = 0x56b3c9u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b3c4u); RETCHK(0x56b3c9u, 0x56b3c4u); LOADALL;
  /* 0056b3c9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b3cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b3cd mov eax, esi */ { eax = (u32)(esi); }
  /* 0056b3cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b3d0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b3d7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b3d8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b3da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b3db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0056b3e0(CPU *c) {
  NATIVE_HOOK(0x56b3e0u) REGS; LOADALL;
L_0056b3e0:;
  /* 0056b3e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056b3e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056b3e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b3e4 mov esi, eax */ { esi = (u32)(eax); }
  /* 0056b3e6 cmp esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b3e9 je 0x56b434 */ if (ZF_) goto L_0056b434;
  /* 0056b3eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b3ec lea ebx, [edi + 0x14] */ ebx = (u32)((u32)(edi + 0x14u));
  /* 0056b3ef nop */ ;
L_0056b3f0:;
  /* 0056b3f0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0056b3f2 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0056b3f4 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056b3f7 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0056b3fa mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b3fd mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0056b400 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b403 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b405 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056b408 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056b40b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b40d mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0056b410 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b411 lea ecx, [esi + 0x14] */ ecx = (u32)((u32)(esi + 0x14u));
  /* 0056b414 call 0x404140 */ esp -= 4; M32(esp) = 0x56b419u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b414u); RETCHK(0x56b419u, 0x56b414u); LOADALL;
  /* 0056b419 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b41b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b41d lea eax, [edi + 0x30] */ eax = (u32)((u32)(edi + 0x30u));
  /* 0056b420 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b421 lea ecx, [esi + 0x30] */ ecx = (u32)((u32)(esi + 0x30u));
  /* 0056b424 call 0x404140 */ esp -= 4; M32(esp) = 0x56b429u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b424u); RETCHK(0x56b429u, 0x56b424u); LOADALL;
  /* 0056b429 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056b42c add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b42f cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b431 jne 0x56b3f0 */ if (!ZF_) goto L_0056b3f0;
  /* 0056b433 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0056b434:;
  /* 0056b434 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b435 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b436 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b440(CPU *c) {
  NATIVE_HOOK(0x56b440u) REGS; LOADALL;
L_0056b440:;
  /* 0056b440 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b441 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056b443 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b445 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b446 mov edi, eax */ { edi = (u32)(eax); }
  /* 0056b448 je 0x56b496 */ if (ZF_) goto L_0056b496;
  /* 0056b44a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0056b450:;
  /* 0056b450 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0056b452 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0056b454 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056b457 mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0056b45a mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b45d mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0056b460 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b463 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b465 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056b468 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056b46b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b46d lea edx, [esi + 0x14] */ edx = (u32)((u32)(esi + 0x14u));
  /* 0056b470 mov dword ptr [edi + 0x10], ecx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0056b473 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b474 lea ecx, [edi + 0x14] */ ecx = (u32)((u32)(edi + 0x14u));
  /* 0056b477 call 0x404140 */ esp -= 4; M32(esp) = 0x56b47cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b477u); RETCHK(0x56b47cu, 0x56b477u); LOADALL;
  /* 0056b47c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b47e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b480 lea eax, [esi + 0x30] */ eax = (u32)((u32)(esi + 0x30u));
  /* 0056b483 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b484 lea ecx, [edi + 0x30] */ ecx = (u32)((u32)(edi + 0x30u));
  /* 0056b487 call 0x404140 */ esp -= 4; M32(esp) = 0x56b48cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b487u); RETCHK(0x56b48cu, 0x56b487u); LOADALL;
  /* 0056b48c add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b48f add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b492 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b494 jne 0x56b450 */ if (!ZF_) goto L_0056b450;
L_0056b496:;
  /* 0056b496 mov eax, edi */ { eax = (u32)(edi); }
  /* 0056b498 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b499 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b49a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b4a0(CPU *c) {
  NATIVE_HOOK(0x56b4a0u) REGS; LOADALL;
L_0056b4a0:;
  /* 0056b4a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056b4a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056b4a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b4a5 push 0x61c371 */ { u32 v_ = 0x61c371u; esp -= 4; M32(esp) = v_; }
  /* 0056b4aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056b4b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b4b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056b4b8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b4bb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b4bc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b4bd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056b4c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b4c1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056b4c3 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0056b4c6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056b4c8 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0056b4cb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0056b4ce mov edi, edi */ { edi = (u32)(edi); }
L_0056b4d0:;
  /* 0056b4d0 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b4d2 jbe 0x56b553 */ if ((CF_|ZF_)) goto L_0056b553;
  /* 0056b4d4 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0056b4d7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b4d9 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0056b4dd je 0x56b4e8 */ if (ZF_) goto L_0056b4e8;
  /* 0056b4df mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056b4e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b4e3 call 0x56b350 */ esp -= 4; M32(esp) = 0x56b4e8u; SAVEALL; F_0056b350(c); ABI_CHECK(0x56b350u, 0x56b4e3u); RETCHK(0x56b4e8u, 0x56b4e3u); LOADALL;
L_0056b4e8:;
  /* 0056b4e8 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056b4e9 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b4ec mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b4ef mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0056b4f2 jmp 0x56b4d0 */ goto L_0056b4d0;
L_0056b553:;
  /* 0056b553 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b556 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b557 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b558 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b55f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b560 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b562 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b563 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b4f4(CPU *c) {
  NATIVE_HOOK(0x56b4f4u) REGS; LOADALL;
L_0056b4f4:;
  /* 0056b4f4 mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0056b4f7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056b4fa xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056b4fc cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b4fe je 0x56b54c */ if (ZF_) goto L_0056b54c;
  /* 0056b500 lea esi, [edi + 0x48] */ esi = (u32)((u32)(edi + 0x48u));
L_0056b503:;
  /* 0056b503 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b506 jb 0x56b514 */ if (CF_) goto L_0056b514;
  /* 0056b508 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056b50b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b50c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b511u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b50cu); RETCHK(0x56b511u, 0x56b50cu); LOADALL;
  /* 0056b511 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b514:;
  /* 0056b514 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0056b51a mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0056b51d mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b520 cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b524 jb 0x56b532 */ if (CF_) goto L_0056b532;
  /* 0056b526 mov ecx, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0056b529 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b52a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b52fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b52au); RETCHK(0x56b52fu, 0x56b52au); LOADALL;
  /* 0056b52f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b532:;
  /* 0056b532 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056b535 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0056b53c mov dword ptr [esi - 0x20], ebx */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0056b53f mov byte ptr [esi - 0x30], bl */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b542 add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b545 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b548 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b54a jne 0x56b503 */ if (!ZF_) goto L_0056b503;
L_0056b54c:;
  /* 0056b54c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b54d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b54e call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0056b553 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b556 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b557 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b558 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b55f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b560 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b562 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b563 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b570(CPU *c) {
  NATIVE_HOOK(0x56b570u) REGS; LOADALL;
L_0056b570:;
  /* 0056b570 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b571 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056b573 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b575 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b576 mov edi, eax */ { edi = (u32)(eax); }
  /* 0056b578 je 0x56b5c7 */ if (ZF_) goto L_0056b5c7;
  /* 0056b57a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0056b580:;
  /* 0056b580 mov eax, dword ptr [esi - 0x4c] */ { const u32 m_ = (u32)(esi + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 0056b583 sub esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b586 sub edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b589 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0056b58b mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056b58e mov dword ptr [edi + 4], ecx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0056b591 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0056b594 mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0056b597 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b59a push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b59c mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056b59f mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056b5a2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b5a4 lea edx, [esi + 0x14] */ edx = (u32)((u32)(esi + 0x14u));
  /* 0056b5a7 mov dword ptr [edi + 0x10], ecx */ { const u32 m_ = (u32)(edi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0056b5aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b5ab lea ecx, [edi + 0x14] */ ecx = (u32)((u32)(edi + 0x14u));
  /* 0056b5ae call 0x404140 */ esp -= 4; M32(esp) = 0x56b5b3u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b5aeu); RETCHK(0x56b5b3u, 0x56b5aeu); LOADALL;
  /* 0056b5b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b5b5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056b5b7 lea eax, [esi + 0x30] */ eax = (u32)((u32)(esi + 0x30u));
  /* 0056b5ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b5bb lea ecx, [edi + 0x30] */ ecx = (u32)((u32)(edi + 0x30u));
  /* 0056b5be call 0x404140 */ esp -= 4; M32(esp) = 0x56b5c3u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x56b5beu); RETCHK(0x56b5c3u, 0x56b5beu); LOADALL;
  /* 0056b5c3 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b5c5 jne 0x56b580 */ if (!ZF_) goto L_0056b580;
L_0056b5c7:;
  /* 0056b5c7 mov eax, edi */ { eax = (u32)(edi); }
  /* 0056b5c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b5ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b5cb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b5d0(CPU *c) {
  NATIVE_HOOK(0x56b5d0u) REGS; LOADALL;
L_0056b5d0:;
  /* 0056b5d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0056b5d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0056b5d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0056b5d5 push 0x61d4d1 */ { u32 v_ = 0x61d4d1u; esp -= 4; M32(esp) = v_; }
  /* 0056b5da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0056b5e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b5e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0056b5e8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b5eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b5ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b5ed mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0056b5f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b5f1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056b5f3 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0056b5f6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056b5f8 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0056b5fb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0056b5fe mov edi, edi */ { edi = (u32)(edi); }
L_0056b600:;
  /* 0056b600 cmp edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b603 je 0x56b690 */ if (ZF_) goto L_0056b690;
  /* 0056b609 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 0056b60c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b60e mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0056b612 je 0x56b61c */ if (ZF_) goto L_0056b61c;
  /* 0056b614 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b615 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0056b617 call 0x56b350 */ esp -= 4; M32(esp) = 0x56b61cu; SAVEALL; F_0056b350(c); ABI_CHECK(0x56b350u, 0x56b617u); RETCHK(0x56b61cu, 0x56b617u); LOADALL;
L_0056b61c:;
  /* 0056b61c add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b61f mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b622 mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 0056b625 add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b628 jmp 0x56b600 */ goto L_0056b600;
L_0056b690:;
  /* 0056b690 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b693 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b694 mov eax, esi */ { eax = (u32)(esi); }
  /* 0056b696 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b697 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b69e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b69f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b6a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b6a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b62a(CPU *c) {
  NATIVE_HOOK(0x56b62au) REGS; LOADALL;
L_0056b62a:;
  /* 0056b62a mov edi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edi = (u32)(M32(m_)); }
  /* 0056b62d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b630 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056b632 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b634 je 0x56b689 */ if (ZF_) goto L_0056b689;
  /* 0056b636 lea esi, [edi + 0x48] */ esi = (u32)((u32)(edi + 0x48u));
  /* 0056b639 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0056b640:;
  /* 0056b640 cmp dword ptr [esi], 0x10 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b643 jb 0x56b651 */ if (CF_) goto L_0056b651;
  /* 0056b645 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0056b648 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b649 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b64eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b649u); RETCHK(0x56b64eu, 0x56b649u); LOADALL;
  /* 0056b64e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b651:;
  /* 0056b651 mov dword ptr [esi], 0xf */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0xfu); }
  /* 0056b657 mov dword ptr [esi - 4], ebx */ { const u32 m_ = (u32)(esi + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0056b65a mov byte ptr [esi - 0x14], bl */ { const u32 m_ = (u32)(esi + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b65d cmp dword ptr [esi - 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b661 jb 0x56b66f */ if (CF_) goto L_0056b66f;
  /* 0056b663 mov ecx, dword ptr [esi - 0x30] */ { const u32 m_ = (u32)(esi + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0056b666 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b667 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x56b66cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x56b667u); RETCHK(0x56b66cu, 0x56b667u); LOADALL;
  /* 0056b66c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056b66f:;
  /* 0056b66f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0056b672 mov dword ptr [esi - 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(0xfu); }
  /* 0056b679 mov dword ptr [esi - 0x20], ebx */ { const u32 m_ = (u32)(esi + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0056b67c mov byte ptr [esi - 0x30], bl */ { const u32 m_ = (u32)(esi + 0xffffffd0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056b67f add edi, 0x4c */ { u32 a_ = edi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0056b682 add esi, 0x4c */ { u32 a_ = esi, b_ = 0x4cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056b685 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b687 jne 0x56b640 */ if (!ZF_) goto L_0056b640;
L_0056b689:;
  /* 0056b689 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b68a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056b68b call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 0056b690 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056b693 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b694 mov eax, esi */ { eax = (u32)(esi); }
  /* 0056b696 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056b697 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0056b69e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056b69f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056b6a1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056b6a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b6b0(CPU *c) {
  NATIVE_HOOK(0x56b6b0u) REGS; LOADALL;
L_0056b6b0:;
  /* 0056b6b0 sub ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0056b6b6 jmp 0x568c40 */ SAVEALL; F_00568c40(c); return;
}

void F_0056b6c0(CPU *c) {
  NATIVE_HOOK(0x56b6c0u) REGS; LOADALL;
L_0056b6c0:;
  /* 0056b6c0 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056b6c5 mov ecx, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b6cc mov eax, 0x3f800000 */ { eax = (u32)(0x3f800000u); }
  /* 0056b6d1 mov dword ptr [ecx + 0x28], eax */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(eax); }
  /* 0056b6d4 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b6da mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b6e1 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0056b6e4 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b6ea mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b6f1 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0056b6f3 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b6f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056b6fb mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b702 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 0056b705 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b70b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b712 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056b715 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b71b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b722 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0056b725 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b72b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b732 mov dword ptr [ecx + 0x24], eax */ { const u32 m_ = (u32)(ecx + 0x24u); M32(m_) = (u32)(eax); }
  /* 0056b735 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b73b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b742 mov dword ptr [ecx + 0x20], eax */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(eax); }
  /* 0056b745 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b74b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b752 mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 0056b755 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b75b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b762 mov dword ptr [ecx + 0x38], eax */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(eax); }
  /* 0056b765 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b76b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b772 mov dword ptr [ecx + 0x34], eax */ { const u32 m_ = (u32)(ecx + 0x34u); M32(m_) = (u32)(eax); }
  /* 0056b775 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b77b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b782 mov dword ptr [ecx + 0x30], eax */ { const u32 m_ = (u32)(ecx + 0x30u); M32(m_) = (u32)(eax); }
  /* 0056b785 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056b78b mov ecx, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b792 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0056b795 or edx, 0x20003 */ { u32 a_ = edx, b_ = 0x20003u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0056b79b mov dword ptr [ecx + 0xc], edx */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(edx); }
  /* 0056b79e mov dword ptr [0x9bea58], eax */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(eax); }
  /* 0056b7a3 mov dword ptr [0x9bea6c], eax */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(eax); }
  /* 0056b7a8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056b7ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b7b0(CPU *c) {
  NATIVE_HOOK(0x56b7b0u) REGS; LOADALL;
L_0056b7b0:;
  /* 0056b7b0 mov eax, dword ptr [0x9bea8c] */ { const u32 m_ = (u32)(0x9bea8cu); eax = (u32)(M32(m_)); }
  /* 0056b7b5 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b7b8 cmp dword ptr [eax + 0x14], 2 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b7bc jne 0x56b7c8 */ if (!ZF_) goto L_0056b7c8;
  /* 0056b7be mov dword ptr [esp], 0x3f800000 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x3f800000u); }
  /* 0056b7c6 jmp 0x56b7d2 */ goto L_0056b7d2;
L_0056b7c8:;
  /* 0056b7c8 mov ecx, dword ptr [0x9bea60] */ { const u32 m_ = (u32)(0x9bea60u); ecx = (u32)(M32(m_)); }
  /* 0056b7ce mov dword ptr [esp], ecx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(ecx); }
L_0056b7d2:;
  /* 0056b7d2 mov edx, dword ptr [0x9be988] */ { const u32 m_ = (u32)(0x9be988u); edx = (u32)(M32(m_)); }
  /* 0056b7d8 mov eax, dword ptr [0x9be98c] */ { const u32 m_ = (u32)(0x9be98cu); eax = (u32)(M32(m_)); }
  /* 0056b7dd mov ecx, dword ptr [0x9be990] */ { const u32 m_ = (u32)(0x9be990u); ecx = (u32)(M32(m_)); }
  /* 0056b7e3 mov dword ptr [esp + 4], edx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(edx); }
  /* 0056b7e7 mov edx, dword ptr [0x9be994] */ { const u32 m_ = (u32)(0x9be994u); edx = (u32)(M32(m_)); }
  /* 0056b7ed mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0056b7f1 mov dword ptr [esp + 0xc], ecx */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0056b7f5 mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0056b7f9 call 0x56c0f0 */ esp -= 4; M32(esp) = 0x56b7feu; SAVEALL; F_0056c0f0(c); ABI_CHECK(0x56c0f0u, 0x56b7f9u); RETCHK(0x56b7feu, 0x56b7f9u); LOADALL;
  /* 0056b7fe fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0056b802 fdiv dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0056b806 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 0056b80a push 0x9be9d8 */ { u32 v_ = 0x9be9d8u; esp -= 4; M32(esp) = v_; }
  /* 0056b80f lea ecx, [esp + 0x18] */ ecx = (u32)((u32)(esp + 0x18u));
  /* 0056b813 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b814 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b815 mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 0056b81d mov dword ptr [esp + 0x28], 0 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 0056b825 fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056b829 fchs */ ST(0) = -ST(0);
  /* 0056b82b fstp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056b82f call 0x5aac00 */ esp -= 4; M32(esp) = 0x56b834u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x56b82fu); RETCHK(0x56b834u, 0x56b82fu); LOADALL;
  /* 0056b834 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0056b838 mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 0056b83c mov edx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); edx = (u32)(M32(m_)); }
  /* 0056b840 push 0x9be9d8 */ { u32 v_ = 0x9be9d8u; esp -= 4; M32(esp) = v_; }
  /* 0056b845 lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 0056b849 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056b84b fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0056b84f fdiv dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0056b853 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0056b856 lea eax, [esp + 0x24] */ eax = (u32)((u32)(esp + 0x24u));
  /* 0056b85a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b85b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b85c mov dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 0056b864 mov dword ptr [esp + 0x34], 0 */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 0056b86c fmul dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056b870 fstp dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056b874 call 0x5aac00 */ esp -= 4; M32(esp) = 0x56b879u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x56b874u); RETCHK(0x56b879u, 0x56b874u); LOADALL;
  /* 0056b879 fld dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0056b87d mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 0056b881 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 0056b885 push 0x9be9d8 */ { u32 v_ = 0x9be9d8u; esp -= 4; M32(esp) = v_; }
  /* 0056b88a lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 0056b88e fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056b890 fld dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0056b894 fmul dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056b898 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0056b89b lea eax, [esp + 0x30] */ eax = (u32)((u32)(esp + 0x30u));
  /* 0056b89f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b8a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b8a1 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056b8a7 mov dword ptr [esp + 0x40], 0 */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(0x0u); }
  /* 0056b8af fstp dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056b8b3 fld dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); FPUSH((double)MF32(m_)); }
  /* 0056b8b7 fmul dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056b8bb fmul dword ptr [0x656db8] */ { const u32 m_ = (u32)(0x656db8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056b8c1 fstp dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056b8c5 call 0x5aaba0 */ esp -= 4; M32(esp) = 0x56b8cau; SAVEALL; F_005aaba0(c); ABI_CHECK(0x5aaba0u, 0x56b8c5u); RETCHK(0x56b8cau, 0x56b8c5u); LOADALL;
  /* 0056b8ca fld dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0056b8ce mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 0056b8d2 mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 0056b8d6 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056b8d8 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0056b8db mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056b8e0 add esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b8e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056b8f0(CPU *c) {
  NATIVE_HOOK(0x56b8f0u) REGS; LOADALL;
L_0056b8f0:;
  /* 0056b8f0 mov edx, dword ptr [0x9be8d0] */ { const u32 m_ = (u32)(0x9be8d0u); edx = (u32)(M32(m_)); }
  /* 0056b8f6 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056b8fb sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b8fe or edx, 0x20003 */ { u32 a_ = edx, b_ = 0x20003u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0056b904 cmp eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056b907 mov dword ptr [0x9be8ec], 0x3f800000 */ { const u32 m_ = (u32)(0x9be8ecu); M32(m_) = (u32)(0x3f800000u); }
  /* 0056b911 mov dword ptr [0x9be8d8], 0x3f800000 */ { const u32 m_ = (u32)(0x9be8d8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056b91b mov dword ptr [0x9be8c4], 0x3f800000 */ { const u32 m_ = (u32)(0x9be8c4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056b925 mov dword ptr [0x9be8d4], 0 */ { const u32 m_ = (u32)(0x9be8d4u); M32(m_) = (u32)(0x0u); }
  /* 0056b92f mov dword ptr [0x9be8cc], 0 */ { const u32 m_ = (u32)(0x9be8ccu); M32(m_) = (u32)(0x0u); }
  /* 0056b939 mov dword ptr [0x9be8c8], 0 */ { const u32 m_ = (u32)(0x9be8c8u); M32(m_) = (u32)(0x0u); }
  /* 0056b943 mov dword ptr [0x9be8e8], 0 */ { const u32 m_ = (u32)(0x9be8e8u); M32(m_) = (u32)(0x0u); }
  /* 0056b94d mov dword ptr [0x9be8e4], 0 */ { const u32 m_ = (u32)(0x9be8e4u); M32(m_) = (u32)(0x0u); }
  /* 0056b957 mov dword ptr [0x9be8dc], 0 */ { const u32 m_ = (u32)(0x9be8dcu); M32(m_) = (u32)(0x0u); }
  /* 0056b961 mov dword ptr [0x9be8fc], 0 */ { const u32 m_ = (u32)(0x9be8fcu); M32(m_) = (u32)(0x0u); }
  /* 0056b96b mov dword ptr [0x9be8f8], 0 */ { const u32 m_ = (u32)(0x9be8f8u); M32(m_) = (u32)(0x0u); }
  /* 0056b975 mov dword ptr [0x9be8f4], 0 */ { const u32 m_ = (u32)(0x9be8f4u); M32(m_) = (u32)(0x0u); }
  /* 0056b97f mov dword ptr [0x9be8d0], edx */ { const u32 m_ = (u32)(0x9be8d0u); M32(m_) = (u32)(edx); }
  /* 0056b985 jge 0x56b9c8 */ if (!LT_) goto L_0056b9c8;
  /* 0056b987 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056b988 mov dword ptr [0x9be984], eax */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(eax); }
  /* 0056b98d mov ecx, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056b994 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056b996 jne 0x56b9af */ if (!ZF_) goto L_0056b9af;
  /* 0056b998 call 0x5afa60 */ esp -= 4; M32(esp) = 0x56b99du; SAVEALL; F_005afa60(c); ABI_CHECK(0x5afa60u, 0x56b998u); RETCHK(0x56b99du, 0x56b998u); LOADALL;
  /* 0056b99d mov ecx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); ecx = (u32)(M32(m_)); }
  /* 0056b9a3 mov dword ptr [ecx*4 + 0x9be904], eax */ { const u32 m_ = (u32)(ecx * 4u + 0x9be904u); M32(m_) = (u32)(eax); }
  /* 0056b9aa mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
L_0056b9af:;
  /* 0056b9af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056b9b0 mov esi, dword ptr [eax*4 + 0x9be900] */ { const u32 m_ = (u32)(eax * 4u + 0x9be900u); esi = (u32)(M32(m_)); }
  /* 0056b9b7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056b9b8 mov edi, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); edi = (u32)(M32(m_)); }
  /* 0056b9bf mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0056b9c4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056b9c6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056b9c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0056b9c8:;
  /* 0056b9c8 call 0x56b6c0 */ esp -= 4; M32(esp) = 0x56b9cdu; SAVEALL; F_0056b6c0(c); ABI_CHECK(0x56b6c0u, 0x56b9c8u); RETCHK(0x56b9cdu, 0x56b9c8u); LOADALL;
  /* 0056b9cd lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 0056b9d1 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 0056b9d5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056b9d6 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 0056b9da push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056b9db push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056b9dc call 0x56b7b0 */ esp -= 4; M32(esp) = 0x56b9e1u; SAVEALL; F_0056b7b0(c); ABI_CHECK(0x56b7b0u, 0x56b9dcu); RETCHK(0x56b9e1u, 0x56b9dcu); LOADALL;
  /* 0056b9e1 fld dword ptr [0x9be990] */ { const u32 m_ = (u32)(0x9be990u); FPUSH((double)MF32(m_)); }
  /* 0056b9e7 fdiv dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0056b9eb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056b9ee fld dword ptr [0x9be994] */ { const u32 m_ = (u32)(0x9be994u); FPUSH((double)MF32(m_)); }
  /* 0056b9f4 fdiv dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0056b9f8 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0056b9fc fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0056b9fe fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba02 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0056ba06 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0056ba08 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba0c fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0056ba10 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0056ba12 fstp dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba16 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0056ba1a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0056ba1c fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba20 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0056ba22 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0056ba24 fld dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0056ba28 fmul dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056ba2c fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0056ba30 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056ba34 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0056ba36 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba39 call 0x5aa9e0 */ esp -= 4; M32(esp) = 0x56ba3eu; SAVEALL; F_005aa9e0(c); ABI_CHECK(0x5aa9e0u, 0x56ba39u); RETCHK(0x56ba3eu, 0x56ba39u); LOADALL;
  /* 0056ba3e fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba42 fld dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0056ba46 fmul dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056ba4a fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0056ba4e fmul dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056ba52 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0056ba54 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba57 call 0x5aa9e0 */ esp -= 4; M32(esp) = 0x56ba5cu; SAVEALL; F_005aa9e0(c); ABI_CHECK(0x5aa9e0u, 0x56ba57u); RETCHK(0x56ba5cu, 0x56ba57u); LOADALL;
  /* 0056ba5c mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0056ba60 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0056ba64 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056ba68 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 0056ba6c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056ba6e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056ba6f push 0x9be8c4 */ { u32 v_ = 0x9be8c4u; esp -= 4; M32(esp) = v_; }
  /* 0056ba74 mov dword ptr [esp + 0x2c], edx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0056ba78 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 0056ba7c mov dword ptr [esp + 0x34], 0 */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 0056ba84 call 0x5af460 */ esp -= 4; M32(esp) = 0x56ba89u; SAVEALL; F_005af460(c); ABI_CHECK(0x5af460u, 0x56ba84u); RETCHK(0x56ba89u, 0x56ba84u); LOADALL;
  /* 0056ba89 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0056ba8d mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 0056ba91 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 0056ba95 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056ba97 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056ba98 push 0x9be8c4 */ { u32 v_ = 0x9be8c4u; esp -= 4; M32(esp) = v_; }
  /* 0056ba9d mov dword ptr [esp + 0x38], edx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(edx); }
  /* 0056baa1 mov dword ptr [esp + 0x3c], eax */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(eax); }
  /* 0056baa5 mov dword ptr [esp + 0x40], 0x3f800000 */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056baad call 0x5af2d0 */ esp -= 4; M32(esp) = 0x56bab2u; SAVEALL; F_005af2d0(c); ABI_CHECK(0x5af2d0u, 0x56baadu); RETCHK(0x56bab2u, 0x56baadu); LOADALL;
  /* 0056bab2 fld dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0056bab6 fchs */ ST(0) = -ST(0);
  /* 0056bab8 fstp dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056babc fld dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 0056bac0 lea edx, [esp + 0x38] */ edx = (u32)((u32)(esp + 0x38u));
  /* 0056bac4 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056bac6 fchs */ ST(0) = -ST(0);
  /* 0056bac8 fstp dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bacc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056bacd push 0x9be8c4 */ { u32 v_ = 0x9be8c4u; esp -= 4; M32(esp) = v_; }
  /* 0056bad2 mov dword ptr [esp + 0x4c], 0 */ { const u32 m_ = (u32)(esp + 0x4cu); M32(m_) = (u32)(0x0u); }
  /* 0056bada call 0x5af460 */ esp -= 4; M32(esp) = 0x56badfu; SAVEALL; F_005af460(c); ABI_CHECK(0x5af460u, 0x56badau); RETCHK(0x56badfu, 0x56badau); LOADALL;
  /* 0056badf mov eax, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); eax = (u32)(M32(m_)); }
  /* 0056bae3 mov ecx, dword ptr [esp + 0x58] */ { const u32 m_ = (u32)(esp + 0x58u); ecx = (u32)(M32(m_)); }
  /* 0056bae7 mov edx, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); edx = (u32)(M32(m_)); }
  /* 0056baeb mov dword ptr [0x9bea78], eax */ { const u32 m_ = (u32)(0x9bea78u); M32(m_) = (u32)(eax); }
  /* 0056baf0 mov eax, dword ptr [esp + 0x60] */ { const u32 m_ = (u32)(esp + 0x60u); eax = (u32)(M32(m_)); }
  /* 0056baf4 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056baf7 mov dword ptr [0x9bea84], eax */ { const u32 m_ = (u32)(0x9bea84u); M32(m_) = (u32)(eax); }
  /* 0056bafc mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056bb01 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bb03 mov dword ptr [0x9bea7c], ecx */ { const u32 m_ = (u32)(0x9bea7cu); M32(m_) = (u32)(ecx); }
  /* 0056bb09 mov dword ptr [0x9bea80], edx */ { const u32 m_ = (u32)(0x9bea80u); M32(m_) = (u32)(edx); }
  /* 0056bb0f mov dword ptr [0x9bea58], 0 */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(0x0u); }
  /* 0056bb19 jle 0x56bb2b */ if ((ZF_|LT_)) goto L_0056bb2b;
  /* 0056bb1b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056bb1c mov dword ptr [0x9bea6c], 0 */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(0x0u); }
  /* 0056bb26 mov dword ptr [0x9be984], eax */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(eax); }
L_0056bb2b:;
  /* 0056bb2b mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056bb30 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056bb33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bb40(CPU *c) {
  NATIVE_HOOK(0x56bb40u) REGS; LOADALL;
L_0056bb40:;
  /* 0056bb40 mov eax, dword ptr [0x9bea6c] */ { const u32 m_ = (u32)(0x9bea6cu); eax = (u32)(M32(m_)); }
  /* 0056bb45 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056bb48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bb4a jne 0x56bbc4 */ if (!ZF_) goto L_0056bbc4;
  /* 0056bb4c call 0x56c0f0 */ esp -= 4; M32(esp) = 0x56bb51u; SAVEALL; F_0056c0f0(c); ABI_CHECK(0x56c0f0u, 0x56bb4cu); RETCHK(0x56bb51u, 0x56bb4cu); LOADALL;
  /* 0056bb51 fld dword ptr [0x9be988] */ { const u32 m_ = (u32)(0x9be988u); FPUSH((double)MF32(m_)); }
  /* 0056bb57 fdiv dword ptr [0x9be990] */ { const u32 m_ = (u32)(0x9be990u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0056bb5d lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 0056bb61 push 0x9be9d8 */ { u32 v_ = 0x9be9d8u; esp -= 4; M32(esp) = v_; }
  /* 0056bb66 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 0056bb6a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056bb6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056bb6c mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 0056bb74 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0056bb7c fmul dword ptr [0x9bea64] */ { const u32 m_ = (u32)(0x9bea64u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056bb82 fmul dword ptr [0x9bea60] */ { const u32 m_ = (u32)(0x9bea60u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056bb88 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bb8c call 0x5aac00 */ esp -= 4; M32(esp) = 0x56bb91u; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x56bb8cu); RETCHK(0x56bb91u, 0x56bb8cu); LOADALL;
  /* 0056bb91 fld dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0056bb95 fmul dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056bb99 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056bb9c mov dword ptr [0x9bea6c], 1 */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(0x1u); }
  /* 0056bba6 fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 0056bbaa fmul dword ptr [esp] */ { const u32 m_ = (u32)(esp); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056bbae faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0056bbb0 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0056bbb4 fmul dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056bbb8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 0056bbba fst dword ptr [0x9bea68] */ { const u32 m_ = (u32)(0x9bea68u); MF32(m_) = (float)ST(0); }
  /* 0056bbc0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056bbc3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056bbc4:;
  /* 0056bbc4 fld dword ptr [0x9bea68] */ { const u32 m_ = (u32)(0x9bea68u); FPUSH((double)MF32(m_)); }
  /* 0056bbca add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056bbcd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bbd0(CPU *c) {
  NATIVE_HOOK(0x56bbd0u) REGS; LOADALL;
L_0056bbd0:;
  /* 0056bbd0 fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0056bbd4 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0056bbda fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0056bbdc and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056bbe1 jne 0x56bbfc */ if (!ZF_) goto L_0056bbfc;
  /* 0056bbe3 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056bbe7 mov dword ptr [0x9bea6c], 0 */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(0x0u); }
  /* 0056bbf1 mov dword ptr [0x9bea64], eax */ { const u32 m_ = (u32)(0x9bea64u); M32(m_) = (u32)(eax); }
  /* 0056bbf6 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056bbfb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056bbfc:;
  /* 0056bbfc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056bbfe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bc00(CPU *c) {
  NATIVE_HOOK(0x56bc00u) REGS; LOADALL;
L_0056bc00:;
  /* 0056bc00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056bc04 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0056bc06 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056bc08 je 0x56bce3 */ if (ZF_) goto L_0056bce3;
  /* 0056bc0e mov ecx, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); ecx = (u32)(M32(m_)); }
  /* 0056bc11 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056bc13 je 0x56bce9 */ if (ZF_) goto L_0056bce9;
  /* 0056bc19 fild dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0056bc1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056bc1d mov esi, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); esi = (u32)(M32(m_)); }
  /* 0056bc20 mov dword ptr [esp + 8], esi */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0056bc24 fstp dword ptr [0x9be990] */ { const u32 m_ = (u32)(0x9be990u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bc2a fild dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0056bc2e fstp dword ptr [0x9be994] */ { const u32 m_ = (u32)(0x9be994u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bc34 fld dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); FPUSH((double)MF32(m_)); }
  /* 0056bc37 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0056bc39 fstp dword ptr [0x9be988] */ { const u32 m_ = (u32)(0x9be988u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bc3f fld dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); FPUSH((double)MF32(m_)); }
  /* 0056bc42 fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 0056bc44 fstp dword ptr [0x9be98c] */ { const u32 m_ = (u32)(0x9be98cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bc4a mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 0056bc4d cmp ecx, 0x56bcf0 */ { u32 a_ = ecx, b_ = 0x56bcf0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056bc53 je 0x56bc6a */ if (ZF_) goto L_0056bc6a;
  /* 0056bc55 cmp dword ptr [0x9bea8c], eax */ { const u32 m_ = (u32)(0x9bea8cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056bc5b je 0x56bc6a */ if (ZF_) goto L_0056bc6a;
  /* 0056bc5d mov dword ptr [0x9bead8], ecx */ { const u32 m_ = (u32)(0x9bead8u); M32(m_) = (u32)(ecx); }
  /* 0056bc63 mov dword ptr [eax + 0x1c], 0x56bcf0 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x56bcf0u); }
L_0056bc6a:;
  /* 0056bc6a fld dword ptr [0x9be988] */ { const u32 m_ = (u32)(0x9be988u); FPUSH((double)MF32(m_)); }
  /* 0056bc70 fcomp dword ptr [0x9be98c] */ { const u32 m_ = (u32)(0x9be98cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0056bc76 mov dword ptr [0x9bea8c], eax */ { const u32 m_ = (u32)(0x9bea8cu); M32(m_) = (u32)(eax); }
  /* 0056bc7b mov dword ptr [0x9bea58], edx */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(edx); }
  /* 0056bc81 mov dword ptr [0x9bea78], 0 */ { const u32 m_ = (u32)(0x9bea78u); M32(m_) = (u32)(0x0u); }
  /* 0056bc8b mov dword ptr [0x9bea7c], 0 */ { const u32 m_ = (u32)(0x9bea7cu); M32(m_) = (u32)(0x0u); }
  /* 0056bc95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056bc96 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0056bc98 and eax, 0x4100 */ { u32 a_ = eax, b_ = 0x4100u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056bc9d jne 0x56bcc1 */ if (!ZF_) goto L_0056bcc1;
  /* 0056bc9f fld dword ptr [0x9be988] */ { const u32 m_ = (u32)(0x9be988u); FPUSH((double)MF32(m_)); }
  /* 0056bca5 fdiv dword ptr [0x9be98c] */ { const u32 m_ = (u32)(0x9be98cu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0056bcab mov dword ptr [0x9bea84], 0x3f800000 */ { const u32 m_ = (u32)(0x9bea84u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056bcb5 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056bcba fstp dword ptr [0x9bea80] */ { const u32 m_ = (u32)(0x9bea80u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bcc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056bcc1:;
  /* 0056bcc1 fld dword ptr [0x9be98c] */ { const u32 m_ = (u32)(0x9be98cu); FPUSH((double)MF32(m_)); }
  /* 0056bcc7 fdiv dword ptr [0x9be988] */ { const u32 m_ = (u32)(0x9be988u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0056bccd mov dword ptr [0x9bea80], 0x3f800000 */ { const u32 m_ = (u32)(0x9bea80u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056bcd7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056bcdc fstp dword ptr [0x9bea84] */ { const u32 m_ = (u32)(0x9bea84u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056bce2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056bce3:;
  /* 0056bce3 mov dword ptr [0x9bea8c], edx */ { const u32 m_ = (u32)(0x9bea8cu); M32(m_) = (u32)(edx); }
L_0056bce9:;
  /* 0056bce9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056bceb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bcf0(CPU *c) {
  NATIVE_HOOK(0x56bcf0u) REGS; LOADALL;
L_0056bcf0:;
  /* 0056bcf0 jmp dword ptr [0x9bead8] */ { const u32 m_ = (u32)(0x9bead8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0056bd00(CPU *c) {
  NATIVE_HOOK(0x56bd00u) REGS; LOADALL;
L_0056bd00:;
  /* 0056bd00 mov eax, dword ptr [0x9bea8c] */ { const u32 m_ = (u32)(0x9bea8cu); eax = (u32)(M32(m_)); }
  /* 0056bd05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bd10(CPU *c) {
  NATIVE_HOOK(0x56bd10u) REGS; LOADALL;
L_0056bd10:;
  /* 0056bd10 mov dword ptr [0x9bea5c], 0 */ { const u32 m_ = (u32)(0x9bea5cu); M32(m_) = (u32)(0x0u); }
  /* 0056bd1a call 0x5714a0 */ esp -= 4; M32(esp) = 0x56bd1fu; SAVEALL; F_005714a0(c); ABI_CHECK(0x5714a0u, 0x56bd1au); RETCHK(0x56bd1fu, 0x56bd1au); LOADALL;
  /* 0056bd1f call 0x56fb50 */ esp -= 4; M32(esp) = 0x56bd24u; SAVEALL; F_0056fb50(c); ABI_CHECK(0x56fb50u, 0x56bd1fu); RETCHK(0x56bd24u, 0x56bd1fu); LOADALL;
  /* 0056bd24 call 0x570010 */ esp -= 4; M32(esp) = 0x56bd29u; SAVEALL; F_00570010(c); ABI_CHECK(0x570010u, 0x56bd24u); RETCHK(0x56bd29u, 0x56bd24u); LOADALL;
  /* 0056bd29 call 0x56cdd0 */ esp -= 4; M32(esp) = 0x56bd2eu; SAVEALL; F_0056cdd0(c); ABI_CHECK(0x56cdd0u, 0x56bd29u); RETCHK(0x56bd2eu, 0x56bd29u); LOADALL;
  /* 0056bd2e call 0x56e640 */ esp -= 4; M32(esp) = 0x56bd33u; SAVEALL; F_0056e640(c); ABI_CHECK(0x56e640u, 0x56bd2eu); RETCHK(0x56bd33u, 0x56bd2eu); LOADALL;
  /* 0056bd33 call 0x56bdc0 */ esp -= 4; M32(esp) = 0x56bd38u; SAVEALL; F_0056bdc0(c); ABI_CHECK(0x56bdc0u, 0x56bd33u); RETCHK(0x56bd38u, 0x56bd33u); LOADALL;
  /* 0056bd38 jmp 0x56bc00 */ SAVEALL; F_0056bc00(c); return;
}

void F_0056bd40(CPU *c) {
  NATIVE_HOOK(0x56bd40u) REGS; LOADALL;
L_0056bd40:;
  /* 0056bd40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056bd41 mov esi, 0x9be904 */ { esi = (u32)(0x9be904u); }
L_0056bd46:;
  /* 0056bd46 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0056bd48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bd4a je 0x56bd5b */ if (ZF_) goto L_0056bd5b;
  /* 0056bd4c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056bd4d call 0x5afa30 */ esp -= 4; M32(esp) = 0x56bd52u; SAVEALL; F_005afa30(c); ABI_CHECK(0x5afa30u, 0x56bd4du); RETCHK(0x56bd52u, 0x56bd4du); LOADALL;
  /* 0056bd52 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056bd55 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
L_0056bd5b:;
  /* 0056bd5b add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0056bd5e cmp esi, 0x9be984 */ { u32 a_ = esi, b_ = 0x9be984u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056bd64 jl 0x56bd46 */ if (LT_) goto L_0056bd46;
  /* 0056bd66 mov eax, dword ptr [0x9bf084] */ { const u32 m_ = (u32)(0x9bf084u); eax = (u32)(M32(m_)); }
  /* 0056bd6b mov dword ptr [0x9be984], 0 */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(0x0u); }
  /* 0056bd75 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bd77 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056bd78 je 0x56bd9d */ if (ZF_) goto L_0056bd9d;
  /* 0056bd7a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056bd7b mov eax, dword ptr [0x68f738] */ { const u32 m_ = (u32)(0x68f738u); eax = (u32)(M32(m_)); }
  /* 0056bd80 call dword ptr [eax + 0x10c] */ { const u32 m_ = (u32)(eax + 0x10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x56bd86u; SAVEALL; call_ind(c, t_); RETCHK(0x56bd86u, 0x56bd80u); LOADALL; }
  /* 0056bd86 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056bd89 mov dword ptr [0x9bf084], 0 */ { const u32 m_ = (u32)(0x9bf084u); M32(m_) = (u32)(0x0u); }
  /* 0056bd93 mov dword ptr [0x9bf088], 0 */ { const u32 m_ = (u32)(0x9bf088u); M32(m_) = (u32)(0x0u); }
L_0056bd9d:;
  /* 0056bd9d call 0x56e620 */ esp -= 4; M32(esp) = 0x56bda2u; SAVEALL; F_0056e620(c); ABI_CHECK(0x56e620u, 0x56bd9du); RETCHK(0x56bda2u, 0x56bd9du); LOADALL;
  /* 0056bda2 call 0x56ccf0 */ esp -= 4; M32(esp) = 0x56bda7u; SAVEALL; F_0056ccf0(c); ABI_CHECK(0x56ccf0u, 0x56bda2u); RETCHK(0x56bda7u, 0x56bda2u); LOADALL;
  /* 0056bda7 call 0x56ffd0 */ esp -= 4; M32(esp) = 0x56bdacu; SAVEALL; F_0056ffd0(c); ABI_CHECK(0x56ffd0u, 0x56bda7u); RETCHK(0x56bdacu, 0x56bda7u); LOADALL;
  /* 0056bdac call 0x56fad0 */ esp -= 4; M32(esp) = 0x56bdb1u; SAVEALL; F_0056fad0(c); ABI_CHECK(0x56fad0u, 0x56bdacu); RETCHK(0x56bdb1u, 0x56bdacu); LOADALL;
  /* 0056bdb1 call 0x571470 */ esp -= 4; M32(esp) = 0x56bdb6u; SAVEALL; F_00571470(c); ABI_CHECK(0x571470u, 0x56bdb1u); RETCHK(0x56bdb6u, 0x56bdb1u); LOADALL;
  /* 0056bdb6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056bdb8 call 0x56bc00 */ esp -= 4; M32(esp) = 0x56bdbdu; SAVEALL; F_0056bc00(c); ABI_CHECK(0x56bc00u, 0x56bdb8u); RETCHK(0x56bdbdu, 0x56bdb8u); LOADALL;
  /* 0056bdbd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0056bdbe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bdc0(CPU *c) {
  NATIVE_HOOK(0x56bdc0u) REGS; LOADALL;
L_0056bdc0:;
  /* 0056bdc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056bdc1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0056bdc3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056bdc4 mov dword ptr [0x9be984], esi */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(esi); }
  /* 0056bdca call 0x5afa60 */ esp -= 4; M32(esp) = 0x56bdcfu; SAVEALL; F_005afa60(c); ABI_CHECK(0x5afa60u, 0x56bdcau); RETCHK(0x56bdcfu, 0x56bdcau); LOADALL;
  /* 0056bdcf mov dword ptr [0x9be904], eax */ { const u32 m_ = (u32)(0x9be904u); M32(m_) = (u32)(eax); }
  /* 0056bdd4 call 0x56b6c0 */ esp -= 4; M32(esp) = 0x56bdd9u; SAVEALL; F_0056b6c0(c); ABI_CHECK(0x56b6c0u, 0x56bdd4u); RETCHK(0x56bdd9u, 0x56bdd4u); LOADALL;
  /* 0056bdd9 mov eax, dword ptr [0x9be8d0] */ { const u32 m_ = (u32)(0x9be8d0u); eax = (u32)(M32(m_)); }
  /* 0056bdde mov dword ptr [0x9bea64], 0x3f000000 */ { const u32 m_ = (u32)(0x9bea64u); M32(m_) = (u32)(0x3f000000u); }
  /* 0056bde8 or eax, 0x20003 */ { u32 a_ = eax, b_ = 0x20003u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056bded mov dword ptr [0x9bea6c], esi */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(esi); }
  /* 0056bdf3 mov dword ptr [0x9be8d0], eax */ { const u32 m_ = (u32)(0x9be8d0u); M32(m_) = (u32)(eax); }
  /* 0056bdf8 mov dword ptr [0x9bea60], 0x3f800000 */ { const u32 m_ = (u32)(0x9bea60u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056be02 mov dword ptr [0x9bea58], esi */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(esi); }
  /* 0056be08 mov dword ptr [0x9bea70], 7 */ { const u32 m_ = (u32)(0x9bea70u); M32(m_) = (u32)(0x7u); }
  /* 0056be12 mov dword ptr [0x9be8ec], 0x3f800000 */ { const u32 m_ = (u32)(0x9be8ecu); M32(m_) = (u32)(0x3f800000u); }
  /* 0056be1c mov dword ptr [0x9be8d8], 0x3f800000 */ { const u32 m_ = (u32)(0x9be8d8u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056be26 mov dword ptr [0x9be8c4], 0x3f800000 */ { const u32 m_ = (u32)(0x9be8c4u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056be30 mov dword ptr [0x9be8d4], esi */ { const u32 m_ = (u32)(0x9be8d4u); M32(m_) = (u32)(esi); }
  /* 0056be36 mov dword ptr [0x9be8cc], esi */ { const u32 m_ = (u32)(0x9be8ccu); M32(m_) = (u32)(esi); }
  /* 0056be3c mov dword ptr [0x9be8c8], esi */ { const u32 m_ = (u32)(0x9be8c8u); M32(m_) = (u32)(esi); }
  /* 0056be42 mov dword ptr [0x9be8e8], esi */ { const u32 m_ = (u32)(0x9be8e8u); M32(m_) = (u32)(esi); }
  /* 0056be48 mov dword ptr [0x9be8e4], esi */ { const u32 m_ = (u32)(0x9be8e4u); M32(m_) = (u32)(esi); }
  /* 0056be4e mov dword ptr [0x9be8dc], esi */ { const u32 m_ = (u32)(0x9be8dcu); M32(m_) = (u32)(esi); }
  /* 0056be54 mov dword ptr [0x9be8fc], esi */ { const u32 m_ = (u32)(0x9be8fcu); M32(m_) = (u32)(esi); }
  /* 0056be5a mov dword ptr [0x9be8f8], esi */ { const u32 m_ = (u32)(0x9be8f8u); M32(m_) = (u32)(esi); }
  /* 0056be60 mov dword ptr [0x9be8f4], esi */ { const u32 m_ = (u32)(0x9be8f4u); M32(m_) = (u32)(esi); }
  /* 0056be66 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0056be68:;
  /* 0056be68 mov word ptr [eax*2 + 0x9be380], ax */ { const u32 m_ = (u32)(eax * 2u + 0x9be380u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 0056be70 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056be71 cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056be76 jl 0x56be68 */ if (LT_) goto L_0056be68;
  /* 0056be78 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 0056be7d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056be7f mov edi, 0x9be908 */ { edi = (u32)(0x9be908u); }
  /* 0056be84 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0056be86 mov dword ptr [0x9bea8c], esi */ { const u32 m_ = (u32)(0x9bea8cu); M32(m_) = (u32)(esi); }
  /* 0056be8c mov dword ptr [0x9bea78], eax */ { const u32 m_ = (u32)(0x9bea78u); M32(m_) = (u32)(eax); }
  /* 0056be91 mov dword ptr [0x9bea7c], eax */ { const u32 m_ = (u32)(0x9bea7cu); M32(m_) = (u32)(eax); }
  /* 0056be96 mov dword ptr [0x9bf084], esi */ { const u32 m_ = (u32)(0x9bf084u); M32(m_) = (u32)(esi); }
  /* 0056be9c mov dword ptr [0x9bf088], esi */ { const u32 m_ = (u32)(0x9bf088u); M32(m_) = (u32)(esi); }
  /* 0056bea2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056bea3 mov dword ptr [0x9bea80], 0x3f800000 */ { const u32 m_ = (u32)(0x9bea80u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056bead mov dword ptr [0x9bea84], 0x3f800000 */ { const u32 m_ = (u32)(0x9bea84u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056beb7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056bebc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056bebd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bec0(CPU *c) {
  NATIVE_HOOK(0x56bec0u) REGS; LOADALL;
L_0056bec0:;
  /* 0056bec0 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056bec5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056bec6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056bec8 cmp eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056becb setl bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 0056bece test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bed0 je 0x56bf13 */ if (ZF_) goto L_0056bf13;
  /* 0056bed2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056bed3 mov dword ptr [0x9be984], eax */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(eax); }
  /* 0056bed8 mov ecx, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056bedf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bee1 jne 0x56befa */ if (!ZF_) goto L_0056befa;
  /* 0056bee3 call 0x5afa60 */ esp -= 4; M32(esp) = 0x56bee8u; SAVEALL; F_005afa60(c); ABI_CHECK(0x5afa60u, 0x56bee3u); RETCHK(0x56bee8u, 0x56bee3u); LOADALL;
  /* 0056bee8 mov ecx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); ecx = (u32)(M32(m_)); }
  /* 0056beee mov dword ptr [ecx*4 + 0x9be904], eax */ { const u32 m_ = (u32)(ecx * 4u + 0x9be904u); M32(m_) = (u32)(eax); }
  /* 0056bef5 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
L_0056befa:;
  /* 0056befa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056befb mov esi, dword ptr [eax*4 + 0x9be900] */ { const u32 m_ = (u32)(eax * 4u + 0x9be900u); esi = (u32)(M32(m_)); }
  /* 0056bf02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056bf03 mov edi, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); edi = (u32)(M32(m_)); }
  /* 0056bf0a mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0056bf0f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056bf11 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056bf12 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0056bf13:;
  /* 0056bf13 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056bf15 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056bf16 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bf20(CPU *c) {
  NATIVE_HOOK(0x56bf20u) REGS; LOADALL;
L_0056bf20:;
  /* 0056bf20 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056bf25 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056bf26 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056bf28 cmp eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056bf2b setl bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 0056bf2e test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bf30 je 0x56bf96 */ if (ZF_) goto L_0056bf96;
  /* 0056bf32 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056bf33 mov dword ptr [0x9be984], eax */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(eax); }
  /* 0056bf38 mov ecx, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056bf3f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bf41 jne 0x56bf5a */ if (!ZF_) goto L_0056bf5a;
  /* 0056bf43 call 0x5afa60 */ esp -= 4; M32(esp) = 0x56bf48u; SAVEALL; F_005afa60(c); ABI_CHECK(0x5afa60u, 0x56bf43u); RETCHK(0x56bf48u, 0x56bf43u); LOADALL;
  /* 0056bf48 mov ecx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); ecx = (u32)(M32(m_)); }
  /* 0056bf4e mov dword ptr [ecx*4 + 0x9be904], eax */ { const u32 m_ = (u32)(ecx * 4u + 0x9be904u); M32(m_) = (u32)(eax); }
  /* 0056bf55 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
L_0056bf5a:;
  /* 0056bf5a mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056bf5e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bf60 jne 0x56bf7d */ if (!ZF_) goto L_0056bf7d;
  /* 0056bf62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056bf63 mov esi, dword ptr [eax*4 + 0x9be900] */ { const u32 m_ = (u32)(eax * 4u + 0x9be900u); esi = (u32)(M32(m_)); }
  /* 0056bf6a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056bf6b mov edi, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); edi = (u32)(M32(m_)); }
  /* 0056bf72 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0056bf77 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056bf79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056bf7a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056bf7b jmp 0x56bf96 */ goto L_0056bf96;
L_0056bf7d:;
  /* 0056bf7d mov edx, dword ptr [eax*4 + 0x9be900] */ { const u32 m_ = (u32)(eax * 4u + 0x9be900u); edx = (u32)(M32(m_)); }
  /* 0056bf84 mov eax, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); eax = (u32)(M32(m_)); }
  /* 0056bf8b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056bf8c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056bf8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056bf8e call 0x5ae8c0 */ esp -= 4; M32(esp) = 0x56bf93u; SAVEALL; F_005ae8c0(c); ABI_CHECK(0x5ae8c0u, 0x56bf8eu); RETCHK(0x56bf93u, 0x56bf8eu); LOADALL;
  /* 0056bf93 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056bf96:;
  /* 0056bf96 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056bf98 mov dword ptr [0x9bea58], 0 */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(0x0u); }
  /* 0056bfa2 mov dword ptr [0x9bea6c], 0 */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(0x0u); }
  /* 0056bfac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056bfad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056bfb0(CPU *c) {
  NATIVE_HOOK(0x56bfb0u) REGS; LOADALL;
L_0056bfb0:;
  /* 0056bfb0 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056bfb5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056bfb6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0056bfb8 cmp eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056bfbb setl bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 0056bfbe test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bfc0 je 0x56c000 */ if (ZF_) goto L_0056c000;
  /* 0056bfc2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056bfc3 mov dword ptr [0x9be984], eax */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(eax); }
  /* 0056bfc8 mov ecx, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056bfcf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056bfd1 jne 0x56bfea */ if (!ZF_) goto L_0056bfea;
  /* 0056bfd3 call 0x5afa60 */ esp -= 4; M32(esp) = 0x56bfd8u; SAVEALL; F_005afa60(c); ABI_CHECK(0x5afa60u, 0x56bfd3u); RETCHK(0x56bfd8u, 0x56bfd3u); LOADALL;
  /* 0056bfd8 mov ecx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); ecx = (u32)(M32(m_)); }
  /* 0056bfde mov dword ptr [ecx*4 + 0x9be904], eax */ { const u32 m_ = (u32)(ecx * 4u + 0x9be904u); M32(m_) = (u32)(eax); }
  /* 0056bfe5 mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
L_0056bfea:;
  /* 0056bfea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056bfeb mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0056bfef push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056bff0 mov edi, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); edi = (u32)(M32(m_)); }
  /* 0056bff7 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0056bffc rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056bffe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056bfff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0056c000:;
  /* 0056c000 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056c002 mov dword ptr [0x9bea58], 0 */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(0x0u); }
  /* 0056c00c mov dword ptr [0x9bea6c], 0 */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(0x0u); }
  /* 0056c016 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056c017 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056c020(CPU *c) {
  NATIVE_HOOK(0x56c020u) REGS; LOADALL;
L_0056c020:;
  /* 0056c020 mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056c026 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0056c028 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056c02a cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056c02c setg al */ { eax = (eax & 0xffffff00u) | ((u32)((!(ZF_|LT_)) ? 1u : 0u) & 0xffu); }
  /* 0056c02f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056c031 je 0x56c046 */ if (ZF_) goto L_0056c046;
  /* 0056c033 dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0056c034 mov dword ptr [0x9bea58], ecx */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(ecx); }
  /* 0056c03a mov dword ptr [0x9be984], edx */ { const u32 m_ = (u32)(0x9be984u); M32(m_) = (u32)(edx); }
  /* 0056c040 mov dword ptr [0x9bea6c], ecx */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(ecx); }
L_0056c046:;
  /* 0056c046 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056c050(CPU *c) {
  NATIVE_HOOK(0x56c050u) REGS; LOADALL;
L_0056c050:;
  /* 0056c050 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c053 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0056c057 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0056c05b mov dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(eax); }
  /* 0056c05f mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056c064 mov dword ptr [esp + 4], ecx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0056c068 lea edx, [esp] */ edx = (u32)((u32)(esp));
  /* 0056c06c mov ecx, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056c073 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056c075 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056c076 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056c077 mov dword ptr [esp + 0x14], 0x3f800000 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056c07f call 0x5af2d0 */ esp -= 4; M32(esp) = 0x56c084u; SAVEALL; F_005af2d0(c); ABI_CHECK(0x5af2d0u, 0x56c07fu); RETCHK(0x56c084u, 0x56c07fu); LOADALL;
  /* 0056c084 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056c086 mov dword ptr [0x9bea58], eax */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(eax); }
  /* 0056c08b mov dword ptr [0x9bea6c], eax */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(eax); }
  /* 0056c090 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056c095 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c098 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056c0a0(CPU *c) {
  NATIVE_HOOK(0x56c0a0u) REGS; LOADALL;
L_0056c0a0:;
  /* 0056c0a0 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c0a3 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0056c0a7 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0056c0ab mov dword ptr [esp], eax */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(eax); }
  /* 0056c0af mov eax, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); eax = (u32)(M32(m_)); }
  /* 0056c0b4 mov dword ptr [esp + 4], ecx */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0056c0b8 lea edx, [esp] */ edx = (u32)((u32)(esp));
  /* 0056c0bc mov ecx, dword ptr [eax*4 + 0x9be904] */ { const u32 m_ = (u32)(eax * 4u + 0x9be904u); ecx = (u32)(M32(m_)); }
  /* 0056c0c3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0056c0c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056c0c6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056c0c7 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0056c0cf call 0x5af460 */ esp -= 4; M32(esp) = 0x56c0d4u; SAVEALL; F_005af460(c); ABI_CHECK(0x5af460u, 0x56c0cfu); RETCHK(0x56c0d4u, 0x56c0cfu); LOADALL;
  /* 0056c0d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0056c0d6 mov dword ptr [0x9bea58], eax */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(eax); }
  /* 0056c0db mov dword ptr [0x9bea6c], eax */ { const u32 m_ = (u32)(0x9bea6cu); M32(m_) = (u32)(eax); }
  /* 0056c0e0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056c0e5 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c0e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0056c0f0(CPU *c) {
  NATIVE_HOOK(0x56c0f0u) REGS; LOADALL;
L_0056c0f0:;
  /* 0056c0f0 mov eax, dword ptr [0x9bea58] */ { const u32 m_ = (u32)(0x9bea58u); eax = (u32)(M32(m_)); }
  /* 0056c0f5 sub esp, 0x64 */ { u32 a_ = esp, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c0f8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056c0fa jne 0x56c226 */ if (!ZF_) goto L_0056c226;
  /* 0056c100 mov eax, dword ptr [0x9bea8c] */ { const u32 m_ = (u32)(0x9bea8cu); eax = (u32)(M32(m_)); }
  /* 0056c105 cmp dword ptr [eax + 0x14], 2 */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056c109 jne 0x56c115 */ if (!ZF_) goto L_0056c115;
  /* 0056c10b mov dword ptr [esp], 0x3f800000 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x3f800000u); }
  /* 0056c113 jmp 0x56c11f */ goto L_0056c11f;
L_0056c115:;
  /* 0056c115 mov ecx, dword ptr [0x9bea60] */ { const u32 m_ = (u32)(0x9bea60u); ecx = (u32)(M32(m_)); }
  /* 0056c11b mov dword ptr [esp], ecx */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(ecx); }
L_0056c11f:;
  /* 0056c11f mov edx, dword ptr [0x9be984] */ { const u32 m_ = (u32)(0x9be984u); edx = (u32)(M32(m_)); }
  /* 0056c125 push 0x9be8c4 */ { u32 v_ = 0x9be8c4u; esp -= 4; M32(esp) = v_; }
  /* 0056c12a lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0056c12e mov eax, dword ptr [edx*4 + 0x9be904] */ { const u32 m_ = (u32)(edx * 4u + 0x9be904u); eax = (u32)(M32(m_)); }
  /* 0056c135 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056c136 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056c137 call 0x5ae8c0 */ esp -= 4; M32(esp) = 0x56c13cu; SAVEALL; F_005ae8c0(c); ABI_CHECK(0x5ae8c0u, 0x56c137u); RETCHK(0x56c13cu, 0x56c137u); LOADALL;
  /* 0056c13c mov edx, dword ptr [0x9be988] */ { const u32 m_ = (u32)(0x9be988u); edx = (u32)(M32(m_)); }
  /* 0056c142 mov eax, dword ptr [0x9be98c] */ { const u32 m_ = (u32)(0x9be98cu); eax = (u32)(M32(m_)); }
  /* 0056c147 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0056c14b mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 0056c14f mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0056c153 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0056c157 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0056c159 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 0056c15d push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056c15f lea ecx, [esp + 0x34] */ ecx = (u32)((u32)(esp + 0x34u));
  /* 0056c163 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056c164 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056c165 mov dword ptr [esp + 0x28], edx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(edx); }
  /* 0056c169 mov dword ptr [esp + 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x3f800000u); }
  /* 0056c171 call 0x5af2d0 */ esp -= 4; M32(esp) = 0x56c176u; SAVEALL; F_005af2d0(c); ABI_CHECK(0x5af2d0u, 0x56c171u); RETCHK(0x56c176u, 0x56c171u); LOADALL;
  /* 0056c176 fld dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); FPUSH((double)MF32(m_)); }
  /* 0056c17a fcomp dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0056c17e add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c181 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0056c183 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056c186 jp 0x56c18e */ if (PF_) goto L_0056c18e;
  /* 0056c188 fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0056c18c jmp 0x56c192 */ goto L_0056c192;
L_0056c18e:;
  /* 0056c18e fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
L_0056c192:;
  /* 0056c192 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 0056c194 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056c195 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056c196 fchs */ ST(0) = -ST(0);
  /* 0056c198 fstp dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056c19c lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 0056c1a0 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056c1a2 fstp dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056c1a6 lea eax, [esp + 0x30] */ eax = (u32)((u32)(esp + 0x30u));
  /* 0056c1aa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056c1ab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056c1ac mov dword ptr [esp + 0x28], 0x3f800000 */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(0x3f800000u); }
  /* 0056c1b4 call 0x5af2d0 */ esp -= 4; M32(esp) = 0x56c1b9u; SAVEALL; F_005af2d0(c); ABI_CHECK(0x5af2d0u, 0x56c1b4u); RETCHK(0x56c1b9u, 0x56c1b4u); LOADALL;
  /* 0056c1b9 fld dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0056c1bd fmul dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056c1c1 lea ecx, [esp + 0x2c] */ ecx = (u32)((u32)(esp + 0x2cu));
  /* 0056c1c5 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0056c1c7 lea edx, [esp + 0x3c] */ edx = (u32)((u32)(esp + 0x3cu));
  /* 0056c1cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0056c1cc fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056c1d2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056c1d3 mov dword ptr [esp + 0x40], 0 */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(0x0u); }
  /* 0056c1db fstp dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056c1df fld dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0056c1e3 fmul dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056c1e7 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0056c1ed fchs */ ST(0) = -ST(0);
  /* 0056c1ef fstp dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0056c1f3 call 0x5af460 */ esp -= 4; M32(esp) = 0x56c1f8u; SAVEALL; F_005af460(c); ABI_CHECK(0x5af460u, 0x56c1f3u); RETCHK(0x56c1f8u, 0x56c1f3u); LOADALL;
  /* 0056c1f8 lea eax, [esp + 0x44] */ eax = (u32)((u32)(esp + 0x44u));
  /* 0056c1fc mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0056c201 lea esi, [esp + 0x44] */ esi = (u32)((u32)(esp + 0x44u));
  /* 0056c205 mov edi, 0x9be998 */ { edi = (u32)(0x9be998u); }
  /* 0056c20a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056c20b push 0x9be9d8 */ { u32 v_ = 0x9be9d8u; esp -= 4; M32(esp) = v_; }
  /* 0056c210 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056c212 call 0x5af080 */ esp -= 4; M32(esp) = 0x56c217u; SAVEALL; F_005af080(c); ABI_CHECK(0x5af080u, 0x56c212u); RETCHK(0x56c217u, 0x56c212u); LOADALL;
  /* 0056c217 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c21a mov dword ptr [0x9bea58], 1 */ { const u32 m_ = (u32)(0x9bea58u); M32(m_) = (u32)(0x1u); }
  /* 0056c224 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056c225 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0056c226:;
  /* 0056c226 mov ecx, dword ptr [0x9bea8c] */ { const u32 m_ = (u32)(0x9bea8cu); ecx = (u32)(M32(m_)); }
  /* 0056c22c mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0056c22f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0056c230 call 0x5abd50 */ esp -= 4; M32(esp) = 0x56c235u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x56c230u); RETCHK(0x56c235u, 0x56c230u); LOADALL;
  /* 0056c235 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056c236 push 0x9be998 */ { u32 v_ = 0x9be998u; esp -= 4; M32(esp) = v_; }
  /* 0056c23b push 0x9bea18 */ { u32 v_ = 0x9bea18u; esp -= 4; M32(esp) = v_; }
  /* 0056c240 call 0x5ae8c0 */ esp -= 4; M32(esp) = 0x56c245u; SAVEALL; F_005ae8c0(c); ABI_CHECK(0x5ae8c0u, 0x56c240u); RETCHK(0x56c245u, 0x56c240u); LOADALL;
  /* 0056c245 mov eax, 0x9bea18 */ { eax = (u32)(0x9bea18u); }
  /* 0056c24a add esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0056c24d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
