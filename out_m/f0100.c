#include "funcs.h"

void F_009c4126(CPU *c) {
  NATIVE_HOOK(0x9c4126u) REGS; LOADALL;
L_009c4126:;
  /* 009c4126 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c4128 call 0x4019a0 */ esp -= 4; M32(esp) = 0x9c412du; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x9c4128u); RETCHK(0x9c412du, 0x9c4128u); LOADALL;
  /* 009c412d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4130 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 009c4136 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4138 je 0x9c4153 */ if (ZF_) goto L_009c4153;
  /* 009c413a push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c413e push 0x4000000f */ { u32 v_ = 0x4000000fu; esp -= 4; M32(esp) = v_; }
  /* 009c4143 mov eax, esp */ { eax = (u32)(esp); }
  /* 009c4145 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c4146 mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 009c414b call 0x55f4b0 */ esp -= 4; M32(esp) = 0x9c4150u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x9c414bu); RETCHK(0x9c4150u, 0x9c414bu); LOADALL;
  /* 009c4150 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_009c4153:;
  /* 009c4153 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_009c4200(CPU *c) {
  NATIVE_HOOK(0x9c4200u) REGS; LOADALL;
L_009c4200:;
  /* 009c4200 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c4201 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009c4202 sub esp, 0x100 */ { u32 a_ = esp, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4208 mov esi, edx */ { esi = (u32)(edx); }
  /* 009c420a mov edi, esp */ { edi = (u32)(esp); }
  /* 009c420c mov ecx, 0xff */ { ecx = (u32)(0xffu); }
L_009c4211:;
  /* 009c4211 lodsb al, byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; eax = (eax & 0xffffff00u) | ((u32)(M8(esi)) & 0xffu); esi += st_; }
  /* 009c4212 cmp al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c4214 jne 0x9c4218 */ if (!ZF_) goto L_009c4218;
  /* 009c4216 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_009c4218:;
  /* 009c4218 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 009c4219 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009c421b je 0x9c4222 */ if (ZF_) goto L_009c4222;
  /* 009c421d loop 0x9c4211 */ if (--ecx != 0) goto L_009c4211;
  /* 009c421f mov byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x0u); }
L_009c4222:;
  /* 009c4222 mov edx, esp */ { edx = (u32)(esp); }
  /* 009c4224 call 0x4f9eb0 */ esp -= 4; M32(esp) = 0x9c4229u; SAVEALL; F_004f9eb0(c); ABI_CHECK(0x4f9eb0u, 0x9c4224u); RETCHK(0x9c4229u, 0x9c4224u); LOADALL;
  /* 009c4229 add esp, 0x100 */ { u32 a_ = esp, b_ = 0x100u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c422f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c4230 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c4231 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4211(CPU *c) {
  NATIVE_HOOK(0x9c4211u) REGS; LOADALL;
L_009c4211:;
  /* 009c4211 lodsb al, byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; eax = (eax & 0xffffff00u) | ((u32)(M8(esi)) & 0xffu); esi += st_; }
  /* 009c4212 cmp al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c4214 jne 0x9c4218 */ if (!ZF_) goto L_009c4218;
  /* 009c4216 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_009c4218:;
  /* 009c4218 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 009c4219 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009c421b je 0x9c4222 */ if (ZF_) goto L_009c4222;
  /* 009c421d loop 0x9c4211 */ if (--ecx != 0) goto L_009c4211;
  /* 009c421f mov byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)(0x0u); }
L_009c4222:;
  /* 009c4222 mov edx, esp */ { edx = (u32)(esp); }
  /* 009c4224 call 0x4f9eb0 */ esp -= 4; M32(esp) = 0x9c4229u; SAVEALL; F_004f9eb0(c); ABI_CHECK(0x4f9eb0u, 0x9c4224u); RETCHK(0x9c4229u, 0x9c4224u); LOADALL;
  /* 009c4229 add esp, 0x100 */ { u32 a_ = esp, b_ = 0x100u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c422f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c4230 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c4231 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4680(CPU *c) {
  NATIVE_HOOK(0x9c4680u) REGS; LOADALL;
L_009c4680:;
  /* 009c4680 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4683 mov dword ptr [esp + 4], 0x645ac0 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x645ac0u); }
  /* 009c468b cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c468e jne 0x9c4698 */ if (!ZF_) goto L_009c4698;
  /* 009c4690 mov dword ptr [esp + 4], 0x9c44a4 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44a4u); }
L_009c4698:;
  /* 009c4698 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4699(CPU *c) {
  NATIVE_HOOK(0x9c4699u) REGS; LOADALL;
L_009c4699:;
  /* 009c4699 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c469c mov dword ptr [esp + 4], 0x6403cc */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x6403ccu); }
  /* 009c46a4 cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c46a6 jne 0x9c46b0 */ if (!ZF_) goto L_009c46b0;
  /* 009c46a8 mov dword ptr [esp + 4], 0x9c43dc */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c43dcu); }
L_009c46b0:;
  /* 009c46b0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c46b1(CPU *c) {
  NATIVE_HOOK(0x9c46b1u) REGS; LOADALL;
L_009c46b1:;
  /* 009c46b1 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c46b4 mov dword ptr [esp + 4], 0x6403cc */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x6403ccu); }
  /* 009c46bc cmp byte ptr [esi + 0xd29], 2 */ { const u32 m_ = (u32)(esi + 0xd29u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c46c3 jne 0x9c46cd */ if (!ZF_) goto L_009c46cd;
  /* 009c46c5 mov dword ptr [esp + 4], 0x9c43dc */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c43dcu); }
L_009c46cd:;
  /* 009c46cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c46ce(CPU *c) {
  NATIVE_HOOK(0x9c46ceu) REGS; LOADALL;
L_009c46ce:;
  /* 009c46ce push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c46d1 mov dword ptr [esp + 4], 0x6403cc */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x6403ccu); }
  /* 009c46d9 cmp byte ptr [eax + 0xd29], 2 */ { const u32 m_ = (u32)(eax + 0xd29u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c46e0 jne 0x9c46ea */ if (!ZF_) goto L_009c46ea;
  /* 009c46e2 mov dword ptr [esp + 4], 0x9c43dc */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c43dcu); }
L_009c46ea:;
  /* 009c46ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c471c(CPU *c) {
  NATIVE_HOOK(0x9c471cu) REGS; LOADALL;
L_009c471c:;
  /* 009c471c push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c471f mov dword ptr [esp + 4], 0x64dc9c */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x64dc9cu); }
  /* 009c4727 cmp cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c472a jne 0x9c4734 */ if (!ZF_) goto L_009c4734;
  /* 009c472c mov dword ptr [esp + 4], 0x9c44d8 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44d8u); }
L_009c4734:;
  /* 009c4734 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4735(CPU *c) {
  NATIVE_HOOK(0x9c4735u) REGS; LOADALL;
L_009c4735:;
  /* 009c4735 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4738 mov dword ptr [esp + 4], 0x64dc9c */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x64dc9cu); }
  /* 009c4740 cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c4742 jne 0x9c474c */ if (!ZF_) goto L_009c474c;
  /* 009c4744 mov dword ptr [esp + 4], 0x9c44d8 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44d8u); }
L_009c474c:;
  /* 009c474c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c474d(CPU *c) {
  NATIVE_HOOK(0x9c474du) REGS; LOADALL;
L_009c474d:;
  /* 009c474d push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4750 mov dword ptr [esp + 4], 0x64dc9c */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x64dc9cu); }
  /* 009c4758 cmp dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c475b jne 0x9c4765 */ if (!ZF_) goto L_009c4765;
  /* 009c475d mov dword ptr [esp + 4], 0x9c44d8 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44d8u); }
L_009c4765:;
  /* 009c4765 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4766(CPU *c) {
  NATIVE_HOOK(0x9c4766u) REGS; LOADALL;
L_009c4766:;
  /* 009c4766 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4769 mov dword ptr [esp + 4], 0x6544e4 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x6544e4u); }
  /* 009c4771 cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c4773 jne 0x9c477d */ if (!ZF_) goto L_009c477d;
  /* 009c4775 mov dword ptr [esp + 4], 0x9c44ec */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44ecu); }
L_009c477d:;
  /* 009c477d lea eax, [ebp - 0x14c] */ eax = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 009c4783 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4784(CPU *c) {
  NATIVE_HOOK(0x9c4784u) REGS; LOADALL;
L_009c4784:;
  /* 009c4784 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4787 mov dword ptr [esp + 4], 0x6544e4 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x6544e4u); }
  /* 009c478f cmp dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c4792 jne 0x9c479c */ if (!ZF_) goto L_009c479c;
  /* 009c4794 mov dword ptr [esp + 4], 0x9c44ec */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44ecu); }
L_009c479c:;
  /* 009c479c lea edx, [ebp - 0x14c] */ edx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 009c47a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c47a3(CPU *c) {
  NATIVE_HOOK(0x9c47a3u) REGS; LOADALL;
L_009c47a3:;
  /* 009c47a3 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c47a6 mov dword ptr [esp + 4], 0x6544e4 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x6544e4u); }
  /* 009c47ae cmp dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c47b1 jne 0x9c47bb */ if (!ZF_) goto L_009c47bb;
  /* 009c47b3 mov dword ptr [esp + 4], 0x9c44ec */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44ecu); }
L_009c47bb:;
  /* 009c47bb lea ecx, [ebp - 0x14c] */ ecx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 009c47c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c47c2(CPU *c) {
  NATIVE_HOOK(0x9c47c2u) REGS; LOADALL;
L_009c47c2:;
  /* 009c47c2 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c47c5 mov dword ptr [esp + 4], 0x6544e4 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x6544e4u); }
  /* 009c47cd cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c47cf jne 0x9c47d9 */ if (!ZF_) goto L_009c47d9;
  /* 009c47d1 mov dword ptr [esp + 4], 0x9c44ec */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x9c44ecu); }
L_009c47d9:;
  /* 009c47d9 lea edx, [ebp - 0x14c] */ edx = (u32)((u32)(ebp + 0xfffffeb4u));
  /* 009c47df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c47e0(CPU *c) {
  NATIVE_HOOK(0x9c47e0u) REGS; LOADALL;
L_009c47e0:;
  /* 009c47e0 mov ecx, 0x6403cc */ { ecx = (u32)(0x6403ccu); }
  /* 009c47e5 cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c47e7 jne 0x9c47ee */ if (!ZF_) goto L_009c47ee;
  /* 009c47e9 mov ecx, 0x9c43dc */ { ecx = (u32)(0x9c43dcu); }
