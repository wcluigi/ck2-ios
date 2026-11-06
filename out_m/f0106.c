#include "funcs.h"

void F_1010c82b(CPU *c) {
  NATIVE_HOOK(0x1010c82bu) REGS; LOADALL;
  goto L_1010c82b;
L_1010529d:;
  /* 1010529d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010529e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101052a0 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101052a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101052a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101052a6 cld */ c->df = 0;
  /* 101052a7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101052ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052af push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b2 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b5 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b8 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052bb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052be call 0x10106d37 */ esp -= 4; M32(esp) = 0x101052c3u; SAVEALL; F_10106d37(c); ABI_CHECK(0x10106d37u, 0x101052beu); RETCHK(0x101052c3u, 0x101052beu); LOADALL;
  /* 101052c3 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052c6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101052ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101052cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101052cc mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101052cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101052d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101052d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010c82b:;
  /* 1010c82b mov eax, 0x1010ea6c */ { eax = (u32)(0x1010ea6cu); }
  /* 1010c830 jmp 0x1010529d */ goto L_1010529d;
}

void F_1010c840(CPU *c) {
  NATIVE_HOOK(0x1010c840u) REGS; LOADALL;
  goto L_1010c840;
L_10102640:;
  /* 10102640 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102641 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102643 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102647 jb 0x10102655 */ if (CF_) goto L_10102655;
  /* 10102649 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010264c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010264d call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102652u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x1010264du); RETCHK(0x10102652u, 0x1010264du); LOADALL;
  /* 10102652 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102655:;
  /* 10102655 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102657 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 1010265e mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 10102661 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102664 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102665 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010c840:;
  /* 1010c840 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 1010c843 jmp 0x10102640 */ goto L_10102640;
}

void F_1010c848(CPU *c) {
  NATIVE_HOOK(0x1010c848u) REGS; LOADALL;
  goto L_1010c848;
L_1010529d:;
  /* 1010529d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010529e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101052a0 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101052a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101052a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101052a6 cld */ c->df = 0;
  /* 101052a7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101052ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052af push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b2 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b5 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b8 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052bb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052be call 0x10106d37 */ esp -= 4; M32(esp) = 0x101052c3u; SAVEALL; F_10106d37(c); ABI_CHECK(0x10106d37u, 0x101052beu); RETCHK(0x101052c3u, 0x101052beu); LOADALL;
  /* 101052c3 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052c6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101052ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101052cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101052cc mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101052cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101052d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101052d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010c848:;
  /* 1010c848 mov eax, 0x1010ea90 */ { eax = (u32)(0x1010ea90u); }
  /* 1010c84d jmp 0x1010529d */ goto L_1010529d;
}

void F_1010c860(CPU *c) {
  NATIVE_HOOK(0x1010c860u) REGS; LOADALL;
L_1010c860:;
  /* 1010c860 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010c863 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010c864 call 0x10105a9d */ esp -= 4; M32(esp) = 0x1010c869u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x1010c864u); RETCHK(0x1010c869u, 0x1010c864u); LOADALL;
  /* 1010c869 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010c86a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010c86b(CPU *c) {
  NATIVE_HOOK(0x1010c86bu) REGS; LOADALL;
  goto L_1010c86b;
L_1010529d:;
  /* 1010529d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010529e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101052a0 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101052a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101052a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101052a6 cld */ c->df = 0;
  /* 101052a7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101052ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052af push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b2 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b5 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b8 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052bb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052be call 0x10106d37 */ esp -= 4; M32(esp) = 0x101052c3u; SAVEALL; F_10106d37(c); ABI_CHECK(0x10106d37u, 0x101052beu); RETCHK(0x101052c3u, 0x101052beu); LOADALL;
  /* 101052c3 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052c6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101052ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101052cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101052cc mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101052cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101052d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101052d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010c86b:;
  /* 1010c86b mov eax, 0x1010eab4 */ { eax = (u32)(0x1010eab4u); }
  /* 1010c870 jmp 0x1010529d */ goto L_1010529d;
}

void F_1010c875(CPU *c) {
  NATIVE_HOOK(0x1010c875u) REGS; LOADALL;
  goto L_1010c875;
L_10102640:;
  /* 10102640 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10102641 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10102643 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10102647 jb 0x10102655 */ if (CF_) goto L_10102655;
  /* 10102649 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 1010264c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1010264d call 0x10105a9d */ esp -= 4; M32(esp) = 0x10102652u; SAVEALL; F_10105a9d(c); ABI_CHECK(0x10105a9du, 0x1010264du); RETCHK(0x10102652u, 0x1010264du); LOADALL;
  /* 10102652 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10102655:;
  /* 10102655 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10102657 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 1010265e mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 10102661 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10102664 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10102665 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010c875:;
  /* 1010c875 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 1010c878 jmp 0x10102640 */ goto L_10102640;
}

void F_1010c87d(CPU *c) {
  NATIVE_HOOK(0x1010c87du) REGS; LOADALL;
  goto L_1010c87d;
L_1010529d:;
  /* 1010529d push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 1010529e mov ebp, esp */ { ebp = (u32)(esp); }
  /* 101052a0 sub esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 101052a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 101052a5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 101052a6 cld */ c->df = 0;
  /* 101052a7 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052aa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 101052ac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 101052af push dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b2 push dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b5 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052b8 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052bb push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 101052be call 0x10106d37 */ esp -= 4; M32(esp) = 0x101052c3u; SAVEALL; F_10106d37(c); ABI_CHECK(0x10106d37u, 0x101052beu); RETCHK(0x101052c3u, 0x101052beu); LOADALL;
  /* 101052c3 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 101052c6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 101052c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 101052ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 101052cb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 101052cc mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 101052cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 101052d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 101052d2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010c87d:;
  /* 1010c87d mov eax, 0x1010eb14 */ { eax = (u32)(0x1010eb14u); }
  /* 1010c882 jmp 0x1010529d */ goto L_1010529d;
}

void F_1010c890(CPU *c) {
  NATIVE_HOOK(0x1010c890u) REGS; LOADALL;
L_1010c890:;
  /* 1010c890 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 1010c895 call 0x10104a00 */ esp -= 4; M32(esp) = 0x1010c89au; SAVEALL; F_10104a00(c); ABI_CHECK(0x10104a00u, 0x1010c895u); RETCHK(0x1010c89au, 0x1010c895u); LOADALL;
  /* 1010c89a push 0x1010c8b0 */ { u32 v_ = 0x1010c8b0u; esp -= 4; M32(esp) = v_; }
  /* 1010c89f call 0x10105d09 */ esp -= 4; M32(esp) = 0x1010c8a4u; SAVEALL; F_10105d09(c); ABI_CHECK(0x10105d09u, 0x1010c89fu); RETCHK(0x1010c8a4u, 0x1010c89fu); LOADALL;
  /* 1010c8a4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1010c8a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_1010c8b0(CPU *c) {
  NATIVE_HOOK(0x1010c8b0u) REGS; LOADALL;
  goto L_1010c8b0;
L_10103a60:;
  /* 10103a60 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10103a66 jmp 0x10104af0 */ goto L_10104af0;
L_10104af0:;
  /* 10104af0 mov dword ptr [ecx], 0x1010d1d0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1010d1d0u); }
  /* 10104af6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_1010c8b0:;
  /* 1010c8b0 mov ecx, 0x10110c80 */ { ecx = (u32)(0x10110c80u); }
  /* 1010c8b5 jmp 0x10103a60 */ goto L_10103a60;
}

void F_1010c8ba(CPU *c) {
  NATIVE_HOOK(0x1010c8bau) REGS; LOADALL;
L_1010c8ba:;
  /* 1010c8ba mov ecx, 0x10120c94 */ { ecx = (u32)(0x10120c94u); }
  /* 1010c8bf jmp 0x1010504d */ SAVEALL; F_1010504d(c); return;
}

