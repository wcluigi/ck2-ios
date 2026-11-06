#include "funcs.h"

void F_005fe92e(CPU *c) {
  NATIVE_HOOK(0x5fe92eu) REGS; LOADALL;
L_005fe92e:;
  /* 005fe92e jmp dword ptr [0x62e3e8] */ { const u32 m_ = (u32)(0x62e3e8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe934(CPU *c) {
  NATIVE_HOOK(0x5fe934u) REGS; LOADALL;
L_005fe934:;
  /* 005fe934 jmp dword ptr [0x62e3e4] */ { const u32 m_ = (u32)(0x62e3e4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe93a(CPU *c) {
  NATIVE_HOOK(0x5fe93au) REGS; LOADALL;
L_005fe93a:;
  /* 005fe93a jmp dword ptr [0x62e3e0] */ { const u32 m_ = (u32)(0x62e3e0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe940(CPU *c) {
  NATIVE_HOOK(0x5fe940u) REGS; LOADALL;
L_005fe940:;
  /* 005fe940 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fe941 mov bl, byte ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fe945 test bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe948 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe949 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005fe94b je 0x5fe971 */ if (ZF_) goto L_005fe971;
  /* 005fe94d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe94e push 0x5feee0 */ { u32 v_ = 0x5feee0u; esp -= 4; M32(esp) = v_; }
  /* 005fe953 lea edi, [esi - 4] */ edi = (u32)((u32)(esi + 0xfffffffcu));
  /* 005fe956 push dword ptr [edi] */ { const u32 m_ = (u32)(edi); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fe958 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005fe95a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe95b call 0x5fe890 */ esp -= 4; M32(esp) = 0x5fe960u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x5fe95bu); RETCHK(0x5fe960u, 0x5fe95bu); LOADALL;
  /* 005fe960 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe963 je 0x5fe96c */ if (ZF_) goto L_005fe96c;
  /* 005fe965 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005fe966 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5fe96bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5fe966u); RETCHK(0x5fe96bu, 0x5fe966u); LOADALL;
  /* 005fe96b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_005fe96c:;
  /* 005fe96c mov eax, edi */ { eax = (u32)(edi); }
  /* 005fe96e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fe96f jmp 0x5fe986 */ goto L_005fe986;
L_005fe971:;
  /* 005fe971 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005fe973 call 0x5feee0 */ esp -= 4; M32(esp) = 0x5fe978u; SAVEALL; F_005feee0(c); ABI_CHECK(0x5feee0u, 0x5fe973u); RETCHK(0x5fe978u, 0x5fe973u); LOADALL;
  /* 005fe978 test bl, 1 */ { u32 a_ = (ebx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fe97b je 0x5fe984 */ if (ZF_) goto L_005fe984;
  /* 005fe97d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fe97e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5fe983u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5fe97eu); RETCHK(0x5fe983u, 0x5fe97eu); LOADALL;
  /* 005fe983 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_005fe984:;
  /* 005fe984 mov eax, esi */ { eax = (u32)(esi); }
L_005fe986:;
  /* 005fe986 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fe987 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fe988 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005fe98c(CPU *c) {
  NATIVE_HOOK(0x5fe98cu) REGS; LOADALL;
L_005fe98c:;
  /* 005fe98c jmp dword ptr [0x62e3dc] */ { const u32 m_ = (u32)(0x62e3dcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe998(CPU *c) {
  NATIVE_HOOK(0x5fe998u) REGS; LOADALL;
L_005fe998:;
  /* 005fe998 jmp dword ptr [0x62e3d4] */ { const u32 m_ = (u32)(0x62e3d4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe99e(CPU *c) {
  NATIVE_HOOK(0x5fe99eu) REGS; LOADALL;
L_005fe99e:;
  /* 005fe99e jmp dword ptr [0x62e3d0] */ { const u32 m_ = (u32)(0x62e3d0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9a4(CPU *c) {
  NATIVE_HOOK(0x5fe9a4u) REGS; LOADALL;
L_005fe9a4:;
  /* 005fe9a4 jmp dword ptr [0x62e3cc] */ { const u32 m_ = (u32)(0x62e3ccu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9aa(CPU *c) {
  NATIVE_HOOK(0x5fe9aau) REGS; LOADALL;
L_005fe9aa:;
  /* 005fe9aa jmp dword ptr [0x62e3c8] */ { const u32 m_ = (u32)(0x62e3c8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9b0(CPU *c) {
  NATIVE_HOOK(0x5fe9b0u) REGS; LOADALL;
L_005fe9b0:;
  /* 005fe9b0 jmp dword ptr [0x62e3c4] */ { const u32 m_ = (u32)(0x62e3c4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9b6(CPU *c) {
  NATIVE_HOOK(0x5fe9b6u) REGS; LOADALL;
L_005fe9b6:;
  /* 005fe9b6 jmp dword ptr [0x62e3c0] */ { const u32 m_ = (u32)(0x62e3c0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9bc(CPU *c) {
  NATIVE_HOOK(0x5fe9bcu) REGS; LOADALL;
L_005fe9bc:;
  /* 005fe9bc jmp dword ptr [0x62e3bc] */ { const u32 m_ = (u32)(0x62e3bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9c2(CPU *c) {
  NATIVE_HOOK(0x5fe9c2u) REGS; LOADALL;
L_005fe9c2:;
  /* 005fe9c2 jmp dword ptr [0x62e3b8] */ { const u32 m_ = (u32)(0x62e3b8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9c8(CPU *c) {
  NATIVE_HOOK(0x5fe9c8u) REGS; LOADALL;
L_005fe9c8:;
  /* 005fe9c8 jmp dword ptr [0x62e3b4] */ { const u32 m_ = (u32)(0x62e3b4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9ce(CPU *c) {
  NATIVE_HOOK(0x5fe9ceu) REGS; LOADALL;
L_005fe9ce:;
  /* 005fe9ce jmp dword ptr [0x62e3b0] */ { const u32 m_ = (u32)(0x62e3b0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9d4(CPU *c) {
  NATIVE_HOOK(0x5fe9d4u) REGS; LOADALL;
L_005fe9d4:;
  /* 005fe9d4 jmp dword ptr [0x62e3ac] */ { const u32 m_ = (u32)(0x62e3acu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9da(CPU *c) {
  NATIVE_HOOK(0x5fe9dau) REGS; LOADALL;
L_005fe9da:;
  /* 005fe9da jmp dword ptr [0x62e3a8] */ { const u32 m_ = (u32)(0x62e3a8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9e0(CPU *c) {
  NATIVE_HOOK(0x5fe9e0u) REGS; LOADALL;
L_005fe9e0:;
  /* 005fe9e0 jmp dword ptr [0x62e3a0] */ { const u32 m_ = (u32)(0x62e3a0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9e6(CPU *c) {
  NATIVE_HOOK(0x5fe9e6u) REGS; LOADALL;
L_005fe9e6:;
  /* 005fe9e6 jmp dword ptr [0x62e39c] */ { const u32 m_ = (u32)(0x62e39cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9ec(CPU *c) {
  NATIVE_HOOK(0x5fe9ecu) REGS; LOADALL;
L_005fe9ec:;
  /* 005fe9ec jmp dword ptr [0x62e398] */ { const u32 m_ = (u32)(0x62e398u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9f2(CPU *c) {
  NATIVE_HOOK(0x5fe9f2u) REGS; LOADALL;
L_005fe9f2:;
  /* 005fe9f2 jmp dword ptr [0x62e394] */ { const u32 m_ = (u32)(0x62e394u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9f8(CPU *c) {
  NATIVE_HOOK(0x5fe9f8u) REGS; LOADALL;
L_005fe9f8:;
  /* 005fe9f8 jmp dword ptr [0x62e390] */ { const u32 m_ = (u32)(0x62e390u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fe9fe(CPU *c) {
  NATIVE_HOOK(0x5fe9feu) REGS; LOADALL;
L_005fe9fe:;
  /* 005fe9fe push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 005fea00 push 0x63cca0 */ { u32 v_ = 0x63cca0u; esp -= 4; M32(esp) = v_; }
  /* 005fea05 call 0x5fee88 */ esp -= 4; M32(esp) = 0x5fea0au; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x5fea05u); RETCHK(0x5fea0au, 0x5fea05u); LOADALL;
  /* 005fea0a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fea0c mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 005fea0f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005fea12 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_005fea15:;
  /* 005fea15 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005fea18 cmp eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fea1b jge 0x5fea34 */ if (!LT_) goto L_005fea34;
  /* 005fea1d push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fea20 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005fea23 call dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fea26u; SAVEALL; call_ind(c, t_); RETCHK(0x5fea26u, 0x5fea23u); LOADALL; }
  /* 005fea26 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fea29 add dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fea2c add dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fea2f inc dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fea32 jmp 0x5fea15 */ goto L_005fea15;
L_005fea34:;
  /* 005fea34 mov dword ptr [ebp - 0x20], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x1u); }
  /* 005fea3b or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fea3f call 0x5fea4c */ esp -= 4; M32(esp) = 0x5fea44u; SAVEALL; F_005fea4c(c); ABI_CHECK(0x5fea4cu, 0x5fea3fu); RETCHK(0x5fea44u, 0x5fea3fu); LOADALL;
  /* 005fea44 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fea49u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fea44u); RETCHK(0x5fea49u, 0x5fea44u); LOADALL;
  /* 005fea49 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_005fea4c(CPU *c) {
  NATIVE_HOOK(0x5fea4cu) REGS; LOADALL;
L_005fea4c:;
  /* 005fea4c cmp dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fea50 jne 0x5fea63 */ if (!ZF_) goto L_005fea63;
  /* 005fea52 push dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fea55 push dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fea58 push dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fea5b push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fea5e call 0x5fe832 */ esp -= 4; M32(esp) = 0x5fea63u; SAVEALL; F_005fe832(c); ABI_CHECK(0x5fe832u, 0x5fea5eu); RETCHK(0x5fea63u, 0x5fea5eu); LOADALL;
L_005fea63:;
  /* 005fea63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fea64(CPU *c) {
  NATIVE_HOOK(0x5fea64u) REGS; LOADALL;
L_005fea64:;
  /* 005fea64 jmp dword ptr [0x62e38c] */ { const u32 m_ = (u32)(0x62e38cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea6a(CPU *c) {
  NATIVE_HOOK(0x5fea6au) REGS; LOADALL;
L_005fea6a:;
  /* 005fea6a jmp dword ptr [0x62e388] */ { const u32 m_ = (u32)(0x62e388u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea70(CPU *c) {
  NATIVE_HOOK(0x5fea70u) REGS; LOADALL;
L_005fea70:;
  /* 005fea70 jmp dword ptr [0x62e384] */ { const u32 m_ = (u32)(0x62e384u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea76(CPU *c) {
  NATIVE_HOOK(0x5fea76u) REGS; LOADALL;
L_005fea76:;
  /* 005fea76 jmp dword ptr [0x62e380] */ { const u32 m_ = (u32)(0x62e380u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea7c(CPU *c) {
  NATIVE_HOOK(0x5fea7cu) REGS; LOADALL;
L_005fea7c:;
  /* 005fea7c jmp dword ptr [0x62e37c] */ { const u32 m_ = (u32)(0x62e37cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea82(CPU *c) {
  NATIVE_HOOK(0x5fea82u) REGS; LOADALL;
L_005fea82:;
  /* 005fea82 jmp dword ptr [0x62e378] */ { const u32 m_ = (u32)(0x62e378u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea88(CPU *c) {
  NATIVE_HOOK(0x5fea88u) REGS; LOADALL;
L_005fea88:;
  /* 005fea88 jmp dword ptr [0x62e374] */ { const u32 m_ = (u32)(0x62e374u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea8e(CPU *c) {
  NATIVE_HOOK(0x5fea8eu) REGS; LOADALL;
L_005fea8e:;
  /* 005fea8e jmp dword ptr [0x62e370] */ { const u32 m_ = (u32)(0x62e370u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea94(CPU *c) {
  NATIVE_HOOK(0x5fea94u) REGS; LOADALL;
L_005fea94:;
  /* 005fea94 jmp dword ptr [0x62e36c] */ { const u32 m_ = (u32)(0x62e36cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fea9a(CPU *c) {
  NATIVE_HOOK(0x5fea9au) REGS; LOADALL;
L_005fea9a:;
  /* 005fea9a jmp dword ptr [0x62e368] */ { const u32 m_ = (u32)(0x62e368u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feaa0(CPU *c) {
  NATIVE_HOOK(0x5feaa0u) REGS; LOADALL;
L_005feaa0:;
  /* 005feaa0 jmp dword ptr [0x62e364] */ { const u32 m_ = (u32)(0x62e364u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feaa6(CPU *c) {
  NATIVE_HOOK(0x5feaa6u) REGS; LOADALL;
L_005feaa6:;
  /* 005feaa6 jmp dword ptr [0x62e360] */ { const u32 m_ = (u32)(0x62e360u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feaac(CPU *c) {
  NATIVE_HOOK(0x5feaacu) REGS; LOADALL;
L_005feaac:;
  /* 005feaac jmp dword ptr [0x62e35c] */ { const u32 m_ = (u32)(0x62e35cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feab2(CPU *c) {
  NATIVE_HOOK(0x5feab2u) REGS; LOADALL;
L_005feab2:;
  /* 005feab2 jmp dword ptr [0x62e358] */ { const u32 m_ = (u32)(0x62e358u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feab8(CPU *c) {
  NATIVE_HOOK(0x5feab8u) REGS; LOADALL;
L_005feab8:;
  /* 005feab8 jmp dword ptr [0x62e354] */ { const u32 m_ = (u32)(0x62e354u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feabe(CPU *c) {
  NATIVE_HOOK(0x5feabeu) REGS; LOADALL;
L_005feabe:;
  /* 005feabe jmp dword ptr [0x62e350] */ { const u32 m_ = (u32)(0x62e350u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feac4(CPU *c) {
  NATIVE_HOOK(0x5feac4u) REGS; LOADALL;
L_005feac4:;
  /* 005feac4 jmp dword ptr [0x62e34c] */ { const u32 m_ = (u32)(0x62e34cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feaca(CPU *c) {
  NATIVE_HOOK(0x5feacau) REGS; LOADALL;
L_005feaca:;
  /* 005feaca jmp dword ptr [0x62e348] */ { const u32 m_ = (u32)(0x62e348u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fead0(CPU *c) {
  NATIVE_HOOK(0x5fead0u) REGS; LOADALL;
L_005fead0:;
  /* 005fead0 jmp dword ptr [0x62e344] */ { const u32 m_ = (u32)(0x62e344u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fead6(CPU *c) {
  NATIVE_HOOK(0x5fead6u) REGS; LOADALL;
L_005fead6:;
  /* 005fead6 jmp dword ptr [0x62e340] */ { const u32 m_ = (u32)(0x62e340u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feadc(CPU *c) {
  NATIVE_HOOK(0x5feadcu) REGS; LOADALL;
L_005feadc:;
  /* 005feadc jmp dword ptr [0x62e33c] */ { const u32 m_ = (u32)(0x62e33cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feae2(CPU *c) {
  NATIVE_HOOK(0x5feae2u) REGS; LOADALL;
L_005feae2:;
  /* 005feae2 jmp dword ptr [0x62e338] */ { const u32 m_ = (u32)(0x62e338u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feae8(CPU *c) {
  NATIVE_HOOK(0x5feae8u) REGS; LOADALL;
L_005feae8:;
  /* 005feae8 jmp dword ptr [0x62e334] */ { const u32 m_ = (u32)(0x62e334u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feaee(CPU *c) {
  NATIVE_HOOK(0x5feaeeu) REGS; LOADALL;
L_005feaee:;
  /* 005feaee jmp dword ptr [0x62e330] */ { const u32 m_ = (u32)(0x62e330u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feaf4(CPU *c) {
  NATIVE_HOOK(0x5feaf4u) REGS; LOADALL;
L_005feaf4:;
  /* 005feaf4 jmp dword ptr [0x62e32c] */ { const u32 m_ = (u32)(0x62e32cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feafa(CPU *c) {
  NATIVE_HOOK(0x5feafau) REGS; LOADALL;
L_005feafa:;
  /* 005feafa jmp dword ptr [0x62e328] */ { const u32 m_ = (u32)(0x62e328u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb00(CPU *c) {
  NATIVE_HOOK(0x5feb00u) REGS; LOADALL;
L_005feb00:;
  /* 005feb00 jmp dword ptr [0x62e324] */ { const u32 m_ = (u32)(0x62e324u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb06(CPU *c) {
  NATIVE_HOOK(0x5feb06u) REGS; LOADALL;
L_005feb06:;
  /* 005feb06 jmp dword ptr [0x62e320] */ { const u32 m_ = (u32)(0x62e320u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb0c(CPU *c) {
  NATIVE_HOOK(0x5feb0cu) REGS; LOADALL;
L_005feb0c:;
  /* 005feb0c jmp dword ptr [0x62e31c] */ { const u32 m_ = (u32)(0x62e31cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb12(CPU *c) {
  NATIVE_HOOK(0x5feb12u) REGS; LOADALL;
L_005feb12:;
  /* 005feb12 jmp dword ptr [0x62e318] */ { const u32 m_ = (u32)(0x62e318u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb18(CPU *c) {
  NATIVE_HOOK(0x5feb18u) REGS; LOADALL;
L_005feb18:;
  /* 005feb18 jmp dword ptr [0x62e314] */ { const u32 m_ = (u32)(0x62e314u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb1e(CPU *c) {
  NATIVE_HOOK(0x5feb1eu) REGS; LOADALL;
L_005feb1e:;
  /* 005feb1e jmp dword ptr [0x62e310] */ { const u32 m_ = (u32)(0x62e310u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb24(CPU *c) {
  NATIVE_HOOK(0x5feb24u) REGS; LOADALL;
L_005feb24:;
  /* 005feb24 jmp dword ptr [0x62e308] */ { const u32 m_ = (u32)(0x62e308u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb2a(CPU *c) {
  NATIVE_HOOK(0x5feb2au) REGS; LOADALL;
L_005feb2a:;
  /* 005feb2a jmp dword ptr [0x62e304] */ { const u32 m_ = (u32)(0x62e304u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb30(CPU *c) {
  NATIVE_HOOK(0x5feb30u) REGS; LOADALL;
L_005feb30:;
  /* 005feb30 jmp dword ptr [0x62e300] */ { const u32 m_ = (u32)(0x62e300u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb36(CPU *c) {
  NATIVE_HOOK(0x5feb36u) REGS; LOADALL;
L_005feb36:;
  /* 005feb36 jmp dword ptr [0x62e28c] */ { const u32 m_ = (u32)(0x62e28cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb3c(CPU *c) {
  NATIVE_HOOK(0x5feb3cu) REGS; LOADALL;
L_005feb3c:;
  /* 005feb3c jmp dword ptr [0x62e228] */ { const u32 m_ = (u32)(0x62e228u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb42(CPU *c) {
  NATIVE_HOOK(0x5feb42u) REGS; LOADALL;
L_005feb42:;
  /* 005feb42 jmp dword ptr [0x62e22c] */ { const u32 m_ = (u32)(0x62e22cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb48(CPU *c) {
  NATIVE_HOOK(0x5feb48u) REGS; LOADALL;
L_005feb48:;
  /* 005feb48 jmp dword ptr [0x62e230] */ { const u32 m_ = (u32)(0x62e230u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb4e(CPU *c) {
  NATIVE_HOOK(0x5feb4eu) REGS; LOADALL;
L_005feb4e:;
  /* 005feb4e jmp dword ptr [0x62e234] */ { const u32 m_ = (u32)(0x62e234u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb54(CPU *c) {
  NATIVE_HOOK(0x5feb54u) REGS; LOADALL;
L_005feb54:;
  /* 005feb54 jmp dword ptr [0x62e238] */ { const u32 m_ = (u32)(0x62e238u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb5a(CPU *c) {
  NATIVE_HOOK(0x5feb5au) REGS; LOADALL;
L_005feb5a:;
  /* 005feb5a jmp dword ptr [0x62e23c] */ { const u32 m_ = (u32)(0x62e23cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb60(CPU *c) {
  NATIVE_HOOK(0x5feb60u) REGS; LOADALL;
L_005feb60:;
  /* 005feb60 jmp dword ptr [0x62e240] */ { const u32 m_ = (u32)(0x62e240u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb66(CPU *c) {
  NATIVE_HOOK(0x5feb66u) REGS; LOADALL;
L_005feb66:;
  /* 005feb66 jmp dword ptr [0x62e244] */ { const u32 m_ = (u32)(0x62e244u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb6c(CPU *c) {
  NATIVE_HOOK(0x5feb6cu) REGS; LOADALL;
L_005feb6c:;
  /* 005feb6c jmp dword ptr [0x62e248] */ { const u32 m_ = (u32)(0x62e248u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb72(CPU *c) {
  NATIVE_HOOK(0x5feb72u) REGS; LOADALL;
L_005feb72:;
  /* 005feb72 jmp dword ptr [0x62e450] */ { const u32 m_ = (u32)(0x62e450u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb78(CPU *c) {
  NATIVE_HOOK(0x5feb78u) REGS; LOADALL;
L_005feb78:;
  /* 005feb78 jmp dword ptr [0x62e24c] */ { const u32 m_ = (u32)(0x62e24cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb7e(CPU *c) {
  NATIVE_HOOK(0x5feb7eu) REGS; LOADALL;
L_005feb7e:;
  /* 005feb7e jmp dword ptr [0x62e250] */ { const u32 m_ = (u32)(0x62e250u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb84(CPU *c) {
  NATIVE_HOOK(0x5feb84u) REGS; LOADALL;
L_005feb84:;
  /* 005feb84 jmp dword ptr [0x62e254] */ { const u32 m_ = (u32)(0x62e254u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb8a(CPU *c) {
  NATIVE_HOOK(0x5feb8au) REGS; LOADALL;
L_005feb8a:;
  /* 005feb8a jmp dword ptr [0x62e258] */ { const u32 m_ = (u32)(0x62e258u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb90(CPU *c) {
  NATIVE_HOOK(0x5feb90u) REGS; LOADALL;
L_005feb90:;
  /* 005feb90 jmp dword ptr [0x62e25c] */ { const u32 m_ = (u32)(0x62e25cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb96(CPU *c) {
  NATIVE_HOOK(0x5feb96u) REGS; LOADALL;
L_005feb96:;
  /* 005feb96 jmp dword ptr [0x62e260] */ { const u32 m_ = (u32)(0x62e260u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feb9c(CPU *c) {
  NATIVE_HOOK(0x5feb9cu) REGS; LOADALL;
L_005feb9c:;
  /* 005feb9c jmp dword ptr [0x62e264] */ { const u32 m_ = (u32)(0x62e264u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feba2(CPU *c) {
  NATIVE_HOOK(0x5feba2u) REGS; LOADALL;
L_005feba2:;
  /* 005feba2 push 0x74 */ { u32 v_ = 0x74u; esp -= 4; M32(esp) = v_; }
  /* 005feba4 push 0x63ccb0 */ { u32 v_ = 0x63ccb0u; esp -= 4; M32(esp) = v_; }
  /* 005feba9 call 0x5fee88 */ esp -= 4; M32(esp) = 0x5febaeu; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x5feba9u); RETCHK(0x5febaeu, 0x5feba9u); LOADALL;
  /* 005febae xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005febb0 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 005febb3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005febb4 mov edi, dword ptr [0x62e160] */ { const u32 m_ = (u32)(0x62e160u); edi = (u32)(M32(m_)); }
  /* 005febba call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x5febbcu; SAVEALL; call_ind(c, t_); RETCHK(0x5febbcu, 0x5febbau); LOADALL; }
  /* 005febbc cmp word ptr [eax], 0x5a4d */ { const u32 m_ = (u32)(eax); u32 a_ = M16(m_), b_ = 0x5a4du; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 005febc1 jne 0x5febe2 */ if (!ZF_) goto L_005febe2;
  /* 005febc3 mov ecx, dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005febc6 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005febc8 cmp dword ptr [ecx], 0x4550 */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0x4550u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005febce jne 0x5febe2 */ if (!ZF_) goto L_005febe2;
  /* 005febd0 movzx eax, word ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); eax = (u32)(M16(m_)); }
  /* 005febd4 cmp eax, 0x10b */ { u32 a_ = eax, b_ = 0x10bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005febd9 je 0x5febfa */ if (ZF_) goto L_005febfa;
  /* 005febdb cmp eax, 0x20b */ { u32 a_ = eax, b_ = 0x20bu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005febe0 je 0x5febe7 */ if (ZF_) goto L_005febe7;
L_005febe2:;
  /* 005febe2 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 005febe5 jmp 0x5fec0e */ goto L_005fec0e;
L_005febe7:;
  /* 005febe7 cmp dword ptr [ecx + 0x84], 0xe */ { const u32 m_ = (u32)(ecx + 0x84u); u32 a_ = M32(m_), b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005febee jbe 0x5febe2 */ if ((CF_|ZF_)) goto L_005febe2;
  /* 005febf0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005febf2 cmp dword ptr [ecx + 0xf8], ebx */ { const u32 m_ = (u32)(ecx + 0xf8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005febf8 jmp 0x5fec08 */ goto L_005fec08;
L_005febfa:;
  /* 005febfa cmp dword ptr [ecx + 0x74], 0xe */ { const u32 m_ = (u32)(ecx + 0x74u); u32 a_ = M32(m_), b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005febfe jbe 0x5febe2 */ if ((CF_|ZF_)) goto L_005febe2;
  /* 005fec00 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fec02 cmp dword ptr [ecx + 0xe8], ebx */ { const u32 m_ = (u32)(ecx + 0xe8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
L_005fec08:;
  /* 005fec08 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fec0b mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
L_005fec0e:;
  /* 005fec0e mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005fec11 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005fec13 call dword ptr [0x62e2fc] */ { const u32 m_ = (u32)(0x62e2fcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fec19u; SAVEALL; call_ind(c, t_); RETCHK(0x5fec19u, 0x5fec13u); LOADALL; }
  /* 005fec19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fec1a or dword ptr [0x9c0210], 0xffffffff */ { const u32 m_ = (u32)(0x9c0210u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fec21 or dword ptr [0x9c0214], 0xffffffff */ { const u32 m_ = (u32)(0x9c0214u); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fec28 call dword ptr [0x62e2f8] */ { const u32 m_ = (u32)(0x62e2f8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fec2eu; SAVEALL; call_ind(c, t_); RETCHK(0x5fec2eu, 0x5fec28u); LOADALL; }
  /* 005fec2e mov ecx, dword ptr [0x69458c] */ { const u32 m_ = (u32)(0x69458cu); ecx = (u32)(M32(m_)); }
  /* 005fec34 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fec36 call dword ptr [0x62e2f4] */ { const u32 m_ = (u32)(0x62e2f4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fec3cu; SAVEALL; call_ind(c, t_); RETCHK(0x5fec3cu, 0x5fec36u); LOADALL; }
  /* 005fec3c mov ecx, dword ptr [0x694588] */ { const u32 m_ = (u32)(0x694588u); ecx = (u32)(M32(m_)); }
  /* 005fec42 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005fec44 mov eax, dword ptr [0x62e2f0] */ { const u32 m_ = (u32)(0x62e2f0u); eax = (u32)(M32(m_)); }
  /* 005fec49 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fec4b mov dword ptr [0x9c020c], eax */ { const u32 m_ = (u32)(0x9c020cu); M32(m_) = (u32)(eax); }
  /* 005fec50 call 0x5feef2 */ esp -= 4; M32(esp) = 0x5fec55u; SAVEALL; F_005feef2(c); ABI_CHECK(0x5feef2u, 0x5fec50u); RETCHK(0x5fec55u, 0x5fec50u); LOADALL;
  /* 005fec55 call 0x5fef92 */ esp -= 4; M32(esp) = 0x5fec5au; SAVEALL; F_005fef92(c); ABI_CHECK(0x5fef92u, 0x5fec55u); RETCHK(0x5fec5au, 0x5fec55u); LOADALL;
  /* 005fec5a cmp dword ptr [0x67f960], ebx */ { const u32 m_ = (u32)(0x67f960u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fec60 jne 0x5fec6e */ if (!ZF_) goto L_005fec6e;
  /* 005fec62 push 0x5fef92 */ { u32 v_ = 0x5fef92u; esp -= 4; M32(esp) = v_; }
  /* 005fec67 call dword ptr [0x62e2ec] */ { const u32 m_ = (u32)(0x62e2ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fec6du; SAVEALL; call_ind(c, t_); RETCHK(0x5fec6du, 0x5fec67u); LOADALL; }
  /* 005fec6d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_005fec6e:;
  /* 005fec6e call 0x5fef80 */ esp -= 4; M32(esp) = 0x5fec73u; SAVEALL; F_005fef80(c); ABI_CHECK(0x5fef80u, 0x5fec6eu); RETCHK(0x5fec73u, 0x5fec6eu); LOADALL;
  /* 005fec73 push 0x673728 */ { u32 v_ = 0x673728u; esp -= 4; M32(esp) = v_; }
  /* 005fec78 push 0x673724 */ { u32 v_ = 0x673724u; esp -= 4; M32(esp) = v_; }
  /* 005fec7d call 0x5fef7a */ esp -= 4; M32(esp) = 0x5fec82u; SAVEALL; F_005fef7a(c); ABI_CHECK(0x5fef7au, 0x5fec7du); RETCHK(0x5fec82u, 0x5fec7du); LOADALL;
  /* 005fec82 push 0x5fef36 */ { u32 v_ = 0x5fef36u; esp -= 4; M32(esp) = v_; }
  /* 005fec87 call 0x5fe916 */ esp -= 4; M32(esp) = 0x5fec8cu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x5fec87u); RETCHK(0x5fec8cu, 0x5fec87u); LOADALL;
  /* 005fec8c mov eax, dword ptr [0x694584] */ { const u32 m_ = (u32)(0x694584u); eax = (u32)(M32(m_)); }
  /* 005fec91 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 005fec94 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 005fec97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fec98 push dword ptr [0x694580] */ { const u32 m_ = (u32)(0x694580u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 005fec9e lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 005feca1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005feca2 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 005feca5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005feca6 lea eax, [ebp - 0x38] */ eax = (u32)((u32)(ebp + 0xffffffc8u));
  /* 005feca9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fecaa call dword ptr [0x62e2e4] */ { const u32 m_ = (u32)(0x62e2e4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fecb0u; SAVEALL; call_ind(c, t_); RETCHK(0x5fecb0u, 0x5fecaau); LOADALL; }
  /* 005fecb0 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fecb3 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 005fecb6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fecb8 jge 0x5fecc2 */ if (!LT_) goto L_005fecc2;
  /* 005fecba push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005fecbc call 0x5feeec */ esp -= 4; M32(esp) = 0x5fecc1u; SAVEALL; F_005feeec(c); ABI_CHECK(0x5feeecu, 0x5fecbcu); RETCHK(0x5fecc1u, 0x5fecbcu); LOADALL;
  /* 005fecc1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_005fecc2:;
  /* 005fecc2 push 0x673720 */ { u32 v_ = 0x673720u; esp -= 4; M32(esp) = v_; }
  /* 005fecc7 push 0x673000 */ { u32 v_ = 0x673000u; esp -= 4; M32(esp) = v_; }
  /* 005feccc call 0x5fef7a */ esp -= 4; M32(esp) = 0x5fecd1u; SAVEALL; F_005fef7a(c); ABI_CHECK(0x5fef7au, 0x5fecccu); RETCHK(0x5fecd1u, 0x5fecccu); LOADALL;
  /* 005fecd1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fecd2 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fecd3 mov eax, dword ptr [0x62e2dc] */ { const u32 m_ = (u32)(0x62e2dcu); eax = (u32)(M32(m_)); }
  /* 005fecd8 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
L_005fecda:;
  /* 005fecda mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 005fecdd mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fecdf cmp al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005fece1 ja 0x5fed40 */ if (!(CF_|ZF_)) goto L_005fed40;
  /* 005fece3 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005fece5 je 0x5fecec */ if (ZF_) goto L_005fecec;
  /* 005fece7 cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fecea jne 0x5fed40 */ if (!ZF_) goto L_005fed40;
L_005fecec:;
  /* 005fecec mov al, byte ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005fecee cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005fecf0 je 0x5fecfc */ if (ZF_) goto L_005fecfc;
  /* 005fecf2 cmp al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005fecf4 ja 0x5fecfc */ if (!(CF_|ZF_)) goto L_005fecfc;
  /* 005fecf6 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fecf7 mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
  /* 005fecfa jmp 0x5fecec */ goto L_005fecec;
L_005fecfc:;
  /* 005fecfc mov dword ptr [ebp - 0x58], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(ebx); }
  /* 005fecff lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 005fed05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fed06 call dword ptr [0x62e208] */ { const u32 m_ = (u32)(0x62e208u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fed0cu; SAVEALL; call_ind(c, t_); RETCHK(0x5fed0cu, 0x5fed06u); LOADALL; }
  /* 005fed0c test byte ptr [ebp - 0x58], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005fed10 je 0x5fed18 */ if (ZF_) goto L_005fed18;
  /* 005fed12 movzx eax, word ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); eax = (u32)(M16(m_)); }
  /* 005fed16 jmp 0x5fed1b */ goto L_005fed1b;
L_005fed18:;
  /* 005fed18 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 005fed1a pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
L_005fed1b:;
  /* 005fed1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fed1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fed1d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fed1e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fed1f call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x5fed21u; SAVEALL; call_ind(c, t_); RETCHK(0x5fed21u, 0x5fed1fu); LOADALL; }
  /* 005fed21 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fed22 call 0x55b1c0 */ esp -= 4; M32(esp) = 0x5fed27u; SAVEALL; F_0055b1c0(c); ABI_CHECK(0x55b1c0u, 0x5fed22u); RETCHK(0x5fed27u, 0x5fed22u); LOADALL;
  /* 005fed27 mov esi, eax */ { esi = (u32)(eax); }
  /* 005fed29 mov dword ptr [ebp - 0x40], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esi); }
  /* 005fed2c cmp dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fed2f jne 0x5fed38 */ if (!ZF_) goto L_005fed38;
  /* 005fed31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fed32 call dword ptr [0x62e374] */ { const u32 m_ = (u32)(0x62e374u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fed38u; SAVEALL; call_ind(c, t_); RETCHK(0x5fed38u, 0x5fed32u); LOADALL; }
L_005fed38:;
  /* 005fed38 call dword ptr [0x62e2d8] */ { const u32 m_ = (u32)(0x62e2d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fed3eu; SAVEALL; call_ind(c, t_); RETCHK(0x5fed3eu, 0x5fed38u); LOADALL; }
  /* 005fed3e jmp 0x5fed95 */ goto L_005fed95;
L_005fed40:;
  /* 005fed40 cmp al, 0x22 */ { u32 a_ = (eax & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005fed42 jne 0x5fed4f */ if (!ZF_) goto L_005fed4f;
  /* 005fed44 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005fed46 cmp dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fed49 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 005fed4c mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
L_005fed4f:;
  /* 005fed4f movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 005fed52 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fed53 call dword ptr [0x62e2d4] */ { const u32 m_ = (u32)(0x62e2d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fed59u; SAVEALL; call_ind(c, t_); RETCHK(0x5fed59u, 0x5fed53u); LOADALL; }
  /* 005fed59 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fed5a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fed5c je 0x5fed62 */ if (ZF_) goto L_005fed62;
  /* 005fed5e inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fed5f mov dword ptr [ebp - 0x24], esi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(esi); }
L_005fed62:;
  /* 005fed62 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fed63 jmp 0x5fecda */ goto L_005fecda;
L_005fed95:;
  /* 005fed95 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fed99 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fed9b call 0x5feec3 */ esp -= 4; M32(esp) = 0x5feda0u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fed9bu); RETCHK(0x5feda0u, 0x5fed9bu); LOADALL;
  /* 005feda0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fed68(CPU *c) {
  NATIVE_HOOK(0x5fed68u) REGS; LOADALL;
L_005fed68:;
  /* 005fed68 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005fed6b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fed6d mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005fed6f mov dword ptr [ebp - 0x2c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ecx); }
  /* 005fed72 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fed73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fed74 call 0x5feee6 */ esp -= 4; M32(esp) = 0x5fed79u; SAVEALL; F_005feee6(c); ABI_CHECK(0x5feee6u, 0x5fed74u); RETCHK(0x5fed79u, 0x5fed74u); LOADALL;
  /* 005fed79 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fed7a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fed7b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fed7c(CPU *c) {
  NATIVE_HOOK(0x5fed7cu) REGS; LOADALL;
L_005fed7c:;
  /* 005fed7c mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 005fed7f mov esi, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); esi = (u32)(M32(m_)); }
  /* 005fed82 cmp dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fed86 jne 0x5fed8f */ if (!ZF_) goto L_005fed8f;
  /* 005fed88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fed89 call dword ptr [0x62e2cc] */ { const u32 m_ = (u32)(0x62e2ccu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fed8fu; SAVEALL; call_ind(c, t_); RETCHK(0x5fed8fu, 0x5fed89u); LOADALL; }
L_005fed8f:;
  /* 005fed8f call dword ptr [0x62e2c8] */ { const u32 m_ = (u32)(0x62e2c8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fed95u; SAVEALL; call_ind(c, t_); RETCHK(0x5fed95u, 0x5fed8fu); LOADALL; }
  /* 005fed95 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fed99 mov eax, esi */ { eax = (u32)(esi); }
  /* 005fed9b call 0x5feec3 */ esp -= 4; M32(esp) = 0x5feda0u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fed9bu); RETCHK(0x5feda0u, 0x5fed9bu); LOADALL;
  /* 005feda0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fedb0(CPU *c) {
  NATIVE_HOOK(0x5fedb0u) REGS; LOADALL;
L_005fedb0:;
  /* 005fedb0 jmp dword ptr [0x62e268] */ { const u32 m_ = (u32)(0x62e268u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fedb6(CPU *c) {
  NATIVE_HOOK(0x5fedb6u) REGS; LOADALL;
L_005fedb6:;
  /* 005fedb6 jmp dword ptr [0x62e26c] */ { ST(0) = m_acos(ST(0)); c->popped = M32(esp); esp += 4; SAVEALL; return; }
}

void F_005fedbc(CPU *c) {
  NATIVE_HOOK(0x5fedbcu) REGS; LOADALL;
L_005fedbc:;
  /* 005fedbc jmp dword ptr [0x62e270] */ { const u32 m_ = (u32)(0x62e270u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fedc2(CPU *c) {
  NATIVE_HOOK(0x5fedc2u) REGS; LOADALL;
L_005fedc2:;
  /* 005fedc2 jmp dword ptr [0x62e274] */ { s64 v_ = rt_f2i(c, ST(0), 64, 1); FPOP(); eax = (u32)v_; edx = (u32)((u64)v_ >> 32); c->popped = M32(esp); esp += 4; SAVEALL; return; }
}

void F_005fedc8(CPU *c) {
  NATIVE_HOOK(0x5fedc8u) REGS; LOADALL;
L_005fedc8:;
  /* 005fedc8 jmp dword ptr [0x62e278] */ { const u32 m_ = (u32)(0x62e278u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fedce(CPU *c) {
  NATIVE_HOOK(0x5fedceu) REGS; LOADALL;
L_005fedce:;
  /* 005fedce jmp dword ptr [0x62e27c] */ { const u32 m_ = (u32)(0x62e27cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fedd4(CPU *c) {
  NATIVE_HOOK(0x5fedd4u) REGS; LOADALL;
L_005fedd4:;
  /* 005fedd4 jmp dword ptr [0x62e280] */ { const u32 m_ = (u32)(0x62e280u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fedda(CPU *c) {
  NATIVE_HOOK(0x5feddau) REGS; LOADALL;
L_005fedda:;
  /* 005fedda jmp dword ptr [0x62e284] */ { const u32 m_ = (u32)(0x62e284u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fede0(CPU *c) {
  NATIVE_HOOK(0x5fede0u) REGS; LOADALL;
L_005fede0:;
  /* 005fede0 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fede5 jae 0x5fedf5 */ if (!CF_) goto L_005fedf5;
  /* 005fede7 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005fede9 add eax, esp */ { u32 a_ = eax, b_ = esp; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fedeb add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fedee test dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fedf0 xchg esp, eax */ { u32 t_ = esp; esp = (u32)(eax); eax = (u32)(t_); }
  /* 005fedf1 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fedf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fedf4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fedf5:;
  /* 005fedf5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fedf6 lea ecx, [esp + 8] */ ecx = (u32)((u32)(esp + 0x8u));
L_005fedfa:;
  /* 005fedfa sub ecx, 0x1000 */ { u32 a_ = ecx, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fee00 sub eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fee05 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fee07 cmp eax, 0x1000 */ { u32 a_ = eax, b_ = 0x1000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fee0c jae 0x5fedfa */ if (!CF_) goto L_005fedfa;
  /* 005fee0e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005fee10 mov eax, esp */ { eax = (u32)(esp); }
  /* 005fee12 test dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fee14 mov esp, ecx */ { esp = (u32)(ecx); }
  /* 005fee16 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005fee18 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005fee1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fee1c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fee1e(CPU *c) {
  NATIVE_HOOK(0x5fee1eu) REGS; LOADALL;
L_005fee1e:;
  /* 005fee1e jmp dword ptr [0x62e288] */ { const u32 m_ = (u32)(0x62e288u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee24(CPU *c) {
  NATIVE_HOOK(0x5fee24u) REGS; LOADALL;
L_005fee24:;
  /* 005fee24 jmp dword ptr [0x62e30c] */ { double y_ = ST(0); FPOP(); ST(0) = m_pow(ST(0), y_); c->popped = M32(esp); esp += 4; SAVEALL; return; }
}

void F_005fee30(CPU *c) {
  NATIVE_HOOK(0x5fee30u) REGS; LOADALL;
L_005fee30:;
  /* 005fee30 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005fee32 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fee33 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005fee39 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fee3a mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005fee3e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005fee45 mov dword ptr [esp + 0xc], ebp */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(ebp); }
  /* 005fee49 lea ebp, [esp + 0xc] */ ebp = (u32)((u32)(esp + 0xcu));
  /* 005fee4d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fee4e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fee50(CPU *c) {
  NATIVE_HOOK(0x5fee50u) REGS; LOADALL;
L_005fee50:;
  /* 005fee50 jmp dword ptr [0x62e294] */ { double y_ = ST(0); FPOP(); ST(0) = m_fmod(ST(0), y_); c->popped = M32(esp); esp += 4; SAVEALL; return; }
}

void F_005fee56(CPU *c) {
  NATIVE_HOOK(0x5fee56u) REGS; LOADALL;
L_005fee56:;
  /* 005fee56 jmp dword ptr [0x62e298] */ { const u32 m_ = (u32)(0x62e298u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee5c(CPU *c) {
  NATIVE_HOOK(0x5fee5cu) REGS; LOADALL;
L_005fee5c:;
  /* 005fee5c jmp dword ptr [0x62e29c] */ { const u32 m_ = (u32)(0x62e29cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee62(CPU *c) {
  NATIVE_HOOK(0x5fee62u) REGS; LOADALL;
L_005fee62:;
  /* 005fee62 jmp dword ptr [0x62e2a0] */ { const u32 m_ = (u32)(0x62e2a0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee68(CPU *c) {
  NATIVE_HOOK(0x5fee68u) REGS; LOADALL;
L_005fee68:;
  /* 005fee68 jmp dword ptr [0x62e2a4] */ { const u32 m_ = (u32)(0x62e2a4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee6e(CPU *c) {
  NATIVE_HOOK(0x5fee6eu) REGS; LOADALL;
L_005fee6e:;
  /* 005fee6e jmp dword ptr [0x62e2a8] */ { const u32 m_ = (u32)(0x62e2a8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee74(CPU *c) {
  NATIVE_HOOK(0x5fee74u) REGS; LOADALL;
L_005fee74:;
  /* 005fee74 jmp dword ptr [0x62e2ac] */ { const u32 m_ = (u32)(0x62e2acu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee7a(CPU *c) {
  NATIVE_HOOK(0x5fee7au) REGS; LOADALL;
L_005fee7a:;
  /* 005fee7a jmp dword ptr [0x62e2b0] */ { const u32 m_ = (u32)(0x62e2b0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee80(CPU *c) {
  NATIVE_HOOK(0x5fee80u) REGS; LOADALL;
L_005fee80:;
  /* 005fee80 jmp dword ptr [0x62e2b4] */ { const u32 m_ = (u32)(0x62e2b4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fee88(CPU *c) {
  NATIVE_HOOK(0x5fee88u) REGS; LOADALL;
L_005fee88:;
  /* 005fee88 push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 005fee8d mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005fee93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005fee94 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005fee98 mov dword ptr [esp + 0x10], ebp */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(ebp); }
  /* 005fee9c lea ebp, [esp + 0x10] */ ebp = (u32)((u32)(esp + 0x10u));
  /* 005feea0 sub esp, eax */ { u32 a_ = esp, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005feea2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005feea3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005feea4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005feea5 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 005feea8 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 005feeab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005feeac mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005feeaf mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005feeb6 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 005feeb9 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005feebc mov dword ptr fs:[0], eax */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(eax); }
  /* 005feec2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005feec3(CPU *c) {
  NATIVE_HOOK(0x5feec3u) REGS; LOADALL;
L_005feec3:;
  /* 005feec3 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005feec6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005feecd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005feece pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005feecf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005feed0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005feed1 leave */ esp = ebp; ebp = M32(esp); esp += 4;
  /* 005feed2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005feed3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005feed4(CPU *c) {
  NATIVE_HOOK(0x5feed4u) REGS; LOADALL;
L_005feed4:;
  /* 005feed4 jmp dword ptr [0x62e2b8] */ { const u32 m_ = (u32)(0x62e2b8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feeda(CPU *c) {
  NATIVE_HOOK(0x5feedau) REGS; LOADALL;
L_005feeda:;
  /* 005feeda jmp dword ptr [0x62e2bc] */ { const u32 m_ = (u32)(0x62e2bcu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feee0(CPU *c) {
  NATIVE_HOOK(0x5feee0u) REGS; LOADALL;
L_005feee0:;
  /* 005feee0 jmp dword ptr [0x62e2c4] */ { const u32 m_ = (u32)(0x62e2c4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feee6(CPU *c) {
  NATIVE_HOOK(0x5feee6u) REGS; LOADALL;
L_005feee6:;
  /* 005feee6 jmp dword ptr [0x62e2d0] */ { const u32 m_ = (u32)(0x62e2d0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feeec(CPU *c) {
  NATIVE_HOOK(0x5feeecu) REGS; LOADALL;
L_005feeec:;
  /* 005feeec jmp dword ptr [0x62e2e0] */ { const u32 m_ = (u32)(0x62e2e0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feef2(CPU *c) {
  NATIVE_HOOK(0x5feef2u) REGS; LOADALL;
L_005feef2:;
  /* 005feef2 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005feef4 push 0x63ccc0 */ { u32 v_ = 0x63ccc0u; esp -= 4; M32(esp) = v_; }
  /* 005feef9 call 0x5fee88 */ esp -= 4; M32(esp) = 0x5feefeu; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x5feef9u); RETCHK(0x5feefeu, 0x5feef9u); LOADALL;
  /* 005feefe mov dword ptr [ebp - 0x1c], 0x6577f4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x6577f4u); }
L_005fef05:;
  /* 005fef05 cmp dword ptr [ebp - 0x1c], 0x6577f4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x6577f4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fef0c jae 0x5fef30 */ if (!CF_) goto L_005fef30;
  /* 005fef0e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef12 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005fef15 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fef17 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fef19 je 0x5fef26 */ if (ZF_) goto L_005fef26;
  /* 005fef1b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5fef1du; SAVEALL; call_ind(c, t_); RETCHK(0x5fef1du, 0x5fef1bu); LOADALL; }
  /* 005fef1d jmp 0x5fef26 */ goto L_005fef26;
L_005fef26:;
  /* 005fef26 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef2a add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef2e jmp 0x5fef05 */ goto L_005fef05;
L_005fef30:;
  /* 005fef30 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fef35u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fef30u); RETCHK(0x5fef35u, 0x5fef30u); LOADALL;
  /* 005fef35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef1f(CPU *c) {
  NATIVE_HOOK(0x5fef1fu) REGS; LOADALL;
L_005fef1f:;
  /* 005fef1f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fef21 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fef22 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef23(CPU *c) {
  NATIVE_HOOK(0x5fef23u) REGS; LOADALL;
  goto L_005fef23;
L_005fef05:;
  /* 005fef05 cmp dword ptr [ebp - 0x1c], 0x6577f4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x6577f4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fef0c jae 0x5fef30 */ if (!CF_) goto L_005fef30;
  /* 005fef0e and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef12 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005fef15 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fef17 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fef19 je 0x5fef26 */ if (ZF_) goto L_005fef26;
  /* 005fef1b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5fef1du; SAVEALL; call_ind(c, t_); RETCHK(0x5fef1du, 0x5fef1bu); LOADALL; }
  /* 005fef1d jmp 0x5fef26 */ goto L_005fef26;
L_005fef23:;
  /* 005fef23 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_005fef26:;
  /* 005fef26 or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef2a add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef2e jmp 0x5fef05 */ goto L_005fef05;
L_005fef30:;
  /* 005fef30 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fef35u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fef30u); RETCHK(0x5fef35u, 0x5fef30u); LOADALL;
  /* 005fef35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef36(CPU *c) {
  NATIVE_HOOK(0x5fef36u) REGS; LOADALL;
L_005fef36:;
  /* 005fef36 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 005fef38 push 0x63ccd0 */ { u32 v_ = 0x63ccd0u; esp -= 4; M32(esp) = v_; }
  /* 005fef3d call 0x5fee88 */ esp -= 4; M32(esp) = 0x5fef42u; SAVEALL; F_005fee88(c); ABI_CHECK(0x5fee88u, 0x5fef3du); RETCHK(0x5fef42u, 0x5fef3du); LOADALL;
  /* 005fef42 mov dword ptr [ebp - 0x1c], 0x6577fc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x6577fcu); }
L_005fef49:;
  /* 005fef49 cmp dword ptr [ebp - 0x1c], 0x6577fc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x6577fcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fef50 jae 0x5fef74 */ if (!CF_) goto L_005fef74;
  /* 005fef52 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef56 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005fef59 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fef5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fef5d je 0x5fef6a */ if (ZF_) goto L_005fef6a;
  /* 005fef5f call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5fef61u; SAVEALL; call_ind(c, t_); RETCHK(0x5fef61u, 0x5fef5fu); LOADALL; }
  /* 005fef61 jmp 0x5fef6a */ goto L_005fef6a;
L_005fef6a:;
  /* 005fef6a or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef6e add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef72 jmp 0x5fef49 */ goto L_005fef49;
L_005fef74:;
  /* 005fef74 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fef79u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fef74u); RETCHK(0x5fef79u, 0x5fef74u); LOADALL;
  /* 005fef79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef63(CPU *c) {
  NATIVE_HOOK(0x5fef63u) REGS; LOADALL;
L_005fef63:;
  /* 005fef63 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fef65 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005fef66 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef67(CPU *c) {
  NATIVE_HOOK(0x5fef67u) REGS; LOADALL;
  goto L_005fef67;
L_005fef49:;
  /* 005fef49 cmp dword ptr [ebp - 0x1c], 0x6577fc */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x6577fcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fef50 jae 0x5fef74 */ if (!CF_) goto L_005fef74;
  /* 005fef52 and dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef56 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 005fef59 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005fef5b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005fef5d je 0x5fef6a */ if (ZF_) goto L_005fef6a;
  /* 005fef5f call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5fef61u; SAVEALL; call_ind(c, t_); RETCHK(0x5fef61u, 0x5fef5fu); LOADALL; }
  /* 005fef61 jmp 0x5fef6a */ goto L_005fef6a;
L_005fef67:;
  /* 005fef67 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
L_005fef6a:;
  /* 005fef6a or dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef6e add dword ptr [ebp - 0x1c], 4 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fef72 jmp 0x5fef49 */ goto L_005fef49;
L_005fef74:;
  /* 005fef74 call 0x5feec3 */ esp -= 4; M32(esp) = 0x5fef79u; SAVEALL; F_005feec3(c); ABI_CHECK(0x5feec3u, 0x5fef74u); RETCHK(0x5fef79u, 0x5fef74u); LOADALL;
  /* 005fef79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef7a(CPU *c) {
  NATIVE_HOOK(0x5fef7au) REGS; LOADALL;
L_005fef7a:;
  /* 005fef7a jmp dword ptr [0x62e2e8] */ { const u32 m_ = (u32)(0x62e2e8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fef80(CPU *c) {
  NATIVE_HOOK(0x5fef80u) REGS; LOADALL;
L_005fef80:;
  /* 005fef80 push 0x30000 */ { u32 v_ = 0x30000u; esp -= 4; M32(esp) = v_; }
  /* 005fef85 push 0x10000 */ { u32 v_ = 0x10000u; esp -= 4; M32(esp) = v_; }
  /* 005fef8a call 0x5fedce */ esp -= 4; M32(esp) = 0x5fef8fu; SAVEALL; F_005fedce(c); ABI_CHECK(0x5fedceu, 0x5fef8au); RETCHK(0x5fef8fu, 0x5fef8au); LOADALL;
  /* 005fef8f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fef90 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 005fef91 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef92(CPU *c) {
  NATIVE_HOOK(0x5fef92u) REGS; LOADALL;
L_005fef92:;
  /* 005fef92 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005fef94 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005fef96(CPU *c) {
  NATIVE_HOOK(0x5fef96u) REGS; LOADALL;
L_005fef96:;
  /* 005fef96 jmp dword ptr [0x62e684] */ { const u32 m_ = (u32)(0x62e684u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fef9c(CPU *c) {
  NATIVE_HOOK(0x5fef9cu) REGS; LOADALL;
L_005fef9c:;
  /* 005fef9c jmp dword ptr [0x62e658] */ { const u32 m_ = (u32)(0x62e658u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefa2(CPU *c) {
  NATIVE_HOOK(0x5fefa2u) REGS; LOADALL;
L_005fefa2:;
  /* 005fefa2 jmp dword ptr [0x62e65c] */ { const u32 m_ = (u32)(0x62e65cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefa8(CPU *c) {
  NATIVE_HOOK(0x5fefa8u) REGS; LOADALL;
L_005fefa8:;
  /* 005fefa8 jmp dword ptr [0x62e660] */ { const u32 m_ = (u32)(0x62e660u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefb4(CPU *c) {
  NATIVE_HOOK(0x5fefb4u) REGS; LOADALL;
L_005fefb4:;
  /* 005fefb4 jmp dword ptr [0x62e668] */ { const u32 m_ = (u32)(0x62e668u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefba(CPU *c) {
  NATIVE_HOOK(0x5fefbau) REGS; LOADALL;
L_005fefba:;
  /* 005fefba jmp dword ptr [0x62e66c] */ { const u32 m_ = (u32)(0x62e66cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefc0(CPU *c) {
  NATIVE_HOOK(0x5fefc0u) REGS; LOADALL;
L_005fefc0:;
  /* 005fefc0 jmp dword ptr [0x62e670] */ { const u32 m_ = (u32)(0x62e670u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefc6(CPU *c) {
  NATIVE_HOOK(0x5fefc6u) REGS; LOADALL;
L_005fefc6:;
  /* 005fefc6 jmp dword ptr [0x62e674] */ { const u32 m_ = (u32)(0x62e674u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefcc(CPU *c) {
  NATIVE_HOOK(0x5fefccu) REGS; LOADALL;
L_005fefcc:;
  /* 005fefcc jmp dword ptr [0x62e678] */ { const u32 m_ = (u32)(0x62e678u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefd2(CPU *c) {
  NATIVE_HOOK(0x5fefd2u) REGS; LOADALL;
L_005fefd2:;
  /* 005fefd2 jmp dword ptr [0x62e67c] */ { const u32 m_ = (u32)(0x62e67cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefd8(CPU *c) {
  NATIVE_HOOK(0x5fefd8u) REGS; LOADALL;
L_005fefd8:;
  /* 005fefd8 jmp dword ptr [0x62e680] */ { const u32 m_ = (u32)(0x62e680u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefde(CPU *c) {
  NATIVE_HOOK(0x5fefdeu) REGS; LOADALL;
L_005fefde:;
  /* 005fefde jmp dword ptr [0x62e6b4] */ { const u32 m_ = (u32)(0x62e6b4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefe4(CPU *c) {
  NATIVE_HOOK(0x5fefe4u) REGS; LOADALL;
L_005fefe4:;
  /* 005fefe4 jmp dword ptr [0x62e688] */ { const u32 m_ = (u32)(0x62e688u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005fefea(CPU *c) {
  NATIVE_HOOK(0x5fefeau) REGS; LOADALL;
L_005fefea:;
  /* 005fefea jmp dword ptr [0x62e68c] */ { const u32 m_ = (u32)(0x62e68cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feff0(CPU *c) {
  NATIVE_HOOK(0x5feff0u) REGS; LOADALL;
L_005feff0:;
  /* 005feff0 jmp dword ptr [0x62e690] */ { const u32 m_ = (u32)(0x62e690u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feff6(CPU *c) {
  NATIVE_HOOK(0x5feff6u) REGS; LOADALL;
L_005feff6:;
  /* 005feff6 jmp dword ptr [0x62e694] */ { const u32 m_ = (u32)(0x62e694u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005feffc(CPU *c) {
  NATIVE_HOOK(0x5feffcu) REGS; LOADALL;
L_005feffc:;
  /* 005feffc jmp dword ptr [0x62e698] */ { const u32 m_ = (u32)(0x62e698u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005ff002(CPU *c) {
  NATIVE_HOOK(0x5ff002u) REGS; LOADALL;
L_005ff002:;
  /* 005ff002 jmp dword ptr [0x62e69c] */ { const u32 m_ = (u32)(0x62e69cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005ff008(CPU *c) {
  NATIVE_HOOK(0x5ff008u) REGS; LOADALL;
L_005ff008:;
  /* 005ff008 jmp dword ptr [0x62e6a0] */ { const u32 m_ = (u32)(0x62e6a0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005ff00e(CPU *c) {
  NATIVE_HOOK(0x5ff00eu) REGS; LOADALL;
L_005ff00e:;
  /* 005ff00e jmp dword ptr [0x62e6a4] */ { const u32 m_ = (u32)(0x62e6a4u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005ff014(CPU *c) {
  NATIVE_HOOK(0x5ff014u) REGS; LOADALL;
L_005ff014:;
  /* 005ff014 jmp dword ptr [0x62e6a8] */ { const u32 m_ = (u32)(0x62e6a8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005ff01a(CPU *c) {
  NATIVE_HOOK(0x5ff01au) REGS; LOADALL;
L_005ff01a:;
  /* 005ff01a jmp dword ptr [0x62e6ac] */ { const u32 m_ = (u32)(0x62e6acu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005ff020(CPU *c) {
  NATIVE_HOOK(0x5ff020u) REGS; LOADALL;
L_005ff020:;
  /* 005ff020 jmp dword ptr [0x62e6b0] */ { const u32 m_ = (u32)(0x62e6b0u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_005ff030(CPU *c) {
  NATIVE_HOOK(0x5ff030u) REGS; LOADALL;
L_005ff030:;
  /* 005ff030 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff034 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005ff036 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff038 je 0x5ff06c */ if (ZF_) goto L_005ff06c;
  /* 005ff03a mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005ff03d cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff03f je 0x5ff06c */ if (ZF_) goto L_005ff06c;
  /* 005ff041 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff042 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 005ff045 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 005ff048 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 005ff04b mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 005ff04e neg esi */ { u32 a_ = esi; u32 r_ = (0u - a_) & 0xffffffffu; esi = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005ff050 sbb esi, esi */ { u32 a_ = esi, b_ = esi; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); esi = (u32)(r_); }
  /* 005ff052 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff053 and esi, 7 */ { u32 a_ = esi, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 005ff056 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 005ff058 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff059 mov eax, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff05c mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005ff05f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff060 call 0x5ff5c0 */ esp -= 4; M32(esp) = 0x5ff065u; SAVEALL; F_005ff5c0(c); ABI_CHECK(0x5ff5c0u, 0x5ff060u); RETCHK(0x5ff065u, 0x5ff060u); LOADALL;
  /* 005ff065 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff068 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff06a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff06b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff06c:;
  /* 005ff06c mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 005ff071 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005ff080(CPU *c) {
  NATIVE_HOOK(0x5ff080u) REGS; LOADALL;
L_005ff080:;
  /* 005ff080 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff081 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005ff085 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff087 je 0x5ff0c0 */ if (ZF_) goto L_005ff0c0;
  /* 005ff089 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff08c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff08e je 0x5ff0c0 */ if (ZF_) goto L_005ff0c0;
  /* 005ff090 cmp dword ptr [esi + 0x24], 0 */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff094 je 0x5ff0c0 */ if (ZF_) goto L_005ff0c0;
  /* 005ff096 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 005ff099 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff09b je 0x5ff0a7 */ if (ZF_) goto L_005ff0a7;
  /* 005ff09d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff09e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff09f call 0x6001a0 */ esp -= 4; M32(esp) = 0x5ff0a4u; SAVEALL; F_006001a0(c); ABI_CHECK(0x6001a0u, 0x5ff09fu); RETCHK(0x5ff0a4u, 0x5ff09fu); LOADALL;
  /* 005ff0a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005ff0a7:;
  /* 005ff0a7 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff0aa mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005ff0ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff0ae push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff0af call dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff0b2u; SAVEALL; call_ind(c, t_); RETCHK(0x5ff0b2u, 0x5ff0afu); LOADALL; }
  /* 005ff0b2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff0b5 mov dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 005ff0bc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff0be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff0bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff0c0:;
  /* 005ff0c0 mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 005ff0c5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff0c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005ff0d0(CPU *c) {
  NATIVE_HOOK(0x5ff0d0u) REGS; LOADALL;
L_005ff0d0:;
  /* 005ff0d0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005ff0d4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff0d5 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005ff0d7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff0d9 je 0x5ff1c6 */ if (ZF_) goto L_005ff1c6;
  /* 005ff0df mov al, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005ff0e1 cmp al, byte ptr [0x67f964] */ { const u32 m_ = (u32)(0x67f964u); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005ff0e7 jne 0x5ff1c6 */ if (!ZF_) goto L_005ff1c6;
  /* 005ff0ed cmp dword ptr [esp + 0x14], 0x38 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff0f2 jne 0x5ff1c6 */ if (!ZF_) goto L_005ff1c6;
  /* 005ff0f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff0f9 mov esi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); esi = (u32)(M32(m_)); }
  /* 005ff0fd cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff0ff je 0x5ff1be */ if (ZF_) goto L_005ff1be;
  /* 005ff105 cmp dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff108 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 005ff10b jne 0x5ff117 */ if (!ZF_) goto L_005ff117;
  /* 005ff10d mov dword ptr [esi + 0x20], 0x600360 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x600360u); }
  /* 005ff114 mov dword ptr [esi + 0x28], edi */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(edi); }
L_005ff117:;
  /* 005ff117 cmp dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff11a jne 0x5ff123 */ if (!ZF_) goto L_005ff123;
  /* 005ff11c mov dword ptr [esi + 0x24], 0x600380 */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0x600380u); }
L_005ff123:;
  /* 005ff123 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005ff126 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 005ff128 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005ff12a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff12b call dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff12eu; SAVEALL; call_ind(c, t_); RETCHK(0x5ff12eu, 0x5ff12bu); LOADALL; }
  /* 005ff12e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff131 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff133 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005ff136 je 0x5ff1a0 */ if (ZF_) goto L_005ff1a0;
  /* 005ff138 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005ff13c cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff13e mov dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edi); }
  /* 005ff141 mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff144 mov dword ptr [edx + 0xc], edi */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(edi); }
  /* 005ff147 jge 0x5ff155 */ if (!LT_) goto L_005ff155;
  /* 005ff149 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff14c neg ecx */ { u32 a_ = ecx; u32 r_ = (0u - a_) & 0xffffffffu; ecx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005ff14e mov dword ptr [eax + 0xc], 1 */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(0x1u); }
L_005ff155:;
  /* 005ff155 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff158 jl 0x5ff1b5 */ if (LT_) goto L_005ff1b5;
  /* 005ff15a cmp ecx, 0xf */ { u32 a_ = ecx, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff15d jg 0x5ff1b5 */ if (!(ZF_|LT_)) goto L_005ff1b5;
  /* 005ff15f mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff162 mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 005ff165 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005ff16a shl eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ff16c mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005ff16f mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005ff172 neg edx */ { u32 a_ = edx; u32 r_ = (0u - a_) & 0xffffffffu; edx = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005ff174 sbb edx, edx */ { u32 a_ = edx, b_ = edx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); edx = (u32)(r_); }
  /* 005ff176 not edx */ { edx = (u32)(~edx & 0xffffffffu); }
  /* 005ff178 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff179 and edx, 0x600230 */ { u32 a_ = edx, b_ = 0x600230u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005ff17f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff180 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff181 call 0x5ff640 */ esp -= 4; M32(esp) = 0x5ff186u; SAVEALL; F_005ff640(c); ABI_CHECK(0x5ff640u, 0x5ff181u); RETCHK(0x5ff186u, 0x5ff181u); LOADALL;
  /* 005ff186 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005ff189 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 005ff18c mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff18f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff192 cmp dword ptr [edx + 0x14], edi */ { const u32 m_ = (u32)(edx + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff195 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff196 jne 0x5ff1a8 */ if (!ZF_) goto L_005ff1a8;
  /* 005ff198 call 0x5ff080 */ esp -= 4; M32(esp) = 0x5ff19du; SAVEALL; F_005ff080(c); ABI_CHECK(0x5ff080u, 0x5ff198u); RETCHK(0x5ff19du, 0x5ff198u); LOADALL;
  /* 005ff19d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005ff1a0:;
  /* 005ff1a0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff1a1 mov eax, 0xfffffffc */ { eax = (u32)(0xfffffffcu); }
  /* 005ff1a6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff1a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff1a8:;
  /* 005ff1a8 call 0x5ff030 */ esp -= 4; M32(esp) = 0x5ff1adu; SAVEALL; F_005ff030(c); ABI_CHECK(0x5ff030u, 0x5ff1a8u); RETCHK(0x5ff1adu, 0x5ff1a8u); LOADALL;
  /* 005ff1ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff1b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff1b1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff1b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff1b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff1b5:;
  /* 005ff1b5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff1b6 call 0x5ff080 */ esp -= 4; M32(esp) = 0x5ff1bbu; SAVEALL; F_005ff080(c); ABI_CHECK(0x5ff080u, 0x5ff1b6u); RETCHK(0x5ff1bbu, 0x5ff1b6u); LOADALL;
  /* 005ff1bb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005ff1be:;
  /* 005ff1be pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff1bf mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 005ff1c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff1c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff1c6:;
  /* 005ff1c6 mov eax, 0xfffffffa */ { eax = (u32)(0xfffffffau); }
  /* 005ff1cb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff1cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005ff1d0(CPU *c) {
  NATIVE_HOOK(0x5ff1d0u) REGS; LOADALL;
L_005ff1d0:;
  /* 005ff1d0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005ff1d4 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005ff1d8 mov edx, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); edx = (u32)(M32(m_)); }
  /* 005ff1dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff1dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff1de push 0xf */ { u32 v_ = 0xfu; esp -= 4; M32(esp) = v_; }
  /* 005ff1e0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff1e1 call 0x5ff0d0 */ esp -= 4; M32(esp) = 0x5ff1e6u; SAVEALL; F_005ff0d0(c); ABI_CHECK(0x5ff0d0u, 0x5ff1e1u); RETCHK(0x5ff1e6u, 0x5ff1e1u); LOADALL;
  /* 005ff1e6 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff1e9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005ff1f0(CPU *c) {
  NATIVE_HOOK(0x5ff1f0u) REGS; LOADALL;
L_005ff1f0:;
  /* 005ff1f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff1f1 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005ff1f5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff1f7 je 0x5ff581 */ if (ZF_) goto L_005ff581;
  /* 005ff1fd mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff200 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff202 je 0x5ff581 */ if (ZF_) goto L_005ff581;
  /* 005ff208 cmp dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff20b je 0x5ff581 */ if (ZF_) goto L_005ff581;
  /* 005ff211 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005ff213 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ff214 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005ff216 cmp dword ptr [esp + 0x10], 4 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff21b push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005ff21c setne bl */ { ebx = (ebx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005ff21f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff220 mov edi, 0xfffffffb */ { edi = (u32)(0xfffffffbu); }
  /* 005ff225 sub ebx, 1 */ { u32 a_ = ebx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005ff228 and ebx, 0xfffffffb */ { u32 a_ = ebx, b_ = 0xfffffffbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005ff22b cmp eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff22e ja 0x5ff55a */ if (!(CF_|ZF_)) goto L_005ff55a;
L_005ff234:;
  /* 005ff234 jmp dword ptr [eax*4 + 0x5ff588] */ { const u32 m_ = (u32)(eax * 4u + 0x5ff588u); u32 t_ = M32(m_); switch (t_) { case 0x5ff23bu: goto L_005ff23b; case 0x5ff2a6u: goto L_005ff2a6; case 0x5ff30du: goto L_005ff30d; case 0x5ff37bu: goto L_005ff37b; case 0x5ff3acu: goto L_005ff3ac; case 0x5ff3ddu: goto L_005ff3dd; case 0x5ff40eu: goto L_005ff40e; case 0x5ff47du: goto L_005ff47d; case 0x5ff4aau: goto L_005ff4aa; case 0x5ff4d7u: goto L_005ff4d7; case 0x5ff504u: goto L_005ff504; case 0x5ff540u: goto L_005ff540; case 0x5ff56du: goto L_005ff56d; case 0x5ff577u: goto L_005ff577; default: SAVEALL; call_ind(c, t_); return; } }
L_005ff23b:;
  /* 005ff23b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff23e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff240 je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff246 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff24a mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff24d add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff250 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff253 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005ff255 movzx ecx, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M8(m_)); }
  /* 005ff258 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005ff25b mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff25e mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005ff261 add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff264 and cl, 0xf */ { u32 a_ = (ecx & 0xffu), b_ = 0xfu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005ff267 cmp cl, 8 */ { u32 a_ = (ecx & 0xffu), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005ff26a mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff26c je 0x5ff280 */ if (ZF_) goto L_005ff280;
  /* 005ff26e mov dword ptr [eax], 0xd */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xdu); }
  /* 005ff274 mov dword ptr [esi + 0x18], 0x67f96c */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67f96cu); }
  /* 005ff27b jmp 0x5ff44b */ goto L_005ff44b;
L_005ff280:;
  /* 005ff280 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005ff283 shr ecx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005ff286 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff289 cmp ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff28c jbe 0x5ff2a0 */ if ((CF_|ZF_)) goto L_005ff2a0;
  /* 005ff28e mov dword ptr [eax], 0xd */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xdu); }
  /* 005ff294 mov dword ptr [esi + 0x18], 0x67f988 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67f988u); }
  /* 005ff29b jmp 0x5ff44b */ goto L_005ff44b;
L_005ff2a0:;
  /* 005ff2a0 mov dword ptr [eax], 1 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1u); }
L_005ff2a6:;
  /* 005ff2a6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff2a9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff2ab je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff2b1 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff2b5 mov ebp, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005ff2b8 add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff2bb mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff2be mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005ff2c0 movzx ecx, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M8(m_)); }
  /* 005ff2c3 add eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff2c6 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005ff2c8 mov eax, dword ptr [ebp + 4] */ { const u32 m_ = (u32)(ebp + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff2cb shl eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ff2ce add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff2d0 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005ff2d4 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005ff2d6 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 005ff2db div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x5ff2dbu); eax = q_; edx = r_; }
  /* 005ff2dd mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff2df test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff2e1 je 0x5ff2f6 */ if (ZF_) goto L_005ff2f6;
  /* 005ff2e3 mov dword ptr [ebp], 0xd */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(0xdu); }
  /* 005ff2ea mov dword ptr [esi + 0x18], 0x67f99c */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67f99cu); }
  /* 005ff2f1 jmp 0x5ff44b */ goto L_005ff44b;
L_005ff2f6:;
  /* 005ff2f6 test byte ptr [esp + 0x14], 0x20 */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M8(m_), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005ff2fb jne 0x5ff474 */ if (!ZF_) goto L_005ff474;
  /* 005ff301 mov dword ptr [ebp], 7 */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(0x7u); }
  /* 005ff308 jmp 0x5ff455 */ goto L_005ff455;
L_005ff30d:;
  /* 005ff30d mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff310 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005ff313 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff314 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff315 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff316 call 0x5ff6e0 */ esp -= 4; M32(esp) = 0x5ff31bu; SAVEALL; F_005ff6e0(c); ABI_CHECK(0x5ff6e0u, 0x5ff316u); RETCHK(0x5ff31bu, 0x5ff316u); LOADALL;
  /* 005ff31b mov edi, eax */ { edi = (u32)(eax); }
  /* 005ff31d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff320 cmp edi, -3 */ { u32 a_ = edi, b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff323 jne 0x5ff33d */ if (!ZF_) goto L_005ff33d;
  /* 005ff325 mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff328 mov dword ptr [edx], 0xd */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0xdu); }
  /* 005ff32e mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff331 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005ff338 jmp 0x5ff455 */ goto L_005ff455;
L_005ff33d:;
  /* 005ff33d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff33f cmove edi, ebx */ { if (ZF_) { edi = (u32)(ebx); } }
  /* 005ff342 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff345 jne 0x5ff46d */ if (!ZF_) goto L_005ff46d;
  /* 005ff34b mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff34e mov edx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); edx = (u32)(M32(m_)); }
  /* 005ff351 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 005ff354 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff355 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff356 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff357 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff359 call 0x5ff5c0 */ esp -= 4; M32(esp) = 0x5ff35eu; SAVEALL; F_005ff5c0(c); ABI_CHECK(0x5ff5c0u, 0x5ff359u); RETCHK(0x5ff35eu, 0x5ff359u); LOADALL;
  /* 005ff35e mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff361 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff364 cmp dword ptr [eax + 0xc], 0 */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff368 je 0x5ff375 */ if (ZF_) goto L_005ff375;
  /* 005ff36a mov dword ptr [eax], 0xc */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xcu); }
  /* 005ff370 jmp 0x5ff455 */ goto L_005ff455;
L_005ff375:;
  /* 005ff375 mov dword ptr [eax], 8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x8u); }
L_005ff37b:;
  /* 005ff37b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff37e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff380 je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff386 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff38a mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff38d add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff390 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff393 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005ff395 movzx ecx, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M8(m_)); }
  /* 005ff398 shl ecx, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005ff39b mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005ff39e mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff3a1 add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff3a4 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff3a6 mov dword ptr [eax], 9 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x9u); }
L_005ff3ac:;
  /* 005ff3ac mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff3af test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff3b1 je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff3b7 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005ff3b9 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff3bd add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff3c0 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff3c3 movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 005ff3c6 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff3c9 shl edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ff3cc add dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff3cf mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff3d2 add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff3d5 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff3d7 mov dword ptr [eax], 0xa */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xau); }
L_005ff3dd:;
  /* 005ff3dd mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff3e0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff3e2 je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff3e8 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005ff3ea add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff3ee add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff3f1 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff3f4 movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 005ff3f7 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff3fa shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ff3fd add dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff400 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff403 add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff406 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff408 mov dword ptr [eax], 0xb */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xbu); }
L_005ff40e:;
  /* 005ff40e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff411 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff413 je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff415 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005ff417 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff41b add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff41e mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff421 movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 005ff424 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff427 add dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff42a mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff42d add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff430 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005ff433 cmp ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff436 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff438 je 0x5ff564 */ if (ZF_) goto L_005ff564;
  /* 005ff43e mov dword ptr [eax], 0xd */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0xdu); }
  /* 005ff444 mov dword ptr [esi + 0x18], 0x67f9c4 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67f9c4u); }
L_005ff44b:;
  /* 005ff44b mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff44e mov dword ptr [edx + 4], 5 */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(0x5u); }
L_005ff455:;
  /* 005ff455 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff458 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 005ff45a cmp eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff45d jbe 0x5ff234 */ if ((CF_|ZF_)) goto L_005ff234;
  /* 005ff463 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff464 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff465 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff466 mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 005ff46b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff46c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff46d:;
  /* 005ff46d mov eax, edi */ { eax = (u32)(edi); }
  /* 005ff46f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff470 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff471 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff472 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff473 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff474:;
  /* 005ff474 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005ff477 mov dword ptr [ecx], 2 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x2u); }
L_005ff47d:;
  /* 005ff47d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff480 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff482 je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff484 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 005ff486 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff48a mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005ff48d add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff490 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff493 movzx eax, byte ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M8(m_)); }
  /* 005ff496 shl eax, 0x18 */ { u32 n_ = (24u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ff499 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005ff49c mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff49f add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff4a2 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff4a4 mov dword ptr [edx], 3 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0x3u); }
L_005ff4aa:;
  /* 005ff4aa mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff4ad test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff4af je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff4b1 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005ff4b3 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff4b7 add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff4ba mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff4bd movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 005ff4c0 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff4c3 shl edx, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ff4c6 add dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff4c9 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff4cc add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff4cf mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff4d1 mov dword ptr [eax], 4 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x4u); }
L_005ff4d7:;
  /* 005ff4d7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff4da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff4dc je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff4de mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005ff4e0 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff4e4 add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff4e7 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff4ea movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 005ff4ed mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff4f0 shl edx, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ff4f3 add dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff4f6 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff4f9 add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff4fc mov edi, ebx */ { edi = (u32)(ebx); }
  /* 005ff4fe mov dword ptr [eax], 5 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x5u); }
L_005ff504:;
  /* 005ff504 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff507 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff509 je 0x5ff46d */ if (ZF_) goto L_005ff46d;
  /* 005ff50f mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 005ff511 add dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff515 add eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff518 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff51b movzx edx, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M8(m_)); }
  /* 005ff51e mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff521 add dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff524 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff527 add dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff52a mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005ff52d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff52e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff52f mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 005ff532 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff533 mov dword ptr [eax], 6 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6u); }
  /* 005ff539 mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 005ff53e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff53f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff540:;
  /* 005ff540 mov edx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ff543 mov dword ptr [edx], 0xd */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0xdu); }
  /* 005ff549 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 005ff54c mov dword ptr [esi + 0x18], 0x67f9b4 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67f9b4u); }
  /* 005ff553 mov dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x0u); }
L_005ff55a:;
  /* 005ff55a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff55b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff55c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff55d mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 005ff562 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff563 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff564:;
  /* 005ff564 mov ecx, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 005ff567 mov dword ptr [ecx], 0xc */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0xcu); }
L_005ff56d:;
  /* 005ff56d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff56e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff56f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff570 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005ff575 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff576 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff577:;
  /* 005ff577 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff578 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff579 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff57a mov eax, 0xfffffffd */ { eax = (u32)(0xfffffffdu); }
  /* 005ff57f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff580 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff581:;
  /* 005ff581 mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 005ff586 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff587 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005ff5c0(CPU *c) {
  NATIVE_HOOK(0x5ff5c0u) REGS; LOADALL;
L_005ff5c0:;
  /* 005ff5c0 mov eax, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005ff5c4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff5c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff5c7 mov esi, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005ff5cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff5cc je 0x5ff5d3 */ if (ZF_) goto L_005ff5d3;
  /* 005ff5ce mov ecx, dword ptr [esi + 0x3c] */ { const u32 m_ = (u32)(esi + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005ff5d1 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
L_005ff5d3:;
  /* 005ff5d3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005ff5d5 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff5d8 mov edi, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edi = (u32)(M32(m_)); }
  /* 005ff5dc je 0x5ff5e3 */ if (ZF_) goto L_005ff5e3;
  /* 005ff5de cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff5e1 jne 0x5ff5f1 */ if (!ZF_) goto L_005ff5f1;
L_005ff5e3:;
  /* 005ff5e3 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 005ff5e6 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005ff5e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff5ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff5eb call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff5eeu; SAVEALL; call_ind(c, t_); RETCHK(0x5ff5eeu, 0x5ff5ebu); LOADALL; }
  /* 005ff5ee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005ff5f1:;
  /* 005ff5f1 cmp dword ptr [esi], 6 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff5f4 jne 0x5ff603 */ if (!ZF_) goto L_005ff603;
  /* 005ff5f6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005ff5f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff5fa push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff5fb call 0x600aa0 */ esp -= 4; M32(esp) = 0x5ff600u; SAVEALL; F_00600aa0(c); ABI_CHECK(0x600aa0u, 0x5ff5fbu); RETCHK(0x5ff600u, 0x5ff5fbu); LOADALL;
  /* 005ff600 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005ff603:;
  /* 005ff603 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005ff606 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 005ff609 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 005ff60c mov eax, dword ptr [esi + 0x38] */ { const u32 m_ = (u32)(esi + 0x38u); eax = (u32)(M32(m_)); }
  /* 005ff60f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff611 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005ff617 mov dword ptr [esi + 0x1c], 0 */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 005ff61e mov dword ptr [esi + 0x20], 0 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 005ff625 je 0x5ff638 */ if (ZF_) goto L_005ff638;
  /* 005ff627 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005ff629 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005ff62b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005ff62d call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x5ff62fu; SAVEALL; call_ind(c, t_); RETCHK(0x5ff62fu, 0x5ff62du); LOADALL; }
  /* 005ff62f mov dword ptr [esi + 0x3c], eax */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(eax); }
  /* 005ff632 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff635 mov dword ptr [edi + 0x30], eax */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(eax); }
L_005ff638:;
  /* 005ff638 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff639 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff63a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005ff640(CPU *c) {
  NATIVE_HOOK(0x5ff640u) REGS; LOADALL;
L_005ff640:;
  /* 005ff640 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff641 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff642 mov edi, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); edi = (u32)(M32(m_)); }
  /* 005ff646 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005ff649 push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 005ff64b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005ff64d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff64e call dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff651u; SAVEALL; call_ind(c, t_); RETCHK(0x5ff651u, 0x5ff64eu); LOADALL; }
  /* 005ff651 mov esi, eax */ { esi = (u32)(eax); }
  /* 005ff653 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff656 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff658 je 0x5ff67d */ if (ZF_) goto L_005ff67d;
  /* 005ff65a mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005ff65d push 0x5a0 */ { u32 v_ = 0x5a0u; esp -= 4; M32(esp) = v_; }
  /* 005ff662 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 005ff664 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff665 call dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff668u; SAVEALL; call_ind(c, t_); RETCHK(0x5ff668u, 0x5ff665u); LOADALL; }
  /* 005ff668 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff66b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff66d mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 005ff670 jne 0x5ff682 */ if (!ZF_) goto L_005ff682;
  /* 005ff672 mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 005ff675 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff676 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff677 call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff67au; SAVEALL; call_ind(c, t_); RETCHK(0x5ff67au, 0x5ff677u); LOADALL; }
  /* 005ff67a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005ff67d:;
  /* 005ff67d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff67e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff680 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff681 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff682:;
  /* 005ff682 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005ff685 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ff686 mov ebx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ebx = (u32)(M32(m_)); }
  /* 005ff68a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ff68b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005ff68d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff68e call dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff691u; SAVEALL; call_ind(c, t_); RETCHK(0x5ff691u, 0x5ff68eu); LOADALL; }
  /* 005ff691 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff694 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff696 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 005ff699 jne 0x5ff6b7 */ if (!ZF_) goto L_005ff6b7;
  /* 005ff69b mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005ff69e mov edx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (u32)(M32(m_)); }
  /* 005ff6a1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff6a2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff6a3 call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff6a6u; SAVEALL; call_ind(c, t_); RETCHK(0x5ff6a6u, 0x5ff6a3u); LOADALL; }
  /* 005ff6a6 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005ff6a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff6aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff6ab call dword ptr [edi + 0x24] */ { const u32 m_ = (u32)(edi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ff6aeu; SAVEALL; call_ind(c, t_); RETCHK(0x5ff6aeu, 0x5ff6abu); LOADALL; }
  /* 005ff6ae add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff6b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff6b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff6b3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff6b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff6b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff6b7:;
  /* 005ff6b7 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005ff6bb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005ff6bd add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff6bf push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff6c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff6c1 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 005ff6c4 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 005ff6c7 mov dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x0u); }
  /* 005ff6cd call 0x5ff5c0 */ esp -= 4; M32(esp) = 0x5ff6d2u; SAVEALL; F_005ff5c0(c); ABI_CHECK(0x5ff5c0u, 0x5ff6cdu); RETCHK(0x5ff6d2u, 0x5ff6cdu); LOADALL;
  /* 005ff6d2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff6d5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff6d6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff6d7 mov eax, esi */ { eax = (u32)(esi); }
  /* 005ff6d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff6da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005ff6e0(CPU *c) {
  NATIVE_HOOK(0x5ff6e0u) REGS; LOADALL;
L_005ff6e0:;
  /* 005ff6e0 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff6e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ff6e4 mov ebx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ebx = (u32)(M32(m_)); }
  /* 005ff6e8 mov ecx, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005ff6eb push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005ff6ec mov ebp, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005ff6ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff6f0 mov esi, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); esi = (u32)(M32(m_)); }
  /* 005ff6f4 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff6f7 mov dword ptr [esp + 0xc], eax */ { const u32 m_ = (u32)(esp + 0xcu); M32(m_) = (u32)(eax); }
  /* 005ff6fb mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 005ff6fe mov dword ptr [esp + 0x44], ecx */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(ecx); }
  /* 005ff702 mov ecx, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005ff705 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff707 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005ff708 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005ff70a mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005ff70e mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005ff712 jae 0x5ff71b */ if (!CF_) goto L_005ff71b;
  /* 005ff714 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff716 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff719 jmp 0x5ff720 */ goto L_005ff720;
L_005ff71b:;
  /* 005ff71b mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005ff71e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_005ff720:;
  /* 005ff720 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005ff722 cmp edx, 9 */ { u32 a_ = edx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff725 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005ff729 jbe 0x5ff764 */ if ((CF_|ZF_)) goto L_005ff764;
L_005ff72b:;
  /* 005ff72b push -2 */ { u32 v_ = 0xfffffffeu; esp -= 4; M32(esp) = v_; }
L_005ff72d:;
  /* 005ff72d mov edx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); edx = (u32)(M32(m_)); }
  /* 005ff731 mov dword ptr [ebx + 0x20], edx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(edx); }
L_005ff734:;
  /* 005ff734 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005ff738 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005ff73b mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
L_005ff73e:;
  /* 005ff73e mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005ff742 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005ff744 sub ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff746 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff747 add dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff74a mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005ff74c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ff74d mov dword ptr [ebx + 0x34], edx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(edx); }
  /* 005ff750 call 0x6011f0 */ esp -= 4; M32(esp) = 0x5ff755u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5ff750u); RETCHK(0x5ff755u, 0x5ff750u); LOADALL;
  /* 005ff755 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff758 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff75a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff75b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff75c add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff75f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ff760:;
  /* 005ff760 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
L_005ff764:;
  /* 005ff764 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005ff768 jmp dword ptr [edx*4 + 0x60015c] */ { const u32 m_ = (u32)(edx * 4u + 0x60015cu); u32 t_ = M32(m_); switch (t_) { case 0x5ff76fu: goto L_005ff76f; case 0x5ff84fu: goto L_005ff84f; case 0x5ff8bau: goto L_005ff8ba; case 0x5ff9d3u: goto L_005ff9d3; case 0x5ffa6du: goto L_005ffa6d; case 0x5ffb47u: goto L_005ffb47; case 0x5ffd94u: goto L_005ffd94; case 0x5ffeaeu: goto L_005ffeae; case 0x6000e6u: goto L_006000e6; case 0x600125u: goto L_00600125; default: SAVEALL; call_ind(c, t_); return; } }
L_005ff76f:;
  /* 005ff76f cmp ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff772 jae 0x5ff7a8 */ if (!CF_) goto L_005ff7a8;
L_005ff774:;
  /* 005ff774 cmp dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff779 je 0x5ffe41 */ if (ZF_) goto L_005ffe41;
  /* 005ff77f movzx edx, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M8(m_)); }
  /* 005ff782 sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff787 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005ff789 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ff78b add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005ff78e add ebp, 8 */ { u32 a_ = ebp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ff791 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005ff799 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff79b cmp ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff79e mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ff7a2 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005ff7a6 jb 0x5ff774 */ if (CF_) goto L_005ff774;
L_005ff7a8:;
  /* 005ff7a8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005ff7aa and ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ff7ad mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005ff7af and edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005ff7b2 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005ff7b4 cmp ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff7b7 mov dword ptr [ebx + 0x18], edx */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(edx); }
  /* 005ff7ba ja 0x5ffe29 */ if (!(CF_|ZF_)) goto L_005ffe29;
  /* 005ff7c0 jmp dword ptr [ecx*4 + 0x600184] */ { const u32 m_ = (u32)(ecx * 4u + 0x600184u); u32 t_ = M32(m_); switch (t_) { case 0x5ff7c7u: goto L_005ff7c7; case 0x5ff7e5u: goto L_005ff7e5; case 0x5ff83au: goto L_005ff83a; case 0x5ffe80u: goto L_005ffe80; default: SAVEALL; call_ind(c, t_); return; } }
L_005ff7c7:;
  /* 005ff7c7 sub ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ff7ca mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005ff7cc and ecx, 7 */ { u32 a_ = ecx, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ff7cf shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ff7d2 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ff7d4 sub ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ff7d6 mov dword ptr [ebx], 1 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x1u); }
  /* 005ff7dc mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ff7e0 jmp 0x5ffe29 */ goto L_005ffe29;
L_005ff7e5:;
  /* 005ff7e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff7e6 lea eax, [esp + 0x28] */ eax = (u32)((u32)(esp + 0x28u));
  /* 005ff7ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff7eb lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 005ff7ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff7f0 lea edx, [esp + 0x38] */ edx = (u32)((u32)(esp + 0x38u));
  /* 005ff7f4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff7f5 lea eax, [esp + 0x40] */ eax = (u32)((u32)(esp + 0x40u));
  /* 005ff7f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff7fa call 0x6011c0 */ esp -= 4; M32(esp) = 0x5ff7ffu; SAVEALL; F_006011c0(c); ABI_CHECK(0x6011c0u, 0x5ff7fau); RETCHK(0x5ff7ffu, 0x5ff7fau); LOADALL;
  /* 005ff7ff mov ecx, dword ptr [esp + 0x38] */ { const u32 m_ = (u32)(esp + 0x38u); ecx = (u32)(M32(m_)); }
  /* 005ff803 mov edx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); edx = (u32)(M32(m_)); }
  /* 005ff807 mov eax, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); eax = (u32)(M32(m_)); }
  /* 005ff80b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff80c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff80d mov ecx, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 005ff811 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ff812 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ff813 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff814 call 0x600390 */ esp -= 4; M32(esp) = 0x5ff819u; SAVEALL; F_00600390(c); ABI_CHECK(0x600390u, 0x5ff814u); RETCHK(0x5ff819u, 0x5ff814u); LOADALL;
  /* 005ff819 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff81c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff81e mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ff821 je 0x5ffe79 */ if (ZF_) goto L_005ffe79;
  /* 005ff827 shr dword ptr [esp + 0x48], 3 */ { const u32 m_ = (u32)(esp + 0x48u); u32 n_ = (3u) & 31u; if (n_) { u32 a_ = M32(m_); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 005ff82c sub ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ff82f mov dword ptr [ebx], 6 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x6u); }
  /* 005ff835 jmp 0x5ffe29 */ goto L_005ffe29;
L_005ff83a:;
  /* 005ff83a shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ff83d mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ff841 sub ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ff844 mov dword ptr [ebx], 3 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x3u); }
  /* 005ff84a jmp 0x5ffe29 */ goto L_005ffe29;
L_005ff84f:;
  /* 005ff84f cmp ebp, 0x20 */ { u32 a_ = ebp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff852 jae 0x5ff888 */ if (!CF_) goto L_005ff888;
L_005ff854:;
  /* 005ff854 cmp dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff859 je 0x5fffeb */ if (ZF_) goto L_005fffeb;
  /* 005ff85f movzx edx, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M8(m_)); }
  /* 005ff862 sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff867 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005ff869 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ff86b add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005ff86e add ebp, 8 */ { u32 a_ = ebp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ff871 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005ff879 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff87b cmp ebp, 0x20 */ { u32 a_ = ebp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff87e mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ff882 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005ff886 jb 0x5ff854 */ if (CF_) goto L_005ff854;
L_005ff888:;
  /* 005ff888 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005ff88a not eax */ { eax = (u32)(~eax & 0xffffffffu); }
  /* 005ff88c and ecx, 0xffff */ { u32 a_ = ecx, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ff892 shr eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ff895 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff897 jne 0x5ffea1 */ if (!ZF_) goto L_005ffea1;
  /* 005ff89d xor ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebp = (u32)(r_); }
  /* 005ff89f cmp ecx, ebp */ { u32 a_ = ecx, b_ = ebp; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff8a1 mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005ff8a4 mov dword ptr [esp + 0x48], ebp */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(ebp); }
  /* 005ff8a8 je 0x5ff9c2 */ if (ZF_) goto L_005ff9c2;
  /* 005ff8ae mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 005ff8b3 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 005ff8b5 jmp 0x5ffe29 */ goto L_005ffe29;
L_005ff8ba:;
  /* 005ff8ba cmp dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff8bf je 0x5fffb3 */ if (ZF_) goto L_005fffb3;
  /* 005ff8c5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff8c7 jne 0x5ff978 */ if (!ZF_) goto L_005ff978;
  /* 005ff8cd mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 005ff8d0 cmp dword ptr [esp + 0x14], edx */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff8d4 jne 0x5ff8fb */ if (!ZF_) goto L_005ff8fb;
  /* 005ff8d6 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 005ff8d9 mov ecx, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005ff8dc cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff8de je 0x5ff8fb */ if (ZF_) goto L_005ff8fb;
  /* 005ff8e0 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005ff8e4 jae 0x5ff8ef */ if (!CF_) goto L_005ff8ef;
  /* 005ff8e6 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff8e8 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ff8eb mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005ff8ed jmp 0x5ff8f3 */ goto L_005ff8f3;
L_005ff8ef:;
  /* 005ff8ef sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005ff8f1 mov ecx, edx */ { ecx = (u32)(edx); }
L_005ff8f3:;
  /* 005ff8f3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff8f5 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005ff8f9 jne 0x5ff978 */ if (!ZF_) goto L_005ff978;
L_005ff8fb:;
  /* 005ff8fb mov ecx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ecx = (u32)(M32(m_)); }
  /* 005ff8ff mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005ff903 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ff904 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff905 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ff906 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 005ff909 call 0x6011f0 */ esp -= 4; M32(esp) = 0x5ff90eu; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5ff909u); RETCHK(0x5ff90eu, 0x5ff909u); LOADALL;
  /* 005ff90e mov ecx, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); ecx = (u32)(M32(m_)); }
  /* 005ff911 mov dword ptr [esp + 0x5c], eax */ { const u32 m_ = (u32)(esp + 0x5cu); M32(m_) = (u32)(eax); }
  /* 005ff915 mov eax, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); eax = (u32)(M32(m_)); }
  /* 005ff918 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff91b cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff91d mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005ff921 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005ff925 jae 0x5ff92e */ if (!CF_) goto L_005ff92e;
  /* 005ff927 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff929 sub ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff92c jmp 0x5ff933 */ goto L_005ff933;
L_005ff92e:;
  /* 005ff92e mov ecx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005ff931 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
L_005ff933:;
  /* 005ff933 mov edx, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); edx = (u32)(M32(m_)); }
  /* 005ff936 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff938 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005ff93c mov dword ptr [esp + 0x34], edx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(edx); }
  /* 005ff940 jne 0x5ff970 */ if (!ZF_) goto L_005ff970;
  /* 005ff942 mov eax, dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); eax = (u32)(M32(m_)); }
  /* 005ff945 mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005ff949 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff94b je 0x5ff96c */ if (ZF_) goto L_005ff96c;
  /* 005ff94d mov dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(eax); }
  /* 005ff951 jae 0x5ff960 */ if (!CF_) goto L_005ff960;
  /* 005ff953 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005ff955 sub edx, 1 */ { u32 a_ = edx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005ff958 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005ff95a mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005ff95e jmp 0x5ff970 */ goto L_005ff970;
L_005ff960:;
  /* 005ff960 mov ecx, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005ff964 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff966 mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005ff96a jmp 0x5ff970 */ goto L_005ff970;
L_005ff96c:;
  /* 005ff96c mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
L_005ff970:;
  /* 005ff970 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ff972 je 0x5ffee3 */ if (ZF_) goto L_005ffee3;
L_005ff978:;
  /* 005ff978 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ff97b mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005ff97f mov esi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); esi = (u32)(M32(m_)); }
  /* 005ff983 mov edi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edi = (u32)(M32(m_)); }
  /* 005ff987 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff989 cmova eax, edx */ { if (!(CF_|ZF_)) { eax = (u32)(edx); } }
  /* 005ff98c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff98e cmova eax, ecx */ { if (!(CF_|ZF_)) { eax = (u32)(ecx); } }
  /* 005ff991 add dword ptr [esp + 0x1c], eax */ { const u32 m_ = (u32)(esp + 0x1cu); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff995 sub dword ptr [esp + 0x10], eax */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff999 add dword ptr [esp + 0x14], eax */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff99d sub dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff9a1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005ff9a3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005ff9a5 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005ff9a8 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005ff9aa mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005ff9ac and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ff9af rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005ff9b1 sub dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff9b4 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005ff9bc jne 0x5ffe29 */ if (!ZF_) goto L_005ffe29;
L_005ff9c2:;
  /* 005ff9c2 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 005ff9c5 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005ff9c7 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005ff9c9 and eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ff9cc mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 005ff9ce jmp 0x5ffe29 */ goto L_005ffe29;
L_005ff9d3:;
  /* 005ff9d3 cmp ebp, 0xe */ { u32 a_ = ebp, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff9d6 jae 0x5ffa10 */ if (!CF_) goto L_005ffa10;
  /* 005ff9d8 jmp 0x5ff9e0 */ goto L_005ff9e0;
L_005ff9e0:;
  /* 005ff9e0 cmp dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ff9e5 je 0x5fffeb */ if (ZF_) goto L_005fffeb;
  /* 005ff9eb movzx edx, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M8(m_)); }
  /* 005ff9ee sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff9f3 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005ff9f5 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ff9f7 add ebp, 8 */ { u32 a_ = ebp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ff9fa add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005ff9fd mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005ffa05 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffa07 cmp ebp, 0xe */ { u32 a_ = ebp, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffa0a mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ffa0e jb 0x5ff9e0 */ if (CF_) goto L_005ff9e0;
L_005ffa10:;
  /* 005ffa10 and eax, 0x3fff */ { u32 a_ = eax, b_ = 0x3fffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffa15 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005ffa17 and ecx, 0x1f */ { u32 a_ = ecx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ffa1a cmp ecx, 0x1d */ { u32 a_ = ecx, b_ = 0x1du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffa1d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ffa20 ja 0x5fff4c */ if (!(CF_|ZF_)) goto L_005fff4c;
  /* 005ffa26 shr eax, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ffa29 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffa2c cmp eax, 0x1d */ { u32 a_ = eax, b_ = 0x1du; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffa2f ja 0x5fff4c */ if (!(CF_|ZF_)) goto L_005fff4c;
  /* 005ffa35 lea eax, [eax + ecx + 0x102] */ eax = (u32)((u32)(eax + ecx + 0x102u));
  /* 005ffa3c mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005ffa3f push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005ffa41 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ffa42 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffa43 call dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ffa46u; SAVEALL; call_ind(c, t_); RETCHK(0x5ffa46u, 0x5ffa43u); LOADALL; }
  /* 005ffa46 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffa49 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ffa4b mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 005ffa4e je 0x5fff17 */ if (ZF_) goto L_005fff17;
  /* 005ffa54 shr dword ptr [esp + 0x48], 0xe */ { const u32 m_ = (u32)(esp + 0x48u); u32 n_ = (14u) & 31u; if (n_) { u32 a_ = M32(m_); u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); M32(m_) = (u32)(r_); } }
  /* 005ffa59 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005ffa5d sub ebp, 0xe */ { u32 a_ = ebp, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffa60 mov dword ptr [ebx + 8], 0 */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005ffa67 mov dword ptr [ebx], 4 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x4u); }
L_005ffa6d:;
  /* 005ffa6d mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005ffa70 shr edx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ffa73 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005ffa76 cmp dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffa79 jae 0x5ffae8 */ if (!CF_) goto L_005ffae8;
  /* 005ffa7b jmp 0x5ffa80 */ goto L_005ffa80;
L_005ffa80:;
  /* 005ffa80 cmp ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffa83 jae 0x5ffab5 */ if (!CF_) goto L_005ffab5;
L_005ffa85:;
  /* 005ffa85 cmp dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffa8a je 0x5fffeb */ if (ZF_) goto L_005fffeb;
  /* 005ffa90 movzx edx, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M8(m_)); }
  /* 005ffa93 sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffa98 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005ffa9a shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ffa9c add ebp, 8 */ { u32 a_ = ebp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffa9f add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005ffaa2 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005ffaaa or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffaac cmp ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffaaf mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ffab3 jb 0x5ffa85 */ if (CF_) goto L_005ffa85;
L_005ffab5:;
  /* 005ffab5 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005ffab8 mov edx, dword ptr [ecx*4 + 0x63cce0] */ { const u32 m_ = (u32)(ecx * 4u + 0x63cce0u); edx = (u32)(M32(m_)); }
  /* 005ffabf mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005ffac2 and eax, 7 */ { u32 a_ = eax, b_ = 0x7u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffac5 mov dword ptr [ecx + edx*4], eax */ { const u32 m_ = (u32)(ecx + edx * 4u); M32(m_) = (u32)(eax); }
  /* 005ffac8 add dword ptr [ebx + 8], 1 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffacc mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005ffacf mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005ffad3 shr edx, 0xa */ { u32 n_ = (10u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ffad6 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ffad9 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005ffadc sub ebp, 3 */ { u32 a_ = ebp, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffadf cmp dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffae2 mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ffae6 jb 0x5ffa80 */ if (CF_) goto L_005ffa80;
L_005ffae8:;
  /* 005ffae8 mov eax, 0x13 */ { eax = (u32)(0x13u); }
  /* 005ffaed cmp dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffaf0 jae 0x5ffb0f */ if (!CF_) goto L_005ffb0f;
L_005ffaf2:;
  /* 005ffaf2 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005ffaf5 mov edx, dword ptr [ecx*4 + 0x63cce0] */ { const u32 m_ = (u32)(ecx * 4u + 0x63cce0u); edx = (u32)(M32(m_)); }
  /* 005ffafc mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005ffaff mov dword ptr [ecx + edx*4], 0 */ { const u32 m_ = (u32)(ecx + edx * 4u); M32(m_) = (u32)(0x0u); }
  /* 005ffb06 add dword ptr [ebx + 8], 1 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffb0a cmp dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffb0d jb 0x5ffaf2 */ if (CF_) goto L_005ffaf2;
L_005ffb0f:;
  /* 005ffb0f mov edx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); edx = (u32)(M32(m_)); }
  /* 005ffb12 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffb13 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffb14 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005ffb17 lea ecx, [ebx + 0x14] */ ecx = (u32)((u32)(ebx + 0x14u));
  /* 005ffb1a lea eax, [ebx + 0x10] */ eax = (u32)((u32)(ebx + 0x10u));
  /* 005ffb1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffb1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ffb1f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffb20 mov dword ptr [eax], 7 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x7u); }
  /* 005ffb26 call 0x600f80 */ esp -= 4; M32(esp) = 0x5ffb2bu; SAVEALL; F_00600f80(c); ABI_CHECK(0x600f80u, 0x5ffb26u); RETCHK(0x5ffb2bu, 0x5ffb26u); LOADALL;
  /* 005ffb2b add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffb2e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ffb30 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005ffb34 jne 0x5fff60 */ if (!ZF_) goto L_005fff60;
  /* 005ffb3a mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 005ffb3d mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005ffb41 mov dword ptr [ebx], 5 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x5u); }
L_005ffb47:;
  /* 005ffb47 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005ffb4a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005ffb4c shr edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ffb4f and edx, 0x1f */ { u32 a_ = edx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005ffb52 and ecx, 0x1f */ { u32 a_ = ecx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ffb55 lea ecx, [edx + ecx + 0x102] */ ecx = (u32)((u32)(edx + ecx + 0x102u));
  /* 005ffb5c cmp dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffb5f jae 0x5ffcf8 */ if (!CF_) goto L_005ffcf8;
  /* 005ffb65 jmp 0x5ffb70 */ goto L_005ffb70;
L_005ffb67:;
  /* 005ffb67 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005ffb6b jmp 0x5ffb70 */ goto L_005ffb70;
L_005ffb70:;
  /* 005ffb70 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005ffb73 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffb75 jae 0x5ffbb2 */ if (!CF_) goto L_005ffbb2;
  /* 005ffb77 jmp 0x5ffb80 */ goto L_005ffb80;
L_005ffb80:;
  /* 005ffb80 cmp dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffb85 je 0x5fffb3 */ if (ZF_) goto L_005fffb3;
  /* 005ffb8b movzx edx, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M8(m_)); }
  /* 005ffb8e sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffb93 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005ffb95 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ffb97 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005ffb9a add ebp, 8 */ { u32 a_ = ebp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffb9d add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005ffba0 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffba2 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffba4 mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005ffbac mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ffbb0 jb 0x5ffb80 */ if (CF_) goto L_005ffb80;
L_005ffbb2:;
  /* 005ffbb2 mov ecx, dword ptr [ecx*4 + 0x680d30] */ { const u32 m_ = (u32)(ecx * 4u + 0x680d30u); ecx = (u32)(M32(m_)); }
  /* 005ffbb9 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 005ffbbc and ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ffbbe lea edx, [edx + ecx*8] */ edx = (u32)((u32)(edx + ecx * 8u));
  /* 005ffbc1 movzx ecx, byte ptr [edx + 1] */ { const u32 m_ = (u32)(edx + 0x1u); ecx = (u32)(M8(m_)); }
  /* 005ffbc5 mov edx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005ffbc8 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffbcb mov dword ptr [esp + 0x18], ecx */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005ffbcf mov dword ptr [esp + 0x38], edx */ { const u32 m_ = (u32)(esp + 0x38u); M32(m_) = (u32)(edx); }
  /* 005ffbd3 jae 0x5ffbef */ if (!CF_) goto L_005ffbef;
  /* 005ffbd5 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ffbd7 sub ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffbd9 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005ffbdc mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ffbe0 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005ffbe3 mov dword ptr [ecx + eax*4], edx */ { const u32 m_ = (u32)(ecx + eax * 4u); M32(m_) = (u32)(edx); }
  /* 005ffbe6 add dword ptr [ebx + 8], 1 */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffbea jmp 0x5ffcda */ goto L_005ffcda;
L_005ffbef:;
  /* 005ffbef cmp edx, 0x12 */ { u32 a_ = edx, b_ = 0x12u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffbf2 jne 0x5ffbfe */ if (!ZF_) goto L_005ffbfe;
  /* 005ffbf4 mov dword ptr [esp + 0x20], 7 */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(0x7u); }
  /* 005ffbfc jmp 0x5ffc05 */ goto L_005ffc05;
L_005ffbfe:;
  /* 005ffbfe lea ecx, [edx - 0xe] */ ecx = (u32)((u32)(edx + 0xfffffff2u));
  /* 005ffc01 mov dword ptr [esp + 0x20], ecx */ { const u32 m_ = (u32)(esp + 0x20u); M32(m_) = (u32)(ecx); }
L_005ffc05:;
  /* 005ffc05 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ffc07 cmp edx, 0x12 */ { u32 a_ = edx, b_ = 0x12u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffc0a mov edx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); edx = (u32)(M32(m_)); }
  /* 005ffc0e sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 005ffc11 lea ecx, [ecx*8 + 3] */ ecx = (u32)((u32)(ecx * 8u + 0x3u));
  /* 005ffc18 mov dword ptr [esp + 0x1c], ecx */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005ffc1c mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005ffc20 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ffc22 cmp ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffc24 mov dword ptr [esp + 0x34], ecx */ { const u32 m_ = (u32)(esp + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005ffc28 jae 0x5ffc61 */ if (!CF_) goto L_005ffc61;
  /* 005ffc2a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005ffc30:;
  /* 005ffc30 cmp dword ptr [esp + 0x10], 0 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffc35 je 0x5fffeb */ if (ZF_) goto L_005fffeb;
  /* 005ffc3b movzx edx, byte ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M8(m_)); }
  /* 005ffc3e sub dword ptr [esp + 0x10], 1 */ { const u32 m_ = (u32)(esp + 0x10u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffc43 mov ecx, ebp */ { ecx = (u32)(ebp); }
  /* 005ffc45 shl edx, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ffc47 add ebp, 8 */ { u32 a_ = ebp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffc4a add edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005ffc4d mov dword ptr [esp + 0x50], 0 */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(0x0u); }
  /* 005ffc55 or eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffc57 cmp ebp, dword ptr [esp + 0x34] */ { const u32 m_ = (u32)(esp + 0x34u); u32 a_ = ebp, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffc5b mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ffc5f jb 0x5ffc30 */ if (CF_) goto L_005ffc30;
L_005ffc61:;
  /* 005ffc61 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005ffc65 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ffc67 mov ecx, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005ffc6b mov edx, dword ptr [ecx*4 + 0x680d30] */ { const u32 m_ = (u32)(ecx * 4u + 0x680d30u); edx = (u32)(M32(m_)); }
  /* 005ffc72 and edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005ffc74 add dword ptr [esp + 0x1c], edx */ { const u32 m_ = (u32)(esp + 0x1cu); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffc78 shr eax, cl */ { u32 n_ = ((ecx & 0xffu)) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ffc7a mov dword ptr [esp + 0x48], eax */ { const u32 m_ = (u32)(esp + 0x48u); M32(m_) = (u32)(eax); }
  /* 005ffc7e mov eax, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); eax = (u32)(M32(m_)); }
  /* 005ffc82 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ffc84 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ffc87 mov edx, eax */ { edx = (u32)(eax); }
  /* 005ffc89 shr edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005ffc8c and edx, 0x1f */ { u32 a_ = edx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005ffc8f and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffc92 lea eax, [edx + eax + 0x102] */ eax = (u32)((u32)(edx + eax + 0x102u));
  /* 005ffc99 mov edx, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 005ffc9d sub ebp, ecx */ { u32 a_ = ebp, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffc9f mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005ffca2 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005ffca4 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffca6 ja 0x600006 */ if (!(CF_|ZF_)) goto L_00600006;
  /* 005ffcac cmp dword ptr [esp + 0x38], 0x10 */ { const u32 m_ = (u32)(esp + 0x38u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffcb1 jne 0x5ffcc5 */ if (!ZF_) goto L_005ffcc5;
  /* 005ffcb3 cmp ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffcb6 jb 0x600006 */ if (CF_) goto L_00600006;
  /* 005ffcbc mov eax, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); eax = (u32)(M32(m_)); }
  /* 005ffcbf mov eax, dword ptr [eax + ecx*4 - 4] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005ffcc3 jmp 0x5ffcc7 */ goto L_005ffcc7;
L_005ffcc5:;
  /* 005ffcc5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_005ffcc7:;
  /* 005ffcc7 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005ffcca mov dword ptr [edx + ecx*4], eax */ { const u32 m_ = (u32)(edx + ecx * 4u); M32(m_) = (u32)(eax); }
  /* 005ffccd add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ffcd0 sub dword ptr [esp + 0x1c], 1 */ { const u32 m_ = (u32)(esp + 0x1cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffcd5 jne 0x5ffcc7 */ if (!ZF_) goto L_005ffcc7;
  /* 005ffcd7 mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
L_005ffcda:;
  /* 005ffcda mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ffcdd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005ffcdf shr ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005ffce2 and ecx, 0x1f */ { u32 a_ = ecx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ffce5 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffce8 lea edx, [ecx + eax + 0x102] */ edx = (u32)((u32)(ecx + eax + 0x102u));
  /* 005ffcef cmp dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffcf2 jb 0x5ffb67 */ if (CF_) goto L_005ffb67;
L_005ffcf8:;
  /* 005ffcf8 mov ecx, dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005ffcfb mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005ffcfe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffcff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffd00 lea edx, [esp + 0x44] */ edx = (u32)((u32)(esp + 0x44u));
  /* 005ffd04 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffd05 lea ecx, [esp + 0x4c] */ ecx = (u32)((u32)(esp + 0x4cu));
  /* 005ffd09 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffd0a lea edx, [esp + 0x30] */ edx = (u32)((u32)(esp + 0x30u));
  /* 005ffd0e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffd0f mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005ffd12 lea ecx, [esp + 0x30] */ ecx = (u32)((u32)(esp + 0x30u));
  /* 005ffd16 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffd17 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005ffd19 shr ecx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005ffd1c and ecx, 0x1f */ { u32 a_ = ecx, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005ffd1f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffd20 add ecx, 1 */ { u32 a_ = ecx, b_ = 0x1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ffd23 and eax, 0x1f */ { u32 a_ = eax, b_ = 0x1fu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005ffd26 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffd27 add eax, 0x101 */ { u32 a_ = eax, b_ = 0x101u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ffd2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ffd2d mov dword ptr [ebx + 0x14], 0 */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 005ffd34 mov dword ptr [esp + 0x40], 9 */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(0x9u); }
  /* 005ffd3c mov dword ptr [esp + 0x44], 6 */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(0x6u); }
  /* 005ffd44 call 0x601030 */ esp -= 4; M32(esp) = 0x5ffd49u; SAVEALL; F_00601030(c); ABI_CHECK(0x601030u, 0x5ffd44u); RETCHK(0x5ffd49u, 0x5ffd44u); LOADALL;
  /* 005ffd49 mov edx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); edx = (u32)(M32(m_)); }
  /* 005ffd4c mov dword ptr [esp + 0x3c], eax */ { const u32 m_ = (u32)(esp + 0x3cu); M32(m_) = (u32)(eax); }
  /* 005ffd50 mov eax, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); eax = (u32)(M32(m_)); }
  /* 005ffd53 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffd54 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ffd55 call dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5ffd58u; SAVEALL; call_ind(c, t_); RETCHK(0x5ffd58u, 0x5ffd55u); LOADALL; }
  /* 005ffd58 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffd5b cmp dword ptr [esp + 0x18], 0 */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffd60 jne 0x600053 */ if (!ZF_) goto L_00600053;
  /* 005ffd66 mov ecx, dword ptr [esp + 0x3c] */ { const u32 m_ = (u32)(esp + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 005ffd6a mov edx, dword ptr [esp + 0x40] */ { const u32 m_ = (u32)(esp + 0x40u); edx = (u32)(M32(m_)); }
  /* 005ffd6e mov eax, dword ptr [esp + 0x20] */ { const u32 m_ = (u32)(esp + 0x20u); eax = (u32)(M32(m_)); }
  /* 005ffd72 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffd73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffd74 mov ecx, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 005ffd78 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffd79 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ffd7a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffd7b call 0x600390 */ esp -= 4; M32(esp) = 0x5ffd80u; SAVEALL; F_00600390(c); ABI_CHECK(0x600390u, 0x5ffd7bu); RETCHK(0x5ffd80u, 0x5ffd7bu); LOADALL;
  /* 005ffd80 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffd83 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005ffd85 je 0x600098 */ if (ZF_) goto L_00600098;
  /* 005ffd8b mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ffd8e mov dword ptr [ebx], 6 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x6u); }
L_005ffd94:;
  /* 005ffd94 mov edx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); edx = (u32)(M32(m_)); }
  /* 005ffd98 mov eax, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005ffd9c mov dword ptr [ebx + 0x20], edx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(edx); }
  /* 005ffd9f mov edx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); edx = (u32)(M32(m_)); }
  /* 005ffda3 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005ffda6 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005ffda9 mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 005ffdad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005ffdae mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005ffdb0 sub ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ffdb2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffdb3 add dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffdb6 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005ffdb8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ffdb9 mov dword ptr [ebx + 0x34], edx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(edx); }
  /* 005ffdbc call 0x6003d0 */ esp -= 4; M32(esp) = 0x5ffdc1u; SAVEALL; F_006003d0(c); ABI_CHECK(0x6003d0u, 0x5ffdbcu); RETCHK(0x5ffdc1u, 0x5ffdbcu); LOADALL;
  /* 005ffdc1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffdc4 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffdc7 jne 0x6000cd */ if (!ZF_) goto L_006000cd;
  /* 005ffdcd mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005ffdd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffdd1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffdd2 mov dword ptr [esp + 0x58], 0 */ { const u32 m_ = (u32)(esp + 0x58u); M32(m_) = (u32)(0x0u); }
  /* 005ffdda call 0x600aa0 */ esp -= 4; M32(esp) = 0x5ffddfu; SAVEALL; F_00600aa0(c); ABI_CHECK(0x600aa0u, 0x5ffddau); RETCHK(0x5ffddfu, 0x5ffddau); LOADALL;
  /* 005ffddf mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 005ffde2 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 005ffde5 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005ffde7 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005ffdea mov ebp, dword ptr [ebx + 0x1c] */ { const u32 m_ = (u32)(ebx + 0x1cu); ebp = (u32)(M32(m_)); }
  /* 005ffded mov dword ptr [esp + 0x50], eax */ { const u32 m_ = (u32)(esp + 0x50u); M32(m_) = (u32)(eax); }
  /* 005ffdf1 mov eax, dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); eax = (u32)(M32(m_)); }
  /* 005ffdf4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffdf7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffdf9 mov dword ptr [esp + 0x1c], edi */ { const u32 m_ = (u32)(esp + 0x1cu); M32(m_) = (u32)(edi); }
  /* 005ffdfd mov dword ptr [esp + 0x10], edx */ { const u32 m_ = (u32)(esp + 0x10u); M32(m_) = (u32)(edx); }
  /* 005ffe01 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 005ffe05 jae 0x5ffe0e */ if (!CF_) goto L_005ffe0e;
  /* 005ffe07 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ffe09 sub eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ffe0c jmp 0x5ffe15 */ goto L_005ffe15;
L_005ffe0e:;
  /* 005ffe0e mov eax, dword ptr [ebx + 0x2c] */ { const u32 m_ = (u32)(ebx + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005ffe11 sub eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_005ffe15:;
  /* 005ffe15 cmp dword ptr [ebx + 0x18], 0 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffe19 mov dword ptr [esp + 0x18], eax */ { const u32 m_ = (u32)(esp + 0x18u); M32(m_) = (u32)(eax); }
  /* 005ffe1d jne 0x6000e0 */ if (!ZF_) goto L_006000e0;
  /* 005ffe23 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_005ffe29:;
  /* 005ffe29 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005ffe2b cmp edx, 9 */ { u32 a_ = edx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005ffe2e mov edi, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); edi = (u32)(M32(m_)); }
  /* 005ffe32 mov esi, dword ptr [esp + 0x4c] */ { const u32 m_ = (u32)(esp + 0x4cu); esi = (u32)(M32(m_)); }
  /* 005ffe36 jbe 0x5ff760 */ if ((CF_|ZF_)) goto L_005ff760;
  /* 005ffe3c jmp 0x5ff72b */ goto L_005ff72b;
L_005ffe41:;
  /* 005ffe41 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005ffe45 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005ffe49 mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005ffe4c mov ecx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); ecx = (u32)(M32(m_)); }
  /* 005ffe50 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005ffe53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005ffe54 mov edx, edi */ { edx = (u32)(edi); }
  /* 005ffe56 sub edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005ffe58 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffe59 add dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffe5c mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005ffe63 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005ffe65 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ffe66 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 005ffe69 call 0x6011f0 */ esp -= 4; M32(esp) = 0x5ffe6eu; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5ffe69u); RETCHK(0x5ffe6eu, 0x5ffe69u); LOADALL;
  /* 005ffe6e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffe71 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ffe72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ffe73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ffe74 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ffe75 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffe78 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ffe79:;
  /* 005ffe79 push -4 */ { u32 v_ = 0xfffffffcu; esp -= 4; M32(esp) = v_; }
  /* 005ffe7b jmp 0x5ff72d */ goto L_005ff72d;
L_005ffe80:;
  /* 005ffe80 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005ffe84 shr eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005ffe87 mov dword ptr [ebx], 9 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x9u); }
  /* 005ffe8d mov dword ptr [esi + 0x18], 0x67f9dc */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67f9dcu); }
  /* 005ffe94 mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 005ffe97 add ebp, -3 */ { u32 a_ = ebp, b_ = 0xfffffffdu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 005ffe9a push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 005ffe9c jmp 0x5ff734 */ goto L_005ff734;
L_005ffea1:;
  /* 005ffea1 mov dword ptr [ebx], 9 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x9u); }
  /* 005ffea7 mov dword ptr [esi + 0x18], 0x67f9f0 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67f9f0u); }
L_005ffeae:;
  /* 005ffeae mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005ffeb2 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005ffeb6 mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005ffeb9 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005ffebd mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005ffec0 mov eax, edi */ { eax = (u32)(edi); }
  /* 005ffec2 sub eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005ffec4 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 005ffec6 add dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ffec9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffeca mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005ffecd mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005ffecf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ffed0 mov dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005ffed3 call 0x6011f0 */ esp -= 4; M32(esp) = 0x5ffed8u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5ffed3u); RETCHK(0x5ffed8u, 0x5ffed3u); LOADALL;
  /* 005ffed8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffedb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ffedc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ffedd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ffede pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ffedf add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ffee2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005ffee3:;
  /* 005ffee3 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005ffee7 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005ffeeb mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005ffeee mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005ffef1 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005ffef4 mov edx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); edx = (u32)(M32(m_)); }
  /* 005ffef8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005ffef9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005ffefb sub ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ffefd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ffefe add dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fff01 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fff03 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fff04 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 005fff07 call 0x6011f0 */ esp -= 4; M32(esp) = 0x5fff0cu; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5fff07u); RETCHK(0x5fff0cu, 0x5fff07u); LOADALL;
  /* 005fff0c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fff0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fff10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fff11 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fff12 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fff13 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fff16 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fff17:;
  /* 005fff17 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 005fff1b mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005fff1f mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 005fff22 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fff26 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005fff29 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fff2b sub eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fff2d push -4 */ { u32 v_ = 0xfffffffcu; esp -= 4; M32(esp) = v_; }
  /* 005fff2f add dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fff32 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fff33 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 005fff36 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fff38 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fff39 mov dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005fff3c call 0x6011f0 */ esp -= 4; M32(esp) = 0x5fff41u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5fff3cu); RETCHK(0x5fff41u, 0x5fff3cu); LOADALL;
  /* 005fff41 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fff44 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fff45 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fff46 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fff47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fff48 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fff4b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fff4c:;
  /* 005fff4c mov dword ptr [ebx], 9 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x9u); }
  /* 005fff52 mov dword ptr [esi + 0x18], 0x67fa10 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67fa10u); }
  /* 005fff59 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 005fff5b jmp 0x5ff72d */ goto L_005ff72d;
L_005fff60:;
  /* 005fff60 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005fff63 mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 005fff66 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fff67 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fff68 call dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5fff6bu; SAVEALL; call_ind(c, t_); RETCHK(0x5fff6bu, 0x5fff68u); LOADALL; }
  /* 005fff6b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fff6e cmp dword ptr [esp + 0x18], -3 */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005fff73 jne 0x5fff7b */ if (!ZF_) goto L_005fff7b;
  /* 005fff75 mov dword ptr [ebx], 9 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x9u); }
L_005fff7b:;
  /* 005fff7b mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005fff7f mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005fff83 mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 005fff86 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 005fff8a mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005fff8d mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 005fff90 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 005fff94 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005fff95 mov edx, edi */ { edx = (u32)(edi); }
  /* 005fff97 sub edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005fff99 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fff9a add dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fff9d mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fff9f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fffa0 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 005fffa3 call 0x6011f0 */ esp -= 4; M32(esp) = 0x5fffa8u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5fffa3u); RETCHK(0x5fffa8u, 0x5fffa3u); LOADALL;
  /* 005fffa8 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fffab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fffac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fffad pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fffae pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fffaf add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fffb2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fffb3:;
  /* 005fffb3 mov edx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); edx = (u32)(M32(m_)); }
  /* 005fffb7 mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005fffbb mov dword ptr [ebx + 0x20], edx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(edx); }
  /* 005fffbe mov edx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); edx = (u32)(M32(m_)); }
  /* 005fffc2 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005fffc5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005fffc6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005fffc8 sub eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005fffca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005fffcb add dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005fffce mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 005fffd5 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005fffd7 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005fffd8 mov dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 005fffdb call 0x6011f0 */ esp -= 4; M32(esp) = 0x5fffe0u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5fffdbu); RETCHK(0x5fffe0u, 0x5fffdbu); LOADALL;
  /* 005fffe0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fffe3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005fffe4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005fffe5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005fffe6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005fffe7 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005fffea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005fffeb:;
  /* 005fffeb mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 005fffef mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 005ffff2 mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 005ffff6 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 005ffff9 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 00600000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600001 jmp 0x5ff73e */ goto L_005ff73e;
L_00600006:;
  /* 00600006 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00600009 mov edx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); edx = (u32)(M32(m_)); }
  /* 0060000c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0060000d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060000e call dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x600011u; SAVEALL; call_ind(c, t_); RETCHK(0x600011u, 0x60000eu); LOADALL; }
  /* 00600011 mov eax, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); eax = (u32)(M32(m_)); }
  /* 00600015 mov ecx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 00600019 mov dword ptr [ebx], 9 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x9u); }
  /* 0060001f mov dword ptr [esi + 0x18], 0x67fa34 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67fa34u); }
  /* 00600026 mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 00600029 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0060002d mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00600030 mov edx, edi */ { edx = (u32)(edi); }
  /* 00600032 sub edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00600034 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 00600036 add dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600039 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060003a mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0060003d mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0060003f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600040 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 00600043 call 0x6011f0 */ esp -= 4; M32(esp) = 0x600048u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x600043u); RETCHK(0x600048u, 0x600043u); LOADALL;
  /* 00600048 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060004b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060004c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060004d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060004e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060004f add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600052 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600053:;
  /* 00600053 cmp dword ptr [esp + 0x18], -3 */ { const u32 m_ = (u32)(esp + 0x18u); u32 a_ = M32(m_), b_ = 0xfffffffdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600058 jne 0x600060 */ if (!ZF_) goto L_00600060;
  /* 0060005a mov dword ptr [ebx], 9 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x9u); }
L_00600060:;
  /* 00600060 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 00600064 mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00600068 mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0060006b mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0060006f mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00600072 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00600075 mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 00600079 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0060007a mov eax, edi */ { eax = (u32)(edi); }
  /* 0060007c sub eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0060007e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060007f add dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600082 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00600084 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600085 mov dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 00600088 call 0x6011f0 */ esp -= 4; M32(esp) = 0x60008du; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x600088u); RETCHK(0x60008du, 0x600088u); LOADALL;
  /* 0060008d add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600090 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600091 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600092 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600093 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600094 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600097 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600098:;
  /* 00600098 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 0060009c mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 006000a0 mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 006000a3 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 006000a7 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 006000aa mov edx, edi */ { edx = (u32)(edi); }
  /* 006000ac sub edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 006000ae push -4 */ { u32 v_ = 0xfffffffcu; esp -= 4; M32(esp) = v_; }
  /* 006000b0 add dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 006000b3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006000b4 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 006000b7 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 006000b9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006000ba mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 006000bd call 0x6011f0 */ esp -= 4; M32(esp) = 0x6000c2u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x6000bdu); RETCHK(0x6000c2u, 0x6000bdu); LOADALL;
  /* 006000c2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006000c5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006000c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006000c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006000c8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006000c9 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006000cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006000cd:;
  /* 006000cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006000ce push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006000cf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006000d0 call 0x6011f0 */ esp -= 4; M32(esp) = 0x6000d5u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x6000d0u); RETCHK(0x6000d5u, 0x6000d0u); LOADALL;
  /* 006000d5 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006000d8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 006000d9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006000da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006000db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 006000dc add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006000df ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006000e0:;
  /* 006000e0 mov dword ptr [ebx], 7 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x7u); }
L_006000e6:;
  /* 006000e6 mov edx, dword ptr [esp + 0x50] */ { const u32 m_ = (u32)(esp + 0x50u); edx = (u32)(M32(m_)); }
  /* 006000ea mov ecx, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 006000ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 006000ef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006000f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 006000f1 mov dword ptr [ebx + 0x34], ecx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(ecx); }
  /* 006000f4 call 0x6011f0 */ esp -= 4; M32(esp) = 0x6000f9u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x6000f4u); RETCHK(0x6000f9u, 0x6000f4u); LOADALL;
  /* 006000f9 mov ecx, dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); ecx = (u32)(M32(m_)); }
  /* 006000fc add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006000ff cmp dword ptr [ebx + 0x30], ecx */ { const u32 m_ = (u32)(ebx + 0x30u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00600102 mov dword ptr [esp + 0x14], ecx */ { const u32 m_ = (u32)(esp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00600106 je 0x60011f */ if (ZF_) goto L_0060011f;
  /* 00600108 mov ecx, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); ecx = (u32)(M32(m_)); }
  /* 0060010c mov edx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); edx = (u32)(M32(m_)); }
  /* 00600110 mov dword ptr [ebx + 0x20], ecx */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00600113 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00600116 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00600119 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060011a jmp 0x5ff73e */ goto L_005ff73e;
L_0060011f:;
  /* 0060011f mov dword ptr [ebx], 8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x8u); }
L_00600125:;
  /* 00600125 mov eax, dword ptr [esp + 0x48] */ { const u32 m_ = (u32)(esp + 0x48u); eax = (u32)(M32(m_)); }
  /* 00600129 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0060012d mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 00600130 mov eax, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00600134 mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00600137 mov edx, edi */ { edx = (u32)(edi); }
  /* 00600139 sub edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0060013b push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0060013d add dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600140 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00600141 mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00600144 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00600146 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600147 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 0060014a call 0x6011f0 */ esp -= 4; M32(esp) = 0x60014fu; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x60014au); RETCHK(0x60014fu, 0x60014au); LOADALL;
  /* 0060014f add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600152 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00600153 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00600154 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00600155 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00600156 add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600159 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00600000(CPU *c) {
  NATIVE_HOOK(0x600000u) REGS; LOADALL;
  goto L_00600000;
L_005ff73e:;
  /* 005ff73e mov edx, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edx = (u32)(M32(m_)); }
  /* 005ff742 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005ff744 sub ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005ff746 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005ff747 add dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 005ff74a mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 005ff74c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005ff74d mov dword ptr [ebx + 0x34], edx */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(edx); }
  /* 005ff750 call 0x6011f0 */ esp -= 4; M32(esp) = 0x5ff755u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x5ff750u); RETCHK(0x5ff755u, 0x5ff750u); LOADALL;
  /* 005ff755 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff758 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005ff759 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005ff75a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005ff75b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005ff75c add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005ff75f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00600000:;
  /* 00600000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00600001 jmp 0x5ff73e */ goto L_005ff73e;
}

void F_0060001f(CPU *c) {
  NATIVE_HOOK(0x60001fu) REGS; LOADALL;
L_0060001f:;
  /* 0060001f mov dword ptr [esi + 0x18], 0x67fa34 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x67fa34u); }
  /* 00600026 mov dword ptr [ebx + 0x20], eax */ { const u32 m_ = (u32)(ebx + 0x20u); M32(m_) = (u32)(eax); }
  /* 00600029 mov eax, dword ptr [esp + 0x1c] */ { const u32 m_ = (u32)(esp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0060002d mov dword ptr [ebx + 0x1c], ebp */ { const u32 m_ = (u32)(ebx + 0x1cu); M32(m_) = (u32)(ebp); }
  /* 00600030 mov edx, edi */ { edx = (u32)(edi); }
  /* 00600032 sub edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00600034 push -3 */ { u32 v_ = 0xfffffffdu; esp -= 4; M32(esp) = v_; }
  /* 00600036 add dword ptr [esi + 8], edx */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); M32(m_) = (u32)(r_); }
  /* 00600039 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0060003a mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0060003d mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0060003f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00600040 mov dword ptr [ebx + 0x34], eax */ { const u32 m_ = (u32)(ebx + 0x34u); M32(m_) = (u32)(eax); }
  /* 00600043 call 0x6011f0 */ esp -= 4; M32(esp) = 0x600048u; SAVEALL; F_006011f0(c); ABI_CHECK(0x6011f0u, 0x600043u); RETCHK(0x600048u, 0x600043u); LOADALL;
  /* 00600048 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0060004b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0060004c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060004d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0060004e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0060004f add esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00600052 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