L_009c47ee:;
  /* 009c47ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4959(CPU *c) {
  NATIVE_HOOK(0x9c4959u) REGS; LOADALL;
L_009c4959:;
  /* 009c4959 mov ecx, dword ptr [0x6403cc] */ { const u32 m_ = (u32)(0x6403ccu); ecx = (u32)(M32(m_)); }
  /* 009c495f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c4960 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009c4963 test byte ptr [eax + 0x45], 4 */ { const u32 m_ = (u32)(eax + 0x45u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009c4967 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009c4968 je 0x9c496f */ if (ZF_) goto L_009c496f;
  /* 009c496a mov ecx, 0xff0000ff */ { ecx = (u32)(0xff0000ffu); }
L_009c496f:;
  /* 009c496f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4a98(CPU *c) {
  NATIVE_HOOK(0x9c4a98u) REGS; LOADALL;
L_009c4a98:;
  /* 009c4a98 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c4a99 mov esi, dword ptr [ebp - 0x2ac] */ { const u32 m_ = (u32)(ebp + 0xfffffd54u); esi = (u32)(M32(m_)); }
  /* 009c4a9f mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 009c4aa1 cmp eax, 0x4000000b */ { u32 a_ = eax, b_ = 0x4000000bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4aa6 jne 0x9c4ac0 */ if (!ZF_) goto L_009c4ac0;
  /* 009c4aa8 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009c4aab mov edi, 0x9c0804 */ { edi = (u32)(0x9c0804u); }
  /* 009c4ab0 mov ecx, 5 */ { ecx = (u32)(0x5u); }
  /* 009c4ab5 cld */ c->df = 0;
  /* 009c4ab6 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 009c4ab8 inc dword ptr [0x9c0800] */ { const u32 m_ = (u32)(0x9c0800u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c4abe jmp 0x9c4aef */ goto L_009c4aef;
L_009c4ac0:;
  /* 009c4ac0 cmp eax, 0x4000000c */ { u32 a_ = eax, b_ = 0x4000000cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4ac5 jne 0x9c4aef */ if (!ZF_) goto L_009c4aef;
  /* 009c4ac7 mov edi, 0x9c0860 */ { edi = (u32)(0x9c0860u); }
  /* 009c4acc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c4ace mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 009c4ad3 cld */ c->df = 0;
  /* 009c4ad4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 009c4ad6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 009c4ad9 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4adc jbe 0x9c4ae3 */ if ((CF_|ZF_)) goto L_009c4ae3;
  /* 009c4ade mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_009c4ae3:;
  /* 009c4ae3 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009c4ae6 mov edi, 0x9c0860 */ { edi = (u32)(0x9c0860u); }
  /* 009c4aeb shl ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 009c4aed rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_009c4aef:;
  /* 009c4aef popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c4af0 lea ecx, [ebp - 0x228] */ ecx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 009c4af6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4af7(CPU *c) {
  NATIVE_HOOK(0x9c4af7u) REGS; LOADALL;
L_009c4af7:;
  /* 009c4af7 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c4af8 mov edi, 0x9c0900 */ { edi = (u32)(0x9c0900u); }
  /* 009c4afd mov ecx, 0x18 */ { ecx = (u32)(0x18u); }
  /* 009c4b02 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c4b04 cld */ c->df = 0;
  /* 009c4b05 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 009c4b07 mov dword ptr [0x9c0818], ebx */ { const u32 m_ = (u32)(0x9c0818u); M32(m_) = (u32)(ebx); }
  /* 009c4b0d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c4b0f mov dword ptr [0x9c081c], eax */ { const u32 m_ = (u32)(0x9c081cu); M32(m_) = (u32)(eax); }
  /* 009c4b14 mov dword ptr [0x9c0820], eax */ { const u32 m_ = (u32)(0x9c0820u); M32(m_) = (u32)(eax); }
  /* 009c4b19 mov dword ptr [0x9c0824], eax */ { const u32 m_ = (u32)(0x9c0824u); M32(m_) = (u32)(eax); }
  /* 009c4b1e mov dword ptr [0x9c0828], eax */ { const u32 m_ = (u32)(0x9c0828u); M32(m_) = (u32)(eax); }
  /* 009c4b23 mov dword ptr [0x9c082c], 0xffffffff */ { const u32 m_ = (u32)(0x9c082cu); M32(m_) = (u32)(0xffffffffu); }
  /* 009c4b2d mov dword ptr [0x9c0838], 0xffffff */ { const u32 m_ = (u32)(0x9c0838u); M32(m_) = (u32)(0xffffffu); }
  /* 009c4b37 mov eax, dword ptr [0x9c0814] */ { const u32 m_ = (u32)(0x9c0814u); eax = (u32)(M32(m_)); }
  /* 009c4b3c mov dword ptr [0x9c0834], eax */ { const u32 m_ = (u32)(0x9c0834u); M32(m_) = (u32)(eax); }
  /* 009c4b41 mov edi, dword ptr [ebx + 0xbe8c] */ { const u32 m_ = (u32)(ebx + 0xbe8cu); edi = (u32)(M32(m_)); }
  /* 009c4b47 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4b49 je 0x9c4baf */ if (ZF_) goto L_009c4baf;
  /* 009c4b4b mov edx, 0x9c4a00 */ { edx = (u32)(0x9c4a00u); }
  /* 009c4b50 call 0x9c4bbc */ esp -= 4; M32(esp) = 0x9c4b55u; SAVEALL; F_009c4bbc(c); ABI_CHECK(0x9c4bbcu, 0x9c4b50u); RETCHK(0x9c4b55u, 0x9c4b50u); LOADALL;
  /* 009c4b55 mov dword ptr [0x9c081c], eax */ { const u32 m_ = (u32)(0x9c081cu); M32(m_) = (u32)(eax); }
  /* 009c4b5a mov edx, 0x9c4a0b */ { edx = (u32)(0x9c4a0bu); }
  /* 009c4b5f call 0x9c4bbc */ esp -= 4; M32(esp) = 0x9c4b64u; SAVEALL; F_009c4bbc(c); ABI_CHECK(0x9c4bbcu, 0x9c4b5fu); RETCHK(0x9c4b64u, 0x9c4b5fu); LOADALL;
  /* 009c4b64 mov dword ptr [0x9c0820], eax */ { const u32 m_ = (u32)(0x9c0820u); M32(m_) = (u32)(eax); }
  /* 009c4b69 mov edx, 0x9c4a14 */ { edx = (u32)(0x9c4a14u); }
  /* 009c4b6e call 0x9c4bbc */ esp -= 4; M32(esp) = 0x9c4b73u; SAVEALL; F_009c4bbc(c); ABI_CHECK(0x9c4bbcu, 0x9c4b6eu); RETCHK(0x9c4b73u, 0x9c4b6eu); LOADALL;
  /* 009c4b73 mov dword ptr [0x9c0824], eax */ { const u32 m_ = (u32)(0x9c0824u); M32(m_) = (u32)(eax); }
  /* 009c4b78 mov edx, 0x9c4a20 */ { edx = (u32)(0x9c4a20u); }
  /* 009c4b7d call 0x9c4bbc */ esp -= 4; M32(esp) = 0x9c4b82u; SAVEALL; F_009c4bbc(c); ABI_CHECK(0x9c4bbcu, 0x9c4b7du); RETCHK(0x9c4b82u, 0x9c4b7du); LOADALL;
  /* 009c4b82 mov dword ptr [0x9c0828], eax */ { const u32 m_ = (u32)(0x9c0828u); M32(m_) = (u32)(eax); }
  /* 009c4b87 mov ecx, dword ptr [0x9c0820] */ { const u32 m_ = (u32)(0x9c0820u); ecx = (u32)(M32(m_)); }
  /* 009c4b8d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4b8f je 0x9c4baf */ if (ZF_) goto L_009c4baf;
  /* 009c4b91 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4b94 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c4b96 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 009c4b97 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c4b9au; SAVEALL; call_ind(c, t_); RETCHK(0x9c4b9au, 0x9c4b97u); LOADALL; }
  /* 009c4b9a fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009c4b9e fsub dword ptr [esp] */ { const u32 m_ = (u32)(esp); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009c4ba1 fstp dword ptr [0x9c0830] */ { const u32 m_ = (u32)(0x9c0830u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c4ba7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4baa call 0x9e0808 */ esp -= 4; M32(esp) = 0x9c4bafu; SAVEALL; F_009e0808(c); ABI_CHECK(0x9e0808u, 0x9c4baau); RETCHK(0x9c4bafu, 0x9c4baau); LOADALL;
L_009c4baf:;
  /* 009c4baf popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c4bb0 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4bb3 mov dword ptr [esp + 4], 0x64e73c */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x64e73cu); }
  /* 009c4bbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4bbc(CPU *c) {
  NATIVE_HOOK(0x9c4bbcu) REGS; LOADALL;
L_009c4bbc:;
  /* 009c4bbc sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4bbf mov esi, esp */ { esi = (u32)(esp); }
  /* 009c4bc1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009c4bc2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009c4bc4 call 0x403060 */ esp -= 4; M32(esp) = 0x9c4bc9u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9c4bc4u); RETCHK(0x9c4bc9u, 0x9c4bc4u); LOADALL;
  /* 009c4bc9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c4bca mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009c4bcc call 0x5075d0 */ esp -= 4; M32(esp) = 0x9c4bd1u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9c4bccu); RETCHK(0x9c4bd1u, 0x9c4bccu); LOADALL;
  /* 009c4bd1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c4bd2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009c4bd4 call 0x43ee60 */ esp -= 4; M32(esp) = 0x9c4bd9u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9c4bd4u); RETCHK(0x9c4bd9u, 0x9c4bd4u); LOADALL;
  /* 009c4bd9 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009c4bda add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4bdd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4bde(CPU *c) {
  NATIVE_HOOK(0x9c4bdeu) REGS; LOADALL;
L_009c4bde:;
  /* 009c4bde pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c4bdf cmp ebx, dword ptr [0x9c0818] */ { const u32 m_ = (u32)(0x9c0818u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4be5 jne 0x9c4d5c */ if (!ZF_) goto L_009c4d5c;
  /* 009c4beb cmp dword ptr [0x9c081c], 0 */ { const u32 m_ = (u32)(0x9c081cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4bf2 je 0x9c4d5c */ if (ZF_) goto L_009c4d5c;
  /* 009c4bf8 mov eax, dword ptr [0x9c0814] */ { const u32 m_ = (u32)(0x9c0814u); eax = (u32)(M32(m_)); }
  /* 009c4bfd cmp eax, dword ptr [0x9c0834] */ { const u32 m_ = (u32)(0x9c0834u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4c03 je 0x9c4c27 */ if (ZF_) goto L_009c4c27;
  /* 009c4c05 mov dword ptr [0x9c0834], eax */ { const u32 m_ = (u32)(0x9c0834u); M32(m_) = (u32)(eax); }
  /* 009c4c0a mov byte ptr [0x9c083b], 0xff */ { const u32 m_ = (u32)(0x9c083bu); M8(m_) = (u8)(0xffu); }
  /* 009c4c11 mov eax, dword ptr [0x9c0824] */ { const u32 m_ = (u32)(0x9c0824u); eax = (u32)(M32(m_)); }
  /* 009c4c16 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4c18 je 0x9c4c37 */ if (ZF_) goto L_009c4c37;
  /* 009c4c1a mov ecx, dword ptr [0x9c0810] */ { const u32 m_ = (u32)(0x9c0810u); ecx = (u32)(M32(m_)); }
  /* 009c4c20 call 0x5366d0 */ esp -= 4; M32(esp) = 0x9c4c25u; SAVEALL; F_005366d0(c); ABI_CHECK(0x5366d0u, 0x9c4c20u); RETCHK(0x9c4c25u, 0x9c4c20u); LOADALL;
  /* 009c4c25 jmp 0x9c4c37 */ goto L_009c4c37;
L_009c4c27:;
  /* 009c4c27 mov al, byte ptr [0x9c083b] */ { const u32 m_ = (u32)(0x9c083bu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c4c2c sub al, 5 */ { u32 a_ = (eax & 0xffu), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 009c4c2e jae 0x9c4c32 */ if (!CF_) goto L_009c4c32;
  /* 009c4c30 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_009c4c32:;
  /* 009c4c32 mov byte ptr [0x9c083b], al */ { const u32 m_ = (u32)(0x9c083bu); M8(m_) = (u8)((eax & 0xffu)); }
L_009c4c37:;
  /* 009c4c37 mov ecx, dword ptr [0x9c0828] */ { const u32 m_ = (u32)(0x9c0828u); ecx = (u32)(M32(m_)); }
  /* 009c4c3d call 0x9c4d64 */ esp -= 4; M32(esp) = 0x9c4c42u; SAVEALL; F_009c4d64(c); ABI_CHECK(0x9c4d64u, 0x9c4c3du); RETCHK(0x9c4c42u, 0x9c4c3du); LOADALL;
  /* 009c4c42 mov ecx, dword ptr [0x9c0824] */ { const u32 m_ = (u32)(0x9c0824u); ecx = (u32)(M32(m_)); }
  /* 009c4c48 call 0x9c4d64 */ esp -= 4; M32(esp) = 0x9c4c4du; SAVEALL; F_009c4d64(c); ABI_CHECK(0x9c4d64u, 0x9c4c48u); RETCHK(0x9c4c4du, 0x9c4c48u); LOADALL;
  /* 009c4c4d mov eax, dword ptr [0x9c0800] */ { const u32 m_ = (u32)(0x9c0800u); eax = (u32)(M32(m_)); }
  /* 009c4c52 cmp eax, dword ptr [0x9c082c] */ { const u32 m_ = (u32)(0x9c082cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4c58 je 0x9c4d5c */ if (ZF_) goto L_009c4d5c;
  /* 009c4c5e mov dword ptr [0x9c082c], eax */ { const u32 m_ = (u32)(0x9c082cu); M32(m_) = (u32)(eax); }
  /* 009c4c63 mov ecx, dword ptr [0x9c081c] */ { const u32 m_ = (u32)(0x9c081cu); ecx = (u32)(M32(m_)); }
  /* 009c4c69 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c4c6b push dword ptr [0x9c0804] */ { const u32 m_ = (u32)(0x9c0804u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4c71 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c4c74u; SAVEALL; call_ind(c, t_); RETCHK(0x9c4c74u, 0x9c4c71u); LOADALL; }
  /* 009c4c74 cmp dword ptr [0x9c0804], 0 */ { const u32 m_ = (u32)(0x9c0804u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4c7b je 0x9c4d5c */ if (ZF_) goto L_009c4d5c;
  /* 009c4c81 mov eax, dword ptr [0x9c0808] */ { const u32 m_ = (u32)(0x9c0808u); eax = (u32)(M32(m_)); }
  /* 009c4c86 mov ecx, dword ptr [0x9c080c] */ { const u32 m_ = (u32)(0x9c080cu); ecx = (u32)(M32(m_)); }
  /* 009c4c8c mov edx, 0x3e8 */ { edx = (u32)(0x3e8u); }
  /* 009c4c91 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4c93 jle 0x9c4cb4 */ if ((ZF_|LT_)) goto L_009c4cb4;
  /* 009c4c95 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4c97 jge 0x9c4c9b */ if (!LT_) goto L_009c4c9b;
  /* 009c4c99 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_009c4c9b:;
  /* 009c4c9b imul eax, eax, 0x3e8 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x3e8u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009c4ca1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 009c4ca3 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x9c4ca3u); eax = q_; edx = r_; }
  /* 009c4ca5 mov edx, eax */ { edx = (u32)(eax); }
  /* 009c4ca7 cmp edx, 0x3e8 */ { u32 a_ = edx, b_ = 0x3e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4cad jbe 0x9c4cb4 */ if ((CF_|ZF_)) goto L_009c4cb4;
  /* 009c4caf mov edx, 0x3e8 */ { edx = (u32)(0x3e8u); }
L_009c4cb4:;
  /* 009c4cb4 mov dword ptr [0x9c083c], edx */ { const u32 m_ = (u32)(0x9c083cu); M32(m_) = (u32)(edx); }
  /* 009c4cba mov eax, 0x9c4a2a */ { eax = (u32)(0x9c4a2au); }
  /* 009c4cbf mov ecx, dword ptr [0x9c0808] */ { const u32 m_ = (u32)(0x9c0808u); ecx = (u32)(M32(m_)); }
  /* 009c4cc5 cmp ecx, dword ptr [0x9c0810] */ { const u32 m_ = (u32)(0x9c0810u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4ccb jl 0x9c4cec */ if (LT_) goto L_009c4cec;
  /* 009c4ccd mov eax, 0x9c4a41 */ { eax = (u32)(0x9c4a41u); }
  /* 009c4cd2 cmp edx, 0x258 */ { u32 a_ = edx, b_ = 0x258u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4cd8 ja 0x9c4cec */ if (!(CF_|ZF_)) goto L_009c4cec;
  /* 009c4cda mov eax, 0x9c4a58 */ { eax = (u32)(0x9c4a58u); }
  /* 009c4cdf cmp edx, 0xc8 */ { u32 a_ = edx, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4ce5 ja 0x9c4cec */ if (!(CF_|ZF_)) goto L_009c4cec;
  /* 009c4ce7 mov eax, 0x9c4a6f */ { eax = (u32)(0x9c4a6fu); }
L_009c4cec:;
  /* 009c4cec mov ebx, dword ptr [0x9c0820] */ { const u32 m_ = (u32)(0x9c0820u); ebx = (u32)(M32(m_)); }
  /* 009c4cf2 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4cf4 je 0x9c4d5c */ if (ZF_) goto L_009c4d5c;
  /* 009c4cf6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c4cf7 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9c4cfcu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9c4cf7u); RETCHK(0x9c4cfcu, 0x9c4cf7u); LOADALL;
  /* 009c4cfc fild dword ptr [0x9c083c] */ { const u32 m_ = (u32)(0x9c083cu); FPUSH((double)(s32)M32(m_)); }
  /* 009c4d02 fdiv dword ptr [0x9c4a94] */ { const u32 m_ = (u32)(0x9c4a94u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 009c4d08 fstp dword ptr [0x9c0840] */ { const u32 m_ = (u32)(0x9c0840u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c4d0e sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4d11 mov ecx, dword ptr [0x9c0820] */ { const u32 m_ = (u32)(0x9c0820u); ecx = (u32)(M32(m_)); }
  /* 009c4d17 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c4d19 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 009c4d1a call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c4d1du; SAVEALL; call_ind(c, t_); RETCHK(0x9c4d1du, 0x9c4d1au); LOADALL; }
  /* 009c4d1d fld dword ptr [0x9c0840] */ { const u32 m_ = (u32)(0x9c0840u); FPUSH((double)MF32(m_)); }
  /* 009c4d23 fmul dword ptr [0x9c0830] */ { const u32 m_ = (u32)(0x9c0830u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 009c4d29 fadd dword ptr [esp] */ { const u32 m_ = (u32)(esp); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009c4d2c fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c4d30 mov ecx, dword ptr [0x9c0820] */ { const u32 m_ = (u32)(0x9c0820u); ecx = (u32)(M32(m_)); }
  /* 009c4d36 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c4d38 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 009c4d39 call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c4d3cu; SAVEALL; call_ind(c, t_); RETCHK(0x9c4d3cu, 0x9c4d39u); LOADALL; }
  /* 009c4d3c add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4d3f mov ecx, dword ptr [0x9c0820] */ { const u32 m_ = (u32)(0x9c0820u); ecx = (u32)(M32(m_)); }
  /* 009c4d45 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c4d47 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 009c4d4c push dword ptr [0x9c0840] */ { const u32 m_ = (u32)(0x9c0840u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4d52 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c4d54 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c4d56 call dword ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c4d5cu; SAVEALL; call_ind(c, t_); RETCHK(0x9c4d5cu, 0x9c4d56u); LOADALL; }
L_009c4d5c:;
  /* 009c4d5c popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c4d5d lea esi, [ebx + 0xc5f0] */ esi = (u32)((u32)(ebx + 0xc5f0u));
  /* 009c4d63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4d64(CPU *c) {
  NATIVE_HOOK(0x9c4d64u) REGS; LOADALL;
L_009c4d64:;
  /* 009c4d64 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4d66 je 0x9c4d72 */ if (ZF_) goto L_009c4d72;
  /* 009c4d68 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c4d6a push 0x9c0838 */ { u32 v_ = 0x9c0838u; esp -= 4; M32(esp) = v_; }
  /* 009c4d6f call dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c4d72u; SAVEALL; call_ind(c, t_); RETCHK(0x9c4d72u, 0x9c4d6fu); LOADALL; }
L_009c4d72:;
  /* 009c4d72 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4d73(CPU *c) {
  NATIVE_HOOK(0x9c4d73u) REGS; LOADALL;
L_009c4d73:;
  /* 009c4d73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009c4d74 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009c4d75 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009c4d77 call 0x9e0700 */ esp -= 4; M32(esp) = 0x9c4d7cu; SAVEALL; F_009e0700(c); ABI_CHECK(0x9e0700u, 0x9c4d77u); RETCHK(0x9c4d7cu, 0x9c4d77u); LOADALL;
  /* 009c4d7c jne 0x9c4df5 */ if (!ZF_) goto L_009c4df5;
  /* 009c4d7e mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 009c4d81 mov ecx, dword ptr [0x9c0818] */ { const u32 m_ = (u32)(0x9c0818u); ecx = (u32)(M32(m_)); }
  /* 009c4d87 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4d89 je 0x9c4d9f */ if (ZF_) goto L_009c4d9f;
  /* 009c4d8b mov ecx, dword ptr [ecx + 0xbe48] */ { const u32 m_ = (u32)(ecx + 0xbe48u); ecx = (u32)(M32(m_)); }
  /* 009c4d91 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c4d93 je 0x9c4d9f */ if (ZF_) goto L_009c4d9f;
  /* 009c4d95 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 009c4d98 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4d9a jne 0x9c4d9f */ if (!ZF_) goto L_009c4d9f;
  /* 009c4d9c or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_009c4d9f:;
  /* 009c4d9f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_009c4da1:;
  /* 009c4da1 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4da4 jae 0x9c4df5 */ if (!CF_) goto L_009c4df5;
  /* 009c4da6 cmp dword ptr [ecx*8 + 0x9c0860], edx */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0860u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4dad je 0x9c4db2 */ if (ZF_) goto L_009c4db2;
  /* 009c4daf inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c4db0 jmp 0x9c4da1 */ goto L_009c4da1;
L_009c4db2:;
  /* 009c4db2 mov ecx, dword ptr [ecx*8 + 0x9c0864] */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0864u); ecx = (u32)(M32(m_)); }
  /* 009c4db9 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4dbc jne 0x9c4dc5 */ if (!ZF_) goto L_009c4dc5;
  /* 009c4dbe mov eax, 0x4e2c */ { eax = (u32)(0x4e2cu); }
  /* 009c4dc3 jmp 0x9c4df5 */ goto L_009c4df5;
L_009c4dc5:;
  /* 009c4dc5 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4dc8 jne 0x9c4dd1 */ if (!ZF_) goto L_009c4dd1;
  /* 009c4dca mov eax, 0x4e2d */ { eax = (u32)(0x4e2du); }
  /* 009c4dcf jmp 0x9c4df5 */ goto L_009c4df5;
L_009c4dd1:;
  /* 009c4dd1 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4dd4 jne 0x9c4ddd */ if (!ZF_) goto L_009c4ddd;
  /* 009c4dd6 mov eax, 0x4e2e */ { eax = (u32)(0x4e2eu); }
  /* 009c4ddb jmp 0x9c4df5 */ goto L_009c4df5;
L_009c4ddd:;
  /* 009c4ddd cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4de0 jne 0x9c4de9 */ if (!ZF_) goto L_009c4de9;
  /* 009c4de2 mov eax, 0x4e2f */ { eax = (u32)(0x4e2fu); }
  /* 009c4de7 jmp 0x9c4df5 */ goto L_009c4df5;
L_009c4de9:;
  /* 009c4de9 cmp ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c4dec jne 0x9c4df5 */ if (!ZF_) goto L_009c4df5;
  /* 009c4dee mov eax, 0x4e31 */ { eax = (u32)(0x4e31u); }
  /* 009c4df3 jmp 0x9c4df5 */ goto L_009c4df5;
L_009c4df5:;
  /* 009c4df5 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 009c4df6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009c4df7 mov dword ptr [edi + 0x1a0], eax */ { const u32 m_ = (u32)(edi + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 009c4dfd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c4f20(CPU *c) {
  NATIVE_HOOK(0x9c4f20u) REGS; LOADALL;
L_009c4f20:;
  /* 009c4f20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c4f21 mov esi, dword ptr [edi + 0x108] */ { const u32 m_ = (u32)(edi + 0x108u); esi = (u32)(M32(m_)); }
  /* 009c4f27 call 0x531380 */ esp -= 4; M32(esp) = 0x9c4f2cu; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x9c4f27u); RETCHK(0x9c4f2cu, 0x9c4f27u); LOADALL;
  /* 009c4f2c mov dword ptr [edi + 0x108], 0 */ { const u32 m_ = (u32)(edi + 0x108u); M32(m_) = (u32)(0x0u); }
  /* 009c4f36 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c4f37 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009c4f39 jmp 0x54bd10 */ SAVEALL; F_0054bd10(c); return;
}

void F_009c5202(CPU *c) {
  NATIVE_HOOK(0x9c5202u) REGS; LOADALL;
L_009c5202:;
  /* 009c5202 cmp byte ptr [0x9c7000], 0 */ { const u32 m_ = (u32)(0x9c7000u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5209 je 0x9c5212 */ if (ZF_) goto L_009c5212;
  /* 009c520b lea eax, [esi + 0x9c8000] */ eax = (u32)((u32)(esi + 0x9c8000u));
  /* 009c5211 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c5212:;
  /* 009c5212 lea eax, [esi + edi + 0x69c] */ eax = (u32)((u32)(esi + edi + 0x69cu));
  /* 009c5219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c521a(CPU *c) {
  NATIVE_HOOK(0x9c521au) REGS; LOADALL;
L_009c521a:;
  /* 009c521a cmp byte ptr [0x9c7001], 0 */ { const u32 m_ = (u32)(0x9c7001u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5221 je 0x9c522a */ if (ZF_) goto L_009c522a;
  /* 009c5223 lea eax, [esi + 0x9cc000] */ eax = (u32)((u32)(esi + 0x9cc000u));
  /* 009c5229 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c522a:;
  /* 009c522a lea eax, [esi + edi + 0x2dc] */ eax = (u32)((u32)(esi + edi + 0x2dcu));
  /* 009c5231 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5232(CPU *c) {
  NATIVE_HOOK(0x9c5232u) REGS; LOADALL;
L_009c5232:;
  /* 009c5232 cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5239 je 0x9c5242 */ if (ZF_) goto L_009c5242;
  /* 009c523b lea eax, [esi + 0x9d0000] */ eax = (u32)((u32)(esi + 0x9d0000u));
  /* 009c5241 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c5242:;
  /* 009c5242 lea eax, [esi + edi + 0x73c] */ eax = (u32)((u32)(esi + edi + 0x73cu));
  /* 009c5249 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c524a(CPU *c) {
  NATIVE_HOOK(0x9c524au) REGS; LOADALL;
L_009c524a:;
  /* 009c524a cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5251 je 0x9c525a */ if (ZF_) goto L_009c525a;
  /* 009c5253 lea eax, [edi + 0x9d0000] */ eax = (u32)((u32)(edi + 0x9d0000u));
  /* 009c5259 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c525a:;
  /* 009c525a lea eax, [edi + ebx + 0x73c] */ eax = (u32)((u32)(edi + ebx + 0x73cu));
  /* 009c5261 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5262(CPU *c) {
  NATIVE_HOOK(0x9c5262u) REGS; LOADALL;
L_009c5262:;
  /* 009c5262 cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5269 je 0x9c5272 */ if (ZF_) goto L_009c5272;
  /* 009c526b lea esi, [esi + 0x9d0000] */ esi = (u32)((u32)(esi + 0x9d0000u));
  /* 009c5271 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c5272:;
  /* 009c5272 lea esi, [esi + ebx + 0x73c] */ esi = (u32)((u32)(esi + ebx + 0x73cu));
  /* 009c5279 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c527a(CPU *c) {
  NATIVE_HOOK(0x9c527au) REGS; LOADALL;
L_009c527a:;
  /* 009c527a cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5281 je 0x9c528a */ if (ZF_) goto L_009c528a;
  /* 009c5283 lea esi, [esi + 0x9d0000] */ esi = (u32)((u32)(esi + 0x9d0000u));
  /* 009c5289 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c528a:;
  /* 009c528a lea esi, [esi + edi + 0x73c] */ esi = (u32)((u32)(esi + edi + 0x73cu));
  /* 009c5291 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5292(CPU *c) {
  NATIVE_HOOK(0x9c5292u) REGS; LOADALL;
L_009c5292:;
  /* 009c5292 cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5299 je 0x9c52a2 */ if (ZF_) goto L_009c52a2;
  /* 009c529b lea ebx, [edi + 0x9d0000] */ ebx = (u32)((u32)(edi + 0x9d0000u));
  /* 009c52a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c52a2:;
  /* 009c52a2 lea ebx, [edi + edx + 0x73c] */ ebx = (u32)((u32)(edi + edx + 0x73cu));
  /* 009c52a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c52aa(CPU *c) {
  NATIVE_HOOK(0x9c52aau) REGS; LOADALL;
L_009c52aa:;
  /* 009c52aa cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c52b1 je 0x9c52ba */ if (ZF_) goto L_009c52ba;
  /* 009c52b3 lea ecx, [ebx + 0x9d0000] */ ecx = (u32)((u32)(ebx + 0x9d0000u));
  /* 009c52b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c52ba:;
  /* 009c52ba lea ecx, [ebx + esi + 0x73c] */ ecx = (u32)((u32)(ebx + esi + 0x73cu));
  /* 009c52c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c52c2(CPU *c) {
  NATIVE_HOOK(0x9c52c2u) REGS; LOADALL;
L_009c52c2:;
  /* 009c52c2 cmp byte ptr [0x9c7003], 0 */ { const u32 m_ = (u32)(0x9c7003u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c52c9 je 0x9c52d6 */ if (ZF_) goto L_009c52d6;
  /* 009c52cb lea ecx, [ebx + ebx*2] */ ecx = (u32)((u32)(ebx + ebx * 2u));
  /* 009c52ce lea eax, [ecx*4 + 0x9d4000] */ eax = (u32)((u32)(ecx * 4u + 0x9d4000u));
  /* 009c52d5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c52d6:;
  /* 009c52d6 add ebx, 7 */ { u32 a_ = ebx, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 009c52d9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 009c52db lea ecx, [eax + eax*2] */ ecx = (u32)((u32)(eax + eax * 2u));
  /* 009c52de lea eax, [edi + ecx*4] */ eax = (u32)((u32)(edi + ecx * 4u));
  /* 009c52e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c52e2(CPU *c) {
  NATIVE_HOOK(0x9c52e2u) REGS; LOADALL;
L_009c52e2:;
  /* 009c52e2 cmp byte ptr [0x9c7000], 0 */ { const u32 m_ = (u32)(0x9c7000u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c52e9 je 0x9c5306 */ if (ZF_) goto L_009c5306;
  /* 009c52eb mov ecx, 0x9d7000 */ { ecx = (u32)(0x9d7000u); }
  /* 009c52f0 mov dword ptr [ebp - 0x47c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffb84u); M32(m_) = (u32)(ecx); }
  /* 009c52f6 mov ecx, 0x3e8 */ { ecx = (u32)(0x3e8u); }
  /* 009c52fb mov edx, 0x9d8000 */ { edx = (u32)(0x9d8000u); }
  /* 009c5300 mov eax, 0x9d9000 */ { eax = (u32)(0x9d9000u); }
  /* 009c5305 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c5306:;
  /* 009c5306 lea ecx, [eax + 0x90] */ ecx = (u32)((u32)(eax + 0x90u));
  /* 009c530c mov dword ptr [ebp - 0x47c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffb84u); M32(m_) = (u32)(ecx); }
  /* 009c5312 mov ecx, dword ptr [eax + 0xf4] */ { const u32 m_ = (u32)(eax + 0xf4u); ecx = (u32)(M32(m_)); }
  /* 009c5318 lea edx, [eax + 0xc4] */ edx = (u32)((u32)(eax + 0xc4u));
  /* 009c531e add eax, 0xf8 */ { u32 a_ = eax, b_ = 0xf8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009c5323 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5324(CPU *c) {
  NATIVE_HOOK(0x9c5324u) REGS; LOADALL;
L_009c5324:;
  /* 009c5324 cmp byte ptr [0x9c7000], 0 */ { const u32 m_ = (u32)(0x9c7000u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c532b je 0x9c534f */ if (ZF_) goto L_009c534f;
  /* 009c532d mov edx, 0x9d9000 */ { edx = (u32)(0x9d9000u); }
  /* 009c5332 mov dword ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xeu); }
  /* 009c5339 mov dword ptr [ebp - 0x104], edx */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); M32(m_) = (u32)(edx); }
  /* 009c533f mov edx, 0x3e8 */ { edx = (u32)(0x3e8u); }
  /* 009c5344 mov eax, 0x9d7000 */ { eax = (u32)(0x9d7000u); }
  /* 009c5349 mov ecx, 0x9d8000 */ { ecx = (u32)(0x9d8000u); }
  /* 009c534e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c534f:;
  /* 009c534f lea edx, [ecx + 0xf8] */ edx = (u32)((u32)(ecx + 0xf8u));
  /* 009c5355 mov dword ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xeu); }
  /* 009c535c mov dword ptr [ebp - 0x104], edx */ { const u32 m_ = (u32)(ebp + 0xfffffefcu); M32(m_) = (u32)(edx); }
  /* 009c5362 mov edx, dword ptr [ecx + 0xc0] */ { const u32 m_ = (u32)(ecx + 0xc0u); edx = (u32)(M32(m_)); }
  /* 009c5368 lea eax, [ecx + 0x90] */ eax = (u32)((u32)(ecx + 0x90u));
  /* 009c536e add ecx, 0xc4 */ { u32 a_ = ecx, b_ = 0xc4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 009c5374 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5375(CPU *c) {
  NATIVE_HOOK(0x9c5375u) REGS; LOADALL;
L_009c5375:;
  /* 009c5375 cmp byte ptr [0x9c7003], 0 */ { const u32 m_ = (u32)(0x9c7003u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c537c je 0x9c5390 */ if (ZF_) goto L_009c5390;
  /* 009c537e mov edx, 0x9da000 */ { edx = (u32)(0x9da000u); }
  /* 009c5383 mov ecx, 0x9db000 */ { ecx = (u32)(0x9db000u); }
  /* 009c5388 mov eax, 0x3e8 */ { eax = (u32)(0x3e8u); }
  /* 009c538d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c538f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c5390:;
  /* 009c5390 lea edx, [eax + 0x960] */ edx = (u32)((u32)(eax + 0x960u));
  /* 009c5396 lea ecx, [eax + 0x9e4] */ ecx = (u32)((u32)(eax + 0x9e4u));
  /* 009c539c mov eax, dword ptr [eax + 0xa64] */ { const u32 m_ = (u32)(eax + 0xa64u); eax = (u32)(M32(m_)); }
  /* 009c53a2 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c53a4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c53a5(CPU *c) {
  NATIVE_HOOK(0x9c53a5u) REGS; LOADALL;
L_009c53a5:;
  /* 009c53a5 cmp byte ptr [0x9c7003], 0 */ { const u32 m_ = (u32)(0x9c7003u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c53ac je 0x9c53c4 */ if (ZF_) goto L_009c53c4;
  /* 009c53ae mov ecx, 0x9da000 */ { ecx = (u32)(0x9da000u); }
  /* 009c53b3 mov dword ptr [ebp - 0x27c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffd84u); M32(m_) = (u32)(ecx); }
  /* 009c53b9 mov ecx, 0x3e8 */ { ecx = (u32)(0x3e8u); }
  /* 009c53be mov edx, 0x9db000 */ { edx = (u32)(0x9db000u); }
  /* 009c53c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c53c4:;
  /* 009c53c4 lea ecx, [eax + 0x960] */ ecx = (u32)((u32)(eax + 0x960u));
  /* 009c53ca mov dword ptr [ebp - 0x27c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffd84u); M32(m_) = (u32)(ecx); }
  /* 009c53d0 mov ecx, dword ptr [eax + 0xa64] */ { const u32 m_ = (u32)(eax + 0xa64u); ecx = (u32)(M32(m_)); }
  /* 009c53d6 lea edx, [eax + 0x9e4] */ edx = (u32)((u32)(eax + 0x9e4u));
  /* 009c53dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c53dd(CPU *c) {
  NATIVE_HOOK(0x9c53ddu) REGS; LOADALL;
L_009c53dd:;
  /* 009c53dd cmp byte ptr [0x9c7003], 0 */ { const u32 m_ = (u32)(0x9c7003u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c53e4 je 0x9c53ec */ if (ZF_) goto L_009c53ec;
  /* 009c53e6 mov eax, 0x9dc000 */ { eax = (u32)(0x9dc000u); }
  /* 009c53eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c53ec:;
  /* 009c53ec add eax, 0xa68 */ { u32 a_ = eax, b_ = 0xa68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009c53f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5560(CPU *c) {
  NATIVE_HOOK(0x9c5560u) REGS; LOADALL;
L_009c5560:;
  /* 009c5560 cmp dword ptr [ebx + 0x63c], 0 */ { const u32 m_ = (u32)(ebx + 0x63cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5567 je 0x9c557b */ if (ZF_) goto L_009c557b;
  /* 009c5569 fld dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); FPUSH((double)MF32(m_)); }
  /* 009c556f fmul dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 009c5575 fstp dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); MF32(m_) = (float)ST(0); FPOP(); }
L_009c557b:;
  /* 009c557b mov dword ptr [ebx + 0x63c], esi */ { const u32 m_ = (u32)(ebx + 0x63cu); M32(m_) = (u32)(esi); }
  /* 009c5581 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5590(CPU *c) {
  NATIVE_HOOK(0x9c5590u) REGS; LOADALL;
L_009c5590:;
  /* 009c5590 fld dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); FPUSH((double)MF32(m_)); }
  /* 009c5596 cmp dword ptr [ebx + 0x63c], 0 */ { const u32 m_ = (u32)(ebx + 0x63cu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c559d jne 0x9c55a5 */ if (!ZF_) goto L_009c55a5;
  /* 009c559f fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
L_009c55a5:;
  /* 009c55a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c5650(CPU *c) {
  NATIVE_HOOK(0x9c5650u) REGS; LOADALL;
L_009c5650:;
  /* 009c5650 movsx edx, word ptr [eax + 0xb60] */ { const u32 m_ = (u32)(eax + 0xb60u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 009c5657 cmp edx, 0x64 */ { u32 a_ = edx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c565a jl 0x9c5699 */ if (LT_) goto L_009c5699;
  /* 009c565c push 0x9c562d */ { u32 v_ = 0x9c562du; esp -= 4; M32(esp) = v_; }
  /* 009c5661 cmp edx, 0xc8 */ { u32 a_ = edx, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5667 jl 0x9c567f */ if (LT_) goto L_009c567f;
  /* 009c5669 mov dword ptr [esp], 0x9c5600 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x9c5600u); }
  /* 009c5670 cmp edx, 0x112 */ { u32 a_ = edx, b_ = 0x112u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5676 jl 0x9c567f */ if (LT_) goto L_009c567f;
  /* 009c5678 mov dword ptr [esp], 0x9c5617 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x9c5617u); }
L_009c567f:;
  /* 009c567f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c5680 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 009c5682 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c5686 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9c568bu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9c5686u); RETCHK(0x9c568bu, 0x9c5686u); LOADALL;
  /* 009c568b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009c568d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009c568e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c5691 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009c5693 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 009c5695 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c5698u; SAVEALL; call_ind(c, t_); RETCHK(0x9c5698u, 0x9c5695u); LOADALL; }
  /* 009c5698 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c5699:;
  /* 009c5699 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009c569b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c569d call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c56a0u; SAVEALL; call_ind(c, t_); RETCHK(0x9c56a0u, 0x9c569du); LOADALL; }
  /* 009c56a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c578d(CPU *c) {
  NATIVE_HOOK(0x9c578du) REGS; LOADALL;
  goto L_009c578d;
L_005166a0:;
  /* 005166a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005166a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005166a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005166a4 mov edi, eax */ { edi = (u32)(eax); }
  /* 005166a6 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 005166a8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005166aa jne 0x516713 */ if (!ZF_) goto L_00516713;
  /* 005166ac fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 005166af fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005166b2 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005166b8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005166ba test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005166bd je 0x5166c7 */ if (ZF_) goto L_005166c7;
  /* 005166bf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005166c1 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 005166c4 fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005166c7:;
  /* 005166c7 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 005166ca fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005166cc fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005166d2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005166d4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005166d7 je 0x5166e0 */ if (ZF_) goto L_005166e0;
  /* 005166d9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 005166db fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 005166dd fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_005166e0:;
  /* 005166e0 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 005166e2 call 0x61b154 */ esp -= 4; M32(esp) = 0x5166e7u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5166e2u); RETCHK(0x5166e7u, 0x5166e2u); LOADALL;
  /* 005166e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005166e8 call 0x61b154 */ esp -= 4; M32(esp) = 0x5166edu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5166e8u); RETCHK(0x5166edu, 0x5166e8u); LOADALL;
  /* 005166ed mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005166f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005166f1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005166f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005166f5 add ecx, 0x234 */ { u32 a_ = ecx, b_ = 0x234u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005166fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005166fc call 0x5288e0 */ esp -= 4; M32(esp) = 0x516701u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x5166fcu); RETCHK(0x516701u, 0x5166fcu); LOADALL;
  /* 00516701 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516704 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00516706 mov edx, eax */ { edx = (u32)(eax); }
  /* 00516708 call 0x528970 */ esp -= 4; M32(esp) = 0x51670du; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x516708u); RETCHK(0x51670du, 0x516708u); LOADALL;
  /* 0051670d mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 0051670f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00516711 je 0x51677e */ if (ZF_) goto L_0051677e;
L_00516713:;
  /* 00516713 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00516715 call 0x526830 */ esp -= 4; M32(esp) = 0x51671au; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x516715u); RETCHK(0x51671au, 0x516715u); LOADALL;
  /* 0051671a mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0051671d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0051671f call 0x526840 */ esp -= 4; M32(esp) = 0x516724u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x51671fu); RETCHK(0x516724u, 0x51671fu); LOADALL;
  /* 00516724 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 00516727 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0051672a fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00516730 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00516732 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00516735 je 0x51673f */ if (ZF_) goto L_0051673f;
  /* 00516737 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516739 fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0051673c fsub dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_0051673f:;
  /* 0051673f fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00516742 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00516744 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 0051674a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0051674c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0051674f je 0x516758 */ if (ZF_) goto L_00516758;
  /* 00516751 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516753 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 00516755 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
L_00516758:;
  /* 00516758 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0051675a fild dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 0051675d sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00516760 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00516762 fdivr st(2) */ ST(0) = FR(ST(2) / ST(0));
  /* 00516764 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516768 fild dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0051676b fdivr st(1) */ ST(0) = FR(ST(1) / ST(0));
  /* 0051676d fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00516770 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516772 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00516774 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516776 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00516777 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00516779 call 0x500ca0 */ esp -= 4; M32(esp) = 0x51677eu; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x516779u); RETCHK(0x51677eu, 0x516779u); LOADALL;
L_0051677e:;
  /* 0051677e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0051677f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00516780 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c578d:;
  /* 009c578d cmp byte ptr [edi + 0x52], 0 */ { const u32 m_ = (u32)(edi + 0x52u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5791 je 0x9c5819 */ if (ZF_) goto L_009c5819;
  /* 009c5797 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c5798 mov ecx, dword ptr [0x9c1418] */ { const u32 m_ = (u32)(0x9c1418u); ecx = (u32)(M32(m_)); }
  /* 009c579e test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c57a0 je 0x9c580e */ if (ZF_) goto L_009c580e;
  /* 009c57a2 mov ecx, dword ptr [ecx + 0x194] */ { const u32 m_ = (u32)(ecx + 0x194u); ecx = (u32)(M32(m_)); }
  /* 009c57a8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c57aa je 0x9c580e */ if (ZF_) goto L_009c580e;
  /* 009c57ac mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 009c57af test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c57b1 je 0x9c580e */ if (ZF_) goto L_009c580e;
  /* 009c57b3 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 009c57b5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c57b7 je 0x9c580e */ if (ZF_) goto L_009c580e;
  /* 009c57b9 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 009c57bb call 0x526830 */ esp -= 4; M32(esp) = 0x9c57c0u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x9c57bbu); RETCHK(0x9c57c0u, 0x9c57bbu); LOADALL;
  /* 009c57c0 mov eax, 0x9c1408 */ { eax = (u32)(0x9c1408u); }
  /* 009c57c5 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009c57c7 call 0x526840 */ esp -= 4; M32(esp) = 0x9c57ccu; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x9c57c7u); RETCHK(0x9c57ccu, 0x9c57c7u); LOADALL;
  /* 009c57cc sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c57cf fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 009c57d1 fst dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); }
  /* 009c57d4 fadd dword ptr [0x9c1410] */ { const u32 m_ = (u32)(0x9c1410u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009c57da fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c57de fld dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 009c57e1 fadd dword ptr [0x9c140c] */ { const u32 m_ = (u32)(0x9c140cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009c57e7 fst dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); }
  /* 009c57eb fadd dword ptr [0x9c1410] */ { const u32 m_ = (u32)(0x9c1410u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009c57f1 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c57f5 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 009c57f7 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 009c57fc push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 009c5801 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c5803 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c5805 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c5806 call 0x500ca0 */ esp -= 4; M32(esp) = 0x9c580bu; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x9c5806u); RETCHK(0x9c580bu, 0x9c5806u); LOADALL;
  /* 009c580b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_009c580e:;
  /* 009c580e popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c580f fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 009c5811 fadd dword ptr [0x9c1404] */ { const u32 m_ = (u32)(0x9c1404u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009c5817 fstp dword ptr [esi] */ { const u32 m_ = (u32)(esi); MF32(m_) = (float)ST(0); FPOP(); }
L_009c5819:;
  /* 009c5819 cmp byte ptr [edi + 0x53], 0 */ { const u32 m_ = (u32)(edi + 0x53u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c581d jne 0x9de540 */ if (!ZF_) goto L_009de540;
  /* 009c5823 jmp 0x9e0100 */ goto L_009e0100;
L_009de540:;
  /* 009de540 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 009de542 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de544 jne 0x9de54b */ if (!ZF_) goto L_009de54b;
  /* 009de546 jmp 0x5166a0 */ goto L_005166a0;
L_009de54b:;
  /* 009de54b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 009de54c mov ebp, esp */ { ebp = (u32)(esp); }
  /* 009de54e sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009de551 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009de552 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009de553 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009de554 mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 009de557 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 009de559 call 0x526830 */ esp -= 4; M32(esp) = 0x9de55eu; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x9de559u); RETCHK(0x9de55eu, 0x9de559u); LOADALL;
  /* 009de55e lea edx, [edi + 8] */ edx = (u32)((u32)(edi + 0x8u));
  /* 009de561 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_009de563:;
  /* 009de563 movzx ecx, byte ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M8(m_)); }
  /* 009de566 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de568 je 0x9de585 */ if (ZF_) goto L_009de585;
  /* 009de56a inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009de56b cmp ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de571 jb 0x9de580 */ if (CF_) goto L_009de580;
  /* 009de573 cmp ecx, 0xc0 */ { u32 a_ = ecx, b_ = 0xc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de579 jb 0x9de563 */ if (CF_) goto L_009de563;
  /* 009de57b add eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009de57e jmp 0x9de563 */ goto L_009de563;
L_009de580:;
  /* 009de580 add eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009de583 jmp 0x9de563 */ goto L_009de563;
L_009de585:;
  /* 009de585 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009de588 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 009de58b fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 009de58d fistp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009de590 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009de593 fistp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009de596 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 009de599 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009de59c mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 009de59f fidiv dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 009de5a2 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de5a5 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9de5abu; SAVEALL; call_ind(c, t_); RETCHK(0x9de5abu, 0x9de5a5u); LOADALL; }
  /* 009de5ab shr eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 009de5ae mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 009de5b1 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 009de5b4 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
L_009de5b7:;
  /* 009de5b7 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 009de5ba cmp eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de5bd jge 0x9de6c7 */ if (!LT_) goto L_009de6c7;
  /* 009de5c3 lea edx, [eax + 4] */ edx = (u32)((u32)(eax + 0x4u));
  /* 009de5c6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 009de5c8 sub ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 009de5cb cmp ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de5ce jl 0x9de5d3 */ if (LT_) goto L_009de5d3;
  /* 009de5d0 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
L_009de5d3:;
  /* 009de5d3 cmp edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de5d6 jle 0x9de5db */ if ((ZF_|LT_)) goto L_009de5db;
  /* 009de5d8 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
L_009de5db:;
  /* 009de5db mov dword ptr [ebp - 0x34], edx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edx); }
  /* 009de5de mov eax, ecx */ { eax = (u32)(ecx); }
  /* 009de5e0 imul eax, eax, 0x600 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x600u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009de5e6 cdq */ edx = (u32)((s32)eax >> 31);
  /* 009de5e7 idiv dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, M32(m_), &q_, &r_, 0x9de5e7u); eax = q_; edx = r_; }
  /* 009de5ea add eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009de5ed xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 009de5ef mov ecx, 0x600 */ { ecx = (u32)(0x600u); }
  /* 009de5f4 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x9de5f4u); eax = q_; edx = r_; }
  /* 009de5f6 mov eax, edx */ { eax = (u32)(edx); }
  /* 009de5f8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 009de5fa shr ecx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 009de5fd and eax, 0xff */ { u32 a_ = eax, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de602 mov edx, 0xff */ { edx = (u32)(0xffu); }
  /* 009de607 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 009de609 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de60c jb 0x9de625 */ if (CF_) goto L_009de625;
  /* 009de60e je 0x9de62f */ if (ZF_) goto L_009de62f;
  /* 009de610 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de613 jb 0x9de63b */ if (CF_) goto L_009de63b;
  /* 009de615 je 0x9de642 */ if (ZF_) goto L_009de642;
  /* 009de617 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de61a je 0x9de64e */ if (ZF_) goto L_009de64e;
  /* 009de61c mov eax, 0xffff0000 */ { eax = (u32)(0xffff0000u); }
  /* 009de621 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de623 jmp 0x9de656 */ goto L_009de656;
L_009de625:;
  /* 009de625 shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 009de628 or eax, 0xffff0000 */ { u32 a_ = eax, b_ = 0xffff0000u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de62d jmp 0x9de656 */ goto L_009de656;
L_009de62f:;
  /* 009de62f shl edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 009de632 mov eax, edx */ { eax = (u32)(edx); }
  /* 009de634 or eax, 0xff00ff00 */ { u32 a_ = eax, b_ = 0xff00ff00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de639 jmp 0x9de656 */ goto L_009de656;
L_009de63b:;
  /* 009de63b or eax, 0xff00ff00 */ { u32 a_ = eax, b_ = 0xff00ff00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de640 jmp 0x9de656 */ goto L_009de656;
L_009de642:;
  /* 009de642 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 009de645 mov eax, edx */ { eax = (u32)(edx); }
  /* 009de647 or eax, 0xff0000ff */ { u32 a_ = eax, b_ = 0xff0000ffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de64c jmp 0x9de656 */ goto L_009de656;
L_009de64e:;
  /* 009de64e shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 009de651 or eax, 0xff0000ff */ { u32 a_ = eax, b_ = 0xff0000ffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_009de656:;
  /* 009de656 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 009de659 fild dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)(s32)M32(m_)); }
  /* 009de65c fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de65f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009de662 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 009de665 fild dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)(s32)M32(m_)); }
  /* 009de668 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009de66e fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de671 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 009de674 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 009de677 lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 009de67a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009de67c call 0x526840 */ esp -= 4; M32(esp) = 0x9de681u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x9de67cu); RETCHK(0x9de681u, 0x9de67cu); LOADALL;
  /* 009de681 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 009de684 push dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009de687 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 009de68a sub eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009de68d mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 009de690 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 009de693 fidiv dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 009de696 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009de699 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de69c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009de69e mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 009de6a1 sub eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009de6a4 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 009de6a7 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 009de6aa fidiv dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 009de6ad sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009de6b0 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de6b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009de6b4 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 009de6b7 call 0x500ca0 */ esp -= 4; M32(esp) = 0x9de6bcu; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x9de6b7u); RETCHK(0x9de6bcu, 0x9de6b7u); LOADALL;
  /* 009de6bc mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 009de6bf mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 009de6c2 jmp 0x9de5b7 */ goto L_009de5b7;
L_009de6c7:;
  /* 009de6c7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009de6c8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009de6c9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009de6ca mov esp, ebp */ { esp = (u32)(ebp); }
  /* 009de6cc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009de6cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0100:;
  /* 009e0100 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 009e0101 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 009e0103 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009e0104 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009e0105 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009e0106 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0109 mov edi, eax */ { edi = (u32)(eax); }
  /* 009e010b fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009e010e fsub dword ptr [0x9e027c] */ { const u32 m_ = (u32)(0x9e027cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009e0114 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0117 cmp dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e011a jne 0x9e0154 */ if (!ZF_) goto L_009e0154;
  /* 009e011c fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 009e011f fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009e0122 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0125 fistp dword ptr [esp] */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009e0128 push 0x400 */ { u32 v_ = 0x400u; esp -= 4; M32(esp) = v_; }
  /* 009e012d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e0130 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 009e0133 add ecx, 0x234 */ { u32 a_ = ecx, b_ = 0x234u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 009e0139 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e013a call 0x5288e0 */ esp -= 4; M32(esp) = 0x9e013fu; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x9e013au); RETCHK(0x9e013fu, 0x9e013au); LOADALL;
  /* 009e013f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0142 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009e0144 mov edx, eax */ { edx = (u32)(eax); }
  /* 009e0146 call 0x528970 */ esp -= 4; M32(esp) = 0x9e014bu; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x9e0146u); RETCHK(0x9e014bu, 0x9e0146u); LOADALL;
  /* 009e014b cmp dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e014e je 0x9e020f */ if (ZF_) goto L_009e020f;
L_009e0154:;
  /* 009e0154 fld dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009e0157 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009e0159 fistp dword ptr [esp] */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009e015c mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e015f sub eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009e0162 jg 0x9e0172 */ if (!(ZF_|LT_)) goto L_009e0172;
  /* 009e0164 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0167 mov eax, edi */ { eax = (u32)(edi); }
  /* 009e0169 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009e016a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009e016b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009e016c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009e016d jmp 0x5166a0 */ goto L_005166a0;
L_009e0172:;
  /* 009e0172 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e0176 call dword ptr [0x62e5e8] */ { const u32 m_ = (u32)(0x62e5e8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e017cu; SAVEALL; call_ind(c, t_); RETCHK(0x9e017cu, 0x9e0176u); LOADALL; }
  /* 009e017c mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 009e0180 imul ecx, ecx, 0x21 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x21u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009e0183 add ecx, 0xbb8 */ { u32 a_ = ecx, b_ = 0xbb8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 009e0189 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 009e018b div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x9e018bu); eax = q_; edx = r_; }
  /* 009e018d sub edx, 0x5dc */ { u32 a_ = edx, b_ = 0x5dcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 009e0193 jg 0x9e0197 */ if (!(ZF_|LT_)) goto L_009e0197;
  /* 009e0195 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_009e0197:;
  /* 009e0197 mov eax, edx */ { eax = (u32)(edx); }
  /* 009e0199 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 009e019b mov ecx, 0x21 */ { ecx = (u32)(0x21u); }
  /* 009e01a0 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x9e01a0u); eax = q_; edx = r_; }
  /* 009e01a2 cmp eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e01a6 jbe 0x9e01ac */ if ((CF_|ZF_)) goto L_009e01ac;
  /* 009e01a8 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
L_009e01ac:;
  /* 009e01ac mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e01b0 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 009e01b2 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 009e01b4 call 0x526830 */ esp -= 4; M32(esp) = 0x9e01b9u; SAVEALL; F_00526830(c); ABI_CHECK(0x526830u, 0x9e01b4u); RETCHK(0x9e01b9u, 0x9e01b4u); LOADALL;
  /* 009e01b9 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 009e01bc mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009e01be call 0x526840 */ esp -= 4; M32(esp) = 0x9e01c3u; SAVEALL; F_00526840(c); ABI_CHECK(0x526840u, 0x9e01beu); RETCHK(0x9e01c3u, 0x9e01beu); LOADALL;
  /* 009e01c3 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 009e01c5 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e01c8 fild dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 009e01cc fidiv dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 009e01cf fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e01d2 mov dword ptr [esp + 4], 0 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 009e01da mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 009e01de add eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009e01e2 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 009e01e6 fild dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 009e01ea fidiv dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 009e01ed fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e01f1 fld dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); FPUSH((double)MF32(m_)); }
  /* 009e01f4 fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009e01f7 fidiv dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 009e01fa fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e01fe fild dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); FPUSH((double)(s32)M32(m_)); }
  /* 009e0202 fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0204 fstp dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0207 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009e0208 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009e020a call 0x500ca0 */ esp -= 4; M32(esp) = 0x9e020fu; SAVEALL; F_00500ca0(c); ABI_CHECK(0x500ca0u, 0x9e020au); RETCHK(0x9e020fu, 0x9e020au); LOADALL;
L_009e020f:;
  /* 009e020f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0212 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009e0213 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009e0214 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009e0215 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009e0216 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd300(CPU *c) {
  NATIVE_HOOK(0x9dd300u) REGS; LOADALL;
L_009dd300:;
  /* 009dd300 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009dd301 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009dd302 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009dd303 call 0x9dd30c */ esp -= 4; M32(esp) = 0x9dd308u; SAVEALL; F_009dd30c(c); ABI_CHECK(0x9dd30cu, 0x9dd303u); RETCHK(0x9dd308u, 0x9dd303u); LOADALL;
  /* 009dd308 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009dd309 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009dd30a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009dd30b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd30c(CPU *c) {
  NATIVE_HOOK(0x9dd30cu) REGS; LOADALL;
L_009dd30c:;
  /* 009dd30c cld */ c->df = 0;
  /* 009dd30d mov eax, dword ptr [0x9dd988] */ { const u32 m_ = (u32)(0x9dd988u); eax = (u32)(M32(m_)); }
  /* 009dd312 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd314 je 0x9dd351 */ if (ZF_) goto L_009dd351;
  /* 009dd316 mov esi, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); esi = (u32)(M32(m_)); }
  /* 009dd319 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd31b je 0x9dd351 */ if (ZF_) goto L_009dd351;
  /* 009dd31d mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
L_009dd31f:;
  /* 009dd31f cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd321 je 0x9dd351 */ if (ZF_) goto L_009dd351;
  /* 009dd323 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 009dd326 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd328 je 0x9dd34d */ if (ZF_) goto L_009dd34d;
  /* 009dd32a lea edx, [ebx + 0x20] */ edx = (u32)((u32)(ebx + 0x20u));
  /* 009dd32d cmp dword ptr [edx + 0x18], 0x10 */ { const u32 m_ = (u32)(edx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd331 jb 0x9dd338 */ if (CF_) goto L_009dd338;
  /* 009dd333 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 009dd336 jmp 0x9dd33b */ goto L_009dd33b;
L_009dd338:;
  /* 009dd338 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
L_009dd33b:;
  /* 009dd33b call 0x9dd352 */ esp -= 4; M32(esp) = 0x9dd340u; SAVEALL; F_009dd352(c); ABI_CHECK(0x9dd352u, 0x9dd33bu); RETCHK(0x9dd340u, 0x9dd33bu); LOADALL;
  /* 009dd340 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd342 je 0x9dd34d */ if (ZF_) goto L_009dd34d;
  /* 009dd344 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009dd346 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009dd348 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009dd34a call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dd34du; SAVEALL; call_ind(c, t_); RETCHK(0x9dd34du, 0x9dd34au); LOADALL; }
L_009dd34d:;
  /* 009dd34d mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 009dd34f jmp 0x9dd31f */ goto L_009dd31f;
L_009dd351:;
  /* 009dd351 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd352(CPU *c) {
  NATIVE_HOOK(0x9dd352u) REGS; LOADALL;
L_009dd352:;
  /* 009dd352 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009dd353 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009dd354 mov esi, 0x9dd3a3 */ { esi = (u32)(0x9dd3a3u); }
L_009dd359:;
  /* 009dd359 cmp byte ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009dd35c je 0x9dd384 */ if (ZF_) goto L_009dd384;
  /* 009dd35e mov edi, edx */ { edi = (u32)(edx); }
  /* 009dd360 call 0x9dd389 */ esp -= 4; M32(esp) = 0x9dd365u; SAVEALL; F_009dd389(c); ABI_CHECK(0x9dd389u, 0x9dd360u); RETCHK(0x9dd365u, 0x9dd360u); LOADALL;
  /* 009dd365 je 0x9dd37d */ if (ZF_) goto L_009dd37d;
  /* 009dd367 cmp byte ptr [edx], 0 */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009dd36a je 0x9dd376 */ if (ZF_) goto L_009dd376;
  /* 009dd36c lea edi, [edx + 1] */ edi = (u32)((u32)(edx + 0x1u));
  /* 009dd36f call 0x9dd389 */ esp -= 4; M32(esp) = 0x9dd374u; SAVEALL; F_009dd389(c); ABI_CHECK(0x9dd389u, 0x9dd36fu); RETCHK(0x9dd374u, 0x9dd36fu); LOADALL;
  /* 009dd374 je 0x9dd37d */ if (ZF_) goto L_009dd37d;
L_009dd376:;
  /* 009dd376 lodsb al, byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; eax = (eax & 0xffffff00u) | ((u32)(M8(esi)) & 0xffu); esi += st_; }
  /* 009dd377 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009dd379 jne 0x9dd376 */ if (!ZF_) goto L_009dd376;
  /* 009dd37b jmp 0x9dd359 */ goto L_009dd359;
L_009dd37d:;
  /* 009dd37d mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 009dd382 jmp 0x9dd386 */ goto L_009dd386;
L_009dd384:;
  /* 009dd384 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_009dd386:;
  /* 009dd386 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009dd387 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009dd388 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd389(CPU *c) {
  NATIVE_HOOK(0x9dd389u) REGS; LOADALL;
L_009dd389:;
  /* 009dd389 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009dd38a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_009dd38b:;
  /* 009dd38b mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009dd38d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009dd38f je 0x9dd399 */ if (ZF_) goto L_009dd399;
  /* 009dd391 cmp al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009dd393 jne 0x9dd39e */ if (!ZF_) goto L_009dd39e;
  /* 009dd395 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009dd396 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009dd397 jmp 0x9dd38b */ goto L_009dd38b;
L_009dd399:;
  /* 009dd399 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009dd39a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009dd39b cmp eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd39d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009dd39e:;
  /* 009dd39e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009dd39f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009dd3a0 test esp, esp */ { u32 a_ = esp, b_ = esp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd3a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd405(CPU *c) {
  NATIVE_HOOK(0x9dd405u) REGS; LOADALL;
L_009dd405:;
  /* 009dd405 jmp 0x9dd4b6 */ goto L_009dd4b6;
L_009dd4b6:;
  /* 009dd4b6 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009dd4b7 call 0x9dd43d */ esp -= 4; M32(esp) = 0x9dd4bcu; SAVEALL; F_009dd43d(c); ABI_CHECK(0x9dd43du, 0x9dd4b7u); RETCHK(0x9dd4bcu, 0x9dd4b7u); LOADALL;
  /* 009dd4bc mov eax, dword ptr [0x9ddfe8] */ { const u32 m_ = (u32)(0x9ddfe8u); eax = (u32)(M32(m_)); }
  /* 009dd4c1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd4c3 je 0x9dd4f7 */ if (ZF_) goto L_009dd4f7;
  /* 009dd4c5 cmp byte ptr [eax + 0xbe94], 0 */ { const u32 m_ = (u32)(eax + 0xbe94u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009dd4cc je 0x9dd4f7 */ if (ZF_) goto L_009dd4f7;
  /* 009dd4ce cmp dword ptr [eax + 0xbe98], 0 */ { const u32 m_ = (u32)(eax + 0xbe98u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd4d5 jg 0x9dd4f7 */ if (!(ZF_|LT_)) goto L_009dd4f7;
  /* 009dd4d7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 009dd4d9 mov esi, 0x9ddee0 */ { esi = (u32)(0x9ddee0u); }
  /* 009dd4de mov ebp, 0xc */ { ebp = (u32)(0xcu); }
L_009dd4e3:;
  /* 009dd4e3 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 009dd4e5 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 009dd4e7 call 0x9dd432 */ esp -= 4; M32(esp) = 0x9dd4ecu; SAVEALL; F_009dd432(c); ABI_CHECK(0x9dd432u, 0x9dd4e7u); RETCHK(0x9dd4ecu, 0x9dd4e7u); LOADALL;
  /* 009dd4ec add esi, 0x14 */ { u32 a_ = esi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009dd4ef dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 009dd4f0 jne 0x9dd4e3 */ if (!ZF_) goto L_009dd4e3;
  /* 009dd4f2 jmp 0x9dd59e */ goto L_009dd59e;
L_009dd4f7:;
  /* 009dd4f7 mov eax, dword ptr [0x9ddd40] */ { const u32 m_ = (u32)(0x9ddd40u); eax = (u32)(M32(m_)); }
  /* 009dd4fc cmp eax, dword ptr [0x9ddd44] */ { const u32 m_ = (u32)(0x9ddd44u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd502 je 0x9dd59e */ if (ZF_) goto L_009dd59e;
  /* 009dd508 mov dword ptr [0x9ddd44], eax */ { const u32 m_ = (u32)(0x9ddd44u); M32(m_) = (u32)(eax); }
  /* 009dd50d mov ebx, dword ptr [0x9dd94c] */ { const u32 m_ = (u32)(0x9dd94cu); ebx = (u32)(M32(m_)); }
  /* 009dd513 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd515 je 0x9dd521 */ if (ZF_) goto L_009dd521;
  /* 009dd517 push 0x9ddd60 */ { u32 v_ = 0x9ddd60u; esp -= 4; M32(esp) = v_; }
  /* 009dd51c call 0x50dc70 */ esp -= 4; M32(esp) = 0x9dd521u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9dd51cu); RETCHK(0x9dd521u, 0x9dd51cu); LOADALL;
L_009dd521:;
  /* 009dd521 mov ebx, dword ptr [0x9dd964] */ { const u32 m_ = (u32)(0x9dd964u); ebx = (u32)(M32(m_)); }
  /* 009dd527 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd529 je 0x9dd535 */ if (ZF_) goto L_009dd535;
  /* 009dd52b push 0x9dde20 */ { u32 v_ = 0x9dde20u; esp -= 4; M32(esp) = v_; }
  /* 009dd530 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9dd535u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9dd530u); RETCHK(0x9dd535u, 0x9dd530u); LOADALL;
L_009dd535:;
  /* 009dd535 mov ebx, dword ptr [0x9dd968] */ { const u32 m_ = (u32)(0x9dd968u); ebx = (u32)(M32(m_)); }
  /* 009dd53b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd53d je 0x9dd549 */ if (ZF_) goto L_009dd549;
  /* 009dd53f push 0x9dde60 */ { u32 v_ = 0x9dde60u; esp -= 4; M32(esp) = v_; }
  /* 009dd544 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9dd549u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9dd544u); RETCHK(0x9dd549u, 0x9dd544u); LOADALL;
L_009dd549:;
  /* 009dd549 mov ebx, dword ptr [0x9dd96c] */ { const u32 m_ = (u32)(0x9dd96cu); ebx = (u32)(M32(m_)); }
  /* 009dd54f test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd551 je 0x9dd55d */ if (ZF_) goto L_009dd55d;
  /* 009dd553 push 0x9ddea0 */ { u32 v_ = 0x9ddea0u; esp -= 4; M32(esp) = v_; }
  /* 009dd558 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9dd55du; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9dd558u); RETCHK(0x9dd55du, 0x9dd558u); LOADALL;
L_009dd55d:;
  /* 009dd55d mov esi, dword ptr [0x9dd950] */ { const u32 m_ = (u32)(0x9dd950u); esi = (u32)(M32(m_)); }
  /* 009dd563 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd565 je 0x9dd58a */ if (ZF_) goto L_009dd58a;
  /* 009dd567 push 0x9ddda0 */ { u32 v_ = 0x9ddda0u; esp -= 4; M32(esp) = v_; }
  /* 009dd56c mov ecx, 0x9dd920 */ { ecx = (u32)(0x9dd920u); }
  /* 009dd571 call 0x403060 */ esp -= 4; M32(esp) = 0x9dd576u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9dd571u); RETCHK(0x9dd576u, 0x9dd571u); LOADALL;
  /* 009dd576 mov eax, 0x9dd920 */ { eax = (u32)(0x9dd920u); }
  /* 009dd57b call 0x5224b0 */ esp -= 4; M32(esp) = 0x9dd580u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x9dd57bu); RETCHK(0x9dd580u, 0x9dd57bu); LOADALL;
  /* 009dd580 mov ecx, 0x9dd920 */ { ecx = (u32)(0x9dd920u); }
  /* 009dd585 call 0x43ee60 */ esp -= 4; M32(esp) = 0x9dd58au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9dd585u); RETCHK(0x9dd58au, 0x9dd585u); LOADALL;
L_009dd58a:;
  /* 009dd58a mov eax, dword ptr [0x9dd958] */ { const u32 m_ = (u32)(0x9dd958u); eax = (u32)(M32(m_)); }
  /* 009dd58f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd591 je 0x9dd59e */ if (ZF_) goto L_009dd59e;
  /* 009dd593 mov ecx, dword ptr [0x9ddd48] */ { const u32 m_ = (u32)(0x9ddd48u); ecx = (u32)(M32(m_)); }
  /* 009dd599 call 0x5366d0 */ esp -= 4; M32(esp) = 0x9dd59eu; SAVEALL; F_005366d0(c); ABI_CHECK(0x5366d0u, 0x9dd599u); RETCHK(0x9dd59eu, 0x9dd599u); LOADALL;
L_009dd59e:;
  /* 009dd59e popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009dd59f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd40a(CPU *c) {
  NATIVE_HOOK(0x9dd40au) REGS; LOADALL;
L_009dd40a:;
  /* 009dd40a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009dd40b mov ecx, 0x9dd920 */ { ecx = (u32)(0x9dd920u); }
  /* 009dd410 call 0x403060 */ esp -= 4; M32(esp) = 0x9dd415u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9dd410u); RETCHK(0x9dd415u, 0x9dd410u); LOADALL;
  /* 009dd415 push 0x9dd920 */ { u32 v_ = 0x9dd920u; esp -= 4; M32(esp) = v_; }
  /* 009dd41a mov ecx, dword ptr [0x9ddd5c] */ { const u32 m_ = (u32)(0x9ddd5cu); ecx = (u32)(M32(m_)); }
  /* 009dd420 call 0x5075d0 */ esp -= 4; M32(esp) = 0x9dd425u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9dd420u); RETCHK(0x9dd425u, 0x9dd420u); LOADALL;
  /* 009dd425 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009dd426 mov ecx, 0x9dd920 */ { ecx = (u32)(0x9dd920u); }
  /* 009dd42b call 0x43ee60 */ esp -= 4; M32(esp) = 0x9dd430u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9dd42bu); RETCHK(0x9dd430u, 0x9dd42bu); LOADALL;
  /* 009dd430 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009dd431 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd432(CPU *c) {
  NATIVE_HOOK(0x9dd432u) REGS; LOADALL;
L_009dd432:;
  /* 009dd432 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd434 je 0x9dd43c */ if (ZF_) goto L_009dd43c;
  /* 009dd436 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009dd438 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009dd439 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dd43cu; SAVEALL; call_ind(c, t_); RETCHK(0x9dd43cu, 0x9dd439u); LOADALL; }
L_009dd43c:;
  /* 009dd43c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dd43d(CPU *c) {
  NATIVE_HOOK(0x9dd43du) REGS; LOADALL;
L_009dd43d:;
  /* 009dd43d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009dd43e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009dd43f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 009dd440 xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
L_009dd442:;
  /* 009dd442 mov ecx, dword ptr [ebp*4 + 0x9dd970] */ { const u32 m_ = (u32)(ebp * 4u + 0x9dd970u); ecx = (u32)(M32(m_)); }
  /* 009dd449 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dd44b jne 0x9dd462 */ if (!ZF_) goto L_009dd462;
  /* 009dd44d mov esi, dword ptr [ebp*4 + 0x9ddfd0] */ { const u32 m_ = (u32)(ebp * 4u + 0x9ddfd0u); esi = (u32)(M32(m_)); }
  /* 009dd454 call 0x9dd40a */ esp -= 4; M32(esp) = 0x9dd459u; SAVEALL; F_009dd40a(c); ABI_CHECK(0x9dd40au, 0x9dd454u); RETCHK(0x9dd459u, 0x9dd454u); LOADALL;
  /* 009dd459 mov dword ptr [ebp*4 + 0x9dd970], eax */ { const u32 m_ = (u32)(ebp * 4u + 0x9dd970u); M32(m_) = (u32)(eax); }
  /* 009dd460 mov ecx, eax */ { ecx = (u32)(eax); }
L_009dd462:;
  /* 009dd462 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 009dd464 call 0x9dd432 */ esp -= 4; M32(esp) = 0x9dd469u; SAVEALL; F_009dd432(c); ABI_CHECK(0x9dd432u, 0x9dd464u); RETCHK(0x9dd469u, 0x9dd464u); LOADALL;
  /* 009dd469 inc ebp */ { u32 a_ = ebp; u32 r_ = (a_ + 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009dd46a cmp ebp, 6 */ { u32 a_ = ebp, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dd46d jb 0x9dd442 */ if (CF_) goto L_009dd442;
  /* 009dd46f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009dd470 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009dd471 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009dd472 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009ddc90(CPU *c) {
  NATIVE_HOOK(0x9ddc90u) REGS; LOADALL;
L_009ddc90:;
  /* 009ddc90 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddc93 jae 0x9ddc9d */ if (!CF_) goto L_009ddc9d;
  /* 009ddc95 mov eax, dword ptr [eax*4 + 0x6844d0] */ { const u32 m_ = (u32)(eax * 4u + 0x6844d0u); eax = (u32)(M32(m_)); }
  /* 009ddc9c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc9d:;
  /* 009ddc9d cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddca0 jae 0x9ddcaa */ if (!CF_) goto L_009ddcaa;
  /* 009ddca2 mov eax, dword ptr [eax*4 + 0x684500] */ { const u32 m_ = (u32)(eax * 4u + 0x684500u); eax = (u32)(M32(m_)); }
  /* 009ddca9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddcaa:;
  /* 009ddcaa mov eax, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); eax = (u32)(M32(m_)); }
  /* 009ddcb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009ddcb2(CPU *c) {
  NATIVE_HOOK(0x9ddcb2u) REGS; LOADALL;
L_009ddcb2:;
  /* 009ddcb2 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddcb5 jae 0x9ddcbf */ if (!CF_) goto L_009ddcbf;
  /* 009ddcb7 mov eax, dword ptr [eax*4 + 0x684da8] */ { const u32 m_ = (u32)(eax * 4u + 0x684da8u); eax = (u32)(M32(m_)); }
  /* 009ddcbe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddcbf:;
  /* 009ddcbf cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddcc2 jae 0x9ddccc */ if (!CF_) goto L_009ddccc;
  /* 009ddcc4 mov eax, dword ptr [eax*4 + 0x684dd8] */ { const u32 m_ = (u32)(eax * 4u + 0x684dd8u); eax = (u32)(M32(m_)); }
  /* 009ddccb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddccc:;
  /* 009ddccc mov eax, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); eax = (u32)(M32(m_)); }
  /* 009ddcd3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009ddcd4(CPU *c) {
  NATIVE_HOOK(0x9ddcd4u) REGS; LOADALL;
L_009ddcd4:;
  /* 009ddcd4 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddcd7 jae 0x9ddce1 */ if (!CF_) goto L_009ddce1;
  /* 009ddcd9 mov ecx, dword ptr [eax*4 + 0x6847b8] */ { const u32 m_ = (u32)(eax * 4u + 0x6847b8u); ecx = (u32)(M32(m_)); }
  /* 009ddce0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddce1:;
  /* 009ddce1 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddce4 jae 0x9ddcee */ if (!CF_) goto L_009ddcee;
  /* 009ddce6 mov ecx, dword ptr [eax*4 + 0x6847e8] */ { const u32 m_ = (u32)(eax * 4u + 0x6847e8u); ecx = (u32)(M32(m_)); }
  /* 009ddced ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddcee:;
  /* 009ddcee mov ecx, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); ecx = (u32)(M32(m_)); }
  /* 009ddcf5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009ddcf6(CPU *c) {
  NATIVE_HOOK(0x9ddcf6u) REGS; LOADALL;
L_009ddcf6:;
  /* 009ddcf6 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddcf9 jae 0x9ddd03 */ if (!CF_) goto L_009ddd03;
  /* 009ddcfb mov edx, dword ptr [eax*4 + 0x683ccc] */ { const u32 m_ = (u32)(eax * 4u + 0x683cccu); edx = (u32)(M32(m_)); }
  /* 009ddd02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddd03:;
  /* 009ddd03 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddd06 jae 0x9ddd10 */ if (!CF_) goto L_009ddd10;
  /* 009ddd08 mov edx, dword ptr [eax*4 + 0x683cf8] */ { const u32 m_ = (u32)(eax * 4u + 0x683cf8u); edx = (u32)(M32(m_)); }
  /* 009ddd0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddd10:;
  /* 009ddd10 mov edx, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); edx = (u32)(M32(m_)); }
  /* 009ddd17 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009de000(CPU *c) {
  NATIVE_HOOK(0x9de000u) REGS; LOADALL;
L_009de000:;
  /* 009de000 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009de001 mov eax, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); eax = (u32)(M32(m_)); }
  /* 009de004 test eax, 0x2000000 */ { u32 a_ = eax, b_ = 0x2000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de009 je 0x9de02f */ if (ZF_) goto L_009de02f;
  /* 009de00b cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009de012 je 0x9de149 */ if (ZF_) goto L_009de149;
  /* 009de018 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 009de01b cmp eax, 0x3e8 */ { u32 a_ = eax, b_ = 0x3e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de020 jae 0x9de149 */ if (!CF_) goto L_009de149;
  /* 009de026 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 009de029 mov eax, dword ptr [eax + 0x9d0000] */ { const u32 m_ = (u32)(eax + 0x9d0000u); eax = (u32)(M32(m_)); }
L_009de02f:;
  /* 009de02f cmp eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de034 jae 0x9de149 */ if (!CF_) goto L_009de149;
  /* 009de03a mov ecx, dword ptr [0x9df000] */ { const u32 m_ = (u32)(0x9df000u); ecx = (u32)(M32(m_)); }
L_009de040:;
  /* 009de040 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de042 je 0x9de149 */ if (ZF_) goto L_009de149;
  /* 009de048 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 009de049 cmp ax, word ptr [ecx*2 + 0x9df004] */ { const u32 m_ = (u32)(ecx * 2u + 0x9df004u); u32 a_ = (eax & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de051 jne 0x9de040 */ if (!ZF_) goto L_009de040;
  /* 009de053 movzx edx, byte ptr [ecx + 0x9df89c] */ { const u32 m_ = (u32)(ecx + 0x9df89cu); edx = (u32)(M8(m_)); }
  /* 009de05a cmp edx, 5 */ { u32 a_ = edx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de05d ja 0x9de149 */ if (!(CF_|ZF_)) goto L_009de149;
  /* 009de063 lea esi, [edx*8 + 0x9de800] */ esi = (u32)((u32)(edx * 8u + 0x9de800u));
  /* 009de06a cmp dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de06e jne 0x9de08a */ if (!ZF_) goto L_009de08a;
  /* 009de070 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009de072 push dword ptr [edx*4 + 0x9de860] */ { const u32 m_ = (u32)(edx * 4u + 0x9de860u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009de079 mov eax, esi */ { eax = (u32)(esi); }
  /* 009de07b call 0x529310 */ esp -= 4; M32(esp) = 0x9de080u; SAVEALL; F_00529310(c); ABI_CHECK(0x529310u, 0x9de07bu); RETCHK(0x9de080u, 0x9de07bu); LOADALL;
  /* 009de080 cmp dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de084 je 0x9de149 */ if (ZF_) goto L_009de149;
L_009de08a:;
  /* 009de08a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009de08d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 009de08f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de091 je 0x9de149 */ if (ZF_) goto L_009de149;
  /* 009de097 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009de09a mov dword ptr [0x9de840], ecx */ { const u32 m_ = (u32)(0x9de840u); M32(m_) = (u32)(ecx); }
  /* 009de0a0 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 009de0a3 shr ecx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 009de0a6 mov dword ptr [0x9de844], ecx */ { const u32 m_ = (u32)(0x9de844u); M32(m_) = (u32)(ecx); }
  /* 009de0ac fld dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)MF32(m_)); }
  /* 009de0af fsub dword ptr [0x9de858] */ { const u32 m_ = (u32)(0x9de858u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009de0b5 fst dword ptr [0x9de838] */ { const u32 m_ = (u32)(0x9de838u); MF32(m_) = (float)ST(0); }
  /* 009de0bb fisub dword ptr [0x9de840] */ { const u32 m_ = (u32)(0x9de840u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 009de0c1 fstp dword ptr [0x9de830] */ { const u32 m_ = (u32)(0x9de830u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de0c7 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 009de0ca fsub dword ptr [0x9de858] */ { const u32 m_ = (u32)(0x9de858u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009de0d0 fst dword ptr [0x9de83c] */ { const u32 m_ = (u32)(0x9de83cu); MF32(m_) = (float)ST(0); }
  /* 009de0d6 fisub dword ptr [0x9de844] */ { const u32 m_ = (u32)(0x9de844u); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 009de0dc fstp dword ptr [0x9de834] */ { const u32 m_ = (u32)(0x9de834u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de0e2 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9de0e8u; SAVEALL; call_ind(c, t_); RETCHK(0x9de0e8u, 0x9de0e2u); LOADALL; }
  /* 009de0e8 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 009de0ea mov ecx, 0x64 */ { ecx = (u32)(0x64u); }
  /* 009de0ef div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x9de0efu); eax = q_; edx = r_; }
  /* 009de0f1 and eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de0f4 mov dword ptr [0x9de840], eax */ { const u32 m_ = (u32)(0x9de840u); M32(m_) = (u32)(eax); }
  /* 009de0f9 fild dword ptr [0x9de840] */ { const u32 m_ = (u32)(0x9de840u); FPUSH((double)(s32)M32(m_)); }
  /* 009de0ff fmul dword ptr [0x9de850] */ { const u32 m_ = (u32)(0x9de850u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 009de105 fst dword ptr [0x9de848] */ { const u32 m_ = (u32)(0x9de848u); MF32(m_) = (float)ST(0); }
  /* 009de10b fadd dword ptr [0x9de850] */ { const u32 m_ = (u32)(0x9de850u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009de111 fstp dword ptr [0x9de84c] */ { const u32 m_ = (u32)(0x9de84cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009de117 mov eax, esi */ { eax = (u32)(esi); }
  /* 009de119 lea ecx, [ebx + 0x274] */ ecx = (u32)((u32)(ebx + 0x274u));
  /* 009de11f call 0x5267f0 */ esp -= 4; M32(esp) = 0x9de124u; SAVEALL; F_005267f0(c); ABI_CHECK(0x5267f0u, 0x9de11fu); RETCHK(0x9de124u, 0x9de11fu); LOADALL;
  /* 009de124 push dword ptr [0x9de84c] */ { const u32 m_ = (u32)(0x9de84cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009de12a push dword ptr [0x9de854] */ { const u32 m_ = (u32)(0x9de854u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009de130 push dword ptr [0x9de848] */ { const u32 m_ = (u32)(0x9de848u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009de136 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009de138 lea eax, [ebx + 0x274] */ eax = (u32)((u32)(ebx + 0x274u));
  /* 009de13e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009de13f mov ecx, 0x9de830 */ { ecx = (u32)(0x9de830u); }
  /* 009de144 call 0x5050e0 */ esp -= 4; M32(esp) = 0x9de149u; SAVEALL; F_005050e0(c); ABI_CHECK(0x5050e0u, 0x9de144u); RETCHK(0x9de149u, 0x9de144u); LOADALL;
L_009de149:;
  /* 009de149 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009de14a mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 009de14d test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009de150 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009de180(CPU *c) {
  NATIVE_HOOK(0x9de180u) REGS; LOADALL;
  goto L_009de180;
L_009c5040:;
  /* 009c5040 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c5041 mov esi, dword ptr [ebp - 0x2ac] */ { const u32 m_ = (u32)(ebp + 0xfffffd54u); esi = (u32)(M32(m_)); }
  /* 009c5047 cmp dword ptr [esi], 0x4000000d */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x4000000du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c504d jne 0x9c5150 */ if (!ZF_) goto L_009c5150;
  /* 009c5053 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009c5056 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5059 ja 0x9c5150 */ if (!(CF_|ZF_)) goto L_009c5150;
  /* 009c505f mov ebx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 009c5062 cmp ebx, 0x3e8 */ { u32 a_ = ebx, b_ = 0x3e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5068 jae 0x9c5150 */ if (!CF_) goto L_009c5150;
  /* 009c506e mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 009c5071 mov edx, 0x3e8 */ { edx = (u32)(0x3e8u); }
  /* 009c5076 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 009c5078 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c507a jbe 0x9c507e */ if ((CF_|ZF_)) goto L_009c507e;
  /* 009c507c mov ecx, edx */ { ecx = (u32)(edx); }
L_009c507e:;
  /* 009c507e mov dword ptr [0x9c7010], ecx */ { const u32 m_ = (u32)(0x9c7010u); M32(m_) = (u32)(ecx); }
  /* 009c5084 mov dword ptr [0x9c7014], eax */ { const u32 m_ = (u32)(0x9c7014u); M32(m_) = (u32)(eax); }
  /* 009c5089 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c508b jne 0x9c50c3 */ if (!ZF_) goto L_009c50c3;
  /* 009c508d mov edi, dword ptr [eax*4 + 0x9c5000] */ { const u32 m_ = (u32)(eax * 4u + 0x9c5000u); edi = (u32)(M32(m_)); }
  /* 009c5094 mov ecx, dword ptr [eax*4 + 0x9c5010] */ { const u32 m_ = (u32)(eax * 4u + 0x9c5010u); ecx = (u32)(M32(m_)); }
  /* 009c509b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c509d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 009c509f mov eax, dword ptr [0x9c7014] */ { const u32 m_ = (u32)(0x9c7014u); eax = (u32)(M32(m_)); }
  /* 009c50a4 cmp eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c50a7 je 0x9c50b5 */ if (ZF_) goto L_009c50b5;
  /* 009c50a9 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c50ac jne 0x9c50c3 */ if (!ZF_) goto L_009c50c3;
  /* 009c50ae mov edi, 0x9da000 */ { edi = (u32)(0x9da000u); }
  /* 009c50b3 jmp 0x9c50ba */ goto L_009c50ba;
L_009c50b5:;
  /* 009c50b5 mov edi, 0x9d7000 */ { edi = (u32)(0x9d7000u); }
L_009c50ba:;
  /* 009c50ba mov ecx, 0xc00 */ { ecx = (u32)(0xc00u); }
  /* 009c50bf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c50c1 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
L_009c50c3:;
  /* 009c50c3 mov eax, dword ptr [0x9c7014] */ { const u32 m_ = (u32)(0x9c7014u); eax = (u32)(M32(m_)); }
  /* 009c50c8 lea esi, [esi + 0x14] */ esi = (u32)((u32)(esi + 0x14u));
  /* 009c50cb mov ecx, dword ptr [0x9c7010] */ { const u32 m_ = (u32)(0x9c7010u); ecx = (u32)(M32(m_)); }
L_009c50d1:;
  /* 009c50d1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c50d3 je 0x9c5149 */ if (ZF_) goto L_009c5149;
  /* 009c50d5 mov edx, dword ptr [eax*4 + 0x9c5020] */ { const u32 m_ = (u32)(eax * 4u + 0x9c5020u); edx = (u32)(M32(m_)); }
  /* 009c50dc mov edi, ebx */ { edi = (u32)(ebx); }
  /* 009c50de imul edi, dword ptr [eax*4 + 0x9c5030] */ { const u32 m_ = (u32)(eax * 4u + 0x9c5030u); s64 p_ = (s64)(s32)edi * (s64)(s32)M32(m_); u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009c50e6 add edi, dword ptr [eax*4 + 0x9c5000] */ { const u32 m_ = (u32)(eax * 4u + 0x9c5000u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 009c50ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009c50ee mov ecx, edx */ { ecx = (u32)(edx); }
  /* 009c50f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c50f1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 009c50f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c50f4 cmp eax, 0 */ { u32 a_ = eax, b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c50f7 jne 0x9c5118 */ if (!ZF_) goto L_009c5118;
  /* 009c50f9 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 009c50fb mov dword ptr [ebx*4 + 0x9d7000], edx */ { const u32 m_ = (u32)(ebx * 4u + 0x9d7000u); M32(m_) = (u32)(edx); }
  /* 009c5102 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 009c5105 mov dword ptr [ebx*4 + 0x9d8000], edx */ { const u32 m_ = (u32)(ebx * 4u + 0x9d8000u); M32(m_) = (u32)(edx); }
  /* 009c510c mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 009c510f mov dword ptr [ebx*4 + 0x9d9000], edx */ { const u32 m_ = (u32)(ebx * 4u + 0x9d9000u); M32(m_) = (u32)(edx); }
  /* 009c5116 jmp 0x9c513a */ goto L_009c513a;
L_009c5118:;
  /* 009c5118 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c511b jne 0x9c513a */ if (!ZF_) goto L_009c513a;
  /* 009c511d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 009c511f mov dword ptr [ebx*4 + 0x9da000], edx */ { const u32 m_ = (u32)(ebx * 4u + 0x9da000u); M32(m_) = (u32)(edx); }
  /* 009c5126 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 009c5129 mov dword ptr [ebx*4 + 0x9db000], edx */ { const u32 m_ = (u32)(ebx * 4u + 0x9db000u); M32(m_) = (u32)(edx); }
  /* 009c5130 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 009c5133 mov dword ptr [ebx*4 + 0x9dc000], edx */ { const u32 m_ = (u32)(ebx * 4u + 0x9dc000u); M32(m_) = (u32)(edx); }
L_009c513a:;
  /* 009c513a mov edx, dword ptr [eax*4 + 0x9c5020] */ { const u32 m_ = (u32)(eax * 4u + 0x9c5020u); edx = (u32)(M32(m_)); }
  /* 009c5141 lea esi, [esi + edx*4] */ esi = (u32)((u32)(esi + edx * 4u));
  /* 009c5144 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009c5145 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c5146 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 009c5147 jmp 0x9c50d1 */ goto L_009c50d1;
L_009c5149:;
  /* 009c5149 mov byte ptr [eax + 0x9c7000], 1 */ { const u32 m_ = (u32)(eax + 0x9c7000u); M8(m_) = (u8)(0x1u); }
L_009c5150:;
  /* 009c5150 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c5151 jmp 0x4647c0 */ SAVEALL; F_004647c0(c); return;
L_009de180:;
  /* 009de180 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009de181 mov esi, dword ptr [ebp - 0x2ac] */ { const u32 m_ = (u32)(ebp + 0xfffffd54u); esi = (u32)(M32(m_)); }
  /* 009de187 cmp dword ptr [esi], 0x40000011 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x40000011u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de18d jne 0x9de199 */ if (!ZF_) goto L_009de199;
  /* 009de18f mov al, byte ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009de192 mov byte ptr [0x9c7104], al */ { const u32 m_ = (u32)(0x9c7104u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 009de197 jmp 0x9de1f1 */ goto L_009de1f1;
L_009de199:;
  /* 009de199 cmp dword ptr [esi], 0x40000010 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x40000010u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de19f jne 0x9de1f1 */ if (!ZF_) goto L_009de1f1;
  /* 009de1a1 mov ebx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 009de1a4 cmp ebx, 0x44c */ { u32 a_ = ebx, b_ = 0x44cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de1aa jae 0x9de1f1 */ if (!CF_) goto L_009de1f1;
  /* 009de1ac mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009de1af mov edx, 0x44c */ { edx = (u32)(0x44cu); }
  /* 009de1b4 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 009de1b6 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de1b8 jbe 0x9de1bc */ if ((CF_|ZF_)) goto L_009de1bc;
  /* 009de1ba mov ecx, edx */ { ecx = (u32)(edx); }
L_009de1bc:;
  /* 009de1bc mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009de1bf cmp eax, 0x44c */ { u32 a_ = eax, b_ = 0x44cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de1c4 jbe 0x9de1cb */ if ((CF_|ZF_)) goto L_009de1cb;
  /* 009de1c6 mov eax, 0x44c */ { eax = (u32)(0x44cu); }
L_009de1cb:;
  /* 009de1cb mov dword ptr [0x9df000], eax */ { const u32 m_ = (u32)(0x9df000u); M32(m_) = (u32)(eax); }
  /* 009de1d0 lea esi, [esi + 0x10] */ esi = (u32)((u32)(esi + 0x10u));
L_009de1d3:;
  /* 009de1d3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de1d5 je 0x9de1f1 */ if (ZF_) goto L_009de1f1;
  /* 009de1d7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 009de1d9 mov word ptr [ebx*2 + 0x9df004], ax */ { const u32 m_ = (u32)(ebx * 2u + 0x9df004u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 009de1e1 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 009de1e4 mov byte ptr [ebx + 0x9df89c], al */ { const u32 m_ = (u32)(ebx + 0x9df89cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 009de1ea add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009de1ed inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009de1ee dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 009de1ef jmp 0x9de1d3 */ goto L_009de1d3;
L_009de1f1:;
  /* 009de1f1 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009de1f2 jmp 0x9c5040 */ goto L_009c5040;
}

void F_009de320(CPU *c) {
  NATIVE_HOOK(0x9de320u) REGS; LOADALL;
L_009de320:;
  /* 009de320 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009de321 push 0x9de30c */ { u32 v_ = 0x9de30cu; esp -= 4; M32(esp) = v_; }
  /* 009de326 lea ecx, [ebp - 0x31c] */ ecx = (u32)((u32)(ebp + 0xfffffce4u));
  /* 009de32c call 0x403060 */ esp -= 4; M32(esp) = 0x9de331u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9de32cu); RETCHK(0x9de331u, 0x9de32cu); LOADALL;
  /* 009de331 lea ecx, [ebp - 0x31c] */ ecx = (u32)((u32)(ebp + 0xfffffce4u));
  /* 009de337 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009de338 mov ecx, dword ptr [ebx + 0x4c8] */ { const u32 m_ = (u32)(ebx + 0x4c8u); ecx = (u32)(M32(m_)); }
  /* 009de33e call 0x5075d0 */ esp -= 4; M32(esp) = 0x9de343u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9de33eu); RETCHK(0x9de343u, 0x9de33eu); LOADALL;
  /* 009de343 mov esi, eax */ { esi = (u32)(eax); }
  /* 009de345 lea ecx, [ebp - 0x31c] */ ecx = (u32)((u32)(ebp + 0xfffffce4u));
  /* 009de34b call 0x43ee60 */ esp -= 4; M32(esp) = 0x9de350u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9de34bu); RETCHK(0x9de350u, 0x9de34bu); LOADALL;
  /* 009de350 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de352 je 0x9de368 */ if (ZF_) goto L_009de368;
  /* 009de354 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009de356 cmp byte ptr [0x9c7105], 0 */ { const u32 m_ = (u32)(0x9c7105u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009de35d sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 009de360 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009de361 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009de363 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 009de365 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9de368u; SAVEALL; call_ind(c, t_); RETCHK(0x9de368u, 0x9de365u); LOADALL; }
L_009de368:;
  /* 009de368 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009de369 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009de400(CPU *c) {
  NATIVE_HOOK(0x9de400u) REGS; LOADALL;
L_009de400:;
  /* 009de400 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009de401 mov dword ptr [0x9dec00], ebx */ { const u32 m_ = (u32)(0x9dec00u); M32(m_) = (u32)(ebx); }
  /* 009de407 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_009de409:;
  /* 009de409 push dword ptr [edi*4 + 0x9dece8] */ { const u32 m_ = (u32)(edi * 4u + 0x9dece8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009de410 mov ecx, 0x9dec34 */ { ecx = (u32)(0x9dec34u); }
  /* 009de415 call 0x403060 */ esp -= 4; M32(esp) = 0x9de41au; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9de415u); RETCHK(0x9de41au, 0x9de415u); LOADALL;
  /* 009de41a push 0x9dec34 */ { u32 v_ = 0x9dec34u; esp -= 4; M32(esp) = v_; }
  /* 009de41f mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009de421 call 0x5075d0 */ esp -= 4; M32(esp) = 0x9de426u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9de421u); RETCHK(0x9de426u, 0x9de421u); LOADALL;
  /* 009de426 mov dword ptr [edi*4 + 0x9dec04], eax */ { const u32 m_ = (u32)(edi * 4u + 0x9dec04u); M32(m_) = (u32)(eax); }
  /* 009de42d mov ecx, 0x9dec34 */ { ecx = (u32)(0x9dec34u); }
  /* 009de432 call 0x43ee60 */ esp -= 4; M32(esp) = 0x9de437u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9de432u); RETCHK(0x9de437u, 0x9de432u); LOADALL;
  /* 009de437 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009de438 cmp edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de43b jb 0x9de409 */ if (CF_) goto L_009de409;
  /* 009de43d popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009de43e mov ecx, dword ptr [ebx + 0x390] */ { const u32 m_ = (u32)(ebx + 0x390u); ecx = (u32)(M32(m_)); }
  /* 009de444 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009de445(CPU *c) {
  NATIVE_HOOK(0x9de445u) REGS; LOADALL;
L_009de445:;
  /* 009de445 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009de446 cmp esi, dword ptr [0x9dec00] */ { const u32 m_ = (u32)(0x9dec00u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de44c jne 0x9de468 */ if (!ZF_) goto L_009de468;
  /* 009de44e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_009de450:;
  /* 009de450 mov ecx, dword ptr [edi*4 + 0x9dec04] */ { const u32 m_ = (u32)(edi * 4u + 0x9dec04u); ecx = (u32)(M32(m_)); }
  /* 009de457 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de459 je 0x9de462 */ if (ZF_) goto L_009de462;
  /* 009de45b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009de45d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009de45f call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9de462u; SAVEALL; call_ind(c, t_); RETCHK(0x9de462u, 0x9de45fu); LOADALL; }
L_009de462:;
  /* 009de462 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009de463 cmp edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de466 jb 0x9de450 */ if (CF_) goto L_009de450;
L_009de468:;
  /* 009de468 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009de469 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 009de46b lea eax, [esi + 0x354] */ eax = (u32)((u32)(esi + 0x354u));
  /* 009de471 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009de472(CPU *c) {
  NATIVE_HOOK(0x9de472u) REGS; LOADALL;
L_009de472:;
  /* 009de472 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009de473 cmp esi, dword ptr [0x9dec00] */ { const u32 m_ = (u32)(0x9dec00u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de479 jne 0x9de4e2 */ if (!ZF_) goto L_009de4e2;
  /* 009de47b mov edi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edi = (u32)(M32(m_)); }
  /* 009de47e cmp edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de481 jae 0x9de4e2 */ if (!CF_) goto L_009de4e2;
  /* 009de483 mov ebx, dword ptr [edi*4 + 0x9dec04] */ { const u32 m_ = (u32)(edi * 4u + 0x9dec04u); ebx = (u32)(M32(m_)); }
  /* 009de48a test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de48c je 0x9de4e2 */ if (ZF_) goto L_009de4e2;
  /* 009de48e mov eax, dword ptr [esi + 0x398] */ { const u32 m_ = (u32)(esi + 0x398u); eax = (u32)(M32(m_)); }
  /* 009de494 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 009de497 lea eax, [edi + eax*4] */ eax = (u32)((u32)(edi + eax * 4u));
  /* 009de49a imul eax, eax, 0x5c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x5cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009de49d add eax, dword ptr [esi + 0x3a8] */ { const u32 m_ = (u32)(esi + 0x3a8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009de4a3 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 009de4a5 cmp eax, 0x10000 */ { u32 a_ = eax, b_ = 0x10000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de4aa jae 0x9de4e2 */ if (!CF_) goto L_009de4e2;
  /* 009de4ac mov ecx, dword ptr [0x9df000] */ { const u32 m_ = (u32)(0x9df000u); ecx = (u32)(M32(m_)); }
L_009de4b2:;
  /* 009de4b2 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de4b4 je 0x9de4e2 */ if (ZF_) goto L_009de4e2;
  /* 009de4b6 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 009de4b7 cmp ax, word ptr [ecx*2 + 0x9df004] */ { const u32 m_ = (u32)(ecx * 2u + 0x9df004u); u32 a_ = (eax & 0xffffu), b_ = M16(m_); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de4bf jne 0x9de4b2 */ if (!ZF_) goto L_009de4b2;
  /* 009de4c1 movzx edx, byte ptr [ecx + 0x9df89c] */ { const u32 m_ = (u32)(ecx + 0x9df89cu); edx = (u32)(M8(m_)); }
  /* 009de4c8 cmp edx, 5 */ { u32 a_ = edx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de4cb ja 0x9de4e2 */ if (!(CF_|ZF_)) goto L_009de4e2;
  /* 009de4cd push dword ptr [edx*4 + 0x9deda0] */ { const u32 m_ = (u32)(edx * 4u + 0x9deda0u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009de4d4 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9de4d9u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9de4d4u); RETCHK(0x9de4d9u, 0x9de4d4u); LOADALL;
  /* 009de4d9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 009de4db mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009de4dd mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009de4df call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9de4e2u; SAVEALL; call_ind(c, t_); RETCHK(0x9de4e2u, 0x9de4dfu); LOADALL; }
L_009de4e2:;
  /* 009de4e2 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009de4e3 mov edi, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edi = (u32)(M32(m_)); }
  /* 009de4e6 mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 009de4e8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009de720(CPU *c) {
  NATIVE_HOOK(0x9de720u) REGS; LOADALL;
L_009de720:;
  /* 009de720 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009de721 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009de722 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009de723 call 0x62d684 */ esp -= 4; M32(esp) = 0x9de728u; SAVEALL; F_0062d684(c); ABI_CHECK(0x62d684u, 0x9de723u); RETCHK(0x9de728u, 0x9de723u); LOADALL;
  /* 009de728 mov edx, eax */ { edx = (u32)(eax); }
  /* 009de72a mov edi, 0x9c4ee5 */ { edi = (u32)(0x9c4ee5u); }
  /* 009de72f cmp dword ptr [0x9c7400], 2 */ { const u32 m_ = (u32)(0x9c7400u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de736 jne 0x9de73d */ if (!ZF_) goto L_009de73d;
  /* 009de738 mov edi, 0x9c4ef3 */ { edi = (u32)(0x9c4ef3u); }
L_009de73d:;
  /* 009de73d test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de73f je 0x9de754 */ if (ZF_) goto L_009de754;
  /* 009de741 mov edi, 0x9de700 */ { edi = (u32)(0x9de700u); }
  /* 009de746 cmp dword ptr [0x9c7400], 2 */ { const u32 m_ = (u32)(0x9c7400u); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de74d jne 0x9de754 */ if (!ZF_) goto L_009de754;
  /* 009de74f mov edi, 0x9de70d */ { edi = (u32)(0x9de70du); }
L_009de754:;
  /* 009de754 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 009de755 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009de756 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009de757 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dfe00(CPU *c) {
  NATIVE_HOOK(0x9dfe00u) REGS; LOADALL;
L_009dfe00:;
  /* 009dfe00 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 009dfe04 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 009dfe08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009dfe09 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009dfe0b push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 009dfe0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009dfe0e call dword ptr [0x62e4d8] */ { const u32 m_ = (u32)(0x62e4d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dfe14u; SAVEALL; call_ind(c, t_); RETCHK(0x9dfe14u, 0x9dfe0eu); LOADALL; }
  /* 009dfe14 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_009dfe49(CPU *c) {
  NATIVE_HOOK(0x9dfe49u) REGS; LOADALL;
L_009dfe49:;
  /* 009dfe49 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009dfe4a mov ecx, 0x9dfd20 */ { ecx = (u32)(0x9dfd20u); }
  /* 009dfe4f call 0x403060 */ esp -= 4; M32(esp) = 0x9dfe54u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9dfe4fu); RETCHK(0x9dfe54u, 0x9dfe4fu); LOADALL;
  /* 009dfe54 push 0x9dfd20 */ { u32 v_ = 0x9dfd20u; esp -= 4; M32(esp) = v_; }
  /* 009dfe59 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009dfe5b call 0x5075d0 */ esp -= 4; M32(esp) = 0x9dfe60u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9dfe5bu); RETCHK(0x9dfe60u, 0x9dfe5bu); LOADALL;
  /* 009dfe60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009dfe61 mov ecx, 0x9dfd20 */ { ecx = (u32)(0x9dfd20u); }
  /* 009dfe66 call 0x43ee60 */ esp -= 4; M32(esp) = 0x9dfe6bu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9dfe66u); RETCHK(0x9dfe6bu, 0x9dfe66u); LOADALL;
  /* 009dfe6b pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009dfe6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009dfe6d(CPU *c) {
  NATIVE_HOOK(0x9dfe6du) REGS; LOADALL;
L_009dfe6d:;
  /* 009dfe6d pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009dfe6e mov ebp, dword ptr [ebx + 0x19c] */ { const u32 m_ = (u32)(ebx + 0x19cu); ebp = (u32)(M32(m_)); }
  /* 009dfe74 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dfe76 je 0x9dffa2 */ if (ZF_) goto L_009dffa2;
  /* 009dfe7c cmp dword ptr [0x9dfd00], 0 */ { const u32 m_ = (u32)(0x9dfd00u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dfe83 je 0x9dff2f */ if (ZF_) goto L_009dff2f;
  /* 009dfe89 mov dword ptr [0x9dfd00], 0 */ { const u32 m_ = (u32)(0x9dfd00u); M32(m_) = (u32)(0x0u); }
  /* 009dfe93 cmp dword ptr [0x9dfd04], 0 */ { const u32 m_ = (u32)(0x9dfd04u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dfe9a jne 0x9dff2f */ if (!ZF_) goto L_009dff2f;
  /* 009dfea0 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 009dfea2 mov esi, 0x9dfd60 */ { esi = (u32)(0x9dfd60u); }
  /* 009dfea7 call 0x9dfe49 */ esp -= 4; M32(esp) = 0x9dfeacu; SAVEALL; F_009dfe49(c); ABI_CHECK(0x9dfe49u, 0x9dfea7u); RETCHK(0x9dfeacu, 0x9dfea7u); LOADALL;
  /* 009dfeac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dfeae je 0x9dffa2 */ if (ZF_) goto L_009dffa2;
  /* 009dfeb4 mov dword ptr [0x9dfd08], eax */ { const u32 m_ = (u32)(0x9dfd08u); M32(m_) = (u32)(eax); }
  /* 009dfeb9 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 009dfebb mov esi, 0x9dfd6c */ { esi = (u32)(0x9dfd6cu); }
  /* 009dfec0 call 0x9dfe49 */ esp -= 4; M32(esp) = 0x9dfec5u; SAVEALL; F_009dfe49(c); ABI_CHECK(0x9dfe49u, 0x9dfec0u); RETCHK(0x9dfec5u, 0x9dfec0u); LOADALL;
  /* 009dfec5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dfec7 je 0x9dffa2 */ if (ZF_) goto L_009dffa2;
  /* 009dfecd mov dword ptr [0x9dfd0c], eax */ { const u32 m_ = (u32)(0x9dfd0cu); M32(m_) = (u32)(eax); }
  /* 009dfed2 mov ecx, dword ptr [0x9dfd08] */ { const u32 m_ = (u32)(0x9dfd08u); ecx = (u32)(M32(m_)); }
  /* 009dfed8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009dfeda push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 009dfedc call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dfedfu; SAVEALL; call_ind(c, t_); RETCHK(0x9dfedfu, 0x9dfedcu); LOADALL; }
  /* 009dfedf mov ecx, dword ptr [0x9dfd0c] */ { const u32 m_ = (u32)(0x9dfd0cu); ecx = (u32)(M32(m_)); }
  /* 009dfee5 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009dfee7 push 0x9dfd10 */ { u32 v_ = 0x9dfd10u; esp -= 4; M32(esp) = v_; }
  /* 009dfeec call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dfeefu; SAVEALL; call_ind(c, t_); RETCHK(0x9dfeefu, 0x9dfeecu); LOADALL; }
  /* 009dfeef mov eax, dword ptr [0x9dfd0c] */ { const u32 m_ = (u32)(0x9dfd0cu); eax = (u32)(M32(m_)); }
  /* 009dfef4 add eax, 0x188 */ { u32 a_ = eax, b_ = 0x188u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009dfef9 mov ecx, 0x9dfd10 */ { ecx = (u32)(0x9dfd10u); }
  /* 009dfefe call 0x52cea0 */ esp -= 4; M32(esp) = 0x9dff03u; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x9dfefeu); RETCHK(0x9dff03u, 0x9dfefeu); LOADALL;
  /* 009dff03 mov esi, dword ptr [0x9dfd0c] */ { const u32 m_ = (u32)(0x9dfd0cu); esi = (u32)(M32(m_)); }
  /* 009dff09 push dword ptr [0x9c0264] */ { const u32 m_ = (u32)(0x9c0264u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009dff0f mov eax, dword ptr [0x9c0260] */ { const u32 m_ = (u32)(0x9c0260u); eax = (u32)(M32(m_)); }
  /* 009dff14 call 0x50d030 */ esp -= 4; M32(esp) = 0x9dff19u; SAVEALL; F_0050d030(c); ABI_CHECK(0x50d030u, 0x9dff14u); RETCHK(0x9dff19u, 0x9dff14u); LOADALL;
  /* 009dff19 mov eax, dword ptr [0x9c7400] */ { const u32 m_ = (u32)(0x9c7400u); eax = (u32)(M32(m_)); }
  /* 009dff1e mov dword ptr [0x9dfd74], eax */ { const u32 m_ = (u32)(0x9dfd74u); M32(m_) = (u32)(eax); }
  /* 009dff23 mov dword ptr [0x9dfd04], 1 */ { const u32 m_ = (u32)(0x9dfd04u); M32(m_) = (u32)(0x1u); }
  /* 009dff2d jmp 0x9dffa2 */ goto L_009dffa2;
L_009dff2f:;
  /* 009dff2f cmp dword ptr [0x9dfd04], 0 */ { const u32 m_ = (u32)(0x9dfd04u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dff36 je 0x9dffa2 */ if (ZF_) goto L_009dffa2;
  /* 009dff38 jmp 0x9e0380 */ goto L_009e0380;
L_009dff3d:;
  /* 009dff3d mov eax, dword ptr [0x9c7400] */ { const u32 m_ = (u32)(0x9c7400u); eax = (u32)(M32(m_)); }
  /* 009dff42 mov edx, dword ptr [0x9dfd74] */ { const u32 m_ = (u32)(0x9dfd74u); edx = (u32)(M32(m_)); }
  /* 009dff48 mov dword ptr [0x9dfd74], eax */ { const u32 m_ = (u32)(0x9dfd74u); M32(m_) = (u32)(eax); }
  /* 009dff4d cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dff50 jne 0x9dff57 */ if (!ZF_) goto L_009dff57;
  /* 009dff52 cmp edx, 2 */ { u32 a_ = edx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dff55 jne 0x9dff80 */ if (!ZF_) goto L_009dff80;
L_009dff57:;
  /* 009dff57 mov ecx, dword ptr [0x9dfd08] */ { const u32 m_ = (u32)(0x9dfd08u); ecx = (u32)(M32(m_)); }
  /* 009dff5d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009dff5f call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dff62u; SAVEALL; call_ind(c, t_); RETCHK(0x9dff62u, 0x9dff5fu); LOADALL; }
  /* 009dff62 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009dff64 je 0x9dff80 */ if (ZF_) goto L_009dff80;
  /* 009dff66 mov eax, dword ptr [0x9dfd0c] */ { const u32 m_ = (u32)(0x9dfd0cu); eax = (u32)(M32(m_)); }
  /* 009dff6b mov eax, dword ptr [eax + 0x184] */ { const u32 m_ = (u32)(eax + 0x184u); eax = (u32)(M32(m_)); }
  /* 009dff71 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dff73 je 0x9dff80 */ if (ZF_) goto L_009dff80;
  /* 009dff75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009dff76 call dword ptr [0x62e5b4] */ { const u32 m_ = (u32)(0x62e5b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dff7cu; SAVEALL; call_ind(c, t_); RETCHK(0x9dff7cu, 0x9dff76u); LOADALL; }
  /* 009dff7c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dff7e jne 0x9dffa2 */ if (!ZF_) goto L_009dffa2;
L_009dff80:;
  /* 009dff80 mov ecx, dword ptr [0x9dfd0c] */ { const u32 m_ = (u32)(0x9dfd0cu); ecx = (u32)(M32(m_)); }
  /* 009dff86 call 0x50d110 */ esp -= 4; M32(esp) = 0x9dff8bu; SAVEALL; F_0050d110(c); ABI_CHECK(0x50d110u, 0x9dff86u); RETCHK(0x9dff8bu, 0x9dff86u); LOADALL;
  /* 009dff8b mov ecx, dword ptr [0x9dfd08] */ { const u32 m_ = (u32)(0x9dfd08u); ecx = (u32)(M32(m_)); }
  /* 009dff91 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009dff93 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009dff95 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dff98u; SAVEALL; call_ind(c, t_); RETCHK(0x9dff98u, 0x9dff95u); LOADALL; }
L_009dff98:;
  /* 009dff98 mov dword ptr [0x9dfd04], 0 */ { const u32 m_ = (u32)(0x9dfd04u); M32(m_) = (u32)(0x0u); }
L_009dffa2:;
  /* 009dffa2 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009dffa3 jmp 0x5084b0 */ SAVEALL; F_005084b0(c); return;
L_009e0380:;
  /* 009e0380 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 009e0382 mov esi, 0x9dfd60 */ { esi = (u32)(0x9dfd60u); }
  /* 009e0387 call 0x9dfe49 */ esp -= 4; M32(esp) = 0x9e038cu; SAVEALL; F_009dfe49(c); ABI_CHECK(0x9dfe49u, 0x9e0387u); RETCHK(0x9e038cu, 0x9e0387u); LOADALL;
  /* 009e038c cmp eax, dword ptr [0x9dfd08] */ { const u32 m_ = (u32)(0x9dfd08u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0392 jne 0x9dff98 */ if (!ZF_) goto L_009dff98;
  /* 009e0398 mov edi, ebp */ { edi = (u32)(ebp); }
  /* 009e039a mov esi, 0x9dfd6c */ { esi = (u32)(0x9dfd6cu); }
  /* 009e039f call 0x9dfe49 */ esp -= 4; M32(esp) = 0x9e03a4u; SAVEALL; F_009dfe49(c); ABI_CHECK(0x9dfe49u, 0x9e039fu); RETCHK(0x9e03a4u, 0x9e039fu); LOADALL;
  /* 009e03a4 cmp eax, dword ptr [0x9dfd0c] */ { const u32 m_ = (u32)(0x9dfd0cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e03aa jne 0x9dff98 */ if (!ZF_) goto L_009dff98;
  /* 009e03b0 jmp 0x9dff3d */ goto L_009dff3d;
}

void F_009dffa8(CPU *c) {
  NATIVE_HOOK(0x9dffa8u) REGS; LOADALL;
L_009dffa8:;
  /* 009dffa8 mov ecx, dword ptr [esi + 0x184] */ { const u32 m_ = (u32)(esi + 0x184u); ecx = (u32)(M32(m_)); }
  /* 009dffae lea edx, [esi + 0x19c] */ edx = (u32)((u32)(esi + 0x19cu));
  /* 009dffb4 cmp dword ptr [esi + 0x1b0], 0x10 */ { const u32 m_ = (u32)(esi + 0x1b0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009dffbb jb 0x9dffbf */ if (CF_) goto L_009dffbf;
  /* 009dffbd mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_009dffbf:;
  /* 009dffbf mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009dffc1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009dffc3 je 0x9dffcc */ if (ZF_) goto L_009dffcc;
  /* 009dffc5 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009dffc6 cmp al, 0x3a */ { u32 a_ = (eax & 0xffu), b_ = 0x3au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009dffc8 jne 0x9dffbf */ if (!ZF_) goto L_009dffbf;
  /* 009dffca jmp 0x9dffde */ goto L_009dffde;
L_009dffcc:;
  /* 009dffcc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009dffcd push 0x9dfd78 */ { u32 v_ = 0x9dfd78u; esp -= 4; M32(esp) = v_; }
  /* 009dffd2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009dffd3 call dword ptr [0x62e4b8] */ { const u32 m_ = (u32)(0x62e4b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dffd9u; SAVEALL; call_ind(c, t_); RETCHK(0x9dffd9u, 0x9dffd3u); LOADALL; }
  /* 009dffd9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009dffda test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009dffdc je 0x9dffe7 */ if (ZF_) goto L_009dffe7;
L_009dffde:;
  /* 009dffde push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 009dffe0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009dffe1 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9dffe7u; SAVEALL; call_ind(c, t_); RETCHK(0x9dffe7u, 0x9dffe1u); LOADALL; }
L_009dffe7:;
  /* 009dffe7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e009d(CPU *c) {
  NATIVE_HOOK(0x9e009du) REGS; LOADALL;
L_009e009d:;
  /* 009e009d ret 0x8830 */ c->popped = M32(esp); esp += 34868u; SAVEALL; return;
}

void F_009e02a0(CPU *c) {
  NATIVE_HOOK(0x9e02a0u) REGS; LOADALL;
L_009e02a0:;
  /* 009e02a0 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e02a3 jae 0x9e02ad */ if (!CF_) goto L_009e02ad;
  /* 009e02a5 mov eax, dword ptr [eax*4 + 0x683ccc] */ { const u32 m_ = (u32)(eax * 4u + 0x683cccu); eax = (u32)(M32(m_)); }
  /* 009e02ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e02ad:;
  /* 009e02ad cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e02b0 jae 0x9e02ba */ if (!CF_) goto L_009e02ba;
  /* 009e02b2 mov eax, dword ptr [eax*4 + 0x683cf8] */ { const u32 m_ = (u32)(eax * 4u + 0x683cf8u); eax = (u32)(M32(m_)); }
  /* 009e02b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e02ba:;
  /* 009e02ba mov eax, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); eax = (u32)(M32(m_)); }
  /* 009e02c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e02c2(CPU *c) {
  NATIVE_HOOK(0x9e02c2u) REGS; LOADALL;
L_009e02c2:;
  /* 009e02c2 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e02c5 jae 0x9e02cf */ if (!CF_) goto L_009e02cf;
  /* 009e02c7 mov ecx, dword ptr [eax*4 + 0x683ccc] */ { const u32 m_ = (u32)(eax * 4u + 0x683cccu); ecx = (u32)(M32(m_)); }
  /* 009e02ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e02cf:;
  /* 009e02cf cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e02d2 jae 0x9e02dc */ if (!CF_) goto L_009e02dc;
  /* 009e02d4 mov ecx, dword ptr [eax*4 + 0x683cf8] */ { const u32 m_ = (u32)(eax * 4u + 0x683cf8u); ecx = (u32)(M32(m_)); }
  /* 009e02db ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e02dc:;
  /* 009e02dc mov ecx, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); ecx = (u32)(M32(m_)); }
  /* 009e02e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e02e4(CPU *c) {
  NATIVE_HOOK(0x9e02e4u) REGS; LOADALL;
L_009e02e4:;
  /* 009e02e4 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e02e7 jae 0x9e02f1 */ if (!CF_) goto L_009e02f1;
  /* 009e02e9 mov ecx, dword ptr [eax*4 + 0x684da8] */ { const u32 m_ = (u32)(eax * 4u + 0x684da8u); ecx = (u32)(M32(m_)); }
  /* 009e02f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e02f1:;
  /* 009e02f1 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e02f4 jae 0x9e02fe */ if (!CF_) goto L_009e02fe;
  /* 009e02f6 mov ecx, dword ptr [eax*4 + 0x684dd8] */ { const u32 m_ = (u32)(eax * 4u + 0x684dd8u); ecx = (u32)(M32(m_)); }
  /* 009e02fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e02fe:;
  /* 009e02fe mov ecx, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); ecx = (u32)(M32(m_)); }
  /* 009e0305 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0306(CPU *c) {
  NATIVE_HOOK(0x9e0306u) REGS; LOADALL;
L_009e0306:;
  /* 009e0306 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0309 jae 0x9e0313 */ if (!CF_) goto L_009e0313;
  /* 009e030b mov edx, dword ptr [eax*4 + 0x6844d0] */ { const u32 m_ = (u32)(eax * 4u + 0x6844d0u); edx = (u32)(M32(m_)); }
  /* 009e0312 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0313:;
  /* 009e0313 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0316 jae 0x9e0320 */ if (!CF_) goto L_009e0320;
  /* 009e0318 mov edx, dword ptr [eax*4 + 0x684500] */ { const u32 m_ = (u32)(eax * 4u + 0x684500u); edx = (u32)(M32(m_)); }
  /* 009e031f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0320:;
  /* 009e0320 mov edx, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); edx = (u32)(M32(m_)); }
  /* 009e0327 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0328(CPU *c) {
  NATIVE_HOOK(0x9e0328u) REGS; LOADALL;
L_009e0328:;
  /* 009e0328 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e032b jae 0x9e0335 */ if (!CF_) goto L_009e0335;
  /* 009e032d mov edx, dword ptr [eax*4 + 0x6847b8] */ { const u32 m_ = (u32)(eax * 4u + 0x6847b8u); edx = (u32)(M32(m_)); }
  /* 009e0334 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0335:;
  /* 009e0335 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0338 jae 0x9e0342 */ if (!CF_) goto L_009e0342;
  /* 009e033a mov edx, dword ptr [eax*4 + 0x6847e8] */ { const u32 m_ = (u32)(eax * 4u + 0x6847e8u); edx = (u32)(M32(m_)); }
  /* 009e0341 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0342:;
  /* 009e0342 mov edx, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); edx = (u32)(M32(m_)); }
  /* 009e0349 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e034a(CPU *c) {
  NATIVE_HOOK(0x9e034au) REGS; LOADALL;
L_009e034a:;
  /* 009e034a cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e034d jae 0x9e0357 */ if (!CF_) goto L_009e0357;
  /* 009e034f mov edx, dword ptr [eax*4 + 0x684da8] */ { const u32 m_ = (u32)(eax * 4u + 0x684da8u); edx = (u32)(M32(m_)); }
  /* 009e0356 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0357:;
  /* 009e0357 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e035a jae 0x9e0364 */ if (!CF_) goto L_009e0364;
  /* 009e035c mov edx, dword ptr [eax*4 + 0x684dd8] */ { const u32 m_ = (u32)(eax * 4u + 0x684dd8u); edx = (u32)(M32(m_)); }
  /* 009e0363 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0364:;
  /* 009e0364 mov edx, dword ptr [eax*4 + 0x9c42a8] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42a8u); edx = (u32)(M32(m_)); }
  /* 009e036b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0490(CPU *c) {
  NATIVE_HOOK(0x9e0490u) REGS; LOADALL;
L_009e0490:;
  /* 009e0490 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009e0491 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009e0492 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009e0493 mov esi, eax */ { esi = (u32)(eax); }
  /* 009e0495 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0497 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0499 je 0x9e04f4 */ if (ZF_) goto L_009e04f4;
  /* 009e049b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_009e049d:;
  /* 009e049d cmp edi, dword ptr [esi + 0xa64] */ { const u32 m_ = (u32)(esi + 0xa64u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e04a3 jge 0x9e04f2 */ if (!LT_) goto L_009e04f2;
  /* 009e04a5 test dword ptr [esi + edi*4 + 0xa68], 0x1000000 */ { const u32 m_ = (u32)(esi + edi * 4u + 0xa68u); u32 a_ = M32(m_), b_ = 0x1000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e04b0 je 0x9e04ef */ if (ZF_) goto L_009e04ef;
  /* 009e04b2 mov ebx, dword ptr [esi + edi*4 + 0x960] */ { const u32 m_ = (u32)(esi + edi * 4u + 0x960u); ebx = (u32)(M32(m_)); }
  /* 009e04b9 cmp ebx, 0x1dcd6500 */ { u32 a_ = ebx, b_ = 0x1dcd6500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e04bf jl 0x9e04ef */ if (LT_) goto L_009e04ef;
  /* 009e04c1 cmp ebx, 0x23c345ff */ { u32 a_ = ebx, b_ = 0x23c345ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e04c7 jg 0x9e04ef */ if (!(ZF_|LT_)) goto L_009e04ef;
  /* 009e04c9 call 0x556030 */ esp -= 4; M32(esp) = 0x9e04ceu; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x9e04c9u); RETCHK(0x9e04ceu, 0x9e04c9u); LOADALL;
  /* 009e04ce mov ecx, eax */ { ecx = (u32)(eax); }
  /* 009e04d0 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 009e04d2 call 0x555840 */ esp -= 4; M32(esp) = 0x9e04d7u; SAVEALL; F_00555840(c); ABI_CHECK(0x555840u, 0x9e04d2u); RETCHK(0x9e04d7u, 0x9e04d2u); LOADALL;
  /* 009e04d7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e04d9 je 0x9e04ef */ if (ZF_) goto L_009e04ef;
  /* 009e04db mov eax, dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); eax = (u32)(M32(m_)); }
  /* 009e04e1 cmp eax, 0x1dcd6500 */ { u32 a_ = eax, b_ = 0x1dcd6500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e04e6 jl 0x9e04ef */ if (LT_) goto L_009e04ef;
  /* 009e04e8 cmp eax, 0x1ddca73f */ { u32 a_ = eax, b_ = 0x1ddca73fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e04ed jle 0x9e04f4 */ if ((ZF_|LT_)) goto L_009e04f4;
L_009e04ef:;
  /* 009e04ef inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009e04f0 jmp 0x9e049d */ goto L_009e049d;
L_009e04f2:;
  /* 009e04f2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_009e04f4:;
  /* 009e04f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009e04f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009e04f6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009e04f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e04f8(CPU *c) {
  NATIVE_HOOK(0x9e04f8u) REGS; LOADALL;
L_009e04f8:;
  /* 009e04f8 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e04fb mov ecx, esp */ { ecx = (u32)(esp); }
  /* 009e04fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e04fe push 0x9e0480 */ { u32 v_ = 0x9e0480u; esp -= 4; M32(esp) = v_; }
  /* 009e0503 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0504 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x9e0509u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x9e0504u); RETCHK(0x9e0509u, 0x9e0504u); LOADALL;
  /* 009e0509 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e050c push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 009e050d call 0x50dc70 */ esp -= 4; M32(esp) = 0x9e0512u; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9e050du); RETCHK(0x9e0512u, 0x9e050du); LOADALL;
  /* 009e0512 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0515 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0516(CPU *c) {
  NATIVE_HOOK(0x9e0516u) REGS; LOADALL;
L_009e0516:;
  /* 009e0516 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009e0517 mov eax, dword ptr [ebp - 0x3a4] */ { const u32 m_ = (u32)(ebp + 0xfffffc5cu); eax = (u32)(M32(m_)); }
  /* 009e051d call 0x9e0490 */ esp -= 4; M32(esp) = 0x9e0522u; SAVEALL; F_009e0490(c); ABI_CHECK(0x9e0490u, 0x9e051du); RETCHK(0x9e0522u, 0x9e051du); LOADALL;
  /* 009e0522 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0524 je 0x9e052f */ if (ZF_) goto L_009e052f;
  /* 009e0526 call 0x9e04f8 */ esp -= 4; M32(esp) = 0x9e052bu; SAVEALL; F_009e04f8(c); ABI_CHECK(0x9e04f8u, 0x9e0526u); RETCHK(0x9e052bu, 0x9e0526u); LOADALL;
  /* 009e052b popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e052c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009e052f:;
  /* 009e052f popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e0530 jmp 0x50dc70 */ SAVEALL; F_0050dc70(c); return;
}

void F_009e0600(CPU *c) {
  NATIVE_HOOK(0x9e0600u) REGS; LOADALL;
  goto L_009e0600;
L_004573f2:;
  /* 004573f2 call 0x54bc40 */ esp -= 4; M32(esp) = 0x4573f7u; SAVEALL; F_0054bc40(c); ABI_CHECK(0x54bc40u, 0x4573f2u); RETCHK(0x4573f7u, 0x4573f2u); LOADALL;
  /* 004573f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004573f8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004573f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009e0600:;
  /* 009e0600 and eax, 0x60000064 */ { u32 a_ = eax, b_ = 0x60000064u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0605 mov ebx, dword ptr [edi + 0x1e4] */ { const u32 m_ = (u32)(edi + 0x1e4u); ebx = (u32)(M32(m_)); }
  /* 009e060b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e060d je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e0613 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009e0615 call 0x4019a0 */ esp -= 4; M32(esp) = 0x9e061au; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x9e0615u); RETCHK(0x9e061au, 0x9e0615u); LOADALL;
  /* 009e061a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e061d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e061f je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e0625 mov esi, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); esi = (u32)(M32(m_)); }
  /* 009e062b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e062d je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e062f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 009e0631 call 0x55ead0 */ esp -= 4; M32(esp) = 0x9e0636u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x9e0631u); RETCHK(0x9e0636u, 0x9e0631u); LOADALL;
  /* 009e0636 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0638 je 0x9e06aa */ if (ZF_) goto L_009e06aa;
  /* 009e063a mov eax, dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); eax = (u32)(M32(m_)); }
  /* 009e063d cmp ebx, dword ptr [0x9dfd80] */ { const u32 m_ = (u32)(0x9dfd80u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0643 jne 0x9e064d */ if (!ZF_) goto L_009e064d;
  /* 009e0645 cmp eax, dword ptr [0x9dfd84] */ { const u32 m_ = (u32)(0x9dfd84u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e064b je 0x9e06aa */ if (ZF_) goto L_009e06aa;
L_009e064d:;
  /* 009e064d mov dword ptr [0x9dfd80], ebx */ { const u32 m_ = (u32)(0x9dfd80u); M32(m_) = (u32)(ebx); }
  /* 009e0653 mov dword ptr [0x9dfd84], eax */ { const u32 m_ = (u32)(0x9dfd84u); M32(m_) = (u32)(eax); }
  /* 009e0658 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e065b lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 009e065f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0660 push 0x9e0600 */ { u32 v_ = 0x9e0600u; esp -= 4; M32(esp) = v_; }
  /* 009e0665 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0666 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x9e066bu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x9e0666u); RETCHK(0x9e066bu, 0x9e0666u); LOADALL;
  /* 009e066b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e066e lea edx, [esp + 0x20] */ edx = (u32)((u32)(esp + 0x20u));
  /* 009e0672 mov ecx, edx */ { ecx = (u32)(edx); }
L_009e0674:;
  /* 009e0674 cmp byte ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009e0677 je 0x9e067c */ if (ZF_) goto L_009e067c;
  /* 009e0679 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009e067a jmp 0x9e0674 */ goto L_009e0674;
L_009e067c:;
  /* 009e067c sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 009e067e mov dword ptr [esp + 0x18], 0xf */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 009e0686 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 009e068e mov byte ptr [esp + 4], 0 */ { const u32 m_ = (u32)(esp + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 009e0693 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0694 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009e0695 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 009e0699 call 0x404420 */ esp -= 4; M32(esp) = 0x9e069eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x9e0699u); RETCHK(0x9e069eu, 0x9e0699u); LOADALL;
  /* 009e069e mov esi, ebx */ { esi = (u32)(ebx); }
  /* 009e06a0 mov eax, esp */ { eax = (u32)(esp); }
  /* 009e06a2 call 0x5224b0 */ esp -= 4; M32(esp) = 0x9e06a7u; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x9e06a2u); RETCHK(0x9e06a7u, 0x9e06a2u); LOADALL;
  /* 009e06a7 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_009e06aa:;
  /* 009e06aa popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e06ab mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 009e06ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e06af mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009e06b1 jmp 0x4573f2 */ goto L_004573f2;
}

void F_009e0700(CPU *c) {
  NATIVE_HOOK(0x9e0700u) REGS; LOADALL;
L_009e0700:;
  /* 009e0700 cmp dword ptr [ecx + 0xc0], 0x125bb500 */ { const u32 m_ = (u32)(ecx + 0xc0u); u32 a_ = M32(m_), b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e070a je 0x9e0716 */ if (ZF_) goto L_009e0716;
  /* 009e070c cmp dword ptr [ecx + 0xfc], 0x125bb500 */ { const u32 m_ = (u32)(ecx + 0xfcu); u32 a_ = M32(m_), b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_009e0716:;
  /* 009e0716 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0808(CPU *c) {
  NATIVE_HOOK(0x9e0808u) REGS; LOADALL;
L_009e0808:;
  /* 009e0808 mov edx, 0x9c4a86 */ { edx = (u32)(0x9c4a86u); }
  /* 009e080d call 0x9c4bbc */ esp -= 4; M32(esp) = 0x9e0812u; SAVEALL; F_009c4bbc(c); ABI_CHECK(0x9c4bbcu, 0x9e080du); RETCHK(0x9e0812u, 0x9e080du); LOADALL;
  /* 009e0812 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 009e0814 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0817 fld dword ptr [ebx + 0xcbc4] */ { const u32 m_ = (u32)(ebx + 0xcbc4u); FPUSH((double)MF32(m_)); }
  /* 009e081d fsub dword ptr [0x9e0800] */ { const u32 m_ = (u32)(0x9e0800u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009e0823 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0826 fld dword ptr [ebx + 0xcbc8] */ { const u32 m_ = (u32)(ebx + 0xcbc8u); FPUSH((double)MF32(m_)); }
  /* 009e082c fsub dword ptr [0x9e0804] */ { const u32 m_ = (u32)(0x9e0804u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 009e0832 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0836 mov esi, esp */ { esi = (u32)(esp); }
  /* 009e0838 mov ecx, dword ptr [0x9c081c] */ { const u32 m_ = (u32)(0x9c081cu); ecx = (u32)(M32(m_)); }
  /* 009e083e call 0x9e085d */ esp -= 4; M32(esp) = 0x9e0843u; SAVEALL; F_009e085d(c); ABI_CHECK(0x9e085du, 0x9e083eu); RETCHK(0x9e0843u, 0x9e083eu); LOADALL;
  /* 009e0843 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0846 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e085d(CPU *c) {
  NATIVE_HOOK(0x9e085du) REGS; LOADALL;
L_009e085d:;
  /* 009e085d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e085f je 0x9e088c */ if (ZF_) goto L_009e088c;
  /* 009e0861 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0864 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009e0866 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0867 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 009e086b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009e086c call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e086fu; SAVEALL; call_ind(c, t_); RETCHK(0x9e086fu, 0x9e086cu); LOADALL; }
  /* 009e086f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0870 fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 009e0873 fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0875 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0878 fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 009e087c fadd dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e087f fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0883 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009e0885 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 009e0886 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e0889u; SAVEALL; call_ind(c, t_); RETCHK(0x9e0889u, 0x9e0886u); LOADALL; }
  /* 009e0889 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_009e088c:;
  /* 009e088c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0910(CPU *c) {
  NATIVE_HOOK(0x9e0910u) REGS; LOADALL;
L_009e0910:;
  /* 009e0910 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009e0911 mov eax, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); eax = (u32)(M32(m_)); }
  /* 009e0917 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 009e0919 cmp eax, 0x4e2f */ { u32 a_ = eax, b_ = 0x4e2fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e091e jne 0x9e0925 */ if (!ZF_) goto L_009e0925;
  /* 009e0920 mov ebx, 0x4e30 */ { ebx = (u32)(0x4e30u); }
L_009e0925:;
  /* 009e0925 cmp eax, 0x4e31 */ { u32 a_ = eax, b_ = 0x4e31u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e092a jne 0x9e0931 */ if (!ZF_) goto L_009e0931;
  /* 009e092c mov ebx, 0x4e32 */ { ebx = (u32)(0x4e32u); }
L_009e0931:;
  /* 009e0931 mov esi, 0x9c0900 */ { esi = (u32)(0x9c0900u); }
  /* 009e0936 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_009e093b:;
  /* 009e093b cmp dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e093d je 0x9e096f */ if (ZF_) goto L_009e096f;
  /* 009e093f add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009e0942 loop 0x9e093b */ if (--ecx != 0) goto L_009e093b;
  /* 009e0944 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0946 je 0x9e0a5c */ if (ZF_) goto L_009e0a5c;
  /* 009e094c mov esi, 0x9c0900 */ { esi = (u32)(0x9c0900u); }
  /* 009e0951 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_009e0956:;
  /* 009e0956 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0959 je 0x9e0965 */ if (ZF_) goto L_009e0965;
  /* 009e095b add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009e095e loop 0x9e0956 */ if (--ecx != 0) goto L_009e0956;
  /* 009e0960 jmp 0x9e0a5c */ goto L_009e0a5c;
L_009e0965:;
  /* 009e0965 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 009e0967 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0969 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e096c mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e096f:;
  /* 009e096f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0972 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0974 je 0x9e0999 */ if (ZF_) goto L_009e0999;
  /* 009e0976 cmp dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0979 je 0x9e09de */ if (ZF_) goto L_009e09de;
  /* 009e097b call 0x54ada0 */ esp -= 4; M32(esp) = 0x9e0980u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x9e097bu); RETCHK(0x9e0980u, 0x9e097bu); LOADALL;
  /* 009e0980 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0983 mov dword ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 009e098a mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 009e0991 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0993 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e0996 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e0999:;
  /* 009e0999 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e099b je 0x9e0a52 */ if (ZF_) goto L_009e0a52;
  /* 009e09a1 mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 009e09a7 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 009e09aa mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 009e09ad mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e09b0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009e09b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e09b3 call 0x5abd50 */ esp -= 4; M32(esp) = 0x9e09b8u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x9e09b3u); RETCHK(0x9e09b8u, 0x9e09b3u); LOADALL;
  /* 009e09b8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e09bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e09bc push dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e09c2 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 009e09c4 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x9e09c9u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x9e09c4u); RETCHK(0x9e09c9u, 0x9e09c4u); LOADALL;
  /* 009e09c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e09cb je 0x9e0a52 */ if (ZF_) goto L_009e0a52;
  /* 009e09d1 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e09d4 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 009e09d7 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_009e09de:;
  /* 009e09de mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e09e1 mov ebx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ebx = (u32)(M32(m_)); }
  /* 009e09e4 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 009e09e7 mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 009e09ed mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 009e09f0 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 009e09f3 push dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e09f6 call 0x5abd50 */ esp -= 4; M32(esp) = 0x9e09fbu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x9e09f6u); RETCHK(0x9e09fbu, 0x9e09f6u); LOADALL;
  /* 009e09fb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e09fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009e09ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009e0a00 mov esi, eax */ { esi = (u32)(eax); }
  /* 009e0a02 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 009e0a04 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 009e0a09 cld */ c->df = 0;
  /* 009e0a0a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 009e0a0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009e0a0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009e0a0e sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a11 mov eax, esp */ { eax = (u32)(esp); }
  /* 009e0a13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009e0a14 push 0x9e0900 */ { u32 v_ = 0x9e0900u; esp -= 4; M32(esp) = v_; }
  /* 009e0a19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0a1a call 0x5aac00 */ esp -= 4; M32(esp) = 0x9e0a1fu; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x9e0a1au); RETCHK(0x9e0a1fu, 0x9e0a1au); LOADALL;
  /* 009e0a1f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a22 fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 009e0a25 fadd dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a28 fstp dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a2b fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 009e0a2f fadd dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a32 fstp dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a35 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009e0a39 fadd dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a3c fstp dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a3f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a42 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0a45 push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e0a48 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x9e0a4du; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x9e0a48u); RETCHK(0x9e0a4du, 0x9e0a48u); LOADALL;
  /* 009e0a4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a50 jmp 0x9e0a5c */ goto L_009e0a5c;
L_009e0a52:;
  /* 009e0a52 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0a54 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 009e0a56 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e0a59 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e0a5c:;
  /* 009e0a5c popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e0a5d mov esi, dword ptr [edi + 0x58c] */ { const u32 m_ = (u32)(edi + 0x58cu); esi = (u32)(M32(m_)); }
  /* 009e0a63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e093b(CPU *c) {
  NATIVE_HOOK(0x9e093bu) REGS; LOADALL;
L_009e093b:;
  /* 009e093b cmp dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e093d je 0x9e096f */ if (ZF_) goto L_009e096f;
  /* 009e093f add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009e0942 loop 0x9e093b */ if (--ecx != 0) goto L_009e093b;
  /* 009e0944 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0946 je 0x9e0a5c */ if (ZF_) goto L_009e0a5c;
  /* 009e094c mov esi, 0x9c0900 */ { esi = (u32)(0x9c0900u); }
  /* 009e0951 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_009e0956:;
  /* 009e0956 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0959 je 0x9e0965 */ if (ZF_) goto L_009e0965;
  /* 009e095b add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009e095e loop 0x9e0956 */ if (--ecx != 0) goto L_009e0956;
  /* 009e0960 jmp 0x9e0a5c */ goto L_009e0a5c;
L_009e0965:;
  /* 009e0965 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 009e0967 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0969 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e096c mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e096f:;
  /* 009e096f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0972 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0974 je 0x9e0999 */ if (ZF_) goto L_009e0999;
  /* 009e0976 cmp dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0979 je 0x9e09de */ if (ZF_) goto L_009e09de;
  /* 009e097b call 0x54ada0 */ esp -= 4; M32(esp) = 0x9e0980u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x9e097bu); RETCHK(0x9e0980u, 0x9e097bu); LOADALL;
  /* 009e0980 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0983 mov dword ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 009e098a mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 009e0991 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0993 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e0996 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e0999:;
  /* 009e0999 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e099b je 0x9e0a52 */ if (ZF_) goto L_009e0a52;
  /* 009e09a1 mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 009e09a7 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 009e09aa mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 009e09ad mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e09b0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009e09b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e09b3 call 0x5abd50 */ esp -= 4; M32(esp) = 0x9e09b8u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x9e09b3u); RETCHK(0x9e09b8u, 0x9e09b3u); LOADALL;
  /* 009e09b8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e09bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e09bc push dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e09c2 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 009e09c4 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x9e09c9u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x9e09c4u); RETCHK(0x9e09c9u, 0x9e09c4u); LOADALL;
  /* 009e09c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e09cb je 0x9e0a52 */ if (ZF_) goto L_009e0a52;
  /* 009e09d1 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e09d4 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 009e09d7 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_009e09de:;
  /* 009e09de mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e09e1 mov ebx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ebx = (u32)(M32(m_)); }
  /* 009e09e4 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 009e09e7 mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 009e09ed mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 009e09f0 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 009e09f3 push dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e09f6 call 0x5abd50 */ esp -= 4; M32(esp) = 0x9e09fbu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x9e09f6u); RETCHK(0x9e09fbu, 0x9e09f6u); LOADALL;
  /* 009e09fb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e09fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009e09ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009e0a00 mov esi, eax */ { esi = (u32)(eax); }
  /* 009e0a02 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 009e0a04 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 009e0a09 cld */ c->df = 0;
  /* 009e0a0a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 009e0a0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009e0a0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009e0a0e sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a11 mov eax, esp */ { eax = (u32)(esp); }
  /* 009e0a13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009e0a14 push 0x9e0900 */ { u32 v_ = 0x9e0900u; esp -= 4; M32(esp) = v_; }
  /* 009e0a19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0a1a call 0x5aac00 */ esp -= 4; M32(esp) = 0x9e0a1fu; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x9e0a1au); RETCHK(0x9e0a1fu, 0x9e0a1au); LOADALL;
  /* 009e0a1f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a22 fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 009e0a25 fadd dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a28 fstp dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a2b fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 009e0a2f fadd dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a32 fstp dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a35 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009e0a39 fadd dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a3c fstp dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a3f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a42 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0a45 push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e0a48 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x9e0a4du; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x9e0a48u); RETCHK(0x9e0a4du, 0x9e0a48u); LOADALL;
  /* 009e0a4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a50 jmp 0x9e0a5c */ goto L_009e0a5c;
L_009e0a52:;
  /* 009e0a52 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0a54 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 009e0a56 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e0a59 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e0a5c:;
  /* 009e0a5c popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e0a5d mov esi, dword ptr [edi + 0x58c] */ { const u32 m_ = (u32)(edi + 0x58cu); esi = (u32)(M32(m_)); }
  /* 009e0a63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0956(CPU *c) {
  NATIVE_HOOK(0x9e0956u) REGS; LOADALL;
L_009e0956:;
  /* 009e0956 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0959 je 0x9e0965 */ if (ZF_) goto L_009e0965;
  /* 009e095b add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 009e095e loop 0x9e0956 */ if (--ecx != 0) goto L_009e0956;
  /* 009e0960 jmp 0x9e0a5c */ goto L_009e0a5c;
L_009e0965:;
  /* 009e0965 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 009e0967 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0969 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e096c mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 009e096f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0972 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0974 je 0x9e0999 */ if (ZF_) goto L_009e0999;
  /* 009e0976 cmp dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0979 je 0x9e09de */ if (ZF_) goto L_009e09de;
  /* 009e097b call 0x54ada0 */ esp -= 4; M32(esp) = 0x9e0980u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x9e097bu); RETCHK(0x9e0980u, 0x9e097bu); LOADALL;
  /* 009e0980 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0983 mov dword ptr [eax + 0x34], 0 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 009e098a mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 009e0991 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0993 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e0996 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e0999:;
  /* 009e0999 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e099b je 0x9e0a52 */ if (ZF_) goto L_009e0a52;
  /* 009e09a1 mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 009e09a7 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 009e09aa mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 009e09ad mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e09b0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009e09b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e09b3 call 0x5abd50 */ esp -= 4; M32(esp) = 0x9e09b8u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x9e09b3u); RETCHK(0x9e09b8u, 0x9e09b3u); LOADALL;
  /* 009e09b8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e09bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e09bc push dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e09c2 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 009e09c4 call 0x4fbd30 */ esp -= 4; M32(esp) = 0x9e09c9u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x9e09c4u); RETCHK(0x9e09c9u, 0x9e09c4u); LOADALL;
  /* 009e09c9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e09cb je 0x9e0a52 */ if (ZF_) goto L_009e0a52;
  /* 009e09d1 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e09d4 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 009e09d7 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_009e09de:;
  /* 009e09de mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e09e1 mov ebx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ebx = (u32)(M32(m_)); }
  /* 009e09e4 add ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 009e09e7 mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 009e09ed mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 009e09f0 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 009e09f3 push dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e09f6 call 0x5abd50 */ esp -= 4; M32(esp) = 0x9e09fbu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x9e09f6u); RETCHK(0x9e09fbu, 0x9e09f6u); LOADALL;
  /* 009e09fb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e09fe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009e09ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009e0a00 mov esi, eax */ { esi = (u32)(eax); }
  /* 009e0a02 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 009e0a04 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 009e0a09 cld */ c->df = 0;
  /* 009e0a0a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 009e0a0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009e0a0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009e0a0e sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a11 mov eax, esp */ { eax = (u32)(esp); }
  /* 009e0a13 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009e0a14 push 0x9e0900 */ { u32 v_ = 0x9e0900u; esp -= 4; M32(esp) = v_; }
  /* 009e0a19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0a1a call 0x5aac00 */ esp -= 4; M32(esp) = 0x9e0a1fu; SAVEALL; F_005aac00(c); ABI_CHECK(0x5aac00u, 0x9e0a1au); RETCHK(0x9e0a1fu, 0x9e0a1au); LOADALL;
  /* 009e0a1f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a22 fld dword ptr [esp] */ { const u32 m_ = (u32)(esp); FPUSH((double)MF32(m_)); }
  /* 009e0a25 fadd dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a28 fstp dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a2b fld dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); FPUSH((double)MF32(m_)); }
  /* 009e0a2f fadd dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a32 fstp dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a35 fld dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009e0a39 fadd dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0a3c fstp dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0a3f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a42 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 009e0a45 push dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e0a48 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x9e0a4du; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x9e0a48u); RETCHK(0x9e0a4du, 0x9e0a48u); LOADALL;
  /* 009e0a4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0a50 jmp 0x9e0a5c */ goto L_009e0a5c;
L_009e0a52:;
  /* 009e0a52 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0a54 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 009e0a56 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 009e0a59 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
L_009e0a5c:;
  /* 009e0a5c popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e0a5d mov esi, dword ptr [edi + 0x58c] */ { const u32 m_ = (u32)(edi + 0x58cu); esi = (u32)(M32(m_)); }
  /* 009e0a63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0b00(CPU *c) {
  NATIVE_HOOK(0x9e0b00u) REGS; LOADALL;
L_009e0b00:;
  /* 009e0b00 mov edx, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 009e0b06 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0b07 call 0x9e0b28 */ esp -= 4; M32(esp) = 0x9e0b0cu; SAVEALL; F_009e0b28(c); ABI_CHECK(0x9e0b28u, 0x9e0b07u); RETCHK(0x9e0b0cu, 0x9e0b07u); LOADALL;
  /* 009e0b0c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0b0e je 0x9e0b12 */ if (ZF_) goto L_009e0b12;
  /* 009e0b10 mov edx, eax */ { edx = (u32)(eax); }
L_009e0b12:;
  /* 009e0b12 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009e0b13 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0b14(CPU *c) {
  NATIVE_HOOK(0x9e0b14u) REGS; LOADALL;
L_009e0b14:;
  /* 009e0b14 mov ecx, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); ecx = (u32)(M32(m_)); }
  /* 009e0b1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0b1b call 0x9e0b28 */ esp -= 4; M32(esp) = 0x9e0b20u; SAVEALL; F_009e0b28(c); ABI_CHECK(0x9e0b28u, 0x9e0b1bu); RETCHK(0x9e0b20u, 0x9e0b1bu); LOADALL;
  /* 009e0b20 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0b22 je 0x9e0b26 */ if (ZF_) goto L_009e0b26;
  /* 009e0b24 mov ecx, eax */ { ecx = (u32)(eax); }
L_009e0b26:;
  /* 009e0b26 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009e0b27 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0b28(CPU *c) {
  NATIVE_HOOK(0x9e0b28u) REGS; LOADALL;
L_009e0b28:;
  /* 009e0b28 mov eax, dword ptr [0x9c0818] */ { const u32 m_ = (u32)(0x9c0818u); eax = (u32)(M32(m_)); }
  /* 009e0b2d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0b2f je 0x9e0ba9 */ if (ZF_) goto L_009e0ba9;
  /* 009e0b31 mov eax, dword ptr [eax + 0xbe48] */ { const u32 m_ = (u32)(eax + 0xbe48u); eax = (u32)(M32(m_)); }
  /* 009e0b37 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0b39 je 0x9e0ba9 */ if (ZF_) goto L_009e0ba9;
  /* 009e0b3b add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009e0b3e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b40 jne 0x9e0ba9 */ if (!ZF_) goto L_009e0ba9;
  /* 009e0b42 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0b43 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009e0b45 call 0x9e0700 */ esp -= 4; M32(esp) = 0x9e0b4au; SAVEALL; F_009e0700(c); ABI_CHECK(0x9e0700u, 0x9e0b45u); RETCHK(0x9e0b4au, 0x9e0b45u); LOADALL;
  /* 009e0b4a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0b4b jne 0x9e0ba9 */ if (!ZF_) goto L_009e0ba9;
  /* 009e0b4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0b4e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_009e0b50:;
  /* 009e0b50 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b53 jae 0x9e0ba5 */ if (!CF_) goto L_009e0ba5;
  /* 009e0b55 cmp dword ptr [ecx*8 + 0x9c0860], -1 */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0860u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b5d je 0x9e0b62 */ if (ZF_) goto L_009e0b62;
  /* 009e0b5f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009e0b60 jmp 0x9e0b50 */ goto L_009e0b50;
L_009e0b62:;
  /* 009e0b62 mov ecx, dword ptr [ecx*8 + 0x9c0864] */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0864u); ecx = (u32)(M32(m_)); }
  /* 009e0b69 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b6c jne 0x9e0b75 */ if (!ZF_) goto L_009e0b75;
  /* 009e0b6e mov eax, 0x4e2c */ { eax = (u32)(0x4e2cu); }
  /* 009e0b73 jmp 0x9e0ba7 */ goto L_009e0ba7;
L_009e0b75:;
  /* 009e0b75 cmp ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b78 jne 0x9e0b81 */ if (!ZF_) goto L_009e0b81;
  /* 009e0b7a mov eax, 0x4e2d */ { eax = (u32)(0x4e2du); }
  /* 009e0b7f jmp 0x9e0ba7 */ goto L_009e0ba7;
L_009e0b81:;
  /* 009e0b81 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b84 jne 0x9e0b8d */ if (!ZF_) goto L_009e0b8d;
  /* 009e0b86 mov eax, 0x4e2e */ { eax = (u32)(0x4e2eu); }
  /* 009e0b8b jmp 0x9e0ba7 */ goto L_009e0ba7;
L_009e0b8d:;
  /* 009e0b8d cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b90 jne 0x9e0b99 */ if (!ZF_) goto L_009e0b99;
  /* 009e0b92 mov eax, 0x4e2f */ { eax = (u32)(0x4e2fu); }
  /* 009e0b97 jmp 0x9e0ba7 */ goto L_009e0ba7;
L_009e0b99:;
  /* 009e0b99 cmp ecx, 5 */ { u32 a_ = ecx, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0b9c jne 0x9e0ba5 */ if (!ZF_) goto L_009e0ba5;
  /* 009e0b9e mov eax, 0x4e31 */ { eax = (u32)(0x4e31u); }
  /* 009e0ba3 jmp 0x9e0ba7 */ goto L_009e0ba7;
L_009e0ba5:;
  /* 009e0ba5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_009e0ba7:;
  /* 009e0ba7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0ba8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0ba9:;
  /* 009e0ba9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0bab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0c10(CPU *c) {
  NATIVE_HOOK(0x9e0c10u) REGS; LOADALL;
L_009e0c10:;
  /* 009e0c10 mov ecx, dword ptr [ebx + 0xd1ec] */ { const u32 m_ = (u32)(ebx + 0xd1ecu); ecx = (u32)(M32(m_)); }
  /* 009e0c16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0c17 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0c18 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009e0c19 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009e0c1b call 0x4019a0 */ esp -= 4; M32(esp) = 0x9e0c20u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x9e0c1bu); RETCHK(0x9e0c20u, 0x9e0c1bu); LOADALL;
  /* 009e0c20 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0c23 test byte ptr [eax + 0xb30], 1 */ { const u32 m_ = (u32)(eax + 0xb30u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009e0c2a pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 009e0c2b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0c2c pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009e0c2d je 0x9e0c3a */ if (ZF_) goto L_009e0c3a;
  /* 009e0c2f mov dword ptr [0x9c08c4], 0 */ { const u32 m_ = (u32)(0x9c08c4u); M32(m_) = (u32)(0x0u); }
  /* 009e0c39 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0c3a:;
  /* 009e0c3a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009e0c3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0c3c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0c3d lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 009e0c40 call 0x9e0e00 */ esp -= 4; M32(esp) = 0x9e0c45u; SAVEALL; F_009e0e00(c); ABI_CHECK(0x9e0e00u, 0x9e0c40u); RETCHK(0x9e0c45u, 0x9e0c40u); LOADALL;
  /* 009e0c45 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0c46 mov dword ptr [0x9c08c8], eax */ { const u32 m_ = (u32)(0x9c08c8u); M32(m_) = (u32)(eax); }
  /* 009e0c4b pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009e0c4c fld dword ptr [0x9c08c8] */ { const u32 m_ = (u32)(0x9c08c8u); FPUSH((double)MF32(m_)); }
  /* 009e0c52 fistp dword ptr [0x9c08c8] */ { const u32 m_ = (u32)(0x9c08c8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009e0c58 mov edx, dword ptr [0x9c08c8] */ { const u32 m_ = (u32)(0x9c08c8u); edx = (u32)(M32(m_)); }
  /* 009e0c5e cmp edx, dword ptr [ecx + 0x1cc] */ { const u32 m_ = (u32)(ecx + 0x1ccu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0c64 jle 0x9e0c6c */ if ((ZF_|LT_)) goto L_009e0c6c;
  /* 009e0c66 mov dword ptr [ecx + 0x1cc], edx */ { const u32 m_ = (u32)(ecx + 0x1ccu); M32(m_) = (u32)(edx); }
L_009e0c6c:;
  /* 009e0c6c mov dword ptr [0x9c08c8], eax */ { const u32 m_ = (u32)(0x9c08c8u); M32(m_) = (u32)(eax); }
  /* 009e0c71 cmp ebx, dword ptr [0x9c08c4] */ { const u32 m_ = (u32)(0x9c08c4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0c77 je 0x9e0c8b */ if (ZF_) goto L_009e0c8b;
  /* 009e0c79 mov dword ptr [0x9c08c4], ebx */ { const u32 m_ = (u32)(0x9c08c4u); M32(m_) = (u32)(ebx); }
  /* 009e0c7f fild dword ptr [0x9c08c8] */ { const u32 m_ = (u32)(0x9c08c8u); FPUSH((double)(s32)M32(m_)); }
  /* 009e0c85 fstp dword ptr [0x9c08c0] */ { const u32 m_ = (u32)(0x9c08c0u); MF32(m_) = (float)ST(0); FPOP(); }
L_009e0c8b:;
  /* 009e0c8b fild dword ptr [0x9c08c8] */ { const u32 m_ = (u32)(0x9c08c8u); FPUSH((double)(s32)M32(m_)); }
  /* 009e0c91 fld dword ptr [0x9c08c0] */ { const u32 m_ = (u32)(0x9c08c0u); FPUSH((double)MF32(m_)); }
  /* 009e0c97 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 009e0c9a fmul dword ptr [0x9e0c00] */ { const u32 m_ = (u32)(0x9e0c00u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 009e0ca0 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 009e0ca2 fcomi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); }
  /* 009e0ca4 jbe 0x9e0caa */ if ((CF_|ZF_)) goto L_009e0caa;
  /* 009e0ca6 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 009e0ca8 jmp 0x9e0cac */ goto L_009e0cac;
L_009e0caa:;
  /* 009e0caa fstp st(0) */ ST(0) = ST(0); FPOP();
L_009e0cac:;
  /* 009e0cac fild dword ptr [ecx + 0x1cc] */ { const u32 m_ = (u32)(ecx + 0x1ccu); FPUSH((double)(s32)M32(m_)); }
  /* 009e0cb2 fcomi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); }
  /* 009e0cb4 jae 0x9e0cba */ if (!CF_) goto L_009e0cba;
  /* 009e0cb6 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 009e0cb8 jmp 0x9e0cbc */ goto L_009e0cbc;
L_009e0cba:;
  /* 009e0cba fstp st(0) */ ST(0) = ST(0); FPOP();
L_009e0cbc:;
  /* 009e0cbc fst dword ptr [0x9c08c0] */ { const u32 m_ = (u32)(0x9c08c0u); MF32(m_) = (float)ST(0); }
  /* 009e0cc2 fistp dword ptr [0x9c08c8] */ { const u32 m_ = (u32)(0x9c08c8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009e0cc8 mov eax, dword ptr [0x9c08c8] */ { const u32 m_ = (u32)(0x9c08c8u); eax = (u32)(M32(m_)); }
  /* 009e0ccd pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 009e0cce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0d40(CPU *c) {
  NATIVE_HOOK(0x9e0d40u) REGS; LOADALL;
  goto L_009e0d40;
L_009c5650:;
  /* 009c5650 movsx edx, word ptr [eax + 0xb60] */ { const u32 m_ = (u32)(eax + 0xb60u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 009c5657 cmp edx, 0x64 */ { u32 a_ = edx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c565a jl 0x9c5699 */ if (LT_) goto L_009c5699;
  /* 009c565c push 0x9c562d */ { u32 v_ = 0x9c562du; esp -= 4; M32(esp) = v_; }
  /* 009c5661 cmp edx, 0xc8 */ { u32 a_ = edx, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5667 jl 0x9c567f */ if (LT_) goto L_009c567f;
  /* 009c5669 mov dword ptr [esp], 0x9c5600 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x9c5600u); }
  /* 009c5670 cmp edx, 0x112 */ { u32 a_ = edx, b_ = 0x112u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c5676 jl 0x9c567f */ if (LT_) goto L_009c567f;
  /* 009c5678 mov dword ptr [esp], 0x9c5617 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x9c5617u); }
L_009c567f:;
  /* 009c567f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c5680 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 009c5682 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c5686 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9c568bu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9c5686u); RETCHK(0x9c568bu, 0x9c5686u); LOADALL;
  /* 009c568b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009c568d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009c568e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c5691 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009c5693 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 009c5695 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c5698u; SAVEALL; call_ind(c, t_); RETCHK(0x9c5698u, 0x9c5695u); LOADALL; }
  /* 009c5698 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c5699:;
  /* 009c5699 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009c569b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c569d call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c56a0u; SAVEALL; call_ind(c, t_); RETCHK(0x9c56a0u, 0x9c569du); LOADALL; }
  /* 009c56a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0d40:;
  /* 009e0d40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0d41 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0d42 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009e0d43 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 009e0d45 mov edi, 0x20d797c0 */ { edi = (u32)(0x20d797c0u); }
  /* 009e0d4a call 0x463dd0 */ esp -= 4; M32(esp) = 0x9e0d4fu; SAVEALL; F_00463dd0(c); ABI_CHECK(0x463dd0u, 0x9e0d4au); RETCHK(0x9e0d4fu, 0x9e0d4au); LOADALL;
  /* 009e0d4f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009e0d51 jne 0x9e0d61 */ if (!ZF_) goto L_009e0d61;
  /* 009e0d53 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 009e0d57 mov edi, 0x1fa66ac0 */ { edi = (u32)(0x1fa66ac0u); }
  /* 009e0d5c call 0x463dd0 */ esp -= 4; M32(esp) = 0x9e0d61u; SAVEALL; F_00463dd0(c); ABI_CHECK(0x463dd0u, 0x9e0d5cu); RETCHK(0x9e0d61u, 0x9e0d5cu); LOADALL;
L_009e0d61:;
  /* 009e0d61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009e0d62 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0d63 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009e0d65 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009e0d66 je 0x9c5650 */ if (ZF_) goto L_009c5650;
  /* 009e0d6c movsx edx, word ptr [eax + 0xb60] */ { const u32 m_ = (u32)(eax + 0xb60u); edx = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 009e0d73 push 0x9e0d00 */ { u32 v_ = 0x9e0d00u; esp -= 4; M32(esp) = v_; }
  /* 009e0d78 cmp edx, 0x64 */ { u32 a_ = edx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0d7b jl 0x9e0da2 */ if (LT_) goto L_009e0da2;
  /* 009e0d7d mov dword ptr [esp], 0x9e0d30 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x9e0d30u); }
  /* 009e0d84 cmp edx, 0xc8 */ { u32 a_ = edx, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0d8a jl 0x9e0da2 */ if (LT_) goto L_009e0da2;
  /* 009e0d8c mov dword ptr [esp], 0x9e0d10 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x9e0d10u); }
  /* 009e0d93 cmp edx, 0x112 */ { u32 a_ = edx, b_ = 0x112u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0d99 jl 0x9e0da2 */ if (LT_) goto L_009e0da2;
  /* 009e0d9b mov dword ptr [esp], 0x9e0d20 */ { const u32 m_ = (u32)(esp); M32(m_) = (u32)(0x9e0d20u); }
L_009e0da2:;
  /* 009e0da2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009e0da3 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 009e0da5 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009e0da9 call 0x50dc70 */ esp -= 4; M32(esp) = 0x9e0daeu; SAVEALL; F_0050dc70(c); ABI_CHECK(0x50dc70u, 0x9e0da9u); RETCHK(0x9e0daeu, 0x9e0da9u); LOADALL;
  /* 009e0dae mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009e0db0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009e0db1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0db4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 009e0db6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 009e0db8 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e0dbbu; SAVEALL; call_ind(c, t_); RETCHK(0x9e0dbbu, 0x9e0db8u); LOADALL; }
  /* 009e0dbb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0e00(CPU *c) {
  NATIVE_HOOK(0x9e0e00u) REGS; LOADALL;
L_009e0e00:;
  /* 009e0e00 call 0x9e0e2d */ esp -= 4; M32(esp) = 0x9e0e05u; SAVEALL; F_009e0e2d(c); ABI_CHECK(0x9e0e2du, 0x9e0e00u); RETCHK(0x9e0e05u, 0x9e0e00u); LOADALL;
  /* 009e0e05 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 009e0e08 mov dword ptr [0x9c08d0], eax */ { const u32 m_ = (u32)(0x9c08d0u); M32(m_) = (u32)(eax); }
  /* 009e0e0d fild dword ptr [0x9c08d0] */ { const u32 m_ = (u32)(0x9c08d0u); FPUSH((double)(s32)M32(m_)); }
  /* 009e0e13 fld dword ptr [ecx + 0x500] */ { const u32 m_ = (u32)(ecx + 0x500u); FPUSH((double)MF32(m_)); }
  /* 009e0e19 fcomi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); }
  /* 009e0e1b jae 0x9e0e1f */ if (!CF_) goto L_009e0e1f;
  /* 009e0e1d fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
L_009e0e1f:;
  /* 009e0e1f fstp dword ptr [0x9c08d0] */ { const u32 m_ = (u32)(0x9c08d0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0e25 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 009e0e27 mov eax, dword ptr [0x9c08d0] */ { const u32 m_ = (u32)(0x9c08d0u); eax = (u32)(M32(m_)); }
  /* 009e0e2c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0e2d(CPU *c) {
  NATIVE_HOOK(0x9e0e2du) REGS; LOADALL;
L_009e0e2d:;
  /* 009e0e2d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0e2e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_009e0e30:;
  /* 009e0e30 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0e33 jae 0x9e0e4b */ if (!CF_) goto L_009e0e4b;
  /* 009e0e35 cmp dword ptr [ecx*8 + 0x9c0860], -2 */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0860u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0e3d je 0x9e0e42 */ if (ZF_) goto L_009e0e42;
  /* 009e0e3f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009e0e40 jmp 0x9e0e30 */ goto L_009e0e30;
L_009e0e42:;
  /* 009e0e42 mov eax, dword ptr [ecx*8 + 0x9c0864] */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0864u); eax = (u32)(M32(m_)); }
  /* 009e0e49 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0e4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0e4b:;
  /* 009e0e4b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0e4d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0e4e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0e4f(CPU *c) {
  NATIVE_HOOK(0x9e0e4fu) REGS; LOADALL;
  goto L_009e0e4f;
L_009e0e2d:;
  /* 009e0e2d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0e2e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_009e0e30:;
  /* 009e0e30 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0e33 jae 0x9e0e4b */ if (!CF_) goto L_009e0e4b;
  /* 009e0e35 cmp dword ptr [ecx*8 + 0x9c0860], -2 */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0860u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0e3d je 0x9e0e42 */ if (ZF_) goto L_009e0e42;
  /* 009e0e3f inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009e0e40 jmp 0x9e0e30 */ goto L_009e0e30;
L_009e0e42:;
  /* 009e0e42 mov eax, dword ptr [ecx*8 + 0x9c0864] */ { const u32 m_ = (u32)(ecx * 8u + 0x9c0864u); eax = (u32)(M32(m_)); }
  /* 009e0e49 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0e4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0e4b:;
  /* 009e0e4b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0e4d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0e4e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0e4f:;
  /* 009e0e4f mov eax, dword ptr [0x9c0818] */ { const u32 m_ = (u32)(0x9c0818u); eax = (u32)(M32(m_)); }
  /* 009e0e54 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0e56 je 0x9e0e81 */ if (ZF_) goto L_009e0e81;
  /* 009e0e58 mov eax, dword ptr [eax + 0xbe48] */ { const u32 m_ = (u32)(eax + 0xbe48u); eax = (u32)(M32(m_)); }
  /* 009e0e5e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0e60 je 0x9e0e81 */ if (ZF_) goto L_009e0e81;
  /* 009e0e62 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 009e0e65 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0e67 jne 0x9e0e81 */ if (!ZF_) goto L_009e0e81;
  /* 009e0e69 cmp dword ptr [ecx + 0xc0], 0x125bb500 */ { const u32 m_ = (u32)(ecx + 0xc0u); u32 a_ = M32(m_), b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0e73 je 0x9e0e2d */ if (ZF_) goto L_009e0e2d;
  /* 009e0e75 cmp dword ptr [ecx + 0xfc], 0x125bb500 */ { const u32 m_ = (u32)(ecx + 0xfcu); u32 a_ = M32(m_), b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0e7f je 0x9e0e2d */ if (ZF_) goto L_009e0e2d;
L_009e0e81:;
  /* 009e0e81 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009e0e83 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0e84(CPU *c) {
  NATIVE_HOOK(0x9e0e84u) REGS; LOADALL;
L_009e0e84:;
  /* 009e0e84 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009e0e85 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 009e0e87 call 0x9e0e4f */ esp -= 4; M32(esp) = 0x9e0e8cu; SAVEALL; F_009e0e4f(c); ABI_CHECK(0x9e0e4fu, 0x9e0e87u); RETCHK(0x9e0e8cu, 0x9e0e87u); LOADALL;
  /* 009e0e8c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009e0e8d movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 009e0e90 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0e92 je 0x9e0eab */ if (ZF_) goto L_009e0eab;
  /* 009e0e94 mov dword ptr [0x9c08d0], eax */ { const u32 m_ = (u32)(0x9c08d0u); M32(m_) = (u32)(eax); }
  /* 009e0e99 fild dword ptr [0x9c08d0] */ { const u32 m_ = (u32)(0x9c08d0u); FPUSH((double)(s32)M32(m_)); }
  /* 009e0e9f fstp dword ptr [0x9c08d0] */ { const u32 m_ = (u32)(0x9c08d0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0ea5 mov eax, dword ptr [0x9c08d0] */ { const u32 m_ = (u32)(0x9c08d0u); eax = (u32)(M32(m_)); }
  /* 009e0eaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009e0eab:;
  /* 009e0eab mov eax, dword ptr [ebx + 0x500] */ { const u32 m_ = (u32)(ebx + 0x500u); eax = (u32)(M32(m_)); }
  /* 009e0eb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009e0f18(CPU *c) {
  NATIVE_HOOK(0x9e0f18u) REGS; LOADALL;
L_009e0f18:;
  /* 009e0f18 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009e0f19 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0f1c push 0x9e0f00 */ { u32 v_ = 0x9e0f00u; esp -= 4; M32(esp) = v_; }
  /* 009e0f21 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 009e0f25 call 0x403060 */ esp -= 4; M32(esp) = 0x9e0f2au; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9e0f25u); RETCHK(0x9e0f2au, 0x9e0f25u); LOADALL;
  /* 009e0f2a lea eax, [esp] */ eax = (u32)((u32)(esp));
  /* 009e0f2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0f2e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009e0f30 call 0x5075d0 */ esp -= 4; M32(esp) = 0x9e0f35u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9e0f30u); RETCHK(0x9e0f35u, 0x9e0f30u); LOADALL;
  /* 009e0f35 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0f37 je 0x9e0fef */ if (ZF_) goto L_009e0fef;
  /* 009e0f3d mov esi, eax */ { esi = (u32)(eax); }
  /* 009e0f3f mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 009e0f42 mov ecx, dword ptr [edi + 0x564] */ { const u32 m_ = (u32)(edi + 0x564u); ecx = (u32)(M32(m_)); }
  /* 009e0f48 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0f4a je 0x9e0f56 */ if (ZF_) goto L_009e0f56;
  /* 009e0f4c cmp byte ptr [ecx + 0x3e], 0 */ { const u32 m_ = (u32)(ecx + 0x3eu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009e0f50 jne 0x9e0fe6 */ if (!ZF_) goto L_009e0fe6;
L_009e0f56:;
  /* 009e0f56 mov eax, 0x6a4 */ { eax = (u32)(0x6a4u); }
  /* 009e0f5b test dword ptr [ebx + 0x90], 0x4000 */ { const u32 m_ = (u32)(ebx + 0x90u); u32 a_ = M32(m_), b_ = 0x4000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0f65 je 0x9e0f6c */ if (ZF_) goto L_009e0f6c;
  /* 009e0f67 mov eax, 0x6a5 */ { eax = (u32)(0x6a5u); }
L_009e0f6c:;
  /* 009e0f6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0f6d push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 009e0f72 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e0f78u; SAVEALL; call_ind(c, t_); RETCHK(0x9e0f78u, 0x9e0f72u); LOADALL; }
  /* 009e0f78 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0f7a je 0x9e0fe6 */ if (ZF_) goto L_009e0fe6;
  /* 009e0f7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009e0f7d lea ecx, [esp + 0x24] */ ecx = (u32)((u32)(esp + 0x24u));
  /* 009e0f81 call 0x403060 */ esp -= 4; M32(esp) = 0x9e0f86u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9e0f81u); RETCHK(0x9e0f86u, 0x9e0f81u); LOADALL;
  /* 009e0f86 lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 009e0f8a call 0x5224b0 */ esp -= 4; M32(esp) = 0x9e0f8fu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x9e0f8au); RETCHK(0x9e0f8fu, 0x9e0f8au); LOADALL;
  /* 009e0f8f mov ecx, dword ptr [edi + 0x450] */ { const u32 m_ = (u32)(edi + 0x450u); ecx = (u32)(M32(m_)); }
  /* 009e0f95 fld dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 009e0f98 fadd dword ptr [0x9e0f0c] */ { const u32 m_ = (u32)(0x9e0f0cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0f9e mov ecx, dword ptr [edi + 0x444] */ { const u32 m_ = (u32)(edi + 0x444u); ecx = (u32)(M32(m_)); }
  /* 009e0fa4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e0fa6 je 0x9e0fb4 */ if (ZF_) goto L_009e0fb4;
  /* 009e0fa8 cmp byte ptr [ecx + 0x3e], 0 */ { const u32 m_ = (u32)(ecx + 0x3eu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009e0fac je 0x9e0fb4 */ if (ZF_) goto L_009e0fb4;
  /* 009e0fae fadd dword ptr [0x9e0f10] */ { const u32 m_ = (u32)(0x9e0f10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_009e0fb4:;
  /* 009e0fb4 fstp dword ptr [0x9c08e0] */ { const u32 m_ = (u32)(0x9c08e0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0fba mov ecx, dword ptr [edi + 0x450] */ { const u32 m_ = (u32)(edi + 0x450u); ecx = (u32)(M32(m_)); }
  /* 009e0fc0 fld dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 009e0fc3 fadd dword ptr [0x9e0f14] */ { const u32 m_ = (u32)(0x9e0f14u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009e0fc9 fstp dword ptr [0x9c08e4] */ { const u32 m_ = (u32)(0x9c08e4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009e0fcf push 0x9c08e0 */ { u32 v_ = 0x9c08e0u; esp -= 4; M32(esp) = v_; }
  /* 009e0fd4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009e0fd6 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 009e0fd8 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e0fdbu; SAVEALL; call_ind(c, t_); RETCHK(0x9e0fdbu, 0x9e0fd8u); LOADALL; }
  /* 009e0fdb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 009e0fdd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009e0fdf mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 009e0fe1 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e0fe4u; SAVEALL; call_ind(c, t_); RETCHK(0x9e0fe4u, 0x9e0fe1u); LOADALL; }
  /* 009e0fe4 jmp 0x9e0fef */ goto L_009e0fef;
L_009e0fe6:;
  /* 009e0fe6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009e0fe8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009e0fea mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 009e0fec call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9e0fefu; SAVEALL; call_ind(c, t_); RETCHK(0x9e0fefu, 0x9e0fecu); LOADALL; }
L_009e0fef:;
  /* 009e0fef add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009e0ff2 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009e0ff3 mov ecx, dword ptr [edi + 0x440] */ { const u32 m_ = (u32)(edi + 0x440u); ecx = (u32)(M32(m_)); }
  /* 009e0ff9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001000(CPU *c) {
  NATIVE_HOOK(0x10001000u) REGS; LOADALL;
L_10001000:;
  /* 10001000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10001001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10001003 mov edx, 0 */ { edx = (u32)(0x0u); }
  /* 10001008 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1000100b mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 10001010 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x10001010u); eax = q_; edx = r_; }
  /* 10001012 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10001015 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 10001017 test eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001019 je 0x1000102e */ if (ZF_) goto L_1000102e;
L_1000101b:;
  /* 1000101b mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 1000101d xor eax, 0xa8b2c5b6 */ { u32 a_ = eax, b_ = 0xa8b2c5b6u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10001022 rol eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ << k_) | (a_ >> (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = r_ & 1u; u32 of_ = ((r_ >> 31) & 1u) ^ (r_ & 1u); u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); eax = (u32)(r_); } }
  /* 10001025 not eax */ { eax = (u32)(~eax & 0xffffffffu); }
  /* 10001027 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 10001029 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1000102c loop 0x1000101b */ if (--ecx != 0) goto L_1000101b;
L_1000102e:;
  /* 1000102e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10001031 add eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10001034 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10001036 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001038 je 0x1000104a */ if (ZF_) goto L_1000104a;
  /* 1000103a mov ecx, eax */ { ecx = (u32)(eax); }
L_1000103c:;
  /* 1000103c mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000103e rol al, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 k_ = n_ % 8u; u32 r_ = k_ ? (((a_ << k_) | (a_ >> (8u - k_))) & 0xffu) : a_; u32 cf_ = r_ & 1u; u32 of_ = ((r_ >> 7) & 1u) ^ (r_ & 1u); u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 10001041 not al */ { eax = (eax & 0xffffff00u) | ((u32)(~(eax & 0xffu) & 0xffu) & 0xffu); }
  /* 10001043 mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10001045 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10001048 loop 0x1000103c */ if (--ecx != 0) goto L_1000103c;
L_1000104a:;
  /* 1000104a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000104b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000101b(CPU *c) {
  NATIVE_HOOK(0x1000101bu) REGS; LOADALL;
L_1000101b:;
  /* 1000101b mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 1000101d xor eax, 0xa8b2c5b6 */ { u32 a_ = eax, b_ = 0xa8b2c5b6u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10001022 rol eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 k_ = n_ % 32u; u32 r_ = k_ ? (((a_ << k_) | (a_ >> (32u - k_))) & 0xffffffffu) : a_; u32 cf_ = r_ & 1u; u32 of_ = ((r_ >> 31) & 1u) ^ (r_ & 1u); u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); eax = (u32)(r_); } }
  /* 10001025 not eax */ { eax = (u32)(~eax & 0xffffffffu); }
  /* 10001027 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 10001029 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 1000102c loop 0x1000101b */ if (--ecx != 0) goto L_1000101b;
  /* 1000102e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 10001031 add eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10001034 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10001036 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001038 je 0x1000104a */ if (ZF_) goto L_1000104a;
  /* 1000103a mov ecx, eax */ { ecx = (u32)(eax); }
L_1000103c:;
  /* 1000103c mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000103e rol al, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 k_ = n_ % 8u; u32 r_ = k_ ? (((a_ << k_) | (a_ >> (8u - k_))) & 0xffu) : a_; u32 cf_ = r_ & 1u; u32 of_ = ((r_ >> 7) & 1u) ^ (r_ & 1u); u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 10001041 not al */ { eax = (eax & 0xffffff00u) | ((u32)(~(eax & 0xffu) & 0xffu) & 0xffu); }
  /* 10001043 mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10001045 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10001048 loop 0x1000103c */ if (--ecx != 0) goto L_1000103c;
L_1000104a:;
  /* 1000104a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000104b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1000103c(CPU *c) {
  NATIVE_HOOK(0x1000103cu) REGS; LOADALL;
L_1000103c:;
  /* 1000103c mov al, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000103e rol al, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (eax & 0xffu); u32 k_ = n_ % 8u; u32 r_ = k_ ? (((a_ << k_) | (a_ >> (8u - k_))) & 0xffu) : a_; u32 cf_ = r_ & 1u; u32 of_ = ((r_ >> 7) & 1u) ^ (r_ & 1u); u32 e_ = (EFLAGS_ & ~0x801u) | cf_ | (of_ << 11); SETRAW(e_); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 10001041 not al */ { eax = (eax & 0xffffff00u) | ((u32)(~(eax & 0xffu) & 0xffu) & 0xffu); }
  /* 10001043 mov byte ptr [edx], al */ { const u32 m_ = (u32)(edx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10001045 add edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10001048 loop 0x1000103c */ if (--ecx != 0) goto L_1000103c;
  /* 1000104a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000104b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001050(CPU *c) {
  NATIVE_HOOK(0x10001050u) REGS; LOADALL;
L_10001050:;
  /* 10001050 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001054 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001055 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 10001057 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001059 jle 0x100010a2 */ if ((ZF_|LT_)) goto L_100010a2;
  /* 1000105b mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1000105f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10001060 mov ebp, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ebp = (u32)(M32(m_)); }
  /* 10001064 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001065 mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 10001069 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000106a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_10001070:;
  /* 10001070 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10001072 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001074 jle 0x1000108d */ if ((ZF_|LT_)) goto L_1000108d;
  /* 10001076 lea ecx, [edi + edx] */ ecx = (u32)((u32)(edi + edx));
  /* 10001079 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10001080:;
  /* 10001080 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001082 cmp bl, byte ptr [eax + ebp] */ { const u32 m_ = (u32)(eax + ebp); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10001085 jne 0x1000108d */ if (!ZF_) goto L_1000108d;
  /* 10001087 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10001088 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10001089 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000108b jl 0x10001080 */ if (LT_) goto L_10001080;
L_1000108d:;
  /* 1000108d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000108f je 0x1000109a */ if (ZF_) goto L_1000109a;
  /* 10001091 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10001095 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10001096 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001098 jl 0x10001070 */ if (LT_) goto L_10001070;
L_1000109a:;
  /* 1000109a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1000109b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000109c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000109d lea eax, [edi + edx] */ eax = (u32)((u32)(edi + edx));
  /* 100010a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100010a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100010a2:;
  /* 100010a2 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 100010a6 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 100010a8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100010a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100010b0(CPU *c) {
  NATIVE_HOOK(0x100010b0u) REGS; LOADALL;
L_100010b0:;
  /* 100010b0 sub esp, 0x88 */ { u32 a_ = esp, b_ = 0x88u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100010b6 mov eax, dword ptr [0x1000a110] */ { const u32 m_ = (u32)(0x1000a110u); eax = (u32)(M32(m_)); }
  /* 100010bb mov dword ptr [esp + 0x84], eax */ { const u32 m_ = (u32)(esp + 0x84u); M32(m_) = (u32)(eax); }
  /* 100010c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100010c3 call dword ptr [0x10008008] */ { const u32 m_ = (u32)(0x10008008u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100010c9u; SAVEALL; call_ind(c, t_); RETCHK(0x100010c9u, 0x100010c3u); LOADALL; }
  /* 100010c9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100010cb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100010cd mov esi, eax */ { esi = (u32)(eax); }
  /* 100010cf lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 100010d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100010d4 push 0x400 */ { u32 v_ = 0x400u; esp -= 4; M32(esp) = v_; }
  /* 100010d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100010da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100010dc push 0x1100 */ { u32 v_ = 0x1100u; esp -= 4; M32(esp) = v_; }
  /* 100010e1 call dword ptr [0x10008004] */ { const u32 m_ = (u32)(0x10008004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100010e7u; SAVEALL; call_ind(c, t_); RETCHK(0x100010e7u, 0x100010e1u); LOADALL; }
  /* 100010e7 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100010eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 100010ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100010ed push 0x100080fc */ { u32 v_ = 0x100080fcu; esp -= 4; M32(esp) = v_; }
  /* 100010f2 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 100010f6 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 100010fb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 100010fc call dword ptr [0x100080d4] */ { const u32 m_ = (u32)(0x100080d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001102u; SAVEALL; call_ind(c, t_); RETCHK(0x10001102u, 0x100010fcu); LOADALL; }
  /* 10001102 mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 10001106 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001109 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000110a call dword ptr [0x10008000] */ { const u32 m_ = (u32)(0x10008000u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001110u; SAVEALL; call_ind(c, t_); RETCHK(0x10001110u, 0x1000110au); LOADALL; }
  /* 10001110 mov ecx, dword ptr [esp + 0x88] */ { const u32 m_ = (u32)(esp + 0x88u); ecx = (u32)(M32(m_)); }
  /* 10001117 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001118 call 0x10006dc5 */ esp -= 4; M32(esp) = 0x1000111du; SAVEALL; F_10006dc5(c); ABI_CHECK(0x10006dc5u, 0x10001118u); RETCHK(0x1000111du, 0x10001118u); LOADALL;
  /* 1000111d add esp, 0x88 */ { u32 a_ = esp, b_ = 0x88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001123 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001130(CPU *c) {
  NATIVE_HOOK(0x10001130u) REGS; LOADALL;
L_10001130:;
  /* 10001130 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001134 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001136 jne 0x1000113d */ if (!ZF_) goto L_1000113d;
  /* 10001138 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 1000113a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1000113d:;
  /* 1000113d mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001141 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001142 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10001144 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10001146 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 10001148 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 1000114a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 1000114c push 0x80000000 */ { u32 v_ = 0x80000000u; esp -= 4; M32(esp) = v_; }
  /* 10001151 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001152 call dword ptr [0x10008018] */ { const u32 m_ = (u32)(0x10008018u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001158u; SAVEALL; call_ind(c, t_); RETCHK(0x10001158u, 0x10001152u); LOADALL; }
  /* 10001158 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 1000115a cmp ebx, -1 */ { u32 a_ = ebx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000115d jne 0x10001165 */ if (!ZF_) goto L_10001165;
  /* 1000115f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10001161 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001162 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10001165:;
  /* 10001165 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001166 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10001168 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001169 call dword ptr [0x10008014] */ { const u32 m_ = (u32)(0x10008014u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000116fu; SAVEALL; call_ind(c, t_); RETCHK(0x1000116fu, 0x10001169u); LOADALL; }
  /* 1000116f mov esi, eax */ { esi = (u32)(eax); }
  /* 10001171 cmp esi, -1 */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001174 jne 0x10001184 */ if (!ZF_) goto L_10001184;
  /* 10001176 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001177 call dword ptr [0x10008010] */ { const u32 m_ = (u32)(0x10008010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1000117du; SAVEALL; call_ind(c, t_); RETCHK(0x1000117du, 0x10001177u); LOADALL; }
  /* 1000117d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000117e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10001180 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001181 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10001184:;
  /* 10001184 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 10001187 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001188 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001189 call 0x10006dd4 */ esp -= 4; M32(esp) = 0x1000118eu; SAVEALL; F_10006dd4(c); ABI_CHECK(0x10006dd4u, 0x10001189u); RETCHK(0x1000118eu, 0x10001189u); LOADALL;
  /* 1000118e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001191 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 10001193 lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10001197 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10001198 mov edi, eax */ { edi = (u32)(eax); }
  /* 1000119a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000119b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000119c mov byte ptr [edi + esi], 0 */ { const u32 m_ = (u32)(edi + esi); M8(m_) = (u8)(0x0u); }
  /* 100011a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100011a1 mov dword ptr [esp + 0x24], 0 */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(0x0u); }
  /* 100011a9 call dword ptr [0x1000800c] */ { const u32 m_ = (u32)(0x1000800cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100011afu; SAVEALL; call_ind(c, t_); RETCHK(0x100011afu, 0x100011a9u); LOADALL; }
  /* 100011af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100011b1 jne 0x100011c2 */ if (!ZF_) goto L_100011c2;
  /* 100011b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100011b4 call dword ptr [0x10008010] */ { const u32 m_ = (u32)(0x10008010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100011bau; SAVEALL; call_ind(c, t_); RETCHK(0x100011bau, 0x100011b4u); LOADALL; }
  /* 100011ba pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100011bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100011bc xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 100011be pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100011bf ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_100011c2:;
  /* 100011c2 cmp esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100011c5 jbe 0x100011f7 */ if ((CF_|ZF_)) goto L_100011f7;
  /* 100011c7 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100011c8 lea ebp, [esi - 5] */ ebp = (u32)((u32)(esi + 0xfffffffbu));
  /* 100011cb cmp ebp, 0x10 */ { u32 a_ = ebp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100011ce jb 0x100011d5 */ if (CF_) goto L_100011d5;
  /* 100011d0 mov ebp, 0x10 */ { ebp = (u32)(0x10u); }
L_100011d5:;
  /* 100011d5 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 100011d7 push 0x1000810c */ { u32 v_ = 0x1000810cu; esp -= 4; M32(esp) = v_; }
  /* 100011dc push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100011dd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100011de call 0x10001050 */ esp -= 4; M32(esp) = 0x100011e3u; SAVEALL; F_10001050(c); ABI_CHECK(0x10001050u, 0x100011deu); RETCHK(0x100011e3u, 0x100011deu); LOADALL;
  /* 100011e3 add ebp, edi */ { u32 a_ = ebp, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 100011e5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100011e8 cmp eax, ebp */ { u32 a_ = eax, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100011ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100011eb jne 0x100011f7 */ if (!ZF_) goto L_100011f7;
  /* 100011ed push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100011ee push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100011ef call 0x10001000 */ esp -= 4; M32(esp) = 0x100011f4u; SAVEALL; F_10001000(c); ABI_CHECK(0x10001000u, 0x100011efu); RETCHK(0x100011f4u, 0x100011efu); LOADALL;
  /* 100011f4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100011f7:;
  /* 100011f7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100011f8 call dword ptr [0x10008010] */ { const u32 m_ = (u32)(0x10008010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x100011feu; SAVEALL; call_ind(c, t_); RETCHK(0x100011feu, 0x100011f8u); LOADALL; }
  /* 100011fe mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10001202 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 10001204 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001205 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001206 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10001208 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001209 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10001210(CPU *c) {
  NATIVE_HOOK(0x10001210u) REGS; LOADALL;
L_10001210:;
  /* 10001210 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001214 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001216 je 0x10001221 */ if (ZF_) goto L_10001221;
  /* 10001218 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001219 call 0x10006dda */ esp -= 4; M32(esp) = 0x1000121eu; SAVEALL; F_10006dda(c); ABI_CHECK(0x10006ddau, 0x10001219u); RETCHK(0x1000121eu, 0x10001219u); LOADALL;
  /* 1000121e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10001221:;
  /* 10001221 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 10001223 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10001230(CPU *c) {
  NATIVE_HOOK(0x10001230u) REGS; LOADALL;
L_10001230:;
  /* 10001230 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001240(CPU *c) {
  NATIVE_HOOK(0x10001240u) REGS; LOADALL;
L_10001240:;
  /* 10001240 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10001242 push 0x100072e9 */ { u32 v_ = 0x100072e9u; esp -= 4; M32(esp) = v_; }
  /* 10001247 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 1000124d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000124e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10001255 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001256 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001257 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001259 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 1000125d mov dword ptr [esi], 0x10008114 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x10008114u); }
  /* 10001263 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 10001266 mov dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 1000126e call dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001274u; SAVEALL; call_ind(c, t_); RETCHK(0x10001274u, 0x1000126eu); LOADALL; }
  /* 10001274 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10001276 mov dword ptr [esp + 0x10], 0xffffffff */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(0xffffffffu); }
  /* 1000127e call dword ptr [0x100080c0] */ { const u32 m_ = (u32)(0x100080c0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001284u; SAVEALL; call_ind(c, t_); RETCHK(0x10001284u, 0x1000127eu); LOADALL; }
  /* 10001284 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10001288 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001289 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10001290 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001293 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100012a0(CPU *c) {
  NATIVE_HOOK(0x100012a0u) REGS; LOADALL;
L_100012a0:;
  /* 100012a0 cmp dword ptr [ecx + 0x24], 0x10 */ { const u32 m_ = (u32)(ecx + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100012a4 jb 0x100012aa */ if (CF_) goto L_100012aa;
  /* 100012a6 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 100012a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100012aa:;
  /* 100012aa lea eax, [ecx + 0x10] */ eax = (u32)((u32)(ecx + 0x10u));
  /* 100012ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100012b0(CPU *c) {
  NATIVE_HOOK(0x100012b0u) REGS; LOADALL;
L_100012b0:;
  /* 100012b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100012b1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100012b3 call 0x10001240 */ esp -= 4; M32(esp) = 0x100012b8u; SAVEALL; F_10001240(c); ABI_CHECK(0x10001240u, 0x100012b3u); RETCHK(0x100012b8u, 0x100012b3u); LOADALL;
  /* 100012b8 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100012bd je 0x100012c8 */ if (ZF_) goto L_100012c8;
  /* 100012bf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100012c0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100012c5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100012c0u); RETCHK(0x100012c5u, 0x100012c0u); LOADALL;
  /* 100012c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100012c8:;
  /* 100012c8 mov eax, esi */ { eax = (u32)(esi); }
  /* 100012ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100012cb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100012d0(CPU *c) {
  NATIVE_HOOK(0x100012d0u) REGS; LOADALL;
L_100012d0:;
  /* 100012d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100012d1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100012d3 call 0x100012f0 */ esp -= 4; M32(esp) = 0x100012d8u; SAVEALL; F_100012f0(c); ABI_CHECK(0x100012f0u, 0x100012d3u); RETCHK(0x100012d8u, 0x100012d3u); LOADALL;
  /* 100012d8 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100012dd je 0x100012e8 */ if (ZF_) goto L_100012e8;
  /* 100012df push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100012e0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100012e5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100012e0u); RETCHK(0x100012e5u, 0x100012e0u); LOADALL;
  /* 100012e5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100012e8:;
  /* 100012e8 mov eax, esi */ { eax = (u32)(esi); }
  /* 100012ea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100012eb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100012f0(CPU *c) {
  NATIVE_HOOK(0x100012f0u) REGS; LOADALL;
L_100012f0:;
  /* 100012f0 mov dword ptr [ecx], 0x1000811c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1000811cu); }
  /* 100012f6 jmp 0x10001240 */ SAVEALL; F_10001240(c); return;
}

void F_10001300(CPU *c) {
  NATIVE_HOOK(0x10001300u) REGS; LOADALL;
L_10001300:;
  /* 10001300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001301 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001303 call 0x10001320 */ esp -= 4; M32(esp) = 0x10001308u; SAVEALL; F_10001320(c); ABI_CHECK(0x10001320u, 0x10001303u); RETCHK(0x10001308u, 0x10001303u); LOADALL;
  /* 10001308 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000130d je 0x10001318 */ if (ZF_) goto L_10001318;
  /* 1000130f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001310 call 0x10006e46 */ esp -= 4; M32(esp) = 0x10001315u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x10001310u); RETCHK(0x10001315u, 0x10001310u); LOADALL;
  /* 10001315 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10001318:;
  /* 10001318 mov eax, esi */ { eax = (u32)(esi); }
  /* 1000131a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000131b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10001320(CPU *c) {
  NATIVE_HOOK(0x10001320u) REGS; LOADALL;
L_10001320:;
  /* 10001320 mov dword ptr [ecx], 0x10008124 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x10008124u); }
  /* 10001326 jmp 0x10001240 */ SAVEALL; F_10001240(c); return;
}

void F_10001330(CPU *c) {
  NATIVE_HOOK(0x10001330u) REGS; LOADALL;
L_10001330:;
  /* 10001330 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10001335 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001350(CPU *c) {
  NATIVE_HOOK(0x10001350u) REGS; LOADALL;
L_10001350:;
  /* 10001350 mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001354 mov ecx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001358 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001359 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1000135a call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001360u; SAVEALL; call_ind(c, t_); RETCHK(0x10001360u, 0x1000135au); LOADALL; }
  /* 10001360 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001363 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10001370(CPU *c) {
  NATIVE_HOOK(0x10001370u) REGS; LOADALL;
L_10001370:;
  /* 10001370 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001374 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 10001376 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001377 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001378 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 1000137b mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 1000137d mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 10001380 mov bl, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001383 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001385 jne 0x1000138a */ if (!ZF_) goto L_1000138a;
  /* 10001387 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
L_1000138a:;
  /* 1000138a mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 1000138d mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 10001390 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001393 cmp edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001396 jne 0x100013a6 */ if (!ZF_) goto L_100013a6;
  /* 10001398 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1000139b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000139c mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 1000139f mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100013a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100013a3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_100013a6:;
  /* 100013a6 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100013a9 cmp edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100013ac jne 0x100013bc */ if (!ZF_) goto L_100013bc;
  /* 100013ae mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 100013b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100013b2 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 100013b5 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100013b8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100013b9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_100013bc:;
  /* 100013bc mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 100013be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100013bf mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 100013c2 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100013c5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100013c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100013d0(CPU *c) {
  NATIVE_HOOK(0x100013d0u) REGS; LOADALL;
L_100013d0:;
  /* 100013d0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 100013d4 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 100013d6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100013d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100013d8 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 100013db mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 100013dd mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 100013e0 mov bl, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100013e3 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100013e5 jne 0x100013ea */ if (!ZF_) goto L_100013ea;
  /* 100013e7 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
L_100013ea:;
  /* 100013ea mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 100013ed mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 100013f0 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100013f3 cmp edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100013f6 jne 0x10001406 */ if (!ZF_) goto L_10001406;
  /* 100013f8 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100013fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100013fc mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 100013ff mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10001402 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001403 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10001406:;
  /* 10001406 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001409 cmp edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000140c jne 0x1000141c */ if (!ZF_) goto L_1000141c;
  /* 1000140e mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 10001411 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001412 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 10001415 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10001418 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001419 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1000141c:;
  /* 1000141c mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1000141e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000141f mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 10001422 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10001425 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001426 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10001430(CPU *c) {
  NATIVE_HOOK(0x10001430u) REGS; LOADALL;
L_10001430:;
  /* 10001430 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001434 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10001437 mov dl, byte ptr [ecx + 0x35] */ { const u32 m_ = (u32)(ecx + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000143a test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000143c jne 0x1000144c */ if (!ZF_) goto L_1000144c;
  /* 1000143e mov edi, edi */ { edi = (u32)(edi); }
L_10001440:;
  /* 10001440 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10001442 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10001445 mov dl, byte ptr [ecx + 0x35] */ { const u32 m_ = (u32)(ecx + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001448 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000144a je 0x10001440 */ if (ZF_) goto L_10001440;
L_1000144c:;
  /* 1000144c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001450(CPU *c) {
  NATIVE_HOOK(0x10001450u) REGS; LOADALL;
L_10001450:;
  /* 10001450 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001454 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001456 mov dl, byte ptr [ecx + 0x35] */ { const u32 m_ = (u32)(ecx + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001459 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000145b jne 0x1000146b */ if (!ZF_) goto L_1000146b;
  /* 1000145d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10001460:;
  /* 10001460 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10001462 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001464 mov dl, byte ptr [ecx + 0x35] */ { const u32 m_ = (u32)(ecx + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001467 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001469 je 0x10001460 */ if (ZF_) goto L_10001460;
L_1000146b:;
  /* 1000146b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001470(CPU *c) {
  NATIVE_HOOK(0x10001470u) REGS; LOADALL;
L_10001470:;
  /* 10001470 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10001472 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001475 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001477 je 0x1000147f */ if (ZF_) goto L_1000147f;
  /* 10001479 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000147c mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1000147e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1000147f:;
  /* 1000147f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10001481 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001482 mov bl, byte ptr [edx + 0x35] */ { const u32 m_ = (u32)(edx + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001485 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001487 jne 0x100014a3 */ if (!ZF_) goto L_100014a3;
  /* 10001489 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000148c mov bl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000148f test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001491 jne 0x1000149f */ if (!ZF_) goto L_1000149f;
L_10001493:;
  /* 10001493 mov edx, eax */ { edx = (u32)(eax); }
  /* 10001495 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001498 mov bl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000149b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000149d je 0x10001493 */ if (ZF_) goto L_10001493;
L_1000149f:;
  /* 1000149f mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 100014a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100014a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100014a3:;
  /* 100014a3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 100014a6 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100014a9 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100014ab jne 0x100014cb */ if (!ZF_) goto L_100014cb;
  /* 100014ad lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_100014b0:;
  /* 100014b0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 100014b2 cmp edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100014b4 jne 0x100014c2 */ if (!ZF_) goto L_100014c2;
  /* 100014b6 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 100014b8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 100014bb mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100014be test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100014c0 je 0x100014b0 */ if (ZF_) goto L_100014b0;
L_100014c2:;
  /* 100014c2 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100014c5 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100014c7 jne 0x100014cb */ if (!ZF_) goto L_100014cb;
  /* 100014c9 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_100014cb:;
  /* 100014cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100014cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100014d0(CPU *c) {
  NATIVE_HOOK(0x100014d0u) REGS; LOADALL;
L_100014d0:;
  /* 100014d0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 100014d2 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100014d5 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100014d7 jne 0x10001526 */ if (!ZF_) goto L_10001526;
  /* 100014d9 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 100014dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100014dd mov bl, byte ptr [edx + 0x35] */ { const u32 m_ = (u32)(edx + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100014e0 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100014e2 jne 0x100014ff */ if (!ZF_) goto L_100014ff;
  /* 100014e4 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 100014e6 mov bl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100014e9 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100014eb jne 0x100014fb */ if (!ZF_) goto L_100014fb;
  /* 100014ed lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_100014f0:;
  /* 100014f0 mov edx, eax */ { edx = (u32)(eax); }
  /* 100014f2 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 100014f4 mov bl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100014f7 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100014f9 je 0x100014f0 */ if (ZF_) goto L_100014f0;
L_100014fb:;
  /* 100014fb mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 100014fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100014fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100014ff:;
  /* 100014ff mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001502 mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001505 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001507 jne 0x10001523 */ if (!ZF_) goto L_10001523;
  /* 10001509 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10001510:;
  /* 10001510 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10001512 cmp edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001515 jne 0x10001523 */ if (!ZF_) goto L_10001523;
  /* 10001517 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10001519 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000151c mov dl, byte ptr [eax + 0x35] */ { const u32 m_ = (u32)(eax + 0x35u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000151f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001521 je 0x10001510 */ if (ZF_) goto L_10001510;
L_10001523:;
  /* 10001523 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10001525 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10001526:;
  /* 10001526 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001530(CPU *c) {
  NATIVE_HOOK(0x10001530u) REGS; LOADALL;
L_10001530:;
  /* 10001530 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001534 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10001537 mov dl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000153a test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000153c jne 0x1000154c */ if (!ZF_) goto L_1000154c;
  /* 1000153e mov edi, edi */ { edi = (u32)(edi); }
L_10001540:;
  /* 10001540 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10001542 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10001545 mov dl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001548 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000154a je 0x10001540 */ if (ZF_) goto L_10001540;
L_1000154c:;
  /* 1000154c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001550(CPU *c) {
  NATIVE_HOOK(0x10001550u) REGS; LOADALL;
L_10001550:;
  /* 10001550 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001554 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001556 mov dl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001559 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000155b jne 0x1000156b */ if (!ZF_) goto L_1000156b;
  /* 1000155d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10001560:;
  /* 10001560 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 10001562 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001564 mov dl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001567 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001569 je 0x10001560 */ if (ZF_) goto L_10001560;
L_1000156b:;
  /* 1000156b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001570(CPU *c) {
  NATIVE_HOOK(0x10001570u) REGS; LOADALL;
L_10001570:;
  /* 10001570 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10001572 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001575 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001577 je 0x1000157f */ if (ZF_) goto L_1000157f;
  /* 10001579 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000157c mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1000157e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1000157f:;
  /* 1000157f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 10001581 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001582 mov bl, byte ptr [edx + 0x2d] */ { const u32 m_ = (u32)(edx + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001585 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001587 jne 0x100015a3 */ if (!ZF_) goto L_100015a3;
  /* 10001589 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 1000158c mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000158f test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001591 jne 0x1000159f */ if (!ZF_) goto L_1000159f;
L_10001593:;
  /* 10001593 mov edx, eax */ { edx = (u32)(eax); }
  /* 10001595 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001598 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000159b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000159d je 0x10001593 */ if (ZF_) goto L_10001593;
L_1000159f:;
  /* 1000159f mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 100015a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100015a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100015a3:;
  /* 100015a3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 100015a6 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100015a9 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100015ab jne 0x100015cb */ if (!ZF_) goto L_100015cb;
  /* 100015ad lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_100015b0:;
  /* 100015b0 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 100015b2 cmp edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100015b4 jne 0x100015c2 */ if (!ZF_) goto L_100015c2;
  /* 100015b6 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 100015b8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 100015bb mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100015be test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100015c0 je 0x100015b0 */ if (ZF_) goto L_100015b0;
L_100015c2:;
  /* 100015c2 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100015c5 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100015c7 jne 0x100015cb */ if (!ZF_) goto L_100015cb;
  /* 100015c9 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_100015cb:;
  /* 100015cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100015cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100015d0(CPU *c) {
  NATIVE_HOOK(0x100015d0u) REGS; LOADALL;
L_100015d0:;
  /* 100015d0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 100015d2 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100015d5 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100015d7 jne 0x10001626 */ if (!ZF_) goto L_10001626;
  /* 100015d9 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 100015dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100015dd mov bl, byte ptr [edx + 0x2d] */ { const u32 m_ = (u32)(edx + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100015e0 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100015e2 jne 0x100015ff */ if (!ZF_) goto L_100015ff;
  /* 100015e4 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 100015e6 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100015e9 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100015eb jne 0x100015fb */ if (!ZF_) goto L_100015fb;
  /* 100015ed lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_100015f0:;
  /* 100015f0 mov edx, eax */ { edx = (u32)(eax); }
  /* 100015f2 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 100015f4 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100015f7 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100015f9 je 0x100015f0 */ if (ZF_) goto L_100015f0;
L_100015fb:;
  /* 100015fb mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 100015fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100015fe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_100015ff:;
  /* 100015ff mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 10001602 mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001605 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001607 jne 0x10001623 */ if (!ZF_) goto L_10001623;
  /* 10001609 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_10001610:;
  /* 10001610 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10001612 cmp edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001615 jne 0x10001623 */ if (!ZF_) goto L_10001623;
  /* 10001617 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10001619 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000161c mov dl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000161f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001621 je 0x10001610 */ if (ZF_) goto L_10001610;
L_10001623:;
  /* 10001623 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 10001625 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10001626:;
  /* 10001626 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001630(CPU *c) {
  NATIVE_HOOK(0x10001630u) REGS; LOADALL;
L_10001630:;
  /* 10001630 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10001633 jmp dword ptr [0x1000804c] */ { const u32 m_ = (u32)(0x1000804cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_10001640(CPU *c) {
  NATIVE_HOOK(0x10001640u) REGS; LOADALL;
L_10001640:;
  /* 10001640 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001641 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001643 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 10001645 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001647 je 0x10001652 */ if (ZF_) goto L_10001652;
  /* 10001649 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000164a call 0x10006dda */ esp -= 4; M32(esp) = 0x1000164fu; SAVEALL; F_10006dda(c); ABI_CHECK(0x10006ddau, 0x1000164au); RETCHK(0x1000164fu, 0x1000164au); LOADALL;
  /* 1000164f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10001652:;
  /* 10001652 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 10001658 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 1000165f mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10001666 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001667 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001670(CPU *c) {
  NATIVE_HOOK(0x10001670u) REGS; LOADALL;
L_10001670:;
  /* 10001670 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001671 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10001673 mov dword ptr [esi], 0x1000812c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1000812cu); }
  /* 10001679 mov eax, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); eax = (u32)(M32(m_)); }
  /* 1000167c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000167e je 0x10001689 */ if (ZF_) goto L_10001689;
  /* 10001680 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001681 call 0x10006dda */ esp -= 4; M32(esp) = 0x10001686u; SAVEALL; F_10006dda(c); ABI_CHECK(0x10006ddau, 0x10001681u); RETCHK(0x10001686u, 0x10001681u); LOADALL;
  /* 10001686 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10001689:;
  /* 10001689 mov dword ptr [esi + 0x3c], 0 */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0x0u); }
  /* 10001690 mov dword ptr [esi + 0x40], 0 */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(0x0u); }
  /* 10001697 mov dword ptr [esi + 0x44], 0 */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(0x0u); }
  /* 1000169e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 100016a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100016a1 jmp 0x10003af0 */ SAVEALL; F_10003af0(c); return;
}

void F_100016b0(CPU *c) {
  NATIVE_HOOK(0x100016b0u) REGS; LOADALL;
L_100016b0:;
  /* 100016b0 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 100016b3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_100016c0(CPU *c) {
  NATIVE_HOOK(0x100016c0u) REGS; LOADALL;
L_100016c0:;
  /* 100016c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100016c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 100016c3 call 0x10001670 */ esp -= 4; M32(esp) = 0x100016c8u; SAVEALL; F_10001670(c); ABI_CHECK(0x10001670u, 0x100016c3u); RETCHK(0x100016c8u, 0x100016c3u); LOADALL;
  /* 100016c8 test byte ptr [esp + 8], 1 */ { const u32 m_ = (u32)(esp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100016cd je 0x100016d8 */ if (ZF_) goto L_100016d8;
  /* 100016cf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100016d0 call 0x10006e46 */ esp -= 4; M32(esp) = 0x100016d5u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100016d0u); RETCHK(0x100016d5u, 0x100016d0u); LOADALL;
  /* 100016d5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_100016d8:;
  /* 100016d8 mov eax, esi */ { eax = (u32)(esi); }
  /* 100016da pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100016db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100016e0(CPU *c) {
  NATIVE_HOOK(0x100016e0u) REGS; LOADALL;
L_100016e0:;
  /* 100016e0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 100016e3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 100016e4 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 100016e7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 100016e8 mov edi, eax */ { edi = (u32)(eax); }
  /* 100016ea mov al, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100016ed test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100016ef jne 0x10001720 */ if (!ZF_) goto L_10001720;
  /* 100016f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 100016f2 mov ebx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 100016f6 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 100016f7 mov ebp, dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); ebp = (u32)(M32(m_)); }
  /* 100016fd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_10001700:;
  /* 10001700 lea eax, [esi + 0xc] */ eax = (u32)((u32)(esi + 0xcu));
  /* 10001703 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001704 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001705 call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x10001707u; SAVEALL; call_ind(c, t_); RETCHK(0x10001707u, 0x10001705u); LOADALL; }
  /* 10001707 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000170a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000170c je 0x10001713 */ if (ZF_) goto L_10001713;
  /* 1000170e mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 10001711 jmp 0x10001717 */ goto L_10001717;
L_10001713:;
  /* 10001713 mov edi, esi */ { edi = (u32)(esi); }
  /* 10001715 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
L_10001717:;
  /* 10001717 mov al, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000171a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 1000171c je 0x10001700 */ if (ZF_) goto L_10001700;
  /* 1000171e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1000171f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_10001720:;
  /* 10001720 mov eax, edi */ { eax = (u32)(edi); }
  /* 10001722 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001723 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001724 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10001730(CPU *c) {
  NATIVE_HOOK(0x10001730u) REGS; LOADALL;
L_10001730:;
  /* 10001730 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001734 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001737 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001738 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001739 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 1000173b mov dword ptr [edx + 8], esi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(esi); }
  /* 1000173e mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 10001740 mov bl, byte ptr [esi + 0x35] */ { const u32 m_ = (u32)(esi + 0x35u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10001743 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001745 jne 0x1000174a */ if (!ZF_) goto L_1000174a;
  /* 10001747 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
L_1000174a:;
  /* 1000174a mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 1000174d mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 10001750 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001753 cmp edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001756 jne 0x10001765 */ if (!ZF_) goto L_10001765;
  /* 10001758 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 1000175b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000175c mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 1000175e mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10001761 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001762 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10001765:;
  /* 10001765 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10001768 cmp edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1000176a jne 0x10001778 */ if (!ZF_) goto L_10001778;
  /* 1000176c mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 1000176e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000176f mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 10001771 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10001774 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001775 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10001778:;
  /* 10001778 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 1000177b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1000177c mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 1000177e mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10001781 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10001782 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10001790(CPU *c) {
  NATIVE_HOOK(0x10001790u) REGS; LOADALL;
L_10001790:;
  /* 10001790 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10001794 mov eax, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001797 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10001798 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001799 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 1000179b mov dword ptr [edx + 8], esi */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(esi); }
  /* 1000179e mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 100017a0 mov bl, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 100017a3 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 100017a5 jne 0x100017aa */ if (!ZF_) goto L_100017aa;
  /* 100017a7 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
L_100017aa:;
  /* 100017aa mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 100017ad mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 100017b0 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100017b3 cmp edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100017b6 jne 0x100017c5 */ if (!ZF_) goto L_100017c5;
  /* 100017b8 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100017bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100017bc mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 100017be mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100017c1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100017c2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_100017c5:;
  /* 100017c5 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 100017c8 cmp edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 100017ca jne 0x100017d8 */ if (!ZF_) goto L_100017d8;
  /* 100017cc mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 100017ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100017cf mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 100017d1 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100017d4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100017d5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_100017d8:;
  /* 100017d8 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 100017db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100017dc mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 100017de mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 100017e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100017e2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_100017f0(CPU *c) {
  NATIVE_HOOK(0x100017f0u) REGS; LOADALL;
L_100017f0:;
  /* 100017f0 push 0x38 */ { u32 v_ = 0x38u; esp -= 4; M32(esp) = v_; }
  /* 100017f2 call 0x10006e4c */ esp -= 4; M32(esp) = 0x100017f7u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100017f2u); RETCHK(0x100017f7u, 0x100017f2u); LOADALL;
  /* 100017f7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100017fa test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100017fc je 0x10001804 */ if (ZF_) goto L_10001804;
  /* 100017fe mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
L_10001804:;
  /* 10001804 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 10001807 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001809 je 0x10001811 */ if (ZF_) goto L_10001811;
  /* 1000180b mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_10001811:;
  /* 10001811 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 10001814 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10001816 je 0x1000181e */ if (ZF_) goto L_1000181e;
  /* 10001818 mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_1000181e:;
  /* 1000181e mov byte ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x1u); }
  /* 10001822 mov byte ptr [eax + 0x35], 0 */ { const u32 m_ = (u32)(eax + 0x35u); M8(m_) = (u8)(0x0u); }
  /* 10001826 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001830(CPU *c) {
  NATIVE_HOOK(0x10001830u) REGS; LOADALL;
L_10001830:;
  /* 10001830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10001831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10001833 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10001835 push 0x100072d1 */ { u32 v_ = 0x100072d1u; esp -= 4; M32(esp) = v_; }
  /* 1000183a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10001840 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10001841 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10001848 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000184b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1000184c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1000184d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000184e mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 10001851 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 10001853 call 0x10006e4c */ esp -= 4; M32(esp) = 0x10001858u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x10001853u); RETCHK(0x10001858u, 0x10001853u); LOADALL;
  /* 10001858 mov esi, eax */ { esi = (u32)(eax); }
  /* 1000185a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1000185d mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 10001860 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 10001867 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 1000186a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1000186c mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 10001870 je 0x100018a2 */ if (ZF_) goto L_100018a2;
  /* 10001872 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10001875 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10001878 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 1000187b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 1000187d mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 10001880 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 10001883 mov dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edx); }
  /* 10001886 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001888 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1000188b mov dword ptr [esi + 0xc], ecx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 1000188e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000188f lea ecx, [esi + 0x10] */ ecx = (u32)((u32)(esi + 0x10u));
  /* 10001892 call dword ptr [0x1000803c] */ { const u32 m_ = (u32)(0x1000803cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001898u; SAVEALL; call_ind(c, t_); RETCHK(0x10001898u, 0x10001892u); LOADALL; }
  /* 10001898 mov dl, byte ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1000189b mov byte ptr [esi + 0x2c], dl */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 1000189e mov byte ptr [esi + 0x2d], 0 */ { const u32 m_ = (u32)(esi + 0x2du); M8(m_) = (u8)(0x0u); }
L_100018a2:;
  /* 100018a2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 100018a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 100018a6 mov eax, esi */ { eax = (u32)(esi); }
  /* 100018a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 100018a9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 100018b0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 100018b1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 100018b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 100018b4 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_100018b7(CPU *c) {
  NATIVE_HOOK(0x100018b7u) REGS; LOADALL;
L_100018b7:;
  /* 100018b7 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 100018ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 100018bb call 0x10006e46 */ esp -= 4; M32(esp) = 0x100018c0u; SAVEALL; F_10006e46(c); ABI_CHECK(0x10006e46u, 0x100018bbu); RETCHK(0x100018c0u, 0x100018bbu); LOADALL;
  /* 100018c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100018c3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100018c5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 100018c7 call 0x10006e40 */ { SAVEALL; rt_throw(c, 0x100080c4u); }
  /* 100018cc int3 */ TRAP(0x100018ccu, "int3");
}

void F_100018d0(CPU *c) {
  NATIVE_HOOK(0x100018d0u) REGS; LOADALL;
L_100018d0:;
  /* 100018d0 push 0x30 */ { u32 v_ = 0x30u; esp -= 4; M32(esp) = v_; }
  /* 100018d2 call 0x10006e4c */ esp -= 4; M32(esp) = 0x100018d7u; SAVEALL; F_10006e4c(c); ABI_CHECK(0x10006e4cu, 0x100018d2u); RETCHK(0x100018d7u, 0x100018d2u); LOADALL;
  /* 100018d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 100018da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100018dc je 0x100018e4 */ if (ZF_) goto L_100018e4;
  /* 100018de mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
L_100018e4:;
  /* 100018e4 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 100018e7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100018e9 je 0x100018f1 */ if (ZF_) goto L_100018f1;
  /* 100018eb mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_100018f1:;
  /* 100018f1 lea ecx, [eax + 8] */ ecx = (u32)((u32)(eax + 0x8u));
  /* 100018f4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 100018f6 je 0x100018fe */ if (ZF_) goto L_100018fe;
  /* 100018f8 mov dword ptr [ecx], 0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x0u); }
L_100018fe:;
  /* 100018fe mov byte ptr [eax + 0x2c], 1 */ { const u32 m_ = (u32)(eax + 0x2cu); M8(m_) = (u8)(0x1u); }
  /* 10001902 mov byte ptr [eax + 0x2d], 0 */ { const u32 m_ = (u32)(eax + 0x2du); M8(m_) = (u8)(0x0u); }
  /* 10001906 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10001910(CPU *c) {
  NATIVE_HOOK(0x10001910u) REGS; LOADALL;
L_10001910:;
  /* 10001910 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10001911 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10001912 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001913 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 10001917 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10001918 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1000191a call 0x100016e0 */ esp -= 4; M32(esp) = 0x1000191fu; SAVEALL; F_100016e0(c); ABI_CHECK(0x100016e0u, 0x1000191au); RETCHK(0x1000191fu, 0x1000191au); LOADALL;
  /* 1000191f cmp eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10001922 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10001926 je 0x1000194c */ if (ZF_) goto L_1000194c;
  /* 10001928 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 1000192b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1000192c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1000192d call dword ptr [0x10008048] */ { const u32 m_ = (u32)(0x10008048u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10001933u; SAVEALL; call_ind(c, t_); RETCHK(0x10001933u, 0x1000192du); LOADALL; }
  /* 10001933 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10001936 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10001938 jne 0x1000194c */ if (!ZF_) goto L_1000194c;
  /* 1000193a lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 1000193e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001940 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10001944 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10001945 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10001947 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001948 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10001949 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1000194c:;
  /* 1000194c mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1000194f mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10001953 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10001957 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 10001959 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1000195d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1000195e mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 10001960 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10001961 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10001962 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

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