void F_10201000(CPU *c) {
  NATIVE_HOOK(0x10201000u) REGS; LOADALL;
L_10201000:;
  /* 10201000 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 10201005 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201010(CPU *c) {
  NATIVE_HOOK(0x10201010u) REGS; LOADALL;
L_10201010:;
  /* 10201010 mov dword ptr [ecx], 0x1020b130 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1020b130u); }
  /* 10201016 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10201019 jmp 0x10202d10 */ goto L_10202d10;
L_10202d10:;
  /* 10202d10 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10202d16 jmp 0x10204b30 */ goto L_10204b30;
L_10204b30:;
  /* 10204b30 mov dword ptr [ecx], 0x1020b1a4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x1020b1a4u); }
  /* 10204b36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10201020(CPU *c) {
  NATIVE_HOOK(0x10201020u) REGS; LOADALL;
L_10201020:;
  /* 10201020 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201024 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 10201027 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 1020102a call 0x10204550 */ esp -= 4; M32(esp) = 0x1020102fu; SAVEALL; F_10204550(c); ABI_CHECK(0x10204550u, 0x1020102au); RETCHK(0x1020102fu, 0x1020102au); LOADALL;
  /* 1020102f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10201040(CPU *c) {
  NATIVE_HOOK(0x10201040u) REGS; LOADALL;
L_10201040:;
  /* 10201040 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10201041 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10201043 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201044 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10201045 lea esi, [ebx + 0x10018] */ esi = (u32)((u32)(ebx + 0x10018u));
  /* 1020104b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020104d mov ecx, 0x800 */ { ecx = (u32)(0x800u); }
  /* 10201052 mov edi, esi */ { edi = (u32)(esi); }
  /* 10201054 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10201056 mov ax, word ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1020105b mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 1020105f push 0x1ffa */ { u32 v_ = 0x1ffau; esp -= 4; M32(esp) = v_; }
  /* 10201064 lea edx, [esi + 6] */ edx = (u32)((u32)(esi + 0x6u));
  /* 10201067 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201068 mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 1020106a mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 1020106e movzx edx, ax */ { edx = (u32)((eax & 0xffffu)); }
  /* 10201071 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201072 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201073 lea ecx, [ebx + 8] */ ecx = (u32)((u32)(ebx + 0x8u));
  /* 10201076 mov word ptr [esi + 4], ax */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1020107a call 0x10204a80 */ esp -= 4; M32(esp) = 0x1020107fu; SAVEALL; F_10204a80(c); ABI_CHECK(0x10204a80u, 0x1020107au); RETCHK(0x1020107fu, 0x1020107au); LOADALL;
  /* 1020107f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201081 jge 0x1020108b */ if (!LT_) goto L_1020108b;
  /* 10201083 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10201084 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201085 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10201087 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10201088 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_1020108b:;
  /* 1020108b mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 1020108e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201090 add eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 10201093 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201094 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201095 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201097u; SAVEALL; call_ind(c, t_); RETCHK(0x10201097u, 0x10201095u); LOADALL; }
  /* 10201097 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10201098 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201099 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020109a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102010a0(CPU *c) {
  NATIVE_HOOK(0x102010a0u) REGS; LOADALL;
L_102010a0:;
  /* 102010a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102010a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102010a5 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102010a9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102010aa push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 102010af call 0x10201040 */ esp -= 4; M32(esp) = 0x102010b4u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102010afu); RETCHK(0x102010b4u, 0x102010afu); LOADALL;
  /* 102010b4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102010c0(CPU *c) {
  NATIVE_HOOK(0x102010c0u) REGS; LOADALL;
L_102010c0:;
  /* 102010c0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102010c3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102010c8 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 102010cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102010ce mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 102010d2 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 102010d6 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 102010da mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 102010de mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 102010e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102010e3 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 102010e7 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102010e9 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 102010ed push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 102010ef mov dword ptr [esp + 0x21], eax */ { const u32 m_ = (u32)(esp + 0x21u); M32(m_) = (u32)(eax); }
  /* 102010f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102010f4 lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 102010f8 mov word ptr [esp + 0x29], ax */ { const u32 m_ = (u32)(esp + 0x29u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 102010fd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102010fe mov byte ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 10201103 mov byte ptr [esp + 0x2f], al */ { const u32 m_ = (u32)(esp + 0x2fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201107 call 0x10204e10 */ esp -= 4; M32(esp) = 0x1020110cu; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x10201107u); RETCHK(0x1020110cu, 0x10201107u); LOADALL;
  /* 1020110c mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10201110 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201113 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201114 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 10201118 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201119 push 0x3ec */ { u32 v_ = 0x3ecu; esp -= 4; M32(esp) = v_; }
  /* 1020111e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10201120 call 0x10201040 */ esp -= 4; M32(esp) = 0x10201125u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201120u); RETCHK(0x10201125u, 0x10201120u); LOADALL;
  /* 10201125 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10201129 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020112a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020112fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020112au); RETCHK(0x1020112fu, 0x1020112au); LOADALL;
  /* 1020112f add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201132 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10201140(CPU *c) {
  NATIVE_HOOK(0x10201140u) REGS; LOADALL;
L_10201140:;
  /* 10201140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201143 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201146 sub esp, 0x158 */ { u32 a_ = esp, b_ = 0x158u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020114c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201151 mov dword ptr [esp + 0x154], eax */ { const u32 m_ = (u32)(esp + 0x154u); M32(m_) = (u32)(eax); }
  /* 10201158 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020115a mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 1020115e mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201162 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201166 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1020116a mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 1020116e mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10201172 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201176 mov word ptr [esp + 0x1d], ax */ { const u32 m_ = (u32)(esp + 0x1du); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1020117b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020117c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020117d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020117f mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 10201184 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201188 mov ecx, 0x4c */ { ecx = (u32)(0x4cu); }
  /* 1020118d lea edi, [esp + 0x28] */ edi = (u32)((u32)(esp + 0x28u));
  /* 10201191 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10201193 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10201196 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10201198 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201199 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 1020119d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020119e call 0x10204e10 */ esp -= 4; M32(esp) = 0x102011a3u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020119eu); RETCHK(0x102011a3u, 0x1020119eu); LOADALL;
  /* 102011a3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102011a6 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 102011a8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102011a9 lea ecx, [esp + 0x3c] */ ecx = (u32)((u32)(esp + 0x3cu));
  /* 102011ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102011ae call 0x10204e10 */ esp -= 4; M32(esp) = 0x102011b3u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102011aeu); RETCHK(0x102011b3u, 0x102011aeu); LOADALL;
  /* 102011b3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102011b6 push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 102011b8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102011b9 lea eax, [esp + 0x68] */ eax = (u32)((u32)(esp + 0x68u));
  /* 102011bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102011be call 0x10204e10 */ esp -= 4; M32(esp) = 0x102011c3u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102011beu); RETCHK(0x102011c3u, 0x102011beu); LOADALL;
  /* 102011c3 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 102011c6 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 102011cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102011cc lea edx, [esp + 0x84] */ edx = (u32)((u32)(esp + 0x84u));
  /* 102011d3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102011d4 call 0x10204e10 */ esp -= 4; M32(esp) = 0x102011d9u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102011d4u); RETCHK(0x102011d9u, 0x102011d4u); LOADALL;
  /* 102011d9 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 102011dc add esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102011df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102011e0 lea ecx, [esp + 0xc] */ ecx = (u32)((u32)(esp + 0xcu));
  /* 102011e4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102011e5 push 0x3ea */ { u32 v_ = 0x3eau; esp -= 4; M32(esp) = v_; }
  /* 102011ea mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102011ec call 0x10201040 */ esp -= 4; M32(esp) = 0x102011f1u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102011ecu); RETCHK(0x102011f1u, 0x102011ecu); LOADALL;
  /* 102011f1 mov ecx, dword ptr [esp + 0x15c] */ { const u32 m_ = (u32)(esp + 0x15cu); ecx = (u32)(M32(m_)); }
  /* 102011f8 call 0x10204f65 */ esp -= 4; M32(esp) = 0x102011fdu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x102011f8u); RETCHK(0x102011fdu, 0x102011f8u); LOADALL;
  /* 102011fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102011fe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102011ff mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10201201 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10201202 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_10201210(CPU *c) {
  NATIVE_HOOK(0x10201210u) REGS; LOADALL;
L_10201210:;
  /* 10201210 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201213 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201218 mov dl, byte ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020121c mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 10201220 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201222 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201226 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 1020122a mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1020122e mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201232 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201236 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201237 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 1020123b mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 1020123f test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 10201241 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 10201245 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10201247 mov dword ptr [esp + 0x25], eax */ { const u32 m_ = (u32)(esp + 0x25u); M32(m_) = (u32)(eax); }
  /* 1020124b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020124d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020124e lea eax, [esp + 0xd] */ eax = (u32)((u32)(esp + 0xdu));
  /* 10201252 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 10201255 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201256 mov byte ptr [esp + 0x10], cl */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1020125a call 0x10204e10 */ esp -= 4; M32(esp) = 0x1020125fu; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020125au); RETCHK(0x1020125fu, 0x1020125au); LOADALL;
  /* 1020125f mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 10201263 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201266 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201267 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 1020126b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020126c push 0x3ee */ { u32 v_ = 0x3eeu; esp -= 4; M32(esp) = v_; }
  /* 10201271 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10201273 call 0x10201040 */ esp -= 4; M32(esp) = 0x10201278u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201273u); RETCHK(0x10201278u, 0x10201273u); LOADALL;
  /* 10201278 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 1020127c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020127d call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201282u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020127du); RETCHK(0x10201282u, 0x1020127du); LOADALL;
  /* 10201282 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201285 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201290(CPU *c) {
  NATIVE_HOOK(0x10201290u) REGS; LOADALL;
L_10201290:;
  /* 10201290 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201293 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201298 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 1020129c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020129d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020129f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102012a1 mov dword ptr [esp + 5], ecx */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(ecx); }
  /* 102012a5 mov dword ptr [esp + 9], ecx */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(ecx); }
  /* 102012a9 mov dword ptr [esp + 0xd], ecx */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(ecx); }
  /* 102012ad mov dword ptr [esp + 0x11], ecx */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(ecx); }
  /* 102012b1 mov dword ptr [esp + 0x15], ecx */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(ecx); }
  /* 102012b5 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 102012b9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102012bb mov dword ptr [esp + 0x19], ecx */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(ecx); }
  /* 102012bf push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 102012c1 mov byte ptr [esp + 8], al */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102012c5 mov dword ptr [esp + 0x21], ecx */ { const u32 m_ = (u32)(esp + 0x21u); M32(m_) = (u32)(ecx); }
  /* 102012c9 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 102012cd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102012ce lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 102012d2 mov word ptr [esp + 0x29], cx */ { const u32 m_ = (u32)(esp + 0x29u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 102012d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102012d8 mov byte ptr [esp + 0x2f], cl */ { const u32 m_ = (u32)(esp + 0x2fu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 102012dc call 0x10204e10 */ esp -= 4; M32(esp) = 0x102012e1u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102012dcu); RETCHK(0x102012e1u, 0x102012dcu); LOADALL;
  /* 102012e1 mov edx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); edx = (u32)(M32(m_)); }
  /* 102012e5 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 102012e9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102012ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102012ed lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 102012f1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102012f2 mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 102012f6 push 0x3f0 */ { u32 v_ = 0x3f0u; esp -= 4; M32(esp) = v_; }
  /* 102012fb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102012fd call 0x10201040 */ esp -= 4; M32(esp) = 0x10201302u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102012fdu); RETCHK(0x10201302u, 0x102012fdu); LOADALL;
  /* 10201302 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10201306 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201307 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020130cu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201307u); RETCHK(0x1020130cu, 0x10201307u); LOADALL;
  /* 1020130c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020130f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201320(CPU *c) {
  NATIVE_HOOK(0x10201320u) REGS; LOADALL;
L_10201320:;
  /* 10201320 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201324 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201325 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10201329 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020132a push 0x3f3 */ { u32 v_ = 0x3f3u; esp -= 4; M32(esp) = v_; }
  /* 1020132f call 0x10201040 */ esp -= 4; M32(esp) = 0x10201334u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x1020132fu); RETCHK(0x10201334u, 0x1020132fu); LOADALL;
  /* 10201334 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10201340(CPU *c) {
  NATIVE_HOOK(0x10201340u) REGS; LOADALL;
L_10201340:;
  /* 10201340 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201343 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201348 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 1020134c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020134e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201352 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201356 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1020135a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1020135e mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201362 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201363 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201367 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201369 mov ecx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); ecx = (u32)(M32(m_)); }
  /* 1020136d push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 1020136f mov dword ptr [esp + 0x21], eax */ { const u32 m_ = (u32)(esp + 0x21u); M32(m_) = (u32)(eax); }
  /* 10201373 mov word ptr [esp + 0x25], ax */ { const u32 m_ = (u32)(esp + 0x25u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201378 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201379 lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 1020137d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020137e mov byte ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 10201383 mov byte ptr [esp + 0x2f], al */ { const u32 m_ = (u32)(esp + 0x2fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201387 mov byte ptr [esp + 0x30], al */ { const u32 m_ = (u32)(esp + 0x30u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020138b call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201390u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020138bu); RETCHK(0x10201390u, 0x1020138bu); LOADALL;
  /* 10201390 mov ecx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); ecx = (u32)(M32(m_)); }
  /* 10201394 mov al, byte ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10201398 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020139b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020139c lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102013a0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 102013a2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102013a3 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 102013a6 push 0x3f6 */ { u32 v_ = 0x3f6u; esp -= 4; M32(esp) = v_; }
  /* 102013ab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102013ad mov byte ptr [esp + 0x30], al */ { const u32 m_ = (u32)(esp + 0x30u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102013b1 call 0x10201040 */ esp -= 4; M32(esp) = 0x102013b6u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102013b1u); RETCHK(0x102013b6u, 0x102013b1u); LOADALL;
  /* 102013b6 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 102013ba pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102013bb call 0x10204f65 */ esp -= 4; M32(esp) = 0x102013c0u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x102013bbu); RETCHK(0x102013c0u, 0x102013bbu); LOADALL;
  /* 102013c0 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102013c3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102013d0(CPU *c) {
  NATIVE_HOOK(0x102013d0u) REGS; LOADALL;
L_102013d0:;
  /* 102013d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102013d4 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 102013d8 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 102013dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102013dd lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 102013e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102013e2 push 0x3f9 */ { u32 v_ = 0x3f9u; esp -= 4; M32(esp) = v_; }
  /* 102013e7 call 0x10201040 */ esp -= 4; M32(esp) = 0x102013ecu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102013e7u); RETCHK(0x102013ecu, 0x102013e7u); LOADALL;
  /* 102013ec ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_102013f0(CPU *c) {
  NATIVE_HOOK(0x102013f0u) REGS; LOADALL;
L_102013f0:;
  /* 102013f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102013f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102013f5 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102013f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102013fa push 0x3fb */ { u32 v_ = 0x3fbu; esp -= 4; M32(esp) = v_; }
  /* 102013ff call 0x10201040 */ esp -= 4; M32(esp) = 0x10201404u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102013ffu); RETCHK(0x10201404u, 0x102013ffu); LOADALL;
  /* 10201404 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10201410(CPU *c) {
  NATIVE_HOOK(0x10201410u) REGS; LOADALL;
L_10201410:;
  /* 10201410 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201411 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201413 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201416 sub esp, 0x208 */ { u32 a_ = esp, b_ = 0x208u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020141c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201421 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201422 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10201423 mov dword ptr [esp + 0x20c], eax */ { const u32 m_ = (u32)(esp + 0x20cu); M32(m_) = (u32)(eax); }
  /* 1020142a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020142c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020142e mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 10201433 mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
  /* 10201438 lea edi, [esp + 9] */ edi = (u32)((u32)(esp + 0x9u));
  /* 1020143c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1020143e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 10201440 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10201441 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10201444 push 0x1ff */ { u32 v_ = 0x1ffu; esp -= 4; M32(esp) = v_; }
  /* 10201449 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020144a lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 1020144e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020144f call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201454u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020144fu); RETCHK(0x10201454u, 0x1020144fu); LOADALL;
  /* 10201454 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10201457 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020145a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020145b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020145f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201460 push 0x3fe */ { u32 v_ = 0x3feu; esp -= 4; M32(esp) = v_; }
  /* 10201465 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10201467 call 0x10201040 */ esp -= 4; M32(esp) = 0x1020146cu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201467u); RETCHK(0x1020146cu, 0x10201467u); LOADALL;
  /* 1020146c mov ecx, dword ptr [esp + 0x20c] */ { const u32 m_ = (u32)(esp + 0x20cu); ecx = (u32)(M32(m_)); }
  /* 10201473 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201478u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201473u); RETCHK(0x10201478u, 0x10201473u); LOADALL;
  /* 10201478 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10201479 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020147a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1020147c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020147d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10201480(CPU *c) {
  NATIVE_HOOK(0x10201480u) REGS; LOADALL;
L_10201480:;
  /* 10201480 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201481 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201483 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201486 sub esp, 0x228 */ { u32 a_ = esp, b_ = 0x228u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020148c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201491 mov dword ptr [esp + 0x224], eax */ { const u32 m_ = (u32)(esp + 0x224u); M32(m_) = (u32)(eax); }
  /* 10201498 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020149a mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 1020149e mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 102014a2 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 102014a6 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 102014aa mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 102014ae mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 102014b2 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 102014b6 mov word ptr [esp + 0x1d], ax */ { const u32 m_ = (u32)(esp + 0x1du); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 102014bb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102014bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102014bd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102014bf mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 102014c4 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102014c8 mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 102014cd lea edi, [esp + 0x28] */ edi = (u32)((u32)(esp + 0x28u));
  /* 102014d1 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 102014d3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 102014d6 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 102014d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102014d9 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 102014dd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102014de call 0x10204e10 */ esp -= 4; M32(esp) = 0x102014e3u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102014deu); RETCHK(0x102014e3u, 0x102014deu); LOADALL;
  /* 102014e3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 102014e6 push 0x1ff */ { u32 v_ = 0x1ffu; esp -= 4; M32(esp) = v_; }
  /* 102014eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102014ec lea ecx, [esp + 0x3c] */ ecx = (u32)((u32)(esp + 0x3cu));
  /* 102014f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102014f1 call 0x10204e10 */ esp -= 4; M32(esp) = 0x102014f6u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102014f1u); RETCHK(0x102014f6u, 0x102014f1u); LOADALL;
  /* 102014f6 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102014f9 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102014fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102014fd lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10201501 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201502 push 0x400 */ { u32 v_ = 0x400u; esp -= 4; M32(esp) = v_; }
  /* 10201507 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10201509 call 0x10201040 */ esp -= 4; M32(esp) = 0x1020150eu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201509u); RETCHK(0x1020150eu, 0x10201509u); LOADALL;
  /* 1020150e mov ecx, dword ptr [esp + 0x22c] */ { const u32 m_ = (u32)(esp + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 10201515 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020151au; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201515u); RETCHK(0x1020151au, 0x10201515u); LOADALL;
  /* 1020151a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020151b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020151c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1020151e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020151f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201530(CPU *c) {
  NATIVE_HOOK(0x10201530u) REGS; LOADALL;
L_10201530:;
  /* 10201530 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201534 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201538 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020153c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020153d lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10201541 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201542 push 0x402 */ { u32 v_ = 0x402u; esp -= 4; M32(esp) = v_; }
  /* 10201547 call 0x10201040 */ esp -= 4; M32(esp) = 0x1020154cu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201547u); RETCHK(0x1020154cu, 0x10201547u); LOADALL;
  /* 1020154c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10201550(CPU *c) {
  NATIVE_HOOK(0x10201550u) REGS; LOADALL;
L_10201550:;
  /* 10201550 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201551 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201553 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201556 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020155c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201561 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201562 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10201563 mov dword ptr [esp + 0x10c], eax */ { const u32 m_ = (u32)(esp + 0x10cu); M32(m_) = (u32)(eax); }
  /* 1020156a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020156c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020156e mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 10201573 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 10201578 lea edi, [esp + 9] */ edi = (u32)((u32)(esp + 0x9u));
  /* 1020157c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1020157e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 10201580 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10201581 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10201584 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10201589 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020158a lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 1020158e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020158f call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201594u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020158fu); RETCHK(0x10201594u, 0x1020158fu); LOADALL;
  /* 10201594 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10201597 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020159a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020159b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020159f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102015a0 push 0x404 */ { u32 v_ = 0x404u; esp -= 4; M32(esp) = v_; }
  /* 102015a5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102015a7 call 0x10201040 */ esp -= 4; M32(esp) = 0x102015acu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102015a7u); RETCHK(0x102015acu, 0x102015a7u); LOADALL;
  /* 102015ac mov ecx, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 102015b3 call 0x10204f65 */ esp -= 4; M32(esp) = 0x102015b8u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x102015b3u); RETCHK(0x102015b8u, 0x102015b3u); LOADALL;
  /* 102015b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102015b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102015ba mov esp, ebp */ { esp = (u32)(ebp); }
  /* 102015bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102015bd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_102015c0(CPU *c) {
  NATIVE_HOOK(0x102015c0u) REGS; LOADALL;
L_102015c0:;
  /* 102015c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102015c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102015c3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 102015c6 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102015cc mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102015d1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102015d2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102015d3 mov dword ptr [esp + 0x10c], eax */ { const u32 m_ = (u32)(esp + 0x10cu); M32(m_) = (u32)(eax); }
  /* 102015da mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102015dc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102015de mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 102015e3 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 102015e8 lea edi, [esp + 9] */ edi = (u32)((u32)(esp + 0x9u));
  /* 102015ec rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 102015ee stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 102015f0 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 102015f1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102015f4 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 102015f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102015fa lea ecx, [esp + 0x10] */ ecx = (u32)((u32)(esp + 0x10u));
  /* 102015fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102015ff call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201604u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x102015ffu); RETCHK(0x10201604u, 0x102015ffu); LOADALL;
  /* 10201604 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10201607 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020160a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020160b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020160f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201610 push 0x407 */ { u32 v_ = 0x407u; esp -= 4; M32(esp) = v_; }
  /* 10201615 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10201617 call 0x10201040 */ esp -= 4; M32(esp) = 0x1020161cu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201617u); RETCHK(0x1020161cu, 0x10201617u); LOADALL;
  /* 1020161c mov ecx, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 10201623 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201628u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201623u); RETCHK(0x10201628u, 0x10201623u); LOADALL;
  /* 10201628 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10201629 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020162a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1020162c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020162d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10201630(CPU *c) {
  NATIVE_HOOK(0x10201630u) REGS; LOADALL;
L_10201630:;
  /* 10201630 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201633 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201638 mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 1020163c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020163e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201642 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201646 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 1020164a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1020164e mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201652 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201653 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201657 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201659 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 1020165d push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 1020165f mov dword ptr [esp + 0x21], eax */ { const u32 m_ = (u32)(esp + 0x21u); M32(m_) = (u32)(eax); }
  /* 10201663 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201664 lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 10201668 mov word ptr [esp + 0x29], ax */ { const u32 m_ = (u32)(esp + 0x29u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1020166d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020166e mov byte ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 10201673 mov byte ptr [esp + 0x2f], al */ { const u32 m_ = (u32)(esp + 0x2fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201677 call 0x10204e10 */ esp -= 4; M32(esp) = 0x1020167cu; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x10201677u); RETCHK(0x1020167cu, 0x10201677u); LOADALL;
  /* 1020167c mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10201680 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201683 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201684 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 10201688 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201689 push 0x40a */ { u32 v_ = 0x40au; esp -= 4; M32(esp) = v_; }
  /* 1020168e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10201690 call 0x10201040 */ esp -= 4; M32(esp) = 0x10201695u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201690u); RETCHK(0x10201695u, 0x10201690u); LOADALL;
  /* 10201695 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10201699 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020169a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020169fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020169au); RETCHK(0x1020169fu, 0x1020169au); LOADALL;
  /* 1020169f add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102016a2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_102016b0(CPU *c) {
  NATIVE_HOOK(0x102016b0u) REGS; LOADALL;
L_102016b0:;
  /* 102016b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102016b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102016b5 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102016b9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102016ba push 0x410 */ { u32 v_ = 0x410u; esp -= 4; M32(esp) = v_; }
  /* 102016bf call 0x10201040 */ esp -= 4; M32(esp) = 0x102016c4u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102016bfu); RETCHK(0x102016c4u, 0x102016bfu); LOADALL;
  /* 102016c4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102016d0(CPU *c) {
  NATIVE_HOOK(0x102016d0u) REGS; LOADALL;
L_102016d0:;
  /* 102016d0 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102016d3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102016d8 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 102016dc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102016dd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102016df xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102016e1 mov dword ptr [esp + 5], ecx */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(ecx); }
  /* 102016e5 mov dword ptr [esp + 9], ecx */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(ecx); }
  /* 102016e9 mov dword ptr [esp + 0xd], ecx */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(ecx); }
  /* 102016ed mov dword ptr [esp + 0x11], ecx */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(ecx); }
  /* 102016f1 mov dword ptr [esp + 0x15], ecx */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(ecx); }
  /* 102016f5 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 102016f9 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102016fb mov dword ptr [esp + 0x19], ecx */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(ecx); }
  /* 102016ff push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10201701 mov byte ptr [esp + 8], al */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201705 mov dword ptr [esp + 0x21], ecx */ { const u32 m_ = (u32)(esp + 0x21u); M32(m_) = (u32)(ecx); }
  /* 10201709 mov byte ptr [esp + 0x28], al */ { const u32 m_ = (u32)(esp + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 1020170d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020170e lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10201712 mov word ptr [esp + 0x29], cx */ { const u32 m_ = (u32)(esp + 0x29u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 10201717 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201718 mov byte ptr [esp + 0x2f], cl */ { const u32 m_ = (u32)(esp + 0x2fu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 1020171c call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201721u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020171cu); RETCHK(0x10201721u, 0x1020171cu); LOADALL;
  /* 10201721 mov edx, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); edx = (u32)(M32(m_)); }
  /* 10201725 mov cl, byte ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10201729 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020172c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020172d lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10201731 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201732 mov byte ptr [esp + 0x2c], cl */ { const u32 m_ = (u32)(esp + 0x2cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 10201736 push 0x40d */ { u32 v_ = 0x40du; esp -= 4; M32(esp) = v_; }
  /* 1020173b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020173d call 0x10201040 */ esp -= 4; M32(esp) = 0x10201742u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x1020173du); RETCHK(0x10201742u, 0x1020173du); LOADALL;
  /* 10201742 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10201746 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201747 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020174cu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201747u); RETCHK(0x1020174cu, 0x10201747u); LOADALL;
  /* 1020174c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020174f ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201760(CPU *c) {
  NATIVE_HOOK(0x10201760u) REGS; LOADALL;
L_10201760:;
  /* 10201760 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201763 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201768 mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 1020176c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020176e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201772 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201773 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201777 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201779 mov ecx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 1020177d push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 1020177f mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201783 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201784 lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 10201788 mov word ptr [esp + 0x19], ax */ { const u32 m_ = (u32)(esp + 0x19u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1020178d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020178e mov byte ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); M8(m_) = (u8)(0x0u); }
  /* 10201793 mov byte ptr [esp + 0x1f], al */ { const u32 m_ = (u32)(esp + 0x1fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201797 call 0x10204e10 */ esp -= 4; M32(esp) = 0x1020179cu; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x10201797u); RETCHK(0x1020179cu, 0x10201797u); LOADALL;
  /* 1020179c mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 102017a0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102017a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102017a4 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 102017a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102017a9 push 0x477 */ { u32 v_ = 0x477u; esp -= 4; M32(esp) = v_; }
  /* 102017ae mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102017b0 call 0x10201040 */ esp -= 4; M32(esp) = 0x102017b5u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102017b0u); RETCHK(0x102017b5u, 0x102017b0u); LOADALL;
  /* 102017b5 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 102017b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102017ba call 0x10204f65 */ esp -= 4; M32(esp) = 0x102017bfu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x102017bau); RETCHK(0x102017bfu, 0x102017bau); LOADALL;
  /* 102017bf add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102017c2 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_102017d0(CPU *c) {
  NATIVE_HOOK(0x102017d0u) REGS; LOADALL;
L_102017d0:;
  /* 102017d0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102017d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102017d5 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102017d9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102017da push 0x479 */ { u32 v_ = 0x479u; esp -= 4; M32(esp) = v_; }
  /* 102017df call 0x10201040 */ esp -= 4; M32(esp) = 0x102017e4u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102017dfu); RETCHK(0x102017e4u, 0x102017dfu); LOADALL;
  /* 102017e4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102017f0(CPU *c) {
  NATIVE_HOOK(0x102017f0u) REGS; LOADALL;
L_102017f0:;
  /* 102017f0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102017f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102017f5 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102017f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102017fa push 0x47b */ { u32 v_ = 0x47bu; esp -= 4; M32(esp) = v_; }
  /* 102017ff call 0x10201040 */ esp -= 4; M32(esp) = 0x10201804u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102017ffu); RETCHK(0x10201804u, 0x102017ffu); LOADALL;
  /* 10201804 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10201810(CPU *c) {
  NATIVE_HOOK(0x10201810u) REGS; LOADALL;
L_10201810:;
  /* 10201810 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201814 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201815 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10201819 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020181a push 0x4b0 */ { u32 v_ = 0x4b0u; esp -= 4; M32(esp) = v_; }
  /* 1020181f call 0x10201040 */ esp -= 4; M32(esp) = 0x10201824u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x1020181fu); RETCHK(0x10201824u, 0x1020181fu); LOADALL;
  /* 10201824 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10201830(CPU *c) {
  NATIVE_HOOK(0x10201830u) REGS; LOADALL;
L_10201830:;
  /* 10201830 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201834 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201838 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020183c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020183d lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10201841 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201842 push 0x4b2 */ { u32 v_ = 0x4b2u; esp -= 4; M32(esp) = v_; }
  /* 10201847 call 0x10201040 */ esp -= 4; M32(esp) = 0x1020184cu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201847u); RETCHK(0x1020184cu, 0x10201847u); LOADALL;
  /* 1020184c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10201850(CPU *c) {
  NATIVE_HOOK(0x10201850u) REGS; LOADALL;
L_10201850:;
  /* 10201850 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201854 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201858 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020185c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020185d lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10201861 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201862 push 0x4b4 */ { u32 v_ = 0x4b4u; esp -= 4; M32(esp) = v_; }
  /* 10201867 call 0x10201040 */ esp -= 4; M32(esp) = 0x1020186cu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201867u); RETCHK(0x1020186cu, 0x10201867u); LOADALL;
  /* 1020186c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10201870(CPU *c) {
  NATIVE_HOOK(0x10201870u) REGS; LOADALL;
L_10201870:;
  /* 10201870 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201874 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201878 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 1020187c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020187d lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10201881 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201882 push 0x4b6 */ { u32 v_ = 0x4b6u; esp -= 4; M32(esp) = v_; }
  /* 10201887 call 0x10201040 */ esp -= 4; M32(esp) = 0x1020188cu; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x10201887u); RETCHK(0x1020188cu, 0x10201887u); LOADALL;
  /* 1020188c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10201890(CPU *c) {
  NATIVE_HOOK(0x10201890u) REGS; LOADALL;
L_10201890:;
  /* 10201890 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10201894 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201895 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10201899 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020189a push 0x4b8 */ { u32 v_ = 0x4b8u; esp -= 4; M32(esp) = v_; }
  /* 1020189f call 0x10201040 */ esp -= 4; M32(esp) = 0x102018a4u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x1020189fu); RETCHK(0x102018a4u, 0x1020189fu); LOADALL;
  /* 102018a4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102018b0(CPU *c) {
  NATIVE_HOOK(0x102018b0u) REGS; LOADALL;
L_102018b0:;
  /* 102018b0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102018b4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102018b5 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102018b9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102018ba push 0x4ba */ { u32 v_ = 0x4bau; esp -= 4; M32(esp) = v_; }
  /* 102018bf call 0x10201040 */ esp -= 4; M32(esp) = 0x102018c4u; SAVEALL; F_10201040(c); ABI_CHECK(0x10201040u, 0x102018bfu); RETCHK(0x102018c4u, 0x102018bfu); LOADALL;
  /* 102018c4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102018d0(CPU *c) {
  NATIVE_HOOK(0x102018d0u) REGS; LOADALL;
L_102018d0:;
  /* 102018d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102018d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102018d3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 102018d6 sub esp, 0x470 */ { u32 a_ = esp, b_ = 0x470u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102018dc mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102018e1 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 102018e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102018e5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102018e6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102018e8 mov dword ptr [esp + 0x474], eax */ { const u32 m_ = (u32)(esp + 0x474u); M32(m_) = (u32)(eax); }
  /* 102018ef xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102018f1 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 102018f9 mov ecx, 0x8d */ { ecx = (u32)(0x8du); }
  /* 102018fe lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10201902 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10201904 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10201907 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1020190b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020190c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020190d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020190e push 0x3e9 */ { u32 v_ = 0x3e9u; esp -= 4; M32(esp) = v_; }
  /* 10201913 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201916 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020191bu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201916u); RETCHK(0x1020191bu, 0x10201916u); LOADALL;
  /* 1020191b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020191d jl 0x102019e5 */ if (LT_) goto L_102019e5;
  /* 10201923 mov dx, word ptr [esp + 0x236] */ { const u32 m_ = (u32)(esp + 0x236u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 1020192b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020192d mov ecx, 0x8b */ { ecx = (u32)(0x8bu); }
  /* 10201932 lea edi, [esp + 0x244] */ edi = (u32)((u32)(esp + 0x244u));
  /* 10201939 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 1020193b mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 1020193f mov cx, word ptr [esp + 0x234] */ { const u32 m_ = (u32)(esp + 0x234u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10201947 mov dword ptr [esp + 0x240], eax */ { const u32 m_ = (u32)(esp + 0x240u); M32(m_) = (u32)(eax); }
  /* 1020194e push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10201950 lea eax, [esp + 0x18] */ eax = (u32)((u32)(esp + 0x18u));
  /* 10201954 mov word ptr [esp + 0x468], cx */ { const u32 m_ = (u32)(esp + 0x468u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 1020195c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020195d lea ecx, [esp + 0x24c] */ ecx = (u32)((u32)(esp + 0x24cu));
  /* 10201964 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201965 mov word ptr [esp + 0x472], dx */ { const u32 m_ = (u32)(esp + 0x472u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 1020196d call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201972u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020196du); RETCHK(0x10201972u, 0x1020196du); LOADALL;
  /* 10201972 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 10201977 lea edx, [esp + 0x44] */ edx = (u32)((u32)(esp + 0x44u));
  /* 1020197b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020197c lea eax, [esp + 0x278] */ eax = (u32)((u32)(esp + 0x278u));
  /* 10201983 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201984 call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201989u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x10201984u); RETCHK(0x10201989u, 0x10201984u); LOADALL;
  /* 10201989 push 0xff */ { u32 v_ = 0xffu; esp -= 4; M32(esp) = v_; }
  /* 1020198e lea ecx, [esp + 0x150] */ ecx = (u32)((u32)(esp + 0x150u));
  /* 10201995 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201996 lea edx, [esp + 0x384] */ edx = (u32)((u32)(esp + 0x384u));
  /* 1020199d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020199e call 0x10204e10 */ esp -= 4; M32(esp) = 0x102019a3u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x1020199eu); RETCHK(0x102019a3u, 0x1020199eu); LOADALL;
  /* 102019a3 mov eax, dword ptr [esp + 0x25c] */ { const u32 m_ = (u32)(esp + 0x25cu); eax = (u32)(M32(m_)); }
  /* 102019aa mov ecx, dword ptr [esp + 0x260] */ { const u32 m_ = (u32)(esp + 0x260u); ecx = (u32)(M32(m_)); }
  /* 102019b1 mov dword ptr [esp + 0x48c], eax */ { const u32 m_ = (u32)(esp + 0x48cu); M32(m_) = (u32)(eax); }
  /* 102019b8 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 102019bb add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102019be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102019bf lea eax, [esp + 0x244] */ eax = (u32)((u32)(esp + 0x244u));
  /* 102019c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102019c7 mov eax, dword ptr [esp + 0x15] */ { const u32 m_ = (u32)(esp + 0x15u); eax = (u32)(M32(m_)); }
  /* 102019cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102019cc mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 102019d0 mov dword ptr [esp + 0x478], ecx */ { const u32 m_ = (u32)(esp + 0x478u); M32(m_) = (u32)(ecx); }
  /* 102019d7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102019da mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 102019dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102019dd mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 102019e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102019e2 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102019e5u; SAVEALL; call_ind(c, t_); RETCHK(0x102019e5u, 0x102019e2u); LOADALL; }
L_102019e5:;
  /* 102019e5 mov ecx, dword ptr [esp + 0x474] */ { const u32 m_ = (u32)(esp + 0x474u); ecx = (u32)(M32(m_)); }
  /* 102019ec call 0x10204f65 */ esp -= 4; M32(esp) = 0x102019f1u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x102019ecu); RETCHK(0x102019f1u, 0x102019ecu); LOADALL;
  /* 102019f1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102019f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102019f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 102019f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102019f6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201a00(CPU *c) {
  NATIVE_HOOK(0x10201a00u) REGS; LOADALL;
L_10201a00:;
  /* 10201a00 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201a03 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10201a07 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201a09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201a0a mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10201a0e mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10201a12 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201a14 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 10201a18 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201a1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201a1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201a1e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201a1f push 0x3eb */ { u32 v_ = 0x3ebu; esp -= 4; M32(esp) = v_; }
  /* 10201a24 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201a27 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201a2cu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201a27u); RETCHK(0x10201a2cu, 0x10201a27u); LOADALL;
  /* 10201a2c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201a2e jl 0x10201a47 */ if (LT_) goto L_10201a47;
  /* 10201a30 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10201a34 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201a37 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10201a39 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201a3a mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10201a3e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201a3f mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10201a43 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201a44 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201a47u; SAVEALL; call_ind(c, t_); RETCHK(0x10201a47u, 0x10201a44u); LOADALL; }
L_10201a47:;
  /* 10201a47 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201a48 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201a4b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201a50(CPU *c) {
  NATIVE_HOOK(0x10201a50u) REGS; LOADALL;
L_10201a50:;
  /* 10201a50 sub esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201a53 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201a58 mov edx, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); edx = (u32)(M32(m_)); }
  /* 10201a5c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201a5d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10201a5e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201a60 mov dword ptr [esp + 0x78], eax */ { const u32 m_ = (u32)(esp + 0x78u); M32(m_) = (u32)(eax); }
  /* 10201a64 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201a66 mov dword ptr [esp + 0x2c], 0 */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 10201a6e mov ecx, 0x12 */ { ecx = (u32)(0x12u); }
  /* 10201a73 lea edi, [esp + 0x30] */ edi = (u32)((u32)(esp + 0x30u));
  /* 10201a77 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10201a79 mov ecx, dword ptr [esp + 0x84] */ { const u32 m_ = (u32)(esp + 0x84u); ecx = (u32)(M32(m_)); }
  /* 10201a80 lea eax, [esp + 0x2c] */ eax = (u32)((u32)(esp + 0x2cu));
  /* 10201a84 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201a85 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201a86 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201a87 push 0x3ed */ { u32 v_ = 0x3edu; esp -= 4; M32(esp) = v_; }
  /* 10201a8c lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201a8f call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201a94u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201a8fu); RETCHK(0x10201a94u, 0x10201a8fu); LOADALL;
  /* 10201a94 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201a96 jl 0x10201b13 */ if (LT_) goto L_10201b13;
  /* 10201a98 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201a9a mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10201a9e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10201aa2 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10201aa6 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 10201aaa mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10201aae mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10201ab2 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 10201ab6 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 10201aba mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 10201abe cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10201ac0 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10201ac8 je 0x10201ace */ if (ZF_) goto L_10201ace;
  /* 10201aca cmp al, 3 */ { u32 a_ = (eax & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10201acc jne 0x10201aee */ if (!ZF_) goto L_10201aee;
L_10201ace:;
  /* 10201ace mov ecx, dword ptr [esp + 0x54] */ { const u32 m_ = (u32)(esp + 0x54u); ecx = (u32)(M32(m_)); }
  /* 10201ad2 push 0x1f */ { u32 v_ = 0x1fu; esp -= 4; M32(esp) = v_; }
  /* 10201ad4 lea edx, [esp + 0x5c] */ edx = (u32)((u32)(esp + 0x5cu));
  /* 10201ad8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201ad9 lea eax, [esp + 0x14] */ eax = (u32)((u32)(esp + 0x14u));
  /* 10201add push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201ade mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 10201ae2 call 0x10204e10 */ esp -= 4; M32(esp) = 0x10201ae7u; SAVEALL; F_10204e10(c); ABI_CHECK(0x10204e10u, 0x10201ae2u); RETCHK(0x10201ae7u, 0x10201ae2u); LOADALL;
  /* 10201ae7 mov eax, dword ptr [esp + 0x5c] */ { const u32 m_ = (u32)(esp + 0x5cu); eax = (u32)(M32(m_)); }
  /* 10201aeb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_10201aee:;
  /* 10201aee mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201af1 mov esi, dword ptr [esp + 0x88] */ { const u32 m_ = (u32)(esp + 0x88u); esi = (u32)(M32(m_)); }
  /* 10201af8 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201afa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201afb lea esi, [esp + 0xc] */ esi = (u32)((u32)(esp + 0xcu));
  /* 10201aff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201b00 mov esi, dword ptr [esp + 0x59] */ { const u32 m_ = (u32)(esp + 0x59u); esi = (u32)(M32(m_)); }
  /* 10201b04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201b05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201b06 lea eax, [esp + 0x40] */ eax = (u32)((u32)(esp + 0x40u));
  /* 10201b0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201b0b mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 10201b0f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201b10 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201b13u; SAVEALL; call_ind(c, t_); RETCHK(0x10201b13u, 0x10201b10u); LOADALL; }
L_10201b13:;
  /* 10201b13 mov ecx, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); ecx = (u32)(M32(m_)); }
  /* 10201b17 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10201b18 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201b19 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201b1eu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201b19u); RETCHK(0x10201b1eu, 0x10201b19u); LOADALL;
  /* 10201b1e add esp, 0x74 */ { u32 a_ = esp, b_ = 0x74u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201b21 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201b30(CPU *c) {
  NATIVE_HOOK(0x10201b30u) REGS; LOADALL;
L_10201b30:;
  /* 10201b30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201b31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201b33 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201b36 sub esp, 0x2e0 */ { u32 a_ = esp, b_ = 0x2e0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201b3c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201b41 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201b44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201b45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10201b46 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201b48 mov dword ptr [esp + 0x2e4], eax */ { const u32 m_ = (u32)(esp + 0x2e4u); M32(m_) = (u32)(eax); }
  /* 10201b4f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201b51 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 10201b56 mov ecx, 0xb4 */ { ecx = (u32)(0xb4u); }
  /* 10201b5b lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10201b5f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10201b61 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10201b64 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10201b68 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201b69 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201b6a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201b6b push 0x3ef */ { u32 v_ = 0x3efu; esp -= 4; M32(esp) = v_; }
  /* 10201b70 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201b73 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201b78u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201b73u); RETCHK(0x10201b78u, 0x10201b73u); LOADALL;
  /* 10201b78 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201b7a jl 0x10201b92 */ if (LT_) goto L_10201b92;
  /* 10201b7c mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10201b7f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201b82 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10201b84 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201b85 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 10201b89 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201b8a mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10201b8e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201b8f call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201b92u; SAVEALL; call_ind(c, t_); RETCHK(0x10201b92u, 0x10201b8fu); LOADALL; }
L_10201b92:;
  /* 10201b92 mov ecx, dword ptr [esp + 0x2e4] */ { const u32 m_ = (u32)(esp + 0x2e4u); ecx = (u32)(M32(m_)); }
  /* 10201b99 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201b9eu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201b99u); RETCHK(0x10201b9eu, 0x10201b99u); LOADALL;
  /* 10201b9e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10201b9f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201ba0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10201ba2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10201ba3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201bb0(CPU *c) {
  NATIVE_HOOK(0x10201bb0u) REGS; LOADALL;
L_10201bb0:;
  /* 10201bb0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201bb1 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201bb5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201bb6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201bb8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10201bbc lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201bc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201bc1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201bc2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201bc3 push 0x3f1 */ { u32 v_ = 0x3f1u; esp -= 4; M32(esp) = v_; }
  /* 10201bc8 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201bcb mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10201bd3 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201bd8u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201bd3u); RETCHK(0x10201bd8u, 0x10201bd3u); LOADALL;
  /* 10201bd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201bda jl 0x10201bee */ if (LT_) goto L_10201bee;
  /* 10201bdc mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10201be0 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201be3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10201be5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201be6 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201bea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201beb call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201beeu; SAVEALL; call_ind(c, t_); RETCHK(0x10201beeu, 0x10201bebu); LOADALL; }
L_10201bee:;
  /* 10201bee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201bef pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10201bf0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201c90(CPU *c) {
  NATIVE_HOOK(0x10201c90u) REGS; LOADALL;
L_10201c90:;
  /* 10201c90 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201c91 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201c95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201c96 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201c98 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10201c9c lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201ca0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201ca1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201ca2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201ca3 push 0x3f1 */ { u32 v_ = 0x3f1u; esp -= 4; M32(esp) = v_; }
  /* 10201ca8 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201cab mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10201cb3 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201cb8u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201cb3u); RETCHK(0x10201cb8u, 0x10201cb3u); LOADALL;
  /* 10201cb8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201cba jl 0x10201cce */ if (LT_) goto L_10201cce;
  /* 10201cbc mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10201cc0 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201cc3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10201cc5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201cc6 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201cca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201ccb call dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201cceu; SAVEALL; call_ind(c, t_); RETCHK(0x10201cceu, 0x10201ccbu); LOADALL; }
L_10201cce:;
  /* 10201cce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201ccf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10201cd0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201d60(CPU *c) {
  NATIVE_HOOK(0x10201d60u) REGS; LOADALL;
L_10201d60:;
  /* 10201d60 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201d63 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201d68 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 10201d6c mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 10201d70 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201d72 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10201d76 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 10201d7a mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 10201d7e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10201d82 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10201d86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201d87 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 10201d8b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201d8d mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10201d91 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 10201d95 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10201d99 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201d9a mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 10201d9e mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 10201da2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201da3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201da4 push 0x3f7 */ { u32 v_ = 0x3f7u; esp -= 4; M32(esp) = v_; }
  /* 10201da9 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201dac mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10201db4 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201db9u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201db4u); RETCHK(0x10201db9u, 0x10201db4u); LOADALL;
  /* 10201db9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201dbb jl 0x10201ddd */ if (LT_) goto L_10201ddd;
  /* 10201dbd mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10201dc1 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201dc4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201dc6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201dc7 cmp byte ptr [esp + 0x2c], 1 */ { const u32 m_ = (u32)(esp + 0x2cu); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 10201dcc sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 10201dcf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201dd0 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 10201dd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201dd5 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10201dd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201dda call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201dddu; SAVEALL; call_ind(c, t_); RETCHK(0x10201dddu, 0x10201ddau); LOADALL; }
L_10201ddd:;
  /* 10201ddd mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 10201de1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201de2 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201de7u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201de2u); RETCHK(0x10201de7u, 0x10201de2u); LOADALL;
  /* 10201de7 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201dea ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201e80(CPU *c) {
  NATIVE_HOOK(0x10201e80u) REGS; LOADALL;
L_10201e80:;
  /* 10201e80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201e81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201e83 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201e86 mov eax, 0x12d0 */ { eax = (u32)(0x12d0u); }
  /* 10201e8b call 0x10204f80 */ esp -= 4; M32(esp) = 0x10201e90u; SAVEALL; F_10204f80(c); ABI_CHECK(0x10204f80u, 0x10201e8bu); RETCHK(0x10201e90u, 0x10201e8bu); LOADALL;
  /* 10201e90 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201e95 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201e98 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201e99 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10201e9a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201e9c mov dword ptr [esp + 0x12d4], eax */ { const u32 m_ = (u32)(esp + 0x12d4u); M32(m_) = (u32)(eax); }
  /* 10201ea3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201ea5 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10201ead mov ecx, 0x4b1 */ { ecx = (u32)(0x4b1u); }
  /* 10201eb2 lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10201eb6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10201eb8 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10201ebb lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 10201ebf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201ec0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201ec1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201ec2 push 0x3fa */ { u32 v_ = 0x3fau; esp -= 4; M32(esp) = v_; }
  /* 10201ec7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201eca call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201ecfu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201ecau); RETCHK(0x10201ecfu, 0x10201ecau); LOADALL;
  /* 10201ecf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201ed1 jl 0x10201ef3 */ if (LT_) goto L_10201ef3;
  /* 10201ed3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10201ed6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201ed9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10201edb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201edc lea edx, [esp + 0x14] */ edx = (u32)((u32)(esp + 0x14u));
  /* 10201ee0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201ee1 mov edx, dword ptr [esp + 0x16] */ { const u32 m_ = (u32)(esp + 0x16u); edx = (u32)(M32(m_)); }
  /* 10201ee5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201ee6 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10201eea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201eeb mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 10201eef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201ef0 call dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201ef3u; SAVEALL; call_ind(c, t_); RETCHK(0x10201ef3u, 0x10201ef0u); LOADALL; }
L_10201ef3:;
  /* 10201ef3 mov ecx, dword ptr [esp + 0x12d4] */ { const u32 m_ = (u32)(esp + 0x12d4u); ecx = (u32)(M32(m_)); }
  /* 10201efa call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201effu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201efau); RETCHK(0x10201effu, 0x10201efau); LOADALL;
  /* 10201eff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10201f00 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201f01 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10201f03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10201f04 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10201f10(CPU *c) {
  NATIVE_HOOK(0x10201f10u) REGS; LOADALL;
L_10201f10:;
  /* 10201f10 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201f11 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201f15 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201f16 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201f18 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10201f1c lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201f20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201f21 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201f22 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201f23 push 0x3fc */ { u32 v_ = 0x3fcu; esp -= 4; M32(esp) = v_; }
  /* 10201f28 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201f2b mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10201f33 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201f38u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201f33u); RETCHK(0x10201f38u, 0x10201f33u); LOADALL;
  /* 10201f38 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201f3a jl 0x10201f4e */ if (LT_) goto L_10201f4e;
  /* 10201f3c mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10201f40 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201f43 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10201f45 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201f46 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10201f4a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201f4b call dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201f4eu; SAVEALL; call_ind(c, t_); RETCHK(0x10201f4eu, 0x10201f4bu); LOADALL; }
L_10201f4e:;
  /* 10201f4e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201f4f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10201f50 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202120(CPU *c) {
  NATIVE_HOOK(0x10202120u) REGS; LOADALL;
L_10202120:;
  /* 10202120 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10202121 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10202123 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202126 sub esp, 0x110 */ { u32 a_ = esp, b_ = 0x110u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020212c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10202131 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10202134 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202135 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202136 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202138 mov dword ptr [esp + 0x114], eax */ { const u32 m_ = (u32)(esp + 0x114u); M32(m_) = (u32)(eax); }
  /* 1020213f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202141 mov dword ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 10202149 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 1020214e lea edi, [esp + 0xc] */ edi = (u32)((u32)(esp + 0xcu));
  /* 10202152 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10202154 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10202157 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1020215b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020215c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020215d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020215e push 0x403 */ { u32 v_ = 0x403u; esp -= 4; M32(esp) = v_; }
  /* 10202163 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202166 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020216bu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202166u); RETCHK(0x1020216bu, 0x10202166u); LOADALL;
  /* 1020216b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020216d jl 0x10202185 */ if (LT_) goto L_10202185;
  /* 1020216f mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10202172 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202175 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202177 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202178 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 1020217c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020217d mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10202181 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202182 call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202185u; SAVEALL; call_ind(c, t_); RETCHK(0x10202185u, 0x10202182u); LOADALL; }
L_10202185:;
  /* 10202185 mov ecx, dword ptr [esp + 0x114] */ { const u32 m_ = (u32)(esp + 0x114u); ecx = (u32)(M32(m_)); }
  /* 1020218c call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202191u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020218cu); RETCHK(0x10202191u, 0x1020218cu); LOADALL;
  /* 10202191 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202192 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202193 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10202195 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10202196 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102021a0(CPU *c) {
  NATIVE_HOOK(0x102021a0u) REGS; LOADALL;
L_102021a0:;
  /* 102021a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102021a1 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 102021a5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102021a6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102021a8 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 102021ac lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 102021b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102021b1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102021b2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102021b3 push 0x405 */ { u32 v_ = 0x405u; esp -= 4; M32(esp) = v_; }
  /* 102021b8 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102021bb mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 102021c3 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102021c8u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102021c3u); RETCHK(0x102021c8u, 0x102021c3u); LOADALL;
  /* 102021c8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102021ca jl 0x102021de */ if (LT_) goto L_102021de;
  /* 102021cc mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 102021d0 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102021d3 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102021d5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102021d6 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 102021da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102021db call dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102021deu; SAVEALL; call_ind(c, t_); RETCHK(0x102021deu, 0x102021dbu); LOADALL; }
L_102021de:;
  /* 102021de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102021df pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102021e0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202260(CPU *c) {
  NATIVE_HOOK(0x10202260u) REGS; LOADALL;
L_10202260:;
  /* 10202260 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202261 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10202265 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202266 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202268 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1020226c lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10202270 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202271 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202272 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202273 push 0x408 */ { u32 v_ = 0x408u; esp -= 4; M32(esp) = v_; }
  /* 10202278 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1020227b mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10202283 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10202288u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202283u); RETCHK(0x10202288u, 0x10202283u); LOADALL;
  /* 10202288 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020228a jl 0x1020229e */ if (LT_) goto L_1020229e;
  /* 1020228c mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10202290 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202293 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202295 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202296 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1020229a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020229b call dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020229eu; SAVEALL; call_ind(c, t_); RETCHK(0x1020229eu, 0x1020229bu); LOADALL; }
L_1020229e:;
  /* 1020229e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020229f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102022a0 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202320(CPU *c) {
  NATIVE_HOOK(0x10202320u) REGS; LOADALL;
L_10202320:;
  /* 10202320 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202323 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10202328 mov edx, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); edx = (u32)(M32(m_)); }
  /* 1020232c mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 10202330 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202332 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202336 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020233a mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 1020233e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10202342 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202343 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 10202347 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202349 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 1020234d mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10202351 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10202355 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202356 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 1020235a mov eax, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); eax = (u32)(M32(m_)); }
  /* 1020235e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020235f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202360 push 0x40b */ { u32 v_ = 0x40bu; esp -= 4; M32(esp) = v_; }
  /* 10202365 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202368 mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10202370 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10202375u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202370u); RETCHK(0x10202375u, 0x10202370u); LOADALL;
  /* 10202375 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10202377 jl 0x10202390 */ if (LT_) goto L_10202390;
  /* 10202379 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 1020237d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202380 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202382 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202383 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 10202387 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202388 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 1020238c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020238d call dword ptr [edx + 0x54] */ { const u32 m_ = (u32)(edx + 0x54u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202390u; SAVEALL; call_ind(c, t_); RETCHK(0x10202390u, 0x1020238du); LOADALL; }
L_10202390:;
  /* 10202390 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10202394 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202395 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020239au; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202395u); RETCHK(0x1020239au, 0x10202395u); LOADALL;
  /* 1020239a add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020239d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202420(CPU *c) {
  NATIVE_HOOK(0x10202420u) REGS; LOADALL;
L_10202420:;
  /* 10202420 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202423 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10202428 mov edx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); edx = (u32)(M32(m_)); }
  /* 1020242c mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 10202430 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202432 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202436 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 1020243a mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 1020243e mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10202442 mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 10202446 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202447 mov dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(eax); }
  /* 1020244b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020244d mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10202451 mov dword ptr [esp + 0x24], eax */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(eax); }
  /* 10202455 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10202459 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020245a mov dword ptr [esp + 0x2c], eax */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(eax); }
  /* 1020245e mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 10202462 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202463 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202464 push 0x40e */ { u32 v_ = 0x40eu; esp -= 4; M32(esp) = v_; }
  /* 10202469 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1020246c mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10202474 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10202479u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202474u); RETCHK(0x10202479u, 0x10202474u); LOADALL;
  /* 10202479 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020247b jl 0x10202499 */ if (LT_) goto L_10202499;
  /* 1020247d mov eax, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); eax = (u32)(M32(m_)); }
  /* 10202481 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202484 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202486 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202487 mov eax, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); eax = (u32)(M32(m_)); }
  /* 1020248b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020248c lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 10202490 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202491 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 10202495 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202496 call dword ptr [edx + 0x5c] */ { const u32 m_ = (u32)(edx + 0x5cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202499u; SAVEALL; call_ind(c, t_); RETCHK(0x10202499u, 0x10202496u); LOADALL; }
L_10202499:;
  /* 10202499 mov ecx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 1020249d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020249e call 0x10204f65 */ esp -= 4; M32(esp) = 0x102024a3u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020249eu); RETCHK(0x102024a3u, 0x1020249eu); LOADALL;
  /* 102024a3 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102024a6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202540(CPU *c) {
  NATIVE_HOOK(0x10202540u) REGS; LOADALL;
L_10202540:;
  /* 10202540 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202541 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10202545 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202546 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202548 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 1020254c lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10202550 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202551 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202552 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202553 push 0x411 */ { u32 v_ = 0x411u; esp -= 4; M32(esp) = v_; }
  /* 10202558 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1020255b mov dword ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 10202563 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10202568u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202563u); RETCHK(0x10202568u, 0x10202563u); LOADALL;
  /* 10202568 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020256a jl 0x1020257e */ if (LT_) goto L_1020257e;
  /* 1020256c mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 10202570 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202573 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202575 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202576 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 1020257a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020257b call dword ptr [eax + 0x64] */ { const u32 m_ = (u32)(eax + 0x64u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020257eu; SAVEALL; call_ind(c, t_); RETCHK(0x1020257eu, 0x1020257bu); LOADALL; }
L_1020257e:;
  /* 1020257e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020257f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10202580 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102025c0(CPU *c) {
  NATIVE_HOOK(0x102025c0u) REGS; LOADALL;
L_102025c0:;
  /* 102025c0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 102025c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102025c5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102025c7 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 102025cb lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 102025cf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102025d0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102025d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102025d2 push 0x478 */ { u32 v_ = 0x478u; esp -= 4; M32(esp) = v_; }
  /* 102025d7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102025da call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102025dfu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102025dau); RETCHK(0x102025dfu, 0x102025dau); LOADALL;
  /* 102025df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102025e1 jl 0x102025f5 */ if (LT_) goto L_102025f5;
  /* 102025e3 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102025e7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102025ea mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102025ec push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102025ed mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102025f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102025f2 call dword ptr [eax + 0x6c] */ { const u32 m_ = (u32)(eax + 0x6cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102025f5u; SAVEALL; call_ind(c, t_); RETCHK(0x102025f5u, 0x102025f2u); LOADALL; }
L_102025f5:;
  /* 102025f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102025f6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202600(CPU *c) {
  NATIVE_HOOK(0x10202600u) REGS; LOADALL;
L_10202600:;
  /* 10202600 mov eax, 0x12c8 */ { eax = (u32)(0x12c8u); }
  /* 10202605 call 0x10204f80 */ esp -= 4; M32(esp) = 0x1020260au; SAVEALL; F_10204f80(c); ABI_CHECK(0x10204f80u, 0x10202605u); RETCHK(0x1020260au, 0x10202605u); LOADALL;
  /* 1020260a mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 1020260f mov edx, dword ptr [esp + 0x12cc] */ { const u32 m_ = (u32)(esp + 0x12ccu); edx = (u32)(M32(m_)); }
  /* 10202616 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202617 mov dword ptr [esp + 0x12c8], eax */ { const u32 m_ = (u32)(esp + 0x12c8u); M32(m_) = (u32)(eax); }
  /* 1020261e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202620 mov ecx, dword ptr [esp + 0x12d4] */ { const u32 m_ = (u32)(esp + 0x12d4u); ecx = (u32)(M32(m_)); }
  /* 10202627 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 1020262b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020262c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020262d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020262e push 0x47a */ { u32 v_ = 0x47au; esp -= 4; M32(esp) = v_; }
  /* 10202633 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202636 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020263bu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202636u); RETCHK(0x1020263bu, 0x10202636u); LOADALL;
  /* 1020263b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020263d jl 0x1020265e */ if (LT_) goto L_1020265e;
  /* 1020263f mov edx, dword ptr [esp + 0x12d8] */ { const u32 m_ = (u32)(esp + 0x12d8u); edx = (u32)(M32(m_)); }
  /* 10202646 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202649 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 1020264b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020264c lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 10202650 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202651 mov edx, dword ptr [esp + 0xe] */ { const u32 m_ = (u32)(esp + 0xeu); edx = (u32)(M32(m_)); }
  /* 10202655 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202656 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 1020265a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020265b call dword ptr [eax + 0x70] */ { const u32 m_ = (u32)(eax + 0x70u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020265eu; SAVEALL; call_ind(c, t_); RETCHK(0x1020265eu, 0x1020265bu); LOADALL; }
L_1020265e:;
  /* 1020265e mov ecx, dword ptr [esp + 0x12c8] */ { const u32 m_ = (u32)(esp + 0x12c8u); ecx = (u32)(M32(m_)); }
  /* 10202665 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202666 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020266bu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202666u); RETCHK(0x1020266bu, 0x10202666u); LOADALL;
  /* 1020266b add esp, 0x12c8 */ { u32 a_ = esp, b_ = 0x12c8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202671 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202680(CPU *c) {
  NATIVE_HOOK(0x10202680u) REGS; LOADALL;
L_10202680:;
  /* 10202680 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10202684 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202685 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202687 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1020268b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020268f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202690 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202691 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202692 push 0x47c */ { u32 v_ = 0x47cu; esp -= 4; M32(esp) = v_; }
  /* 10202697 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1020269a call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020269fu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x1020269au); RETCHK(0x1020269fu, 0x1020269au); LOADALL;
  /* 1020269f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102026a1 jl 0x102026b5 */ if (LT_) goto L_102026b5;
  /* 102026a3 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102026a7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102026aa mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102026ac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102026ad mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102026b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102026b2 call dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102026b5u; SAVEALL; call_ind(c, t_); RETCHK(0x102026b5u, 0x102026b2u); LOADALL; }
L_102026b5:;
  /* 102026b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102026b6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102026c0(CPU *c) {
  NATIVE_HOOK(0x102026c0u) REGS; LOADALL;
L_102026c0:;
  /* 102026c0 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 102026c4 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102026c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102026c8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102026ca mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 102026ce lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 102026d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102026d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102026d4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102026d5 push 0x4b1 */ { u32 v_ = 0x4b1u; esp -= 4; M32(esp) = v_; }
  /* 102026da lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102026dd call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102026e2u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102026ddu); RETCHK(0x102026e2u, 0x102026ddu); LOADALL;
  /* 102026e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102026e4 jl 0x102026f8 */ if (LT_) goto L_102026f8;
  /* 102026e6 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 102026ea mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102026ed mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102026ef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102026f0 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 102026f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102026f5 call dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102026f8u; SAVEALL; call_ind(c, t_); RETCHK(0x102026f8u, 0x102026f5u); LOADALL; }
L_102026f8:;
  /* 102026f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102026f9 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102026fc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202700(CPU *c) {
  NATIVE_HOOK(0x10202700u) REGS; LOADALL;
L_10202700:;
  /* 10202700 sub esp, 0xa3c */ { u32 a_ = esp, b_ = 0xa3cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202706 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 1020270b mov edx, dword ptr [esp + 0xa40] */ { const u32 m_ = (u32)(esp + 0xa40u); edx = (u32)(M32(m_)); }
  /* 10202712 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202713 mov dword ptr [esp + 0xa3c], eax */ { const u32 m_ = (u32)(esp + 0xa3cu); M32(m_) = (u32)(eax); }
  /* 1020271a mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020271c mov ecx, dword ptr [esp + 0xa48] */ { const u32 m_ = (u32)(esp + 0xa48u); ecx = (u32)(M32(m_)); }
  /* 10202723 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10202727 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202728 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202729 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020272a push 0x4b3 */ { u32 v_ = 0x4b3u; esp -= 4; M32(esp) = v_; }
  /* 1020272f lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202732 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10202737u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202732u); RETCHK(0x10202737u, 0x10202732u); LOADALL;
  /* 10202737 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10202739 jl 0x1020276a */ if (LT_) goto L_1020276a;
  /* 1020273b mov edx, dword ptr [esp + 0xa4c] */ { const u32 m_ = (u32)(esp + 0xa4cu); edx = (u32)(M32(m_)); }
  /* 10202742 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202745 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202747 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202748 mov edx, dword ptr [esp + 0xa3c] */ { const u32 m_ = (u32)(esp + 0xa3cu); edx = (u32)(M32(m_)); }
  /* 1020274f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202750 mov edx, dword ptr [esp + 0xa3c] */ { const u32 m_ = (u32)(esp + 0xa3cu); edx = (u32)(M32(m_)); }
  /* 10202757 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202758 lea edx, [esp + 0x40] */ edx = (u32)((u32)(esp + 0x40u));
  /* 1020275c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020275d mov edx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edx = (u32)(M32(m_)); }
  /* 10202761 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202762 lea edx, [esp + 0x18] */ edx = (u32)((u32)(esp + 0x18u));
  /* 10202766 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202767 call dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020276au; SAVEALL; call_ind(c, t_); RETCHK(0x1020276au, 0x10202767u); LOADALL; }
L_1020276a:;
  /* 1020276a mov ecx, dword ptr [esp + 0xa3c] */ { const u32 m_ = (u32)(esp + 0xa3cu); ecx = (u32)(M32(m_)); }
  /* 10202771 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202772 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202777u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202772u); RETCHK(0x10202777u, 0x10202772u); LOADALL;
  /* 10202777 add esp, 0xa3c */ { u32 a_ = esp, b_ = 0xa3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020277d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202780(CPU *c) {
  NATIVE_HOOK(0x10202780u) REGS; LOADALL;
L_10202780:;
  /* 10202780 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10202784 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202785 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202787 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1020278b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020278f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202790 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202791 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202792 push 0x4b5 */ { u32 v_ = 0x4b5u; esp -= 4; M32(esp) = v_; }
  /* 10202797 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 1020279a call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020279fu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x1020279au); RETCHK(0x1020279fu, 0x1020279au); LOADALL;
  /* 1020279f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102027a1 jl 0x102027b8 */ if (LT_) goto L_102027b8;
  /* 102027a3 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102027a7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102027aa mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102027ac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102027ad mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 102027b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102027b2 call dword ptr [eax + 0x80] */ { const u32 m_ = (u32)(eax + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102027b8u; SAVEALL; call_ind(c, t_); RETCHK(0x102027b8u, 0x102027b2u); LOADALL; }
L_102027b8:;
  /* 102027b8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102027b9 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102027c0(CPU *c) {
  NATIVE_HOOK(0x102027c0u) REGS; LOADALL;
L_102027c0:;
  /* 102027c0 sub esp, 0xec */ { u32 a_ = esp, b_ = 0xecu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102027c6 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102027cb mov edx, dword ptr [esp + 0xf0] */ { const u32 m_ = (u32)(esp + 0xf0u); edx = (u32)(M32(m_)); }
  /* 102027d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102027d3 mov dword ptr [esp + 0xec], eax */ { const u32 m_ = (u32)(esp + 0xecu); M32(m_) = (u32)(eax); }
  /* 102027da mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102027dc mov ecx, dword ptr [esp + 0xf8] */ { const u32 m_ = (u32)(esp + 0xf8u); ecx = (u32)(M32(m_)); }
  /* 102027e3 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 102027e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102027e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102027e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102027ea push 0x4b7 */ { u32 v_ = 0x4b7u; esp -= 4; M32(esp) = v_; }
  /* 102027ef lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102027f2 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102027f7u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102027f2u); RETCHK(0x102027f7u, 0x102027f2u); LOADALL;
  /* 102027f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102027f9 jl 0x10202819 */ if (LT_) goto L_10202819;
  /* 102027fb mov edx, dword ptr [esp + 0xfc] */ { const u32 m_ = (u32)(esp + 0xfcu); edx = (u32)(M32(m_)); }
  /* 10202802 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202805 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202807 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202808 lea edx, [esp + 0xc] */ edx = (u32)((u32)(esp + 0xcu));
  /* 1020280c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020280d movzx edx, word ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M16(m_)); }
  /* 10202812 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202813 call dword ptr [eax + 0x84] */ { const u32 m_ = (u32)(eax + 0x84u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202819u; SAVEALL; call_ind(c, t_); RETCHK(0x10202819u, 0x10202813u); LOADALL; }
L_10202819:;
  /* 10202819 mov ecx, dword ptr [esp + 0xec] */ { const u32 m_ = (u32)(esp + 0xecu); ecx = (u32)(M32(m_)); }
  /* 10202820 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202821 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202826u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202821u); RETCHK(0x10202826u, 0x10202821u); LOADALL;
  /* 10202826 add esp, 0xec */ { u32 a_ = esp, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020282c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202830(CPU *c) {
  NATIVE_HOOK(0x10202830u) REGS; LOADALL;
L_10202830:;
  /* 10202830 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10202834 sub esp, 0xc8 */ { u32 a_ = esp, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020283a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020283b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020283d mov ecx, dword ptr [esp + 0xd4] */ { const u32 m_ = (u32)(esp + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 10202844 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10202848 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202849 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020284a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020284b push 0x4b9 */ { u32 v_ = 0x4b9u; esp -= 4; M32(esp) = v_; }
  /* 10202850 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202853 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10202858u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202853u); RETCHK(0x10202858u, 0x10202853u); LOADALL;
  /* 10202858 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020285a jl 0x1020287e */ if (LT_) goto L_1020287e;
  /* 1020285c mov edx, dword ptr [esp + 0xd8] */ { const u32 m_ = (u32)(esp + 0xd8u); edx = (u32)(M32(m_)); }
  /* 10202863 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202866 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202868 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202869 lea edx, [esp + 0x10] */ edx = (u32)((u32)(esp + 0x10u));
  /* 1020286d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020286e mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10202872 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202873 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 10202877 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202878 call dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020287eu; SAVEALL; call_ind(c, t_); RETCHK(0x1020287eu, 0x10202878u); LOADALL; }
L_1020287e:;
  /* 1020287e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020287f add esp, 0xc8 */ { u32 a_ = esp, b_ = 0xc8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202885 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_10202890(CPU *c) {
  NATIVE_HOOK(0x10202890u) REGS; LOADALL;
L_10202890:;
  /* 10202890 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10202894 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202897 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202898 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020289a mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 1020289e lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 102028a2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102028a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102028a4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102028a5 push 0x4bb */ { u32 v_ = 0x4bbu; esp -= 4; M32(esp) = v_; }
  /* 102028aa lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102028ad call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102028b2u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102028adu); RETCHK(0x102028b2u, 0x102028adu); LOADALL;
  /* 102028b2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102028b4 jl 0x102028d0 */ if (LT_) goto L_102028d0;
  /* 102028b6 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 102028ba mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102028bd mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102028bf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102028c0 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 102028c4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102028c5 mov edx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edx = (u32)(M32(m_)); }
  /* 102028c9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102028ca call dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102028d0u; SAVEALL; call_ind(c, t_); RETCHK(0x102028d0u, 0x102028cau); LOADALL; }
L_102028d0:;
  /* 102028d0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102028d1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102028d4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_102028e0(CPU *c) {
  NATIVE_HOOK(0x102028e0u) REGS; LOADALL;
L_102028e0:;
  /* 102028e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102028e1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102028e3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102028e5 je 0x102028f5 */ if (ZF_) goto L_102028f5;
  /* 102028e7 call 0x10201010 */ esp -= 4; M32(esp) = 0x102028ecu; SAVEALL; F_10201010(c); ABI_CHECK(0x10201010u, 0x102028e7u); RETCHK(0x102028ecu, 0x102028e7u); LOADALL;
  /* 102028ec push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102028ed call 0x10204e07 */ esp -= 4; M32(esp) = 0x102028f2u; SAVEALL; F_10204e07(c); ABI_CHECK(0x10204e07u, 0x102028edu); RETCHK(0x102028f2u, 0x102028edu); LOADALL;
  /* 102028f2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_102028f5:;
  /* 102028f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102028f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10202900(CPU *c) {
  NATIVE_HOOK(0x10202900u) REGS; LOADALL;
  goto L_10202900;
L_10201c00:;
  /* 10201c00 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201c03 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201c08 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 10201c0c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201c0e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201c12 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201c16 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201c1a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201c1e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201c1f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201c21 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10201c25 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10201c27 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201c2b mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 10201c2f mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201c33 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10201c37 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201c3c mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 10201c40 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 10201c44 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201c45 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201c49 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 10201c4d mov dword ptr [esp + 0x34], ecx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ecx); }
  /* 10201c51 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10201c55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201c56 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201c57 push 0x3f2 */ { u32 v_ = 0x3f2u; esp -= 4; M32(esp) = v_; }
  /* 10201c5c lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201c5f mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201c64 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201c69u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201c64u); RETCHK(0x10201c69u, 0x10201c64u); LOADALL;
  /* 10201c69 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201c6b jl 0x10201c7a */ if (LT_) goto L_10201c7a;
  /* 10201c6d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201c70 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201c72 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201c76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201c77 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201c7au; SAVEALL; call_ind(c, t_); RETCHK(0x10201c7au, 0x10201c77u); LOADALL; }
L_10201c7a:;
  /* 10201c7a mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10201c7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201c7f call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201c84u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201c7fu); RETCHK(0x10201c84u, 0x10201c7fu); LOADALL;
  /* 10201c84 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201c87 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10201ce0:;
  /* 10201ce0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201ce3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201ce8 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10201cec mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10201cf0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201cf2 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201cf6 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201cfa mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201cfe mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201d02 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201d06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201d07 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201d0b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201d0d mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201d11 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201d16 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10201d1a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201d1b mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201d1f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10201d23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201d24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201d25 push 0x3f5 */ { u32 v_ = 0x3f5u; esp -= 4; M32(esp) = v_; }
  /* 10201d2a lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201d2d mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201d32 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201d37u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201d32u); RETCHK(0x10201d37u, 0x10201d32u); LOADALL;
  /* 10201d37 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201d39 jl 0x10201d48 */ if (LT_) goto L_10201d48;
  /* 10201d3b mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201d3e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201d40 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201d44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201d45 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201d48u; SAVEALL; call_ind(c, t_); RETCHK(0x10201d48u, 0x10201d45u); LOADALL; }
L_10201d48:;
  /* 10201d48 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10201d4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201d4d call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201d52u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201d4du); RETCHK(0x10201d52u, 0x10201d4du); LOADALL;
  /* 10201d52 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201d55 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10201df0:;
  /* 10201df0 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201df3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201df8 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 10201dfc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201dfe mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201e02 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201e06 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201e0a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201e0e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201e0f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201e11 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10201e15 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10201e17 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201e1b mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 10201e1f mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201e23 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10201e27 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201e2c mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 10201e30 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 10201e34 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201e35 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201e39 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 10201e3d mov dword ptr [esp + 0x34], ecx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ecx); }
  /* 10201e41 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10201e45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201e46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201e47 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
  /* 10201e4c lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201e4f mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201e54 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201e59u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201e54u); RETCHK(0x10201e59u, 0x10201e54u); LOADALL;
  /* 10201e59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201e5b jl 0x10201e6a */ if (LT_) goto L_10201e6a;
  /* 10201e5d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201e60 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201e62 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201e66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201e67 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201e6au; SAVEALL; call_ind(c, t_); RETCHK(0x10201e6au, 0x10201e67u); LOADALL; }
L_10201e6a:;
  /* 10201e6a mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10201e6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201e6f call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201e74u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201e6fu); RETCHK(0x10201e74u, 0x10201e6fu); LOADALL;
  /* 10201e74 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201e77 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10201f60:;
  /* 10201f60 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201f63 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201f68 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10201f6c mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10201f70 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201f72 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201f76 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201f7a mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201f7e mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201f82 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201f86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201f87 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201f8b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201f8d mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201f91 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201f96 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10201f9a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201f9b mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201f9f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10201fa3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201fa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201fa5 push 0x3fd */ { u32 v_ = 0x3fdu; esp -= 4; M32(esp) = v_; }
  /* 10201faa lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201fad mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201fb2 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201fb7u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201fb2u); RETCHK(0x10201fb7u, 0x10201fb2u); LOADALL;
  /* 10201fb7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201fb9 jl 0x10201fc8 */ if (LT_) goto L_10201fc8;
  /* 10201fbb mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201fbe mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201fc0 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201fc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201fc5 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201fc8u; SAVEALL; call_ind(c, t_); RETCHK(0x10201fc8u, 0x10201fc5u); LOADALL; }
L_10201fc8:;
  /* 10201fc8 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10201fcc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201fcd call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201fd2u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201fcdu); RETCHK(0x10201fd2u, 0x10201fcdu); LOADALL;
  /* 10201fd2 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201fd5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10201fe0:;
  /* 10201fe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201fe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201fe3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201fe6 sub esp, 0x228 */ { u32 a_ = esp, b_ = 0x228u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201fec mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201ff1 mov dword ptr [esp + 0x224], eax */ { const u32 m_ = (u32)(esp + 0x224u); M32(m_) = (u32)(eax); }
  /* 10201ff8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201ffa mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201ffe mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10202001 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10202005 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10202009 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1020200d mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10202011 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10202015 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10202019 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020201a mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1020201f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202020 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202022 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10202026 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 1020202b mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 10202030 lea edi, [esp + 0x28] */ edi = (u32)((u32)(esp + 0x28u));
  /* 10202034 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10202036 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10202039 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 1020203d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020203e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020203f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202040 push 0x3ff */ { u32 v_ = 0x3ffu; esp -= 4; M32(esp) = v_; }
  /* 10202045 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202048 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020204du; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202048u); RETCHK(0x1020204du, 0x10202048u); LOADALL;
  /* 1020204d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020204f jl 0x10202063 */ if (LT_) goto L_10202063;
  /* 10202051 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202054 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202056 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 1020205a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020205b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020205f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202060 call dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202063u; SAVEALL; call_ind(c, t_); RETCHK(0x10202063u, 0x10202060u); LOADALL; }
L_10202063:;
  /* 10202063 mov ecx, dword ptr [esp + 0x22c] */ { const u32 m_ = (u32)(esp + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 1020206a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020206fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020206au); RETCHK(0x1020206fu, 0x1020206au); LOADALL;
  /* 1020206f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202070 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202071 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10202073 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10202074 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202080:;
  /* 10202080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10202081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10202083 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202086 sub esp, 0x228 */ { u32 a_ = esp, b_ = 0x228u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020208c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10202091 mov dword ptr [esp + 0x224], eax */ { const u32 m_ = (u32)(esp + 0x224u); M32(m_) = (u32)(eax); }
  /* 10202098 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020209a mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 1020209e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 102020a1 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 102020a5 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 102020a9 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 102020ad mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 102020b1 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 102020b5 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 102020b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102020ba mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 102020bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102020c0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102020c2 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102020c6 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 102020cb mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 102020d0 lea edi, [esp + 0x28] */ edi = (u32)((u32)(esp + 0x28u));
  /* 102020d4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 102020d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102020d9 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 102020dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102020de push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102020df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102020e0 push 0x401 */ { u32 v_ = 0x401u; esp -= 4; M32(esp) = v_; }
  /* 102020e5 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102020e8 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102020edu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102020e8u); RETCHK(0x102020edu, 0x102020e8u); LOADALL;
  /* 102020ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102020ef jl 0x10202103 */ if (LT_) goto L_10202103;
  /* 102020f1 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102020f4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 102020f6 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 102020fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102020fb lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 102020ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202100 call dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202103u; SAVEALL; call_ind(c, t_); RETCHK(0x10202103u, 0x10202100u); LOADALL; }
L_10202103:;
  /* 10202103 mov ecx, dword ptr [esp + 0x22c] */ { const u32 m_ = (u32)(esp + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 1020210a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020210fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020210au); RETCHK(0x1020210fu, 0x1020210au); LOADALL;
  /* 1020210f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202110 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202111 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10202113 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10202114 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102021f0:;
  /* 102021f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102021f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102021f3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 102021f6 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102021fc mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10202201 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10202204 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202205 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202206 mov dword ptr [esp + 0x10c], eax */ { const u32 m_ = (u32)(esp + 0x10cu); M32(m_) = (u32)(eax); }
  /* 1020220d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020220f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202211 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 10202216 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 1020221b lea edi, [esp + 9] */ edi = (u32)((u32)(esp + 0x9u));
  /* 1020221f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10202221 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10202224 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 10202226 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10202227 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1020222b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020222c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020222d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020222e push 0x406 */ { u32 v_ = 0x406u; esp -= 4; M32(esp) = v_; }
  /* 10202233 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202236 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020223bu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202236u); RETCHK(0x1020223bu, 0x10202236u); LOADALL;
  /* 1020223b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020223d jl 0x1020224c */ if (LT_) goto L_1020224c;
  /* 1020223f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202242 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202244 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10202248 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202249 call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020224cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020224cu, 0x10202249u); LOADALL; }
L_1020224c:;
  /* 1020224c mov ecx, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 10202253 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202258u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202253u); RETCHK(0x10202258u, 0x10202253u); LOADALL;
  /* 10202258 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202259 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020225a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1020225c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020225d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102022b0:;
  /* 102022b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102022b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102022b3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 102022b6 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102022bc mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102022c1 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 102022c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102022c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102022c6 mov dword ptr [esp + 0x10c], eax */ { const u32 m_ = (u32)(esp + 0x10cu); M32(m_) = (u32)(eax); }
  /* 102022cd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102022cf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102022d1 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 102022d6 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 102022db lea edi, [esp + 9] */ edi = (u32)((u32)(esp + 0x9u));
  /* 102022df rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 102022e1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 102022e4 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 102022e6 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 102022e7 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 102022eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102022ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102022ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102022ee push 0x409 */ { u32 v_ = 0x409u; esp -= 4; M32(esp) = v_; }
  /* 102022f3 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102022f6 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102022fbu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102022f6u); RETCHK(0x102022fbu, 0x102022f6u); LOADALL;
  /* 102022fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102022fd jl 0x1020230c */ if (LT_) goto L_1020230c;
  /* 102022ff mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202302 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202304 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10202308 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202309 call dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020230cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020230cu, 0x10202309u); LOADALL; }
L_1020230c:;
  /* 1020230c mov ecx, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 10202313 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202318u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202313u); RETCHK(0x10202318u, 0x10202313u); LOADALL;
  /* 10202318 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202319 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020231a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1020231c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020231d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102023a0:;
  /* 102023a0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102023a3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102023a8 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 102023ac mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 102023b0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102023b2 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 102023b6 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 102023ba mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 102023be mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 102023c2 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 102023c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102023c7 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 102023cb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102023cd mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 102023d1 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 102023d6 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 102023da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102023db mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102023df mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 102023e3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102023e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102023e5 push 0x40c */ { u32 v_ = 0x40cu; esp -= 4; M32(esp) = v_; }
  /* 102023ea lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102023ed mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 102023f2 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102023f7u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102023f2u); RETCHK(0x102023f7u, 0x102023f2u); LOADALL;
  /* 102023f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102023f9 jl 0x10202408 */ if (LT_) goto L_10202408;
  /* 102023fb mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102023fe mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202400 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10202404 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202405 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202408u; SAVEALL; call_ind(c, t_); RETCHK(0x10202408u, 0x10202405u); LOADALL; }
L_10202408:;
  /* 10202408 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 1020240c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020240d call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202412u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020240du); RETCHK(0x10202412u, 0x1020240du); LOADALL;
  /* 10202412 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202415 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102024b0:;
  /* 102024b0 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102024b3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102024b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102024b9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102024bb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102024bd mov dword ptr [esp + 5], ecx */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(ecx); }
  /* 102024c1 mov dword ptr [esp + 9], ecx */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(ecx); }
  /* 102024c5 mov dword ptr [esp + 0xd], ecx */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(ecx); }
  /* 102024c9 mov dword ptr [esp + 0x11], ecx */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(ecx); }
  /* 102024cd mov dword ptr [esp + 0x15], ecx */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(ecx); }
  /* 102024d1 mov dword ptr [esp + 0x19], ecx */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(ecx); }
  /* 102024d5 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 102024d9 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102024db mov dword ptr [esp + 0x1d], ecx */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(ecx); }
  /* 102024df mov word ptr [esp + 0x21], cx */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 102024e4 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 102024e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102024e9 mov byte ptr [esp + 8], al */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102024ed mov byte ptr [esp + 0x28], al */ { const u32 m_ = (u32)(esp + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102024f1 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 102024f5 mov byte ptr [esp + 0x27], cl */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 102024f9 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 102024fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102024fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102024ff push 0x40f */ { u32 v_ = 0x40fu; esp -= 4; M32(esp) = v_; }
  /* 10202504 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202507 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020250cu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202507u); RETCHK(0x1020250cu, 0x10202507u); LOADALL;
  /* 1020250c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020250e jl 0x10202522 */ if (LT_) goto L_10202522;
  /* 10202510 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 10202514 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202517 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202519 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020251a lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1020251e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020251f call dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202522u; SAVEALL; call_ind(c, t_); RETCHK(0x10202522u, 0x1020251fu); LOADALL; }
L_10202522:;
  /* 10202522 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10202526 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202527 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020252cu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202527u); RETCHK(0x1020252cu, 0x10202527u); LOADALL;
  /* 1020252c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020252f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202590:;
  /* 10202590 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10202594 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202595 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202597 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1020259b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020259f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102025a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102025a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102025a2 push 0x412 */ { u32 v_ = 0x412u; esp -= 4; M32(esp) = v_; }
  /* 102025a7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102025aa call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102025afu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102025aau); RETCHK(0x102025afu, 0x102025aau); LOADALL;
  /* 102025af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102025b1 jl 0x102025bb */ if (LT_) goto L_102025bb;
  /* 102025b3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102025b6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102025b8 call dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102025bbu; SAVEALL; call_ind(c, t_); RETCHK(0x102025bbu, 0x102025b8u); LOADALL; }
L_102025bb:;
  /* 102025bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102025bc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202900:;
  /* 10202900 mov edx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10202904 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202905 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 10202909 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020290a movzx edi, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edi = (u32)(M16(m_)); }
  /* 1020290e add edi, 0xfffffc17 */ { u32 a_ = edi, b_ = 0xfffffc17u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10202914 add edx, -6 */ { u32 a_ = edx, b_ = 0xfffffffau; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 10202917 cmp edi, 0xd2 */ { u32 a_ = edi, b_ = 0xd2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020291d lea eax, [esi + 6] */ eax = (u32)((u32)(esi + 0x6u));
  /* 10202920 ja 0x10202b3c */ if (!(CF_|ZF_)) goto L_10202b3c;
  /* 10202926 movzx edi, byte ptr [edi + 0x10202bd4] */ { const u32 m_ = (u32)(edi + 0x10202bd4u); edi = (u32)(M8(m_)); }
  /* 1020292d jmp dword ptr [edi*4 + 0x10202b44] */ { const u32 m_ = (u32)(edi * 4u + 0x10202b44u); u32 t_ = M32(m_); switch (t_) { case 0x10202934u: goto L_10202934; case 0x10202943u: goto L_10202943; case 0x10202952u: goto L_10202952; case 0x10202961u: goto L_10202961; case 0x10202970u: goto L_10202970; case 0x1020297fu: goto L_1020297f; case 0x1020298eu: goto L_1020298e; case 0x1020299du: goto L_1020299d; case 0x102029acu: goto L_102029ac; case 0x102029bbu: goto L_102029bb; case 0x102029cau: goto L_102029ca; case 0x102029d9u: goto L_102029d9; case 0x102029e8u: goto L_102029e8; case 0x102029f7u: goto L_102029f7; case 0x10202a06u: goto L_10202a06; case 0x10202a15u: goto L_10202a15; case 0x10202a24u: goto L_10202a24; case 0x10202a33u: goto L_10202a33; case 0x10202a42u: goto L_10202a42; case 0x10202a51u: goto L_10202a51; case 0x10202a60u: goto L_10202a60; case 0x10202a6fu: goto L_10202a6f; case 0x10202a7eu: goto L_10202a7e; case 0x10202a8du: goto L_10202a8d; case 0x10202a9cu: goto L_10202a9c; case 0x10202aabu: goto L_10202aab; case 0x10202abau: goto L_10202aba; case 0x10202ac9u: goto L_10202ac9; case 0x10202ad8u: goto L_10202ad8; case 0x10202ae7u: goto L_10202ae7; case 0x10202af6u: goto L_10202af6; case 0x10202b05u: goto L_10202b05; case 0x10202b14u: goto L_10202b14; case 0x10202b23u: goto L_10202b23; case 0x10202b32u: goto L_10202b32; case 0x10202b3cu: goto L_10202b3c; default: SAVEALL; call_ind(c, t_); return; } }
L_10202934:;
  /* 10202934 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202936 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202937 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202938 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202939 call 0x102018d0 */ esp -= 4; M32(esp) = 0x1020293eu; SAVEALL; F_102018d0(c); ABI_CHECK(0x102018d0u, 0x10202939u); RETCHK(0x1020293eu, 0x10202939u); LOADALL;
  /* 1020293e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020293f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202940 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202943:;
  /* 10202943 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202945 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202946 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202947 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202948 call 0x10201a00 */ esp -= 4; M32(esp) = 0x1020294du; SAVEALL; F_10201a00(c); ABI_CHECK(0x10201a00u, 0x10202948u); RETCHK(0x1020294du, 0x10202948u); LOADALL;
  /* 1020294d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020294e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020294f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202952:;
  /* 10202952 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202954 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202955 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202956 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202957 call 0x10201a50 */ esp -= 4; M32(esp) = 0x1020295cu; SAVEALL; F_10201a50(c); ABI_CHECK(0x10201a50u, 0x10202957u); RETCHK(0x1020295cu, 0x10202957u); LOADALL;
  /* 1020295c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020295d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020295e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202961:;
  /* 10202961 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202963 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202964 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202965 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202966 call 0x10201b30 */ esp -= 4; M32(esp) = 0x1020296bu; SAVEALL; F_10201b30(c); ABI_CHECK(0x10201b30u, 0x10202966u); RETCHK(0x1020296bu, 0x10202966u); LOADALL;
  /* 1020296b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020296c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020296d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202970:;
  /* 10202970 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202972 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202973 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202974 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202975 call 0x10201bb0 */ esp -= 4; M32(esp) = 0x1020297au; SAVEALL; F_10201bb0(c); ABI_CHECK(0x10201bb0u, 0x10202975u); RETCHK(0x1020297au, 0x10202975u); LOADALL;
  /* 1020297a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020297b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020297c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1020297f:;
  /* 1020297f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202980 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202981 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202985 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202989 jmp 0x10201c00 */ goto L_10201c00;
L_1020298e:;
  /* 1020298e mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202990 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202991 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202992 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202993 call 0x10201c90 */ esp -= 4; M32(esp) = 0x10202998u; SAVEALL; F_10201c90(c); ABI_CHECK(0x10201c90u, 0x10202993u); RETCHK(0x10202998u, 0x10202993u); LOADALL;
  /* 10202998 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202999 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020299a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1020299d:;
  /* 1020299d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020299e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020299f mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029a3 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 102029a7 jmp 0x10201ce0 */ goto L_10201ce0;
L_102029ac:;
  /* 102029ac mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 102029ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102029af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102029b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102029b1 call 0x10201d60 */ esp -= 4; M32(esp) = 0x102029b6u; SAVEALL; F_10201d60(c); ABI_CHECK(0x10201d60u, 0x102029b1u); RETCHK(0x102029b6u, 0x102029b1u); LOADALL;
  /* 102029b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102029bb:;
  /* 102029bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029bd mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029c1 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 102029c5 jmp 0x10201df0 */ goto L_10201df0;
L_102029ca:;
  /* 102029ca mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 102029cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102029cd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102029ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102029cf call 0x10201e80 */ esp -= 4; M32(esp) = 0x102029d4u; SAVEALL; F_10201e80(c); ABI_CHECK(0x10201e80u, 0x102029cfu); RETCHK(0x102029d4u, 0x102029cfu); LOADALL;
  /* 102029d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029d6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102029d9:;
  /* 102029d9 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 102029db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102029dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102029dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102029de call 0x10201f10 */ esp -= 4; M32(esp) = 0x102029e3u; SAVEALL; F_10201f10(c); ABI_CHECK(0x10201f10u, 0x102029deu); RETCHK(0x102029e3u, 0x102029deu); LOADALL;
  /* 102029e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029e5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102029e8:;
  /* 102029e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029ea mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029ee mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 102029f2 jmp 0x10201f60 */ goto L_10201f60;
L_102029f7:;
  /* 102029f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029f9 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029fd mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a01 jmp 0x10201fe0 */ goto L_10201fe0;
L_10202a06:;
  /* 10202a06 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a07 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a08 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a0c mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a10 jmp 0x10202080 */ goto L_10202080;
L_10202a15:;
  /* 10202a15 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a18 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a1a call 0x10202120 */ esp -= 4; M32(esp) = 0x10202a1fu; SAVEALL; F_10202120(c); ABI_CHECK(0x10202120u, 0x10202a1au); RETCHK(0x10202a1fu, 0x10202a1au); LOADALL;
  /* 10202a1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a21 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a24:;
  /* 10202a24 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a27 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a29 call 0x102021a0 */ esp -= 4; M32(esp) = 0x10202a2eu; SAVEALL; F_102021a0(c); ABI_CHECK(0x102021a0u, 0x10202a29u); RETCHK(0x10202a2eu, 0x10202a29u); LOADALL;
  /* 10202a2e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a30 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a33:;
  /* 10202a33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a35 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a39 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a3d jmp 0x102021f0 */ goto L_102021f0;
L_10202a42:;
  /* 10202a42 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a45 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a47 call 0x10202260 */ esp -= 4; M32(esp) = 0x10202a4cu; SAVEALL; F_10202260(c); ABI_CHECK(0x10202260u, 0x10202a47u); RETCHK(0x10202a4cu, 0x10202a47u); LOADALL;
  /* 10202a4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a4d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a4e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a51:;
  /* 10202a51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a53 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a57 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a5b jmp 0x102022b0 */ goto L_102022b0;
L_10202a60:;
  /* 10202a60 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a63 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a65 call 0x10202320 */ esp -= 4; M32(esp) = 0x10202a6au; SAVEALL; F_10202320(c); ABI_CHECK(0x10202320u, 0x10202a65u); RETCHK(0x10202a6au, 0x10202a65u); LOADALL;
  /* 10202a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a6c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a6f:;
  /* 10202a6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a70 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a71 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a75 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a79 jmp 0x102023a0 */ goto L_102023a0;
L_10202a7e:;
  /* 10202a7e mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a81 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a83 call 0x10202420 */ esp -= 4; M32(esp) = 0x10202a88u; SAVEALL; F_10202420(c); ABI_CHECK(0x10202420u, 0x10202a83u); RETCHK(0x10202a88u, 0x10202a83u); LOADALL;
  /* 10202a88 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a89 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a8a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a8d:;
  /* 10202a8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a8f mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a93 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a97 jmp 0x102024b0 */ goto L_102024b0;
L_10202a9c:;
  /* 10202a9c mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202aa0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202aa1 call 0x10202540 */ esp -= 4; M32(esp) = 0x10202aa6u; SAVEALL; F_10202540(c); ABI_CHECK(0x10202540u, 0x10202aa1u); RETCHK(0x10202aa6u, 0x10202aa1u); LOADALL;
  /* 10202aa6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202aa7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202aa8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202aab:;
  /* 10202aab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202aac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202aad mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202ab1 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202ab5 jmp 0x10202590 */ goto L_10202590;
L_10202aba:;
  /* 10202aba mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202abc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202abd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202abe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202abf call 0x102025c0 */ esp -= 4; M32(esp) = 0x10202ac4u; SAVEALL; F_102025c0(c); ABI_CHECK(0x102025c0u, 0x10202abfu); RETCHK(0x10202ac4u, 0x10202abfu); LOADALL;
  /* 10202ac4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ac5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ac6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202ac9:;
  /* 10202ac9 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202acb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202acc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202acd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202ace call 0x10202600 */ esp -= 4; M32(esp) = 0x10202ad3u; SAVEALL; F_10202600(c); ABI_CHECK(0x10202600u, 0x10202aceu); RETCHK(0x10202ad3u, 0x10202aceu); LOADALL;
  /* 10202ad3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ad4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ad5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202ad8:;
  /* 10202ad8 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202ada push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202adb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202adc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202add call 0x10202680 */ esp -= 4; M32(esp) = 0x10202ae2u; SAVEALL; F_10202680(c); ABI_CHECK(0x10202680u, 0x10202addu); RETCHK(0x10202ae2u, 0x10202addu); LOADALL;
  /* 10202ae2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ae3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ae4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202ae7:;
  /* 10202ae7 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202ae9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202aea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202aeb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202aec call 0x102026c0 */ esp -= 4; M32(esp) = 0x10202af1u; SAVEALL; F_102026c0(c); ABI_CHECK(0x102026c0u, 0x10202aecu); RETCHK(0x10202af1u, 0x10202aecu); LOADALL;
  /* 10202af1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202af2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202af3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202af6:;
  /* 10202af6 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202af8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202af9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202afa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202afb call 0x10202700 */ esp -= 4; M32(esp) = 0x10202b00u; SAVEALL; F_10202700(c); ABI_CHECK(0x10202700u, 0x10202afbu); RETCHK(0x10202b00u, 0x10202afbu); LOADALL;
  /* 10202b00 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b02 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202b05:;
  /* 10202b05 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b07 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b08 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b0a call 0x10202780 */ esp -= 4; M32(esp) = 0x10202b0fu; SAVEALL; F_10202780(c); ABI_CHECK(0x10202780u, 0x10202b0au); RETCHK(0x10202b0fu, 0x10202b0au); LOADALL;
  /* 10202b0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b11 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202b14:;
  /* 10202b14 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b16 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b17 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b19 call 0x102027c0 */ esp -= 4; M32(esp) = 0x10202b1eu; SAVEALL; F_102027c0(c); ABI_CHECK(0x102027c0u, 0x10202b19u); RETCHK(0x10202b1eu, 0x10202b19u); LOADALL;
  /* 10202b1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b20 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202b23:;
  /* 10202b23 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b26 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b28 call 0x10202830 */ esp -= 4; M32(esp) = 0x10202b2du; SAVEALL; F_10202830(c); ABI_CHECK(0x10202830u, 0x10202b28u); RETCHK(0x10202b2du, 0x10202b28u); LOADALL;
  /* 10202b2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b2f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202b32:;
  /* 10202b32 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b35 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b37 call 0x10202890 */ esp -= 4; M32(esp) = 0x10202b3cu; SAVEALL; F_10202890(c); ABI_CHECK(0x10202890u, 0x10202b37u); RETCHK(0x10202b3cu, 0x10202b37u); LOADALL;
L_10202b3c:;
  /* 10202b3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b3e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202934(CPU *c) {
  NATIVE_HOOK(0x10202934u) REGS; LOADALL;
L_10202934:;
  /* 10202934 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202936 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202937 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202938 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202939 call 0x102018d0 */ esp -= 4; M32(esp) = 0x1020293eu; SAVEALL; F_102018d0(c); ABI_CHECK(0x102018d0u, 0x10202939u); RETCHK(0x1020293eu, 0x10202939u); LOADALL;
  /* 1020293e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020293f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202940 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202943(CPU *c) {
  NATIVE_HOOK(0x10202943u) REGS; LOADALL;
L_10202943:;
  /* 10202943 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202945 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202946 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202947 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202948 call 0x10201a00 */ esp -= 4; M32(esp) = 0x1020294du; SAVEALL; F_10201a00(c); ABI_CHECK(0x10201a00u, 0x10202948u); RETCHK(0x1020294du, 0x10202948u); LOADALL;
  /* 1020294d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020294e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020294f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202952(CPU *c) {
  NATIVE_HOOK(0x10202952u) REGS; LOADALL;
L_10202952:;
  /* 10202952 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202954 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202955 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202956 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202957 call 0x10201a50 */ esp -= 4; M32(esp) = 0x1020295cu; SAVEALL; F_10201a50(c); ABI_CHECK(0x10201a50u, 0x10202957u); RETCHK(0x1020295cu, 0x10202957u); LOADALL;
  /* 1020295c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020295d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020295e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202961(CPU *c) {
  NATIVE_HOOK(0x10202961u) REGS; LOADALL;
L_10202961:;
  /* 10202961 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202963 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202964 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202965 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202966 call 0x10201b30 */ esp -= 4; M32(esp) = 0x1020296bu; SAVEALL; F_10201b30(c); ABI_CHECK(0x10201b30u, 0x10202966u); RETCHK(0x1020296bu, 0x10202966u); LOADALL;
  /* 1020296b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020296c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020296d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202970(CPU *c) {
  NATIVE_HOOK(0x10202970u) REGS; LOADALL;
L_10202970:;
  /* 10202970 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202972 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202973 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202974 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202975 call 0x10201bb0 */ esp -= 4; M32(esp) = 0x1020297au; SAVEALL; F_10201bb0(c); ABI_CHECK(0x10201bb0u, 0x10202975u); RETCHK(0x1020297au, 0x10202975u); LOADALL;
  /* 1020297a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020297b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020297c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1020297f(CPU *c) {
  NATIVE_HOOK(0x1020297fu) REGS; LOADALL;
  goto L_1020297f;
L_10201c00:;
  /* 10201c00 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201c03 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201c08 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 10201c0c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201c0e mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201c12 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201c16 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201c1a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201c1e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201c1f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201c21 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10201c25 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10201c27 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201c2b mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 10201c2f mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201c33 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10201c37 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201c3c mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 10201c40 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 10201c44 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201c45 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201c49 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 10201c4d mov dword ptr [esp + 0x34], ecx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ecx); }
  /* 10201c51 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10201c55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201c56 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201c57 push 0x3f2 */ { u32 v_ = 0x3f2u; esp -= 4; M32(esp) = v_; }
  /* 10201c5c lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201c5f mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201c64 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201c69u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201c64u); RETCHK(0x10201c69u, 0x10201c64u); LOADALL;
  /* 10201c69 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201c6b jl 0x10201c7a */ if (LT_) goto L_10201c7a;
  /* 10201c6d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201c70 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201c72 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201c76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201c77 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201c7au; SAVEALL; call_ind(c, t_); RETCHK(0x10201c7au, 0x10201c77u); LOADALL; }
L_10201c7a:;
  /* 10201c7a mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10201c7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201c7f call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201c84u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201c7fu); RETCHK(0x10201c84u, 0x10201c7fu); LOADALL;
  /* 10201c84 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201c87 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1020297f:;
  /* 1020297f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202980 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202981 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202985 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202989 jmp 0x10201c00 */ goto L_10201c00;
}

void F_1020298e(CPU *c) {
  NATIVE_HOOK(0x1020298eu) REGS; LOADALL;
L_1020298e:;
  /* 1020298e mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202990 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202991 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202992 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202993 call 0x10201c90 */ esp -= 4; M32(esp) = 0x10202998u; SAVEALL; F_10201c90(c); ABI_CHECK(0x10201c90u, 0x10202993u); RETCHK(0x10202998u, 0x10202993u); LOADALL;
  /* 10202998 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202999 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020299a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_1020299d(CPU *c) {
  NATIVE_HOOK(0x1020299du) REGS; LOADALL;
  goto L_1020299d;
L_10201ce0:;
  /* 10201ce0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201ce3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201ce8 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10201cec mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10201cf0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201cf2 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201cf6 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201cfa mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201cfe mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201d02 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201d06 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201d07 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201d0b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201d0d mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201d11 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201d16 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10201d1a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201d1b mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201d1f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10201d23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201d24 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201d25 push 0x3f5 */ { u32 v_ = 0x3f5u; esp -= 4; M32(esp) = v_; }
  /* 10201d2a lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201d2d mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201d32 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201d37u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201d32u); RETCHK(0x10201d37u, 0x10201d32u); LOADALL;
  /* 10201d37 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201d39 jl 0x10201d48 */ if (LT_) goto L_10201d48;
  /* 10201d3b mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201d3e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201d40 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201d44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201d45 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201d48u; SAVEALL; call_ind(c, t_); RETCHK(0x10201d48u, 0x10201d45u); LOADALL; }
L_10201d48:;
  /* 10201d48 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10201d4c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201d4d call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201d52u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201d4du); RETCHK(0x10201d52u, 0x10201d4du); LOADALL;
  /* 10201d52 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201d55 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_1020299d:;
  /* 1020299d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020299e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020299f mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029a3 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 102029a7 jmp 0x10201ce0 */ goto L_10201ce0;
}

void F_102029ac(CPU *c) {
  NATIVE_HOOK(0x102029acu) REGS; LOADALL;
L_102029ac:;
  /* 102029ac mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 102029ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102029af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102029b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102029b1 call 0x10201d60 */ esp -= 4; M32(esp) = 0x102029b6u; SAVEALL; F_10201d60(c); ABI_CHECK(0x10201d60u, 0x102029b1u); RETCHK(0x102029b6u, 0x102029b1u); LOADALL;
  /* 102029b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029b8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_102029bb(CPU *c) {
  NATIVE_HOOK(0x102029bbu) REGS; LOADALL;
  goto L_102029bb;
L_10201df0:;
  /* 10201df0 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201df3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201df8 mov dword ptr [esp + 0x30], eax */ { const u32 m_ = (u32)(esp + 0x30u); M32(m_) = (u32)(eax); }
  /* 10201dfc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201dfe mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201e02 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201e06 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201e0a mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201e0e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201e0f mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201e11 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10201e15 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10201e17 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201e1b mov dword ptr [esp + 0x24], ecx */ { const u32 m_ = (u32)(esp + 0x24u); M32(m_) = (u32)(ecx); }
  /* 10201e1f mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201e23 mov dword ptr [esp + 0x28], ecx */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(ecx); }
  /* 10201e27 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201e2c mov dword ptr [esp + 0x2c], ecx */ { const u32 m_ = (u32)(esp + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 10201e30 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 10201e34 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201e35 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201e39 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 10201e3d mov dword ptr [esp + 0x34], ecx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ecx); }
  /* 10201e41 mov ecx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); ecx = (u32)(M32(m_)); }
  /* 10201e45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201e46 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201e47 push 0x3f8 */ { u32 v_ = 0x3f8u; esp -= 4; M32(esp) = v_; }
  /* 10201e4c lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201e4f mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201e54 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201e59u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201e54u); RETCHK(0x10201e59u, 0x10201e54u); LOADALL;
  /* 10201e59 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201e5b jl 0x10201e6a */ if (LT_) goto L_10201e6a;
  /* 10201e5d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201e60 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201e62 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201e66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201e67 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201e6au; SAVEALL; call_ind(c, t_); RETCHK(0x10201e6au, 0x10201e67u); LOADALL; }
L_10201e6a:;
  /* 10201e6a mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 10201e6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201e6f call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201e74u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201e6fu); RETCHK(0x10201e74u, 0x10201e6fu); LOADALL;
  /* 10201e74 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201e77 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102029bb:;
  /* 102029bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029bd mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029c1 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 102029c5 jmp 0x10201df0 */ goto L_10201df0;
}

void F_102029ca(CPU *c) {
  NATIVE_HOOK(0x102029cau) REGS; LOADALL;
L_102029ca:;
  /* 102029ca mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 102029cc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102029cd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102029ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102029cf call 0x10201e80 */ esp -= 4; M32(esp) = 0x102029d4u; SAVEALL; F_10201e80(c); ABI_CHECK(0x10201e80u, 0x102029cfu); RETCHK(0x102029d4u, 0x102029cfu); LOADALL;
  /* 102029d4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029d5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029d6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_102029d9(CPU *c) {
  NATIVE_HOOK(0x102029d9u) REGS; LOADALL;
L_102029d9:;
  /* 102029d9 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 102029db push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102029dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102029dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102029de call 0x10201f10 */ esp -= 4; M32(esp) = 0x102029e3u; SAVEALL; F_10201f10(c); ABI_CHECK(0x10201f10u, 0x102029deu); RETCHK(0x102029e3u, 0x102029deu); LOADALL;
  /* 102029e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029e5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_102029e8(CPU *c) {
  NATIVE_HOOK(0x102029e8u) REGS; LOADALL;
  goto L_102029e8;
L_10201f60:;
  /* 10201f60 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201f63 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201f68 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10201f6c mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 10201f70 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201f72 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201f76 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10201f7a mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10201f7e mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 10201f82 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10201f86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10201f87 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10201f8b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10201f8d mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 10201f91 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 10201f96 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 10201f9a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10201f9b mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10201f9f mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 10201fa3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10201fa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201fa5 push 0x3fd */ { u32 v_ = 0x3fdu; esp -= 4; M32(esp) = v_; }
  /* 10201faa lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10201fad mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 10201fb2 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x10201fb7u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10201fb2u); RETCHK(0x10201fb7u, 0x10201fb2u); LOADALL;
  /* 10201fb7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 10201fb9 jl 0x10201fc8 */ if (LT_) goto L_10201fc8;
  /* 10201fbb mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10201fbe mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10201fc0 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10201fc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10201fc5 call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10201fc8u; SAVEALL; call_ind(c, t_); RETCHK(0x10201fc8u, 0x10201fc5u); LOADALL; }
L_10201fc8:;
  /* 10201fc8 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 10201fcc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10201fcd call 0x10204f65 */ esp -= 4; M32(esp) = 0x10201fd2u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10201fcdu); RETCHK(0x10201fd2u, 0x10201fcdu); LOADALL;
  /* 10201fd2 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201fd5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102029e8:;
  /* 102029e8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029ea mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029ee mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 102029f2 jmp 0x10201f60 */ goto L_10201f60;
}

void F_102029f7(CPU *c) {
  NATIVE_HOOK(0x102029f7u) REGS; LOADALL;
  goto L_102029f7;
L_10201fe0:;
  /* 10201fe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10201fe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10201fe3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10201fe6 sub esp, 0x228 */ { u32 a_ = esp, b_ = 0x228u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10201fec mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10201ff1 mov dword ptr [esp + 0x224], eax */ { const u32 m_ = (u32)(esp + 0x224u); M32(m_) = (u32)(eax); }
  /* 10201ff8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10201ffa mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 10201ffe mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 10202001 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 10202005 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 10202009 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 1020200d mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 10202011 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 10202015 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 10202019 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020201a mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 1020201f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202020 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202022 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 10202026 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 1020202b mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 10202030 lea edi, [esp + 0x28] */ edi = (u32)((u32)(esp + 0x28u));
  /* 10202034 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10202036 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 10202039 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 1020203d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020203e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020203f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202040 push 0x3ff */ { u32 v_ = 0x3ffu; esp -= 4; M32(esp) = v_; }
  /* 10202045 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202048 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020204du; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202048u); RETCHK(0x1020204du, 0x10202048u); LOADALL;
  /* 1020204d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020204f jl 0x10202063 */ if (LT_) goto L_10202063;
  /* 10202051 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202054 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202056 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 1020205a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020205b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020205f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202060 call dword ptr [edx + 0x38] */ { const u32 m_ = (u32)(edx + 0x38u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202063u; SAVEALL; call_ind(c, t_); RETCHK(0x10202063u, 0x10202060u); LOADALL; }
L_10202063:;
  /* 10202063 mov ecx, dword ptr [esp + 0x22c] */ { const u32 m_ = (u32)(esp + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 1020206a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020206fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020206au); RETCHK(0x1020206fu, 0x1020206au); LOADALL;
  /* 1020206f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202070 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202071 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10202073 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10202074 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_102029f7:;
  /* 102029f7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102029f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102029f9 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 102029fd mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a01 jmp 0x10201fe0 */ goto L_10201fe0;
}

void F_10202a06(CPU *c) {
  NATIVE_HOOK(0x10202a06u) REGS; LOADALL;
  goto L_10202a06;
L_10202080:;
  /* 10202080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10202081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 10202083 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202086 sub esp, 0x228 */ { u32 a_ = esp, b_ = 0x228u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020208c mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10202091 mov dword ptr [esp + 0x224], eax */ { const u32 m_ = (u32)(esp + 0x224u); M32(m_) = (u32)(eax); }
  /* 10202098 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020209a mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 1020209e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 102020a1 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 102020a5 mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 102020a9 mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 102020ad mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 102020b1 mov dword ptr [esp + 0x15], eax */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(eax); }
  /* 102020b5 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 102020b9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102020ba mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 102020bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102020c0 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102020c2 mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102020c6 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 102020cb mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 102020d0 lea edi, [esp + 0x28] */ edi = (u32)((u32)(esp + 0x28u));
  /* 102020d4 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 102020d6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 102020d9 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
  /* 102020dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102020de push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102020df push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102020e0 push 0x401 */ { u32 v_ = 0x401u; esp -= 4; M32(esp) = v_; }
  /* 102020e5 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102020e8 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102020edu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102020e8u); RETCHK(0x102020edu, 0x102020e8u); LOADALL;
  /* 102020ed test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102020ef jl 0x10202103 */ if (LT_) goto L_10202103;
  /* 102020f1 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102020f4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 102020f6 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 102020fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102020fb lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 102020ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202100 call dword ptr [edx + 0x3c] */ { const u32 m_ = (u32)(edx + 0x3cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202103u; SAVEALL; call_ind(c, t_); RETCHK(0x10202103u, 0x10202100u); LOADALL; }
L_10202103:;
  /* 10202103 mov ecx, dword ptr [esp + 0x22c] */ { const u32 m_ = (u32)(esp + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 1020210a call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020210fu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020210au); RETCHK(0x1020210fu, 0x1020210au); LOADALL;
  /* 1020210f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202110 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202111 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 10202113 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10202114 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a06:;
  /* 10202a06 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a07 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a08 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a0c mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a10 jmp 0x10202080 */ goto L_10202080;
}

void F_10202a15(CPU *c) {
  NATIVE_HOOK(0x10202a15u) REGS; LOADALL;
L_10202a15:;
  /* 10202a15 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a18 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a1a call 0x10202120 */ esp -= 4; M32(esp) = 0x10202a1fu; SAVEALL; F_10202120(c); ABI_CHECK(0x10202120u, 0x10202a1au); RETCHK(0x10202a1fu, 0x10202a1au); LOADALL;
  /* 10202a1f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a20 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a21 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202a24(CPU *c) {
  NATIVE_HOOK(0x10202a24u) REGS; LOADALL;
L_10202a24:;
  /* 10202a24 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a26 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a27 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a28 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a29 call 0x102021a0 */ esp -= 4; M32(esp) = 0x10202a2eu; SAVEALL; F_102021a0(c); ABI_CHECK(0x102021a0u, 0x10202a29u); RETCHK(0x10202a2eu, 0x10202a29u); LOADALL;
  /* 10202a2e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a30 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202a33(CPU *c) {
  NATIVE_HOOK(0x10202a33u) REGS; LOADALL;
  goto L_10202a33;
L_102021f0:;
  /* 102021f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102021f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102021f3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 102021f6 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102021fc mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 10202201 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 10202204 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202205 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202206 mov dword ptr [esp + 0x10c], eax */ { const u32 m_ = (u32)(esp + 0x10cu); M32(m_) = (u32)(eax); }
  /* 1020220d mov esi, ecx */ { esi = (u32)(ecx); }
  /* 1020220f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202211 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 10202216 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 1020221b lea edi, [esp + 9] */ edi = (u32)((u32)(esp + 0x9u));
  /* 1020221f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 10202221 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 10202224 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 10202226 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 10202227 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1020222b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020222c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020222d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020222e push 0x406 */ { u32 v_ = 0x406u; esp -= 4; M32(esp) = v_; }
  /* 10202233 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202236 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020223bu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202236u); RETCHK(0x1020223bu, 0x10202236u); LOADALL;
  /* 1020223b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020223d jl 0x1020224c */ if (LT_) goto L_1020224c;
  /* 1020223f mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202242 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202244 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10202248 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202249 call dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020224cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020224cu, 0x10202249u); LOADALL; }
L_1020224c:;
  /* 1020224c mov ecx, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 10202253 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202258u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202253u); RETCHK(0x10202258u, 0x10202253u); LOADALL;
  /* 10202258 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202259 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020225a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1020225c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020225d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a33:;
  /* 10202a33 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a34 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a35 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a39 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a3d jmp 0x102021f0 */ goto L_102021f0;
}

void F_10202a42(CPU *c) {
  NATIVE_HOOK(0x10202a42u) REGS; LOADALL;
L_10202a42:;
  /* 10202a42 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a45 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a47 call 0x10202260 */ esp -= 4; M32(esp) = 0x10202a4cu; SAVEALL; F_10202260(c); ABI_CHECK(0x10202260u, 0x10202a47u); RETCHK(0x10202a4cu, 0x10202a47u); LOADALL;
  /* 10202a4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a4d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a4e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202a51(CPU *c) {
  NATIVE_HOOK(0x10202a51u) REGS; LOADALL;
  goto L_10202a51;
L_102022b0:;
  /* 102022b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102022b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 102022b3 and esp, 0xfffffff8 */ { u32 a_ = esp, b_ = 0xfffffff8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 102022b6 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102022bc mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102022c1 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 102022c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102022c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102022c6 mov dword ptr [esp + 0x10c], eax */ { const u32 m_ = (u32)(esp + 0x10cu); M32(m_) = (u32)(eax); }
  /* 102022cd mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102022cf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102022d1 mov byte ptr [esp + 8], 0 */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 102022d6 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 102022db lea edi, [esp + 9] */ edi = (u32)((u32)(esp + 0x9u));
  /* 102022df rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 102022e1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 102022e4 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 102022e6 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 102022e7 lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 102022eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102022ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102022ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102022ee push 0x409 */ { u32 v_ = 0x409u; esp -= 4; M32(esp) = v_; }
  /* 102022f3 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102022f6 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102022fbu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102022f6u); RETCHK(0x102022fbu, 0x102022f6u); LOADALL;
  /* 102022fb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102022fd jl 0x1020230c */ if (LT_) goto L_1020230c;
  /* 102022ff mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202302 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 10202304 lea edx, [esp + 8] */ edx = (u32)((u32)(esp + 0x8u));
  /* 10202308 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202309 call dword ptr [eax + 0x50] */ { const u32 m_ = (u32)(eax + 0x50u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x1020230cu; SAVEALL; call_ind(c, t_); RETCHK(0x1020230cu, 0x10202309u); LOADALL; }
L_1020230c:;
  /* 1020230c mov ecx, dword ptr [esp + 0x10c] */ { const u32 m_ = (u32)(esp + 0x10cu); ecx = (u32)(M32(m_)); }
  /* 10202313 call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202318u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202313u); RETCHK(0x10202318u, 0x10202313u); LOADALL;
  /* 10202318 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202319 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020231a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 1020231c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020231d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a51:;
  /* 10202a51 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a52 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a53 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a57 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a5b jmp 0x102022b0 */ goto L_102022b0;
}

void F_10202a60(CPU *c) {
  NATIVE_HOOK(0x10202a60u) REGS; LOADALL;
L_10202a60:;
  /* 10202a60 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a63 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a64 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a65 call 0x10202320 */ esp -= 4; M32(esp) = 0x10202a6au; SAVEALL; F_10202320(c); ABI_CHECK(0x10202320u, 0x10202a65u); RETCHK(0x10202a6au, 0x10202a65u); LOADALL;
  /* 10202a6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a6c ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202a6f(CPU *c) {
  NATIVE_HOOK(0x10202a6fu) REGS; LOADALL;
  goto L_10202a6f;
L_102023a0:;
  /* 102023a0 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102023a3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102023a8 mov edx, dword ptr [esp + 0x2c] */ { const u32 m_ = (u32)(esp + 0x2cu); edx = (u32)(M32(m_)); }
  /* 102023ac mov dword ptr [esp + 0x20], eax */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(eax); }
  /* 102023b0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102023b2 mov dword ptr [esp + 1], eax */ { const u32 m_ = (u32)(esp + 0x1u); M32(m_) = (u32)(eax); }
  /* 102023b6 mov dword ptr [esp + 5], eax */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(eax); }
  /* 102023ba mov dword ptr [esp + 9], eax */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(eax); }
  /* 102023be mov dword ptr [esp + 0xd], eax */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(eax); }
  /* 102023c2 mov dword ptr [esp + 0x11], eax */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(eax); }
  /* 102023c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102023c7 mov dword ptr [esp + 0x19], eax */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(eax); }
  /* 102023cb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102023cd mov dword ptr [esp + 0x1d], eax */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(eax); }
  /* 102023d1 mov word ptr [esp + 0x21], ax */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 102023d6 lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 102023da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102023db mov byte ptr [esp + 0x27], al */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102023df mov eax, dword ptr [esp + 0x30] */ { const u32 m_ = (u32)(esp + 0x30u); eax = (u32)(M32(m_)); }
  /* 102023e3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102023e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102023e5 push 0x40c */ { u32 v_ = 0x40cu; esp -= 4; M32(esp) = v_; }
  /* 102023ea lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102023ed mov byte ptr [esp + 0x14], 0 */ { const u32 m_ = (u32)(esp + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 102023f2 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102023f7u; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102023f2u); RETCHK(0x102023f7u, 0x102023f2u); LOADALL;
  /* 102023f7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102023f9 jl 0x10202408 */ if (LT_) goto L_10202408;
  /* 102023fb mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102023fe mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202400 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 10202404 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202405 call dword ptr [edx + 0x58] */ { const u32 m_ = (u32)(edx + 0x58u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202408u; SAVEALL; call_ind(c, t_); RETCHK(0x10202408u, 0x10202405u); LOADALL; }
L_10202408:;
  /* 10202408 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 1020240c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020240d call 0x10204f65 */ esp -= 4; M32(esp) = 0x10202412u; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x1020240du); RETCHK(0x10202412u, 0x1020240du); LOADALL;
  /* 10202412 add esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202415 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a6f:;
  /* 10202a6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a70 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a71 mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a75 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a79 jmp 0x102023a0 */ goto L_102023a0;
}

void F_10202a7e(CPU *c) {
  NATIVE_HOOK(0x10202a7eu) REGS; LOADALL;
L_10202a7e:;
  /* 10202a7e mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a81 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202a82 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202a83 call 0x10202420 */ esp -= 4; M32(esp) = 0x10202a88u; SAVEALL; F_10202420(c); ABI_CHECK(0x10202420u, 0x10202a83u); RETCHK(0x10202a88u, 0x10202a83u); LOADALL;
  /* 10202a88 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a89 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a8a ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202a8d(CPU *c) {
  NATIVE_HOOK(0x10202a8du) REGS; LOADALL;
  goto L_10202a8d;
L_102024b0:;
  /* 102024b0 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 102024b3 mov eax, dword ptr [0x1020d040] */ { const u32 m_ = (u32)(0x1020d040u); eax = (u32)(M32(m_)); }
  /* 102024b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102024b9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 102024bb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 102024bd mov dword ptr [esp + 5], ecx */ { const u32 m_ = (u32)(esp + 0x5u); M32(m_) = (u32)(ecx); }
  /* 102024c1 mov dword ptr [esp + 9], ecx */ { const u32 m_ = (u32)(esp + 0x9u); M32(m_) = (u32)(ecx); }
  /* 102024c5 mov dword ptr [esp + 0xd], ecx */ { const u32 m_ = (u32)(esp + 0xdu); M32(m_) = (u32)(ecx); }
  /* 102024c9 mov dword ptr [esp + 0x11], ecx */ { const u32 m_ = (u32)(esp + 0x11u); M32(m_) = (u32)(ecx); }
  /* 102024cd mov dword ptr [esp + 0x15], ecx */ { const u32 m_ = (u32)(esp + 0x15u); M32(m_) = (u32)(ecx); }
  /* 102024d1 mov dword ptr [esp + 0x19], ecx */ { const u32 m_ = (u32)(esp + 0x19u); M32(m_) = (u32)(ecx); }
  /* 102024d5 mov dword ptr [esp + 0x28], eax */ { const u32 m_ = (u32)(esp + 0x28u); M32(m_) = (u32)(eax); }
  /* 102024d9 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 102024db mov dword ptr [esp + 0x1d], ecx */ { const u32 m_ = (u32)(esp + 0x1du); M32(m_) = (u32)(ecx); }
  /* 102024df mov word ptr [esp + 0x21], cx */ { const u32 m_ = (u32)(esp + 0x21u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 102024e4 lea edx, [esp + 4] */ edx = (u32)((u32)(esp + 0x4u));
  /* 102024e8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102024e9 mov byte ptr [esp + 8], al */ { const u32 m_ = (u32)(esp + 0x8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102024ed mov byte ptr [esp + 0x28], al */ { const u32 m_ = (u32)(esp + 0x28u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 102024f1 mov eax, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); eax = (u32)(M32(m_)); }
  /* 102024f5 mov byte ptr [esp + 0x27], cl */ { const u32 m_ = (u32)(esp + 0x27u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 102024f9 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 102024fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102024fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102024ff push 0x40f */ { u32 v_ = 0x40fu; esp -= 4; M32(esp) = v_; }
  /* 10202504 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202507 call 0x10204ac0 */ esp -= 4; M32(esp) = 0x1020250cu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x10202507u); RETCHK(0x1020250cu, 0x10202507u); LOADALL;
  /* 1020250c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 1020250e jl 0x10202522 */ if (LT_) goto L_10202522;
  /* 10202510 mov eax, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); eax = (u32)(M32(m_)); }
  /* 10202514 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 10202517 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 10202519 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020251a lea eax, [esp + 8] */ eax = (u32)((u32)(esp + 0x8u));
  /* 1020251e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020251f call dword ptr [edx + 0x60] */ { const u32 m_ = (u32)(edx + 0x60u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x10202522u; SAVEALL; call_ind(c, t_); RETCHK(0x10202522u, 0x1020251fu); LOADALL; }
L_10202522:;
  /* 10202522 mov ecx, dword ptr [esp + 0x28] */ { const u32 m_ = (u32)(esp + 0x28u); ecx = (u32)(M32(m_)); }
  /* 10202526 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202527 call 0x10204f65 */ esp -= 4; M32(esp) = 0x1020252cu; SAVEALL; F_10204f65(c); ABI_CHECK(0x10204f65u, 0x10202527u); RETCHK(0x1020252cu, 0x10202527u); LOADALL;
  /* 1020252c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 1020252f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202a8d:;
  /* 10202a8d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202a8e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202a8f mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202a93 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202a97 jmp 0x102024b0 */ goto L_102024b0;
}

void F_10202a9c(CPU *c) {
  NATIVE_HOOK(0x10202a9cu) REGS; LOADALL;
L_10202a9c:;
  /* 10202a9c mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202a9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202a9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202aa0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202aa1 call 0x10202540 */ esp -= 4; M32(esp) = 0x10202aa6u; SAVEALL; F_10202540(c); ABI_CHECK(0x10202540u, 0x10202aa1u); RETCHK(0x10202aa6u, 0x10202aa1u); LOADALL;
  /* 10202aa6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202aa7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202aa8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202aab(CPU *c) {
  NATIVE_HOOK(0x10202aabu) REGS; LOADALL;
  goto L_10202aab;
L_10202590:;
  /* 10202590 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 10202594 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202595 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10202597 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 1020259b lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 1020259f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102025a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102025a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102025a2 push 0x412 */ { u32 v_ = 0x412u; esp -= 4; M32(esp) = v_; }
  /* 102025a7 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 102025aa call 0x10204ac0 */ esp -= 4; M32(esp) = 0x102025afu; SAVEALL; F_10204ac0(c); ABI_CHECK(0x10204ac0u, 0x102025aau); RETCHK(0x102025afu, 0x102025aau); LOADALL;
  /* 102025af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 102025b1 jl 0x102025bb */ if (LT_) goto L_102025bb;
  /* 102025b3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102025b6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 102025b8 call dword ptr [eax + 0x68] */ { const u32 m_ = (u32)(eax + 0x68u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x102025bbu; SAVEALL; call_ind(c, t_); RETCHK(0x102025bbu, 0x102025b8u); LOADALL; }
L_102025bb:;
  /* 102025bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102025bc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_10202aab:;
  /* 10202aab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202aac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202aad mov dword ptr [esp + 8], edx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(edx); }
  /* 10202ab1 mov dword ptr [esp + 4], eax */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(eax); }
  /* 10202ab5 jmp 0x10202590 */ goto L_10202590;
}

void F_10202aba(CPU *c) {
  NATIVE_HOOK(0x10202abau) REGS; LOADALL;
L_10202aba:;
  /* 10202aba mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202abc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202abd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202abe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202abf call 0x102025c0 */ esp -= 4; M32(esp) = 0x10202ac4u; SAVEALL; F_102025c0(c); ABI_CHECK(0x102025c0u, 0x10202abfu); RETCHK(0x10202ac4u, 0x10202abfu); LOADALL;
  /* 10202ac4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ac5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ac6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202ac9(CPU *c) {
  NATIVE_HOOK(0x10202ac9u) REGS; LOADALL;
L_10202ac9:;
  /* 10202ac9 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202acb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202acc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202acd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202ace call 0x10202600 */ esp -= 4; M32(esp) = 0x10202ad3u; SAVEALL; F_10202600(c); ABI_CHECK(0x10202600u, 0x10202aceu); RETCHK(0x10202ad3u, 0x10202aceu); LOADALL;
  /* 10202ad3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ad4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ad5 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202ad8(CPU *c) {
  NATIVE_HOOK(0x10202ad8u) REGS; LOADALL;
L_10202ad8:;
  /* 10202ad8 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202ada push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202adb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202adc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202add call 0x10202680 */ esp -= 4; M32(esp) = 0x10202ae2u; SAVEALL; F_10202680(c); ABI_CHECK(0x10202680u, 0x10202addu); RETCHK(0x10202ae2u, 0x10202addu); LOADALL;
  /* 10202ae2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ae3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ae4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202ae7(CPU *c) {
  NATIVE_HOOK(0x10202ae7u) REGS; LOADALL;
L_10202ae7:;
  /* 10202ae7 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202ae9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202aea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202aeb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202aec call 0x102026c0 */ esp -= 4; M32(esp) = 0x10202af1u; SAVEALL; F_102026c0(c); ABI_CHECK(0x102026c0u, 0x10202aecu); RETCHK(0x10202af1u, 0x10202aecu); LOADALL;
  /* 10202af1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202af2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202af3 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202af6(CPU *c) {
  NATIVE_HOOK(0x10202af6u) REGS; LOADALL;
L_10202af6:;
  /* 10202af6 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202af8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202af9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202afa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202afb call 0x10202700 */ esp -= 4; M32(esp) = 0x10202b00u; SAVEALL; F_10202700(c); ABI_CHECK(0x10202700u, 0x10202afbu); RETCHK(0x10202b00u, 0x10202afbu); LOADALL;
  /* 10202b00 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b02 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202b05(CPU *c) {
  NATIVE_HOOK(0x10202b05u) REGS; LOADALL;
L_10202b05:;
  /* 10202b05 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b07 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b08 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b0a call 0x10202780 */ esp -= 4; M32(esp) = 0x10202b0fu; SAVEALL; F_10202780(c); ABI_CHECK(0x10202780u, 0x10202b0au); RETCHK(0x10202b0fu, 0x10202b0au); LOADALL;
  /* 10202b0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b11 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202b14(CPU *c) {
  NATIVE_HOOK(0x10202b14u) REGS; LOADALL;
L_10202b14:;
  /* 10202b14 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b16 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b17 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b18 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b19 call 0x102027c0 */ esp -= 4; M32(esp) = 0x10202b1eu; SAVEALL; F_102027c0(c); ABI_CHECK(0x102027c0u, 0x10202b19u); RETCHK(0x10202b1eu, 0x10202b19u); LOADALL;
  /* 10202b1e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b1f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b20 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202b23(CPU *c) {
  NATIVE_HOOK(0x10202b23u) REGS; LOADALL;
L_10202b23:;
  /* 10202b23 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b25 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b26 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b28 call 0x10202830 */ esp -= 4; M32(esp) = 0x10202b2du; SAVEALL; F_10202830(c); ABI_CHECK(0x10202830u, 0x10202b28u); RETCHK(0x10202b2du, 0x10202b28u); LOADALL;
  /* 10202b2d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b2e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b2f ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202b32(CPU *c) {
  NATIVE_HOOK(0x10202b32u) REGS; LOADALL;
L_10202b32:;
  /* 10202b32 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 10202b34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202b35 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202b36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202b37 call 0x10202890 */ esp -= 4; M32(esp) = 0x10202b3cu; SAVEALL; F_10202890(c); ABI_CHECK(0x10202890u, 0x10202b37u); RETCHK(0x10202b3cu, 0x10202b37u); LOADALL;
  /* 10202b3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b3e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202b3c(CPU *c) {
  NATIVE_HOOK(0x10202b3cu) REGS; LOADALL;
L_10202b3c:;
  /* 10202b3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202b3d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202b3e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_10202b44(CPU *c) {
  NATIVE_HOOK(0x10202b44u) REGS; LOADALL;
L_10202b44:;
  /* 10202b44 xor al, 0x29 */ { u32 a_ = (eax & 0xffu), b_ = 0x29u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10202b46 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b48 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10202b49 sub dword ptr [eax], esp */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = esp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10202b4b adc byte ptr [edx + 0x29], dl */ { const u32 m_ = (u32)(edx + 0x29u); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202b4e and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b50 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 10202b51 sub dword ptr [eax], esp */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = esp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10202b53 adc byte ptr [eax + 0x29], dh */ { const u32 m_ = (u32)(eax + 0x29u); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202b56 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b58 jg 0x10202b83 */ if (!(ZF_|LT_)) goto L_10202b83;
  /* 10202b5a and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b5c mov gs, word ptr [ecx] */ TRAP(0x10202b5cu, "unimpl mov gs, word ptr [ecx]");
  /* 10202b5e and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b60 popfd */ { u32 e_ = M32(esp); esp += 4; c->df = (e_ >> 10) & 1; SETRAW(e_); }
  /* 10202b61 sub dword ptr [eax], esp */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = esp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10202b63 adc byte ptr [ecx + ebp + 0x29bb1020], ch */ { const u32 m_ = (u32)(ecx + ebp + 0x29bb1020u); u32 a_ = M8(m_), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202b6a and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b6c retf 0x2029 */ TRAP(0x10202b6cu, "retf");
L_10202b83:;
  /* 10202b83 adc byte ptr [edx + ebp], ah */ { const u32 m_ = (u32)(edx + ebp); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202b86 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b88 xor ebp, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ebp, b_ = M32(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 10202b8a and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b8c inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10202b8d sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202b8f adc byte ptr [ecx + 0x2a], dl */ { const u32 m_ = (u32)(ecx + 0x2au); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202b92 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b94 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 10202b95 sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202b97 adc byte ptr [edi + 0x2a], ch */ { const u32 m_ = (u32)(edi + 0x2au); u32 a_ = M8(m_), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202b9a and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202b9c jle 0x10202bc8 */ if ((ZF_|LT_)) goto L_10202bc8;
  /* 10202b9e and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202ba0 lea ebp, [edx] */ ebp = (u32)((u32)(edx));
  /* 10202ba2 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202ba4 pushfd */ { u32 e_ = EFLAGS_; esp -= 4; M32(esp) = e_; }
  /* 10202ba5 sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202ba7 adc byte ptr [ebx - 0x45efdfd6], ch */ { const u32 m_ = (u32)(ebx + 0xba10202au); u32 a_ = M8(m_), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202bad sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202baf adc cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10202bb1 sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bb3 adc al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10202bb5 sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bb7 adc bh, ah */ { u32 a_ = ((ebx >> 8) & 0xffu), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); ebx = (ebx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bb9 sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bbb adc dh, dh */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bbd sub ah, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bbf adc byte ptr [0x1410202b], al */ { const u32 m_ = (u32)(0x1410202bu); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202bc5 sub esp, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202bc7 adc byte ptr [ebx], ah */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  goto L_10202bc9;
L_10202bc8:;
  /* 10202bc8 and ebp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ebp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  goto L_10202bca;
L_10202bc9:;
  /* 10202bc9 sub esp, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  goto L_10202bcb;
L_10202bca:;
  /* 10202bca and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  goto L_10202bcc;
L_10202bcb:;
  /* 10202bcb adc byte ptr [edx], dh */ { const u32 m_ = (u32)(edx); u32 a_ = M8(m_), b_ = ((edx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  goto L_10202bcd;
L_10202bcc:;
  /* 10202bcc xor ch, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ((ecx >> 8) & 0xffu), b_ = M8(m_); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  goto L_10202bce;
L_10202bcd:;
  /* 10202bcd sub esp, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  goto L_10202bcf;
L_10202bce:;
  /* 10202bce and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  goto L_10202bd0;
L_10202bcf:;
  /* 10202bcf adc byte ptr [ebx + ebp], bh */ { const u32 m_ = (u32)(ebx + ebp); u32 a_ = M8(m_), b_ = ((ebx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  goto L_10202bd2;
L_10202bd0:;
  /* 10202bd0 cmp al, 0x2b */ { u32 a_ = (eax & 0xffu), b_ = 0x2bu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
L_10202bd2:;
  /* 10202bd2 and byte ptr [eax], dl */ { const u32 m_ = (u32)(eax); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202bd4 add byte ptr [ebx], ah */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202bd6 add dword ptr [ebx], esp */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = esp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10202bd8 add ah, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bda add esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202bdc add al, 5 */ { u32 a_ = (eax & 0xffu), b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10202bde and eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202be0 pop es */ TRAP(0x10202be0u, "unimpl pop es");
  /* 10202be1 and ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10202be3 or dword ptr [ebx], esp */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = esp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10202be5 or ah, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202be7 or ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10202bea or eax, 0xf230e23 */ { u32 a_ = eax, b_ = 0xf230e23u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202bef and edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10202bf1 adc dword ptr [ebx], esp */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = esp; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); M32(m_) = (u32)(r_); }
  /* 10202bf3 adc dl, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10202bf5 and edx, dword ptr [edx + 0x23171623] */ { const u32 m_ = (u32)(edx + 0x23171623u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10202bfc sbb byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202bfe and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c00 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c02 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c04 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c06 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c08 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c0a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c0c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c0e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c10 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c12 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c14 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c16 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c18 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c1a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c1c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c1e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c20 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c22 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c24 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c26 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c28 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c2a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c2c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c2e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c30 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c32 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c34 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c36 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c38 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c3a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c3c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c3e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c40 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c42 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c44 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c46 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c48 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c4a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c4c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c4e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c50 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c52 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c54 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c56 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c58 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c5a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c5c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c5e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c60 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c62 and ebx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202c64 and ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202c66 and ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202c69 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c6b and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c6d and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c6f and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c71 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c73 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c75 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c77 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c79 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c7b and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c7d and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c7f and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c81 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c83 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c85 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c87 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c89 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c8b and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c8d and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c8f and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c91 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c93 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c95 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c97 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c99 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c9b and ebx, dword ptr [0x1f231e23] */ { const u32 m_ = (u32)(0x1f231e23u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202ca1 and esp, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202ca3 and esp, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202ca5 and esp, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202ca7 int3 */ TRAP(0x10202ca7u, "int3");
}

void F_10202bd4(CPU *c) {
  NATIVE_HOOK(0x10202bd4u) REGS; LOADALL;
L_10202bd4:;
  /* 10202bd4 add byte ptr [ebx], ah */ { const u32 m_ = (u32)(ebx); u32 a_ = M8(m_), b_ = ((eax >> 8) & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); M8(m_) = (u8)(r_); }
  /* 10202bd6 add dword ptr [ebx], esp */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = esp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 10202bd8 add ah, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202bda add esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202bdc add al, 5 */ { u32 a_ = (eax & 0xffu), b_ = 0x5u; u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10202bde and eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202be0 pop es */ TRAP(0x10202be0u, "unimpl pop es");
  /* 10202be1 and ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10202be3 or dword ptr [ebx], esp */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = esp; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 10202be5 or ah, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ((eax >> 8) & 0xffu), b_ = M8(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 10202be7 or ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ecx, b_ = M32(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10202bea or eax, 0xf230e23 */ { u32 a_ = eax, b_ = 0xf230e23u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202bef and edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10202bf1 adc dword ptr [ebx], esp */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = esp; u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffffffffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); M32(m_) = (u32)(r_); }
  /* 10202bf3 adc dl, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 10202bf5 and edx, dword ptr [edx + 0x23171623] */ { const u32 m_ = (u32)(edx + 0x23171623u); u32 a_ = edx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10202bfc sbb byte ptr [ecx], bl */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); M8(m_) = (u8)(r_); }
  /* 10202bfe and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c00 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c02 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c04 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c06 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c08 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c0a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c0c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c0e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c10 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c12 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c14 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c16 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c18 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c1a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c1c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c1e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c20 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c22 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c24 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c26 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c28 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c2a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c2c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c2e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c30 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c32 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c34 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c36 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c38 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c3a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c3c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c3e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c40 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c42 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c44 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c46 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c48 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c4a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c4c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c4e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c50 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c52 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c54 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c56 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c58 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c5a and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c5c and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c5e and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c60 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c62 and ebx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202c64 and ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202c66 and ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202c69 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c6b and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c6d and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c6f and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c71 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c73 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c75 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c77 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c79 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c7b and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c7d and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c7f and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c81 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c83 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c85 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c87 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c89 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c8b and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c8d and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c8f and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c91 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c93 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c95 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c97 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c99 and esp, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202c9b and ebx, dword ptr [0x1f231e23] */ { const u32 m_ = (u32)(0x1f231e23u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 10202ca1 and esp, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202ca3 and esp, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202ca5 and esp, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = esp, b_ = M32(m_); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esp = (u32)(r_); }
  /* 10202ca7 int3 */ TRAP(0x10202ca7u, "int3");
}

void F_10202cb0(CPU *c) {
  NATIVE_HOOK(0x10202cb0u) REGS; LOADALL;
L_10202cb0:;
  /* 10202cb0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 10202cb2 push 0x1020ab3b */ { u32 v_ = 0x1020ab3bu; esp -= 4; M32(esp) = v_; }
  /* 10202cb7 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 10202cbd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202cbe mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 10202cc5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202cc6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202cc7 push 0x12018 */ { u32 v_ = 0x12018u; esp -= 4; M32(esp) = v_; }
  /* 10202ccc call 0x10204fbd */ esp -= 4; M32(esp) = 0x10202cd1u; SAVEALL; F_10204fbd(c); ABI_CHECK(0x10204fbdu, 0x10202cccu); RETCHK(0x10202cd1u, 0x10202cccu); LOADALL;
  /* 10202cd1 mov esi, eax */ { esi = (u32)(eax); }
  /* 10202cd3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202cd6 mov dword ptr [esp + 4], esi */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(esi); }
  /* 10202cda xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202cdc cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202cde mov dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(eax); }
  /* 10202ce2 je 0x10202cf4 */ if (ZF_) goto L_10202cf4;
  /* 10202ce4 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 10202ce7 mov dword ptr [esi], 0x1020b130 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1020b130u); }
  /* 10202ced call 0x10204a40 */ esp -= 4; M32(esp) = 0x10202cf2u; SAVEALL; F_10204a40(c); ABI_CHECK(0x10204a40u, 0x10202cedu); RETCHK(0x10202cf2u, 0x10202cedu); LOADALL;
  /* 10202cf2 mov eax, esi */ { eax = (u32)(esi); }
L_10202cf4:;
  /* 10202cf4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 10202cf8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202cf9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 10202d00 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 10202d03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_10202d20(CPU *c) {
  NATIVE_HOOK(0x10202d20u) REGS; LOADALL;
L_10202d20:;
  /* 10202d20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202d21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202d22 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202d26 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10202d28 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202d2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202d2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d31 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202d36u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202d31u); RETCHK(0x10202d36u, 0x10202d31u); LOADALL;
  /* 10202d36 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d39 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d3f push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202d41 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10202d44 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202d45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d47 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202d4cu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202d47u); RETCHK(0x10202d4cu, 0x10202d47u); LOADALL;
  /* 10202d4c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d4f je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d51 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202d56 lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 10202d59 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202d5a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d5c call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202d61u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202d5cu); RETCHK(0x10202d61u, 0x10202d5cu); LOADALL;
  /* 10202d61 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d64 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d66 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202d6b lea eax, [edi + 0x124] */ eax = (u32)((u32)(edi + 0x124u));
  /* 10202d71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202d72 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d74 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202d79u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202d74u); RETCHK(0x10202d79u, 0x10202d74u); LOADALL;
  /* 10202d79 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d7c je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d7e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10202d80 mov cx, word ptr [edi + 0x224] */ { const u32 m_ = (u32)(edi + 0x224u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202d87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202d88 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d8a call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202d8fu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202d8au); RETCHK(0x10202d8fu, 0x10202d8au); LOADALL;
  /* 10202d8f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202d92 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202d94 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10202d96 mov dx, word ptr [edi + 0x226] */ { const u32 m_ = (u32)(edi + 0x226u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202d9d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202d9f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202da0 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202da5u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202da0u); RETCHK(0x10202da5u, 0x10202da0u); LOADALL;
  /* 10202da5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202da8 je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202daa mov eax, dword ptr [edi + 0x228] */ { const u32 m_ = (u32)(edi + 0x228u); eax = (u32)(M32(m_)); }
  /* 10202db0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202db1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202db3 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202db8u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202db3u); RETCHK(0x10202db8u, 0x10202db3u); LOADALL;
  /* 10202db8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202dbb je 0x10202dd0 */ if (ZF_) goto L_10202dd0;
  /* 10202dbd mov ecx, dword ptr [edi + 0x22c] */ { const u32 m_ = (u32)(edi + 0x22cu); ecx = (u32)(M32(m_)); }
  /* 10202dc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202dc4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202dc6 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202dcbu; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202dc6u); RETCHK(0x10202dcbu, 0x10202dc6u); LOADALL;
  /* 10202dcb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202dce jne 0x10202dd8 */ if (!ZF_) goto L_10202dd8;
L_10202dd0:;
  /* 10202dd0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202dd1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202dd4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202dd5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202dd8:;
  /* 10202dd8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202dda call 0x10204b60 */ esp -= 4; M32(esp) = 0x10202ddfu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10202ddau); RETCHK(0x10202ddfu, 0x10202ddau); LOADALL;
  /* 10202ddf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202de0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202de1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202df0(CPU *c) {
  NATIVE_HOOK(0x10202df0u) REGS; LOADALL;
L_10202df0:;
  /* 10202df0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202df1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202df2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202df6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202dfc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202dfd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202dff call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202e04u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202dffu); RETCHK(0x10202e04u, 0x10202dffu); LOADALL;
  /* 10202e04 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e07 jne 0x10202e11 */ if (!ZF_) goto L_10202e11;
L_10202e09:;
  /* 10202e09 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202e0a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202e0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202e0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202e11:;
  /* 10202e11 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202e13 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10202e16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202e17 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e19 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202e1eu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202e19u); RETCHK(0x10202e1eu, 0x10202e19u); LOADALL;
  /* 10202e1e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e21 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e23 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202e28 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10202e2b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202e2c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e2e call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202e33u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202e2eu); RETCHK(0x10202e33u, 0x10202e2eu); LOADALL;
  /* 10202e33 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e36 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e38 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10202e3d lea edx, [edi + 0x124] */ edx = (u32)((u32)(edi + 0x124u));
  /* 10202e43 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202e44 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e46 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202e4bu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202e46u); RETCHK(0x10202e4bu, 0x10202e46u); LOADALL;
  /* 10202e4b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e4e je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e50 lea eax, [edi + 0x224] */ eax = (u32)((u32)(edi + 0x224u));
  /* 10202e56 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202e57 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e59 call 0x10204c10 */ esp -= 4; M32(esp) = 0x10202e5eu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10202e59u); RETCHK(0x10202e5eu, 0x10202e59u); LOADALL;
  /* 10202e5e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e61 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e63 lea ecx, [edi + 0x226] */ ecx = (u32)((u32)(edi + 0x226u));
  /* 10202e69 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202e6a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e6c call 0x10204c10 */ esp -= 4; M32(esp) = 0x10202e71u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10202e6cu); RETCHK(0x10202e71u, 0x10202e6cu); LOADALL;
  /* 10202e71 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e74 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e76 lea edx, [edi + 0x228] */ edx = (u32)((u32)(edi + 0x228u));
  /* 10202e7c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202e7d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e7f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202e84u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202e7fu); RETCHK(0x10202e84u, 0x10202e7fu); LOADALL;
  /* 10202e84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202e87 je 0x10202e09 */ if (ZF_) goto L_10202e09;
  /* 10202e89 add edi, 0x22c */ { u32 a_ = edi, b_ = 0x22cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10202e8f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202e90 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202e92 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202e97u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202e92u); RETCHK(0x10202e97u, 0x10202e92u); LOADALL;
  /* 10202e97 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10202e98 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10202e9a sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10202e9c and eax, 0x231 */ { u32 a_ = eax, b_ = 0x231u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202ea1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ea2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10202ea3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ea4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202eb0(CPU *c) {
  NATIVE_HOOK(0x10202eb0u) REGS; LOADALL;
L_10202eb0:;
  /* 10202eb0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202eb1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202eb2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202eb6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10202eb8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202ebe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202ebf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ec1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202ec6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202ec1u); RETCHK(0x10202ec6u, 0x10202ec1u); LOADALL;
  /* 10202ec6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202ec9 je 0x10202edd */ if (ZF_) goto L_10202edd;
  /* 10202ecb push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202ecd add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10202ed0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202ed1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ed3 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202ed8u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202ed3u); RETCHK(0x10202ed8u, 0x10202ed3u); LOADALL;
  /* 10202ed8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202edb jne 0x10202ee5 */ if (!ZF_) goto L_10202ee5;
L_10202edd:;
  /* 10202edd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202ede or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202ee1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202ee2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202ee5:;
  /* 10202ee5 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ee7 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10202eecu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10202ee7u); RETCHK(0x10202eecu, 0x10202ee7u); LOADALL;
  /* 10202eec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202eed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202eee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202f00(CPU *c) {
  NATIVE_HOOK(0x10202f00u) REGS; LOADALL;
L_10202f00:;
  /* 10202f00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202f01 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202f02 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202f06 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10202f08 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202f0e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202f0f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f11 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10202f16u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10202f11u); RETCHK(0x10202f16u, 0x10202f11u); LOADALL;
  /* 10202f16 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f19 je 0x10202f52 */ if (ZF_) goto L_10202f52;
  /* 10202f1b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202f1d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10202f20 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202f21 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f23 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202f28u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202f23u); RETCHK(0x10202f28u, 0x10202f23u); LOADALL;
  /* 10202f28 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f2b je 0x10202f52 */ if (ZF_) goto L_10202f52;
  /* 10202f2d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202f2f lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 10202f32 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10202f33 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f35 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202f3au; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202f35u); RETCHK(0x10202f3au, 0x10202f35u); LOADALL;
  /* 10202f3a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f3d je 0x10202f52 */ if (ZF_) goto L_10202f52;
  /* 10202f3f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202f41 mov ax, word ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202f45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202f48 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202f4du; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202f48u); RETCHK(0x10202f4du, 0x10202f48u); LOADALL;
  /* 10202f4d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f50 jne 0x10202f5a */ if (!ZF_) goto L_10202f5a;
L_10202f52:;
  /* 10202f52 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202f53 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202f56 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202f57 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202f5a:;
  /* 10202f5a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f5c call 0x10204b60 */ esp -= 4; M32(esp) = 0x10202f61u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10202f5cu); RETCHK(0x10202f61u, 0x10202f5cu); LOADALL;
  /* 10202f61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202f62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202f63 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202f70(CPU *c) {
  NATIVE_HOOK(0x10202f70u) REGS; LOADALL;
L_10202f70:;
  /* 10202f70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202f71 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202f72 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202f76 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202f7c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202f7d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f7f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10202f84u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10202f7fu); RETCHK(0x10202f84u, 0x10202f7fu); LOADALL;
  /* 10202f84 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202f87 jne 0x10202f91 */ if (!ZF_) goto L_10202f91;
L_10202f89:;
  /* 10202f89 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202f8a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202f8d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202f8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10202f91:;
  /* 10202f91 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202f93 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10202f96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202f97 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202f99 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202f9eu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202f99u); RETCHK(0x10202f9eu, 0x10202f99u); LOADALL;
  /* 10202f9e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202fa1 je 0x10202f89 */ if (ZF_) goto L_10202f89;
  /* 10202fa3 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202fa5 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 10202fa8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10202fa9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202fab call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10202fb0u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10202fabu); RETCHK(0x10202fb0u, 0x10202fabu); LOADALL;
  /* 10202fb0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202fb3 je 0x10202f89 */ if (ZF_) goto L_10202f89;
  /* 10202fb5 add edi, 0x44 */ { u32 a_ = edi, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10202fb8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202fb9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202fbb call 0x10204c10 */ esp -= 4; M32(esp) = 0x10202fc0u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10202fbbu); RETCHK(0x10202fc0u, 0x10202fbbu); LOADALL;
  /* 10202fc0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10202fc1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10202fc3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10202fc5 and eax, 0x49 */ { u32 a_ = eax, b_ = 0x49u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202fc8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10202fc9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10202fca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10202fcb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10202fd0(CPU *c) {
  NATIVE_HOOK(0x10202fd0u) REGS; LOADALL;
L_10202fd0:;
  /* 10202fd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10202fd1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202fd2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10202fd6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10202fdc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10202fde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10202fdf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202fe1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10202fe6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10202fe1u); RETCHK(0x10202fe6u, 0x10202fe1u); LOADALL;
  /* 10202fe6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202fe9 je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10202feb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10202fed mov ax, word ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10202ff1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10202ff3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10202ff4 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x10202ff9u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10202ff4u); RETCHK(0x10202ff9u, 0x10202ff4u); LOADALL;
  /* 10202ff9 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10202ffc je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10202ffe xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203000 mov cx, word ptr [edi + 0x22] */ { const u32 m_ = (u32)(edi + 0x22u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203004 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203005 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203007 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x1020300cu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203007u); RETCHK(0x1020300cu, 0x10203007u); LOADALL;
  /* 1020300c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020300f je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203011 mov edx, dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (u32)(M32(m_)); }
  /* 10203014 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203015 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203017 call 0x10204c50 */ esp -= 4; M32(esp) = 0x1020301cu; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203017u); RETCHK(0x1020301cu, 0x10203017u); LOADALL;
  /* 1020301c cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020301f je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203021 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203023 mov al, byte ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203026 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203028 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203029 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020302eu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203029u); RETCHK(0x1020302eu, 0x10203029u); LOADALL;
  /* 1020302e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203031 je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203033 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203035 mov cl, byte ptr [edi + 0x29] */ { const u32 m_ = (u32)(edi + 0x29u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203038 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203039 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020303b call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203040u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x1020303bu); RETCHK(0x10203040u, 0x1020303bu); LOADALL;
  /* 10203040 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203043 je 0x10203055 */ if (ZF_) goto L_10203055;
  /* 10203045 mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 10203048 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203049 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020304b call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203050u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x1020304bu); RETCHK(0x10203050u, 0x1020304bu); LOADALL;
  /* 10203050 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203053 jne 0x1020305d */ if (!ZF_) goto L_1020305d;
L_10203055:;
  /* 10203055 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203056 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203059 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020305a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020305d:;
  /* 1020305d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020305f call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203064u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020305fu); RETCHK(0x10203064u, 0x1020305fu); LOADALL;
  /* 10203064 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203065 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203066 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203070(CPU *c) {
  NATIVE_HOOK(0x10203070u) REGS; LOADALL;
L_10203070:;
  /* 10203070 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203071 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203072 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203076 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020307c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020307e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020307f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203081 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203086u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203081u); RETCHK(0x10203086u, 0x10203081u); LOADALL;
  /* 10203086 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203089 jne 0x10203093 */ if (!ZF_) goto L_10203093;
L_1020308b:;
  /* 1020308b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020308c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020308f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203090 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203093:;
  /* 10203093 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10203096 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203097 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203099 call 0x10204c10 */ esp -= 4; M32(esp) = 0x1020309eu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203099u); RETCHK(0x1020309eu, 0x10203099u); LOADALL;
  /* 1020309e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030a1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030a3 lea ecx, [edi + 0x22] */ ecx = (u32)((u32)(edi + 0x22u));
  /* 102030a6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102030a7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030a9 call 0x10204c10 */ esp -= 4; M32(esp) = 0x102030aeu; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x102030a9u); RETCHK(0x102030aeu, 0x102030a9u); LOADALL;
  /* 102030ae cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030b1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030b3 lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 102030b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102030b7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030b9 call 0x10204c90 */ esp -= 4; M32(esp) = 0x102030beu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102030b9u); RETCHK(0x102030beu, 0x102030b9u); LOADALL;
  /* 102030be cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030c1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030c3 lea eax, [edi + 0x28] */ eax = (u32)((u32)(edi + 0x28u));
  /* 102030c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102030c7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030c9 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102030ceu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102030c9u); RETCHK(0x102030ceu, 0x102030c9u); LOADALL;
  /* 102030ce cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030d1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030d3 lea ecx, [edi + 0x29] */ ecx = (u32)((u32)(edi + 0x29u));
  /* 102030d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102030d7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030d9 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102030deu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102030d9u); RETCHK(0x102030deu, 0x102030d9u); LOADALL;
  /* 102030de cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102030e1 je 0x1020308b */ if (ZF_) goto L_1020308b;
  /* 102030e3 add edi, 0x2c */ { u32 a_ = edi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102030e6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102030e7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102030e9 call 0x10204c90 */ esp -= 4; M32(esp) = 0x102030eeu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102030e9u); RETCHK(0x102030eeu, 0x102030e9u); LOADALL;
  /* 102030ee inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102030ef neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102030f1 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102030f3 and eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102030f6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102030f7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102030f8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102030f9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203100(CPU *c) {
  NATIVE_HOOK(0x10203100u) REGS; LOADALL;
L_10203100:;
  /* 10203100 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203101 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203102 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203103 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203107 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203109 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1020310b lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10203111 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203112 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203114 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203119u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203114u); RETCHK(0x10203119u, 0x10203114u); LOADALL;
  /* 10203119 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020311c je 0x10203152 */ if (ZF_) goto L_10203152;
  /* 1020311e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203120 mov cl, byte ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203123 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203124 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203126 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020312bu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203126u); RETCHK(0x1020312bu, 0x10203126u); LOADALL;
  /* 1020312b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020312e je 0x10203152 */ if (ZF_) goto L_10203152;
  /* 10203130 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203132 mov dl, byte ptr [edi + 5] */ { const u32 m_ = (u32)(edi + 0x5u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203135 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203137 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203138 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020313du; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203138u); RETCHK(0x1020313du, 0x10203138u); LOADALL;
  /* 1020313d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203140 je 0x10203152 */ if (ZF_) goto L_10203152;
  /* 10203142 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203145 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203146 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10203148 call 0x10202d20 */ esp -= 4; M32(esp) = 0x1020314du; SAVEALL; F_10202d20(c); ABI_CHECK(0x10202d20u, 0x10203148u); RETCHK(0x1020314du, 0x10203148u); LOADALL;
  /* 1020314d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203150 jne 0x1020315b */ if (!ZF_) goto L_1020315b;
L_10203152:;
  /* 10203152 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203153 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203154 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203157 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203158 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020315b:;
  /* 1020315b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020315d call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203162u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020315du); RETCHK(0x10203162u, 0x1020315du); LOADALL;
  /* 10203162 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203163 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203164 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203165 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203170(CPU *c) {
  NATIVE_HOOK(0x10203170u) REGS; LOADALL;
L_10203170:;
  /* 10203170 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203171 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203172 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10203174 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203175 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203179 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 1020317f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203180 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203182 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203187u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203182u); RETCHK(0x10203187u, 0x10203182u); LOADALL;
  /* 10203187 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020318a jne 0x10203195 */ if (!ZF_) goto L_10203195;
L_1020318c:;
  /* 1020318c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020318d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020318e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203191 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203192 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203195:;
  /* 10203195 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10203198 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203199 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020319b call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102031a0u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x1020319bu); RETCHK(0x102031a0u, 0x1020319bu); LOADALL;
  /* 102031a0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102031a3 je 0x1020318c */ if (ZF_) goto L_1020318c;
  /* 102031a5 lea ecx, [edi + 5] */ ecx = (u32)((u32)(edi + 0x5u));
  /* 102031a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102031a9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102031ab call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102031b0u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102031abu); RETCHK(0x102031b0u, 0x102031abu); LOADALL;
  /* 102031b0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102031b3 je 0x1020318c */ if (ZF_) goto L_1020318c;
  /* 102031b5 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102031b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102031b9 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 102031bb call 0x10202df0 */ esp -= 4; M32(esp) = 0x102031c0u; SAVEALL; F_10202df0(c); ABI_CHECK(0x10202df0u, 0x102031bbu); RETCHK(0x102031c0u, 0x102031bbu); LOADALL;
  /* 102031c0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102031c1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102031c3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102031c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102031c6 and eax, 0x239 */ { u32 a_ = eax, b_ = 0x239u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102031cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102031cc dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102031cd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102031ce ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102031e0(CPU *c) {
  NATIVE_HOOK(0x102031e0u) REGS; LOADALL;
L_102031e0:;
  /* 102031e0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102031e4 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102031e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102031e7 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102031ed call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102031f2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102031edu); RETCHK(0x102031f2u, 0x102031edu); LOADALL;
  /* 102031f2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102031f3 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102031f5 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102031f7 and eax, 0x21 */ { u32 a_ = eax, b_ = 0x21u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102031fa dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102031fb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203200(CPU *c) {
  NATIVE_HOOK(0x10203200u) REGS; LOADALL;
L_10203200:;
  /* 10203200 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203201 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203202 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203203 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203207 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203209 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 1020320b lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 10203211 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203212 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203214 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203219u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203214u); RETCHK(0x10203219u, 0x10203214u); LOADALL;
  /* 10203219 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020321c je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 1020321e push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203220 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10203223 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203224 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203226 call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020322bu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203226u); RETCHK(0x1020322bu, 0x10203226u); LOADALL;
  /* 1020322b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020322e je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 10203230 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203232 mov dl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203235 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203237 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203238 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020323du; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203238u); RETCHK(0x1020323du, 0x10203238u); LOADALL;
  /* 1020323d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203240 je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 10203242 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203244 mov al, byte ptr [edi + 0x25] */ { const u32 m_ = (u32)(edi + 0x25u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203247 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203249 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020324a call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020324fu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x1020324au); RETCHK(0x1020324fu, 0x1020324au); LOADALL;
  /* 1020324f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203252 je 0x10203264 */ if (ZF_) goto L_10203264;
  /* 10203254 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203257 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203258 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1020325a call 0x10202eb0 */ esp -= 4; M32(esp) = 0x1020325fu; SAVEALL; F_10202eb0(c); ABI_CHECK(0x10202eb0u, 0x1020325au); RETCHK(0x1020325fu, 0x1020325au); LOADALL;
  /* 1020325f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203262 jne 0x1020326d */ if (!ZF_) goto L_1020326d;
L_10203264:;
  /* 10203264 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203265 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203266 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203269 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020326a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020326d:;
  /* 1020326d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020326f call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203274u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020326fu); RETCHK(0x10203274u, 0x1020326fu); LOADALL;
  /* 10203274 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203275 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203276 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203277 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203280(CPU *c) {
  NATIVE_HOOK(0x10203280u) REGS; LOADALL;
L_10203280:;
  /* 10203280 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203281 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203282 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10203284 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203285 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 10203289 lea esi, [ebx + 0x10000] */ esi = (u32)((u32)(ebx + 0x10000u));
  /* 1020328f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203290 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203292 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203297u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203292u); RETCHK(0x10203297u, 0x10203292u); LOADALL;
  /* 10203297 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020329a jne 0x102032a5 */ if (!ZF_) goto L_102032a5;
L_1020329c:;
  /* 1020329c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020329d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020329e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102032a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102032a2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102032a5:;
  /* 102032a5 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102032a7 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 102032aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102032ab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102032ad call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102032b2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102032adu); RETCHK(0x102032b2u, 0x102032adu); LOADALL;
  /* 102032b2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102032b5 je 0x1020329c */ if (ZF_) goto L_1020329c;
  /* 102032b7 lea ecx, [edi + 0x24] */ ecx = (u32)((u32)(edi + 0x24u));
  /* 102032ba push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102032bb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102032bd call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102032c2u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102032bdu); RETCHK(0x102032c2u, 0x102032bdu); LOADALL;
  /* 102032c2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102032c5 je 0x1020329c */ if (ZF_) goto L_1020329c;
  /* 102032c7 lea edx, [edi + 0x25] */ edx = (u32)((u32)(edi + 0x25u));
  /* 102032ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 102032cb mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102032cd call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102032d2u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102032cdu); RETCHK(0x102032d2u, 0x102032cdu); LOADALL;
  /* 102032d2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102032d5 je 0x1020329c */ if (ZF_) goto L_1020329c;
  /* 102032d7 add edi, 0x28 */ { u32 a_ = edi, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102032da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102032db mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 102032dd call 0x10203a60 */ esp -= 4; M32(esp) = 0x102032e2u; SAVEALL; F_10203a60(c); ABI_CHECK(0x10203a60u, 0x102032ddu); RETCHK(0x102032e2u, 0x102032ddu); LOADALL;
  /* 102032e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102032e3 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102032e5 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102032e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102032e8 and eax, 0x4d */ { u32 a_ = eax, b_ = 0x4du; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102032eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102032ec dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102032ed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102032ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203300(CPU *c) {
  NATIVE_HOOK(0x10203300u) REGS; LOADALL;
L_10203300:;
  /* 10203300 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203301 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203302 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203306 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020330c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020330e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020330f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203311 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203316u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203311u); RETCHK(0x10203316u, 0x10203311u); LOADALL;
  /* 10203316 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203319 je 0x10203354 */ if (ZF_) goto L_10203354;
  /* 1020331b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020331d lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10203320 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203321 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203323 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203328u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203323u); RETCHK(0x10203328u, 0x10203323u); LOADALL;
  /* 10203328 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020332b je 0x10203354 */ if (ZF_) goto L_10203354;
  /* 1020332d push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 1020332f lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 10203332 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203333 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203335 call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020333au; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203335u); RETCHK(0x1020333au, 0x10203335u); LOADALL;
  /* 1020333a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020333d je 0x10203354 */ if (ZF_) goto L_10203354;
  /* 1020333f push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203344 add edi, 0x50 */ { u32 a_ = edi, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203347 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203348 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020334a call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020334fu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x1020334au); RETCHK(0x1020334fu, 0x1020334au); LOADALL;
  /* 1020334f cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203352 jne 0x1020335c */ if (!ZF_) goto L_1020335c;
L_10203354:;
  /* 10203354 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203355 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203358 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203359 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020335c:;
  /* 1020335c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020335e call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203363u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020335eu); RETCHK(0x10203363u, 0x1020335eu); LOADALL;
  /* 10203363 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203364 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203365 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203370(CPU *c) {
  NATIVE_HOOK(0x10203370u) REGS; LOADALL;
L_10203370:;
  /* 10203370 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203371 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203372 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203376 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020337c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020337e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020337f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203381 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203386u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203381u); RETCHK(0x10203386u, 0x10203381u); LOADALL;
  /* 10203386 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203389 jne 0x10203393 */ if (!ZF_) goto L_10203393;
L_1020338b:;
  /* 1020338b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020338c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020338f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203390 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203393:;
  /* 10203393 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203395 lea eax, [edi + 0x20] */ eax = (u32)((u32)(edi + 0x20u));
  /* 10203398 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203399 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020339b call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102033a0u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x1020339bu); RETCHK(0x102033a0u, 0x1020339bu); LOADALL;
  /* 102033a0 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102033a3 je 0x1020338b */ if (ZF_) goto L_1020338b;
  /* 102033a5 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 102033a7 lea ecx, [edi + 0x40] */ ecx = (u32)((u32)(edi + 0x40u));
  /* 102033aa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102033ab mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102033ad call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102033b2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102033adu); RETCHK(0x102033b2u, 0x102033adu); LOADALL;
  /* 102033b2 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102033b5 je 0x1020338b */ if (ZF_) goto L_1020338b;
  /* 102033b7 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 102033bc add edi, 0x50 */ { u32 a_ = edi, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102033bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102033c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102033c2 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102033c7u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102033c2u); RETCHK(0x102033c7u, 0x102033c2u); LOADALL;
  /* 102033c7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102033c8 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102033ca sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102033cc and eax, 0x151 */ { u32 a_ = eax, b_ = 0x151u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102033d1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102033d2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102033d3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102033d4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102033e0(CPU *c) {
  NATIVE_HOOK(0x102033e0u) REGS; LOADALL;
L_102033e0:;
  /* 102033e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102033e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102033e2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102033e6 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 102033e8 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102033ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102033ef mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102033f1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102033f6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102033f1u); RETCHK(0x102033f6u, 0x102033f1u); LOADALL;
  /* 102033f6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102033f9 je 0x1020340b */ if (ZF_) goto L_1020340b;
  /* 102033fb mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 102033fe push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102033ff mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203401 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203406u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203401u); RETCHK(0x10203406u, 0x10203401u); LOADALL;
  /* 10203406 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203409 jne 0x10203413 */ if (!ZF_) goto L_10203413;
L_1020340b:;
  /* 1020340b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020340c or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020340f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203410 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203413:;
  /* 10203413 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203415 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020341au; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203415u); RETCHK(0x1020341au, 0x10203415u); LOADALL;
  /* 1020341a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020341b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020341c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203420(CPU *c) {
  NATIVE_HOOK(0x10203420u) REGS; LOADALL;
L_10203420:;
  /* 10203420 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203421 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203422 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203426 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020342c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020342d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020342f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203434u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x1020342fu); RETCHK(0x10203434u, 0x1020342fu); LOADALL;
  /* 10203434 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203437 jne 0x10203440 */ if (!ZF_) goto L_10203440;
  /* 10203439 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020343a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020343c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020343d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203440:;
  /* 10203440 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203443 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203444 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203446 call 0x10204c90 */ esp -= 4; M32(esp) = 0x1020344bu; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203446u); RETCHK(0x1020344bu, 0x10203446u); LOADALL;
  /* 1020344b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020344c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 1020344e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203450 and eax, 9 */ { u32 a_ = eax, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203453 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203454 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203455 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203456 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203460(CPU *c) {
  NATIVE_HOOK(0x10203460u) REGS; LOADALL;
L_10203460:;
  /* 10203460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203461 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203462 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203466 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203468 mov al, byte ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 1020346a lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203470 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203472 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203473 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203478u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203473u); RETCHK(0x10203478u, 0x10203473u); LOADALL;
  /* 10203478 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020347b je 0x1020348d */ if (ZF_) goto L_1020348d;
  /* 1020347d push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020347f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203480 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203481 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203483 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203488u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203483u); RETCHK(0x10203488u, 0x10203483u); LOADALL;
  /* 10203488 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020348b jne 0x10203495 */ if (!ZF_) goto L_10203495;
L_1020348d:;
  /* 1020348d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020348e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203491 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203492 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203495:;
  /* 10203495 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203497 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020349cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203497u); RETCHK(0x1020349cu, 0x10203497u); LOADALL;
  /* 1020349c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020349d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020349e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102034b0(CPU *c) {
  NATIVE_HOOK(0x102034b0u) REGS; LOADALL;
L_102034b0:;
  /* 102034b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102034b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102034b2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102034b6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102034bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102034bd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102034bf call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102034c4u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102034bfu); RETCHK(0x102034c4u, 0x102034bfu); LOADALL;
  /* 102034c4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102034c7 jne 0x102034d0 */ if (!ZF_) goto L_102034d0;
  /* 102034c9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102034ca or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102034cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102034cd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102034d0:;
  /* 102034d0 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102034d2 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102034d3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102034d4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102034d6 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102034dbu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102034d6u); RETCHK(0x102034dbu, 0x102034d6u); LOADALL;
  /* 102034db inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102034dc neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102034de sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102034e0 and eax, 0x22 */ { u32 a_ = eax, b_ = 0x22u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102034e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102034e4 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102034e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102034e6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102034f0(CPU *c) {
  NATIVE_HOOK(0x102034f0u) REGS; LOADALL;
L_102034f0:;
  /* 102034f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 102034f1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 102034f2 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102034f3 mov ebp, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ebp = (u32)(M32(m_)); }
  /* 102034f7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102034f9 mov al, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 102034fc mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 102034fe lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 10203504 mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10203508 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203509 call 0x10204b70 */ esp -= 4; M32(esp) = 0x1020350eu; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203509u); RETCHK(0x1020350eu, 0x10203509u); LOADALL;
  /* 1020350e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203511 jne 0x1020351b */ if (!ZF_) goto L_1020351b;
  /* 10203513 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203514 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203516 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203517 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10203518 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_1020351b:;
  /* 1020351b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 1020351c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020351d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 1020351f lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10203522:;
  /* 10203522 movzx ecx, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); ecx = (u32)(M8(m_)); }
  /* 10203526 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203528 jge 0x10203540 */ if (!LT_) goto L_10203540;
  /* 1020352a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020352b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 1020352d call 0x10202f00 */ esp -= 4; M32(esp) = 0x10203532u; SAVEALL; F_10202f00(c); ABI_CHECK(0x10202f00u, 0x1020352du); RETCHK(0x10203532u, 0x1020352du); LOADALL;
  /* 10203532 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203535 je 0x10203551 */ if (ZF_) goto L_10203551;
  /* 10203537 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203538 add edi, 0x48 */ { u32 a_ = edi, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020353b cmp esi, 0xa */ { u32 a_ = esi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020353e jl 0x10203522 */ if (LT_) goto L_10203522;
L_10203540:;
  /* 10203540 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 10203544 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203549u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203544u); RETCHK(0x10203549u, 0x10203544u); LOADALL;
  /* 10203549 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020354a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020354b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020354c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020354d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 1020354e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203551:;
  /* 10203551 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203552 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203553 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203554 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203557 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203558 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 10203559 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203560(CPU *c) {
  NATIVE_HOOK(0x10203560u) REGS; LOADALL;
L_10203560:;
  /* 10203560 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203561 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203562 mov ebp, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebp = (u32)(M32(m_)); }
  /* 10203566 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 10203568 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203569 lea ecx, [ebx + 0x10000] */ ecx = (u32)((u32)(ebx + 0x10000u));
  /* 1020356f call 0x10204ba0 */ esp -= 4; M32(esp) = 0x10203574u; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x1020356fu); RETCHK(0x10203574u, 0x1020356fu); LOADALL;
  /* 10203574 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203577 jne 0x10203580 */ if (!ZF_) goto L_10203580;
  /* 10203579 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020357a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020357c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 1020357d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203580:;
  /* 10203580 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203581 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203582 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10203584 lea edi, [ebp + 4] */ edi = (u32)((u32)(ebp + 0x4u));
L_10203587:;
  /* 10203587 movzx eax, byte ptr [ebp] */ { const u32 m_ = (u32)(ebp); eax = (u32)(M8(m_)); }
  /* 1020358b cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020358d jge 0x102035a5 */ if (!LT_) goto L_102035a5;
  /* 1020358f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203590 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 10203592 call 0x10202f70 */ esp -= 4; M32(esp) = 0x10203597u; SAVEALL; F_10202f70(c); ABI_CHECK(0x10202f70u, 0x10203592u); RETCHK(0x10203597u, 0x10203592u); LOADALL;
  /* 10203597 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020359a je 0x102035b1 */ if (ZF_) goto L_102035b1;
  /* 1020359c inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020359d add edi, 0x48 */ { u32 a_ = edi, b_ = 0x48u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102035a0 cmp esi, 0xa */ { u32 a_ = esi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102035a3 jl 0x10203587 */ if (LT_) goto L_10203587;
L_102035a5:;
  /* 102035a5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035a6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035a7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102035a8 mov eax, 0x2d4 */ { eax = (u32)(0x2d4u); }
  /* 102035ad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102035ae ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102035b1:;
  /* 102035b1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035b3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102035b4 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102035b7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102035b8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102035c0(CPU *c) {
  NATIVE_HOOK(0x102035c0u) REGS; LOADALL;
L_102035c0:;
  /* 102035c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102035c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102035c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102035c6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102035cc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102035ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102035cf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102035d1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x102035d6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x102035d1u); RETCHK(0x102035d6u, 0x102035d1u); LOADALL;
  /* 102035d6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102035d9 je 0x102035eb */ if (ZF_) goto L_102035eb;
  /* 102035db mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 102035de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102035df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102035e1 call 0x10204c50 */ esp -= 4; M32(esp) = 0x102035e6u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x102035e1u); RETCHK(0x102035e6u, 0x102035e1u); LOADALL;
  /* 102035e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102035e9 jne 0x102035f3 */ if (!ZF_) goto L_102035f3;
L_102035eb:;
  /* 102035eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035ec or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102035ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035f0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102035f3:;
  /* 102035f3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102035f5 call 0x10204b60 */ esp -= 4; M32(esp) = 0x102035fau; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102035f5u); RETCHK(0x102035fau, 0x102035f5u); LOADALL;
  /* 102035fa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102035fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102035fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203600(CPU *c) {
  NATIVE_HOOK(0x10203600u) REGS; LOADALL;
L_10203600:;
  /* 10203600 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203601 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203602 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203606 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020360c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020360e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020360f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203611 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203616u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203611u); RETCHK(0x10203616u, 0x10203611u); LOADALL;
  /* 10203616 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203619 jne 0x10203622 */ if (!ZF_) goto L_10203622;
  /* 1020361b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020361c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020361e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020361f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203622:;
  /* 10203622 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203625 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203626 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203628 call 0x10204c90 */ esp -= 4; M32(esp) = 0x1020362du; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203628u); RETCHK(0x1020362du, 0x10203628u); LOADALL;
  /* 1020362d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020362e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203630 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203632 and eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203635 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203636 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203637 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203638 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203640(CPU *c) {
  NATIVE_HOOK(0x10203640u) REGS; LOADALL;
L_10203640:;
  /* 10203640 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203644 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203645 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020364b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 1020364d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 1020364e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203650 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203655u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203650u); RETCHK(0x10203655u, 0x10203650u); LOADALL;
  /* 10203655 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203658 jne 0x10203660 */ if (!ZF_) goto L_10203660;
  /* 1020365a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020365c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020365d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203660:;
  /* 10203660 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203662 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203667u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203662u); RETCHK(0x10203667u, 0x10203662u); LOADALL;
  /* 10203667 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203668 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203670(CPU *c) {
  NATIVE_HOOK(0x10203670u) REGS; LOADALL;
L_10203670:;
  /* 10203670 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203674 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203675 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203676 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 10203678 call 0x10202fd0 */ esp -= 4; M32(esp) = 0x1020367du; SAVEALL; F_10202fd0(c); ABI_CHECK(0x10202fd0u, 0x10203678u); RETCHK(0x1020367du, 0x10203678u); LOADALL;
  /* 1020367d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203680 jne 0x10203688 */ if (!ZF_) goto L_10203688;
  /* 10203682 or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203684 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203685 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203688:;
  /* 10203688 lea ecx, [esi + 0x10000] */ ecx = (u32)((u32)(esi + 0x10000u));
  /* 1020368e call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203693u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020368eu); RETCHK(0x10203693u, 0x1020368eu); LOADALL;
  /* 10203693 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203694 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102036a0(CPU *c) {
  NATIVE_HOOK(0x102036a0u) REGS; LOADALL;
L_102036a0:;
  /* 102036a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102036a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102036a5 call 0x10203070 */ esp -= 4; M32(esp) = 0x102036aau; SAVEALL; F_10203070(c); ABI_CHECK(0x10203070u, 0x102036a5u); RETCHK(0x102036aau, 0x102036a5u); LOADALL;
  /* 102036aa inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102036ab neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102036ad sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102036af and eax, 0x31 */ { u32 a_ = eax, b_ = 0x31u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102036b2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102036b3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102036c0(CPU *c) {
  NATIVE_HOOK(0x102036c0u) REGS; LOADALL;
L_102036c0:;
  /* 102036c0 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 102036c5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102036d0(CPU *c) {
  NATIVE_HOOK(0x102036d0u) REGS; LOADALL;
L_102036d0:;
  /* 102036d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102036d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102036d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102036d6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102036dc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102036de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102036df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102036e1 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102036e6u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102036e1u); RETCHK(0x102036e6u, 0x102036e1u); LOADALL;
  /* 102036e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102036e9 jne 0x102036f2 */ if (!ZF_) goto L_102036f2;
  /* 102036eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102036ec or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102036ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102036ef ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102036f2:;
  /* 102036f2 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102036f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102036f6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102036f8 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x102036fdu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x102036f8u); RETCHK(0x102036fdu, 0x102036f8u); LOADALL;
  /* 102036fd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102036fe neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203700 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203702 and eax, 0x22 */ { u32 a_ = eax, b_ = 0x22u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203705 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203706 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203707 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203708 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203710(CPU *c) {
  NATIVE_HOOK(0x10203710u) REGS; LOADALL;
L_10203710:;
  /* 10203710 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203711 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203712 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203716 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020371c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020371d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020371f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203724u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x1020371fu); RETCHK(0x10203724u, 0x1020371fu); LOADALL;
  /* 10203724 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203727 jne 0x10203731 */ if (!ZF_) goto L_10203731;
L_10203729:;
  /* 10203729 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020372a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020372d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020372e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203731:;
  /* 10203731 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203733 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 10203736 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203737 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203739 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x1020373eu; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203739u); RETCHK(0x1020373eu, 0x10203739u); LOADALL;
  /* 1020373e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203741 je 0x10203729 */ if (ZF_) goto L_10203729;
  /* 10203743 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203746 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203747 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203749 call 0x10204ba0 */ esp -= 4; M32(esp) = 0x1020374eu; SAVEALL; F_10204ba0(c); ABI_CHECK(0x10204ba0u, 0x10203749u); RETCHK(0x1020374eu, 0x10203749u); LOADALL;
  /* 1020374e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020374f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203751 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203753 and eax, 0x29 */ { u32 a_ = eax, b_ = 0x29u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203756 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203757 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203758 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203759 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203760(CPU *c) {
  NATIVE_HOOK(0x10203760u) REGS; LOADALL;
L_10203760:;
  /* 10203760 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203761 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203762 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 10203766 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 10203768 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 10203769 lea ebp, [ecx + 0x10000] */ ebp = (u32)((u32)(ecx + 0x10000u));
  /* 1020376f mov dword ptr [esp + 8], ecx */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 10203773 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203774 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10203776 call 0x10204c50 */ esp -= 4; M32(esp) = 0x1020377bu; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203776u); RETCHK(0x1020377bu, 0x10203776u); LOADALL;
  /* 1020377b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020377e je 0x102037a6 */ if (ZF_) goto L_102037a6;
  /* 10203780 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 10203782 mov cx, word ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203786 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203787 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 10203789 call 0x10204bd0 */ esp -= 4; M32(esp) = 0x1020378eu; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x10203789u); RETCHK(0x1020378eu, 0x10203789u); LOADALL;
  /* 1020378e cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203791 je 0x102037a6 */ if (ZF_) goto L_102037a6;
  /* 10203793 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203795 mov dx, word ptr [ebx + 6] */ { const u32 m_ = (u32)(ebx + 0x6u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 10203799 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1020379b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 1020379c call 0x10204bd0 */ esp -= 4; M32(esp) = 0x102037a1u; SAVEALL; F_10204bd0(c); ABI_CHECK(0x10204bd0u, 0x1020379cu); RETCHK(0x102037a1u, 0x1020379cu); LOADALL;
  /* 102037a1 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037a4 jne 0x102037af */ if (!ZF_) goto L_102037af;
L_102037a6:;
  /* 102037a6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102037a7 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102037aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102037ab pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102037ac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102037af:;
  /* 102037af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102037b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102037b1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 102037b3 lea edi, [ebx + 8] */ edi = (u32)((u32)(ebx + 0x8u));
L_102037b6:;
  /* 102037b6 movzx eax, word ptr [ebx + 6] */ { const u32 m_ = (u32)(ebx + 0x6u); eax = (u32)(M16(m_)); }
  /* 102037ba cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037bc jge 0x102037d6 */ if (!LT_) goto L_102037d6;
  /* 102037be mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 102037c2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102037c3 call 0x10202fd0 */ esp -= 4; M32(esp) = 0x102037c8u; SAVEALL; F_10202fd0(c); ABI_CHECK(0x10202fd0u, 0x102037c3u); RETCHK(0x102037c8u, 0x102037c3u); LOADALL;
  /* 102037c8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037cb je 0x102037e5 */ if (ZF_) goto L_102037e5;
  /* 102037cd inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102037ce add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102037d1 cmp esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102037d4 jl 0x102037b6 */ if (LT_) goto L_102037b6;
L_102037d6:;
  /* 102037d6 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 102037d8 call 0x10204b60 */ esp -= 4; M32(esp) = 0x102037ddu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102037d8u); RETCHK(0x102037ddu, 0x102037d8u); LOADALL;
  /* 102037dd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102037de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102037df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102037e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102037e1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102037e2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102037e5:;
  /* 102037e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102037e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102037e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 102037e8 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102037eb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 102037ec pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 102037ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102037f0(CPU *c) {
  NATIVE_HOOK(0x102037f0u) REGS; LOADALL;
L_102037f0:;
  /* 102037f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 102037f1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102037f2 mov ebp, ecx */ { ebp = (u32)(ecx); }
  /* 102037f4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102037f5 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 102037f9 lea esi, [ebp + 0x10000] */ esi = (u32)((u32)(ebp + 0x10000u));
  /* 102037ff push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203800 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203802 call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203807u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203802u); RETCHK(0x10203807u, 0x10203802u); LOADALL;
  /* 10203807 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020380a je 0x1020381c */ if (ZF_) goto L_1020381c;
  /* 1020380c lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 1020380f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203810 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203812 call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203817u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x10203812u); RETCHK(0x10203817u, 0x10203812u); LOADALL;
  /* 10203817 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020381a jne 0x10203825 */ if (!ZF_) goto L_10203825;
L_1020381c:;
  /* 1020381c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020381d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020381e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203821 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 10203822 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203825:;
  /* 10203825 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 10203826 lea ebx, [edi + 6] */ ebx = (u32)((u32)(edi + 0x6u));
  /* 10203829 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 1020382a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020382c call 0x10204c10 */ esp -= 4; M32(esp) = 0x10203831u; SAVEALL; F_10204c10(c); ABI_CHECK(0x10204c10u, 0x1020382cu); RETCHK(0x10203831u, 0x1020382cu); LOADALL;
  /* 10203831 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203834 jne 0x10203840 */ if (!ZF_) goto L_10203840;
L_10203836:;
  /* 10203836 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203837 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203838 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203839 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020383c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020383d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203840:;
  /* 10203840 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 10203842 add edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_10203845:;
  /* 10203845 movzx ecx, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M16(m_)); }
  /* 10203848 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020384a jge 0x10203862 */ if (!LT_) goto L_10203862;
  /* 1020384c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020384d mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 1020384f call 0x10203070 */ esp -= 4; M32(esp) = 0x10203854u; SAVEALL; F_10203070(c); ABI_CHECK(0x10203070u, 0x1020384fu); RETCHK(0x10203854u, 0x1020384fu); LOADALL;
  /* 10203854 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203857 je 0x10203836 */ if (ZF_) goto L_10203836;
  /* 10203859 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 1020385a add edi, 0x30 */ { u32 a_ = edi, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020385d cmp esi, 0x64 */ { u32 a_ = esi, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203860 jl 0x10203845 */ if (LT_) goto L_10203845;
L_10203862:;
  /* 10203862 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 10203863 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203864 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203865 mov eax, 0x12c8 */ { eax = (u32)(0x12c8u); }
  /* 1020386a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 1020386b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203870(CPU *c) {
  NATIVE_HOOK(0x10203870u) REGS; LOADALL;
L_10203870:;
  /* 10203870 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203874 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203875 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020387b push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 10203880 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203881 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203883 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203888u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203883u); RETCHK(0x10203888u, 0x10203883u); LOADALL;
  /* 10203888 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020388b jne 0x10203893 */ if (!ZF_) goto L_10203893;
  /* 1020388d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020388f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203890 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203893:;
  /* 10203893 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203895 call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020389au; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203895u); RETCHK(0x1020389au, 0x10203895u); LOADALL;
  /* 1020389a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020389b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102038a0(CPU *c) {
  NATIVE_HOOK(0x102038a0u) REGS; LOADALL;
L_102038a0:;
  /* 102038a0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 102038a4 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 102038a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 102038aa add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 102038b0 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102038b5u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102038b0u); RETCHK(0x102038b5u, 0x102038b0u); LOADALL;
  /* 102038b5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102038b6 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102038b8 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102038ba and eax, 0x201 */ { u32 a_ = eax, b_ = 0x201u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102038bf dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102038c0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102038d0(CPU *c) {
  NATIVE_HOOK(0x102038d0u) REGS; LOADALL;
L_102038d0:;
  /* 102038d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102038d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102038d2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102038d6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102038dc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 102038de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102038df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102038e1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x102038e6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x102038e1u); RETCHK(0x102038e6u, 0x102038e1u); LOADALL;
  /* 102038e6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102038e9 je 0x10203900 */ if (ZF_) goto L_10203900;
  /* 102038eb push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 102038f0 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102038f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102038f4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102038f6 call 0x10204d80 */ esp -= 4; M32(esp) = 0x102038fbu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x102038f6u); RETCHK(0x102038fbu, 0x102038f6u); LOADALL;
  /* 102038fb cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102038fe jne 0x10203908 */ if (!ZF_) goto L_10203908;
L_10203900:;
  /* 10203900 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203901 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203904 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203905 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203908:;
  /* 10203908 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020390a call 0x10204b60 */ esp -= 4; M32(esp) = 0x1020390fu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x1020390au); RETCHK(0x1020390fu, 0x1020390au); LOADALL;
  /* 1020390f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203910 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203911 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203920(CPU *c) {
  NATIVE_HOOK(0x10203920u) REGS; LOADALL;
L_10203920:;
  /* 10203920 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203921 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203922 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203926 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020392c push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 1020392e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020392f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203931 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203936u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203931u); RETCHK(0x10203936u, 0x10203931u); LOADALL;
  /* 10203936 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203939 jne 0x10203942 */ if (!ZF_) goto L_10203942;
  /* 1020393b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020393c or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020393e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020393f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203942:;
  /* 10203942 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 10203947 add edi, 0x20 */ { u32 a_ = edi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 1020394a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 1020394b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 1020394d call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203952u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x1020394du); RETCHK(0x10203952u, 0x1020394du); LOADALL;
  /* 10203952 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203953 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203955 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203957 and eax, 0x221 */ { u32 a_ = eax, b_ = 0x221u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 1020395c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 1020395d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 1020395e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 1020395f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203970(CPU *c) {
  NATIVE_HOOK(0x10203970u) REGS; LOADALL;
L_10203970:;
  /* 10203970 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203971 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203972 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203976 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203978 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 1020397e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 1020397f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203981 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203986u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203981u); RETCHK(0x10203986u, 0x10203981u); LOADALL;
  /* 10203986 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203989 je 0x102039a0 */ if (ZF_) goto L_102039a0;
  /* 1020398b push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203990 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203993 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203994 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203996 call 0x10204d80 */ esp -= 4; M32(esp) = 0x1020399bu; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203996u); RETCHK(0x1020399bu, 0x10203996u); LOADALL;
  /* 1020399b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 1020399e jne 0x102039a8 */ if (!ZF_) goto L_102039a8;
L_102039a0:;
  /* 102039a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039a1 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102039a4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102039a8:;
  /* 102039a8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102039aa call 0x10204b60 */ esp -= 4; M32(esp) = 0x102039afu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x102039aau); RETCHK(0x102039afu, 0x102039aau); LOADALL;
  /* 102039af pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039b1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_102039c0(CPU *c) {
  NATIVE_HOOK(0x102039c0u) REGS; LOADALL;
L_102039c0:;
  /* 102039c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 102039c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102039c2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 102039c6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 102039cc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102039cd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102039cf call 0x10204c90 */ esp -= 4; M32(esp) = 0x102039d4u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x102039cfu); RETCHK(0x102039d4u, 0x102039cfu); LOADALL;
  /* 102039d4 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 102039d7 jne 0x102039e0 */ if (!ZF_) goto L_102039e0;
  /* 102039d9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039da or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102039dc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039dd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_102039e0:;
  /* 102039e0 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 102039e5 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 102039e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 102039e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 102039eb call 0x10204cd0 */ esp -= 4; M32(esp) = 0x102039f0u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x102039ebu); RETCHK(0x102039f0u, 0x102039ebu); LOADALL;
  /* 102039f0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 102039f1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 102039f3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 102039f5 and eax, 0x105 */ { u32 a_ = eax, b_ = 0x105u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 102039fa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 102039fb dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 102039fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 102039fd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203a00(CPU *c) {
  NATIVE_HOOK(0x10203a00u) REGS; LOADALL;
L_10203a00:;
  /* 10203a00 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203a04 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203a09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203a0a add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10203a10 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203a15u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203a10u); RETCHK(0x10203a15u, 0x10203a10u); LOADALL;
  /* 10203a15 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203a16 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203a18 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203a1a and eax, 0x101 */ { u32 a_ = eax, b_ = 0x101u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a1f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203a20 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203a30(CPU *c) {
  NATIVE_HOOK(0x10203a30u) REGS; LOADALL;
L_10203a30:;
  /* 10203a30 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203a34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203a35 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203a3b push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 10203a40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203a41 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a43 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203a48u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203a43u); RETCHK(0x10203a48u, 0x10203a43u); LOADALL;
  /* 10203a48 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203a4b jne 0x10203a53 */ if (!ZF_) goto L_10203a53;
  /* 10203a4d or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a4f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a50 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203a53:;
  /* 10203a53 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a55 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203a5au; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203a55u); RETCHK(0x10203a5au, 0x10203a55u); LOADALL;
  /* 10203a5a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a5b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203a60(CPU *c) {
  NATIVE_HOOK(0x10203a60u) REGS; LOADALL;
L_10203a60:;
  /* 10203a60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203a61 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203a62 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203a66 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203a6c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203a6d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a6f call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203a74u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203a6fu); RETCHK(0x10203a74u, 0x10203a6fu); LOADALL;
  /* 10203a74 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203a77 jne 0x10203a80 */ if (!ZF_) goto L_10203a80;
  /* 10203a79 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203a7a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a7d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203a80:;
  /* 10203a80 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203a82 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 10203a85 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203a86 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203a88 call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203a8du; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203a88u); RETCHK(0x10203a8du, 0x10203a88u); LOADALL;
  /* 10203a8d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203a8e neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203a90 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203a92 and eax, 0x25 */ { u32 a_ = eax, b_ = 0x25u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203a95 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203a96 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203a97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203a98 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203aa0(CPU *c) {
  NATIVE_HOOK(0x10203aa0u) REGS; LOADALL;
L_10203aa0:;
  /* 10203aa0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203aa4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203aa5 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203aab push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203aad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203aae mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ab0 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203ab5u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203ab0u); RETCHK(0x10203ab5u, 0x10203ab0u); LOADALL;
  /* 10203ab5 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203ab8 jne 0x10203ac0 */ if (!ZF_) goto L_10203ac0;
  /* 10203aba or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203abc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203abd ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203ac0:;
  /* 10203ac0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ac2 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203ac7u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203ac2u); RETCHK(0x10203ac7u, 0x10203ac2u); LOADALL;
  /* 10203ac7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203ac8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203ad0(CPU *c) {
  NATIVE_HOOK(0x10203ad0u) REGS; LOADALL;
L_10203ad0:;
  /* 10203ad0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203ad1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203ad2 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203ad6 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203adc push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203ade push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203adf mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ae1 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203ae6u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203ae1u); RETCHK(0x10203ae6u, 0x10203ae1u); LOADALL;
  /* 10203ae6 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203ae9 je 0x10203afd */ if (ZF_) goto L_10203afd;
  /* 10203aeb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203aed mov al, byte ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203af0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203af2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203af3 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203af8u; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203af3u); RETCHK(0x10203af8u, 0x10203af3u); LOADALL;
  /* 10203af8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203afb jne 0x10203b05 */ if (!ZF_) goto L_10203b05;
L_10203afd:;
  /* 10203afd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203afe or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203b01 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b02 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203b05:;
  /* 10203b05 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b07 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203b0cu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203b07u); RETCHK(0x10203b0cu, 0x10203b07u); LOADALL;
  /* 10203b0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203b0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203b20(CPU *c) {
  NATIVE_HOOK(0x10203b20u) REGS; LOADALL;
L_10203b20:;
  /* 10203b20 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203b21 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 10203b22 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 10203b26 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 10203b28 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203b2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203b2f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b31 call 0x10204c50 */ esp -= 4; M32(esp) = 0x10203b36u; SAVEALL; F_10204c50(c); ABI_CHECK(0x10204c50u, 0x10203b31u); RETCHK(0x10203b36u, 0x10203b31u); LOADALL;
  /* 10203b36 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b39 je 0x10203b5f */ if (ZF_) goto L_10203b5f;
  /* 10203b3b push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 10203b3d lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 10203b40 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 10203b41 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b43 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203b48u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203b43u); RETCHK(0x10203b48u, 0x10203b43u); LOADALL;
  /* 10203b48 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b4b je 0x10203b5f */ if (ZF_) goto L_10203b5f;
  /* 10203b4d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 10203b4f mov dl, byte ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 10203b52 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b54 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 10203b55 call 0x10204b70 */ esp -= 4; M32(esp) = 0x10203b5au; SAVEALL; F_10204b70(c); ABI_CHECK(0x10204b70u, 0x10203b55u); RETCHK(0x10203b5au, 0x10203b55u); LOADALL;
  /* 10203b5a cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b5d jne 0x10203b67 */ if (!ZF_) goto L_10203b67;
L_10203b5f:;
  /* 10203b5f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203b60 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203b63 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b64 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203b67:;
  /* 10203b67 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b69 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203b6eu; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203b69u); RETCHK(0x10203b6eu, 0x10203b69u); LOADALL;
  /* 10203b6e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 10203b6f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b70 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203b80(CPU *c) {
  NATIVE_HOOK(0x10203b80u) REGS; LOADALL;
L_10203b80:;
  /* 10203b80 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203b84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 10203b85 lea esi, [ecx + 0x10000] */ esi = (u32)((u32)(ecx + 0x10000u));
  /* 10203b8b push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10203b8d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203b8e mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203b90 call 0x10204d80 */ esp -= 4; M32(esp) = 0x10203b95u; SAVEALL; F_10204d80(c); ABI_CHECK(0x10204d80u, 0x10203b90u); RETCHK(0x10203b95u, 0x10203b90u); LOADALL;
  /* 10203b95 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 10203b98 jne 0x10203ba0 */ if (!ZF_) goto L_10203ba0;
  /* 10203b9a or eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203b9c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203b9d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_10203ba0:;
  /* 10203ba0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 10203ba2 call 0x10204b60 */ esp -= 4; M32(esp) = 0x10203ba7u; SAVEALL; F_10204b60(c); ABI_CHECK(0x10204b60u, 0x10203ba2u); RETCHK(0x10203ba7u, 0x10203ba2u); LOADALL;
  /* 10203ba7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 10203ba8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203bb0(CPU *c) {
  NATIVE_HOOK(0x10203bb0u) REGS; LOADALL;
L_10203bb0:;
  /* 10203bb0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203bb4 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 10203bb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203bb7 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10203bbd call 0x10204cd0 */ esp -= 4; M32(esp) = 0x10203bc2u; SAVEALL; F_10204cd0(c); ABI_CHECK(0x10204cd0u, 0x10203bbdu); RETCHK(0x10203bc2u, 0x10203bbdu); LOADALL;
  /* 10203bc2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203bc3 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203bc5 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203bc7 and eax, 0x11 */ { u32 a_ = eax, b_ = 0x11u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203bca dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203bcb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_10203bd0(CPU *c) {
  NATIVE_HOOK(0x10203bd0u) REGS; LOADALL;
L_10203bd0:;
  /* 10203bd0 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 10203bd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 10203bd5 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 10203bdb call 0x10204c90 */ esp -= 4; M32(esp) = 0x10203be0u; SAVEALL; F_10204c90(c); ABI_CHECK(0x10204c90u, 0x10203bdbu); RETCHK(0x10203be0u, 0x10203bdbu); LOADALL;
  /* 10203be0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 10203be1 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 10203be3 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 10203be5 and eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 10203be8 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 10203be9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}
