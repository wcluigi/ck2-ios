#include "funcs.h"

void F_0062c340(CPU *c) {
  NATIVE_HOOK(0x62c340u) REGS; LOADALL;
L_0062c340:;
  /* 0062c340 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c341 mov esi, 0x7a73a8 */ { esi = (u32)(0x7a73a8u); }
  /* 0062c346 call 0x471ac0 */ esp -= 4; M32(esp) = 0x62c34bu; SAVEALL; F_00471ac0(c); ABI_CHECK(0x471ac0u, 0x62c346u); RETCHK(0x62c34bu, 0x62c346u); LOADALL;
  /* 0062c34b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c34c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c350(CPU *c) {
  NATIVE_HOOK(0x62c350u) REGS; LOADALL;
L_0062c350:;
  /* 0062c350 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c351 mov esi, 0x7a7ca8 */ { esi = (u32)(0x7a7ca8u); }
  /* 0062c356 call 0x483090 */ esp -= 4; M32(esp) = 0x62c35bu; SAVEALL; F_00483090(c); ABI_CHECK(0x483090u, 0x62c356u); RETCHK(0x62c35bu, 0x62c356u); LOADALL;
  /* 0062c35b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c35c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c360(CPU *c) {
  NATIVE_HOOK(0x62c360u) REGS; LOADALL;
L_0062c360:;
  /* 0062c360 cmp dword ptr [0x68a4ec], 0x10 */ { const u32 m_ = (u32)(0x68a4ecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c367 jb 0x62c377 */ if (CF_) goto L_0062c377;
  /* 0062c369 mov eax, dword ptr [0x68a4d8] */ { const u32 m_ = (u32)(0x68a4d8u); eax = (u32)(M32(m_)); }
  /* 0062c36e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c36f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c374u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c36fu); RETCHK(0x62c374u, 0x62c36fu); LOADALL;
  /* 0062c374 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c377:;
  /* 0062c377 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c379 mov dword ptr [0x68a4ec], 0xf */ { const u32 m_ = (u32)(0x68a4ecu); M32(m_) = (u32)(0xfu); }
  /* 0062c383 mov dword ptr [0x68a4e8], eax */ { const u32 m_ = (u32)(0x68a4e8u); M32(m_) = (u32)(eax); }
  /* 0062c388 mov byte ptr [0x68a4d8], al */ { const u32 m_ = (u32)(0x68a4d8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c38d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c390(CPU *c) {
  NATIVE_HOOK(0x62c390u) REGS; LOADALL;
L_0062c390:;
  /* 0062c390 cmp dword ptr [0x68a508], 0x10 */ { const u32 m_ = (u32)(0x68a508u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c397 jb 0x62c3a7 */ if (CF_) goto L_0062c3a7;
  /* 0062c399 mov eax, dword ptr [0x68a4f4] */ { const u32 m_ = (u32)(0x68a4f4u); eax = (u32)(M32(m_)); }
  /* 0062c39e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c39f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c3a4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c39fu); RETCHK(0x62c3a4u, 0x62c39fu); LOADALL;
  /* 0062c3a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c3a7:;
  /* 0062c3a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c3a9 mov dword ptr [0x68a508], 0xf */ { const u32 m_ = (u32)(0x68a508u); M32(m_) = (u32)(0xfu); }
  /* 0062c3b3 mov dword ptr [0x68a504], eax */ { const u32 m_ = (u32)(0x68a504u); M32(m_) = (u32)(eax); }
  /* 0062c3b8 mov byte ptr [0x68a4f4], al */ { const u32 m_ = (u32)(0x68a4f4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c3bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c3c0(CPU *c) {
  NATIVE_HOOK(0x62c3c0u) REGS; LOADALL;
L_0062c3c0:;
  /* 0062c3c0 cmp dword ptr [0x68a524], 0x10 */ { const u32 m_ = (u32)(0x68a524u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c3c7 jb 0x62c3d7 */ if (CF_) goto L_0062c3d7;
  /* 0062c3c9 mov eax, dword ptr [0x68a510] */ { const u32 m_ = (u32)(0x68a510u); eax = (u32)(M32(m_)); }
  /* 0062c3ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c3cf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c3d4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c3cfu); RETCHK(0x62c3d4u, 0x62c3cfu); LOADALL;
  /* 0062c3d4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c3d7:;
  /* 0062c3d7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c3d9 mov dword ptr [0x68a524], 0xf */ { const u32 m_ = (u32)(0x68a524u); M32(m_) = (u32)(0xfu); }
  /* 0062c3e3 mov dword ptr [0x68a520], eax */ { const u32 m_ = (u32)(0x68a520u); M32(m_) = (u32)(eax); }
  /* 0062c3e8 mov byte ptr [0x68a510], al */ { const u32 m_ = (u32)(0x68a510u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c3ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c3f0(CPU *c) {
  NATIVE_HOOK(0x62c3f0u) REGS; LOADALL;
L_0062c3f0:;
  /* 0062c3f0 cmp dword ptr [0x68a540], 0x10 */ { const u32 m_ = (u32)(0x68a540u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c3f7 jb 0x62c407 */ if (CF_) goto L_0062c407;
  /* 0062c3f9 mov eax, dword ptr [0x68a52c] */ { const u32 m_ = (u32)(0x68a52cu); eax = (u32)(M32(m_)); }
  /* 0062c3fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c3ff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c404u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c3ffu); RETCHK(0x62c404u, 0x62c3ffu); LOADALL;
  /* 0062c404 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c407:;
  /* 0062c407 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c409 mov dword ptr [0x68a540], 0xf */ { const u32 m_ = (u32)(0x68a540u); M32(m_) = (u32)(0xfu); }
  /* 0062c413 mov dword ptr [0x68a53c], eax */ { const u32 m_ = (u32)(0x68a53cu); M32(m_) = (u32)(eax); }
  /* 0062c418 mov byte ptr [0x68a52c], al */ { const u32 m_ = (u32)(0x68a52cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c41d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c420(CPU *c) {
  NATIVE_HOOK(0x62c420u) REGS; LOADALL;
L_0062c420:;
  /* 0062c420 cmp dword ptr [0x68a55c], 0x10 */ { const u32 m_ = (u32)(0x68a55cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c427 jb 0x62c437 */ if (CF_) goto L_0062c437;
  /* 0062c429 mov eax, dword ptr [0x68a548] */ { const u32 m_ = (u32)(0x68a548u); eax = (u32)(M32(m_)); }
  /* 0062c42e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c42f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c434u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c42fu); RETCHK(0x62c434u, 0x62c42fu); LOADALL;
  /* 0062c434 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c437:;
  /* 0062c437 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c439 mov dword ptr [0x68a55c], 0xf */ { const u32 m_ = (u32)(0x68a55cu); M32(m_) = (u32)(0xfu); }
  /* 0062c443 mov dword ptr [0x68a558], eax */ { const u32 m_ = (u32)(0x68a558u); M32(m_) = (u32)(eax); }
  /* 0062c448 mov byte ptr [0x68a548], al */ { const u32 m_ = (u32)(0x68a548u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c44d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c450(CPU *c) {
  NATIVE_HOOK(0x62c450u) REGS; LOADALL;
L_0062c450:;
  /* 0062c450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062c451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062c453 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062c454 mov eax, dword ptr [0x7a7da0] */ { const u32 m_ = (u32)(0x7a7da0u); eax = (u32)(M32(m_)); }
  /* 0062c459 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062c45b je 0x62c47d */ if (ZF_) goto L_0062c47d;
  /* 0062c45d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0062c460 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c461 mov edi, dword ptr [0x7a7da4] */ { const u32 m_ = (u32)(0x7a7da4u); edi = (u32)(M32(m_)); }
  /* 0062c467 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062c468 call 0x403f60 */ esp -= 4; M32(esp) = 0x62c46du; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x62c468u); RETCHK(0x62c46du, 0x62c468u); LOADALL;
  /* 0062c46d mov edx, dword ptr [0x7a7da0] */ { const u32 m_ = (u32)(0x7a7da0u); edx = (u32)(M32(m_)); }
  /* 0062c473 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062c474 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c479u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c474u); RETCHK(0x62c479u, 0x62c474u); LOADALL;
  /* 0062c479 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062c47c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0062c47d:;
  /* 0062c47d mov dword ptr [0x7a7da0], 0 */ { const u32 m_ = (u32)(0x7a7da0u); M32(m_) = (u32)(0x0u); }
  /* 0062c487 mov dword ptr [0x7a7da4], 0 */ { const u32 m_ = (u32)(0x7a7da4u); M32(m_) = (u32)(0x0u); }
  /* 0062c491 mov dword ptr [0x7a7da8], 0 */ { const u32 m_ = (u32)(0x7a7da8u); M32(m_) = (u32)(0x0u); }
  /* 0062c49b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062c49d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062c49e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c4a0(CPU *c) {
  NATIVE_HOOK(0x62c4a0u) REGS; LOADALL;
L_0062c4a0:;
  /* 0062c4a0 cmp dword ptr [0x68a578], 0x10 */ { const u32 m_ = (u32)(0x68a578u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c4a7 jb 0x62c4b7 */ if (CF_) goto L_0062c4b7;
  /* 0062c4a9 mov eax, dword ptr [0x68a564] */ { const u32 m_ = (u32)(0x68a564u); eax = (u32)(M32(m_)); }
  /* 0062c4ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c4af call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c4b4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c4afu); RETCHK(0x62c4b4u, 0x62c4afu); LOADALL;
  /* 0062c4b4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c4b7:;
  /* 0062c4b7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c4b9 mov dword ptr [0x68a578], 0xf */ { const u32 m_ = (u32)(0x68a578u); M32(m_) = (u32)(0xfu); }
  /* 0062c4c3 mov dword ptr [0x68a574], eax */ { const u32 m_ = (u32)(0x68a574u); M32(m_) = (u32)(eax); }
  /* 0062c4c8 mov byte ptr [0x68a564], al */ { const u32 m_ = (u32)(0x68a564u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c4cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c4d0(CPU *c) {
  NATIVE_HOOK(0x62c4d0u) REGS; LOADALL;
L_0062c4d0:;
  /* 0062c4d0 push 0x43ee60 */ { u32 v_ = 0x43ee60u; esp -= 4; M32(esp) = v_; }
  /* 0062c4d5 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0062c4d7 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0062c4d9 push 0x7a7e78 */ { u32 v_ = 0x7a7e78u; esp -= 4; M32(esp) = v_; }
  /* 0062c4de call 0x5fe890 */ esp -= 4; M32(esp) = 0x62c4e3u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x62c4deu); RETCHK(0x62c4e3u, 0x62c4deu); LOADALL;
  /* 0062c4e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c4f0(CPU *c) {
  NATIVE_HOOK(0x62c4f0u) REGS; LOADALL;
L_0062c4f0:;
  /* 0062c4f0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062c4f1 mov ebx, 0x7a7f00 */ { ebx = (u32)(0x7a7f00u); }
  /* 0062c4f6 call 0x4d9510 */ esp -= 4; M32(esp) = 0x62c4fbu; SAVEALL; F_004d9510(c); ABI_CHECK(0x4d9510u, 0x62c4f6u); RETCHK(0x62c4fbu, 0x62c4f6u); LOADALL;
  /* 0062c4fb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062c4fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c500(CPU *c) {
  NATIVE_HOOK(0x62c500u) REGS; LOADALL;
L_0062c500:;
  /* 0062c500 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c501 mov esi, 0x7a7f30 */ { esi = (u32)(0x7a7f30u); }
  /* 0062c506 call 0x4e8c10 */ esp -= 4; M32(esp) = 0x62c50bu; SAVEALL; F_004e8c10(c); ABI_CHECK(0x4e8c10u, 0x62c506u); RETCHK(0x62c50bu, 0x62c506u); LOADALL;
  /* 0062c50b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c50c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c510(CPU *c) {
  NATIVE_HOOK(0x62c510u) REGS; LOADALL;
L_0062c510:;
  /* 0062c510 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062c511 mov ebx, 0x9b9468 */ { ebx = (u32)(0x9b9468u); }
  /* 0062c516 call 0x4e8cf0 */ esp -= 4; M32(esp) = 0x62c51bu; SAVEALL; F_004e8cf0(c); ABI_CHECK(0x4e8cf0u, 0x62c516u); RETCHK(0x62c51bu, 0x62c516u); LOADALL;
  /* 0062c51b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062c51c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c520(CPU *c) {
  NATIVE_HOOK(0x62c520u) REGS; LOADALL;
L_0062c520:;
  /* 0062c520 cmp dword ptr [0x9be1a0], 0x10 */ { const u32 m_ = (u32)(0x9be1a0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c527 jb 0x62c537 */ if (CF_) goto L_0062c537;
  /* 0062c529 mov eax, dword ptr [0x9be18c] */ { const u32 m_ = (u32)(0x9be18cu); eax = (u32)(M32(m_)); }
  /* 0062c52e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c52f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c534u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c52fu); RETCHK(0x62c534u, 0x62c52fu); LOADALL;
  /* 0062c534 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c537:;
  /* 0062c537 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c539 mov dword ptr [0x9be1a0], 0xf */ { const u32 m_ = (u32)(0x9be1a0u); M32(m_) = (u32)(0xfu); }
  /* 0062c543 mov dword ptr [0x9be19c], eax */ { const u32 m_ = (u32)(0x9be19cu); M32(m_) = (u32)(eax); }
  /* 0062c548 mov byte ptr [0x9be18c], al */ { const u32 m_ = (u32)(0x9be18cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c54d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c550(CPU *c) {
  NATIVE_HOOK(0x62c550u) REGS; LOADALL;
L_0062c550:;
  /* 0062c550 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c551 mov esi, 0x9ba9e0 */ { esi = (u32)(0x9ba9e0u); }
  /* 0062c556 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x62c55bu; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x62c556u); RETCHK(0x62c55bu, 0x62c556u); LOADALL;
  /* 0062c55b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c55c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c560(CPU *c) {
  NATIVE_HOOK(0x62c560u) REGS; LOADALL;
L_0062c560:;
  /* 0062c560 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c561 mov esi, 0x9ba9cc */ { esi = (u32)(0x9ba9ccu); }
  /* 0062c566 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x62c56bu; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x62c566u); RETCHK(0x62c56bu, 0x62c566u); LOADALL;
  /* 0062c56b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c56c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c570(CPU *c) {
  NATIVE_HOOK(0x62c570u) REGS; LOADALL;
L_0062c570:;
  /* 0062c570 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c571 mov esi, 0x9ba9b8 */ { esi = (u32)(0x9ba9b8u); }
  /* 0062c576 call 0x45c6a0 */ esp -= 4; M32(esp) = 0x62c57bu; SAVEALL; F_0045c6a0(c); ABI_CHECK(0x45c6a0u, 0x62c576u); RETCHK(0x62c57bu, 0x62c576u); LOADALL;
  /* 0062c57b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c57c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c580(CPU *c) {
  NATIVE_HOOK(0x62c580u) REGS; LOADALL;
L_0062c580:;
  /* 0062c580 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c581 mov edi, 0x9b9418 */ { edi = (u32)(0x9b9418u); }
  /* 0062c586 call 0x5645a0 */ esp -= 4; M32(esp) = 0x62c58bu; SAVEALL; F_005645a0(c); ABI_CHECK(0x5645a0u, 0x62c586u); RETCHK(0x62c58bu, 0x62c586u); LOADALL;
  /* 0062c58b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062c58c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c590(CPU *c) {
  NATIVE_HOOK(0x62c590u) REGS; LOADALL;
  goto L_0062c590;
L_004fc370:;
  /* 004fc370 push 0x459c10 */ { u32 v_ = 0x459c10u; esp -= 4; M32(esp) = v_; }
  /* 004fc375 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 004fc377 push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 004fc379 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fc37c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fc37d call 0x5fe890 */ esp -= 4; M32(esp) = 0x4fc382u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x4fc37du); RETCHK(0x4fc382u, 0x4fc37du); LOADALL;
  /* 004fc382 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c590:;
  /* 0062c590 mov eax, 0x9b9298 */ { eax = (u32)(0x9b9298u); }
  /* 0062c595 jmp 0x4fc370 */ goto L_004fc370;
}

void F_0062c5a0(CPU *c) {
  NATIVE_HOOK(0x62c5a0u) REGS; LOADALL;
L_0062c5a0:;
  /* 0062c5a0 push 0x9ba728 */ { u32 v_ = 0x9ba728u; esp -= 4; M32(esp) = v_; }
  /* 0062c5a5 call 0x516e40 */ esp -= 4; M32(esp) = 0x62c5aau; SAVEALL; F_00516e40(c); ABI_CHECK(0x516e40u, 0x62c5a5u); RETCHK(0x62c5aau, 0x62c5a5u); LOADALL;
  /* 0062c5aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c5b0(CPU *c) {
  NATIVE_HOOK(0x62c5b0u) REGS; LOADALL;
L_0062c5b0:;
  /* 0062c5b0 mov eax, dword ptr [0x7a8160] */ { const u32 m_ = (u32)(0x7a8160u); eax = (u32)(M32(m_)); }
  /* 0062c5b5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062c5b7 je 0x62c5c2 */ if (ZF_) goto L_0062c5c2;
  /* 0062c5b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c5ba call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c5bfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c5bau); RETCHK(0x62c5bfu, 0x62c5bau); LOADALL;
  /* 0062c5bf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c5c2:;
  /* 0062c5c2 mov dword ptr [0x7a8160], 0 */ { const u32 m_ = (u32)(0x7a8160u); M32(m_) = (u32)(0x0u); }
  /* 0062c5cc mov dword ptr [0x7a8164], 0 */ { const u32 m_ = (u32)(0x7a8164u); M32(m_) = (u32)(0x0u); }
  /* 0062c5d6 mov dword ptr [0x7a8168], 0 */ { const u32 m_ = (u32)(0x7a8168u); M32(m_) = (u32)(0x0u); }
  /* 0062c5e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c5f0(CPU *c) {
  NATIVE_HOOK(0x62c5f0u) REGS; LOADALL;
L_0062c5f0:;
  /* 0062c5f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c5f1 mov esi, 0x9b9258 */ { esi = (u32)(0x9b9258u); }
  /* 0062c5f6 call 0x527c90 */ esp -= 4; M32(esp) = 0x62c5fbu; SAVEALL; F_00527c90(c); ABI_CHECK(0x527c90u, 0x62c5f6u); RETCHK(0x62c5fbu, 0x62c5f6u); LOADALL;
  /* 0062c5fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c5fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c600(CPU *c) {
  NATIVE_HOOK(0x62c600u) REGS; LOADALL;
  goto L_0062c600;
L_00527be0:;
  /* 00527be0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00527be2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00527be3 call 0x5fe776 */ esp -= 4; M32(esp) = 0x527be8u; SAVEALL; F_005fe776(c); ABI_CHECK(0x5fe776u, 0x527be3u); RETCHK(0x527be8u, 0x527be3u); LOADALL;
  /* 00527be8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005288c0:;
  /* 005288c0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005288c2 je 0x5288cc */ if (ZF_) goto L_005288cc;
  /* 005288c4 add eax, 0x54 */ { u32 a_ = eax, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005288c7 jmp 0x527be0 */ goto L_00527be0;
L_005288cc:;
  /* 005288cc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005288ce jmp 0x527be0 */ goto L_00527be0;
L_0062c600:;
  /* 0062c600 mov eax, 0x9b93b8 */ { eax = (u32)(0x9b93b8u); }
  /* 0062c605 jmp 0x5288c0 */ goto L_005288c0;
}

void F_0062c610(CPU *c) {
  NATIVE_HOOK(0x62c610u) REGS; LOADALL;
L_0062c610:;
  /* 0062c610 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c611 mov esi, 0x7a817c */ { esi = (u32)(0x7a817cu); }
  /* 0062c616 call 0x529410 */ esp -= 4; M32(esp) = 0x62c61bu; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x62c616u); RETCHK(0x62c61bu, 0x62c616u); LOADALL;
  /* 0062c61b mov eax, dword ptr [0x7a8180] */ { const u32 m_ = (u32)(0x7a8180u); eax = (u32)(M32(m_)); }
  /* 0062c620 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c621 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c626u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c621u); RETCHK(0x62c626u, 0x62c621u); LOADALL;
  /* 0062c626 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062c629 mov dword ptr [0x7a8180], 0 */ { const u32 m_ = (u32)(0x7a8180u); M32(m_) = (u32)(0x0u); }
  /* 0062c633 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c634 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c640(CPU *c) {
  NATIVE_HOOK(0x62c640u) REGS; LOADALL;
L_0062c640:;
  /* 0062c640 mov ecx, 0x9be174 */ { ecx = (u32)(0x9be174u); }
  /* 0062c645 jmp 0x529910 */ SAVEALL; F_00529910(c); return;
}

void F_0062c650(CPU *c) {
  NATIVE_HOOK(0x62c650u) REGS; LOADALL;
L_0062c650:;
  /* 0062c650 cmp dword ptr [0x68a594], 0x10 */ { const u32 m_ = (u32)(0x68a594u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c657 jb 0x62c667 */ if (CF_) goto L_0062c667;
  /* 0062c659 mov eax, dword ptr [0x68a580] */ { const u32 m_ = (u32)(0x68a580u); eax = (u32)(M32(m_)); }
  /* 0062c65e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c65f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c664u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c65fu); RETCHK(0x62c664u, 0x62c65fu); LOADALL;
  /* 0062c664 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c667:;
  /* 0062c667 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c669 mov dword ptr [0x68a594], 0xf */ { const u32 m_ = (u32)(0x68a594u); M32(m_) = (u32)(0xfu); }
  /* 0062c673 mov dword ptr [0x68a590], eax */ { const u32 m_ = (u32)(0x68a590u); M32(m_) = (u32)(eax); }
  /* 0062c678 mov byte ptr [0x68a580], al */ { const u32 m_ = (u32)(0x68a580u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c67d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c680(CPU *c) {
  NATIVE_HOOK(0x62c680u) REGS; LOADALL;
L_0062c680:;
  /* 0062c680 mov ecx, 0x9be09c */ { ecx = (u32)(0x9be09cu); }
  /* 0062c685 jmp 0x529e90 */ SAVEALL; F_00529e90(c); return;
}

void F_0062c690(CPU *c) {
  NATIVE_HOOK(0x62c690u) REGS; LOADALL;
L_0062c690:;
  /* 0062c690 mov ecx, 0x9be160 */ { ecx = (u32)(0x9be160u); }
  /* 0062c695 jmp 0x52a030 */ SAVEALL; F_0052a030(c); return;
}

void F_0062c6a0(CPU *c) {
  NATIVE_HOOK(0x62c6a0u) REGS; LOADALL;
L_0062c6a0:;
  /* 0062c6a0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c6a1 mov edi, 0x9be088 */ { edi = (u32)(0x9be088u); }
  /* 0062c6a6 call 0x52a4f0 */ esp -= 4; M32(esp) = 0x62c6abu; SAVEALL; F_0052a4f0(c); ABI_CHECK(0x52a4f0u, 0x62c6a6u); RETCHK(0x62c6abu, 0x62c6a6u); LOADALL;
  /* 0062c6ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062c6ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c6b0(CPU *c) {
  NATIVE_HOOK(0x62c6b0u) REGS; LOADALL;
L_0062c6b0:;
  /* 0062c6b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c6b1 mov esi, 0x9be074 */ { esi = (u32)(0x9be074u); }
  /* 0062c6b6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c6bbu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c6b6u); RETCHK(0x62c6bbu, 0x62c6b6u); LOADALL;
  /* 0062c6bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c6bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c6c0(CPU *c) {
  NATIVE_HOOK(0x62c6c0u) REGS; LOADALL;
L_0062c6c0:;
  /* 0062c6c0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c6c1 mov edi, 0x7a8188 */ { edi = (u32)(0x7a8188u); }
  /* 0062c6c6 call 0x531430 */ esp -= 4; M32(esp) = 0x62c6cbu; SAVEALL; F_00531430(c); ABI_CHECK(0x531430u, 0x62c6c6u); RETCHK(0x62c6cbu, 0x62c6c6u); LOADALL;
  /* 0062c6cb mov eax, dword ptr [0x7a818c] */ { const u32 m_ = (u32)(0x7a818cu); eax = (u32)(M32(m_)); }
  /* 0062c6d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c6d1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c6d6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c6d1u); RETCHK(0x62c6d6u, 0x62c6d1u); LOADALL;
  /* 0062c6d6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062c6d9 mov dword ptr [0x7a818c], 0 */ { const u32 m_ = (u32)(0x7a818cu); M32(m_) = (u32)(0x0u); }
  /* 0062c6e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062c6e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c6f0(CPU *c) {
  NATIVE_HOOK(0x62c6f0u) REGS; LOADALL;
L_0062c6f0:;
  /* 0062c6f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c6f1 mov esi, 0x7a8194 */ { esi = (u32)(0x7a8194u); }
  /* 0062c6f6 call 0x531490 */ esp -= 4; M32(esp) = 0x62c6fbu; SAVEALL; F_00531490(c); ABI_CHECK(0x531490u, 0x62c6f6u); RETCHK(0x62c6fbu, 0x62c6f6u); LOADALL;
  /* 0062c6fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c6fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c700(CPU *c) {
  NATIVE_HOOK(0x62c700u) REGS; LOADALL;
L_0062c700:;
  /* 0062c700 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c710(CPU *c) {
  NATIVE_HOOK(0x62c710u) REGS; LOADALL;
  goto L_0062c710;
L_005396d0:;
  /* 005396d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005396d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005396d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005396d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005396d5 mov esi, eax */ { esi = (u32)(eax); }
  /* 005396d7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005396da mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005396dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005396dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005396de lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005396e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005396e2 call 0x53d3a0 */ esp -= 4; M32(esp) = 0x5396e7u; SAVEALL; F_0053d3a0(c); ABI_CHECK(0x53d3a0u, 0x5396e2u); RETCHK(0x5396e7u, 0x5396e2u); LOADALL;
  /* 005396e7 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005396ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005396eb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5396f0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5396ebu); RETCHK(0x5396f0u, 0x5396ebu); LOADALL;
  /* 005396f0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005396f3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005396f5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005396f8 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 005396fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005396fc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005396fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005396ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c710:;
  /* 0062c710 mov eax, 0x9ba714 */ { eax = (u32)(0x9ba714u); }
  /* 0062c715 jmp 0x5396d0 */ goto L_005396d0;
}

void F_0062c720(CPU *c) {
  NATIVE_HOOK(0x62c720u) REGS; LOADALL;
  goto L_0062c720;
L_004b2800:;
  /* 004b2800 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004b2801 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004b2803 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b2804 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004b2805 mov esi, eax */ { esi = (u32)(eax); }
  /* 004b2807 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004b280a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004b280c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b280d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b280e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 004b2811 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004b2812 call 0x4d2820 */ esp -= 4; M32(esp) = 0x4b2817u; SAVEALL; F_004d2820(c); ABI_CHECK(0x4d2820u, 0x4b2812u); RETCHK(0x4b2817u, 0x4b2812u); LOADALL;
  /* 004b2817 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004b281a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004b281b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4b2820u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4b281bu); RETCHK(0x4b2820u, 0x4b281bu); LOADALL;
  /* 004b2820 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004b2823 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004b2825 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 004b2828 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004b282b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004b282c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004b282e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004b282f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c720:;
  /* 0062c720 mov eax, 0x7a85e4 */ { eax = (u32)(0x7a85e4u); }
  /* 0062c725 jmp 0x4b2800 */ goto L_004b2800;
}

void F_0062c730(CPU *c) {
  NATIVE_HOOK(0x62c730u) REGS; LOADALL;
L_0062c730:;
  /* 0062c730 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c731 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 0062c736 call 0x540f30 */ esp -= 4; M32(esp) = 0x62c73bu; SAVEALL; F_00540f30(c); ABI_CHECK(0x540f30u, 0x62c736u); RETCHK(0x62c73bu, 0x62c736u); LOADALL;
  /* 0062c73b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c73c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c740(CPU *c) {
  NATIVE_HOOK(0x62c740u) REGS; LOADALL;
L_0062c740:;
  /* 0062c740 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c741 mov edi, 0x7a85f8 */ { edi = (u32)(0x7a85f8u); }
  /* 0062c746 call 0x5411c0 */ esp -= 4; M32(esp) = 0x62c74bu; SAVEALL; F_005411c0(c); ABI_CHECK(0x5411c0u, 0x62c746u); RETCHK(0x62c74bu, 0x62c746u); LOADALL;
  /* 0062c74b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062c74c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c750(CPU *c) {
  NATIVE_HOOK(0x62c750u) REGS; LOADALL;
L_0062c750:;
  /* 0062c750 cmp dword ptr [0x68a5cc], 0x10 */ { const u32 m_ = (u32)(0x68a5ccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c757 jb 0x62c767 */ if (CF_) goto L_0062c767;
  /* 0062c759 mov eax, dword ptr [0x68a5b8] */ { const u32 m_ = (u32)(0x68a5b8u); eax = (u32)(M32(m_)); }
  /* 0062c75e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c75f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c764u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c75fu); RETCHK(0x62c764u, 0x62c75fu); LOADALL;
  /* 0062c764 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c767:;
  /* 0062c767 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c769 mov dword ptr [0x68a5cc], 0xf */ { const u32 m_ = (u32)(0x68a5ccu); M32(m_) = (u32)(0xfu); }
  /* 0062c773 mov dword ptr [0x68a5c8], eax */ { const u32 m_ = (u32)(0x68a5c8u); M32(m_) = (u32)(eax); }
  /* 0062c778 mov byte ptr [0x68a5b8], al */ { const u32 m_ = (u32)(0x68a5b8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c77d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c780(CPU *c) {
  NATIVE_HOOK(0x62c780u) REGS; LOADALL;
L_0062c780:;
  /* 0062c780 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c781 mov esi, 0x7a8624 */ { esi = (u32)(0x7a8624u); }
  /* 0062c786 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c78bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c786u); RETCHK(0x62c78bu, 0x62c786u); LOADALL;
  /* 0062c78b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c78c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c790(CPU *c) {
  NATIVE_HOOK(0x62c790u) REGS; LOADALL;
L_0062c790:;
  /* 0062c790 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c791 mov esi, 0x7a8634 */ { esi = (u32)(0x7a8634u); }
  /* 0062c796 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c79bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c796u); RETCHK(0x62c79bu, 0x62c796u); LOADALL;
  /* 0062c79b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c79c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c7a0(CPU *c) {
  NATIVE_HOOK(0x62c7a0u) REGS; LOADALL;
L_0062c7a0:;
  /* 0062c7a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c7a1 mov esi, 0x7a8644 */ { esi = (u32)(0x7a8644u); }
  /* 0062c7a6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c7abu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c7a6u); RETCHK(0x62c7abu, 0x62c7a6u); LOADALL;
  /* 0062c7ab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c7ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c7b0(CPU *c) {
  NATIVE_HOOK(0x62c7b0u) REGS; LOADALL;
L_0062c7b0:;
  /* 0062c7b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c7b1 mov esi, 0x7a8654 */ { esi = (u32)(0x7a8654u); }
  /* 0062c7b6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c7bbu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c7b6u); RETCHK(0x62c7bbu, 0x62c7b6u); LOADALL;
  /* 0062c7bb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c7bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c7c0(CPU *c) {
  NATIVE_HOOK(0x62c7c0u) REGS; LOADALL;
L_0062c7c0:;
  /* 0062c7c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c7c1 mov esi, 0x7a8664 */ { esi = (u32)(0x7a8664u); }
  /* 0062c7c6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c7cbu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c7c6u); RETCHK(0x62c7cbu, 0x62c7c6u); LOADALL;
  /* 0062c7cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c7cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c7d0(CPU *c) {
  NATIVE_HOOK(0x62c7d0u) REGS; LOADALL;
L_0062c7d0:;
  /* 0062c7d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c7d1 mov esi, 0x7a8674 */ { esi = (u32)(0x7a8674u); }
  /* 0062c7d6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c7dbu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c7d6u); RETCHK(0x62c7dbu, 0x62c7d6u); LOADALL;
  /* 0062c7db pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c7dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c7e0(CPU *c) {
  NATIVE_HOOK(0x62c7e0u) REGS; LOADALL;
L_0062c7e0:;
  /* 0062c7e0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c7e1 mov esi, 0x7a8684 */ { esi = (u32)(0x7a8684u); }
  /* 0062c7e6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c7ebu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c7e6u); RETCHK(0x62c7ebu, 0x62c7e6u); LOADALL;
  /* 0062c7eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c7ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c7f0(CPU *c) {
  NATIVE_HOOK(0x62c7f0u) REGS; LOADALL;
L_0062c7f0:;
  /* 0062c7f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c7f1 mov esi, 0x7a8694 */ { esi = (u32)(0x7a8694u); }
  /* 0062c7f6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c7fbu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c7f6u); RETCHK(0x62c7fbu, 0x62c7f6u); LOADALL;
  /* 0062c7fb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c7fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c800(CPU *c) {
  NATIVE_HOOK(0x62c800u) REGS; LOADALL;
L_0062c800:;
  /* 0062c800 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c801 mov esi, 0x7a86a4 */ { esi = (u32)(0x7a86a4u); }
  /* 0062c806 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c80bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c806u); RETCHK(0x62c80bu, 0x62c806u); LOADALL;
  /* 0062c80b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c80c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c810(CPU *c) {
  NATIVE_HOOK(0x62c810u) REGS; LOADALL;
L_0062c810:;
  /* 0062c810 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c811 mov esi, 0x7a86b4 */ { esi = (u32)(0x7a86b4u); }
  /* 0062c816 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c81bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c816u); RETCHK(0x62c81bu, 0x62c816u); LOADALL;
  /* 0062c81b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c81c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c820(CPU *c) {
  NATIVE_HOOK(0x62c820u) REGS; LOADALL;
L_0062c820:;
  /* 0062c820 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c821 mov esi, 0x7a86c4 */ { esi = (u32)(0x7a86c4u); }
  /* 0062c826 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c82bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c826u); RETCHK(0x62c82bu, 0x62c826u); LOADALL;
  /* 0062c82b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c82c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c830(CPU *c) {
  NATIVE_HOOK(0x62c830u) REGS; LOADALL;
L_0062c830:;
  /* 0062c830 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c831 mov esi, 0x7a86d4 */ { esi = (u32)(0x7a86d4u); }
  /* 0062c836 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c83bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c836u); RETCHK(0x62c83bu, 0x62c836u); LOADALL;
  /* 0062c83b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c83c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c840(CPU *c) {
  NATIVE_HOOK(0x62c840u) REGS; LOADALL;
L_0062c840:;
  /* 0062c840 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c841 mov esi, 0x7a86e4 */ { esi = (u32)(0x7a86e4u); }
  /* 0062c846 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c84bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c846u); RETCHK(0x62c84bu, 0x62c846u); LOADALL;
  /* 0062c84b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c84c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c850(CPU *c) {
  NATIVE_HOOK(0x62c850u) REGS; LOADALL;
L_0062c850:;
  /* 0062c850 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c851 mov esi, 0x7a86f4 */ { esi = (u32)(0x7a86f4u); }
  /* 0062c856 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c85bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c856u); RETCHK(0x62c85bu, 0x62c856u); LOADALL;
  /* 0062c85b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c85c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c860(CPU *c) {
  NATIVE_HOOK(0x62c860u) REGS; LOADALL;
L_0062c860:;
  /* 0062c860 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c861 mov esi, 0x7a8704 */ { esi = (u32)(0x7a8704u); }
  /* 0062c866 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c86bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c866u); RETCHK(0x62c86bu, 0x62c866u); LOADALL;
  /* 0062c86b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c86c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c870(CPU *c) {
  NATIVE_HOOK(0x62c870u) REGS; LOADALL;
L_0062c870:;
  /* 0062c870 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c871 mov esi, 0x7a8714 */ { esi = (u32)(0x7a8714u); }
  /* 0062c876 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c87bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c876u); RETCHK(0x62c87bu, 0x62c876u); LOADALL;
  /* 0062c87b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c87c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c880(CPU *c) {
  NATIVE_HOOK(0x62c880u) REGS; LOADALL;
L_0062c880:;
  /* 0062c880 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c881 mov esi, 0x7a8724 */ { esi = (u32)(0x7a8724u); }
  /* 0062c886 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c88bu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c886u); RETCHK(0x62c88bu, 0x62c886u); LOADALL;
  /* 0062c88b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c88c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c890(CPU *c) {
  NATIVE_HOOK(0x62c890u) REGS; LOADALL;
L_0062c890:;
  /* 0062c890 push 0x9ba6e4 */ { u32 v_ = 0x9ba6e4u; esp -= 4; M32(esp) = v_; }
  /* 0062c895 call 0x543750 */ esp -= 4; M32(esp) = 0x62c89au; SAVEALL; F_00543750(c); ABI_CHECK(0x543750u, 0x62c895u); RETCHK(0x62c89au, 0x62c895u); LOADALL;
  /* 0062c89a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c8a0(CPU *c) {
  NATIVE_HOOK(0x62c8a0u) REGS; LOADALL;
L_0062c8a0:;
  /* 0062c8a0 mov ecx, 0x9b920c */ { ecx = (u32)(0x9b920cu); }
  /* 0062c8a5 jmp 0x559a90 */ SAVEALL; F_00559a90(c); return;
}

void F_0062c8b0(CPU *c) {
  NATIVE_HOOK(0x62c8b0u) REGS; LOADALL;
  goto L_0062c8b0;
L_0054c150:;
  /* 0054c150 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054c151 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054c153 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c154 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054c155 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054c157 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054c15a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0054c15c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c15d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c15e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0054c161 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054c162 call 0x54c650 */ esp -= 4; M32(esp) = 0x54c167u; SAVEALL; F_0054c650(c); ABI_CHECK(0x54c650u, 0x54c162u); RETCHK(0x54c167u, 0x54c162u); LOADALL;
  /* 0054c167 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0054c16a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054c16b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54c170u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54c16bu); RETCHK(0x54c170u, 0x54c16bu); LOADALL;
  /* 0054c170 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054c173 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054c175 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054c178 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054c17b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054c17c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054c17e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054c17f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c8b0:;
  /* 0062c8b0 mov eax, 0x7a877c */ { eax = (u32)(0x7a877cu); }
  /* 0062c8b5 jmp 0x54c150 */ goto L_0054c150;
}

void F_0062c8c0(CPU *c) {
  NATIVE_HOOK(0x62c8c0u) REGS; LOADALL;
L_0062c8c0:;
  /* 0062c8c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c8c1 mov esi, 0x7a8788 */ { esi = (u32)(0x7a8788u); }
  /* 0062c8c6 call 0x471e50 */ esp -= 4; M32(esp) = 0x62c8cbu; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x62c8c6u); RETCHK(0x62c8cbu, 0x62c8c6u); LOADALL;
  /* 0062c8cb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c8cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c8d0(CPU *c) {
  NATIVE_HOOK(0x62c8d0u) REGS; LOADALL;
L_0062c8d0:;
  /* 0062c8d0 cmp dword ptr [0x68a5ec], 0x10 */ { const u32 m_ = (u32)(0x68a5ecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c8d7 jb 0x62c8e7 */ if (CF_) goto L_0062c8e7;
  /* 0062c8d9 mov eax, dword ptr [0x68a5d8] */ { const u32 m_ = (u32)(0x68a5d8u); eax = (u32)(M32(m_)); }
  /* 0062c8de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c8df call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c8e4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c8dfu); RETCHK(0x62c8e4u, 0x62c8dfu); LOADALL;
  /* 0062c8e4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c8e7:;
  /* 0062c8e7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c8e9 mov dword ptr [0x68a5ec], 0xf */ { const u32 m_ = (u32)(0x68a5ecu); M32(m_) = (u32)(0xfu); }
  /* 0062c8f3 mov dword ptr [0x68a5e8], eax */ { const u32 m_ = (u32)(0x68a5e8u); M32(m_) = (u32)(eax); }
  /* 0062c8f8 mov byte ptr [0x68a5d8], al */ { const u32 m_ = (u32)(0x68a5d8u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c8fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c900(CPU *c) {
  NATIVE_HOOK(0x62c900u) REGS; LOADALL;
L_0062c900:;
  /* 0062c900 cmp dword ptr [0x68a608], 0x10 */ { const u32 m_ = (u32)(0x68a608u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062c907 jb 0x62c917 */ if (CF_) goto L_0062c917;
  /* 0062c909 mov eax, dword ptr [0x68a5f4] */ { const u32 m_ = (u32)(0x68a5f4u); eax = (u32)(M32(m_)); }
  /* 0062c90e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062c90f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62c914u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62c90fu); RETCHK(0x62c914u, 0x62c90fu); LOADALL;
  /* 0062c914 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062c917:;
  /* 0062c917 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062c919 mov dword ptr [0x68a608], 0xf */ { const u32 m_ = (u32)(0x68a608u); M32(m_) = (u32)(0xfu); }
  /* 0062c923 mov dword ptr [0x68a604], eax */ { const u32 m_ = (u32)(0x68a604u); M32(m_) = (u32)(eax); }
  /* 0062c928 mov byte ptr [0x68a5f4], al */ { const u32 m_ = (u32)(0x68a5f4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062c92d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c930(CPU *c) {
  NATIVE_HOOK(0x62c930u) REGS; LOADALL;
L_0062c930:;
  /* 0062c930 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c931 mov esi, 0x9b9200 */ { esi = (u32)(0x9b9200u); }
  /* 0062c936 call 0x541b80 */ esp -= 4; M32(esp) = 0x62c93bu; SAVEALL; F_00541b80(c); ABI_CHECK(0x541b80u, 0x62c936u); RETCHK(0x62c93bu, 0x62c936u); LOADALL;
  /* 0062c93b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c93c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c940(CPU *c) {
  NATIVE_HOOK(0x62c940u) REGS; LOADALL;
L_0062c940:;
  /* 0062c940 mov ecx, 0x9b9740 */ { ecx = (u32)(0x9b9740u); }
  /* 0062c945 jmp 0x550bf0 */ SAVEALL; F_00550bf0(c); return;
}

void F_0062c950(CPU *c) {
  NATIVE_HOOK(0x62c950u) REGS; LOADALL;
L_0062c950:;
  /* 0062c950 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c960(CPU *c) {
  NATIVE_HOOK(0x62c960u) REGS; LOADALL;
L_0062c960:;
  /* 0062c960 push 0x9bd584 */ { u32 v_ = 0x9bd584u; esp -= 4; M32(esp) = v_; }
  /* 0062c965 call 0x554530 */ esp -= 4; M32(esp) = 0x62c96au; SAVEALL; F_00554530(c); ABI_CHECK(0x554530u, 0x62c965u); RETCHK(0x62c96au, 0x62c965u); LOADALL;
  /* 0062c96a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c970(CPU *c) {
  NATIVE_HOOK(0x62c970u) REGS; LOADALL;
L_0062c970:;
  /* 0062c970 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062c971 mov esi, 0x9b9690 */ { esi = (u32)(0x9b9690u); }
  /* 0062c976 call 0x556140 */ esp -= 4; M32(esp) = 0x62c97bu; SAVEALL; F_00556140(c); ABI_CHECK(0x556140u, 0x62c976u); RETCHK(0x62c97bu, 0x62c976u); LOADALL;
  /* 0062c97b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062c97c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c980(CPU *c) {
  NATIVE_HOOK(0x62c980u) REGS; LOADALL;
  goto L_0062c980;
L_0055dab0:;
  /* 0055dab0 add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055dab3 jmp 0x566520 */ goto L_00566520;
L_00566520:;
  /* 00566520 add ecx, 0x10000 */ { u32 a_ = ecx, b_ = 0x10000u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00566526 jmp 0x567db0 */ SAVEALL; F_00567db0(c); return;
L_0062c980:;
  /* 0062c980 mov ecx, 0x7a87d0 */ { ecx = (u32)(0x7a87d0u); }
  /* 0062c985 jmp 0x55dab0 */ goto L_0055dab0;
}

void F_0062c990(CPU *c) {
  NATIVE_HOOK(0x62c990u) REGS; LOADALL;
L_0062c990:;
  /* 0062c990 mov eax, 0x9b8814 */ { eax = (u32)(0x9b8814u); }
  /* 0062c995 jmp 0x55dad0 */ SAVEALL; F_0055dad0(c); return;
}

void F_0062c9a0(CPU *c) {
  NATIVE_HOOK(0x62c9a0u) REGS; LOADALL;
  goto L_0062c9a0;
L_00563a70:;
  /* 00563a70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00563a71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00563a73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563a74 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00563a75 mov esi, eax */ { esi = (u32)(eax); }
  /* 00563a77 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00563a7a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00563a7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563a7d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563a7e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00563a81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00563a82 call 0x564330 */ esp -= 4; M32(esp) = 0x563a87u; SAVEALL; F_00564330(c); ABI_CHECK(0x564330u, 0x563a82u); RETCHK(0x563a87u, 0x563a82u); LOADALL;
  /* 00563a87 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00563a8a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00563a8b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x563a90u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x563a8bu); RETCHK(0x563a90u, 0x563a8bu); LOADALL;
  /* 00563a90 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00563a93 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00563a95 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00563a98 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00563a9b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00563a9c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00563a9e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00563a9f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c9a0:;
  /* 0062c9a0 mov eax, 0x9b8830 */ { eax = (u32)(0x9b8830u); }
  /* 0062c9a5 jmp 0x563a70 */ goto L_00563a70;
}

void F_0062c9b0(CPU *c) {
  NATIVE_HOOK(0x62c9b0u) REGS; LOADALL;
L_0062c9b0:;
  /* 0062c9b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062c9b1 mov edi, 0x9b883c */ { edi = (u32)(0x9b883cu); }
  /* 0062c9b6 call 0x5645a0 */ esp -= 4; M32(esp) = 0x62c9bbu; SAVEALL; F_005645a0(c); ABI_CHECK(0x5645a0u, 0x62c9b6u); RETCHK(0x62c9bbu, 0x62c9b6u); LOADALL;
  /* 0062c9bb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062c9bc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c9c0(CPU *c) {
  NATIVE_HOOK(0x62c9c0u) REGS; LOADALL;
L_0062c9c0:;
  /* 0062c9c0 mov ecx, 0x9b8868 */ { ecx = (u32)(0x9b8868u); }
  /* 0062c9c5 jmp 0x5663d0 */ SAVEALL; F_005663d0(c); return;
}

void F_0062c9d0(CPU *c) {
  NATIVE_HOOK(0x62c9d0u) REGS; LOADALL;
L_0062c9d0:;
  /* 0062c9d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062c9d1(CPU *c) {
  NATIVE_HOOK(0x62c9d1u) REGS; LOADALL;
L_0062c9d1:;
  /* 0062c9d1 mov ecx, 0x6945e8 */ { ecx = (u32)(0x6945e8u); }
  /* 0062c9d6 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0062c9db(CPU *c) {
  NATIVE_HOOK(0x62c9dbu) REGS; LOADALL;
  goto L_0062c9db;
L_00601e68:;
  /* 00601e68 push 0x680e6c */ { u32 v_ = 0x680e6cu; esp -= 4; M32(esp) = v_; }
  /* 00601e6d call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601e73u; SAVEALL; call_ind(c, t_); RETCHK(0x601e73u, 0x601e6du); LOADALL; }
  /* 00601e73 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601e75 jge 0x601e90 */ if (!LT_) goto L_00601e90;
  /* 00601e77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e78 mov esi, 0x694608 */ { esi = (u32)(0x694608u); }
L_00601e7d:;
  /* 00601e7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e7e call 0x602462 */ esp -= 4; M32(esp) = 0x601e83u; SAVEALL; F_00602462(c); ABI_CHECK(0x602462u, 0x601e7eu); RETCHK(0x601e83u, 0x601e7eu); LOADALL;
  /* 00601e83 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601e86 cmp esi, 0x694668 */ { u32 a_ = esi, b_ = 0x694668u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601e8c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601e8d jl 0x601e7d */ if (LT_) goto L_00601e7d;
  /* 00601e8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00601e90:;
  /* 00601e90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c9db:;
  /* 0062c9db mov ecx, 0x694668 */ { ecx = (u32)(0x694668u); }
  /* 0062c9e0 jmp 0x601e68 */ goto L_00601e68;
}

void F_0062c9e5(CPU *c) {
  NATIVE_HOOK(0x62c9e5u) REGS; LOADALL;
  goto L_0062c9e5;
L_00601e68:;
  /* 00601e68 push 0x680e6c */ { u32 v_ = 0x680e6cu; esp -= 4; M32(esp) = v_; }
  /* 00601e6d call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601e73u; SAVEALL; call_ind(c, t_); RETCHK(0x601e73u, 0x601e6du); LOADALL; }
  /* 00601e73 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601e75 jge 0x601e90 */ if (!LT_) goto L_00601e90;
  /* 00601e77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e78 mov esi, 0x694608 */ { esi = (u32)(0x694608u); }
L_00601e7d:;
  /* 00601e7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e7e call 0x602462 */ esp -= 4; M32(esp) = 0x601e83u; SAVEALL; F_00602462(c); ABI_CHECK(0x602462u, 0x601e7eu); RETCHK(0x601e83u, 0x601e7eu); LOADALL;
  /* 00601e83 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601e86 cmp esi, 0x694668 */ { u32 a_ = esi, b_ = 0x694668u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601e8c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601e8d jl 0x601e7d */ if (LT_) goto L_00601e7d;
  /* 00601e8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00601e90:;
  /* 00601e90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062c9e5:;
  /* 0062c9e5 mov ecx, 0x6946cc */ { ecx = (u32)(0x6946ccu); }
  /* 0062c9ea jmp 0x601e68 */ goto L_00601e68;
}

void F_0062c9ef(CPU *c) {
  NATIVE_HOOK(0x62c9efu) REGS; LOADALL;
L_0062c9ef:;
  /* 0062c9ef mov eax, dword ptr [0x6946d0] */ { const u32 m_ = (u32)(0x6946d0u); eax = (u32)(M32(m_)); }
  /* 0062c9f4 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0062c9f7 mov dword ptr [eax + 0x6946d0], 0x63d0d8 */ { const u32 m_ = (u32)(eax + 0x6946d0u); M32(m_) = (u32)(0x63d0d8u); }
  /* 0062ca01 mov ecx, 0x6946d4 */ { ecx = (u32)(0x6946d4u); }
  /* 0062ca06 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
}

void F_0062ca0b(CPU *c) {
  NATIVE_HOOK(0x62ca0bu) REGS; LOADALL;
L_0062ca0b:;
  /* 0062ca0b mov ecx, 0x694670 */ { ecx = (u32)(0x694670u); }
  /* 0062ca10 jmp 0x4fec40 */ SAVEALL; F_004fec40(c); return;
}

void F_0062ca15(CPU *c) {
  NATIVE_HOOK(0x62ca15u) REGS; LOADALL;
  goto L_0062ca15;
L_00601e68:;
  /* 00601e68 push 0x680e6c */ { u32 v_ = 0x680e6cu; esp -= 4; M32(esp) = v_; }
  /* 00601e6d call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x601e73u; SAVEALL; call_ind(c, t_); RETCHK(0x601e73u, 0x601e6du); LOADALL; }
  /* 00601e73 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00601e75 jge 0x601e90 */ if (!LT_) goto L_00601e90;
  /* 00601e77 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e78 mov esi, 0x694608 */ { esi = (u32)(0x694608u); }
L_00601e7d:;
  /* 00601e7d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00601e7e call 0x602462 */ esp -= 4; M32(esp) = 0x601e83u; SAVEALL; F_00602462(c); ABI_CHECK(0x602462u, 0x601e7eu); RETCHK(0x601e83u, 0x601e7eu); LOADALL;
  /* 00601e83 add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00601e86 cmp esi, 0x694668 */ { u32 a_ = esi, b_ = 0x694668u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00601e8c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00601e8d jl 0x601e7d */ if (LT_) goto L_00601e7d;
  /* 00601e8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00601e90:;
  /* 00601e90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062ca15:;
  /* 0062ca15 mov ecx, 0x694750 */ { ecx = (u32)(0x694750u); }
  /* 0062ca1a jmp 0x601e68 */ goto L_00601e68;
}

void F_0062ca1f(CPU *c) {
  NATIVE_HOOK(0x62ca1fu) REGS; LOADALL;
  goto L_0062ca1f;
L_00602437:;
  /* 00602437 jmp 0x60244d */ goto L_0060244d;
L_00602439:;
  /* 00602439 mov eax, dword ptr [0x681018] */ { const u32 m_ = (u32)(0x681018u); eax = (u32)(M32(m_)); }
  /* 0060243e mov eax, dword ptr [eax*4 + 0x694728] */ { const u32 m_ = (u32)(eax * 4u + 0x694728u); eax = (u32)(M32(m_)); }
  /* 00602445 inc dword ptr [0x681018] */ { const u32 m_ = (u32)(0x681018u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0060244b call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x60244du; SAVEALL; call_ind(c, t_); RETCHK(0x60244du, 0x60244bu); LOADALL; }
L_0060244d:;
  /* 0060244d cmp dword ptr [0x681018], 0xa */ { const u32 m_ = (u32)(0x681018u); u32 a_ = M32(m_), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00602454 jb 0x602439 */ if (CF_) goto L_00602439;
  /* 00602456 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062ca1f:;
  /* 0062ca1f mov ecx, 0x694751 */ { ecx = (u32)(0x694751u); }
  /* 0062ca24 jmp 0x602437 */ goto L_00602437;
}

void F_0062ca29(CPU *c) {
  NATIVE_HOOK(0x62ca29u) REGS; LOADALL;
  goto L_0062ca29;
L_00602483:;
  /* 00602483 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00602484 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00602486 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00602488 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0060248a je 0x602496 */ if (ZF_) goto L_00602496;
  /* 0060248c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0060248d call 0x5fe99e */ esp -= 4; M32(esp) = 0x602492u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x60248du); RETCHK(0x602492u, 0x60248du); LOADALL;
  /* 00602492 and dword ptr [esi], 0 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00602495 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_00602496:;
  /* 00602496 and dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060249a and dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0060249e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0060249f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006024ba:;
  /* 006024ba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006024bb mov esi, ecx */ { esi = (u32)(ecx); }
  /* 006024bd lea eax, [esi + 0x18] */ eax = (u32)((u32)(esi + 0x18u));
  /* 006024c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006024c1 call dword ptr [0x62e1a8] */ { const u32 m_ = (u32)(0x62e1a8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x6024c7u; SAVEALL; call_ind(c, t_); RETCHK(0x6024c7u, 0x6024c1u); LOADALL; }
  /* 006024c7 lea ecx, [esi + 0x30] */ ecx = (u32)((u32)(esi + 0x30u));
  /* 006024ca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006024cb jmp 0x602483 */ goto L_00602483;
L_0062ca29:;
  /* 0062ca29 mov ecx, 0x694754 */ { ecx = (u32)(0x694754u); }
  /* 0062ca2e jmp 0x6024ba */ goto L_006024ba;
}

void F_0062ca40(CPU *c) {
  NATIVE_HOOK(0x62ca40u) REGS; LOADALL;
L_0062ca40:;
  /* 0062ca40 push 0x681080 */ { u32 v_ = 0x681080u; esp -= 4; M32(esp) = v_; }
  /* 0062ca45 call dword ptr [0x62e46c] */ { const u32 m_ = (u32)(0x62e46cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62ca4bu; SAVEALL; call_ind(c, t_); RETCHK(0x62ca4bu, 0x62ca45u); LOADALL; }
  /* 0062ca4b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062ca4d jge 0x62ca55 */ if (!LT_) goto L_0062ca55;
  /* 0062ca4f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062ca50 call 0x602590 */ esp -= 4; M32(esp) = 0x62ca55u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x62ca50u); RETCHK(0x62ca55u, 0x62ca50u); LOADALL;
L_0062ca55:;
  /* 0062ca55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062cac0(CPU *c) {
  NATIVE_HOOK(0x62cac0u) REGS; LOADALL;
L_0062cac0:;
  /* 0062cac0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062cac1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062cac3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062cac6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062cac7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062cac8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062cac9 lea ebx, [edx + 8] */ ebx = (u32)((u32)(edx + 0x8u));
  /* 0062cacc mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0062cacf shr eax, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0062cad2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062cad4 jne 0x62cadb */ if (!ZF_) goto L_0062cadb;
  /* 0062cad6 mov eax, 0x6e */ { eax = (u32)(0x6eu); }
L_0062cadb:;
  /* 0062cadb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0062cade mov dword ptr [ebp - 8], 0x64 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x64u); }
  /* 0062cae5 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0062cae8 fidiv dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0062caeb mov esi, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); esi = (u32)(M32(m_)); }
  /* 0062caf1 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0062caf4 lea edi, [ebx + 0x5f8] */ edi = (u32)((u32)(ebx + 0x5f8u));
  /* 0062cafa mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0062caff rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0062cb01 fadd dword ptr [ebx + 0x62c] */ { const u32 m_ = (u32)(ebx + 0x62cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062cb07 fstp dword ptr [ebx + 0x62c] */ { const u32 m_ = (u32)(ebx + 0x62cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062cb0d mov edi, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); edi = (u32)(M32(m_)); }
  /* 0062cb13 lea esi, [ebx + 0x5f8] */ esi = (u32)((u32)(ebx + 0x5f8u));
  /* 0062cb19 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0062cb1c mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 0062cb21 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0062cb23 mov eax, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); eax = (u32)(M32(m_)); }
  /* 0062cb29 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0062cb2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062cb2d call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x62cb32u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x62cb2du); RETCHK(0x62cb32u, 0x62cb2du); LOADALL;
  /* 0062cb32 mov ecx, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); ecx = (u32)(M32(m_)); }
  /* 0062cb38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062cb39 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x62cb3eu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x62cb39u); RETCHK(0x62cb3eu, 0x62cb39u); LOADALL;
  /* 0062cb3e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062cb41 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062cb42 mov ebx, dword ptr [ebx + 0x560] */ { const u32 m_ = (u32)(ebx + 0x560u); ebx = (u32)(M32(m_)); }
  /* 0062cb48 push 0x3c23d70a */ { u32 v_ = 0x3c23d70au; esp -= 4; M32(esp) = v_; }
  /* 0062cb4d call 0x4fa2c0 */ esp -= 4; M32(esp) = 0x62cb52u; SAVEALL; F_004fa2c0(c); ABI_CHECK(0x4fa2c0u, 0x62cb4du); RETCHK(0x62cb52u, 0x62cb4du); LOADALL;
  /* 0062cb52 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062cb53 mov ecx, dword ptr [0x63f6a8] */ { const u32 m_ = (u32)(0x63f6a8u); ecx = (u32)(M32(m_)); }
  /* 0062cb59 mov edx, dword ptr [0x63f6ac] */ { const u32 m_ = (u32)(0x63f6acu); edx = (u32)(M32(m_)); }
  /* 0062cb5f lea eax, [ebx + 0x498] */ eax = (u32)((u32)(ebx + 0x498u));
  /* 0062cb65 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0062cb67 mov ecx, dword ptr [0x63f6b0] */ { const u32 m_ = (u32)(0x63f6b0u); ecx = (u32)(M32(m_)); }
  /* 0062cb6d mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0062cb70 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0062cb73 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062cb74 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062cb75 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062cb76 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062cb78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062cb79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062cc90(CPU *c) {
  NATIVE_HOOK(0x62cc90u) REGS; LOADALL;
  goto L_0062cc90;
L_004fb1c0:;
  /* 004fb1c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fb1c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fb1c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004fb1c4 call 0x52a850 */ esp -= 4; M32(esp) = 0x4fb1c9u; SAVEALL; F_0052a850(c); ABI_CHECK(0x52a850u, 0x4fb1c4u); RETCHK(0x4fb1c9u, 0x4fb1c4u); LOADALL;
  /* 004fb1c9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fb1cb mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb1cd call 0x52a8b0 */ esp -= 4; M32(esp) = 0x4fb1d2u; SAVEALL; F_0052a8b0(c); ABI_CHECK(0x52a8b0u, 0x4fb1cdu); RETCHK(0x4fb1d2u, 0x4fb1cdu); LOADALL;
  /* 004fb1d2 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fb1d5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004fb1d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb1da push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004fb1dc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fb1dd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fb1de lea esi, [ecx + 0x3c] */ esi = (u32)((u32)(ecx + 0x3cu));
  /* 004fb1e1 call 0x5288e0 */ esp -= 4; M32(esp) = 0x4fb1e6u; SAVEALL; F_005288e0(c); ABI_CHECK(0x5288e0u, 0x4fb1e1u); RETCHK(0x4fb1e6u, 0x4fb1e1u); LOADALL;
  /* 004fb1e6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fb1e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fb1eb mov edx, eax */ { edx = (u32)(eax); }
  /* 004fb1ed call 0x528970 */ esp -= 4; M32(esp) = 0x4fb1f2u; SAVEALL; F_00528970(c); ABI_CHECK(0x528970u, 0x4fb1edu); RETCHK(0x4fb1f2u, 0x4fb1edu); LOADALL;
  /* 004fb1f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004fb1f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fb1f4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0062cc90:;
  /* 0062cc90 cmp dword ptr [esi], 0x656648 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x656648u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cc96 jne 0x4fb1c0 */ if (!ZF_) goto L_004fb1c0;
  /* 0062cc9c cmp dword ptr [esi + 0xd20], 0 */ { const u32 m_ = (u32)(esi + 0xd20u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cca3 je 0x4fb1c0 */ if (ZF_) goto L_004fb1c0;
  /* 0062cca9 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062ccaa mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062ccac sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062ccaf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062ccb0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062ccb1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062ccb2 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062ccb5 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0062ccb8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0062ccba:;
  /* 0062ccba mov al, byte ptr [edi + ecx] */ { const u32 m_ = (u32)(edi + ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0062ccbd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062ccbf je 0x62ccca */ if (ZF_) goto L_0062ccca;
  /* 0062ccc1 mov byte ptr [edx + ecx], al */ { const u32 m_ = (u32)(edx + ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ccc4 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062ccc5 cmp ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062ccc8 jb 0x62ccba */ if (CF_) goto L_0062ccba;
L_0062ccca:;
  /* 0062ccca mov byte ptr [edx + ecx], 0xa */ { const u32 m_ = (u32)(edx + ecx); M8(m_) = (u8)(0xau); }
  /* 0062ccce inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cccf lea edi, [esi + 0xd10] */ edi = (u32)((u32)(esi + 0xd10u));
  /* 0062ccd5 cmp dword ptr [esi + 0xd24], 0x10 */ { const u32 m_ = (u32)(esi + 0xd24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062ccdc jb 0x62cce0 */ if (CF_) goto L_0062cce0;
  /* 0062ccde mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
L_0062cce0:;
  /* 0062cce0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0062cce2:;
  /* 0062cce2 mov al, byte ptr [edi + ebx] */ { const u32 m_ = (u32)(edi + ebx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0062cce5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062cce7 je 0x62ccf3 */ if (ZF_) goto L_0062ccf3;
  /* 0062cce9 mov byte ptr [edx + ecx], al */ { const u32 m_ = (u32)(edx + ecx); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0062ccec inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cced inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062ccee cmp ebx, 0xc */ { u32 a_ = ebx, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062ccf1 jb 0x62cce2 */ if (CF_) goto L_0062cce2;
L_0062ccf3:;
  /* 0062ccf3 mov byte ptr [edx + ecx], 0 */ { const u32 m_ = (u32)(edx + ecx); M8(m_) = (u8)(0x0u); }
  /* 0062ccf7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062ccf8 push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062ccfb call 0x4fb1c0 */ esp -= 4; M32(esp) = 0x62cd00u; SAVEALL; F_004fb1c0(c); ABI_CHECK(0x4fb1c0u, 0x62ccfbu); RETCHK(0x62cd00u, 0x62ccfbu); LOADALL;
  /* 0062cd00 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062cd01 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062cd02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062cd03 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0062cd05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062cd06 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0062cd47(CPU *c) {
  NATIVE_HOOK(0x62cd47u) REGS; LOADALL;
L_0062cd47:;
  /* 0062cd47 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062cd48 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0062cd4b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0062cd4d:;
  /* 0062cd4d mov ecx, dword ptr [esi + edi*4 + 0x24] */ { const u32 m_ = (u32)(esi + edi * 4u + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0062cd51 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062cd53 je 0x62cd5c */ if (ZF_) goto L_0062cd5c;
  /* 0062cd55 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062cd57 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0062cd59 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62cd5cu; SAVEALL; call_ind(c, t_); RETCHK(0x62cd5cu, 0x62cd59u); LOADALL; }
L_0062cd5c:;
  /* 0062cd5c inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cd5d cmp edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cd60 jb 0x62cd4d */ if (CF_) goto L_0062cd4d;
  /* 0062cd62 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062cd63 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062ce90(CPU *c) {
  NATIVE_HOOK(0x62ce90u) REGS; LOADALL;
L_0062ce90:;
  /* 0062ce90 mov dword ptr [ebx + 0x1d0], 0x12 */ { const u32 m_ = (u32)(ebx + 0x1d0u); M32(m_) = (u32)(0x12u); }
  /* 0062ce9a mov dword ptr [ebx + 0x1d8], 3 */ { const u32 m_ = (u32)(ebx + 0x1d8u); M32(m_) = (u32)(0x3u); }
  /* 0062cea4 mov dword ptr [ebx + 0x1f0], 0x40000000 */ { const u32 m_ = (u32)(ebx + 0x1f0u); M32(m_) = (u32)(0x40000000u); }
  /* 0062ceae test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062ceb0 jne 0x62ceb5 */ if (!ZF_) goto L_0062ceb5;
  /* 0062ceb2 mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0062ceb5:;
  /* 0062ceb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062cedf(CPU *c) {
  NATIVE_HOOK(0x62cedfu) REGS; LOADALL;
L_0062cedf:;
  /* 0062cedf push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062cee3 call 0x53c4d0 */ esp -= 4; M32(esp) = 0x62cee8u; SAVEALL; F_0053c4d0(c); ABI_CHECK(0x53c4d0u, 0x62cee3u); RETCHK(0x62cee8u, 0x62cee3u); LOADALL;
  /* 0062cee8 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062cee9 lea ebp, [esi + 0x24] */ ebp = (u32)((u32)(esi + 0x24u));
  /* 0062ceec xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0062ceee:;
  /* 0062ceee xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0062cef0:;
  /* 0062cef0 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0062cef2 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0062cef4 call 0x62cf8a */ esp -= 4; M32(esp) = 0x62cef9u; SAVEALL; F_0062cf8a(c); ABI_CHECK(0x62cf8au, 0x62cef4u); RETCHK(0x62cef9u, 0x62cef4u); LOADALL;
  /* 0062cef9 mov dword ptr [ebp], eax */ { const u32 m_ = (u32)(ebp); M32(m_) = (u32)(eax); }
  /* 0062cefc add ebp, 4 */ { u32 a_ = ebp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebp = (u32)(r_); }
  /* 0062ceff inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cf00 cmp edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cf03 jb 0x62cef0 */ if (CF_) goto L_0062cef0;
  /* 0062cf05 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cf06 cmp ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cf09 jb 0x62ceee */ if (CF_) goto L_0062ceee;
  /* 0062cf0b popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062cf0c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0062cf0f(CPU *c) {
  NATIVE_HOOK(0x62cf0fu) REGS; LOADALL;
L_0062cf0f:;
  /* 0062cf0f pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062cf10 nop */ ;
  /* 0062cf11 nop */ ;
  /* 0062cf12 nop */ ;
  /* 0062cf13 cmp dword ptr [esi + 8], 4 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cf17 jne 0x62cf88 */ if (!ZF_) goto L_0062cf88;
  /* 0062cf19 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062cf1c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0062cf1e:;
  /* 0062cf1e mov edi, dword ptr [esi + ebx*4 + 0x24] */ { const u32 m_ = (u32)(esi + ebx * 4u + 0x24u); edi = (u32)(M32(m_)); }
  /* 0062cf22 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062cf24 je 0x62cf7f */ if (ZF_) goto L_0062cf7f;
  /* 0062cf26 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0062cf28 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0062cf2a mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 0062cf2f div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x62cf2fu); eax = q_; edx = r_; }
  /* 0062cf31 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0062cf33 mov ecx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); ecx = (u32)(M32(m_)); }
  /* 0062cf36 cmp byte ptr [ecx + 0x3e], 0 */ { const u32 m_ = (u32)(ecx + 0x3eu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062cf3a jne 0x62cf4d */ if (!ZF_) goto L_0062cf4d;
  /* 0062cf3c cmp byte ptr [edi + 0x3e], 0 */ { const u32 m_ = (u32)(edi + 0x3eu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062cf40 je 0x62cf7f */ if (ZF_) goto L_0062cf7f;
  /* 0062cf42 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062cf44 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0062cf46 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0062cf48 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62cf4bu; SAVEALL; call_ind(c, t_); RETCHK(0x62cf4bu, 0x62cf48u); LOADALL; }
  /* 0062cf4b jmp 0x62cf7f */ goto L_0062cf7f;
L_0062cf4d:;
  /* 0062cf4d fld dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 0062cf50 fadd dword ptr [0x62ceb8] */ { const u32 m_ = (u32)(0x62ceb8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062cf56 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062cf59 fld dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 0062cf5c fadd dword ptr [0x62cebc] */ { const u32 m_ = (u32)(0x62cebcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062cf62 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062cf66 mov eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); eax = (u32)(M32(m_)); }
  /* 0062cf69 cmp eax, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cf6c jne 0x62cf77 */ if (!ZF_) goto L_0062cf77;
  /* 0062cf6e mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 0062cf72 cmp eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cf75 je 0x62cf7f */ if (ZF_) goto L_0062cf7f;
L_0062cf77:;
  /* 0062cf77 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 0062cf78 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0062cf7a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0062cf7c call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62cf7fu; SAVEALL; call_ind(c, t_); RETCHK(0x62cf7fu, 0x62cf7cu); LOADALL; }
L_0062cf7f:;
  /* 0062cf7f inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cf80 cmp ebx, 0xc */ { u32 a_ = ebx, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062cf83 jb 0x62cf1e */ if (CF_) goto L_0062cf1e;
  /* 0062cf85 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062cf88:;
  /* 0062cf88 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062cf89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062cf8a(CPU *c) {
  NATIVE_HOOK(0x62cf8au) REGS; LOADALL;
L_0062cf8a:;
  /* 0062cf8a sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062cf8d lea edx, [ecx + 0x41] */ edx = (u32)((u32)(ecx + 0x41u));
  /* 0062cf90 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062cf91 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cf92 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062cf93 push 0x62cec0 */ { u32 v_ = 0x62cec0u; esp -= 4; M32(esp) = v_; }
  /* 0062cf98 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0062cf9a lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 0062cf9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062cf9f call 0x5fe928 */ esp -= 4; M32(esp) = 0x62cfa4u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x62cf9fu); RETCHK(0x62cfa4u, 0x62cf9fu); LOADALL;
  /* 0062cfa4 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062cfa7 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 0062cfab mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0062cfb2 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062cfb9 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0062cfbd mov eax, esp */ { eax = (u32)(esp); }
  /* 0062cfbf xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0062cfc1:;
  /* 0062cfc1 cmp byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062cfc5 je 0x62cfca */ if (ZF_) goto L_0062cfca;
  /* 0062cfc7 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062cfc8 jmp 0x62cfc1 */ goto L_0062cfc1;
L_0062cfca:;
  /* 0062cfca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062cfcb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062cfcc lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0062cfd0 call 0x404420 */ esp -= 4; M32(esp) = 0x62cfd5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62cfd0u); RETCHK(0x62cfd5u, 0x62cfd0u); LOADALL;
  /* 0062cfd5 lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 0062cfd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062cfda mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0062cfdc mov ecx, dword ptr [ecx - 0x420] */ { const u32 m_ = (u32)(ecx + 0xfffffbe0u); ecx = (u32)(M32(m_)); }
  /* 0062cfe2 call 0x5075d0 */ esp -= 4; M32(esp) = 0x62cfe7u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x62cfe2u); RETCHK(0x62cfe7u, 0x62cfe2u); LOADALL;
  /* 0062cfe7 add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062cfea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d000(CPU *c) {
  NATIVE_HOOK(0x62d000u) REGS; LOADALL;
L_0062d000:;
  /* 0062d000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062d001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062d003 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d004 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062d005 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062d006 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062d007 mov ebx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 0062d00a mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0062d00d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0062d010 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0062d013:;
  /* 0062d013 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0062d015 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0062d017 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d019 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d01c fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0062d01e fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d021 fmulp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) * s0_); FPOP(); }
  /* 0062d023 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d026 fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0062d029 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d02b faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d02d fld dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0062d030 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d032 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d034 fld dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0062d037 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d039 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d03b fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d03e fld dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0062d041 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d043 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d045 fld dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0062d048 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d04a fld dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0062d04d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d04f faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d051 fld dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0062d054 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d056 fld dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0062d059 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d05b faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d05d fld dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0062d060 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d062 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0062d064 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d066 fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d069 fstp dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d06c add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0062d06f add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0062d072 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0062d073 jne 0x62d013 */ if (!ZF_) goto L_0062d013;
  /* 0062d075 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 0062d076 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062d077 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062d078 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 0062d079 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062d07a mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0062d07e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d07f(CPU *c) {
  NATIVE_HOOK(0x62d07fu) REGS; LOADALL;
L_0062d07f:;
  /* 0062d07f push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062d080 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062d082 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d083 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062d084 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0062d085 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062d086 mov ebx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ebx = (u32)(M32(m_)); }
  /* 0062d089 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0062d08c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0062d08f mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0062d092:;
  /* 0062d092 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0062d094 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0062d096 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d098 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d09b fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0062d09d fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d0a0 fmulp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) * s0_); FPOP(); }
  /* 0062d0a2 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d0a5 fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0062d0a8 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d0aa faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d0ac fld dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0062d0af fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d0b1 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d0b3 fld dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0062d0b6 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d0b8 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d0ba fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d0bd fld dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0062d0c0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d0c2 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d0c4 fld dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0062d0c7 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d0c9 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d0cb fld dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0062d0ce fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d0d0 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d0d2 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0062d0d4 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d0d6 fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d0d9 fstp dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d0dc add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0062d0df add edx, 0xc */ { u32 a_ = edx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0062d0e2 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0062d0e3 jne 0x62d092 */ if (!ZF_) goto L_0062d092;
  /* 0062d0e5 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 0062d0e6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062d0e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062d0e8 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 0062d0e9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062d0ea mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0062d0ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d0ef(CPU *c) {
  NATIVE_HOOK(0x62d0efu) REGS; LOADALL;
L_0062d0ef:;
  /* 0062d0ef push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062d0f0 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062d0f2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062d0f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062d0f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d0f5 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0062d0f8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0062d0fb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0062d0fe fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0062d100 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0062d102 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d104 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d107 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0062d109 fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d10c fmulp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) * s0_); FPOP(); }
  /* 0062d10e fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d111 fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0062d114 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d116 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d118 fld dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0062d11b fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d11d faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d11f fld dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0062d122 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d124 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d126 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d129 fld dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0062d12c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d12e faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d130 fld dword ptr [ebx + 0x30] */ { const u32 m_ = (u32)(ebx + 0x30u); FPUSH((double)MF32(m_)); }
  /* 0062d133 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d135 fld dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0062d138 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d13a faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d13c fld dword ptr [ebx + 0x34] */ { const u32 m_ = (u32)(ebx + 0x34u); FPUSH((double)MF32(m_)); }
  /* 0062d13f faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d141 fld dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0062d144 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d146 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d148 fld dword ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); FPUSH((double)MF32(m_)); }
  /* 0062d14b faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d14d fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0062d14f fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d151 fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d154 fstp dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d157 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 0062d158 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062d159 pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 0062d15a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062d15b mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0062d15f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d160(CPU *c) {
  NATIVE_HOOK(0x62d160u) REGS; LOADALL;
L_0062d160:;
  /* 0062d160 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062d161 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062d163 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062d164 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062d165 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d166 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0062d169 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0062d16c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0062d16f fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 0062d171 fld dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); FPUSH((double)MF32(m_)); }
  /* 0062d173 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d175 fld dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d178 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 0062d17a fld dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d17d fmulp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) * s0_); FPOP(); }
  /* 0062d17f fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 0062d182 fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 0062d185 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d187 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d189 fld dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); FPUSH((double)MF32(m_)); }
  /* 0062d18c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d18e faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d190 fld dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); FPUSH((double)MF32(m_)); }
  /* 0062d193 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d195 faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d197 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0062d19a fld dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 0062d19d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d19f faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d1a1 fld dword ptr [ebx + 0x24] */ { const u32 m_ = (u32)(ebx + 0x24u); FPUSH((double)MF32(m_)); }
  /* 0062d1a4 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d1a6 faddp st(2) */ { double s0_ = ST(0); ST(2) = FR(ST(2) + s0_); FPOP(); }
  /* 0062d1a8 fld dword ptr [ebx + 0x28] */ { const u32 m_ = (u32)(ebx + 0x28u); FPUSH((double)MF32(m_)); }
  /* 0062d1ab fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0062d1ad faddp st(3) */ { double s0_ = ST(0); ST(3) = FR(ST(3) + s0_); FPOP(); }
  /* 0062d1af fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 0062d1b1 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d1b3 fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d1b6 fstp dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d1b9 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 0062d1ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062d1bb pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 0062d1bc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0062d1bd mov eax, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0062d1c1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d2a0(CPU *c) { native_rw_matrix_multiply(c); }

void F_0062d404(CPU *c) {
  NATIVE_HOOK(0x62d404u) REGS; LOADALL;
L_0062d404:;
  /* 0062d404 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d405 wait */ ;
  /* 0062d406 fnstcw word ptr [0x9c1000] */ { const u32 m_ = (u32)(0x9c1000u); M16(m_) = (u16)c->fcw; }
  /* 0062d40c mov eax, dword ptr [0x9c1000] */ { const u32 m_ = (u32)(0x9c1000u); eax = (u32)(M32(m_)); }
  /* 0062d411 mov dword ptr [0x9c1004], eax */ { const u32 m_ = (u32)(0x9c1004u); M32(m_) = (u32)(eax); }
  /* 0062d416 and eax, 0xfffffcff */ { u32 a_ = eax, b_ = 0xfffffcffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062d41b or eax, 0x3f */ { u32 a_ = eax, b_ = 0x3fu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062d41e mov dword ptr [0x9c1000], eax */ { const u32 m_ = (u32)(0x9c1000u); M32(m_) = (u32)(eax); }
  /* 0062d423 fldcw word ptr [0x9c1000] */ { const u32 m_ = (u32)(0x9c1000u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0062d429 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 0062d42a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d42b(CPU *c) {
  NATIVE_HOOK(0x62d42bu) REGS; LOADALL;
L_0062d42b:;
  /* 0062d42b fldcw word ptr [0x9c1004] */ { const u32 m_ = (u32)(0x9c1004u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0062d431 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d432(CPU *c) {
  NATIVE_HOOK(0x62d432u) REGS; LOADALL;
L_0062d432:;
  /* 0062d432 wait */ ;
  /* 0062d433 fnstcw word ptr [0x9c1000] */ { const u32 m_ = (u32)(0x9c1000u); M16(m_) = (u16)c->fcw; }
  /* 0062d439 and dword ptr [0x9c1000], 0xfffffcff */ { const u32 m_ = (u32)(0x9c1000u); u32 a_ = M32(m_), b_ = 0xfffffcffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0062d443 or dword ptr [0x9c1000], 0x3f */ { const u32 m_ = (u32)(0x9c1000u); u32 a_ = M32(m_), b_ = 0x3fu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0062d44a fldcw word ptr [0x9c1000] */ { const u32 m_ = (u32)(0x9c1000u); c->fcw = M16(m_); rt_fldcw(c); }
  /* 0062d450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d480(CPU *c) {
  NATIVE_HOOK(0x62d480u) REGS; LOADALL;
L_0062d480:;
  /* 0062d480 push dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062d484 call 0x4cd250 */ esp -= 4; M32(esp) = 0x62d489u; SAVEALL; F_004cd250(c); ABI_CHECK(0x4cd250u, 0x62d484u); RETCHK(0x62d489u, 0x62d484u); LOADALL;
  /* 0062d489 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062d48a mov ebp, dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); ebp = (u32)(M32(m_)); }
  /* 0062d48e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0062d490:;
  /* 0062d490 mov edi, dword ptr [ebp + ebx*4 + 0xceac] */ { const u32 m_ = (u32)(ebp + ebx * 4u + 0xceacu); edi = (u32)(M32(m_)); }
  /* 0062d497 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 0062d499 shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0062d49c add esi, 0x9c1010 */ { u32 a_ = esi, b_ = 0x9c1010u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0062d4a2 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d4a4 je 0x62d50d */ if (ZF_) goto L_0062d50d;
  /* 0062d4a6 cmp edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d4a8 je 0x62d4b3 */ if (ZF_) goto L_0062d4b3;
  /* 0062d4aa mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0062d4ac mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
L_0062d4b3:;
  /* 0062d4b3 cmp byte ptr [0x7a6c11], 0 */ { const u32 m_ = (u32)(0x7a6c11u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062d4ba je 0x62d4f5 */ if (ZF_) goto L_0062d4f5;
  /* 0062d4bc cmp dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d4c0 jne 0x62d4d5 */ if (!ZF_) goto L_0062d4d5;
  /* 0062d4c2 mov eax, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); eax = (u32)(M32(m_)); }
  /* 0062d4c5 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0062d4c8 mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 0062d4cb mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0062d4ce mov dword ptr [esi + 0xc], 1 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x1u); }
L_0062d4d5:;
  /* 0062d4d5 lea eax, [ebx*8 + 0x62d460] */ eax = (u32)((u32)(ebx * 8u + 0x62d460u));
  /* 0062d4dc mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0062d4de cmp edx, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d4e1 jne 0x62d4eb */ if (!ZF_) goto L_0062d4eb;
  /* 0062d4e3 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0062d4e6 cmp edx, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d4e9 je 0x62d50d */ if (ZF_) goto L_0062d50d;
L_0062d4eb:;
  /* 0062d4eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d4ec mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0062d4ee mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0062d4f0 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d4f3u; SAVEALL; call_ind(c, t_); RETCHK(0x62d4f3u, 0x62d4f0u); LOADALL; }
  /* 0062d4f3 jmp 0x62d50d */ goto L_0062d50d;
L_0062d4f5:;
  /* 0062d4f5 cmp dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d4f9 je 0x62d50d */ if (ZF_) goto L_0062d50d;
  /* 0062d4fb mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 0062d502 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0062d505 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d506 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0062d508 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0062d50a call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d50du; SAVEALL; call_ind(c, t_); RETCHK(0x62d50du, 0x62d50au); LOADALL; }
L_0062d50d:;
  /* 0062d50d inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062d50e cmp ebx, 3 */ { u32 a_ = ebx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d511 jb 0x62d490 */ if (CF_) goto L_0062d490;
  /* 0062d517 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062d518 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0062d540(CPU *c) {
  NATIVE_HOOK(0x62d540u) REGS; LOADALL;
L_0062d540:;
  /* 0062d540 mov eax, dword ptr [0x9c1008] */ { const u32 m_ = (u32)(0x9c1008u); eax = (u32)(M32(m_)); }
  /* 0062d545 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0062d548 jmp 0x550820 */ SAVEALL; F_00550820(c); return;
}

void F_0062d5c0(CPU *c) {
  NATIVE_HOOK(0x62d5c0u) REGS; LOADALL;
L_0062d5c0:;
  /* 0062d5c0 mov dword ptr [0x68a6d8], edi */ { const u32 m_ = (u32)(0x68a6d8u); M32(m_) = (u32)(edi); }
  /* 0062d5c6 jmp 0x62d5d0 */ goto L_0062d5d0;
L_0062d5d0:;
  /* 0062d5d0 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062d5d1 sub esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d5d7 mov edi, esp */ { edi = (u32)(esp); }
  /* 0062d5d9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062d5db mov ecx, 0x27 */ { ecx = (u32)(0x27u); }
  /* 0062d5e0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0062d5e2 mov word ptr [esp + 0x24], 0x9c */ { const u32 m_ = (u32)(esp + 0x24u); M16(m_) = (u16)(0x9cu); }
  /* 0062d5e9 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 0062d5ea push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0062d5ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062d5ee call dword ptr [0x62e594] */ { const u32 m_ = (u32)(0x62e594u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d5f4u; SAVEALL; call_ind(c, t_); RETCHK(0x62d5f4u, 0x62d5eeu); LOADALL; }
  /* 0062d5f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d5f6 mov eax, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); eax = (u32)(M32(m_)); }
  /* 0062d5fa jne 0x62d5fe */ if (!ZF_) goto L_0062d5fe;
  /* 0062d5fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0062d5fe:;
  /* 0062d5fe call 0x62db10 */ esp -= 4; M32(esp) = 0x62d603u; SAVEALL; F_0062db10(c); ABI_CHECK(0x62db10u, 0x62d5feu); RETCHK(0x62d603u, 0x62d5feu); LOADALL;
  /* 0062d603 jmp 0x62d61e */ goto L_0062d61e;
L_0062d61e:;
  /* 0062d61e mov dword ptr [0x9c1044], eax */ { const u32 m_ = (u32)(0x9c1044u); M32(m_) = (u32)(eax); }
  /* 0062d623 fld1 */ FPUSH(1.0);
  /* 0062d625 fidiv dword ptr [0x9c1044] */ { const u32 m_ = (u32)(0x9c1044u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0062d62b fstp dword ptr [0x9c1040] */ { const u32 m_ = (u32)(0x9c1040u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d631 add esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d637 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062d638 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d5c8(CPU *c) {
  NATIVE_HOOK(0x62d5c8u) REGS; LOADALL;
L_0062d5c8:;
  /* 0062d5c8 mov edx, dword ptr [0x9b917c] */ { const u32 m_ = (u32)(0x9b917cu); edx = (u32)(M32(m_)); }
  /* 0062d5ce jmp 0x62d5d0 */ goto L_0062d5d0;
L_0062d5d0:;
  /* 0062d5d0 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062d5d1 sub esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d5d7 mov edi, esp */ { edi = (u32)(esp); }
  /* 0062d5d9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062d5db mov ecx, 0x27 */ { ecx = (u32)(0x27u); }
  /* 0062d5e0 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0062d5e2 mov word ptr [esp + 0x24], 0x9c */ { const u32 m_ = (u32)(esp + 0x24u); M16(m_) = (u16)(0x9cu); }
  /* 0062d5e9 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 0062d5ea push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0062d5ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062d5ee call dword ptr [0x62e594] */ { const u32 m_ = (u32)(0x62e594u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d5f4u; SAVEALL; call_ind(c, t_); RETCHK(0x62d5f4u, 0x62d5eeu); LOADALL; }
  /* 0062d5f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d5f6 mov eax, dword ptr [esp + 0x78] */ { const u32 m_ = (u32)(esp + 0x78u); eax = (u32)(M32(m_)); }
  /* 0062d5fa jne 0x62d5fe */ if (!ZF_) goto L_0062d5fe;
  /* 0062d5fc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0062d5fe:;
  /* 0062d5fe call 0x62db10 */ esp -= 4; M32(esp) = 0x62d603u; SAVEALL; F_0062db10(c); ABI_CHECK(0x62db10u, 0x62d5feu); RETCHK(0x62d603u, 0x62d5feu); LOADALL;
  /* 0062d603 jmp 0x62d61e */ goto L_0062d61e;
L_0062d61e:;
  /* 0062d61e mov dword ptr [0x9c1044], eax */ { const u32 m_ = (u32)(0x9c1044u); M32(m_) = (u32)(eax); }
  /* 0062d623 fld1 */ FPUSH(1.0);
  /* 0062d625 fidiv dword ptr [0x9c1044] */ { const u32 m_ = (u32)(0x9c1044u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 0062d62b fstp dword ptr [0x9c1040] */ { const u32 m_ = (u32)(0x9c1040u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062d631 add esp, 0x9c */ { u32 a_ = esp, b_ = 0x9cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d637 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062d638 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d684(CPU *c) {
  NATIVE_HOOK(0x62d684u) REGS; LOADALL;
L_0062d684:;
  /* 0062d684 mov eax, dword ptr [0x9c1050] */ { const u32 m_ = (u32)(0x9c1050u); eax = (u32)(M32(m_)); }
  /* 0062d689 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d68b jne 0x62d6b3 */ if (!ZF_) goto L_0062d6b3;
  /* 0062d68d push 0x62d660 */ { u32 v_ = 0x62d660u; esp -= 4; M32(esp) = v_; }
  /* 0062d692 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062d694 push 0x62d677 */ { u32 v_ = 0x62d677u; esp -= 4; M32(esp) = v_; }
  /* 0062d699 push 0x62d670 */ { u32 v_ = 0x62d670u; esp -= 4; M32(esp) = v_; }
  /* 0062d69e call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d6a4u; SAVEALL; call_ind(c, t_); RETCHK(0x62d6a4u, 0x62d69eu); LOADALL; }
  /* 0062d6a4 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d6a7 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 0062d6aa movzx eax, al */ { eax = (u32)((eax & 0xffu)); }
  /* 0062d6ad inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062d6ae mov dword ptr [0x9c1050], eax */ { const u32 m_ = (u32)(0x9c1050u); M32(m_) = (u32)(eax); }
L_0062d6b3:;
  /* 0062d6b3 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0062d6b4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d6b5(CPU *c) {
  NATIVE_HOOK(0x62d6b5u) REGS; LOADALL;
L_0062d6b5:;
  /* 0062d6b5 mov dword ptr [edi], 0x5c4e43 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x5c4e43u); }
  /* 0062d6bb mov eax, edi */ { eax = (u32)(edi); }
  /* 0062d6bd add edi, 3 */ { u32 a_ = edi, b_ = 0x3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0062d6c0 mov ecx, 0x1fc */ { ecx = (u32)(0x1fcu); }
L_0062d6c5:;
  /* 0062d6c5 mov dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0062d6c7 mov byte ptr [edi], dl */ { const u32 m_ = (u32)(edi); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0062d6c9 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062d6ca inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062d6cb test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062d6cd je 0x62d6d4 */ if (ZF_) goto L_0062d6d4;
  /* 0062d6cf dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0062d6d0 jne 0x62d6c5 */ if (!ZF_) goto L_0062d6c5;
  /* 0062d6d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0062d6d4:;
  /* 0062d6d4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d6d5(CPU *c) {
  NATIVE_HOOK(0x62d6d5u) REGS; LOADALL;
L_0062d6d5:;
  /* 0062d6d5 call 0x62d684 */ esp -= 4; M32(esp) = 0x62d6dau; SAVEALL; F_0062d684(c); ABI_CHECK(0x62d684u, 0x62d6d5u); RETCHK(0x62d6dau, 0x62d6d5u); LOADALL;
  /* 0062d6da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d6dc je 0x62d76a */ if (ZF_) goto L_0062d76a;
  /* 0062d6e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062d6e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062d6e4 sub esp, 0x400 */ { u32 a_ = esp, b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d6ea mov esi, dword ptr [esp + 0x40c] */ { const u32 m_ = (u32)(esp + 0x40cu); esi = (u32)(M32(m_)); }
  /* 0062d6f1 mov edi, esp */ { edi = (u32)(esp); }
  /* 0062d6f3 call 0x62d6b5 */ esp -= 4; M32(esp) = 0x62d6f8u; SAVEALL; F_0062d6b5(c); ABI_CHECK(0x62d6b5u, 0x62d6f3u); RETCHK(0x62d6f8u, 0x62d6f3u); LOADALL;
  /* 0062d6f8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d6fa je 0x62d762 */ if (ZF_) goto L_0062d762;
  /* 0062d6fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d6fd call dword ptr [0x62e1d0] */ { const u32 m_ = (u32)(0x62e1d0u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d703u; SAVEALL; call_ind(c, t_); RETCHK(0x62d703u, 0x62d6fdu); LOADALL; }
  /* 0062d703 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d706 je 0x62d762 */ if (ZF_) goto L_0062d762;
  /* 0062d708 lea eax, [esp + 0x200] */ eax = (u32)((u32)(esp + 0x200u));
  /* 0062d70f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d710 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0062d715 call dword ptr [0x62e1bc] */ { const u32 m_ = (u32)(0x62e1bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d71bu; SAVEALL; call_ind(c, t_); RETCHK(0x62d71bu, 0x62d715u); LOADALL; }
  /* 0062d71b dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0062d71c cmp eax, 0x1fe */ { u32 a_ = eax, b_ = 0x1feu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d721 ja 0x62d762 */ if (!(CF_|ZF_)) goto L_0062d762;
  /* 0062d723 push 0x62d680 */ { u32 v_ = 0x62d680u; esp -= 4; M32(esp) = v_; }
  /* 0062d728 call dword ptr [0x62e22c] */ { const u32 m_ = (u32)(0x62e22cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d72eu; SAVEALL; call_ind(c, t_); RETCHK(0x62d72eu, 0x62d728u); LOADALL; }
  /* 0062d72e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d731 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d733 jne 0x62d762 */ if (!ZF_) goto L_0062d762;
  /* 0062d735 push dword ptr [esp + 0x40c] */ { const u32 m_ = (u32)(esp + 0x40cu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062d73c call dword ptr [0x62e220] */ { const u32 m_ = (u32)(0x62e220u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d742u; SAVEALL; call_ind(c, t_); RETCHK(0x62d742u, 0x62d73cu); LOADALL; }
  /* 0062d742 mov esi, eax */ { esi = (u32)(eax); }
  /* 0062d744 lea eax, [esp + 0x200] */ eax = (u32)((u32)(esp + 0x200u));
  /* 0062d74b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d74c call dword ptr [0x62e22c] */ { const u32 m_ = (u32)(0x62e22cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d752u; SAVEALL; call_ind(c, t_); RETCHK(0x62d752u, 0x62d74cu); LOADALL; }
  /* 0062d752 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d755 mov eax, esi */ { eax = (u32)(esi); }
  /* 0062d757 add esp, 0x400 */ { u32 a_ = esp, b_ = 0x400u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d75d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062d75e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062d75f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0062d762:;
  /* 0062d762 add esp, 0x400 */ { u32 a_ = esp, b_ = 0x400u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d768 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062d769 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0062d76a:;
  /* 0062d76a jmp dword ptr [0x62e220] */ { const u32 m_ = (u32)(0x62e220u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0062d770(CPU *c) {
  NATIVE_HOOK(0x62d770u) REGS; LOADALL;
L_0062d770:;
  /* 0062d770 call 0x62d684 */ esp -= 4; M32(esp) = 0x62d775u; SAVEALL; F_0062d684(c); ABI_CHECK(0x62d684u, 0x62d770u); RETCHK(0x62d775u, 0x62d770u); LOADALL;
  /* 0062d775 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d777 je 0x62d7b8 */ if (ZF_) goto L_0062d7b8;
  /* 0062d779 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062d77a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062d77b sub esp, 0x200 */ { u32 a_ = esp, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d781 mov esi, dword ptr [esp + 0x20c] */ { const u32 m_ = (u32)(esp + 0x20cu); esi = (u32)(M32(m_)); }
  /* 0062d788 mov edi, esp */ { edi = (u32)(esp); }
  /* 0062d78a call 0x62d6b5 */ esp -= 4; M32(esp) = 0x62d78fu; SAVEALL; F_0062d6b5(c); ABI_CHECK(0x62d6b5u, 0x62d78au); RETCHK(0x62d78fu, 0x62d78au); LOADALL;
  /* 0062d78f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d791 je 0x62d7b0 */ if (ZF_) goto L_0062d7b0;
  /* 0062d793 push dword ptr [esp + 0x210] */ { const u32 m_ = (u32)(esp + 0x210u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062d79a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d79b call dword ptr [0x62e218] */ { const u32 m_ = (u32)(0x62e218u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62d7a1u; SAVEALL; call_ind(c, t_); RETCHK(0x62d7a1u, 0x62d79bu); LOADALL; }
  /* 0062d7a1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062d7a3 je 0x62d7b0 */ if (ZF_) goto L_0062d7b0;
  /* 0062d7a5 add esp, 0x200 */ { u32 a_ = esp, b_ = 0x200u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d7ab pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062d7ac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062d7ad ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0062d7b0:;
  /* 0062d7b0 add esp, 0x200 */ { u32 a_ = esp, b_ = 0x200u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d7b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062d7b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0062d7b8:;
  /* 0062d7b8 jmp dword ptr [0x62e218] */ { const u32 m_ = (u32)(0x62e218u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0062d7be(CPU *c) {
  NATIVE_HOOK(0x62d7beu) REGS; LOADALL;
L_0062d7be:;
  /* 0062d7be call 0x62d684 */ esp -= 4; M32(esp) = 0x62d7c3u; SAVEALL; F_0062d684(c); ABI_CHECK(0x62d684u, 0x62d7beu); RETCHK(0x62d7c3u, 0x62d7beu); LOADALL;
  /* 0062d7c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d7c5 je 0x62d806 */ if (ZF_) goto L_0062d806;
  /* 0062d7c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062d7c8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0062d7c9 sub esp, 0x200 */ { u32 a_ = esp, b_ = 0x200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d7cf mov esi, dword ptr [esp + 0x20c] */ { const u32 m_ = (u32)(esp + 0x20cu); esi = (u32)(M32(m_)); }
  /* 0062d7d6 mov edi, esp */ { edi = (u32)(esp); }
  /* 0062d7d8 call 0x62d6b5 */ esp -= 4; M32(esp) = 0x62d7ddu; SAVEALL; F_0062d6b5(c); ABI_CHECK(0x62d6b5u, 0x62d7d8u); RETCHK(0x62d7ddu, 0x62d7d8u); LOADALL;
  /* 0062d7dd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d7df je 0x62d7fe */ if (ZF_) goto L_0062d7fe;
  /* 0062d7e1 push dword ptr [esp + 0x210] */ { const u32 m_ = (u32)(esp + 0x210u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062d7e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062d7e9 call 0x5b1bb0 */ esp -= 4; M32(esp) = 0x62d7eeu; SAVEALL; F_005b1bb0(c); ABI_CHECK(0x5b1bb0u, 0x62d7e9u); RETCHK(0x62d7eeu, 0x62d7e9u); LOADALL;
  /* 0062d7ee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d7f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062d7f3 jne 0x62d7fe */ if (!ZF_) goto L_0062d7fe;
  /* 0062d7f5 add esp, 0x200 */ { u32 a_ = esp, b_ = 0x200u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d7fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062d7fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062d7fd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062d7fe:;
  /* 0062d7fe add esp, 0x200 */ { u32 a_ = esp, b_ = 0x200u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d804 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0062d805 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0062d806:;
  /* 0062d806 jmp 0x5b1bb0 */ SAVEALL; F_005b1bb0(c); return;
}

void F_0062d820(CPU *c) {
  NATIVE_HOOK(0x62d820u) REGS; LOADALL;
L_0062d820:;
  /* 0062d820 cmp dword ptr [0x6880fc], 0x44160000 */ { const u32 m_ = (u32)(0x6880fcu); u32 a_ = M32(m_), b_ = 0x44160000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d82a jne 0x62d83f */ if (!ZF_) goto L_0062d83f;
  /* 0062d82c fld dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); FPUSH((double)MF32(m_)); }
  /* 0062d832 fsub dword ptr [0x62d810] */ { const u32 m_ = (u32)(0x62d810u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0062d838 fmul dword ptr [0x62d814] */ { const u32 m_ = (u32)(0x62d814u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0062d83e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062d83f:;
  /* 0062d83f fldz */ FPUSH(0.0);
  /* 0062d841 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d842(CPU *c) {
  NATIVE_HOOK(0x62d842u) REGS; LOADALL;
L_0062d842:;
  /* 0062d842 cmp dword ptr [0x688104], 0 */ { const u32 m_ = (u32)(0x688104u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062d849 je 0x62d86d */ if (ZF_) goto L_0062d86d;
  /* 0062d84b mov dword ptr [0x6880fc], 0x44160000 */ { const u32 m_ = (u32)(0x6880fcu); M32(m_) = (u32)(0x44160000u); }
  /* 0062d855 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 0062d85b fdiv dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0062d861 fmul dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0062d867 fstp dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); MF32(m_) = (float)ST(0); FPOP(); }
L_0062d86d:;
  /* 0062d86d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062d86e(CPU *c) {
  NATIVE_HOOK(0x62d86eu) REGS; LOADALL;
  goto L_0062d86e;
L_00517b40:;
  /* 00517b40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00517b41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00517b43 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517b46 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00517b49 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517b4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00517b4b mov dword ptr [ebp - 4], 0xc66a6000 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xc66a6000u); }
  /* 00517b52 mov dword ptr [ebp - 8], 0xc66a6000 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0xc66a6000u); }
  /* 00517b59 mov dword ptr [ebp - 0xc], 0xc66a6000 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0xc66a6000u); }
  /* 00517b60 mov dword ptr [ebp - 0x10], 0x466a6000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x466a6000u); }
  /* 00517b67 mov dword ptr [ebp - 0x14], 0x466a6000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x466a6000u); }
  /* 00517b6e mov dword ptr [ebp - 0x18], 0x466a6000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x466a6000u); }
  /* 00517b75 call 0x57ea20 */ esp -= 4; M32(esp) = 0x517b7au; SAVEALL; F_0057ea20(c); ABI_CHECK(0x57ea20u, 0x517b75u); RETCHK(0x517b7au, 0x517b75u); LOADALL;
  /* 00517b7a mov esi, eax */ { esi = (u32)(eax); }
  /* 00517b7c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00517b7f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517b81 je 0x517b93 */ if (ZF_) goto L_00517b93;
  /* 00517b83 mov eax, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00517b86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00517b88 jne 0x517b93 */ if (!ZF_) goto L_00517b93;
  /* 00517b8a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00517b8b call 0x517be0 */ esp -= 4; M32(esp) = 0x517b90u; SAVEALL; F_00517be0(c); ABI_CHECK(0x517be0u, 0x517b8bu); RETCHK(0x517b90u, 0x517b8bu); LOADALL;
  /* 00517b90 mov dword ptr [edi + 0x30], eax */ { const u32 m_ = (u32)(edi + 0x30u); M32(m_) = (u32)(eax); }
L_00517b93:;
  /* 00517b93 mov eax, esi */ { eax = (u32)(esi); }
  /* 00517b95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00517b96 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00517b98 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00517b99 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062d86e:;
  /* 0062d86e call 0x62d842 */ esp -= 4; M32(esp) = 0x62d873u; SAVEALL; F_0062d842(c); ABI_CHECK(0x62d842u, 0x62d86eu); RETCHK(0x62d873u, 0x62d86eu); LOADALL;
  /* 0062d873 jmp 0x517b40 */ goto L_00517b40;
}

void F_0062d8f4(CPU *c) {
  NATIVE_HOOK(0x62d8f4u) REGS; LOADALL;
L_0062d8f4:;
  /* 0062d8f4 call 0x62d820 */ esp -= 4; M32(esp) = 0x62d8f9u; SAVEALL; F_0062d820(c); ABI_CHECK(0x62d820u, 0x62d8f4u); RETCHK(0x62d8f9u, 0x62d8f4u); LOADALL;
  /* 0062d8f9 fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 0062d8ff fdiv dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0062d905 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 0062d908 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0062d90a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d90c fistp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0062d90f fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 0062d912 fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 0062d914 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d916 fistp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0062d919 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0062d91b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0062d91d fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 0062d923 fdiv dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 0062d929 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 0062d92c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d92e fistp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0062d931 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0062d934 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 0062d936 fistp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 0062d939 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 0062d93b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062da24(CPU *c) {
  NATIVE_HOOK(0x62da24u) REGS; LOADALL;
L_0062da24:;
  /* 0062da24 mov ebx, dword ptr [esi + 0x1d8] */ { const u32 m_ = (u32)(esi + 0x1d8u); ebx = (u32)(M32(m_)); }
  /* 0062da2a mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 0062da2d lea ecx, [ebx - 0x80] */ ecx = (u32)((u32)(ebx + 0xffffff80u));
  /* 0062da30 cmp ecx, 0x7f */ { u32 a_ = ecx, b_ = 0x7fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062da33 ja 0x62da3d */ if (!(CF_|ZF_)) goto L_0062da3d;
  /* 0062da35 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0062da37 mov edx, dword ptr [esi + 0x198] */ { const u32 m_ = (u32)(esi + 0x198u); edx = (u32)(M32(m_)); }
L_0062da3d:;
  /* 0062da3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062da70(CPU *c) {
  NATIVE_HOOK(0x62da70u) REGS; LOADALL;
L_0062da70:;
  /* 0062da70 cmp eax, 0xd */ { u32 a_ = eax, b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062da73 je 0x62da7b */ if (ZF_) goto L_0062da7b;
  /* 0062da75 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062da78 je 0x62da7b */ if (ZF_) goto L_0062da7b;
  /* 0062da7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062da7b:;
  /* 0062da7b pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062da7c lea edx, [esi + 0x24] */ edx = (u32)((u32)(esi + 0x24u));
  /* 0062da7f cmp dword ptr [esi + 0x38], 0x10 */ { const u32 m_ = (u32)(esi + 0x38u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062da83 jb 0x62da87 */ if (CF_) goto L_0062da87;
  /* 0062da85 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_0062da87:;
  /* 0062da87 mov edi, 0x62dac0 */ { edi = (u32)(0x62dac0u); }
L_0062da8c:;
  /* 0062da8c cmp byte ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062da8f je 0x62daae */ if (ZF_) goto L_0062daae;
  /* 0062da91 mov ebx, edx */ { ebx = (u32)(edx); }
L_0062da93:;
  /* 0062da93 mov cl, byte ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0062da95 cmp cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062da97 jne 0x62daa1 */ if (!ZF_) goto L_0062daa1;
  /* 0062da99 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062da9b je 0x62daaa */ if (ZF_) goto L_0062daaa;
  /* 0062da9d inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062da9e inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062da9f jmp 0x62da93 */ goto L_0062da93;
L_0062daa1:;
  /* 0062daa1 mov cl, byte ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0062daa3 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062daa4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062daa6 jne 0x62daa1 */ if (!ZF_) goto L_0062daa1;
  /* 0062daa8 jmp 0x62da8c */ goto L_0062da8c;
L_0062daaa:;
  /* 0062daaa popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062daab cmp eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062daad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062daae:;
  /* 0062daae popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062daaf test esp, esp */ { u32 a_ = esp, b_ = esp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062dab1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062dafc(CPU *c) {
  NATIVE_HOOK(0x62dafcu) REGS; LOADALL;
  goto L_0062dafc;
L_0062ce9a:;
  /* 0062ce9a mov dword ptr [ebx + 0x1d8], 3 */ { const u32 m_ = (u32)(ebx + 0x1d8u); M32(m_) = (u32)(0x3u); }
  /* 0062cea4 mov dword ptr [ebx + 0x1f0], 0x40000000 */ { const u32 m_ = (u32)(ebx + 0x1f0u); M32(m_) = (u32)(0x40000000u); }
  /* 0062ceae test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0062ceb0 jne 0x62ceb5 */ if (!ZF_) goto L_0062ceb5;
  /* 0062ceb2 mov byte ptr [ebp - 0x2d], al */ { const u32 m_ = (u32)(ebp + 0xffffffd3u); M8(m_) = (u8)((eax & 0xffu)); }
L_0062ceb5:;
  /* 0062ceb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062dafc:;
  /* 0062dafc mov dword ptr [ebx + 0x1d0], 0xf */ { const u32 m_ = (u32)(ebx + 0x1d0u); M32(m_) = (u32)(0xfu); }
  /* 0062db06 jmp 0x62ce9a */ goto L_0062ce9a;
}

void F_0062db10(CPU *c) {
  NATIVE_HOOK(0x62db10u) REGS; LOADALL;
L_0062db10:;
  /* 0062db10 call 0x62db50 */ esp -= 4; M32(esp) = 0x62db15u; SAVEALL; F_0062db50(c); ABI_CHECK(0x62db50u, 0x62db10u); RETCHK(0x62db15u, 0x62db10u); LOADALL;
  /* 0062db15 cmp dword ptr [0x9c1064], 0 */ { const u32 m_ = (u32)(0x9c1064u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062db1c je 0x62db2a */ if (ZF_) goto L_0062db2a;
  /* 0062db1e cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062db21 ja 0x62db39 */ if (!(CF_|ZF_)) goto L_0062db39;
  /* 0062db23 mov eax, 0x3c */ { eax = (u32)(0x3cu); }
  /* 0062db28 jmp 0x62db39 */ goto L_0062db39;
L_0062db2a:;
  /* 0062db2a mov eax, dword ptr [0x9c1068] */ { const u32 m_ = (u32)(0x9c1068u); eax = (u32)(M32(m_)); }
  /* 0062db2f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062db31 jne 0x62db39 */ if (!ZF_) goto L_0062db39;
  /* 0062db33 mov eax, 0x32 */ { eax = (u32)(0x32u); }
  /* 0062db38 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062db39:;
  /* 0062db39 cmp eax, 0x1e */ { u32 a_ = eax, b_ = 0x1eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062db3c jge 0x62db43 */ if (!LT_) goto L_0062db43;
  /* 0062db3e mov eax, 0x1e */ { eax = (u32)(0x1eu); }
L_0062db43:;
  /* 0062db43 cmp eax, 0xf0 */ { u32 a_ = eax, b_ = 0xf0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062db48 jle 0x62db4f */ if ((ZF_|LT_)) goto L_0062db4f;
  /* 0062db4a mov eax, 0xf0 */ { eax = (u32)(0xf0u); }
L_0062db4f:;
  /* 0062db4f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062db50(CPU *c) {
  NATIVE_HOOK(0x62db50u) REGS; LOADALL;
L_0062db50:;
  /* 0062db50 cmp dword ptr [0x9c1060], 0 */ { const u32 m_ = (u32)(0x9c1060u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062db57 jne 0x62db9d */ if (!ZF_) goto L_0062db9d;
  /* 0062db59 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062db5a push 0x62d660 */ { u32 v_ = 0x62d660u; esp -= 4; M32(esp) = v_; }
  /* 0062db5f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062db61 push 0x62dbc0 */ { u32 v_ = 0x62dbc0u; esp -= 4; M32(esp) = v_; }
  /* 0062db66 push 0x62d670 */ { u32 v_ = 0x62d670u; esp -= 4; M32(esp) = v_; }
  /* 0062db6b call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62db71u; SAVEALL; call_ind(c, t_); RETCHK(0x62db71u, 0x62db6bu); LOADALL; }
  /* 0062db71 mov dword ptr [0x9c1068], eax */ { const u32 m_ = (u32)(0x9c1068u); M32(m_) = (u32)(eax); }
  /* 0062db76 push 0x62d660 */ { u32 v_ = 0x62d660u; esp -= 4; M32(esp) = v_; }
  /* 0062db7b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062db7d push 0x62dbd0 */ { u32 v_ = 0x62dbd0u; esp -= 4; M32(esp) = v_; }
  /* 0062db82 push 0x62d670 */ { u32 v_ = 0x62d670u; esp -= 4; M32(esp) = v_; }
  /* 0062db87 call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62db8du; SAVEALL; call_ind(c, t_); RETCHK(0x62db8du, 0x62db87u); LOADALL; }
  /* 0062db8d mov dword ptr [0x9c1064], eax */ { const u32 m_ = (u32)(0x9c1064u); M32(m_) = (u32)(eax); }
  /* 0062db92 mov dword ptr [0x9c1060], 1 */ { const u32 m_ = (u32)(0x9c1060u); M32(m_) = (u32)(0x1u); }
  /* 0062db9c popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
L_0062db9d:;
  /* 0062db9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062db9e(CPU *c) {
  NATIVE_HOOK(0x62db9eu) REGS; LOADALL;
L_0062db9e:;
  /* 0062db9e call 0x62db50 */ esp -= 4; M32(esp) = 0x62dba3u; SAVEALL; F_0062db50(c); ABI_CHECK(0x62db50u, 0x62db9eu); RETCHK(0x62dba3u, 0x62db9eu); LOADALL;
  /* 0062dba3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dba4 cmp dword ptr [0x9c1064], 1 */ { const u32 m_ = (u32)(0x9c1064u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dbab sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0062dbad and eax, 0x7fffffff */ { u32 a_ = eax, b_ = 0x7fffffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062dbb2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062dbb3 mov dword ptr [0x9bf8f4], eax */ { const u32 m_ = (u32)(0x9bf8f4u); M32(m_) = (u32)(eax); }
  /* 0062dbb8 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 0062dbb9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062dbf0(CPU *c) {
  NATIVE_HOOK(0x62dbf0u) REGS; LOADALL;
L_0062dbf0:;
  /* 0062dbf0 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062dbf1 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0062dbf3 jmp 0x62dbfb */ goto L_0062dbfb;
L_0062dbfb:;
  /* 0062dbfb sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062dbfe mov dword ptr [esp + 0x40], ecx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0062dc02 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0062dc05 cmp dword ptr [esi + 8], 4 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc09 jne 0x62dd51 */ if (!ZF_) goto L_0062dd51;
  /* 0062dc0f mov ebx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ebx = (u32)(M32(m_)); }
  /* 0062dc12 cmp ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc15 jae 0x62dd51 */ if (!CF_) goto L_0062dd51;
  /* 0062dc1b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0062dc1d mov eax, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); eax = (u32)(M32(m_)); }
  /* 0062dc20 cmp byte ptr [eax + 0x3e], 0 */ { const u32 m_ = (u32)(eax + 0x3eu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062dc24 je 0x62dd51 */ if (ZF_) goto L_0062dd51;
  /* 0062dc2a mov edi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edi = (u32)(M32(m_)); }
  /* 0062dc2d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0062dc2f mov dword ptr [esp + 0x44], 0 */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(0x0u); }
  /* 0062dc37 cmp dword ptr [edi + 0xd20], 0 */ { const u32 m_ = (u32)(edi + 0xd20u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc3e jne 0x62dc4d */ if (!ZF_) goto L_0062dc4d;
  /* 0062dc40 cmp dword ptr [esp + 0x40], 0 */ { const u32 m_ = (u32)(esp + 0x40u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc45 je 0x62dd51 */ if (ZF_) goto L_0062dd51;
  /* 0062dc4b jmp 0x62dc88 */ goto L_0062dc88;
L_0062dc4d:;
  /* 0062dc4d lea eax, [edi + 0xd10] */ eax = (u32)((u32)(edi + 0xd10u));
  /* 0062dc53 cmp dword ptr [edi + 0xd24], 0x10 */ { const u32 m_ = (u32)(edi + 0xd24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc5a jb 0x62dc5e */ if (CF_) goto L_0062dc5e;
  /* 0062dc5c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_0062dc5e:;
  /* 0062dc5e mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 0062dc62 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0062dc64:;
  /* 0062dc64 movzx edx, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M8(m_)); }
  /* 0062dc67 sub edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0062dc6a cmp edx, 9 */ { u32 a_ = edx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc6d ja 0x62dc77 */ if (!(CF_|ZF_)) goto L_0062dc77;
  /* 0062dc6f imul ecx, ecx, 0xa */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0xau; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0062dc72 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0062dc74 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062dc75 jmp 0x62dc64 */ goto L_0062dc64;
L_0062dc77:;
  /* 0062dc77 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0062dc79 cmp ecx, 0x64 */ { u32 a_ = ecx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc7c jbe 0x62dc88 */ if ((CF_|ZF_)) goto L_0062dc88;
  /* 0062dc7e inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062dc7f cmp ecx, 0xc8 */ { u32 a_ = ecx, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc85 jbe 0x62dc88 */ if ((CF_|ZF_)) goto L_0062dc88;
  /* 0062dc87 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0062dc88:;
  /* 0062dc88 lea eax, [ebx + ebx*2] */ eax = (u32)((u32)(ebx + ebx * 2u));
  /* 0062dc8b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0062dc8d mov esi, dword ptr [esi + eax*4 + 0x24] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x24u); esi = (u32)(M32(m_)); }
  /* 0062dc91 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062dc93 je 0x62dd51 */ if (ZF_) goto L_0062dd51;
  /* 0062dc99 mov dword ptr [esi + 0x1d0], 0xb */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0xbu); }
  /* 0062dca3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0062dca5 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0062dca7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0062dca9 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62dcacu; SAVEALL; call_ind(c, t_); RETCHK(0x62dcacu, 0x62dca9u); LOADALL; }
  /* 0062dcac cmp dword ptr [esp + 0x40], 0 */ { const u32 m_ = (u32)(esp + 0x40u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dcb1 jne 0x62dcc3 */ if (!ZF_) goto L_0062dcc3;
  /* 0062dcb3 lea eax, [edi + 0xd0c] */ eax = (u32)((u32)(edi + 0xd0cu));
  /* 0062dcb9 call 0x5224b0 */ esp -= 4; M32(esp) = 0x62dcbeu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x62dcb9u); RETCHK(0x62dcbeu, 0x62dcb9u); LOADALL;
  /* 0062dcbe jmp 0x62dd51 */ goto L_0062dd51;
L_0062dcc3:;
  /* 0062dcc3 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 0062dcc7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062dcc9 je 0x62dce8 */ if (ZF_) goto L_0062dce8;
  /* 0062dccb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dccc push dword ptr [0x9b9180] */ { const u32 m_ = (u32)(0x9b9180u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062dcd2 push 0x62dd58 */ { u32 v_ = 0x62dd58u; esp -= 4; M32(esp) = v_; }
  /* 0062dcd7 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0062dcd9 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 0062dcdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dcde call 0x5fe928 */ esp -= 4; M32(esp) = 0x62dce3u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x62dcdeu); RETCHK(0x62dce3u, 0x62dcdeu); LOADALL;
  /* 0062dce3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062dce6 jmp 0x62dd02 */ goto L_0062dd02;
L_0062dce8:;
  /* 0062dce8 push dword ptr [0x9b9180] */ { const u32 m_ = (u32)(0x9b9180u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062dcee push 0x62dd6c */ { u32 v_ = 0x62dd6cu; esp -= 4; M32(esp) = v_; }
  /* 0062dcf3 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0062dcf5 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 0062dcf9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dcfa call 0x5fe928 */ esp -= 4; M32(esp) = 0x62dcffu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x62dcfau); RETCHK(0x62dcffu, 0x62dcfau); LOADALL;
  /* 0062dcff add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062dd02:;
  /* 0062dd02 mov byte ptr [esp + 0x1f], 0 */ { const u32 m_ = (u32)(esp + 0x1fu); M8(m_) = (u8)(0x0u); }
  /* 0062dd07 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 0062dd0b mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0062dd12 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062dd19 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0062dd1d mov eax, esp */ { eax = (u32)(esp); }
  /* 0062dd1f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0062dd21:;
  /* 0062dd21 cmp byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062dd25 je 0x62dd2a */ if (ZF_) goto L_0062dd2a;
  /* 0062dd27 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062dd28 jmp 0x62dd21 */ goto L_0062dd21;
L_0062dd2a:;
  /* 0062dd2a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062dd2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dd2c lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0062dd30 call 0x404420 */ esp -= 4; M32(esp) = 0x62dd35u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62dd30u); RETCHK(0x62dd35u, 0x62dd30u); LOADALL;
  /* 0062dd35 lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 0062dd39 call 0x5224b0 */ esp -= 4; M32(esp) = 0x62dd3eu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x62dd39u); RETCHK(0x62dd3eu, 0x62dd39u); LOADALL;
  /* 0062dd3e cmp dword ptr [esp + 0x38], 0x10 */ { const u32 m_ = (u32)(esp + 0x38u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dd43 jb 0x62dd51 */ if (CF_) goto L_0062dd51;
  /* 0062dd45 push dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062dd49 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62dd4eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62dd49u); RETCHK(0x62dd4eu, 0x62dd49u); LOADALL;
  /* 0062dd4e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062dd51:;
  /* 0062dd51 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062dd54 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062dd55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062dbf5(CPU *c) {
  NATIVE_HOOK(0x62dbf5u) REGS; LOADALL;
L_0062dbf5:;
  /* 0062dbf5 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062dbf6 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0062dbfb sub esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062dbfe mov dword ptr [esp + 0x40], ecx */ { const u32 m_ = (u32)(esp + 0x40u); M32(m_) = (u32)(ecx); }
  /* 0062dc02 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0062dc05 cmp dword ptr [esi + 8], 4 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc09 jne 0x62dd51 */ if (!ZF_) goto L_0062dd51;
  /* 0062dc0f mov ebx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ebx = (u32)(M32(m_)); }
  /* 0062dc12 cmp ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc15 jae 0x62dd51 */ if (!CF_) goto L_0062dd51;
  /* 0062dc1b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0062dc1d mov eax, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); eax = (u32)(M32(m_)); }
  /* 0062dc20 cmp byte ptr [eax + 0x3e], 0 */ { const u32 m_ = (u32)(eax + 0x3eu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062dc24 je 0x62dd51 */ if (ZF_) goto L_0062dd51;
  /* 0062dc2a mov edi, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edi = (u32)(M32(m_)); }
  /* 0062dc2d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0062dc2f mov dword ptr [esp + 0x44], 0 */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(0x0u); }
  /* 0062dc37 cmp dword ptr [edi + 0xd20], 0 */ { const u32 m_ = (u32)(edi + 0xd20u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc3e jne 0x62dc4d */ if (!ZF_) goto L_0062dc4d;
  /* 0062dc40 cmp dword ptr [esp + 0x40], 0 */ { const u32 m_ = (u32)(esp + 0x40u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc45 je 0x62dd51 */ if (ZF_) goto L_0062dd51;
  /* 0062dc4b jmp 0x62dc88 */ goto L_0062dc88;
L_0062dc4d:;
  /* 0062dc4d lea eax, [edi + 0xd10] */ eax = (u32)((u32)(edi + 0xd10u));
  /* 0062dc53 cmp dword ptr [edi + 0xd24], 0x10 */ { const u32 m_ = (u32)(edi + 0xd24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc5a jb 0x62dc5e */ if (CF_) goto L_0062dc5e;
  /* 0062dc5c mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_0062dc5e:;
  /* 0062dc5e mov dword ptr [esp + 0x44], eax */ { const u32 m_ = (u32)(esp + 0x44u); M32(m_) = (u32)(eax); }
  /* 0062dc62 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_0062dc64:;
  /* 0062dc64 movzx edx, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M8(m_)); }
  /* 0062dc67 sub edx, 0x30 */ { u32 a_ = edx, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0062dc6a cmp edx, 9 */ { u32 a_ = edx, b_ = 0x9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc6d ja 0x62dc77 */ if (!(CF_|ZF_)) goto L_0062dc77;
  /* 0062dc6f imul ecx, ecx, 0xa */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0xau; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0062dc72 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0062dc74 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062dc75 jmp 0x62dc64 */ goto L_0062dc64;
L_0062dc77:;
  /* 0062dc77 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0062dc79 cmp ecx, 0x64 */ { u32 a_ = ecx, b_ = 0x64u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc7c jbe 0x62dc88 */ if ((CF_|ZF_)) goto L_0062dc88;
  /* 0062dc7e inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062dc7f cmp ecx, 0xc8 */ { u32 a_ = ecx, b_ = 0xc8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dc85 jbe 0x62dc88 */ if ((CF_|ZF_)) goto L_0062dc88;
  /* 0062dc87 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_0062dc88:;
  /* 0062dc88 lea eax, [ebx + ebx*2] */ eax = (u32)((u32)(ebx + ebx * 2u));
  /* 0062dc8b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0062dc8d mov esi, dword ptr [esi + eax*4 + 0x24] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x24u); esi = (u32)(M32(m_)); }
  /* 0062dc91 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062dc93 je 0x62dd51 */ if (ZF_) goto L_0062dd51;
  /* 0062dc99 mov dword ptr [esi + 0x1d0], 0xb */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0xbu); }
  /* 0062dca3 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0062dca5 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0062dca7 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0062dca9 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62dcacu; SAVEALL; call_ind(c, t_); RETCHK(0x62dcacu, 0x62dca9u); LOADALL; }
  /* 0062dcac cmp dword ptr [esp + 0x40], 0 */ { const u32 m_ = (u32)(esp + 0x40u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dcb1 jne 0x62dcc3 */ if (!ZF_) goto L_0062dcc3;
  /* 0062dcb3 lea eax, [edi + 0xd0c] */ eax = (u32)((u32)(edi + 0xd0cu));
  /* 0062dcb9 call 0x5224b0 */ esp -= 4; M32(esp) = 0x62dcbeu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x62dcb9u); RETCHK(0x62dcbeu, 0x62dcb9u); LOADALL;
  /* 0062dcbe jmp 0x62dd51 */ goto L_0062dd51;
L_0062dcc3:;
  /* 0062dcc3 mov eax, dword ptr [esp + 0x44] */ { const u32 m_ = (u32)(esp + 0x44u); eax = (u32)(M32(m_)); }
  /* 0062dcc7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062dcc9 je 0x62dce8 */ if (ZF_) goto L_0062dce8;
  /* 0062dccb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dccc push dword ptr [0x9b9180] */ { const u32 m_ = (u32)(0x9b9180u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062dcd2 push 0x62dd58 */ { u32 v_ = 0x62dd58u; esp -= 4; M32(esp) = v_; }
  /* 0062dcd7 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0062dcd9 lea eax, [esp + 0x10] */ eax = (u32)((u32)(esp + 0x10u));
  /* 0062dcdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dcde call 0x5fe928 */ esp -= 4; M32(esp) = 0x62dce3u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x62dcdeu); RETCHK(0x62dce3u, 0x62dcdeu); LOADALL;
  /* 0062dce3 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062dce6 jmp 0x62dd02 */ goto L_0062dd02;
L_0062dce8:;
  /* 0062dce8 push dword ptr [0x9b9180] */ { const u32 m_ = (u32)(0x9b9180u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062dcee push 0x62dd6c */ { u32 v_ = 0x62dd6cu; esp -= 4; M32(esp) = v_; }
  /* 0062dcf3 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 0062dcf5 lea eax, [esp + 0xc] */ eax = (u32)((u32)(esp + 0xcu));
  /* 0062dcf9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dcfa call 0x5fe928 */ esp -= 4; M32(esp) = 0x62dcffu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x62dcfau); RETCHK(0x62dcffu, 0x62dcfau); LOADALL;
  /* 0062dcff add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062dd02:;
  /* 0062dd02 mov byte ptr [esp + 0x1f], 0 */ { const u32 m_ = (u32)(esp + 0x1fu); M8(m_) = (u8)(0x0u); }
  /* 0062dd07 lea ecx, [esp + 0x20] */ ecx = (u32)((u32)(esp + 0x20u));
  /* 0062dd0b mov dword ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0062dd12 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0062dd19 mov byte ptr [ecx + 4], 0 */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0062dd1d mov eax, esp */ { eax = (u32)(esp); }
  /* 0062dd1f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_0062dd21:;
  /* 0062dd21 cmp byte ptr [eax + edx], 0 */ { const u32 m_ = (u32)(eax + edx); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0062dd25 je 0x62dd2a */ if (ZF_) goto L_0062dd2a;
  /* 0062dd27 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062dd28 jmp 0x62dd21 */ goto L_0062dd21;
L_0062dd2a:;
  /* 0062dd2a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0062dd2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062dd2c lea ecx, [esp + 0x28] */ ecx = (u32)((u32)(esp + 0x28u));
  /* 0062dd30 call 0x404420 */ esp -= 4; M32(esp) = 0x62dd35u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62dd30u); RETCHK(0x62dd35u, 0x62dd30u); LOADALL;
  /* 0062dd35 lea eax, [esp + 0x20] */ eax = (u32)((u32)(esp + 0x20u));
  /* 0062dd39 call 0x5224b0 */ esp -= 4; M32(esp) = 0x62dd3eu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x62dd39u); RETCHK(0x62dd3eu, 0x62dd39u); LOADALL;
  /* 0062dd3e cmp dword ptr [esp + 0x38], 0x10 */ { const u32 m_ = (u32)(esp + 0x38u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dd43 jb 0x62dd51 */ if (CF_) goto L_0062dd51;
  /* 0062dd45 push dword ptr [esp + 0x24] */ { const u32 m_ = (u32)(esp + 0x24u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 0062dd49 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62dd4eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62dd49u); RETCHK(0x62dd4eu, 0x62dd49u); LOADALL;
  /* 0062dd4e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0062dd51:;
  /* 0062dd51 add esp, 0x50 */ { u32 a_ = esp, b_ = 0x50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062dd54 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062dd55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062dd84(CPU *c) {
  NATIVE_HOOK(0x62dd84u) REGS; LOADALL;
L_0062dd84:;
  /* 0062dd84 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062dd85 mov dword ptr [0x9c1054], 0 */ { const u32 m_ = (u32)(0x9c1054u); M32(m_) = (u32)(0x0u); }
  /* 0062dd8f mov esi, dword ptr [0x7a67c8] */ { const u32 m_ = (u32)(0x7a67c8u); esi = (u32)(M32(m_)); }
  /* 0062dd95 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062dd97 je 0x62ddb2 */ if (ZF_) goto L_0062ddb2;
  /* 0062dd99 cmp dword ptr [esi], 0x6427e8 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x6427e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dd9f jne 0x62ddb2 */ if (!ZF_) goto L_0062ddb2;
  /* 0062dda1 mov ecx, dword ptr [esi + 0x190] */ { const u32 m_ = (u32)(esi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0062dda7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062dda9 je 0x62ddb2 */ if (ZF_) goto L_0062ddb2;
  /* 0062ddab push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0062ddad mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0062ddaf call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62ddb2u; SAVEALL; call_ind(c, t_); RETCHK(0x62ddb2u, 0x62ddafu); LOADALL; }
L_0062ddb2:;
  /* 0062ddb2 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062ddb3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062dde4(CPU *c) {
  NATIVE_HOOK(0x62dde4u) REGS; LOADALL;
L_0062dde4:;
  /* 0062dde4 mov dword ptr [0x9c1054], 1 */ { const u32 m_ = (u32)(0x9c1054u); M32(m_) = (u32)(0x1u); }
  /* 0062ddee mov dword ptr [0x9c106c], 0 */ { const u32 m_ = (u32)(0x9c106cu); M32(m_) = (u32)(0x0u); }
  /* 0062ddf8 call 0x508540 */ esp -= 4; M32(esp) = 0x62ddfdu; SAVEALL; F_00508540(c); ABI_CHECK(0x508540u, 0x62ddf8u); RETCHK(0x62ddfdu, 0x62ddf8u); LOADALL;
  /* 0062ddfd pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 0062ddfe cmp dword ptr [0x9c1054], 1 */ { const u32 m_ = (u32)(0x9c1054u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062de05 jne 0x62de18 */ if (!ZF_) goto L_0062de18;
  /* 0062de07 mov ecx, dword ptr [edi + 0x190] */ { const u32 m_ = (u32)(edi + 0x190u); ecx = (u32)(M32(m_)); }
  /* 0062de0d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062de0f je 0x62de18 */ if (ZF_) goto L_0062de18;
  /* 0062de11 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0062de13 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0062de15 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x62de18u; SAVEALL; call_ind(c, t_); RETCHK(0x62de18u, 0x62de15u); LOADALL; }
L_0062de18:;
  /* 0062de18 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 0062de19 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062dea0(CPU *c) {
  NATIVE_HOOK(0x62dea0u) REGS; LOADALL;
L_0062dea0:;
  /* 0062dea0 mov dword ptr [0x9c107c], 0 */ { const u32 m_ = (u32)(0x9c107cu); M32(m_) = (u32)(0x0u); }
  /* 0062deaa mov eax, dword ptr [0x7a6c78] */ { const u32 m_ = (u32)(0x7a6c78u); eax = (u32)(M32(m_)); }
  /* 0062deaf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062deb0(CPU *c) {
  NATIVE_HOOK(0x62deb0u) REGS; LOADALL;
  goto L_0062deb0;
L_004e0e10:;
  /* 004e0e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004e0e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004e0e13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004e0e15 push 0x628906 */ { u32 v_ = 0x628906u; esp -= 4; M32(esp) = v_; }
  /* 004e0e1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004e0e20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e0e21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004e0e28 sub esp, 0x190 */ { u32 a_ = esp, b_ = 0x190u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e0e2e mov al, byte ptr [0x7a6c64] */ { const u32 m_ = (u32)(0x7a6c64u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e0e33 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e0e34 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e0e35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e0e36 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004e0e38 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0e3a je 0x4e1153 */ if (ZF_) goto L_004e1153;
  /* 004e0e40 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 004e0e45 cmp dword ptr [eax + 8], edi */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e0e48 je 0x4e1153 */ if (ZF_) goto L_004e1153;
  /* 004e0e4e mov byte ptr [0x7a6c64], 1 */ { const u32 m_ = (u32)(0x7a6c64u); M8(m_) = (u8)(0x1u); }
  /* 004e0e55 call 0x550820 */ esp -= 4; M32(esp) = 0x4e0e5au; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x4e0e55u); RETCHK(0x4e0e5au, 0x4e0e55u); LOADALL;
  /* 004e0e5a fild dword ptr [eax + 0xc4] */ { const u32 m_ = (u32)(eax + 0xc4u); FPUSH((double)(s32)M32(m_)); }
  /* 004e0e60 fcomp qword ptr [0x6571f8] */ { const u32 m_ = (u32)(0x6571f8u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 004e0e66 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e0e68 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0e6b jp 0x4e115f */ if (PF_) goto L_004e115f;
  /* 004e0e71 fld dword ptr [0x68a6a8] */ { const u32 m_ = (u32)(0x68a6a8u); FPUSH((double)MF32(m_)); }
  /* 004e0e77 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e0e7a fst dword ptr [0x68a6a8] */ { const u32 m_ = (u32)(0x68a6a8u); MF32(m_) = (float)ST(0); }
  /* 004e0e80 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e0e86 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e0e88 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0e8b jp 0x4e0ef1 */ if (PF_) goto L_004e0ef1;
  /* 004e0e8d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e0e8e mov byte ptr [0x7a6c64], 0 */ { const u32 m_ = (u32)(0x7a6c64u); M8(m_) = (u8)(0x0u); }
  /* 004e0e95 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4e0e9au; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4e0e95u); RETCHK(0x4e0e9au, 0x4e0e95u); LOADALL;
  /* 004e0e9a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e0e9d push 0x1ea */ { u32 v_ = 0x1eau; esp -= 4; M32(esp) = v_; }
  /* 004e0ea2 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 004e0ea7 mov esi, eax */ { esi = (u32)(eax); }
  /* 004e0ea9 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4e0eafu; SAVEALL; call_ind(c, t_); RETCHK(0x4e0eafu, 0x4e0ea9u); LOADALL; }
  /* 004e0eaf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e0eb0 lea ecx, [ebp - 0x19c] */ ecx = (u32)((u32)(ebp + 0xfffffe64u));
  /* 004e0eb6 call 0x403060 */ esp -= 4; M32(esp) = 0x4e0ebbu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x4e0eb6u); RETCHK(0x4e0ebbu, 0x4e0eb6u); LOADALL;
  /* 004e0ebb lea ecx, [ebp - 0x19c] */ ecx = (u32)((u32)(ebp + 0xfffffe64u));
  /* 004e0ec1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e0ec2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e0ec3 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 004e0ec8 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004e0ecb call 0x402940 */ esp -= 4; M32(esp) = 0x4e0ed0u; SAVEALL; F_00402940(c); ABI_CHECK(0x402940u, 0x4e0ecbu); RETCHK(0x4e0ed0u, 0x4e0ecbu); LOADALL;
  /* 004e0ed0 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004e0ed7 cmp dword ptr [ebp - 0x184], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffe7cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e0ede jb 0x4e0eef */ if (CF_) goto L_004e0eef;
  /* 004e0ee0 mov edx, dword ptr [ebp - 0x198] */ { const u32 m_ = (u32)(ebp + 0xfffffe68u); edx = (u32)(M32(m_)); }
  /* 004e0ee6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e0ee7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4e0eecu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4e0ee7u); RETCHK(0x4e0eecu, 0x4e0ee7u); LOADALL;
  /* 004e0eec add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e0eef:;
  /* 004e0eef xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_004e0ef1:;
  /* 004e0ef1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004e0ef4 mov eax, dword ptr [ebx + 0x504] */ { const u32 m_ = (u32)(ebx + 0x504u); eax = (u32)(M32(m_)); }
  /* 004e0efa mov ecx, dword ptr [ebx + 0x510] */ { const u32 m_ = (u32)(ebx + 0x510u); ecx = (u32)(M32(m_)); }
  /* 004e0f00 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 004e0f03 cmp dword ptr [ebx + 0x574], edi */ { const u32 m_ = (u32)(ebx + 0x574u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e0f09 mov dword ptr [ebp - 0xc0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff40u); M32(m_) = (u32)(0x0u); }
  /* 004e0f13 mov dword ptr [ebp - 0xbc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffff44u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e0f1d mov dword ptr [ebp - 0xb8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(0x0u); }
  /* 004e0f27 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 004e0f2a je 0x4e0f38 */ if (ZF_) goto L_004e0f38;
  /* 004e0f2c fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004e0f2f fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e0f35 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e0f38:;
  /* 004e0f38 call 0x4fb430 */ esp -= 4; M32(esp) = 0x4e0f3du; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x4e0f38u); RETCHK(0x4e0f3du, 0x4e0f38u); LOADALL;
  /* 004e0f3d mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e0f40 mov dword ptr [ebp - 0x88], eax */ { const u32 m_ = (u32)(ebp + 0xffffff78u); M32(m_) = (u32)(eax); }
  /* 004e0f46 mov eax, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004e0f4c mov dword ptr [eax + 0x2c], 0x40666666 */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(0x40666666u); }
  /* 004e0f53 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004e0f56 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e0f57 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e0f58 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004e0f5b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004e0f5d call 0x4e56c0 */ esp -= 4; M32(esp) = 0x4e0f62u; SAVEALL; F_004e56c0(c); ABI_CHECK(0x4e56c0u, 0x4e0f5du); RETCHK(0x4e0f62u, 0x4e0f5du); LOADALL;
  /* 004e0f62 cmp dword ptr [ebx + 0x10], edi */ { const u32 m_ = (u32)(ebx + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e0f65 je 0x4e0f71 */ if (ZF_) goto L_004e0f71;
  /* 004e0f67 mov al, byte ptr [ebx + 0x588] */ { const u32 m_ = (u32)(ebx + 0x588u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e0f6d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0f6f je 0x4e0f83 */ if (ZF_) goto L_004e0f83;
L_004e0f71:;
  /* 004e0f71 mov dword ptr [ebx + 0x564], edi */ { const u32 m_ = (u32)(ebx + 0x564u); M32(m_) = (u32)(edi); }
  /* 004e0f77 mov dword ptr [ebx + 0x568], edi */ { const u32 m_ = (u32)(ebx + 0x568u); M32(m_) = (u32)(edi); }
  /* 004e0f7d mov dword ptr [ebx + 0x56c], edi */ { const u32 m_ = (u32)(ebx + 0x56cu); M32(m_) = (u32)(edi); }
L_004e0f83:;
  /* 004e0f83 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004e0f86 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e0f87 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e0f88 call 0x4e85f0 */ esp -= 4; M32(esp) = 0x4e0f8du; SAVEALL; F_004e85f0(c); ABI_CHECK(0x4e85f0u, 0x4e0f88u); RETCHK(0x4e0f8du, 0x4e0f88u); LOADALL;
  /* 004e0f8d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004e0f8f call 0x4e0d30 */ esp -= 4; M32(esp) = 0x4e0f94u; SAVEALL; F_004e0d30(c); ABI_CHECK(0x4e0d30u, 0x4e0f8fu); RETCHK(0x4e0f94u, 0x4e0f8fu); LOADALL;
  /* 004e0f94 fld dword ptr [0x9b8b3c] */ { const u32 m_ = (u32)(0x9b8b3cu); FPUSH((double)MF32(m_)); }
  /* 004e0f9a fadd dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e0f9d mov ecx, dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 004e0fa3 mov byte ptr [ebx + 0xbc], al */ { const u32 m_ = (u32)(ebx + 0xbcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004e0fa9 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004e0fab fstp dword ptr [0x9b8b3c] */ { const u32 m_ = (u32)(0x9b8b3cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e0fb1 call 0x402360 */ esp -= 4; M32(esp) = 0x4e0fb6u; SAVEALL; F_00402360(c); ABI_CHECK(0x402360u, 0x4e0fb1u); RETCHK(0x4e0fb6u, 0x4e0fb1u); LOADALL;
  /* 004e0fb6 mov esi, eax */ { esi = (u32)(eax); }
  /* 004e0fb8 test byte ptr [ebx + 0x568], 0x40 */ { const u32 m_ = (u32)(ebx + 0x568u); u32 a_ = M8(m_), b_ = 0x40u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0fbf je 0x4e103a */ if (ZF_) goto L_004e103a;
  /* 004e0fc1 mov al, byte ptr [ebx + 0xb5] */ { const u32 m_ = (u32)(ebx + 0xb5u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e0fc7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0fc9 je 0x4e103a */ if (ZF_) goto L_004e103a;
  /* 004e0fcb mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004e0fcd call 0x4024f0 */ esp -= 4; M32(esp) = 0x4e0fd2u; SAVEALL; F_004024f0(c); ABI_CHECK(0x4024f0u, 0x4e0fcdu); RETCHK(0x4e0fd2u, 0x4e0fcdu); LOADALL;
  /* 004e0fd2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0fd4 je 0x4e103a */ if (ZF_) goto L_004e103a;
  /* 004e0fd6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004e0fd9 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e0fdb je 0x4e103a */ if (ZF_) goto L_004e103a;
  /* 004e0fdd mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e0fe0 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e0fe2 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004e0fe5 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e0fe8 jb 0x4e103a */ if (CF_) goto L_004e103a;
  /* 004e0fea mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e0ff0 mov cl, byte ptr [eax + 0xd211] */ { const u32 m_ = (u32)(eax + 0xd211u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e0ff6 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e0ff8 jne 0x4e103a */ if (!ZF_) goto L_004e103a;
  /* 004e0ffa mov byte ptr [eax + 0xd211], 1 */ { const u32 m_ = (u32)(eax + 0xd211u); M8(m_) = (u8)(0x1u); }
  /* 004e1001 mov eax, dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); eax = (u32)(M32(m_)); }
  /* 004e1007 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004e1009 mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 004e100c mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 004e100f lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004e1012 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 004e1015 mov eax, dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); eax = (u32)(M32(m_)); }
  /* 004e101b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e101c mov edx, 0xc */ { edx = (u32)(0xcu); }
  /* 004e1021 mov dword ptr [ebp - 0x28], 0x10000078 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x10000078u); }
  /* 004e1028 call 0x401000 */ esp -= 4; M32(esp) = 0x4e102du; SAVEALL; F_00401000(c); ABI_CHECK(0x401000u, 0x4e1028u); RETCHK(0x4e102du, 0x4e1028u); LOADALL;
  /* 004e102d mov byte ptr [ebx + 0xb5], 0 */ { const u32 m_ = (u32)(ebx + 0xb5u); M8(m_) = (u8)(0x0u); }
  /* 004e1034 mov dword ptr [ebx + 0xb8], edi */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(edi); }
L_004e103a:;
  /* 004e103a mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e103f test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1041 mov byte ptr [ebp + 0x1b], 0 */ { const u32 m_ = (u32)(ebp + 0x1bu); M8(m_) = (u8)(0x0u); }
  /* 004e1045 je 0x4e1079 */ if (ZF_) goto L_004e1079;
  /* 004e1047 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e104d cmp dword ptr [eax + 0xbd00], 1 */ { const u32 m_ = (u32)(eax + 0xbd00u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1054 sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 004e1057 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1059 mov byte ptr [ebp + 0x1b], cl */ { const u32 m_ = (u32)(ebp + 0x1bu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004e105c je 0x4e1079 */ if (ZF_) goto L_004e1079;
  /* 004e105e mov ecx, dword ptr [ebx + 0x568] */ { const u32 m_ = (u32)(ebx + 0x568u); ecx = (u32)(M32(m_)); }
  /* 004e1064 test cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1067 jne 0x4e106e */ if (!ZF_) goto L_004e106e;
  /* 004e1069 test ch, 4 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e106c je 0x4e1079 */ if (ZF_) goto L_004e1079;
L_004e106e:;
  /* 004e106e lea esi, [eax + 0xbcf0] */ esi = (u32)((u32)(eax + 0xbcf0u));
  /* 004e1074 call 0x4d6350 */ esp -= 4; M32(esp) = 0x4e1079u; SAVEALL; F_004d6350(c); ABI_CHECK(0x4d6350u, 0x4e1074u); RETCHK(0x4e1079u, 0x4e1074u); LOADALL;
L_004e1079:;
  /* 004e1079 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e107e xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004e1080 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1082 je 0x4e10f1 */ if (ZF_) goto L_004e10f1;
  /* 004e1084 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e108a mov dl, byte ptr [eax + 0xbd04] */ { const u32 m_ = (u32)(eax + 0xbd04u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1090 add eax, 0xbcf0 */ { u32 a_ = eax, b_ = 0xbcf0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e1095 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1097 je 0x4e10f1 */ if (ZF_) goto L_004e10f1;
  /* 004e1099 mov byte ptr [eax + 0x14], cl */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004e109c mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e10a2 mov ecx, dword ptr [eax + 0xbd08] */ { const u32 m_ = (u32)(eax + 0xbd08u); ecx = (u32)(M32(m_)); }
  /* 004e10a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e10a9 add eax, 0xbd10 */ { u32 a_ = eax, b_ = 0xbd10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e10ae push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e10b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e10b1 mov eax, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); eax = (u32)(M32(m_)); }
  /* 004e10b7 call 0x4f5f10 */ esp -= 4; M32(esp) = 0x4e10bcu; SAVEALL; F_004f5f10(c); ABI_CHECK(0x4f5f10u, 0x4e10b7u); RETCHK(0x4e10bcu, 0x4e10b7u); LOADALL;
  /* 004e10bc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e10be push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e10bf mov esi, 0x13 */ { esi = (u32)(0x13u); }
  /* 004e10c4 mov dword ptr [0x9be2c4], eax */ { const u32 m_ = (u32)(0x9be2c4u); M32(m_) = (u32)(eax); }
  /* 004e10c9 mov dword ptr [0x9b8b3c], 0 */ { const u32 m_ = (u32)(0x9b8b3cu); M32(m_) = (u32)(0x0u); }
  /* 004e10d3 mov dword ptr [ebx + 0x9c], 1 */ { const u32 m_ = (u32)(ebx + 0x9cu); M32(m_) = (u32)(0x1u); }
  /* 004e10dd mov byte ptr [ebx + 0xb5], 0 */ { const u32 m_ = (u32)(ebx + 0xb5u); M8(m_) = (u8)(0x0u); }
  /* 004e10e4 mov dword ptr [ebx + 0xb8], edi */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(edi); }
  /* 004e10ea call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e10efu; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e10eau); RETCHK(0x4e10efu, 0x4e10eau); LOADALL;
  /* 004e10ef mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_004e10f1:;
  /* 004e10f1 mov eax, dword ptr [ebx + 0x568] */ { const u32 m_ = (u32)(ebx + 0x568u); eax = (u32)(M32(m_)); }
  /* 004e10f7 test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e10fa je 0x4e1106 */ if (ZF_) goto L_004e1106;
  /* 004e10fc mov dl, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1102 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1104 jne 0x4e110e */ if (!ZF_) goto L_004e110e;
L_004e1106:;
  /* 004e1106 test al, 0x20 */ { u32 a_ = (eax & 0xffu), b_ = 0x20u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1108 je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
L_004e110e:;
  /* 004e110e fld dword ptr [0x9b8b3c] */ { const u32 m_ = (u32)(0x9b8b3cu); FPUSH((double)MF32(m_)); }
  /* 004e1114 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e111a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e111c test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e111f jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
  /* 004e1125 mov al, byte ptr [ebp + 0x1b] */ { const u32 m_ = (u32)(ebp + 0x1bu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1128 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e112a jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
  /* 004e1130 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1132 jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
  /* 004e1138 mov eax, dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); eax = (u32)(M32(m_)); }
  /* 004e113e mov esi, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004e1144 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1146 mov ecx, dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); ecx = (u32)(M32(m_)); }
  /* 004e114c jne 0x4e116e */ if (!ZF_) goto L_004e116e;
  /* 004e114e mov dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edi); }
  /* 004e1151 jmp 0x4e1177 */ goto L_004e1177;
L_004e1153:;
  /* 004e1153 mov byte ptr [0x7a6c64], 0 */ { const u32 m_ = (u32)(0x7a6c64u); M8(m_) = (u8)(0x0u); }
  /* 004e115a jmp 0x4e0ef1 */ goto L_004e0ef1;
L_004e115f:;
  /* 004e115f mov dword ptr [0x68a6a8], 0x41a00000 */ { const u32 m_ = (u32)(0x68a6a8u); M32(m_) = (u32)(0x41a00000u); }
  /* 004e1169 jmp 0x4e0ef1 */ goto L_004e0ef1;
L_004e116e:;
  /* 004e116e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e116f call 0x55ead0 */ esp -= 4; M32(esp) = 0x4e1174u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4e116fu); RETCHK(0x4e1174u, 0x4e116fu); LOADALL;
  /* 004e1174 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
L_004e1177:;
  /* 004e1177 mov al, byte ptr [ebx + 0x5e8] */ { const u32 m_ = (u32)(ebx + 0x5e8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e117d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e117f je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
  /* 004e1185 mov al, byte ptr [ebx + 0xb5] */ { const u32 m_ = (u32)(ebx + 0xb5u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e118b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e118d je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
  /* 004e1193 cmp dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1196 je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
  /* 004e119c cmp dword ptr [ebx + 0x9c], edi */ { const u32 m_ = (u32)(ebx + 0x9cu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e11a2 jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
  /* 004e11a8 mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004e11ab cmp eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e11ae je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
  /* 004e11b4 cmp eax, 0x13 */ { u32 a_ = eax, b_ = 0x13u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e11b7 je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
  /* 004e11bd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e11be call 0x4019a0 */ esp -= 4; M32(esp) = 0x4e11c3u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4e11beu); RETCHK(0x4e11c3u, 0x4e11beu); LOADALL;
  /* 004e11c3 mov esi, eax */ { esi = (u32)(eax); }
  /* 004e11c5 mov eax, dword ptr [ebx + 0x568] */ { const u32 m_ = (u32)(ebx + 0x568u); eax = (u32)(M32(m_)); }
  /* 004e11cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e11ce test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e11d1 mov dword ptr [ebp - 0x68], esi */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(esi); }
  /* 004e11d4 je 0x4e11e8 */ if (ZF_) goto L_004e11e8;
  /* 004e11d6 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e11db test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e11dd je 0x4e11e8 */ if (ZF_) goto L_004e11e8;
  /* 004e11df mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004e11e1 call 0x402400 */ esp -= 4; M32(esp) = 0x4e11e6u; SAVEALL; F_00402400(c); ABI_CHECK(0x402400u, 0x4e11e1u); RETCHK(0x4e11e6u, 0x4e11e1u); LOADALL;
  /* 004e11e6 jmp 0x4e11ef */ goto L_004e11ef;
L_004e11e8:;
  /* 004e11e8 mov edx, esi */ { edx = (u32)(esi); }
  /* 004e11ea call 0x4023d0 */ esp -= 4; M32(esp) = 0x4e11efu; SAVEALL; F_004023d0(c); ABI_CHECK(0x4023d0u, 0x4e11eau); RETCHK(0x4e11efu, 0x4e11eau); LOADALL;
L_004e11ef:;
  /* 004e11ef mov edi, eax */ { edi = (u32)(eax); }
  /* 004e11f1 cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e11f4 mov dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(edi); }
  /* 004e11f7 je 0x4e19f2 */ if (ZF_) goto L_004e19f2;
  /* 004e11fd mov eax, esi */ { eax = (u32)(esi); }
  /* 004e11ff call 0x401020 */ esp -= 4; M32(esp) = 0x4e1204u; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x4e11ffu); RETCHK(0x4e1204u, 0x4e11ffu); LOADALL;
  /* 004e1204 mov ecx, dword ptr [ebx + 0x568] */ { const u32 m_ = (u32)(ebx + 0x568u); ecx = (u32)(M32(m_)); }
  /* 004e120a test ch, 4 */ { u32 a_ = ((ecx >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e120d mov eax, dword ptr [eax + 0x74] */ { const u32 m_ = (u32)(eax + 0x74u); eax = (u32)(M32(m_)); }
  /* 004e1210 je 0x4e1226 */ if (ZF_) goto L_004e1226;
  /* 004e1212 mov cl, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1218 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e121a je 0x4e1226 */ if (ZF_) goto L_004e1226;
  /* 004e121c mov eax, esi */ { eax = (u32)(esi); }
  /* 004e121e call 0x401020 */ esp -= 4; M32(esp) = 0x4e1223u; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x4e121eu); RETCHK(0x4e1223u, 0x4e121eu); LOADALL;
  /* 004e1223 mov eax, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); eax = (u32)(M32(m_)); }
L_004e1226:;
  /* 004e1226 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1228 je 0x4e122f */ if (ZF_) goto L_004e122f;
  /* 004e122a mov edi, eax */ { edi = (u32)(eax); }
  /* 004e122c mov dword ptr [ebp + 0x18], edi */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(edi); }
L_004e122f:;
  /* 004e122f cmp edi, -1 */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1232 je 0x4e19f2 */ if (ZF_) goto L_004e19f2;
  /* 004e1238 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e123a mov eax, 5 */ { eax = (u32)(0x5u); }
  /* 004e123f mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004e1241 call 0x4e5a20 */ esp -= 4; M32(esp) = 0x4e1246u; SAVEALL; F_004e5a20(c); ABI_CHECK(0x4e5a20u, 0x4e1241u); RETCHK(0x4e1246u, 0x4e1241u); LOADALL;
  /* 004e1246 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004e1248 mov ecx, 0x1d */ { ecx = (u32)(0x1du); }
  /* 004e124d lea edi, [ebp - 0x134] */ edi = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1253 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004e1255 mov eax, dword ptr [ebx + 0x568] */ { const u32 m_ = (u32)(ebx + 0x568u); eax = (u32)(M32(m_)); }
  /* 004e125b test ah, 4 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e125e je 0x4e1270 */ if (ZF_) goto L_004e1270;
  /* 004e1260 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1265 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1267 je 0x4e1270 */ if (ZF_) goto L_004e1270;
  /* 004e1269 mov byte ptr [ebp - 0xc4], 1 */ { const u32 m_ = (u32)(ebp + 0xffffff3cu); M8(m_) = (u8)(0x1u); }
L_004e1270:;
  /* 004e1270 mov edx, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); edx = (u32)(M32(m_)); }
  /* 004e1276 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004e1279 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e127c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004e127e mov byte ptr [ebp - 0x120], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffee0u); M8(m_) = (u8)(0x1u); }
  /* 004e1285 mov dword ptr [ebp - 0x11c], edx */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M32(m_) = (u32)(edx); }
  /* 004e128b mov dword ptr [ebp - 0x134], esi */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(esi); }
  /* 004e1291 call 0x4e6010 */ esp -= 4; M32(esp) = 0x4e1296u; SAVEALL; F_004e6010(c); ABI_CHECK(0x4e6010u, 0x4e1291u); RETCHK(0x4e1296u, 0x4e1291u); LOADALL;
  /* 004e1296 mov edx, dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); edx = (u32)(M32(m_)); }
  /* 004e129c mov dword ptr [ebp - 0x128], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed8u); M32(m_) = (u32)(eax); }
  /* 004e12a2 mov eax, dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); eax = (u32)(M32(m_)); }
  /* 004e12a8 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004e12aa lea ecx, [ebx + 0x498] */ ecx = (u32)((u32)(ebx + 0x498u));
  /* 004e12b0 mov dword ptr [ebp - 0x130], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M32(m_) = (u32)(eax); }
  /* 004e12b6 mov dword ptr [ebp - 0x12c], edi */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(edi); }
  /* 004e12bc mov dword ptr [ebp - 0x114], edi */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(edi); }
  /* 004e12c2 mov dword ptr [ebp - 0xcc], edi */ { const u32 m_ = (u32)(ebp + 0xffffff34u); M32(m_) = (u32)(edi); }
  /* 004e12c8 mov dword ptr [ebp - 0x118], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffee8u); M32(m_) = (u32)(ecx); }
  /* 004e12ce mov eax, dword ptr [edx + 0xb30] */ { const u32 m_ = (u32)(edx + 0xb30u); eax = (u32)(M32(m_)); }
  /* 004e12d4 and eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004e12d7 cmp esi, 0x121eac00 */ { u32 a_ = esi, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e12dd mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 004e12e0 jg 0x4e14e4 */ if (!(ZF_|LT_)) goto L_004e14e4;
  /* 004e12e6 je 0x4e1448 */ if (ZF_) goto L_004e1448;
  /* 004e12ec cmp esi, 0x12002780 */ { u32 a_ = esi, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e12f2 je 0x4e1305 */ if (ZF_) goto L_004e1305;
  /* 004e12f4 cmp esi, 0x120f69c0 */ { u32 a_ = esi, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e12fa je 0x4e14fc */ if (ZF_) goto L_004e14fc;
  /* 004e1300 jmp 0x4e13c2 */ goto L_004e13c2;
L_004e1305:;
  /* 004e1305 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e130a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e130c je 0x4e1334 */ if (ZF_) goto L_004e1334;
  /* 004e130e mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e1314 lea edi, [eax + 0xbcd0] */ edi = (u32)((u32)(eax + 0xbcd0u));
  /* 004e131a mov eax, edi */ { eax = (u32)(edi); }
  /* 004e131c call 0x4d8ca0 */ esp -= 4; M32(esp) = 0x4e1321u; SAVEALL; F_004d8ca0(c); ABI_CHECK(0x4d8ca0u, 0x4e131cu); RETCHK(0x4e1321u, 0x4e131cu); LOADALL;
  /* 004e1321 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1323 jne 0x4e13bf */ if (!ZF_) goto L_004e13bf;
  /* 004e1329 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e132a call 0x4d8880 */ esp -= 4; M32(esp) = 0x4e132fu; SAVEALL; F_004d8880(c); ABI_CHECK(0x4d8880u, 0x4e132au); RETCHK(0x4e132fu, 0x4e132au); LOADALL;
  /* 004e132f jmp 0x4e13c2 */ goto L_004e13c2;
L_004e1334:;
  /* 004e1334 mov eax, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); eax = (u32)(M32(m_)); }
  /* 004e133a mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004e133d cmp esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1340 mov dword ptr [ebp + 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004e1347 je 0x4e13bf */ if (ZF_) goto L_004e13bf;
  /* 004e1349 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004e1350:;
  /* 004e1350 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 004e1352 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004e1355 cmp dword ptr [edi + 0x28], eax */ { const u32 m_ = (u32)(edi + 0x28u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1358 jge 0x4e1390 */ if (!LT_) goto L_004e1390;
  /* 004e135a mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004e135d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e135f je 0x4e136f */ if (ZF_) goto L_004e136f;
  /* 004e1361 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004e1364 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004e1367 cmp eax, dword ptr [ecx + 0xb5c] */ { const u32 m_ = (u32)(ecx + 0xb5cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e136d je 0x4e1390 */ if (ZF_) goto L_004e1390;
L_004e136f:;
  /* 004e136f mov eax, edi */ { eax = (u32)(edi); }
  /* 004e1371 call 0x4dfe10 */ esp -= 4; M32(esp) = 0x4e1376u; SAVEALL; F_004dfe10(c); ABI_CHECK(0x4dfe10u, 0x4e1371u); RETCHK(0x4e1376u, 0x4e1371u); LOADALL;
  /* 004e1376 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1378 jne 0x4e1390 */ if (!ZF_) goto L_004e1390;
  /* 004e137a mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004e137d mov edx, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 004e1380 mov dword ptr [ebp + ecx*4 - 0x84], edx */ { const u32 m_ = (u32)(ebp + ecx * 4u + 0xffffff7cu); M32(m_) = (u32)(edx); }
  /* 004e1387 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004e1388 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e138b mov dword ptr [ebp + 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004e138e jae 0x4e13a3 */ if (!CF_) goto L_004e13a3;
L_004e1390:;
  /* 004e1390 mov eax, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); eax = (u32)(M32(m_)); }
  /* 004e1396 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e1399 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004e139c cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e139e jne 0x4e1350 */ if (!ZF_) goto L_004e1350;
  /* 004e13a0 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
L_004e13a3:;
  /* 004e13a3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e13a5 jle 0x4e13bf */ if ((ZF_|LT_)) goto L_004e13bf;
  /* 004e13a7 mov eax, dword ptr [ebp - 0x84] */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); eax = (u32)(M32(m_)); }
  /* 004e13ad dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004e13ae lea esi, [ebp - 0x80] */ esi = (u32)((u32)(ebp + 0xffffff80u));
  /* 004e13b1 lea edi, [ebp - 0x100] */ edi = (u32)((u32)(ebp + 0xffffff00u));
  /* 004e13b7 mov dword ptr [ebp - 0x12c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(eax); }
  /* 004e13bd rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_004e13bf:;
  /* 004e13bf mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
L_004e13c2:;
  /* 004e13c2 cmp esi, 0x12897bc0 */ { u32 a_ = esi, b_ = 0x12897bc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e13c8 mov dword ptr [ebx + 0x9c], 0 */ { const u32 m_ = (u32)(ebx + 0x9cu); M32(m_) = (u32)(0x0u); }
  /* 004e13d2 jg 0x4e16d8 */ if (!(ZF_|LT_)) goto L_004e16d8;
  /* 004e13d8 je 0x4e1416 */ if (ZF_) goto L_004e1416;
  /* 004e13da cmp esi, 0x123d3080 */ { u32 a_ = esi, b_ = 0x123d3080u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e13e0 jg 0x4e16a0 */ if (!(ZF_|LT_)) goto L_004e16a0;
  /* 004e13e6 je 0x4e167e */ if (ZF_) goto L_004e167e;
  /* 004e13ec cmp esi, 0x120f69c0 */ { u32 a_ = esi, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e13f2 jg 0x4e166a */ if (!(ZF_|LT_)) goto L_004e166a;
  /* 004e13f8 je 0x4e18f9 */ if (ZF_) goto L_004e18f9;
  /* 004e13fe cmp esi, 0x11f0e540 */ { u32 a_ = esi, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1404 je 0x4e1719 */ if (ZF_) goto L_004e1719;
  /* 004e140a cmp esi, 0x12002780 */ { u32 a_ = esi, b_ = 0x12002780u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1410 jne 0x4e1982 */ if (!ZF_) goto L_004e1982;
L_004e1416:;
  /* 004e1416 mov eax, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); eax = (u32)(M32(m_)); }
  /* 004e141c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e141e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e1420 lea edx, [ebp - 0x134] */ edx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1426 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e1427 call 0x4f5f10 */ esp -= 4; M32(esp) = 0x4e142cu; SAVEALL; F_004f5f10(c); ABI_CHECK(0x4f5f10u, 0x4e1427u); RETCHK(0x4e142cu, 0x4e1427u); LOADALL;
  /* 004e142c mov edi, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); edi = (u32)(M32(m_)); }
  /* 004e1432 lea ecx, [ebp - 0x134] */ ecx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1438 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1439 mov dword ptr [0x9be2c4], eax */ { const u32 m_ = (u32)(0x9be2c4u); M32(m_) = (u32)(eax); }
  /* 004e143e call 0x4f6140 */ esp -= 4; M32(esp) = 0x4e1443u; SAVEALL; F_004f6140(c); ABI_CHECK(0x4f6140u, 0x4e143eu); RETCHK(0x4e1443u, 0x4e143eu); LOADALL;
  /* 004e1443 jmp 0x4e1967 */ goto L_004e1967;
L_004e1448:;
  /* 004e1448 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e144d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e144f je 0x4e1477 */ if (ZF_) goto L_004e1477;
  /* 004e1451 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e1457 lea edi, [eax + 0xbcd0] */ edi = (u32)((u32)(eax + 0xbcd0u));
  /* 004e145d mov eax, edi */ { eax = (u32)(edi); }
  /* 004e145f call 0x4d8ca0 */ esp -= 4; M32(esp) = 0x4e1464u; SAVEALL; F_004d8ca0(c); ABI_CHECK(0x4d8ca0u, 0x4e145fu); RETCHK(0x4e1464u, 0x4e145fu); LOADALL;
  /* 004e1464 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1466 jne 0x4e13c2 */ if (!ZF_) goto L_004e13c2;
  /* 004e146c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e146d call 0x4d8940 */ esp -= 4; M32(esp) = 0x4e1472u; SAVEALL; F_004d8940(c); ABI_CHECK(0x4d8940u, 0x4e146du); RETCHK(0x4e1472u, 0x4e146du); LOADALL;
  /* 004e1472 jmp 0x4e13c2 */ goto L_004e13c2;
L_004e1477:;
  /* 004e1477 cmp dword ptr [ebx + 0x20], 1 */ { const u32 m_ = (u32)(ebx + 0x20u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e147b jle 0x4e13c2 */ if ((ZF_|LT_)) goto L_004e13c2;
  /* 004e1481 mov eax, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); eax = (u32)(M32(m_)); }
  /* 004e1487 mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 004e148a cmp edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e148d je 0x4e13c2 */ if (ZF_) goto L_004e13c2;
  /* 004e1493 mov ecx, 1 */ { ecx = (u32)(0x1u); }
L_004e1498:;
  /* 004e1498 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004e149a cmp dword ptr [edx + 0x28], ecx */ { const u32 m_ = (u32)(edx + 0x28u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e149d je 0x4e14b4 */ if (ZF_) goto L_004e14b4;
  /* 004e149f mov eax, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); eax = (u32)(M32(m_)); }
  /* 004e14a5 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e14a8 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e14ab cmp edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e14ad jne 0x4e1498 */ if (!ZF_) goto L_004e1498;
  /* 004e14af jmp 0x4e13c2 */ goto L_004e13c2;
L_004e14b4:;
  /* 004e14b4 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004e14b6 call 0x4dfe10 */ esp -= 4; M32(esp) = 0x4e14bbu; SAVEALL; F_004dfe10(c); ABI_CHECK(0x4dfe10u, 0x4e14b6u); RETCHK(0x4e14bbu, 0x4e14b6u); LOADALL;
  /* 004e14bb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e14bd jne 0x4e13c2 */ if (!ZF_) goto L_004e13c2;
  /* 004e14c3 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004e14c5 mov eax, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004e14c8 mov dword ptr [ebp - 0x12c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(eax); }
  /* 004e14ce mov ecx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); ecx = (u32)(M32(m_)); }
  /* 004e14d0 mov edx, dword ptr [ecx + 0x314] */ { const u32 m_ = (u32)(ecx + 0x314u); edx = (u32)(M32(m_)); }
  /* 004e14d6 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e14d9 mov dword ptr [ebp - 0x114], edx */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(edx); }
  /* 004e14df jmp 0x4e13c2 */ goto L_004e13c2;
L_004e14e4:;
  /* 004e14e4 cmp esi, 0x1298be00 */ { u32 a_ = esi, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e14ea je 0x4e15d5 */ if (ZF_) goto L_004e15d5;
  /* 004e14f0 cmp esi, 0x13221240 */ { u32 a_ = esi, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e14f6 jne 0x4e13c2 */ if (!ZF_) goto L_004e13c2;
L_004e14fc:;
  /* 004e14fc mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1501 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1503 je 0x4e1538 */ if (ZF_) goto L_004e1538;
  /* 004e1505 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e150b mov dword ptr [ebp - 0x12c], edi */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(edi); }
  /* 004e1511 lea edi, [eax + 0xbcd0] */ edi = (u32)((u32)(eax + 0xbcd0u));
  /* 004e1517 mov eax, edi */ { eax = (u32)(edi); }
  /* 004e1519 call 0x4d7eb0 */ esp -= 4; M32(esp) = 0x4e151eu; SAVEALL; F_004d7eb0(c); ABI_CHECK(0x4d7eb0u, 0x4e1519u); RETCHK(0x4e151eu, 0x4e1519u); LOADALL;
  /* 004e151e add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e1521 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e1522 mov dword ptr [ebp - 0x114], eax */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(eax); }
  /* 004e1528 call 0x4d7ec0 */ esp -= 4; M32(esp) = 0x4e152du; SAVEALL; F_004d7ec0(c); ABI_CHECK(0x4d7ec0u, 0x4e1528u); RETCHK(0x4e152du, 0x4e1528u); LOADALL;
  /* 004e152d mov dword ptr [ebp - 0xcc], eax */ { const u32 m_ = (u32)(ebp + 0xffffff34u); M32(m_) = (u32)(eax); }
  /* 004e1533 jmp 0x4e13c2 */ goto L_004e13c2;
L_004e1538:;
  /* 004e1538 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004e153b cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e153e jle 0x4e13c2 */ if ((ZF_|LT_)) goto L_004e13c2;
  /* 004e1544 mov eax, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); eax = (u32)(M32(m_)); }
  /* 004e154a mov edi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M32(m_)); }
  /* 004e154d cmp edi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1550 mov dword ptr [ebp + 0x14], 8 */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(0x8u); }
  /* 004e1557 je 0x4e13c2 */ if (ZF_) goto L_004e13c2;
  /* 004e155d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004e1560:;
  /* 004e1560 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004e1563 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1565 je 0x4e1577 */ if (ZF_) goto L_004e1577;
  /* 004e1567 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004e1569 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004e156c mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 004e156f cmp eax, dword ptr [ecx + 0xb5c] */ { const u32 m_ = (u32)(ecx + 0xb5cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1575 je 0x4e15c0 */ if (ZF_) goto L_004e15c0;
L_004e1577:;
  /* 004e1577 mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 004e1579 mov eax, esi */ { eax = (u32)(esi); }
  /* 004e157b call 0x4dfe10 */ esp -= 4; M32(esp) = 0x4e1580u; SAVEALL; F_004dfe10(c); ABI_CHECK(0x4dfe10u, 0x4e157bu); RETCHK(0x4e1580u, 0x4e157bu); LOADALL;
  /* 004e1580 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1582 jne 0x4e15c0 */ if (!ZF_) goto L_004e15c0;
  /* 004e1584 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 004e1587 mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004e158a sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e158c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e158e jle 0x4e15c0 */ if ((ZF_|LT_)) goto L_004e15c0;
  /* 004e1590 cmp eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1593 jge 0x4e15c0 */ if (!LT_) goto L_004e15c0;
  /* 004e1595 mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 004e1598 mov dword ptr [ebp - 0x12c], edx */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(edx); }
  /* 004e159e mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004e15a1 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004e15a3 mov ecx, dword ptr [eax + 0x314] */ { const u32 m_ = (u32)(eax + 0x314u); ecx = (u32)(M32(m_)); }
  /* 004e15a9 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e15ac mov dword ptr [ebp - 0x114], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(ecx); }
  /* 004e15b2 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004e15b4 add edx, 0x104c */ { u32 a_ = edx, b_ = 0x104cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e15ba mov dword ptr [ebp - 0xcc], edx */ { const u32 m_ = (u32)(ebp + 0xffffff34u); M32(m_) = (u32)(edx); }
L_004e15c0:;
  /* 004e15c0 mov eax, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); eax = (u32)(M32(m_)); }
  /* 004e15c6 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e15c9 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e15cc cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e15ce jne 0x4e1560 */ if (!ZF_) goto L_004e1560;
  /* 004e15d0 jmp 0x4e13bf */ goto L_004e13bf;
L_004e15d5:;
  /* 004e15d5 mov ecx, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); ecx = (u32)(M32(m_)); }
  /* 004e15db mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004e15de cmp edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e15e1 mov dword ptr [ebp - 0x58], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0x8u); }
  /* 004e15e8 mov dword ptr [ebp + 0x14], edx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edx); }
  /* 004e15eb je 0x4e13c2 */ if (ZF_) goto L_004e13c2;
  /* 004e15f1 jmp 0x4e15f8 */ goto L_004e15f8;
L_004e15f3:;
  /* 004e15f3 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004e15f6 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_004e15f8:;
  /* 004e15f8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e15fa je 0x4e160c */ if (ZF_) goto L_004e160c;
  /* 004e15fc mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004e15fe mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004e1601 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 004e1604 cmp eax, dword ptr [ecx + 0xb5c] */ { const u32 m_ = (u32)(ecx + 0xb5cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e160a je 0x4e164f */ if (ZF_) goto L_004e164f;
L_004e160c:;
  /* 004e160c mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 004e160f mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 004e1611 mov eax, edi */ { eax = (u32)(edi); }
  /* 004e1613 call 0x4dfe10 */ esp -= 4; M32(esp) = 0x4e1618u; SAVEALL; F_004dfe10(c); ABI_CHECK(0x4dfe10u, 0x4e1613u); RETCHK(0x4e1618u, 0x4e1613u); LOADALL;
  /* 004e1618 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e161a jne 0x4e164f */ if (!ZF_) goto L_004e164f;
  /* 004e161c mov ecx, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 004e161f mov eax, dword ptr [ebx + 0x20] */ { const u32 m_ = (u32)(ebx + 0x20u); eax = (u32)(M32(m_)); }
  /* 004e1622 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e1624 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1626 jle 0x4e164f */ if ((ZF_|LT_)) goto L_004e164f;
  /* 004e1628 cmp eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e162b jge 0x4e164f */ if (!LT_) goto L_004e164f;
  /* 004e162d mov dword ptr [ebp - 0x58], eax */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(eax); }
  /* 004e1630 mov eax, dword ptr [edi + 0x1088] */ { const u32 m_ = (u32)(edi + 0x1088u); eax = (u32)(M32(m_)); }
  /* 004e1636 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1638 jle 0x4e1646 */ if ((ZF_|LT_)) goto L_004e1646;
  /* 004e163a mov dword ptr [ebp - 0x12c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(0x0u); }
  /* 004e1644 jmp 0x4e164f */ goto L_004e164f;
L_004e1646:;
  /* 004e1646 mov eax, dword ptr [edi + 0x2c] */ { const u32 m_ = (u32)(edi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 004e1649 mov dword ptr [ebp - 0x12c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffed4u); M32(m_) = (u32)(eax); }
L_004e164f:;
  /* 004e164f mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 004e1652 mov eax, dword ptr [ebx + 0xac] */ { const u32 m_ = (u32)(ebx + 0xacu); eax = (u32)(M32(m_)); }
  /* 004e1658 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e165b add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e165e cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1660 mov dword ptr [ebp + 0x14], edx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edx); }
  /* 004e1663 jne 0x4e15f3 */ if (!ZF_) goto L_004e15f3;
  /* 004e1665 jmp 0x4e13c2 */ goto L_004e13c2;
L_004e166a:;
  /* 004e166a cmp esi, 0x121eac00 */ { u32 a_ = esi, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1670 je 0x4e167e */ if (ZF_) goto L_004e167e;
  /* 004e1672 cmp esi, 0x122dee40 */ { u32 a_ = esi, b_ = 0x122dee40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1678 jne 0x4e1982 */ if (!ZF_) goto L_004e1982;
L_004e167e:;
  /* 004e167e mov ecx, 0x1d */ { ecx = (u32)(0x1du); }
  /* 004e1683 lea esi, [ebp - 0x134] */ esi = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1689 mov edi, 0x9be250 */ { edi = (u32)(0x9be250u); }
  /* 004e168e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e1690 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e1692 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e1694 lea ecx, [ebp - 0x134] */ ecx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e169a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e169b jmp 0x4e194a */ goto L_004e194a;
L_004e16a0:;
  /* 004e16a0 cmp esi, 0x126af740 */ { u32 a_ = esi, b_ = 0x126af740u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e16a6 jg 0x4e16c7 */ if (!(ZF_|LT_)) goto L_004e16c7;
  /* 004e16a8 je 0x4e1416 */ if (ZF_) goto L_004e1416;
  /* 004e16ae cmp esi, 0x124c72c0 */ { u32 a_ = esi, b_ = 0x124c72c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e16b4 je 0x4e167e */ if (ZF_) goto L_004e167e;
  /* 004e16b6 cmp esi, 0x125bb500 */ { u32 a_ = esi, b_ = 0x125bb500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e16bc je 0x4e1416 */ if (ZF_) goto L_004e1416;
  /* 004e16c2 jmp 0x4e1982 */ goto L_004e1982;
L_004e16c7:;
  /* 004e16c7 cmp esi, 0x127a3980 */ { u32 a_ = esi, b_ = 0x127a3980u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e16cd je 0x4e1416 */ if (ZF_) goto L_004e1416;
  /* 004e16d3 jmp 0x4e1982 */ goto L_004e1982;
L_004e16d8:;
  /* 004e16d8 cmp esi, 0x12d5c700 */ { u32 a_ = esi, b_ = 0x12d5c700u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e16de jg 0x4e1748 */ if (!(ZF_|LT_)) goto L_004e1748;
  /* 004e16e0 je 0x4e1805 */ if (ZF_) goto L_004e1805;
  /* 004e16e6 cmp esi, 0x12b74280 */ { u32 a_ = esi, b_ = 0x12b74280u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e16ec jg 0x4e170d */ if (!(ZF_|LT_)) goto L_004e170d;
  /* 004e16ee je 0x4e1416 */ if (ZF_) goto L_004e1416;
  /* 004e16f4 cmp esi, 0x1298be00 */ { u32 a_ = esi, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e16fa je 0x4e167e */ if (ZF_) goto L_004e167e;
  /* 004e16fc cmp esi, 0x12a80040 */ { u32 a_ = esi, b_ = 0x12a80040u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1702 je 0x4e1416 */ if (ZF_) goto L_004e1416;
  /* 004e1708 jmp 0x4e1982 */ goto L_004e1982;
L_004e170d:;
  /* 004e170d cmp esi, 0x12c684c0 */ { u32 a_ = esi, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1713 jne 0x4e1982 */ if (!ZF_) goto L_004e1982;
L_004e1719:;
  /* 004e1719 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e171e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1720 mov ecx, 0x1d */ { ecx = (u32)(0x1du); }
  /* 004e1725 lea esi, [ebp - 0x134] */ esi = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e172b mov edi, 0x9be250 */ { edi = (u32)(0x9be250u); }
  /* 004e1730 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e1732 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e1734 je 0x4e1941 */ if (ZF_) goto L_004e1941;
  /* 004e173a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e173c lea edx, [ebp - 0x134] */ edx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1742 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e1743 jmp 0x4e194a */ goto L_004e194a;
L_004e1748:;
  /* 004e1748 cmp esi, 0x1312d000 */ { u32 a_ = esi, b_ = 0x1312d000u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e174e jg 0x4e18ed */ if (!(ZF_|LT_)) goto L_004e18ed;
  /* 004e1754 je 0x4e1874 */ if (ZF_) goto L_004e1874;
  /* 004e175a cmp esi, 0x12e50940 */ { u32 a_ = esi, b_ = 0x12e50940u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1760 je 0x4e1805 */ if (ZF_) goto L_004e1805;
  /* 004e1766 cmp esi, 0x13038dc0 */ { u32 a_ = esi, b_ = 0x13038dc0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e176c jne 0x4e1982 */ if (!ZF_) goto L_004e1982;
  /* 004e1772 mov eax, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); eax = (u32)(M32(m_)); }
  /* 004e1778 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e177a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e177c lea ecx, [ebp - 0x134] */ ecx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1782 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1783 call 0x4f5f10 */ esp -= 4; M32(esp) = 0x4e1788u; SAVEALL; F_004f5f10(c); ABI_CHECK(0x4f5f10u, 0x4e1783u); RETCHK(0x4e1788u, 0x4e1783u); LOADALL;
  /* 004e1788 mov edi, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); edi = (u32)(M32(m_)); }
  /* 004e178e lea edx, [ebp - 0x134] */ edx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1794 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e1795 mov dword ptr [0x9be2c4], eax */ { const u32 m_ = (u32)(0x9be2c4u); M32(m_) = (u32)(eax); }
  /* 004e179a call 0x4f6140 */ esp -= 4; M32(esp) = 0x4e179fu; SAVEALL; F_004f6140(c); ABI_CHECK(0x4f6140u, 0x4e179au); RETCHK(0x4e179fu, 0x4e179au); LOADALL;
  /* 004e179f mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e17a4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e17a6 mov dword ptr [0x9b8b3c], 0 */ { const u32 m_ = (u32)(0x9b8b3cu); M32(m_) = (u32)(0x0u); }
  /* 004e17b0 mov byte ptr [ebx + 0xb5], 0 */ { const u32 m_ = (u32)(ebx + 0xb5u); M8(m_) = (u8)(0x0u); }
  /* 004e17b7 mov dword ptr [ebx + 0xb8], 0 */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(0x0u); }
  /* 004e17c1 je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
  /* 004e17c7 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e17cd lea esi, [eax + 0xbcd0] */ esi = (u32)((u32)(eax + 0xbcd0u));
  /* 004e17d3 mov eax, esi */ { eax = (u32)(esi); }
  /* 004e17d5 call 0x4d8ca0 */ esp -= 4; M32(esp) = 0x4e17dau; SAVEALL; F_004d8ca0(c); ABI_CHECK(0x4d8ca0u, 0x4e17d5u); RETCHK(0x4e17dau, 0x4e17d5u); LOADALL;
  /* 004e17da test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e17dc jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
  /* 004e17e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e17e3 call 0x4d85a0 */ esp -= 4; M32(esp) = 0x4e17e8u; SAVEALL; F_004d85a0(c); ABI_CHECK(0x4d85a0u, 0x4e17e3u); RETCHK(0x4e17e8u, 0x4e17e3u); LOADALL;
  /* 004e17e8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e17ea jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
  /* 004e17f0 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e17f6 mov dword ptr [eax + 0xcd40], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0xcd40u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e1800 jmp 0x4e1a09 */ goto L_004e1a09;
L_004e1805:;
  /* 004e1805 mov ecx, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ecx = (u32)(M32(m_)); }
  /* 004e1808 call 0x402400 */ esp -= 4; M32(esp) = 0x4e180du; SAVEALL; F_00402400(c); ABI_CHECK(0x402400u, 0x4e1808u); RETCHK(0x4e180du, 0x4e1808u); LOADALL;
  /* 004e180d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1810 jne 0x4e1827 */ if (!ZF_) goto L_004e1827;
  /* 004e1812 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e1818 mov dword ptr [eax + 0xd1d0], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0xd1d0u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e1822 jmp 0x4e1982 */ goto L_004e1982;
L_004e1827:;
  /* 004e1827 mov eax, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); eax = (u32)(M32(m_)); }
  /* 004e182d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e182f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e1831 lea ecx, [ebp - 0x134] */ ecx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1837 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1838 call 0x4f5f10 */ esp -= 4; M32(esp) = 0x4e183du; SAVEALL; F_004f5f10(c); ABI_CHECK(0x4f5f10u, 0x4e1838u); RETCHK(0x4e183du, 0x4e1838u); LOADALL;
  /* 004e183d mov edi, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); edi = (u32)(M32(m_)); }
  /* 004e1843 lea edx, [ebp - 0x134] */ edx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1849 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e184a mov dword ptr [0x9be2c4], eax */ { const u32 m_ = (u32)(0x9be2c4u); M32(m_) = (u32)(eax); }
  /* 004e184f call 0x4f6140 */ esp -= 4; M32(esp) = 0x4e1854u; SAVEALL; F_004f6140(c); ABI_CHECK(0x4f6140u, 0x4e184fu); RETCHK(0x4e1854u, 0x4e184fu); LOADALL;
  /* 004e1854 mov ecx, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); ecx = (u32)(M32(m_)); }
  /* 004e185a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004e185c mov byte ptr [ebx + 0xb5], 0 */ { const u32 m_ = (u32)(ebx + 0xb5u); M8(m_) = (u8)(0x0u); }
  /* 004e1863 mov dword ptr [ebx + 0xb8], eax */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(eax); }
  /* 004e1869 mov dword ptr [ecx + 0xd1d0], eax */ { const u32 m_ = (u32)(ecx + 0xd1d0u); M32(m_) = (u32)(eax); }
  /* 004e186f jmp 0x4e1978 */ goto L_004e1978;
L_004e1874:;
  /* 004e1874 mov eax, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); eax = (u32)(M32(m_)); }
  /* 004e187a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e187c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e187e lea edx, [ebp - 0x134] */ edx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1884 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e1885 call 0x4f5f10 */ esp -= 4; M32(esp) = 0x4e188au; SAVEALL; F_004f5f10(c); ABI_CHECK(0x4f5f10u, 0x4e1885u); RETCHK(0x4e188au, 0x4e1885u); LOADALL;
  /* 004e188a mov edi, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); edi = (u32)(M32(m_)); }
  /* 004e1890 lea ecx, [ebp - 0x134] */ ecx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1896 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1897 mov dword ptr [0x9be2c4], eax */ { const u32 m_ = (u32)(0x9be2c4u); M32(m_) = (u32)(eax); }
  /* 004e189c call 0x4f6140 */ esp -= 4; M32(esp) = 0x4e18a1u; SAVEALL; F_004f6140(c); ABI_CHECK(0x4f6140u, 0x4e189cu); RETCHK(0x4e18a1u, 0x4e189cu); LOADALL;
  /* 004e18a1 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e18a6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e18a8 mov dword ptr [0x9b8b3c], 0 */ { const u32 m_ = (u32)(0x9b8b3cu); M32(m_) = (u32)(0x0u); }
  /* 004e18b2 mov byte ptr [ebx + 0xb5], 0 */ { const u32 m_ = (u32)(ebx + 0xb5u); M8(m_) = (u8)(0x0u); }
  /* 004e18b9 mov dword ptr [ebx + 0xb8], 0 */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(0x0u); }
  /* 004e18c3 je 0x4e1a09 */ if (ZF_) goto L_004e1a09;
  /* 004e18c9 mov eax, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); eax = (u32)(M32(m_)); }
  /* 004e18cf add eax, 0xbcd0 */ { u32 a_ = eax, b_ = 0xbcd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e18d4 mov dword ptr [eax + 0x174], 0x41700000 */ { const u32 m_ = (u32)(eax + 0x174u); M32(m_) = (u32)(0x41700000u); }
  /* 004e18de call 0x4d90c0 */ esp -= 4; M32(esp) = 0x4e18e3u; SAVEALL; F_004d90c0(c); ABI_CHECK(0x4d90c0u, 0x4e18deu); RETCHK(0x4e18e3u, 0x4e18deu); LOADALL;
  /* 004e18e3 call 0x4d87f0 */ esp -= 4; M32(esp) = 0x4e18e8u; SAVEALL; F_004d87f0(c); ABI_CHECK(0x4d87f0u, 0x4e18e3u); RETCHK(0x4e18e8u, 0x4e18e3u); LOADALL;
  /* 004e18e8 jmp 0x4e1a09 */ goto L_004e1a09;
L_004e18ed:;
  /* 004e18ed cmp esi, 0x13221240 */ { u32 a_ = esi, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e18f3 jne 0x4e1982 */ if (!ZF_) goto L_004e1982;
L_004e18f9:;
  /* 004e18f9 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e18fe test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1900 mov ecx, 0x1d */ { ecx = (u32)(0x1du); }
  /* 004e1905 lea esi, [ebp - 0x134] */ esi = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e190b mov edi, 0x9be250 */ { edi = (u32)(0x9be250u); }
  /* 004e1910 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e1912 je 0x4e193f */ if (ZF_) goto L_004e193f;
  /* 004e1914 mov edi, dword ptr [ebx + 0x5cc] */ { const u32 m_ = (u32)(ebx + 0x5ccu); edi = (u32)(M32(m_)); }
  /* 004e191a mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004e191d lea edx, [edi + 0xbcd0] */ edx = (u32)((u32)(edi + 0xbcd0u));
  /* 004e1923 call 0x4d8210 */ esp -= 4; M32(esp) = 0x4e1928u; SAVEALL; F_004d8210(c); ABI_CHECK(0x4d8210u, 0x4e1923u); RETCHK(0x4e1928u, 0x4e1923u); LOADALL;
  /* 004e1928 lea edx, [ebp - 0x134] */ edx = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e192e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e192f add edi, 0xbcf0 */ { u32 a_ = edi, b_ = 0xbcf0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e1935 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e1936 mov edx, eax */ { edx = (u32)(eax); }
  /* 004e1938 call 0x4d6240 */ esp -= 4; M32(esp) = 0x4e193du; SAVEALL; F_004d6240(c); ABI_CHECK(0x4d6240u, 0x4e1938u); RETCHK(0x4e193du, 0x4e1938u); LOADALL;
  /* 004e193d jmp 0x4e1982 */ goto L_004e1982;
L_004e193f:;
  /* 004e193f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
L_004e1941:;
  /* 004e1941 lea eax, [ebp - 0x134] */ eax = (u32)((u32)(ebp + 0xfffffeccu));
  /* 004e1947 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e1949 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_004e194a:;
  /* 004e194a mov eax, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); eax = (u32)(M32(m_)); }
  /* 004e1950 call 0x4f5f10 */ esp -= 4; M32(esp) = 0x4e1955u; SAVEALL; F_004f5f10(c); ABI_CHECK(0x4f5f10u, 0x4e1950u); RETCHK(0x4e1955u, 0x4e1950u); LOADALL;
  /* 004e1955 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004e1958 mov dword ptr [0x9be2c4], eax */ { const u32 m_ = (u32)(0x9be2c4u); M32(m_) = (u32)(eax); }
  /* 004e195d mov dword ptr [ebx + 0x9c], 1 */ { const u32 m_ = (u32)(ebx + 0x9cu); M32(m_) = (u32)(0x1u); }
L_004e1967:;
  /* 004e1967 mov byte ptr [ebx + 0xb5], 0 */ { const u32 m_ = (u32)(ebx + 0xb5u); M8(m_) = (u8)(0x0u); }
  /* 004e196e mov dword ptr [ebx + 0xb8], 0 */ { const u32 m_ = (u32)(ebx + 0xb8u); M32(m_) = (u32)(0x0u); }
L_004e1978:;
  /* 004e1978 mov dword ptr [0x9b8b3c], 0 */ { const u32 m_ = (u32)(0x9b8b3cu); M32(m_) = (u32)(0x0u); }
L_004e1982:;
  /* 004e1982 cmp esi, 0x123d3080 */ { u32 a_ = esi, b_ = 0x123d3080u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1988 jg 0x4e19be */ if (!(ZF_|LT_)) goto L_004e19be;
  /* 004e198a je 0x4e19b7 */ if (ZF_) goto L_004e19b7;
  /* 004e198c cmp esi, 0x121eac00 */ { u32 a_ = esi, b_ = 0x121eac00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1992 jg 0x4e19af */ if (!(ZF_|LT_)) goto L_004e19af;
  /* 004e1994 je 0x4e19a8 */ if (ZF_) goto L_004e19a8;
  /* 004e1996 cmp esi, 0x11f0e540 */ { u32 a_ = esi, b_ = 0x11f0e540u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e199c je 0x4e19eb */ if (ZF_) goto L_004e19eb;
  /* 004e199e cmp esi, 0x120f69c0 */ { u32 a_ = esi, b_ = 0x120f69c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e19a4 je 0x4e19e2 */ if (ZF_) goto L_004e19e2;
  /* 004e19a6 jmp 0x4e1a09 */ goto L_004e1a09;
L_004e19a8:;
  /* 004e19a8 mov esi, 0x15 */ { esi = (u32)(0x15u); }
  /* 004e19ad jmp 0x4e1a01 */ goto L_004e1a01;
L_004e19af:;
  /* 004e19af cmp esi, 0x122dee40 */ { u32 a_ = esi, b_ = 0x122dee40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e19b5 jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
L_004e19b7:;
  /* 004e19b7 mov esi, 0x14 */ { esi = (u32)(0x14u); }
  /* 004e19bc jmp 0x4e1a01 */ goto L_004e1a01;
L_004e19be:;
  /* 004e19be cmp esi, 0x12c684c0 */ { u32 a_ = esi, b_ = 0x12c684c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e19c4 jg 0x4e19da */ if (!(ZF_|LT_)) goto L_004e19da;
  /* 004e19c6 je 0x4e19eb */ if (ZF_) goto L_004e19eb;
  /* 004e19c8 cmp esi, 0x124c72c0 */ { u32 a_ = esi, b_ = 0x124c72c0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e19ce je 0x4e19b7 */ if (ZF_) goto L_004e19b7;
  /* 004e19d0 cmp esi, 0x1298be00 */ { u32 a_ = esi, b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e19d6 je 0x4e19eb */ if (ZF_) goto L_004e19eb;
  /* 004e19d8 jmp 0x4e1a09 */ goto L_004e1a09;
L_004e19da:;
  /* 004e19da cmp esi, 0x13221240 */ { u32 a_ = esi, b_ = 0x13221240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e19e0 jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
L_004e19e2:;
  /* 004e19e2 mov al, byte ptr [0x7a6c11] */ { const u32 m_ = (u32)(0x7a6c11u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e19e7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e19e9 jne 0x4e1a09 */ if (!ZF_) goto L_004e1a09;
L_004e19eb:;
  /* 004e19eb mov esi, 0x13 */ { esi = (u32)(0x13u); }
  /* 004e19f0 jmp 0x4e1a01 */ goto L_004e1a01;
L_004e19f2:;
  /* 004e19f2 mov eax, dword ptr [ebx + 0x9c] */ { const u32 m_ = (u32)(ebx + 0x9cu); eax = (u32)(M32(m_)); }
  /* 004e19f8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e19fa jne 0x4e1a17 */ if (!ZF_) goto L_004e1a17;
  /* 004e19fc mov esi, 0x16 */ { esi = (u32)(0x16u); }
L_004e1a01:;
  /* 004e1a01 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e1a03 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e1a04 call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e1a09u; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e1a04u); RETCHK(0x4e1a09u, 0x4e1a04u); LOADALL;
L_004e1a09:;
  /* 004e1a09 mov eax, dword ptr [ebx + 0x9c] */ { const u32 m_ = (u32)(ebx + 0x9cu); eax = (u32)(M32(m_)); }
  /* 004e1a0f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1a11 je 0x4e1b45 */ if (ZF_) goto L_004e1b45;
L_004e1a17:;
  /* 004e1a17 mov eax, dword ptr [0x9be2c4] */ { const u32 m_ = (u32)(0x9be2c4u); eax = (u32)(M32(m_)); }
  /* 004e1a1c cmp dword ptr [eax + 0x40], 0x1298be00 */ { const u32 m_ = (u32)(eax + 0x40u); u32 a_ = M32(m_), b_ = 0x1298be00u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1a23 jne 0x4e1a36 */ if (!ZF_) goto L_004e1a36;
  /* 004e1a25 cmp dword ptr [eax + 0x3c], 1 */ { const u32 m_ = (u32)(eax + 0x3cu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1a29 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 004e1a2c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1a2e je 0x4e1b45 */ if (ZF_) goto L_004e1b45;
  /* 004e1a34 jmp 0x4e1ab2 */ goto L_004e1ab2;
L_004e1a36:;
  /* 004e1a36 mov ecx, dword ptr [ebx + 0x560] */ { const u32 m_ = (u32)(ebx + 0x560u); ecx = (u32)(M32(m_)); }
  /* 004e1a3c mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e1a3f mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e1a42 lea esi, [eax + 8] */ esi = (u32)((u32)(eax + 0x8u));
  /* 004e1a45 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004e1a47 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4e1a4au; SAVEALL; call_ind(c, t_); RETCHK(0x4e1a4au, 0x4e1a47u); LOADALL; }
  /* 004e1a4a fst dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); MF32(m_) = (float)ST(0); }
  /* 004e1a4d fcomp qword ptr [0x656e68] */ { const u32 m_ = (u32)(0x656e68u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 004e1a53 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1a55 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1a58 jne 0x4e1a66 */ if (!ZF_) goto L_004e1a66;
  /* 004e1a5a mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 004e1a5c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004e1a5e call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4e1a61u; SAVEALL; call_ind(c, t_); RETCHK(0x4e1a61u, 0x4e1a5eu); LOADALL; }
  /* 004e1a61 fdiv dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e1a64 jmp 0x4e1a6c */ goto L_004e1a6c;
L_004e1a66:;
  /* 004e1a66 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_004e1a6c:;
  /* 004e1a6c mov eax, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); eax = (u32)(M32(m_)); }
  /* 004e1a6f sub eax, 0x13 */ { u32 a_ = eax, b_ = 0x13u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e1a72 je 0x4e1a9e */ if (ZF_) goto L_004e1a9e;
  /* 004e1a74 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004e1a75 je 0x4e1a8c */ if (ZF_) goto L_004e1a8c;
  /* 004e1a77 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004e1a78 jne 0x4e1ab0 */ if (!ZF_) goto L_004e1ab0;
  /* 004e1a7a fcomp dword ptr [0x6571f4] */ { const u32 m_ = (u32)(0x6571f4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1a80 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1a82 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1a85 je 0x4e1ab2 */ if (ZF_) goto L_004e1ab2;
  /* 004e1a87 jmp 0x4e1b45 */ goto L_004e1b45;
L_004e1a8c:;
  /* 004e1a8c fcomp dword ptr [0x6571f0] */ { const u32 m_ = (u32)(0x6571f0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1a92 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1a94 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1a97 je 0x4e1ab2 */ if (ZF_) goto L_004e1ab2;
  /* 004e1a99 jmp 0x4e1b45 */ goto L_004e1b45;
L_004e1a9e:;
  /* 004e1a9e fcomp dword ptr [0x6571ec] */ { const u32 m_ = (u32)(0x6571ecu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1aa4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1aa6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1aa9 je 0x4e1ab2 */ if (ZF_) goto L_004e1ab2;
  /* 004e1aab jmp 0x4e1b45 */ goto L_004e1b45;
L_004e1ab0:;
  /* 004e1ab0 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e1ab2:;
  /* 004e1ab2 mov ecx, dword ptr [0x9be258] */ { const u32 m_ = (u32)(0x9be258u); ecx = (u32)(M32(m_)); }
  /* 004e1ab8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1aba je 0x4e1ae7 */ if (ZF_) goto L_004e1ae7;
  /* 004e1abc mov eax, dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); eax = (u32)(M32(m_)); }
  /* 004e1ac2 mov esi, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004e1ac8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1aca je 0x4e1ad6 */ if (ZF_) goto L_004e1ad6;
  /* 004e1acc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1acd call 0x55ead0 */ esp -= 4; M32(esp) = 0x4e1ad2u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4e1acdu); RETCHK(0x4e1ad2u, 0x4e1acdu); LOADALL;
  /* 004e1ad2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1ad4 jne 0x4e1ae7 */ if (!ZF_) goto L_004e1ae7;
L_004e1ad6:;
  /* 004e1ad6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004e1ad8 mov dword ptr [0x9be258], eax */ { const u32 m_ = (u32)(0x9be258u); M32(m_) = (u32)(eax); }
  /* 004e1add mov dword ptr [0x9be270], eax */ { const u32 m_ = (u32)(0x9be270u); M32(m_) = (u32)(eax); }
  /* 004e1ae2 mov dword ptr [0x9be274], eax */ { const u32 m_ = (u32)(0x9be274u); M32(m_) = (u32)(eax); }
L_004e1ae7:;
  /* 004e1ae7 mov edi, 0x9be290 */ { edi = (u32)(0x9be290u); }
  /* 004e1aec lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004e1af0:;
  /* 004e1af0 mov eax, dword ptr [edi - 4] */ { const u32 m_ = (u32)(edi + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004e1af3 sub edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e1af6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1af8 je 0x4e1b1e */ if (ZF_) goto L_004e1b1e;
  /* 004e1afa mov ecx, dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); ecx = (u32)(M32(m_)); }
  /* 004e1b00 mov esi, dword ptr [ecx + 0xc38] */ { const u32 m_ = (u32)(ecx + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004e1b06 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1b08 je 0x4e1b14 */ if (ZF_) goto L_004e1b14;
  /* 004e1b0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e1b0b call 0x55ead0 */ esp -= 4; M32(esp) = 0x4e1b10u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4e1b0bu); RETCHK(0x4e1b10u, 0x4e1b0bu); LOADALL;
  /* 004e1b10 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1b12 jne 0x4e1b1e */ if (!ZF_) goto L_004e1b1e;
L_004e1b14:;
  /* 004e1b14 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004e1b16 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 004e1b18 mov dword ptr [edi + 0xc], eax */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(eax); }
  /* 004e1b1b mov dword ptr [edi + 0x18], eax */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(eax); }
L_004e1b1e:;
  /* 004e1b1e cmp edi, 0x9be284 */ { u32 a_ = edi, b_ = 0x9be284u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1b24 jg 0x4e1af0 */ if (!(ZF_|LT_)) goto L_004e1af0;
  /* 004e1b26 mov eax, dword ptr [0x9be2c4] */ { const u32 m_ = (u32)(0x9be2c4u); eax = (u32)(M32(m_)); }
  /* 004e1b2b mov edi, dword ptr [ebx + 0xa0] */ { const u32 m_ = (u32)(ebx + 0xa0u); edi = (u32)(M32(m_)); }
  /* 004e1b31 push 0x9be250 */ { u32 v_ = 0x9be250u; esp -= 4; M32(esp) = v_; }
  /* 004e1b36 mov dword ptr [ebx + 0x9c], 0 */ { const u32 m_ = (u32)(ebx + 0x9cu); M32(m_) = (u32)(0x0u); }
  /* 004e1b40 call 0x4f6140 */ esp -= 4; M32(esp) = 0x4e1b45u; SAVEALL; F_004f6140(c); ABI_CHECK(0x4f6140u, 0x4e1b40u); RETCHK(0x4e1b45u, 0x4e1b40u); LOADALL;
L_004e1b45:;
  /* 004e1b45 fld dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); FPUSH((double)MF32(m_)); }
  /* 004e1b4b lea esi, [ebx + 0x498] */ esi = (u32)((u32)(ebx + 0x498u));
  /* 004e1b51 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 004e1b53 mov eax, dword ptr [0x63f6b0] */ { const u32 m_ = (u32)(0x63f6b0u); eax = (u32)(M32(m_)); }
  /* 004e1b58 fld dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); FPUSH((double)MF32(m_)); }
  /* 004e1b5e mov ecx, dword ptr [0x63f6a8] */ { const u32 m_ = (u32)(0x63f6a8u); ecx = (u32)(M32(m_)); }
  /* 004e1b64 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e1b66 mov edx, dword ptr [0x63f6ac] */ { const u32 m_ = (u32)(0x63f6acu); edx = (u32)(M32(m_)); }
  /* 004e1b6c fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e1b6e mov dword ptr [ebp - 0xa8], eax */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M32(m_) = (u32)(eax); }
  /* 004e1b74 mov dword ptr [ebp - 0xb0], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(ecx); }
  /* 004e1b7a mov dword ptr [ebp - 0xac], edx */ { const u32 m_ = (u32)(ebp + 0xffffff54u); M32(m_) = (u32)(edx); }
  /* 004e1b80 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e1b82 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e1b84 mov dword ptr [ebp + 0x18], esi */ { const u32 m_ = (u32)(ebp + 0x18u); M32(m_) = (u32)(esi); }
  /* 004e1b87 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e1b89 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e1b8b fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e1b8d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e1b8f fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1b95 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1b97 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1b99 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1b9b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1b9e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1ba0 jne 0x4e1bb4 */ if (!ZF_) goto L_004e1bb4;
  /* 004e1ba2 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 004e1ba8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e1ba9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1baa call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e1bafu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e1baau); RETCHK(0x4e1bafu, 0x4e1baau); LOADALL;
  /* 004e1baf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1bb1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e1bb4:;
  /* 004e1bb4 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e1bba fld dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); FPUSH((double)MF32(m_)); }
  /* 004e1bc0 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1bc3 fld dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); FPUSH((double)MF32(m_)); }
  /* 004e1bc9 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1bcb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e1bcd fld dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); FPUSH((double)MF32(m_)); }
  /* 004e1bd3 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1bd6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e1bd8 fst dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); }
  /* 004e1bdb fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1be1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1be3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1be6 jne 0x4e1bf1 */ if (!ZF_) goto L_004e1bf1;
  /* 004e1be8 mov dword ptr [ebp + 0x10], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e1bef jmp 0x4e1c08 */ goto L_004e1c08;
L_004e1bf1:;
  /* 004e1bf1 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004e1bf4 fcomp dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1bfa fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1bfc test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1bff jp 0x4e1c08 */ if (PF_) goto L_004e1c08;
  /* 004e1c01 mov dword ptr [ebp + 0x10], 0xbf800000 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0xbf800000u); }
L_004e1c08:;
  /* 004e1c08 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004e1c0b call 0x5fedb6 */ { ST(0) = m_acos(ST(0)); }
  /* 004e1c10 fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e1c13 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e1c14 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e1c19u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e1c14u); RETCHK(0x4e1c19u, 0x4e1c14u); LOADALL;
  /* 004e1c19 fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004e1c1c fcomp dword ptr [0x656ef4] */ { const u32 m_ = (u32)(0x656ef4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1c22 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e1c25 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1c27 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1c2a jne 0x4e1c40 */ if (!ZF_) goto L_004e1c40;
  /* 004e1c2c fcomp dword ptr [0x656ea8] */ { const u32 m_ = (u32)(0x656ea8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1c32 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1c34 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1c37 jne 0x4e1c42 */ if (!ZF_) goto L_004e1c42;
  /* 004e1c39 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004e1c3e jmp 0x4e1c44 */ goto L_004e1c44;
L_004e1c40:;
  /* 004e1c40 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e1c42:;
  /* 004e1c42 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004e1c44:;
  /* 004e1c44 test byte ptr [ebx + 0x564], 0x10 */ { const u32 m_ = (u32)(ebx + 0x564u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1c4b mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 004e1c4e je 0x4e1e32 */ if (ZF_) goto L_004e1e32;
  /* 004e1c54 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004e1c56 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1c58 je 0x4e1e32 */ if (ZF_) goto L_004e1e32;
  /* 004e1c5e fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004e1c64 mov eax, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004e1c6a fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
  /* 004e1c6d mov dword ptr [eax + 0x2c], 0x3f800000 */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(0x3f800000u); }
  /* 004e1c74 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 004e1c76 fmul dword ptr [0x7a7f18] */ { const u32 m_ = (u32)(0x7a7f18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1c7c fld dword ptr [ebx + 0x514] */ { const u32 m_ = (u32)(ebx + 0x514u); FPUSH((double)MF32(m_)); }
  /* 004e1c82 fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1c88 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004e1c8a fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 004e1c8c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1c8e test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1c91 jp 0x4e1c9b */ if (PF_) goto L_004e1c9b;
  /* 004e1c93 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1c95 fld dword ptr [0x656e94] */ { const u32 m_ = (u32)(0x656e94u); FPUSH((double)MF32(m_)); }
L_004e1c9b:;
  /* 004e1c9b cmp dword ptr [ebx + 0x574], edx */ { const u32 m_ = (u32)(ebx + 0x574u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1ca1 jne 0x4e1ce7 */ if (!ZF_) goto L_004e1ce7;
  /* 004e1ca3 fmul dword ptr [ebx + 0x514] */ { const u32 m_ = (u32)(ebx + 0x514u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1ca9 mov eax, dword ptr [0x68a6a4] */ { const u32 m_ = (u32)(0x68a6a4u); eax = (u32)(M32(m_)); }
  /* 004e1cae cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1cb0 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e1cb3 je 0x4e1ce9 */ if (ZF_) goto L_004e1ce9;
  /* 004e1cb5 mov eax, dword ptr [ebx + 0x564] */ { const u32 m_ = (u32)(ebx + 0x564u); eax = (u32)(M32(m_)); }
  /* 004e1cbb test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1cbd je 0x4e1cd1 */ if (ZF_) goto L_004e1cd1;
  /* 004e1cbf mov dword ptr [0x9b8b40], 4 */ { const u32 m_ = (u32)(0x9b8b40u); M32(m_) = (u32)(0x4u); }
  /* 004e1cc9 mov dword ptr [0x68a6a4], edx */ { const u32 m_ = (u32)(0x68a6a4u); M32(m_) = (u32)(edx); }
  /* 004e1ccf jmp 0x4e1ce9 */ goto L_004e1ce9;
L_004e1cd1:;
  /* 004e1cd1 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1cd3 je 0x4e1ce9 */ if (ZF_) goto L_004e1ce9;
  /* 004e1cd5 mov dword ptr [0x9b8b40], 8 */ { const u32 m_ = (u32)(0x9b8b40u); M32(m_) = (u32)(0x8u); }
  /* 004e1cdf mov dword ptr [0x68a6a4], edx */ { const u32 m_ = (u32)(0x68a6a4u); M32(m_) = (u32)(edx); }
  /* 004e1ce5 jmp 0x4e1ce9 */ goto L_004e1ce9;
L_004e1ce7:;
  /* 004e1ce7 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e1ce9:;
  /* 004e1ce9 mov al, byte ptr [ebx + 0x2f0] */ { const u32 m_ = (u32)(ebx + 0x2f0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1cef test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1cf1 je 0x4e1ded */ if (ZF_) goto L_004e1ded;
  /* 004e1cf7 mov al, byte ptr [ebx + 0x1d8] */ { const u32 m_ = (u32)(ebx + 0x1d8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e1cfd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1cff je 0x4e1d4a */ if (ZF_) goto L_004e1d4a;
  /* 004e1d01 mov eax, dword ptr [ebx + 0x2dc] */ { const u32 m_ = (u32)(ebx + 0x2dcu); eax = (u32)(M32(m_)); }
  /* 004e1d07 mov ecx, dword ptr [ebx + eax*4 + 0x1dc] */ { const u32 m_ = (u32)(ebx + eax * 4u + 0x1dcu); ecx = (u32)(M32(m_)); }
  /* 004e1d0e cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1d10 je 0x4e1e39 */ if (ZF_) goto L_004e1e39;
  /* 004e1d16 fld dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); FPUSH((double)MF32(m_)); }
  /* 004e1d1c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1d22 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1d24 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1d27 jp 0x4e1ddc */ if (PF_) goto L_004e1ddc;
  /* 004e1d2d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004e1d2f call 0x54ad80 */ esp -= 4; M32(esp) = 0x4e1d34u; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4e1d2fu); RETCHK(0x4e1d34u, 0x4e1d2fu); LOADALL;
L_004e1d34:;
  /* 004e1d34 mov byte ptr [ebx + 0x1d0], 1 */ { const u32 m_ = (u32)(ebx + 0x1d0u); M8(m_) = (u8)(0x1u); }
  /* 004e1d3b mov dword ptr [ebx + 0x1d4], 0x3ca3d70a */ { const u32 m_ = (u32)(ebx + 0x1d4u); M32(m_) = (u32)(0x3ca3d70au); }
  /* 004e1d45 jmp 0x4e1e39 */ goto L_004e1e39;
L_004e1d4a:;
  /* 004e1d4a fld dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); FPUSH((double)MF32(m_)); }
  /* 004e1d50 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1d56 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1d58 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1d5b jp 0x4e1ddc */ if (PF_) goto L_004e1ddc;
  /* 004e1d5d mov ecx, dword ptr [ebx + 0x544] */ { const u32 m_ = (u32)(ebx + 0x544u); ecx = (u32)(M32(m_)); }
  /* 004e1d63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1d64 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e1d69u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e1d64u); RETCHK(0x4e1d69u, 0x4e1d64u); LOADALL;
  /* 004e1d69 mov edi, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edi = (u32)(M32(m_)); }
  /* 004e1d6f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e1d72 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e1d75 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e1d76 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e1d77 mov edx, 0x7d3 */ { edx = (u32)(0x7d3u); }
  /* 004e1d7c call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4e1d81u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4e1d7cu); RETCHK(0x4e1d81u, 0x4e1d7cu); LOADALL;
  /* 004e1d81 mov edx, dword ptr [ebx + 0x548] */ { const u32 m_ = (u32)(ebx + 0x548u); edx = (u32)(M32(m_)); }
  /* 004e1d87 mov esi, eax */ { esi = (u32)(eax); }
  /* 004e1d89 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e1d8a mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 004e1d8d call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e1d92u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e1d8du); RETCHK(0x4e1d92u, 0x4e1d8du); LOADALL;
  /* 004e1d92 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e1d95 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e1d98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e1d99 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e1d9a mov edx, 0x7d3 */ { edx = (u32)(0x7d3u); }
  /* 004e1d9f call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4e1da4u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4e1d9fu); RETCHK(0x4e1da4u, 0x4e1d9fu); LOADALL;
  /* 004e1da4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1da6 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004e1da9 je 0x4e1db2 */ if (ZF_) goto L_004e1db2;
  /* 004e1dab mov dword ptr [esi + 0x34], 1 */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(0x1u); }
L_004e1db2:;
  /* 004e1db2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e1db4 je 0x4e1dbd */ if (ZF_) goto L_004e1dbd;
  /* 004e1db6 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_004e1dbd:;
  /* 004e1dbd lea esi, [ebx + 0x2e0] */ esi = (u32)((u32)(ebx + 0x2e0u));
  /* 004e1dc3 lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 004e1dc6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004e1dc8 call 0x52ac10 */ esp -= 4; M32(esp) = 0x4e1dcdu; SAVEALL; F_0052ac10(c); ABI_CHECK(0x52ac10u, 0x4e1dc8u); RETCHK(0x4e1dcdu, 0x4e1dc8u); LOADALL;
  /* 004e1dcd lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 004e1dd0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004e1dd2 call 0x52ac10 */ esp -= 4; M32(esp) = 0x4e1dd7u; SAVEALL; F_0052ac10(c); ABI_CHECK(0x52ac10u, 0x4e1dd2u); RETCHK(0x4e1dd7u, 0x4e1dd2u); LOADALL;
  /* 004e1dd7 jmp 0x4e1d34 */ goto L_004e1d34;
L_004e1ddc:;
  /* 004e1ddc fld dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); FPUSH((double)MF32(m_)); }
  /* 004e1de2 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e1de5 fstp dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e1deb jmp 0x4e1e39 */ goto L_004e1e39;
L_004e1ded:;
  /* 004e1ded fld dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); FPUSH((double)MF32(m_)); }
  /* 004e1df3 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1df9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1dfb test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1dfe jp 0x4e1e1a */ if (PF_) goto L_004e1e1a;
  /* 004e1e00 mov byte ptr [ebx + 0x1d0], 1 */ { const u32 m_ = (u32)(ebx + 0x1d0u); M8(m_) = (u8)(0x1u); }
  /* 004e1e07 mov dword ptr [ebx + 0x1d4], 0x3ca3d70a */ { const u32 m_ = (u32)(ebx + 0x1d4u); M32(m_) = (u32)(0x3ca3d70au); }
  /* 004e1e11 mov byte ptr [ebx + 0x2f1], 1 */ { const u32 m_ = (u32)(ebx + 0x2f1u); M8(m_) = (u8)(0x1u); }
  /* 004e1e18 jmp 0x4e1e39 */ goto L_004e1e39;
L_004e1e1a:;
  /* 004e1e1a fld dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); FPUSH((double)MF32(m_)); }
  /* 004e1e20 mov byte ptr [ebx + 0x2f1], 1 */ { const u32 m_ = (u32)(ebx + 0x2f1u); M8(m_) = (u8)(0x1u); }
  /* 004e1e27 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e1e2a fstp dword ptr [ebx + 0x1d4] */ { const u32 m_ = (u32)(ebx + 0x1d4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e1e30 jmp 0x4e1e39 */ goto L_004e1e39;
L_004e1e32:;
  /* 004e1e32 mov byte ptr [ebx + 0x2f1], 0 */ { const u32 m_ = (u32)(ebx + 0x2f1u); M8(m_) = (u8)(0x0u); }
L_004e1e39:;
  /* 004e1e39 mov eax, dword ptr [ebx + 0x564] */ { const u32 m_ = (u32)(ebx + 0x564u); eax = (u32)(M32(m_)); }
  /* 004e1e3f test al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1e41 je 0x4e1ec1 */ if (ZF_) goto L_004e1ec1;
  /* 004e1e43 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e1e45 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e1e46 mov esi, 4 */ { esi = (u32)(0x4u); }
  /* 004e1e4b call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e1e50u; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e1e4bu); RETCHK(0x4e1e50u, 0x4e1e4bu); LOADALL;
  /* 004e1e50 fld dword ptr [0x9b8b44] */ { const u32 m_ = (u32)(0x9b8b44u); FPUSH((double)MF32(m_)); }
  /* 004e1e56 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1e5c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1e5e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1e61 jne 0x4e1e6f */ if (!ZF_) goto L_004e1e6f;
  /* 004e1e63 cmp dword ptr [0x9b8b40], esi */ { const u32 m_ = (u32)(0x9b8b40u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1e69 jne 0x4e1f6d */ if (!ZF_) goto L_004e1f6d;
L_004e1e6f:;
  /* 004e1e6f mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e1e72 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e1e73 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e1e78u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e1e73u); RETCHK(0x4e1e78u, 0x4e1e73u); LOADALL;
  /* 004e1e78 fcom dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e1e7e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e1e81 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1e83 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1e86 jp 0x4e1e96 */ if (PF_) goto L_004e1e96;
  /* 004e1e88 fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1e8b fmul dword ptr [0x656dac] */ { const u32 m_ = (u32)(0x656dacu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1e91 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e1e94 jmp 0x4e1e98 */ goto L_004e1e98;
L_004e1e96:;
  /* 004e1e96 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e1e98:;
  /* 004e1e98 mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 004e1e9b mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e1e9d mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004e1ea0 call 0x4e5f60 */ esp -= 4; M32(esp) = 0x4e1ea5u; SAVEALL; F_004e5f60(c); ABI_CHECK(0x4e5f60u, 0x4e1ea0u); RETCHK(0x4e1ea5u, 0x4e1ea0u); LOADALL;
  /* 004e1ea5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1ea7 je 0x4e1f3c */ if (ZF_) goto L_004e1f3c;
  /* 004e1ead test byte ptr [ebx + 0x564], 0x10 */ { const u32 m_ = (u32)(ebx + 0x564u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1eb4 jne 0x4e1f3c */ if (!ZF_) goto L_004e1f3c;
  /* 004e1eba fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004e1ebd fchs */ ST(0) = -ST(0);
  /* 004e1ebf jmp 0x4e1f3f */ goto L_004e1f3f;
L_004e1ec1:;
  /* 004e1ec1 test al, 8 */ { u32 a_ = (eax & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1ec3 je 0x4e1f6d */ if (ZF_) goto L_004e1f6d;
  /* 004e1ec9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e1ecb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e1ecc mov esi, 7 */ { esi = (u32)(0x7u); }
  /* 004e1ed1 call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e1ed6u; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e1ed1u); RETCHK(0x4e1ed6u, 0x4e1ed1u); LOADALL;
  /* 004e1ed6 fld dword ptr [0x9b8b44] */ { const u32 m_ = (u32)(0x9b8b44u); FPUSH((double)MF32(m_)); }
  /* 004e1edc fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1ee2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1ee4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1ee7 jne 0x4e1ef2 */ if (!ZF_) goto L_004e1ef2;
  /* 004e1ee9 cmp dword ptr [0x9b8b40], 8 */ { const u32 m_ = (u32)(0x9b8b40u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e1ef0 jne 0x4e1f6d */ if (!ZF_) goto L_004e1f6d;
L_004e1ef2:;
  /* 004e1ef2 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e1ef5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e1ef6 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e1efbu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e1ef6u); RETCHK(0x4e1efbu, 0x4e1ef6u); LOADALL;
  /* 004e1efb fcom dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e1f01 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e1f04 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1f06 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1f09 jp 0x4e1f19 */ if (PF_) goto L_004e1f19;
  /* 004e1f0b fmul dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1f0e fmul dword ptr [0x656dac] */ { const u32 m_ = (u32)(0x656dacu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1f14 fstp dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e1f17 jmp 0x4e1f1b */ goto L_004e1f1b;
L_004e1f19:;
  /* 004e1f19 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e1f1b:;
  /* 004e1f1b mov ecx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); ecx = (u32)(M32(m_)); }
  /* 004e1f1e mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e1f20 mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004e1f23 call 0x4e5f60 */ esp -= 4; M32(esp) = 0x4e1f28u; SAVEALL; F_004e5f60(c); ABI_CHECK(0x4e5f60u, 0x4e1f23u); RETCHK(0x4e1f28u, 0x4e1f23u); LOADALL;
  /* 004e1f28 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1f2a je 0x4e1f35 */ if (ZF_) goto L_004e1f35;
  /* 004e1f2c test byte ptr [ebx + 0x564], 0x10 */ { const u32 m_ = (u32)(ebx + 0x564u); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1f33 je 0x4e1f3c */ if (ZF_) goto L_004e1f3c;
L_004e1f35:;
  /* 004e1f35 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004e1f38 fchs */ ST(0) = -ST(0);
  /* 004e1f3a jmp 0x4e1f3f */ goto L_004e1f3f;
L_004e1f3c:;
  /* 004e1f3c fld dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); FPUSH((double)MF32(m_)); }
L_004e1f3f:;
  /* 004e1f3f fld dword ptr [ebx + 0x4bc] */ { const u32 m_ = (u32)(ebx + 0x4bcu); FPUSH((double)MF32(m_)); }
  /* 004e1f45 mov esi, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); esi = (u32)(M32(m_)); }
  /* 004e1f4b fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 004e1f4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e1f4e fdiv dword ptr [ebx + 0x4b8] */ { const u32 m_ = (u32)(ebx + 0x4b8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e1f54 lea edx, [ebp - 0xc0] */ edx = (u32)((u32)(ebp + 0xffffff40u));
  /* 004e1f5a fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e1f5c fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e1f5f fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e1f62 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e1f63 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1f65 call 0x5466b0 */ esp -= 4; M32(esp) = 0x4e1f6au; SAVEALL; F_005466b0(c); ABI_CHECK(0x5466b0u, 0x4e1f65u); RETCHK(0x4e1f6au, 0x4e1f65u); LOADALL;
  /* 004e1f6a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e1f6d:;
  /* 004e1f6d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004e1f70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e1f71 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004e1f73 call 0x4e0800 */ esp -= 4; M32(esp) = 0x4e1f78u; SAVEALL; F_004e0800(c); ABI_CHECK(0x4e0800u, 0x4e1f73u); RETCHK(0x4e1f78u, 0x4e1f73u); LOADALL;
  /* 004e1f78 test byte ptr [ebx + 0x564], 1 */ { const u32 m_ = (u32)(ebx + 0x564u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1f7f mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 004e1f86 mov dword ptr [ebp - 0x30], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(0x0u); }
  /* 004e1f8d mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 004e1f94 je 0x4e2152 */ if (ZF_) goto L_004e2152;
  /* 004e1f9a mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004e1f9d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e1f9e call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e1fa3u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e1f9eu); RETCHK(0x4e1fa3u, 0x4e1f9eu); LOADALL;
  /* 004e1fa3 fcomp dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1fa9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e1fac fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1fae test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1fb1 jp 0x4e1fbf */ if (PF_) goto L_004e1fbf;
  /* 004e1fb3 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e1fb5 mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 004e1fba call 0x4e5a20 */ esp -= 4; M32(esp) = 0x4e1fbfu; SAVEALL; F_004e5a20(c); ABI_CHECK(0x4e5a20u, 0x4e1fbau); RETCHK(0x4e1fbfu, 0x4e1fbau); LOADALL;
L_004e1fbf:;
  /* 004e1fbf fld dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); FPUSH((double)MF32(m_)); }
  /* 004e1fc5 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 004e1fc7 fld dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); FPUSH((double)MF32(m_)); }
  /* 004e1fcd fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e1fcf fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e1fd1 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e1fd3 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e1fd5 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e1fd7 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e1fd9 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e1fdb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e1fdd fcomp dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e1fe3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1fe5 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e1fe7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1fe9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e1fec fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e1fee jp 0x4e2059 */ if (PF_) goto L_004e2059;
  /* 004e1ff0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e1ff2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e1ff3 mov esi, 2 */ { esi = (u32)(0x2u); }
  /* 004e1ff8 call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e1ffdu; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e1ff8u); RETCHK(0x4e1ffdu, 0x4e1ff8u); LOADALL;
  /* 004e1ffd mov al, byte ptr [ebx + 0x36a] */ { const u32 m_ = (u32)(ebx + 0x36au); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e2003 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2005 je 0x4e2084 */ if (ZF_) goto L_004e2084;
  /* 004e2007 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e200d mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e2010 mov byte ptr [ebx + 0x368], 1 */ { const u32 m_ = (u32)(ebx + 0x368u); M8(m_) = (u8)(0x1u); }
  /* 004e2017 mov dword ptr [ebx + 0x364], 0x3f000000 */ { const u32 m_ = (u32)(ebx + 0x364u); M32(m_) = (u32)(0x3f000000u); }
  /* 004e2021 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004e2023 fmul dword ptr [0x6571e8] */ { const u32 m_ = (u32)(0x6571e8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2029 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e202b fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e202d fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e2030 fmul dword ptr [0x6571e8] */ { const u32 m_ = (u32)(0x6571e8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2036 fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e203c fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2042 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e2045 fmul dword ptr [0x6571e8] */ { const u32 m_ = (u32)(0x6571e8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e204b fadd dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2051 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2057 jmp 0x4e2087 */ goto L_004e2087;
L_004e2059:;
  /* 004e2059 test byte ptr [ebx + 0x564], 0xc */ { const u32 m_ = (u32)(ebx + 0x564u); u32 a_ = M8(m_), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2060 jne 0x4e2084 */ if (!ZF_) goto L_004e2084;
  /* 004e2062 mov al, byte ptr [ebx + 0xbc] */ { const u32 m_ = (u32)(ebx + 0xbcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e2068 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e206a jne 0x4e2084 */ if (!ZF_) goto L_004e2084;
  /* 004e206c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004e206e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e206f mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 004e2074 call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e2079u; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e2074u); RETCHK(0x4e2079u, 0x4e2074u); LOADALL;
  /* 004e2079 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e207b mov eax, esi */ { eax = (u32)(esi); }
  /* 004e207d mov edi, ebx */ { edi = (u32)(ebx); }
  /* 004e207f call 0x4e5a20 */ esp -= 4; M32(esp) = 0x4e2084u; SAVEALL; F_004e5a20(c); ABI_CHECK(0x4e5a20u, 0x4e207fu); RETCHK(0x4e2084u, 0x4e207fu); LOADALL;
L_004e2084:;
  /* 004e2084 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
L_004e2087:;
  /* 004e2087 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e208d fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e2090 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004e2093 fmul dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2099 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004e209b mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e209e mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 004e20a1 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e20a7 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 004e20aa mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004e20ad fstp dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e20b0 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004e20b3 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e20b9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e20bb test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e20be jp 0x4e20c7 */ if (PF_) goto L_004e20c7;
  /* 004e20c0 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_004e20c7:;
  /* 004e20c7 mov eax, dword ptr [ebx + 0x574] */ { const u32 m_ = (u32)(ebx + 0x574u); eax = (u32)(M32(m_)); }
  /* 004e20cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e20cf jne 0x4e20f8 */ if (!ZF_) goto L_004e20f8;
  /* 004e20d1 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004e20d3 call 0x4e4ed0 */ esp -= 4; M32(esp) = 0x4e20d8u; SAVEALL; F_004e4ed0(c); ABI_CHECK(0x4e4ed0u, 0x4e20d3u); RETCHK(0x4e20d8u, 0x4e20d3u); LOADALL;
  /* 004e20d8 fadd dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e20db fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e20de fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 004e20e1 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e20e3 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e20e6 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004e20e9 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e20eb fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e20ee fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004e20f1 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e20f3 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e20f6 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e20f8:;
  /* 004e20f8 mov al, byte ptr [ebx + 0x368] */ { const u32 m_ = (u32)(ebx + 0x368u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e20fe test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2100 mov ecx, dword ptr [ebx + 0x504] */ { const u32 m_ = (u32)(ebx + 0x504u); ecx = (u32)(M32(m_)); }
  /* 004e2106 mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
  /* 004e2109 je 0x4e2144 */ if (ZF_) goto L_004e2144;
  /* 004e210b fld dword ptr [ebx + 0x364] */ { const u32 m_ = (u32)(ebx + 0x364u); FPUSH((double)MF32(m_)); }
  /* 004e2111 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2117 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2119 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e211c jne 0x4e213b */ if (!ZF_) goto L_004e213b;
  /* 004e211e fld dword ptr [ebx + 0x364] */ { const u32 m_ = (u32)(ebx + 0x364u); FPUSH((double)MF32(m_)); }
  /* 004e2124 mov edx, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); edx = (u32)(M32(m_)); }
  /* 004e212a fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e212d mov dword ptr [ebx + 0x1a0], edx */ { const u32 m_ = (u32)(ebx + 0x1a0u); M32(m_) = (u32)(edx); }
  /* 004e2133 fstp dword ptr [ebx + 0x364] */ { const u32 m_ = (u32)(ebx + 0x364u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2139 jmp 0x4e2161 */ goto L_004e2161;
L_004e213b:;
  /* 004e213b mov byte ptr [ebx + 0x368], 0 */ { const u32 m_ = (u32)(ebx + 0x368u); M8(m_) = (u8)(0x0u); }
  /* 004e2142 jmp 0x4e2161 */ goto L_004e2161;
L_004e2144:;
  /* 004e2144 mov eax, dword ptr [ebx + 0x1b0] */ { const u32 m_ = (u32)(ebx + 0x1b0u); eax = (u32)(M32(m_)); }
  /* 004e214a mov dword ptr [ebx + 0x1a0], eax */ { const u32 m_ = (u32)(ebx + 0x1a0u); M32(m_) = (u32)(eax); }
  /* 004e2150 jmp 0x4e2161 */ goto L_004e2161;
L_004e2152:;
  /* 004e2152 mov ecx, dword ptr [ebx + 0x1ac] */ { const u32 m_ = (u32)(ebx + 0x1acu); ecx = (u32)(M32(m_)); }
  /* 004e2158 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e215b mov dword ptr [ebx + 0x1a0], ecx */ { const u32 m_ = (u32)(ebx + 0x1a0u); M32(m_) = (u32)(ecx); }
L_004e2161:;
  /* 004e2161 test byte ptr [ebx + 0x564], 2 */ { const u32 m_ = (u32)(ebx + 0x564u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2168 je 0x4e223f */ if (ZF_) goto L_004e223f;
  /* 004e216e fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2171 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e2177 fmul dword ptr [ebx + 0x4f8] */ { const u32 m_ = (u32)(ebx + 0x4f8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e217d fchs */ ST(0) = -ST(0);
  /* 004e217f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2181 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2183 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2186 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2188 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e218b fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e218e fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2190 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2193 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2196 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2198 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e219a fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e21a0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e21a2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e21a4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e21a7 jne 0x4e2236 */ if (!ZF_) goto L_004e2236;
  /* 004e21ad fld dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); FPUSH((double)MF32(m_)); }
  /* 004e21b3 fld dword ptr [edi] */ { const u32 m_ = (u32)(edi); FPUSH((double)MF32(m_)); }
  /* 004e21b5 fld dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); FPUSH((double)MF32(m_)); }
  /* 004e21bb fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e21bd fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e21bf fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e21c1 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e21c3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e21c5 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e21c7 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e21c9 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e21cb fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e21d1 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e21d3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e21d5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e21d7 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e21da fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e21dc jne 0x4e2236 */ if (!ZF_) goto L_004e2236;
  /* 004e21de mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e21e0 call 0x4e5f60 */ esp -= 4; M32(esp) = 0x4e21e5u; SAVEALL; F_004e5f60(c); ABI_CHECK(0x4e5f60u, 0x4e21e0u); RETCHK(0x4e21e5u, 0x4e21e0u); LOADALL;
  /* 004e21e5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e21e7 je 0x4e2236 */ if (ZF_) goto L_004e2236;
  /* 004e21e9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e21eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e21ec mov esi, 0xe */ { esi = (u32)(0xeu); }
  /* 004e21f1 call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e21f6u; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e21f1u); RETCHK(0x4e21f6u, 0x4e21f1u); LOADALL;
  /* 004e21f6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e21f7 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e21fcu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e21f7u); RETCHK(0x4e21fcu, 0x4e21f7u); LOADALL;
  /* 004e21fc fcom dword ptr [ebx + 0x4f4] */ { const u32 m_ = (u32)(ebx + 0x4f4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e2202 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2205 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2207 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e220a jne 0x4e2234 */ if (!ZF_) goto L_004e2234;
  /* 004e220c fdivr dword ptr [ebx + 0x4f4] */ { const u32 m_ = (u32)(ebx + 0x4f4u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 004e2212 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2214 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2216 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2218 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e221a fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2220 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2226 fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e222c fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2232 jmp 0x4e2236 */ goto L_004e2236;
L_004e2234:;
  /* 004e2234 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e2236:;
  /* 004e2236 mov edx, dword ptr [ebx + 0x504] */ { const u32 m_ = (u32)(ebx + 0x504u); edx = (u32)(M32(m_)); }
  /* 004e223c mov dword ptr [ebp - 0x54], edx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edx); }
L_004e223f:;
  /* 004e223f mov eax, dword ptr [ebx + 0x564] */ { const u32 m_ = (u32)(ebx + 0x564u); eax = (u32)(M32(m_)); }
  /* 004e2245 test al, 0xc */ { u32 a_ = (eax & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2247 je 0x4e2252 */ if (ZF_) goto L_004e2252;
  /* 004e2249 mov ecx, dword ptr [ebx + 0x508] */ { const u32 m_ = (u32)(ebx + 0x508u); ecx = (u32)(M32(m_)); }
  /* 004e224f mov dword ptr [ebp - 0x54], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(ecx); }
L_004e2252:;
  /* 004e2252 test al, 0x10 */ { u32 a_ = (eax & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2254 je 0x4e2278 */ if (ZF_) goto L_004e2278;
  /* 004e2256 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004e2259 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e225b je 0x4e2278 */ if (ZF_) goto L_004e2278;
  /* 004e225d mov eax, dword ptr [ebx + 0x574] */ { const u32 m_ = (u32)(ebx + 0x574u); eax = (u32)(M32(m_)); }
  /* 004e2263 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e2265 jne 0x4e2278 */ if (!ZF_) goto L_004e2278;
  /* 004e2267 mov edx, dword ptr [ebx + 0x50c] */ { const u32 m_ = (u32)(ebx + 0x50cu); edx = (u32)(M32(m_)); }
  /* 004e226d fld dword ptr [ebx + 0x518] */ { const u32 m_ = (u32)(ebx + 0x518u); FPUSH((double)MF32(m_)); }
  /* 004e2273 mov dword ptr [ebp - 0x54], edx */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(edx); }
  /* 004e2276 jmp 0x4e227e */ goto L_004e227e;
L_004e2278:;
  /* 004e2278 fld dword ptr [0x9b8b44] */ { const u32 m_ = (u32)(0x9b8b44u); FPUSH((double)MF32(m_)); }
L_004e227e:;
  /* 004e227e fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e2284 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2286 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2289 jne 0x4e22b0 */ if (!ZF_) goto L_004e22b0;
  /* 004e228b fcom dword ptr [ebx + 0x518] */ { const u32 m_ = (u32)(ebx + 0x518u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e2291 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2293 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2296 jp 0x4e22b0 */ if (PF_) goto L_004e22b0;
  /* 004e2298 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e229b fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e22a1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e22a3 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e22a6 jp 0x4e22b0 */ if (PF_) goto L_004e22b0;
  /* 004e22a8 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e22aa fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
L_004e22b0:;
  /* 004e22b0 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e22b3 fst dword ptr [0x9b8b44] */ { const u32 m_ = (u32)(0x9b8b44u); MF32(m_) = (float)ST(0); }
  /* 004e22b9 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e22bf fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e22c1 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e22c4 jp 0x4e22da */ if (PF_) goto L_004e22da;
  /* 004e22c6 mov dword ptr [0x9b8b44], 0 */ { const u32 m_ = (u32)(0x9b8b44u); M32(m_) = (u32)(0x0u); }
  /* 004e22d0 mov dword ptr [0x68a6a4], 1 */ { const u32 m_ = (u32)(0x68a6a4u); M32(m_) = (u32)(0x1u); }
L_004e22da:;
  /* 004e22da mov eax, dword ptr [ebx + 0x578] */ { const u32 m_ = (u32)(ebx + 0x578u); eax = (u32)(M32(m_)); }
  /* 004e22e0 lea esi, [ebx + 0x578] */ esi = (u32)((u32)(ebx + 0x578u));
  /* 004e22e6 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004e22e9 mov ecx, dword ptr [eax + 0x63e814] */ { const u32 m_ = (u32)(eax + 0x63e814u); ecx = (u32)(M32(m_)); }
  /* 004e22ef mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 004e22f2 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004e22f5 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 004e22f8 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e22fe fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2300 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2303 jne 0x4e230c */ if (!ZF_) goto L_004e230c;
  /* 004e2305 mov dword ptr [ebp - 0x1c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x3f800000u); }
L_004e230c:;
  /* 004e230c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e230d call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e2312u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e230du); RETCHK(0x4e2312u, 0x4e230du); LOADALL;
  /* 004e2312 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2315 mov edx, dword ptr [ebx + 0x564] */ { const u32 m_ = (u32)(ebx + 0x564u); edx = (u32)(M32(m_)); }
  /* 004e231b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e231e test dl, 0x10 */ { u32 a_ = (edx & 0xffu), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2321 je 0x4e232e */ if (ZF_) goto L_004e232e;
  /* 004e2323 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 004e2326 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e2328 jne 0x4e2412 */ if (!ZF_) goto L_004e2412;
L_004e232e:;
  /* 004e232e mov al, byte ptr [ebx + 0xb4] */ { const u32 m_ = (u32)(ebx + 0xb4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e2334 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2336 je 0x4e25d3 */ if (ZF_) goto L_004e25d3;
  /* 004e233c test dl, 0xc */ { u32 a_ = (edx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e233f fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004e2342 fmul dword ptr [0x63f904] */ { const u32 m_ = (u32)(0x63f904u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2348 je 0x4e2355 */ if (ZF_) goto L_004e2355;
  /* 004e234a fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e234c fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004e234f fmul dword ptr [0x6571a4] */ { const u32 m_ = (u32)(0x6571a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
L_004e2355:;
  /* 004e2355 mov eax, dword ptr [ebx + 0x574] */ { const u32 m_ = (u32)(ebx + 0x574u); eax = (u32)(M32(m_)); }
  /* 004e235b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e235d je 0x4e2367 */ if (ZF_) goto L_004e2367;
  /* 004e235f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e2361 fld dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); FPUSH((double)MF32(m_)); }
L_004e2367:;
  /* 004e2367 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e236a fcomp dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2370 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2372 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2375 jne 0x4e25d1 */ if (!ZF_) goto L_004e25d1;
  /* 004e237b test dl, 2 */ { u32 a_ = (edx & 0xffu), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e237e fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004e2384 fdiv dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e2387 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2389 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e238b fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e238d fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e238f fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2395 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e239b fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e23a1 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e23a7 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e23aa je 0x4e23ae */ if (ZF_) goto L_004e23ae;
  /* 004e23ac fchs */ ST(0) = -ST(0);
L_004e23ae:;
  /* 004e23ae mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e23b4 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e23b6 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e23b8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e23b9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e23ba fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e23bc fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e23be fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e23c0 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e23c3 fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e23c9 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e23cf fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e23d2 fadd dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e23d8 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e23de call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e23e3u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e23deu); RETCHK(0x4e23e3u, 0x4e23deu); LOADALL;
  /* 004e23e3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e23e5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e23e8 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e23eb fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e23ed fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e23ef fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e23f2 fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e23f8 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e23fe fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e2401 fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2407 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e240d jmp 0x4e25d3 */ goto L_004e25d3;
L_004e2412:;
  /* 004e2412 mov al, byte ptr [ebx + 0xb4] */ { const u32 m_ = (u32)(ebx + 0xb4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e2418 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e241a je 0x4e25d3 */ if (ZF_) goto L_004e25d3;
  /* 004e2420 mov eax, dword ptr [ebx + 0x574] */ { const u32 m_ = (u32)(ebx + 0x574u); eax = (u32)(M32(m_)); }
  /* 004e2426 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e2428 jne 0x4e266b */ if (!ZF_) goto L_004e266b;
  /* 004e242e fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e2431 fcomp dword ptr [0x656ea8] */ { const u32 m_ = (u32)(0x656ea8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2437 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2439 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e243c jne 0x4e25d3 */ if (!ZF_) goto L_004e25d3;
  /* 004e2442 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e2448 fld dword ptr [0x6571e4] */ { const u32 m_ = (u32)(0x6571e4u); FPUSH((double)MF32(m_)); }
  /* 004e244e fld dword ptr [ebp - 0xac] */ { const u32 m_ = (u32)(ebp + 0xffffff54u); FPUSH((double)MF32(m_)); }
  /* 004e2454 mov esi, edx */ { esi = (u32)(edx); }
  /* 004e2456 and esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004e2459 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e245c fld dword ptr [ebp - 0xb0] */ { const u32 m_ = (u32)(ebp + 0xffffff50u); FPUSH((double)MF32(m_)); }
  /* 004e2462 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2464 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e2466 fld dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); FPUSH((double)MF32(m_)); }
  /* 004e246c fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e246f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e2471 je 0x4e248a */ if (ZF_) goto L_004e248a;
  /* 004e2473 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2479 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e247b test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e247e jne 0x4e24a8 */ if (!ZF_) goto L_004e24a8;
  /* 004e2480 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e2482 fld dword ptr [0x657180] */ { const u32 m_ = (u32)(0x657180u); FPUSH((double)MF32(m_)); }
  /* 004e2488 jmp 0x4e24a8 */ goto L_004e24a8;
L_004e248a:;
  /* 004e248a test dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e248d je 0x4e24a6 */ if (ZF_) goto L_004e24a6;
  /* 004e248f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2495 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2497 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e249a jp 0x4e24a8 */ if (PF_) goto L_004e24a8;
  /* 004e249c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e249e fld dword ptr [0x657180] */ { const u32 m_ = (u32)(0x657180u); FPUSH((double)MF32(m_)); }
  /* 004e24a4 jmp 0x4e24a8 */ goto L_004e24a8;
L_004e24a6:;
  /* 004e24a6 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e24a8:;
  /* 004e24a8 test dl, 0xc */ { u32 a_ = (edx & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e24ab je 0x4e24c5 */ if (ZF_) goto L_004e24c5;
  /* 004e24ad fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 004e24b0 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e24b2 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e24b5 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 004e24b8 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e24ba fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e24bd fmul dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e24c0 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e24c3 jmp 0x4e24c7 */ goto L_004e24c7;
L_004e24c5:;
  /* 004e24c5 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e24c7:;
  /* 004e24c7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e24c9 mov dword ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x0u); }
  /* 004e24d0 mov dword ptr [ebp - 0x10], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e24d7 mov dword ptr [ebp - 0x14], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x3f800000u); }
  /* 004e24de mov dword ptr [ebp - 0x18], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e24e5 je 0x4e2500 */ if (ZF_) goto L_004e2500;
  /* 004e24e7 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e24e9 fchs */ ST(0) = -ST(0);
  /* 004e24eb fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e24ee fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e24f1 fchs */ ST(0) = -ST(0);
  /* 004e24f3 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e24f6 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e24f9 fchs */ ST(0) = -ST(0);
  /* 004e24fb fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e24fe jmp 0x4e2516 */ goto L_004e2516;
L_004e2500:;
  /* 004e2500 test dl, 8 */ { u32 a_ = (edx & 0xffu), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2503 je 0x4e2522 */ if (ZF_) goto L_004e2522;
  /* 004e2505 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 004e2507 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004e250a mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e250d mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 004e2510 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 004e2513 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
L_004e2516:;
  /* 004e2516 fld dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)MF32(m_)); }
  /* 004e2519 fmul dword ptr [0x6571a0] */ { const u32 m_ = (u32)(0x6571a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e251f fstp dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); MF32(m_) = (float)ST(0); FPOP(); }
L_004e2522:;
  /* 004e2522 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e2523 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e2528u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e2523u); RETCHK(0x4e2528u, 0x4e2523u); LOADALL;
  /* 004e2528 fst dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); }
  /* 004e252b fcomp dword ptr [0x656dbc] */ { const u32 m_ = (u32)(0x656dbcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2531 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2534 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2536 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2539 jne 0x4e25cc */ if (!ZF_) goto L_004e25cc;
  /* 004e253f fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004e2545 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e2546 fdiv dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e2549 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e254a fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e254c fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e254e fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2550 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2552 fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2558 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e255e fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2564 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e256a fld dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); FPUSH((double)MF32(m_)); }
  /* 004e256d fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2570 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004e2573 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e2575 fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2577 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2579 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004e257c fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e257e fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2584 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e258a fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004e258d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e258f fadd dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2595 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e259b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e259d call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e25a2u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e259du); RETCHK(0x4e25a2u, 0x4e259du); LOADALL;
  /* 004e25a2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e25a4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e25a7 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e25aa fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e25ac fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e25ae fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e25b1 fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e25b7 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e25bd fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e25c0 fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e25c6 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e25cc:;
  /* 004e25cc mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 004e25cf jmp 0x4e25d3 */ goto L_004e25d3;
L_004e25d1:;
  /* 004e25d1 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e25d3:;
  /* 004e25d3 mov eax, dword ptr [ebx + 0x574] */ { const u32 m_ = (u32)(ebx + 0x574u); eax = (u32)(M32(m_)); }
  /* 004e25d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e25db jne 0x4e266b */ if (!ZF_) goto L_004e266b;
  /* 004e25e1 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004e25e3 fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 004e25e6 mov eax, dword ptr [ebx + 0x564] */ { const u32 m_ = (u32)(ebx + 0x564u); eax = (u32)(M32(m_)); }
  /* 004e25ec shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004e25ef test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e25f1 fmul dword ptr [edx + 0x63e814] */ { const u32 m_ = (u32)(edx + 0x63e814u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e25f7 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e25fa jne 0x4e2674 */ if (!ZF_) goto L_004e2674;
  /* 004e25fc fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2602 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004e2608 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e260a fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e260c fst dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); }
  /* 004e260e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e2610 fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2616 fst dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); }
  /* 004e261c fxch st(2) */ { double t_ = ST(0); ST(0) = ST(2); ST(2) = t_; }
  /* 004e261e fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2624 fst dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); }
  /* 004e262a fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004e262c fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 004e262e fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004e2630 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 004e2632 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e2634 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e2636 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e2638 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e263a fcomp dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2640 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e2642 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2644 fstp st(1) */ ST(1) = ST(0); FPOP();
  /* 004e2646 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2649 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e264b jp 0x4e269a */ if (PF_) goto L_004e269a;
  /* 004e264d mov ecx, dword ptr [0x63f6a8] */ { const u32 m_ = (u32)(0x63f6a8u); ecx = (u32)(M32(m_)); }
  /* 004e2653 mov edx, dword ptr [0x63f6ac] */ { const u32 m_ = (u32)(0x63f6acu); edx = (u32)(M32(m_)); }
  /* 004e2659 mov eax, edi */ { eax = (u32)(edi); }
  /* 004e265b mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e265d mov ecx, dword ptr [0x63f6b0] */ { const u32 m_ = (u32)(0x63f6b0u); ecx = (u32)(M32(m_)); }
  /* 004e2663 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e2666 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e2669 jmp 0x4e269a */ goto L_004e269a;
L_004e266b:;
  /* 004e266b fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e266e fmul dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
L_004e2674:;
  /* 004e2674 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004e267a fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e267c fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e267e fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2680 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2682 fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2688 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e268e fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2694 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e269a:;
  /* 004e269a fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 004e269d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e269e fadd dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e26a0 fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e26a2 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 004e26a5 fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e26ab fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e26b1 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 004e26b4 fadd dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e26ba fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e26c0 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e26c5u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e26c0u); RETCHK(0x4e26c5u, 0x4e26c0u); LOADALL;
  /* 004e26c5 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e26c8 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e26cb lea esi, [ebx + 0x4f0] */ esi = (u32)((u32)(ebx + 0x4f0u));
  /* 004e26d1 fcomp dword ptr [esi] */ { const u32 m_ = (u32)(esi); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e26d3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e26d6 mov dword ptr [ebp - 0x68], esi */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(esi); }
  /* 004e26d9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e26db test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e26de jne 0x4e2726 */ if (!ZF_) goto L_004e2726;
  /* 004e26e0 mov al, byte ptr [ebx + 0xbc] */ { const u32 m_ = (u32)(ebx + 0xbcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e26e6 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004e26ec test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e26ee fdiv dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e26f1 je 0x4e26fe */ if (ZF_) goto L_004e26fe;
  /* 004e26f3 mov eax, dword ptr [ebx + 0x500] */ { const u32 m_ = (u32)(ebx + 0x500u); eax = (u32)(M32(m_)); }
  /* 004e26f9 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004e26fc jmp 0x4e2703 */ goto L_004e2703;
L_004e26fe:;
  /* 004e26fe mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 004e2700 mov dword ptr [ebp + 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(ecx); }
L_004e2703:;
  /* 004e2703 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2706 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2708 fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e270a fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e270c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e270e fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2714 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e271a fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2720 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e2726:;
  /* 004e2726 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e2729 fcomp dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e272f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2731 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2734 jp 0x4e2750 */ if (PF_) goto L_004e2750;
  /* 004e2736 mov eax, dword ptr [ebx + 0x564] */ { const u32 m_ = (u32)(ebx + 0x564u); eax = (u32)(M32(m_)); }
  /* 004e273c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e273e jne 0x4e2750 */ if (!ZF_) goto L_004e2750;
  /* 004e2740 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004e2742 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e2743 mov esi, 1 */ { esi = (u32)(0x1u); }
  /* 004e2748 call 0x4e5090 */ esp -= 4; M32(esp) = 0x4e274du; SAVEALL; F_004e5090(c); ABI_CHECK(0x4e5090u, 0x4e2748u); RETCHK(0x4e274du, 0x4e2748u); LOADALL;
  /* 004e274d mov esi, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); esi = (u32)(M32(m_)); }
L_004e2750:;
  /* 004e2750 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004e2753 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e2754 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004e2756 call 0x4e5830 */ esp -= 4; M32(esp) = 0x4e275bu; SAVEALL; F_004e5830(c); ABI_CHECK(0x4e5830u, 0x4e2756u); RETCHK(0x4e275bu, 0x4e2756u); LOADALL;
  /* 004e275b fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e275e fmul dword ptr [edi] */ { const u32 m_ = (u32)(edi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2760 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2763 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2766 fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e276c fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e276f fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2772 fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2778 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e277b fld dword ptr [0x9b8b38] */ { const u32 m_ = (u32)(0x9b8b38u); FPUSH((double)MF32(m_)); }
  /* 004e2781 fadd dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2784 fst dword ptr [0x9b8b38] */ { const u32 m_ = (u32)(0x9b8b38u); MF32(m_) = (float)ST(0); }
  /* 004e278a fcomp dword ptr [0x68a6a0] */ { const u32 m_ = (u32)(0x68a6a0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2790 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2792 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2795 jne 0x4e28c7 */ if (!ZF_) goto L_004e28c7;
  /* 004e279b mov al, byte ptr [0x7a6c65] */ { const u32 m_ = (u32)(0x7a6c65u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e27a0 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e27a2 je 0x4e28c7 */ if (ZF_) goto L_004e28c7;
  /* 004e27a8 lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 004e27ae call 0x5680c0 */ esp -= 4; M32(esp) = 0x4e27b3u; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x4e27aeu); RETCHK(0x4e27b3u, 0x4e27aeu); LOADALL;
  /* 004e27b3 mov edx, 0x50 */ { edx = (u32)(0x50u); }
  /* 004e27b8 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 004e27be mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 004e27c5 call 0x568120 */ esp -= 4; M32(esp) = 0x4e27cau; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x4e27c5u); RETCHK(0x4e27cau, 0x4e27c5u); LOADALL;
  /* 004e27ca push 0x10000130 */ { u32 v_ = 0x10000130u; esp -= 4; M32(esp) = v_; }
  /* 004e27cf call 0x5681f0 */ esp -= 4; M32(esp) = 0x4e27d4u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4e27cfu); RETCHK(0x4e27d4u, 0x4e27cfu); LOADALL;
  /* 004e27d4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e27d6 lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 004e27dc call 0x5681f0 */ esp -= 4; M32(esp) = 0x4e27e1u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4e27dcu); RETCHK(0x4e27e1u, 0x4e27dcu); LOADALL;
  /* 004e27e1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004e27e3 lea eax, [ebp + 0x14] */ eax = (u32)((u32)(ebp + 0x14u));
  /* 004e27e6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e27e7 lea ebx, [ebp - 0x84] */ ebx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 004e27ed call 0x568380 */ esp -= 4; M32(esp) = 0x4e27f2u; SAVEALL; F_00568380(c); ABI_CHECK(0x568380u, 0x4e27edu); RETCHK(0x4e27f2u, 0x4e27edu); LOADALL;
  /* 004e27f2 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e27f5 mov bl, byte ptr [edi + 0xbc] */ { const u32 m_ = (u32)(edi + 0xbcu); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e27fb xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004e27fd test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e27ff setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 004e2802 lea eax, [ebp - 0x84] */ eax = (u32)((u32)(ebp + 0xffffff7cu));
  /* 004e2808 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e2809 call 0x5681f0 */ esp -= 4; M32(esp) = 0x4e280eu; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4e2809u); RETCHK(0x4e280eu, 0x4e2809u); LOADALL;
  /* 004e280e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004e2810 lea edx, [edi + 0x4dc] */ edx = (u32)((u32)(edi + 0x4dcu));
  /* 004e2816 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e2817 lea ebx, [ebp - 0x84] */ ebx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 004e281d call 0x568380 */ esp -= 4; M32(esp) = 0x4e2822u; SAVEALL; F_00568380(c); ABI_CHECK(0x568380u, 0x4e281du); RETCHK(0x4e2822u, 0x4e281du); LOADALL;
  /* 004e2822 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004e2824 lea eax, [edi + 0x4e4] */ eax = (u32)((u32)(edi + 0x4e4u));
  /* 004e282a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e282b call 0x568380 */ esp -= 4; M32(esp) = 0x4e2830u; SAVEALL; F_00568380(c); ABI_CHECK(0x568380u, 0x4e282bu); RETCHK(0x4e2830u, 0x4e282bu); LOADALL;
  /* 004e2830 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004e2832 lea ecx, [edi + 0x4ec] */ ecx = (u32)((u32)(edi + 0x4ecu));
  /* 004e2838 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e2839 call 0x568380 */ esp -= 4; M32(esp) = 0x4e283eu; SAVEALL; F_00568380(c); ABI_CHECK(0x568380u, 0x4e2839u); RETCHK(0x4e283eu, 0x4e2839u); LOADALL;
  /* 004e283e push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004e2840 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e2841 call 0x568380 */ esp -= 4; M32(esp) = 0x4e2846u; SAVEALL; F_00568380(c); ABI_CHECK(0x568380u, 0x4e2841u); RETCHK(0x4e2846u, 0x4e2841u); LOADALL;
  /* 004e2846 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004e2848 lea edx, [edi + 0x500] */ edx = (u32)((u32)(edi + 0x500u));
  /* 004e284e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e284f call 0x568380 */ esp -= 4; M32(esp) = 0x4e2854u; SAVEALL; F_00568380(c); ABI_CHECK(0x568380u, 0x4e284fu); RETCHK(0x4e2854u, 0x4e284fu); LOADALL;
  /* 004e2854 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e2856 call 0x4019a0 */ esp -= 4; M32(esp) = 0x4e285bu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x4e2856u); RETCHK(0x4e285bu, 0x4e2856u); LOADALL;
  /* 004e285b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e285e call 0x401020 */ esp -= 4; M32(esp) = 0x4e2863u; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x4e285eu); RETCHK(0x4e2863u, 0x4e285eu); LOADALL;
  /* 004e2863 mov eax, dword ptr [eax + 0xc6c] */ { const u32 m_ = (u32)(eax + 0xc6cu); eax = (u32)(M32(m_)); }
  /* 004e2869 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e286a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004e286c call 0x5681f0 */ esp -= 4; M32(esp) = 0x4e2871u; SAVEALL; F_005681f0(c); ABI_CHECK(0x5681f0u, 0x4e286cu); RETCHK(0x4e2871u, 0x4e286cu); LOADALL;
  /* 004e2871 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004e2873 call 0x464860 */ esp -= 4; M32(esp) = 0x4e2878u; SAVEALL; F_00464860(c); ABI_CHECK(0x464860u, 0x4e2873u); RETCHK(0x4e2878u, 0x4e2873u); LOADALL;
  /* 004e2878 mov edx, eax */ { edx = (u32)(eax); }
  /* 004e287a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004e287c call 0x4648e0 */ esp -= 4; M32(esp) = 0x4e2881u; SAVEALL; F_004648e0(c); ABI_CHECK(0x4648e0u, 0x4e287cu); RETCHK(0x4e2881u, 0x4e287cu); LOADALL;
  /* 004e2881 mov edi, dword ptr [edi + 0xb0] */ { const u32 m_ = (u32)(edi + 0xb0u); edi = (u32)(M32(m_)); }
  /* 004e2887 mov ecx, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 004e288d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e288f je 0x4e2897 */ if (ZF_) goto L_004e2897;
  /* 004e2891 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e2892 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4e2897u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4e2892u); RETCHK(0x4e2897u, 0x4e2892u); LOADALL;
L_004e2897:;
  /* 004e2897 mov dword ptr [0x9b8b38], 0 */ { const u32 m_ = (u32)(0x9b8b38u); M32(m_) = (u32)(0x0u); }
  /* 004e28a1 call 0x5fe9d4 */ esp -= 4; M32(esp) = 0x4e28a6u; SAVEALL; F_005fe9d4(c); ABI_CHECK(0x5fe9d4u, 0x4e28a1u); RETCHK(0x4e28a6u, 0x4e28a1u); LOADALL;
  /* 004e28a6 cdq */ edx = (u32)((s32)eax >> 31);
  /* 004e28a7 mov ecx, 0xa */ { ecx = (u32)(0xau); }
  /* 004e28ac idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x4e28acu); eax = q_; edx = r_; }
  /* 004e28ae mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e28b1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004e28b4 mov dword ptr [ebp + 0x14], edx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edx); }
  /* 004e28b7 fild dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 004e28ba mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 004e28c1 fstp dword ptr [0x68a6a0] */ { const u32 m_ = (u32)(0x68a6a0u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e28c7:;
  /* 004e28c7 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e28cd fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 004e28d0 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e28d2 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004e28d5 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e28d7 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e28dd fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004e28e0 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e28e3 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e28e6 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e28ec fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004e28ef fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e28f2 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e28f5 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e28fb fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004e28fd mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004e28ff fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2902 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e2905 mov dword ptr [ebp - 0x28], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edx); }
  /* 004e2908 fadd dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e290e mov edx, dword ptr [ebx + 0x4b0] */ { const u32 m_ = (u32)(ebx + 0x4b0u); edx = (u32)(M32(m_)); }
  /* 004e2914 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2917 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e291a mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004e291d mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e2920 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2923 fld dword ptr [ebx + 0x520] */ { const u32 m_ = (u32)(ebx + 0x520u); FPUSH((double)MF32(m_)); }
  /* 004e2929 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e292a fmul dword ptr [0x65719c] */ { const u32 m_ = (u32)(0x65719cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2930 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004e2933 mov eax, dword ptr [ebx + 0x534] */ { const u32 m_ = (u32)(ebx + 0x534u); eax = (u32)(M32(m_)); }
  /* 004e2939 mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 004e293c fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e293f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e2940 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e2941 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004e2944 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e2945 lea ebx, [ebp - 0x74] */ ebx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 004e2948 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 004e294b call 0x405730 */ esp -= 4; M32(esp) = 0x4e2950u; SAVEALL; F_00405730(c); ABI_CHECK(0x405730u, 0x4e294bu); RETCHK(0x4e2950u, 0x4e294bu); LOADALL;
  /* 004e2950 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004e2953 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004e2955 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 004e2958 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004e295b fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e295e mov dword ptr [ebp - 0x18], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edx); }
  /* 004e2961 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e2964 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 004e2967 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004e296a fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e296d mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 004e2970 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2973 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e2975 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004e2978 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e297b faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e297d fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2983 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2985 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2988 jne 0x4e2b4d */ if (!ZF_) goto L_004e2b4d;
  /* 004e298e fld dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); FPUSH((double)MF32(m_)); }
  /* 004e2994 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004e2996 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e2998 fld dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); FPUSH((double)MF32(m_)); }
  /* 004e299e fld dword ptr [ebx + 0x4e0] */ { const u32 m_ = (u32)(ebx + 0x4e0u); FPUSH((double)MF32(m_)); }
  /* 004e29a4 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004e29a6 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 004e29a8 fld st(4) */ { double v_ = ST(4); FPUSH(v_); }
  /* 004e29aa fmul st(5) */ ST(0) = FR(ST(0) * ST(5));
  /* 004e29ac faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e29ae fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004e29b0 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 004e29b2 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e29b4 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e29b6 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e29b8 fcompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 004e29ba fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e29bc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e29be fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e29c0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e29c2 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e29c5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e29c7 jp 0x4e29f5 */ if (PF_) goto L_004e29f5;
  /* 004e29c9 fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004e29cf fsub dword ptr [ebx + 0x51c] */ { const u32 m_ = (u32)(ebx + 0x51cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e29d5 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e29d7 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e29d9 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e29db fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e29dd fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e29e3 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e29e9 fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e29ef fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e29f5:;
  /* 004e29f5 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 004e29f8 fmul dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e29fb fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 004e29fe fmul dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2a01 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e2a03 fld dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); FPUSH((double)MF32(m_)); }
  /* 004e2a06 fmul dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2a09 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e2a0b fst dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); }
  /* 004e2a0e fcomp dword ptr [0x6571cc] */ { const u32 m_ = (u32)(0x6571ccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2a14 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2a16 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2a19 jp 0x4e2b4d */ if (PF_) goto L_004e2b4d;
  /* 004e2a1f mov eax, dword ptr [ebx + 0x560] */ { const u32 m_ = (u32)(ebx + 0x560u); eax = (u32)(M32(m_)); }
  /* 004e2a25 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e2a28 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 004e2a2b mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004e2a2e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e2a2f call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e2a34u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e2a2fu); RETCHK(0x4e2a34u, 0x4e2a2fu); LOADALL;
  /* 004e2a34 fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 004e2a37 fmul dword ptr [0x6571e0] */ { const u32 m_ = (u32)(0x6571e0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2a3d add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e2a40 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004e2a42 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004e2a45 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e2a48 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 004e2a4b fadd dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2a4e mov dword ptr [ebp - 0x24], edx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edx); }
  /* 004e2a51 mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 004e2a54 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2a57 mov eax, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004e2a5d fld dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); FPUSH((double)MF32(m_)); }
  /* 004e2a60 fmul dword ptr [0x6571e0] */ { const u32 m_ = (u32)(0x6571e0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2a66 fadd dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2a69 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2a6c fld dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); FPUSH((double)MF32(m_)); }
  /* 004e2a6f fmul dword ptr [0x6571e0] */ { const u32 m_ = (u32)(0x6571e0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2a75 fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2a78 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2a7b fld dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); FPUSH((double)MF32(m_)); }
  /* 004e2a81 fdiv dword ptr [ebx + 0x4e8] */ { const u32 m_ = (u32)(ebx + 0x4e8u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e2a87 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2a8a fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 004e2a8c fld dword ptr [0x656f18] */ { const u32 m_ = (u32)(0x656f18u); FPUSH((double)MF32(m_)); }
  /* 004e2a92 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e2a94 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2a97 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004e2a99 fld dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); FPUSH((double)MF32(m_)); }
  /* 004e2a9f sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2aa2 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e2aa4 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2aa8 fmul dword ptr [0x656f58] */ { const u32 m_ = (u32)(0x656f58u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2aae fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2ab1 call 0x4eed50 */ esp -= 4; M32(esp) = 0x4e2ab6u; SAVEALL; F_004eed50(c); ABI_CHECK(0x4eed50u, 0x4e2ab1u); RETCHK(0x4e2ab6u, 0x4e2ab1u); LOADALL;
  /* 004e2ab6 call 0x518bb0 */ esp -= 4; M32(esp) = 0x4e2abbu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x4e2ab6u); RETCHK(0x4e2abbu, 0x4e2ab6u); LOADALL;
  /* 004e2abb fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e2abe fcomp dword ptr [0x6571dc] */ { const u32 m_ = (u32)(0x6571dcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2ac4 mov esi, dword ptr [eax + 0x130] */ { const u32 m_ = (u32)(eax + 0x130u); esi = (u32)(M32(m_)); }
  /* 004e2aca fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2acc test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2acf jne 0x4e2ae2 */ if (!ZF_) goto L_004e2ae2;
  /* 004e2ad1 push 0x3e99999a */ { u32 v_ = 0x3e99999au; esp -= 4; M32(esp) = v_; }
  /* 004e2ad6 mov edi, 0x4e23 */ { edi = (u32)(0x4e23u); }
  /* 004e2adb push 0x1388 */ { u32 v_ = 0x1388u; esp -= 4; M32(esp) = v_; }
  /* 004e2ae0 jmp 0x4e2af1 */ goto L_004e2af1;
L_004e2ae2:;
  /* 004e2ae2 push 0x3f000000 */ { u32 v_ = 0x3f000000u; esp -= 4; M32(esp) = v_; }
  /* 004e2ae7 mov edi, 0x4e24 */ { edi = (u32)(0x4e24u); }
  /* 004e2aec push 0x2710 */ { u32 v_ = 0x2710u; esp -= 4; M32(esp) = v_; }
L_004e2af1:;
  /* 004e2af1 call 0x532720 */ esp -= 4; M32(esp) = 0x4e2af6u; SAVEALL; F_00532720(c); ABI_CHECK(0x532720u, 0x4e2af1u); RETCHK(0x4e2af6u, 0x4e2af1u); LOADALL;
  /* 004e2af6 mov edx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edx = (u32)(M32(m_)); }
  /* 004e2afc lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004e2aff push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e2b00 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e2b01 mov edx, edi */ { edx = (u32)(edi); }
  /* 004e2b03 call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4e2b08u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4e2b03u); RETCHK(0x4e2b08u, 0x4e2b03u); LOADALL;
  /* 004e2b08 mov al, byte ptr [ebx + 0x588] */ { const u32 m_ = (u32)(ebx + 0x588u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e2b0e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2b10 jne 0x4e2b4d */ if (!ZF_) goto L_004e2b4d;
  /* 004e2b12 mov eax, dword ptr [ebx + 0x98] */ { const u32 m_ = (u32)(ebx + 0x98u); eax = (u32)(M32(m_)); }
  /* 004e2b18 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004e2b1b mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 004e2b1e mov eax, dword ptr [ebx + 0xb0] */ { const u32 m_ = (u32)(ebx + 0xb0u); eax = (u32)(M32(m_)); }
  /* 004e2b24 mov dword ptr [ebp - 0x28], 0x10000069 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0x10000069u); }
  /* 004e2b2b mov dword ptr [ebp - 0x20], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ecx); }
  /* 004e2b2e mov byte ptr [ebx + 0x5e9], 0 */ { const u32 m_ = (u32)(ebx + 0x5e9u); M8(m_) = (u8)(0x0u); }
  /* 004e2b35 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 004e2b3b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e2b3d je 0x4e2b4d */ if (ZF_) goto L_004e2b4d;
  /* 004e2b3f lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004e2b42 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e2b43 mov edx, 0xc */ { edx = (u32)(0xcu); }
  /* 004e2b48 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x4e2b4du; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x4e2b48u); RETCHK(0x4e2b4du, 0x4e2b48u); LOADALL;
L_004e2b4d:;
  /* 004e2b4d mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e2b53 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004e2b56 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2b58 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2b5a mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e2b60 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004e2b63 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2b66 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2b69 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e2b6f fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004e2b72 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2b75 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2b78 mov eax, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); eax = (u32)(M32(m_)); }
  /* 004e2b7e add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e2b81 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e2b82 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e2b87u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e2b82u); RETCHK(0x4e2b87u, 0x4e2b82u); LOADALL;
  /* 004e2b87 mov ecx, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); ecx = (u32)(M32(m_)); }
  /* 004e2b8d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e2b8e call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e2b93u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e2b8eu); RETCHK(0x4e2b93u, 0x4e2b8eu); LOADALL;
  /* 004e2b93 mov al, byte ptr [ebx + 0x33c] */ { const u32 m_ = (u32)(ebx + 0x33cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e2b99 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2b9c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2b9e je 0x4e2baf */ if (ZF_) goto L_004e2baf;
  /* 004e2ba0 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2ba3 fadd dword ptr [ebx + 0x340] */ { const u32 m_ = (u32)(ebx + 0x340u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2ba9 fstp dword ptr [ebx + 0x340] */ { const u32 m_ = (u32)(ebx + 0x340u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e2baf:;
  /* 004e2baf mov eax, dword ptr [ebx + 0x63c] */ { const u32 m_ = (u32)(ebx + 0x63cu); eax = (u32)(M32(m_)); }
  /* 004e2bb5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004e2bb7 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2bb9 je 0x4e2bf5 */ if (ZF_) goto L_004e2bf5;
  /* 004e2bbb fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2bbe fadd dword ptr [ebx + 0x340] */ { const u32 m_ = (u32)(ebx + 0x340u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2bc4 fst dword ptr [ebx + 0x340] */ { const u32 m_ = (u32)(ebx + 0x340u); MF32(m_) = (float)ST(0); }
  /* 004e2bca fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2bd0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2bd2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2bd5 jne 0x4e2bf5 */ if (!ZF_) goto L_004e2bf5;
  /* 004e2bd7 fld dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); FPUSH((double)MF32(m_)); }
  /* 004e2bdd mov dword ptr [ebx + 0x63c], ecx */ { const u32 m_ = (u32)(ebx + 0x63cu); M32(m_) = (u32)(ecx); }
  /* 004e2be3 fmul dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2be9 mov dword ptr [ebx + 0x340], ecx */ { const u32 m_ = (u32)(ebx + 0x340u); M32(m_) = (u32)(ecx); }
  /* 004e2bef fstp dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e2bf5:;
  /* 004e2bf5 mov eax, dword ptr [ebx + 0x344] */ { const u32 m_ = (u32)(ebx + 0x344u); eax = (u32)(M32(m_)); }
  /* 004e2bfb cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2bfd je 0x4e2d79 */ if (ZF_) goto L_004e2d79;
  /* 004e2c03 mov edx, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); edx = (u32)(M32(m_)); }
  /* 004e2c09 mov ecx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e2c0c fld dword ptr [edx + 0x4c] */ { const u32 m_ = (u32)(edx + 0x4cu); FPUSH((double)MF32(m_)); }
  /* 004e2c0f fadd dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2c12 mov esi, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); esi = (u32)(M32(m_)); }
  /* 004e2c18 add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004e2c1b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e2c20 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2c23 fld dword ptr [ebx + 0x348] */ { const u32 m_ = (u32)(ebx + 0x348u); FPUSH((double)MF32(m_)); }
  /* 004e2c29 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e2c2c fstp dword ptr [ebx + 0x348] */ { const u32 m_ = (u32)(ebx + 0x348u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2c32 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e2c35 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e2c38 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e2c3a mov edx, dword ptr [ebx + 0x344] */ { const u32 m_ = (u32)(ebx + 0x344u); edx = (u32)(M32(m_)); }
  /* 004e2c40 mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e2c43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e2c44 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e2c49u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e2c44u); RETCHK(0x4e2c49u, 0x4e2c44u); LOADALL;
  /* 004e2c49 mov ecx, dword ptr [ebx + 0x344] */ { const u32 m_ = (u32)(ebx + 0x344u); ecx = (u32)(M32(m_)); }
  /* 004e2c4f mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e2c52 mov eax, dword ptr [edx + 0x44] */ { const u32 m_ = (u32)(edx + 0x44u); eax = (u32)(M32(m_)); }
  /* 004e2c55 mov ecx, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); ecx = (u32)(M32(m_)); }
  /* 004e2c5b mov edx, dword ptr [ebx + 0x534] */ { const u32 m_ = (u32)(ebx + 0x534u); edx = (u32)(M32(m_)); }
  /* 004e2c61 mov dword ptr [ebp - 0x68], eax */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(eax); }
  /* 004e2c64 mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e2c6a push 0x40400000 */ { u32 v_ = 0x40400000u; esp -= 4; M32(esp) = v_; }
  /* 004e2c6f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004e2c71 call 0x404cf0 */ esp -= 4; M32(esp) = 0x4e2c76u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4e2c71u); RETCHK(0x4e2c76u, 0x4e2c71u); LOADALL;
  /* 004e2c76 fcom dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e2c7c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2c7f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2c81 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2c84 jnp 0x4e2cb0 */ if (!PF_) goto L_004e2cb0;
  /* 004e2c86 fcomp dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2c8c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2c8e test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2c91 jne 0x4e2d47 */ if (!ZF_) goto L_004e2d47;
  /* 004e2c97 fld dword ptr [ebx + 0x348] */ { const u32 m_ = (u32)(ebx + 0x348u); FPUSH((double)MF32(m_)); }
  /* 004e2c9d fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2ca3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2ca5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2ca8 jp 0x4e2d47 */ if (PF_) goto L_004e2d47;
  /* 004e2cae jmp 0x4e2cb2 */ goto L_004e2cb2;
L_004e2cb0:;
  /* 004e2cb0 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e2cb2:;
  /* 004e2cb2 mov eax, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); eax = (u32)(M32(m_)); }
  /* 004e2cb8 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004e2cba cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2cbc je 0x4e2d02 */ if (ZF_) goto L_004e2d02;
  /* 004e2cbe mov esi, dword ptr [ebx + 0x358] */ { const u32 m_ = (u32)(ebx + 0x358u); esi = (u32)(M32(m_)); }
  /* 004e2cc4 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2cc6 je 0x4e2cd5 */ if (ZF_) goto L_004e2cd5;
  /* 004e2cc8 cmp dword ptr [0x7a6cd8], edi */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2cce je 0x4e2cd5 */ if (ZF_) goto L_004e2cd5;
  /* 004e2cd0 call 0x531380 */ esp -= 4; M32(esp) = 0x4e2cd5u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4e2cd0u); RETCHK(0x4e2cd5u, 0x4e2cd0u); LOADALL;
L_004e2cd5:;
  /* 004e2cd5 mov eax, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); eax = (u32)(M32(m_)); }
  /* 004e2cdb mov dword ptr [ebx + 0x358], edi */ { const u32 m_ = (u32)(ebx + 0x358u); M32(m_) = (u32)(edi); }
  /* 004e2ce1 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4e2ce6u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4e2ce1u); RETCHK(0x4e2ce6u, 0x4e2ce1u); LOADALL;
  /* 004e2ce6 mov ecx, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); ecx = (u32)(M32(m_)); }
  /* 004e2cec mov dword ptr [ecx + 0x34], edi */ { const u32 m_ = (u32)(ecx + 0x34u); M32(m_) = (u32)(edi); }
  /* 004e2cef mov edx, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); edx = (u32)(M32(m_)); }
  /* 004e2cf5 mov dword ptr [edx + 0x38], 1 */ { const u32 m_ = (u32)(edx + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004e2cfc mov dword ptr [ebx + 0x350], edi */ { const u32 m_ = (u32)(ebx + 0x350u); M32(m_) = (u32)(edi); }
L_004e2d02:;
  /* 004e2d02 mov eax, dword ptr [ebx + 0x344] */ { const u32 m_ = (u32)(ebx + 0x344u); eax = (u32)(M32(m_)); }
  /* 004e2d08 mov ecx, dword ptr [ebx + 0x34c] */ { const u32 m_ = (u32)(ebx + 0x34cu); ecx = (u32)(M32(m_)); }
  /* 004e2d0e mov edx, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); edx = (u32)(M32(m_)); }
  /* 004e2d14 mov dword ptr [ebx + 0x350], eax */ { const u32 m_ = (u32)(ebx + 0x350u); M32(m_) = (u32)(eax); }
  /* 004e2d1a mov dword ptr [ebx + 0x344], edi */ { const u32 m_ = (u32)(ebx + 0x344u); M32(m_) = (u32)(edi); }
  /* 004e2d20 mov dword ptr [ebx + 0x358], ecx */ { const u32 m_ = (u32)(ebx + 0x358u); M32(m_) = (u32)(ecx); }
  /* 004e2d26 mov dword ptr [ebx + 0x34c], edi */ { const u32 m_ = (u32)(ebx + 0x34cu); M32(m_) = (u32)(edi); }
  /* 004e2d2c mov dword ptr [ebx + 0x354], 0x40400000 */ { const u32 m_ = (u32)(ebx + 0x354u); M32(m_) = (u32)(0x40400000u); }
  /* 004e2d36 mov dword ptr [ebx + 0x348], 0x7f7fffff */ { const u32 m_ = (u32)(ebx + 0x348u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 004e2d40 mov dword ptr [edx + 0x10], 0x10 */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(0x10u); }
L_004e2d47:;
  /* 004e2d47 mov ecx, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); ecx = (u32)(M32(m_)); }
  /* 004e2d4d mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004e2d50 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 004e2d55 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2d57 je 0x4e2d79 */ if (ZF_) goto L_004e2d79;
  /* 004e2d59 mov esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); esi = (u32)(M32(m_)); }
  /* 004e2d5c fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e2d5f fcomp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2d62 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2d64 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2d67 jne 0x4e2d79 */ if (!ZF_) goto L_004e2d79;
  /* 004e2d69 fld dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); FPUSH((double)MF32(m_)); }
  /* 004e2d6c fcomp dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2d6f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2d71 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2d74 jp 0x4e2d79 */ if (PF_) goto L_004e2d79;
  /* 004e2d76 mov dword ptr [ecx + 0x10], edx */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(edx); }
L_004e2d79:;
  /* 004e2d79 cmp dword ptr [ebx + 0x35c], 3 */ { const u32 m_ = (u32)(ebx + 0x35cu); u32 a_ = M32(m_), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2d80 jg 0x4e2e5c */ if (!(ZF_|LT_)) goto L_004e2e5c;
  /* 004e2d86 mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e2d8c mov ecx, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); ecx = (u32)(M32(m_)); }
  /* 004e2d92 mov edx, dword ptr [ebx + 0x534] */ { const u32 m_ = (u32)(ebx + 0x534u); edx = (u32)(M32(m_)); }
  /* 004e2d98 push 0x40400000 */ { u32 v_ = 0x40400000u; esp -= 4; M32(esp) = v_; }
  /* 004e2d9d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004e2d9f call 0x404cf0 */ esp -= 4; M32(esp) = 0x4e2da4u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4e2d9fu); RETCHK(0x4e2da4u, 0x4e2d9fu); LOADALL;
  /* 004e2da4 fcom dword ptr [0x657028] */ { const u32 m_ = (u32)(0x657028u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e2daa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2dad fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2daf test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2db2 jp 0x4e2e45 */ if (PF_) goto L_004e2e45;
  /* 004e2db8 test byte ptr [ebx + 0x568], 1 */ { const u32 m_ = (u32)(ebx + 0x568u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2dbf je 0x4e2dde */ if (ZF_) goto L_004e2dde;
  /* 004e2dc1 fld dword ptr [0x657008] */ { const u32 m_ = (u32)(0x657008u); FPUSH((double)MF32(m_)); }
  /* 004e2dc7 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e2dc9 call 0x61b154 */ esp -= 4; M32(esp) = 0x4e2dceu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x4e2dc9u); RETCHK(0x4e2dceu, 0x4e2dc9u); LOADALL;
  /* 004e2dce test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e2dd0 mov dword ptr [ebx + 0x35c], eax */ { const u32 m_ = (u32)(ebx + 0x35cu); M32(m_) = (u32)(eax); }
  /* 004e2dd6 jge 0x4e2dde */ if (!LT_) goto L_004e2dde;
  /* 004e2dd8 mov dword ptr [ebx + 0x35c], esi */ { const u32 m_ = (u32)(ebx + 0x35cu); M32(m_) = (u32)(esi); }
L_004e2dde:;
  /* 004e2dde fcomp dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2de4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2de6 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2de9 jp 0x4e2e5c */ if (PF_) goto L_004e2e5c;
  /* 004e2deb mov ecx, dword ptr [ebx + 0x35c] */ { const u32 m_ = (u32)(ebx + 0x35cu); ecx = (u32)(M32(m_)); }
  /* 004e2df1 mov eax, 3 */ { eax = (u32)(0x3u); }
  /* 004e2df6 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e2df8 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e2dfb mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004e2dfe fild dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 004e2e01 fld dword ptr [0x6570c8] */ { const u32 m_ = (u32)(0x6570c8u); FPUSH((double)MF32(m_)); }
  /* 004e2e07 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e2e0d fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e2e0f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2e11 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2e13 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2e15 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2e17 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e2e19 fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2e1c fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2e22 fstp dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2e28 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2e2b fadd dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2e31 fstp dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2e37 fmul dword ptr [0x6571d8] */ { const u32 m_ = (u32)(0x6571d8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2e3d fstp dword ptr [ebx + 0x360] */ { const u32 m_ = (u32)(ebx + 0x360u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2e43 jmp 0x4e2e52 */ goto L_004e2e52;
L_004e2e45:;
  /* 004e2e45 fcomp dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2e4b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2e4d test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2e50 jne 0x4e2e5c */ if (!ZF_) goto L_004e2e5c;
L_004e2e52:;
  /* 004e2e52 mov dword ptr [ebx + 0x35c], 4 */ { const u32 m_ = (u32)(ebx + 0x35cu); M32(m_) = (u32)(0x4u); }
L_004e2e5c:;
  /* 004e2e5c fld dword ptr [ebx + 0x360] */ { const u32 m_ = (u32)(ebx + 0x360u); FPUSH((double)MF32(m_)); }
  /* 004e2e62 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2e68 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2e6a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2e6d jne 0x4e2e8a */ if (!ZF_) goto L_004e2e8a;
  /* 004e2e6f fld dword ptr [ebx + 0x360] */ { const u32 m_ = (u32)(ebx + 0x360u); FPUSH((double)MF32(m_)); }
  /* 004e2e75 mov ecx, dword ptr [ebx + 0x1b4] */ { const u32 m_ = (u32)(ebx + 0x1b4u); ecx = (u32)(M32(m_)); }
  /* 004e2e7b fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e2e7e mov dword ptr [ebx + 0x1a0], ecx */ { const u32 m_ = (u32)(ebx + 0x1a0u); M32(m_) = (u32)(ecx); }
  /* 004e2e84 fstp dword ptr [ebx + 0x360] */ { const u32 m_ = (u32)(ebx + 0x360u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e2e8a:;
  /* 004e2e8a mov eax, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); eax = (u32)(M32(m_)); }
  /* 004e2e90 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004e2e92 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2e94 je 0x4e2f36 */ if (ZF_) goto L_004e2f36;
  /* 004e2e9a fld dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); FPUSH((double)MF32(m_)); }
  /* 004e2ea0 fsub dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e2ea3 fstp dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2ea9 mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e2eac fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2eaf fmul dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2eb5 fadd dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2eb8 fstp dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2ebb mov edx, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); edx = (u32)(M32(m_)); }
  /* 004e2ec1 mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e2ec4 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e2ec7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e2ec8 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e2ecdu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e2ec8u); RETCHK(0x4e2ecdu, 0x4e2ec8u); LOADALL;
  /* 004e2ecd mov ecx, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); ecx = (u32)(M32(m_)); }
  /* 004e2ed3 mov edx, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e2ed6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e2ed7 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e2edcu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e2ed7u); RETCHK(0x4e2edcu, 0x4e2ed7u); LOADALL;
  /* 004e2edc fld dword ptr [ebx + 0x354] */ { const u32 m_ = (u32)(ebx + 0x354u); FPUSH((double)MF32(m_)); }
  /* 004e2ee2 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e2ee8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2eeb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2eed test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2ef0 jp 0x4e2f36 */ if (PF_) goto L_004e2f36;
  /* 004e2ef2 mov esi, dword ptr [ebx + 0x358] */ { const u32 m_ = (u32)(ebx + 0x358u); esi = (u32)(M32(m_)); }
  /* 004e2ef8 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2efa je 0x4e2f09 */ if (ZF_) goto L_004e2f09;
  /* 004e2efc cmp dword ptr [0x7a6cd8], edi */ { const u32 m_ = (u32)(0x7a6cd8u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2f02 je 0x4e2f09 */ if (ZF_) goto L_004e2f09;
  /* 004e2f04 call 0x531380 */ esp -= 4; M32(esp) = 0x4e2f09u; SAVEALL; F_00531380(c); ABI_CHECK(0x531380u, 0x4e2f04u); RETCHK(0x4e2f09u, 0x4e2f04u); LOADALL;
L_004e2f09:;
  /* 004e2f09 mov eax, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); eax = (u32)(M32(m_)); }
  /* 004e2f0f mov dword ptr [ebx + 0x358], edi */ { const u32 m_ = (u32)(ebx + 0x358u); M32(m_) = (u32)(edi); }
  /* 004e2f15 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4e2f1au; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4e2f15u); RETCHK(0x4e2f1au, 0x4e2f15u); LOADALL;
  /* 004e2f1a mov eax, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); eax = (u32)(M32(m_)); }
  /* 004e2f20 mov dword ptr [eax + 0x34], edi */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(edi); }
  /* 004e2f23 mov ecx, dword ptr [ebx + 0x350] */ { const u32 m_ = (u32)(ebx + 0x350u); ecx = (u32)(M32(m_)); }
  /* 004e2f29 mov dword ptr [ecx + 0x38], 1 */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004e2f30 mov dword ptr [ebx + 0x350], edi */ { const u32 m_ = (u32)(ebx + 0x350u); M32(m_) = (u32)(edi); }
L_004e2f36:;
  /* 004e2f36 cmp dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2f39 je 0x4e3bf5 */ if (ZF_) goto L_004e3bf5;
  /* 004e2f3f fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2f42 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004e2f45 fmul dword ptr [0x6571d4] */ { const u32 m_ = (u32)(0x6571d4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2f4b mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004e2f4d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004e2f4f lea ecx, [ebx + 0x53c] */ ecx = (u32)((u32)(ebx + 0x53cu));
  /* 004e2f55 fstp dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2f5b mov dword ptr [ebp - 0x58], edi */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(edi); }
  /* 004e2f5e mov dword ptr [ebx + 0x57c], eax */ { const u32 m_ = (u32)(ebx + 0x57cu); M32(m_) = (u32)(eax); }
  /* 004e2f64 mov dword ptr [ebp - 0x44], edi */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(edi); }
  /* 004e2f67 mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 004e2f6a mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 004e2f6d lea esi, [ebx + 0x378] */ esi = (u32)((u32)(ebx + 0x378u));
  /* 004e2f73 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 004e2f76 jmp 0x4e2f80 */ goto L_004e2f80;
L_004e2f80:;
  /* 004e2f80 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 004e2f83 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004e2f85 mov edx, dword ptr [ebx + 0x4d0] */ { const u32 m_ = (u32)(ebx + 0x4d0u); edx = (u32)(M32(m_)); }
  /* 004e2f8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e2f8c mov dword ptr [ebp - 0x68], edx */ { const u32 m_ = (u32)(ebp + 0xffffff98u); M32(m_) = (u32)(edx); }
  /* 004e2f8f call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e2f94u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e2f8fu); RETCHK(0x4e2f94u, 0x4e2f8fu); LOADALL;
  /* 004e2f94 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e2f97 fmul dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2f9d mov edx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); edx = (u32)(M32(m_)); }
  /* 004e2fa0 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 004e2fa3 add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e2fa6 fadd dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2fa9 mov dword ptr [ebp - 0x74], edx */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M32(m_) = (u32)(edx); }
  /* 004e2fac mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e2faf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e2fb2 fst dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); MF32(m_) = (float)ST(0); }
  /* 004e2fb5 mov dword ptr [ebp - 0x70], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M32(m_) = (u32)(ecx); }
  /* 004e2fb8 fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e2fbe mov dword ptr [ebp - 0x6c], edx */ { const u32 m_ = (u32)(ebp + 0xffffff94u); M32(m_) = (u32)(edx); }
  /* 004e2fc1 fcom dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e2fc7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e2fc9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e2fcc jne 0x4e2fd9 */ if (!ZF_) goto L_004e2fd9;
  /* 004e2fce fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e2fd0 mov dword ptr [ebp - 0x24], 0xc0c00000 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0xc0c00000u); }
  /* 004e2fd7 jmp 0x4e2fe5 */ goto L_004e2fe5;
L_004e2fd9:;
  /* 004e2fd9 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e2fdc fsub dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e2fe2 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
L_004e2fe5:;
  /* 004e2fe5 cmp edi, 1 */ { u32 a_ = edi, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e2fe8 fld dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); FPUSH((double)MF32(m_)); }
  /* 004e2feb mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 004e2fee mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 004e2ff1 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 004e2ff4 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e2ff7 fld dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); FPUSH((double)MF32(m_)); }
  /* 004e2ffa mov dword ptr [ebp - 0x50], eax */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(eax); }
  /* 004e2ffd fadd dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3003 mov eax, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); eax = (u32)(M32(m_)); }
  /* 004e3009 mov dword ptr [ebp - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 004e300c mov dword ptr [ebp - 0x48], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(edx); }
  /* 004e300f fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3012 fld dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); FPUSH((double)MF32(m_)); }
  /* 004e3015 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 004e3018 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e301b jle 0x4e3029 */ if ((ZF_|LT_)) goto L_004e3029;
  /* 004e301d fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3020 fmul dword ptr [0x6571e8] */ { const u32 m_ = (u32)(0x6571e8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3026 fstp dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); MF32(m_) = (float)ST(0); FPOP(); }
L_004e3029:;
  /* 004e3029 mov ecx, dword ptr [0x63f690] */ { const u32 m_ = (u32)(0x63f690u); ecx = (u32)(M32(m_)); }
  /* 004e302f fld dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); FPUSH((double)MF32(m_)); }
  /* 004e3032 fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3034 mov edx, dword ptr [0x63f694] */ { const u32 m_ = (u32)(0x63f694u); edx = (u32)(M32(m_)); }
  /* 004e303a mov eax, dword ptr [0x63f698] */ { const u32 m_ = (u32)(0x63f698u); eax = (u32)(M32(m_)); }
  /* 004e303f mov dword ptr [ebp - 0x94], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(ecx); }
  /* 004e3045 fsubr dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004e3048 mov dword ptr [ebp - 0x90], edx */ { const u32 m_ = (u32)(ebp + 0xffffff70u); M32(m_) = (u32)(edx); }
  /* 004e304e mov edx, dword ptr [ebx + 0x534] */ { const u32 m_ = (u32)(ebx + 0x534u); edx = (u32)(M32(m_)); }
  /* 004e3054 lea ecx, [ebp - 0xb4] */ ecx = (u32)((u32)(ebp + 0xffffff4cu));
  /* 004e305a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e305b fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e305e mov dword ptr [ebp - 0x8c], eax */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M32(m_) = (u32)(eax); }
  /* 004e3064 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e3065 lea eax, [ebp - 0x94] */ eax = (u32)((u32)(ebp + 0xffffff6cu));
  /* 004e306b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004e306e lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 004e3071 mov dword ptr [ebp - 0xb4], 3 */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(0x3u); }
  /* 004e307b call 0x405500 */ esp -= 4; M32(esp) = 0x4e3080u; SAVEALL; F_00405500(c); ABI_CHECK(0x405500u, 0x4e307bu); RETCHK(0x4e3080u, 0x4e307bu); LOADALL;
  /* 004e3080 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3083 mov eax, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); eax = (u32)(M32(m_)); }
  /* 004e3089 mov ecx, dword ptr [ebx + 0x57c] */ { const u32 m_ = (u32)(ebx + 0x57cu); ecx = (u32)(M32(m_)); }
  /* 004e308f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3092 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e3094 je 0x4e3099 */ if (ZF_) goto L_004e3099;
  /* 004e3096 inc dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_004e3099:;
  /* 004e3099 cmp dword ptr [ebp - 0x44], 2 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); u32 a_ = M32(m_), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e309d jle 0x4e30a4 */ if ((ZF_|LT_)) goto L_004e30a4;
  /* 004e309f mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004e30a2 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_004e30a4:;
  /* 004e30a4 mov cl, byte ptr [ebx + 0x33c] */ { const u32 m_ = (u32)(ebx + 0x33cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e30aa test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e30ac je 0x4e30df */ if (ZF_) goto L_004e30df;
  /* 004e30ae fld dword ptr [ebx + 0x340] */ { const u32 m_ = (u32)(ebx + 0x340u); FPUSH((double)MF32(m_)); }
  /* 004e30b4 fcomp dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e30ba fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e30bc test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e30bf jne 0x4e30cf */ if (!ZF_) goto L_004e30cf;
  /* 004e30c1 mov eax, dword ptr [ebx + 0x638] */ { const u32 m_ = (u32)(ebx + 0x638u); eax = (u32)(M32(m_)); }
  /* 004e30c7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e30c9 jne 0x4e3cdf */ if (!ZF_) goto L_004e3cdf;
L_004e30cf:;
  /* 004e30cf mov edx, dword ptr [ebx + 0x340] */ { const u32 m_ = (u32)(ebx + 0x340u); edx = (u32)(M32(m_)); }
  /* 004e30d5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e30d6 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004e30d8 call 0x4e6a20 */ esp -= 4; M32(esp) = 0x4e30ddu; SAVEALL; F_004e6a20(c); ABI_CHECK(0x4e6a20u, 0x4e30d8u); RETCHK(0x4e30ddu, 0x4e30d8u); LOADALL;
  /* 004e30dd jmp 0x4e30f4 */ goto L_004e30f4;
L_004e30df:;
  /* 004e30df cmp eax, 0xe */ { u32 a_ = eax, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e30e2 jl 0x4e30f4 */ if (LT_) goto L_004e30f4;
  /* 004e30e4 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 004e30ea push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e30eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e30ec call 0x4e68e0 */ esp -= 4; M32(esp) = 0x4e30f1u; SAVEALL; F_004e68e0(c); ABI_CHECK(0x4e68e0u, 0x4e30ecu); RETCHK(0x4e30f1u, 0x4e30ecu); LOADALL;
  /* 004e30f1 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004e30f4:;
  /* 004e30f4 mov edx, dword ptr [ebx + 0x54c] */ { const u32 m_ = (u32)(ebx + 0x54cu); edx = (u32)(M32(m_)); }
  /* 004e30fa push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e30fb call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e3100u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e30fbu); RETCHK(0x4e3100u, 0x4e30fbu); LOADALL;
  /* 004e3100 fld dword ptr [esi] */ { const u32 m_ = (u32)(esi); FPUSH((double)MF32(m_)); }
  /* 004e3102 fadd dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3105 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3108 fsubr dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004e310b fst dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); }
  /* 004e310e fld dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); FPUSH((double)MF32(m_)); }
  /* 004e3114 fmul dword ptr [ebx + 0x4d4] */ { const u32 m_ = (u32)(ebx + 0x4d4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e311a fmul dword ptr [0x657198] */ { const u32 m_ = (u32)(0x657198u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3120 fdiv dword ptr [ebx + 0x4d0] */ { const u32 m_ = (u32)(ebx + 0x4d0u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e3126 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e3129 fadd dword ptr [ebx + 0x470] */ { const u32 m_ = (u32)(ebx + 0x470u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e312f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3131 fst dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); }
  /* 004e3134 mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e313a fdiv dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e313d fstp dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3140 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3143 fcomp dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3149 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e314b test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e314e je 0x4e3199 */ if (ZF_) goto L_004e3199;
  /* 004e3150 mov al, byte ptr [ebx + 0x33c] */ { const u32 m_ = (u32)(ebx + 0x33cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e3156 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3158 jne 0x4e3199 */ if (!ZF_) goto L_004e3199;
  /* 004e315a fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 004e315d xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004e315f fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3162 mov dword ptr [esi + 0x2c], ecx */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 004e3165 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3168 mov dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ecx); }
  /* 004e316b fmul dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e316e fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004e3171 fmul dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3174 fstp dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3177 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004e317a fadd st(2) */ ST(0) = FR(ST(0) + ST(2));
  /* 004e317c fstp dword ptr [esi - 0xc] */ { const u32 m_ = (u32)(esi + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e317f fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004e3182 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004e3184 fstp dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3187 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3189 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e318b fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004e318e fadd dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3191 fstp dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3194 fld dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); FPUSH((double)MF32(m_)); }
  /* 004e3197 jmp 0x4e31e8 */ goto L_004e31e8;
L_004e3199:;
  /* 004e3199 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004e319c fadd dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e319f fstp dword ptr [esi - 0xc] */ { const u32 m_ = (u32)(esi + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e31a2 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004e31a5 fadd dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e31a8 fstp dword ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e31ab fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004e31ae fadd dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e31b1 fadd dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e31b4 fstp dword ptr [esi - 8] */ { const u32 m_ = (u32)(esi + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e31b7 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e31ba fadd dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e31bd fst dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); }
  /* 004e31c0 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e31c6 fmul dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e31c9 fld dword ptr [ebx + 0x4d0] */ { const u32 m_ = (u32)(ebx + 0x4d0u); FPUSH((double)MF32(m_)); }
  /* 004e31cf fadd st(0), st(0) */ { double s0_ = ST(0); ST(0) = FR(ST(0) + s0_); }
  /* 004e31d1 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e31d4 fcom dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e31d7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e31d9 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e31dc jne 0x4e31e3 */ if (!ZF_) goto L_004e31e3;
  /* 004e31de fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e31e0 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
L_004e31e3:;
  /* 004e31e3 inc dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004e31e6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_004e31e8:;
  /* 004e31e8 fld dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); FPUSH((double)MF32(m_)); }
  /* 004e31ee mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 004e31f1 fmul dword ptr [ebx + 0x4d4] */ { const u32 m_ = (u32)(ebx + 0x4d4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e31f7 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004e31f8 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e31fb add esi, 0x3c */ { u32 a_ = esi, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004e31fe cmp edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e3201 fmul dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3207 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004e3209 mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 004e320c fmul dword ptr [esi - 0x18] */ { const u32 m_ = (u32)(esi + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e320f fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3211 fld dword ptr [ebx + 0x494] */ { const u32 m_ = (u32)(ebx + 0x494u); FPUSH((double)MF32(m_)); }
  /* 004e3217 fsub dword ptr [esi - 0x10] */ { const u32 m_ = (u32)(esi + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e321a fmul dword ptr [ebx + 0x4cc] */ { const u32 m_ = (u32)(ebx + 0x4ccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3220 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3222 fdiv dword ptr [ebx + 0x4d4] */ { const u32 m_ = (u32)(ebx + 0x4d4u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e3228 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e322b fmul dword ptr [0x656ef0] */ { const u32 m_ = (u32)(0x656ef0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3231 fadd dword ptr [ebx + 0x494] */ { const u32 m_ = (u32)(ebx + 0x494u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3237 fstp dword ptr [ebx + 0x494] */ { const u32 m_ = (u32)(ebx + 0x494u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e323d jl 0x4e2f80 */ if (LT_) goto L_004e2f80;
  /* 004e3243 mov eax, dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); eax = (u32)(M32(m_)); }
  /* 004e3246 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e3248 jle 0x4e3258 */ if ((ZF_|LT_)) goto L_004e3258;
  /* 004e324a mov byte ptr [ebx + 0x1d0], 0 */ { const u32 m_ = (u32)(ebx + 0x1d0u); M8(m_) = (u8)(0x0u); }
  /* 004e3251 mov byte ptr [ebx + 0x2f1], 0 */ { const u32 m_ = (u32)(ebx + 0x2f1u); M8(m_) = (u8)(0x0u); }
L_004e3258:;
  /* 004e3258 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e325b mov eax, dword ptr [ebx + 0x574] */ { const u32 m_ = (u32)(ebx + 0x574u); eax = (u32)(M32(m_)); }
  /* 004e3261 jle 0x4e32c9 */ if ((ZF_|LT_)) goto L_004e32c9;
  /* 004e3263 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e3265 jne 0x4e328f */ if (!ZF_) goto L_004e328f;
  /* 004e3267 mov edx, dword ptr [0x7a6c60] */ { const u32 m_ = (u32)(0x7a6c60u); edx = (u32)(M32(m_)); }
  /* 004e326d mov eax, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); eax = (u32)(M32(m_)); }
  /* 004e3273 imul edx, edx, 0x3c */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004e3276 add edx, 0x696cb8 */ { u32 a_ = edx, b_ = 0x696cb8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e327c mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 004e327e add eax, 0x54 */ { u32 a_ = eax, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e3281 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 004e3283 mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004e3286 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 004e3289 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e328c mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
L_004e328f:;
  /* 004e328f fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3292 mov dword ptr [ebx + 0x574], 1 */ { const u32 m_ = (u32)(ebx + 0x574u); M32(m_) = (u32)(0x1u); }
  /* 004e329c fmul dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e32a2 fmul dword ptr [0x657008] */ { const u32 m_ = (u32)(0x657008u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e32a8 fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e32ae fst dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); }
  /* 004e32b4 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e32ba fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e32bc test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e32bf jp 0x4e32f9 */ if (PF_) goto L_004e32f9;
  /* 004e32c1 mov dword ptr [ebx + 0x49c], ecx */ { const u32 m_ = (u32)(ebx + 0x49cu); M32(m_) = (u32)(ecx); }
  /* 004e32c7 jmp 0x4e32f9 */ goto L_004e32f9;
L_004e32c9:;
  /* 004e32c9 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e32cb je 0x4e32f3 */ if (ZF_) goto L_004e32f3;
  /* 004e32cd mov eax, dword ptr [0x7a6c60] */ { const u32 m_ = (u32)(0x7a6c60u); eax = (u32)(M32(m_)); }
  /* 004e32d2 mov edx, dword ptr [ebx + 0xa8] */ { const u32 m_ = (u32)(ebx + 0xa8u); edx = (u32)(M32(m_)); }
  /* 004e32d8 imul eax, eax, 0x3c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x3cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004e32db add eax, 0x696cac */ { u32 a_ = eax, b_ = 0x696cacu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e32e0 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 004e32e2 add edx, 0x54 */ { u32 a_ = edx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e32e5 mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 004e32e7 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004e32ea mov dword ptr [edx + 4], esi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(esi); }
  /* 004e32ed mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e32f0 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
L_004e32f3:;
  /* 004e32f3 mov dword ptr [ebx + 0x574], ecx */ { const u32 m_ = (u32)(ebx + 0x574u); M32(m_) = (u32)(ecx); }
L_004e32f9:;
  /* 004e32f9 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004e32fc cmp dword ptr [ecx], 0xc */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e32ff nop */ ;
  /* 004e3300 jmp 0x4e338a */ goto L_004e338a;
L_004e338a:;
  /* 004e338a fld dword ptr [ebx + 0x384] */ { const u32 m_ = (u32)(ebx + 0x384u); FPUSH((double)MF32(m_)); }
  /* 004e3390 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 004e3392 fdivr dword ptr [0x657194] */ { const u32 m_ = (u32)(0x657194u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 004e3398 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e339b fld dword ptr [ebx + 0x3a8] */ { const u32 m_ = (u32)(ebx + 0x3a8u); FPUSH((double)MF32(m_)); }
  /* 004e33a1 fsub dword ptr [ebx + 0x420] */ { const u32 m_ = (u32)(ebx + 0x420u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e33a7 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e33aa fld dword ptr [ebx + 0x3ac] */ { const u32 m_ = (u32)(ebx + 0x3acu); FPUSH((double)MF32(m_)); }
  /* 004e33b0 fsub dword ptr [ebx + 0x424] */ { const u32 m_ = (u32)(ebx + 0x424u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e33b6 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e33b9 fld dword ptr [ebx + 0x3b0] */ { const u32 m_ = (u32)(ebx + 0x3b0u); FPUSH((double)MF32(m_)); }
  /* 004e33bf fsub dword ptr [ebx + 0x428] */ { const u32 m_ = (u32)(ebx + 0x428u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e33c5 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e33c8 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 004e33cb fmul dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e33ce fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 004e33d1 fmul dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e33d4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e33d6 fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 004e33d9 fmul dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e33dc faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e33de fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e33e4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e33e6 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e33e9 jnp 0x4e3786 */ if (!PF_) goto L_004e3786;
  /* 004e33ef lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 004e33f2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e33f3 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004e33f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e33f6 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e33fbu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e33f6u); RETCHK(0x4e33fbu, 0x4e33f6u); LOADALL;
  /* 004e33fb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e33fd mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e3403 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3406 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3409 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e340b fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e340e fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3410 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e3412 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e3414 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e3416 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3418 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e341a fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e341c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e341e fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3424 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3426 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3428 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e342a test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e342d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e342f jne 0x4e343d */ if (!ZF_) goto L_004e343d;
  /* 004e3431 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3432 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3433 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e3438u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e3433u); RETCHK(0x4e3438u, 0x4e3433u); LOADALL;
  /* 004e3438 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e343a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e343d:;
  /* 004e343d fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3440 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3446 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3449 fst dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); }
  /* 004e344c fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e344e fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3450 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3452 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3458 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e345a fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e345d fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3460 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3466 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3469 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e346c mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3472 fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 004e3475 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3477 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3479 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e347f fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 004e3482 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3485 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3488 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e348e fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 004e3491 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3494 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3497 mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e349d fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e34a0 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e34a2 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e34a5 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e34a7 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e34a9 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e34ab fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e34ad faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e34af fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e34b1 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e34b3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e34b5 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e34bb fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e34bd fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e34bf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e34c1 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e34c4 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e34c6 jne 0x4e34d4 */ if (!ZF_) goto L_004e34d4;
  /* 004e34c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e34c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e34ca call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e34cfu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e34cau); RETCHK(0x4e34cfu, 0x4e34cau); LOADALL;
  /* 004e34cf fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e34d1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e34d4:;
  /* 004e34d4 fld dword ptr [ebx + 0x3e4] */ { const u32 m_ = (u32)(ebx + 0x3e4u); FPUSH((double)MF32(m_)); }
  /* 004e34da fsub dword ptr [ebx + 0x420] */ { const u32 m_ = (u32)(ebx + 0x420u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e34e0 fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e34e3 fld dword ptr [ebx + 0x3e8] */ { const u32 m_ = (u32)(ebx + 0x3e8u); FPUSH((double)MF32(m_)); }
  /* 004e34e9 fsub dword ptr [ebx + 0x424] */ { const u32 m_ = (u32)(ebx + 0x424u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e34ef fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e34f2 fld dword ptr [ebx + 0x3ec] */ { const u32 m_ = (u32)(ebx + 0x3ecu); FPUSH((double)MF32(m_)); }
  /* 004e34f8 fsub dword ptr [ebx + 0x428] */ { const u32 m_ = (u32)(ebx + 0x428u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e34fe fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3501 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004e3504 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3507 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004e350a fmul dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e350d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e350f fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004e3512 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3515 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3517 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e351d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e351f test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3522 jnp 0x4e3786 */ if (!PF_) goto L_004e3786;
  /* 004e3528 lea eax, [ebp - 0x18] */ eax = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004e352b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e352c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004e352e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e352f call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e3534u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e352fu); RETCHK(0x4e3534u, 0x4e352fu); LOADALL;
  /* 004e3534 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3536 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e353c fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e353f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3542 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e3544 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3547 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3549 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e354b fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e354d fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e354f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3551 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3553 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e3555 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3557 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e355d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e355f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3561 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3563 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3566 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3568 jne 0x4e3576 */ if (!ZF_) goto L_004e3576;
  /* 004e356a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e356b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e356c call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e3571u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e356cu); RETCHK(0x4e3571u, 0x4e356cu); LOADALL;
  /* 004e3571 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3573 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e3576:;
  /* 004e3576 mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e357c fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e357f fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e3581 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3583 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3585 mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e358b fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e358d fmul dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3590 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3593 mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e3599 fmul dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e359c fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e359f mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e35a5 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 004e35a8 fadd dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e35aa fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e35ac mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e35b2 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004e35b5 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e35b8 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e35bb mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e35c1 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 004e35c4 fadd dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e35c7 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e35ca mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e35d0 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e35d3 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e35d5 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e35d8 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e35da fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e35dc fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e35de fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e35e0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e35e2 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e35e4 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e35e6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e35e8 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e35ee fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e35f0 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e35f2 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e35f4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e35f7 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e35f9 jne 0x4e3607 */ if (!ZF_) goto L_004e3607;
  /* 004e35fb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e35fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e35fd call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e3602u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e35fdu); RETCHK(0x4e3602u, 0x4e35fdu); LOADALL;
  /* 004e3602 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3604 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e3607:;
  /* 004e3607 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e360d fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3610 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e3616 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3619 mov edx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); edx = (u32)(M32(m_)); }
  /* 004e361f fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3622 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3625 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3627 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3629 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e362f fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3632 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e3638 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e363a fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e363d fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e363f mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e3645 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3647 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e364a mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e3650 mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e3656 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3659 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e365b fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e365e fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3660 mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e3666 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3668 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e366b mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e3671 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3674 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e3676 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3679 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e367b fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e367d fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e367f fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e3681 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3683 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3685 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e3687 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3689 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e368f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3691 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3693 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3695 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3698 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e369a jne 0x4e36a8 */ if (!ZF_) goto L_004e36a8;
  /* 004e369c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e369d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e369e call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e36a3u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e369eu); RETCHK(0x4e36a3u, 0x4e369eu); LOADALL;
  /* 004e36a3 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e36a5 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e36a8:;
  /* 004e36a8 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e36ae fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e36b1 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e36b3 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e36b6 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e36b8 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e36ba fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e36bc fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e36be faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e36c0 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e36c2 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e36c4 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e36c6 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e36cc fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e36ce fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e36d0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e36d2 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e36d5 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e36d7 jne 0x4e36e5 */ if (!ZF_) goto L_004e36e5;
  /* 004e36d9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e36da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e36db call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e36e0u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e36dbu); RETCHK(0x4e36e0u, 0x4e36dbu); LOADALL;
  /* 004e36e0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e36e2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e36e5:;
  /* 004e36e5 mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e36eb fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e36ee mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e36f4 fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e36f7 mov edx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); edx = (u32)(M32(m_)); }
  /* 004e36fd fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3700 fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3703 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3705 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3707 mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e370d fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3710 mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e3716 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3718 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e371b fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e371d mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3723 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3725 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3728 mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e372e mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e3734 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3737 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3739 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e373c fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e373e mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e3744 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3746 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3749 mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e374f fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3752 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e3754 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3757 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3759 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e375b fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e375d fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e375f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3761 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3763 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e3765 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3767 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e376d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e376f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3771 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3773 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3776 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3778 jne 0x4e3786 */ if (!ZF_) goto L_004e3786;
  /* 004e377a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e377b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e377c call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e3781u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e377cu); RETCHK(0x4e3781u, 0x4e377cu); LOADALL;
  /* 004e3781 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3783 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e3786:;
  /* 004e3786 mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e378c fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e378f fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e3791 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e3793 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 004e3795 fld st(2) */ { double v_ = ST(2); FPUSH(v_); }
  /* 004e3797 fmul st(3) */ ST(0) = FR(ST(0) * ST(3));
  /* 004e3799 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e379b fsqrt */ ST(0) = FR(__builtin_sqrt(ST(0)));
  /* 004e379d fstp st(2) */ ST(2) = ST(0); FPOP();
  /* 004e379f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e37a1 fcom dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e37a4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e37a6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e37a9 jne 0x4e3933 */ if (!ZF_) goto L_004e3933;
  /* 004e37af fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e37b2 mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e37b8 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e37bb fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e37bd fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e37c0 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e37c2 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e37c4 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e37c6 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e37c8 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e37ca fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e37cc fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e37ce faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e37d0 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e37d6 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e37d8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e37da fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e37dc test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e37df fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e37e1 jne 0x4e37ef */ if (!ZF_) goto L_004e37ef;
  /* 004e37e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e37e4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e37e5 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e37eau; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e37e5u); RETCHK(0x4e37eau, 0x4e37e5u); LOADALL;
  /* 004e37ea fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e37ec add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e37ef:;
  /* 004e37ef mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e37f5 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e37f8 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e37fe fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3801 mov edx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); edx = (u32)(M32(m_)); }
  /* 004e3807 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e380a fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e380d fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e380f fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3811 mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e3817 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e381a mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e3820 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3822 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3825 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3827 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e382d fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e382f fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3832 mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e3838 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e383e fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3841 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3843 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3846 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3848 mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e384e fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e3850 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3853 mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e3859 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e385c fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e385e fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3861 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3863 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e3865 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e3867 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e3869 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e386b fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e386d fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e386f faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3871 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3877 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3879 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e387b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e387d test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3880 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3882 jne 0x4e3890 */ if (!ZF_) goto L_004e3890;
  /* 004e3884 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3885 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3886 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e388bu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e3886u); RETCHK(0x4e388bu, 0x4e3886u); LOADALL;
  /* 004e388b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e388d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e3890:;
  /* 004e3890 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3896 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3899 mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e389f fmul dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e38a2 mov edx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); edx = (u32)(M32(m_)); }
  /* 004e38a8 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e38ab fmul dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e38ae fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e38b0 fstp dword ptr [edx] */ { const u32 m_ = (u32)(edx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e38b2 mov eax, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); eax = (u32)(M32(m_)); }
  /* 004e38b8 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e38bb mov ecx, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); ecx = (u32)(M32(m_)); }
  /* 004e38c1 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e38c3 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e38c6 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e38c8 mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e38ce fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e38d0 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e38d3 mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e38d9 mov ecx, dword ptr [ebx + 0x554] */ { const u32 m_ = (u32)(ebx + 0x554u); ecx = (u32)(M32(m_)); }
  /* 004e38df fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e38e2 fmul dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e38e4 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e38e7 fmul dword ptr [eax] */ { const u32 m_ = (u32)(eax); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e38e9 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e38ef fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e38f1 fstp dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e38f4 mov ecx, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); ecx = (u32)(M32(m_)); }
  /* 004e38fa fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e38fd fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 004e38ff fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3902 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e3904 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e3906 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 004e3908 fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 004e390a faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e390c fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 004e390e fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e3910 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3912 fcomp dword ptr [0x656da8] */ { const u32 m_ = (u32)(0x656da8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3918 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e391a fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e391c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e391e test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3921 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3923 jne 0x4e3935 */ if (!ZF_) goto L_004e3935;
  /* 004e3925 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3926 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3927 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e392cu; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e3927u); RETCHK(0x4e392cu, 0x4e3927u); LOADALL;
  /* 004e392c fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e392e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3931 jmp 0x4e3935 */ goto L_004e3935;
L_004e3933:;
  /* 004e3933 fstp st(0) */ ST(0) = ST(0); FPOP();
L_004e3935:;
  /* 004e3935 mov edx, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); edx = (u32)(M32(m_)); }
  /* 004e393b add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e393e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e393f call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e3944u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e393fu); RETCHK(0x4e3944u, 0x4e393fu); LOADALL;
  /* 004e3944 mov eax, dword ptr [ebx + 0x538] */ { const u32 m_ = (u32)(ebx + 0x538u); eax = (u32)(M32(m_)); }
  /* 004e394a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e394b call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e3950u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e394bu); RETCHK(0x4e3950u, 0x4e394bu); LOADALL;
  /* 004e3950 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004e3953 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004e3955 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3958 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e395b jne 0x4e3970 */ if (!ZF_) goto L_004e3970;
  /* 004e395d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004e3960 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e3962 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e3964 mov ebx, 0x12f44b80 */ { ebx = (u32)(0x12f44b80u); }
  /* 004e3969 call 0x4e83b0 */ esp -= 4; M32(esp) = 0x4e396eu; SAVEALL; F_004e83b0(c); ABI_CHECK(0x4e83b0u, 0x4e3969u); RETCHK(0x4e396eu, 0x4e3969u); LOADALL;
  /* 004e396e mov ebx, esi */ { ebx = (u32)(esi); }
L_004e3970:;
  /* 004e3970 fld dword ptr [ebx + 0x3c0] */ { const u32 m_ = (u32)(ebx + 0x3c0u); FPUSH((double)MF32(m_)); }
  /* 004e3976 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e397c fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 004e397e mov edx, eax */ { edx = (u32)(eax); }
  /* 004e3980 fld dword ptr [ebx + 0x438] */ { const u32 m_ = (u32)(ebx + 0x438u); FPUSH((double)MF32(m_)); }
  /* 004e3986 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 004e3988 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 004e398a fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004e398c mov dword ptr [ebp - 0x80], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff80u); M32(m_) = (u32)(ecx); }
  /* 004e398f mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004e3992 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e3995 fdivp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) / s0_); FPOP(); }
  /* 004e3997 mov dword ptr [ebp - 0x7c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(ecx); }
  /* 004e399a mov dword ptr [ebp - 0x78], edx */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(edx); }
  /* 004e399d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004e399f fld dword ptr [ebx + 0x370] */ { const u32 m_ = (u32)(ebx + 0x370u); FPUSH((double)MF32(m_)); }
  /* 004e39a5 fadd dword ptr [ebx + 0x3ac] */ { const u32 m_ = (u32)(ebx + 0x3acu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e39ab fld dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); FPUSH((double)MF32(m_)); }
  /* 004e39b1 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 004e39b3 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 004e39b5 fld dword ptr [ebx + 0x3e8] */ { const u32 m_ = (u32)(ebx + 0x3e8u); FPUSH((double)MF32(m_)); }
  /* 004e39bb fadd dword ptr [ebx + 0x424] */ { const u32 m_ = (u32)(ebx + 0x424u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e39c1 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 004e39c3 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e39c5 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e39c8 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e39ce fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e39d0 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e39d3 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e39d9 fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e39dc mov ecx, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); ecx = (u32)(M32(m_)); }
  /* 004e39e2 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e39e5 mov eax, dword ptr [ebx + 0x480] */ { const u32 m_ = (u32)(ebx + 0x480u); eax = (u32)(M32(m_)); }
  /* 004e39eb fmul dword ptr [ebx + 0x494] */ { const u32 m_ = (u32)(ebx + 0x494u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e39f1 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e39f4 fsub dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e39f7 fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e39f9 fadd dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e39fc fstp dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e39ff mov edx, dword ptr [ebx + 0x480] */ { const u32 m_ = (u32)(ebx + 0x480u); edx = (u32)(M32(m_)); }
  /* 004e3a05 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3a08 fabs */ ST(0) = __builtin_fabs(ST(0));
  /* 004e3a0a fcomp dword ptr [ebx + 0x4c8] */ { const u32 m_ = (u32)(ebx + 0x4c8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3a10 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3a12 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3a15 jne 0x4e3a34 */ if (!ZF_) goto L_004e3a34;
  /* 004e3a17 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004e3a19 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004e3a1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e3a1d call 0x545e40 */ esp -= 4; M32(esp) = 0x4e3a22u; SAVEALL; F_00545e40(c); ABI_CHECK(0x545e40u, 0x4e3a1du); RETCHK(0x4e3a22u, 0x4e3a1du); LOADALL;
  /* 004e3a22 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 004e3a25 fild dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)(s32)M32(m_)); }
  /* 004e3a28 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3a2b fmul dword ptr [ebx + 0x4c8] */ { const u32 m_ = (u32)(ebx + 0x4c8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3a31 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e3a34:;
  /* 004e3a34 mov ecx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); ecx = (u32)(M32(m_)); }
  /* 004e3a3a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3a3b call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e3a40u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e3a3bu); RETCHK(0x4e3a40u, 0x4e3a3bu); LOADALL;
  /* 004e3a40 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004e3a43 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e3a44 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e3a49u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e3a44u); RETCHK(0x4e3a49u, 0x4e3a44u); LOADALL;
  /* 004e3a49 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3a4c mov edx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); edx = (u32)(M32(m_)); }
  /* 004e3a52 mov dword ptr [edx + 0x20], edi */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(edi); }
  /* 004e3a55 mov eax, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); eax = (u32)(M32(m_)); }
  /* 004e3a5b mov dword ptr [eax + 0x24], edi */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(edi); }
  /* 004e3a5e mov ecx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); ecx = (u32)(M32(m_)); }
  /* 004e3a64 mov dword ptr [ecx + 0x28], 0xbf800000 */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(0xbf800000u); }
  /* 004e3a6b mov edx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); edx = (u32)(M32(m_)); }
  /* 004e3a71 mov dword ptr [edx], 0xbf800000 */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0xbf800000u); }
  /* 004e3a77 mov eax, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); eax = (u32)(M32(m_)); }
  /* 004e3a7d mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 004e3a80 mov ecx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); ecx = (u32)(M32(m_)); }
  /* 004e3a86 mov dword ptr [ecx + 8], edi */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edi); }
  /* 004e3a89 mov edx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); edx = (u32)(M32(m_)); }
  /* 004e3a8f mov eax, dword ptr [0x63f690] */ { const u32 m_ = (u32)(0x63f690u); eax = (u32)(M32(m_)); }
  /* 004e3a94 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e3a97 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e3a99 mov ecx, dword ptr [0x63f694] */ { const u32 m_ = (u32)(0x63f694u); ecx = (u32)(M32(m_)); }
  /* 004e3a9f mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e3aa2 mov eax, dword ptr [0x63f698] */ { const u32 m_ = (u32)(0x63f698u); eax = (u32)(M32(m_)); }
  /* 004e3aa7 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e3aaa mov ecx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); ecx = (u32)(M32(m_)); }
  /* 004e3ab0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3ab1 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e3ab6u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e3ab1u); RETCHK(0x4e3ab6u, 0x4e3ab1u); LOADALL;
  /* 004e3ab6 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3ab9 fcomp dword ptr [0x656f50] */ { const u32 m_ = (u32)(0x656f50u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3abf add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3ac2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3ac4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3ac7 jne 0x4e3bd6 */ if (!ZF_) goto L_004e3bd6;
  /* 004e3acd mov eax, dword ptr [ebx + 0x558] */ { const u32 m_ = (u32)(ebx + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3ad3 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3ad6 fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3adc fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004e3ade fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3ae0 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3ae2 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3ae5 fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3aeb mov eax, dword ptr [ebx + 0x550] */ { const u32 m_ = (u32)(ebx + 0x550u); eax = (u32)(M32(m_)); }
  /* 004e3af1 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3af3 fdiv dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e3af6 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3af9 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3afc fmul dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3b02 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004e3b04 fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3b06 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3b08 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3b0b fmul dword ptr [ebx + 0x4a0] */ { const u32 m_ = (u32)(ebx + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3b11 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3b13 fstp dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3b19 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3b1c fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3b22 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3b24 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3b27 jne 0x4e3b32 */ if (!ZF_) goto L_004e3b32;
  /* 004e3b29 mov dword ptr [ebp + 0x14], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e3b30 jmp 0x4e3b49 */ goto L_004e3b49;
L_004e3b32:;
  /* 004e3b32 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3b35 fcomp dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3b3b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3b3d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3b40 jp 0x4e3b49 */ if (PF_) goto L_004e3b49;
  /* 004e3b42 mov dword ptr [ebp + 0x14], 0xbf800000 */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(0xbf800000u); }
L_004e3b49:;
  /* 004e3b49 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3b4c call 0x5fedb6 */ { ST(0) = m_acos(ST(0)); }
  /* 004e3b51 fmul dword ptr [0x7a7f18] */ { const u32 m_ = (u32)(0x7a7f18u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3b57 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3b5d fcom dword ptr [0x657200] */ { const u32 m_ = (u32)(0x657200u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e3b63 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3b65 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3b68 jne 0x4e3b70 */ if (!ZF_) goto L_004e3b70;
  /* 004e3b6a fsubr dword ptr [0x656e98] */ { const u32 m_ = (u32)(0x656e98u); ST(0) = FR((double)MF32(m_) - ST(0)); }
L_004e3b70:;
  /* 004e3b70 fcom dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 004e3b76 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3b78 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3b7b jne 0x4e3bea */ if (!ZF_) goto L_004e3bea;
  /* 004e3b7d fsub dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e3b83 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3b86 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3b89 fcomp dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3b8f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3b91 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3b94 jne 0x4e3b9d */ if (!ZF_) goto L_004e3b9d;
  /* 004e3b96 mov dword ptr [ebp + 0x14], 0x41200000 */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(0x41200000u); }
L_004e3b9d:;
  /* 004e3b9d fld dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); FPUSH((double)MF32(m_)); }
  /* 004e3ba3 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3ba9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3bab test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3bae jne 0x4e3bb8 */ if (!ZF_) goto L_004e3bb8;
  /* 004e3bb0 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3bb3 fchs */ ST(0) = -ST(0);
  /* 004e3bb5 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e3bb8:;
  /* 004e3bb8 mov edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (u32)(M32(m_)); }
  /* 004e3bbb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e3bbc mov edx, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); edx = (u32)(M32(m_)); }
  /* 004e3bc2 call 0x546760 */ esp -= 4; M32(esp) = 0x4e3bc7u; SAVEALL; F_00546760(c); ABI_CHECK(0x546760u, 0x4e3bc2u); RETCHK(0x4e3bc7u, 0x4e3bc2u); LOADALL;
  /* 004e3bc7 mov eax, dword ptr [ebx + 0x484] */ { const u32 m_ = (u32)(ebx + 0x484u); eax = (u32)(M32(m_)); }
  /* 004e3bcd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e3bce call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e3bd3u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e3bceu); RETCHK(0x4e3bd3u, 0x4e3bceu); LOADALL;
  /* 004e3bd3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e3bd6:;
  /* 004e3bd6 mov ecx, dword ptr [ebx + 0x54c] */ { const u32 m_ = (u32)(ebx + 0x54cu); ecx = (u32)(M32(m_)); }
  /* 004e3bdc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3bdd call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e3be2u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e3bddu); RETCHK(0x4e3be2u, 0x4e3bddu); LOADALL;
  /* 004e3be2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3be5 jmp 0x4e3e20 */ goto L_004e3e20;
L_004e3bea:;
  /* 004e3bea fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3bec mov dword ptr [ebp + 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004e3bf3 jmp 0x4e3b9d */ goto L_004e3b9d;
L_004e3bf5:;
  /* 004e3bf5 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 004e3bfb lea esi, [ebx + 0x3a4] */ esi = (u32)((u32)(ebx + 0x3a4u));
  /* 004e3c01 mov dword ptr [ebp - 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x0u); }
  /* 004e3c08 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 004e3c0f mov eax, esi */ { eax = (u32)(esi); }
  /* 004e3c11 mov ecx, 4 */ { ecx = (u32)(0x4u); }
L_004e3c16:;
  /* 004e3c16 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3c19 add eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e3c1c dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004e3c1d fmul dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3c23 fadd dword ptr [eax - 0x3c] */ { const u32 m_ = (u32)(eax + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3c26 fadd dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3c29 fst dword ptr [eax - 0x3c] */ { const u32 m_ = (u32)(eax + 0xffffffc4u); MF32(m_) = (float)ST(0); }
  /* 004e3c2c faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3c2e jne 0x4e3c16 */ if (!ZF_) goto L_004e3c16;
  /* 004e3c30 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3c33 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e3c39 fmul dword ptr [0x6570c8] */ { const u32 m_ = (u32)(0x6570c8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3c3f mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 004e3c42 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 004e3c44 mov dword ptr [ebx + 0x494], 0 */ { const u32 m_ = (u32)(ebx + 0x494u); M32(m_) = (u32)(0x0u); }
  /* 004e3c4e fstp dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3c51 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e3c52 fmul dword ptr [0x656e54] */ { const u32 m_ = (u32)(0x656e54u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3c58 fmul dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3c5b fsub dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e3c61 fsub dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e3c64 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3c67 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004e3c69 fstp dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3c6c fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3c6f fadd dword ptr [0x656d84] */ { const u32 m_ = (u32)(0x656d84u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3c75 fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3c78 fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3c7b mov dword ptr [ebx + 0x57c], edx */ { const u32 m_ = (u32)(ebx + 0x57cu); M32(m_) = (u32)(edx); }
  /* 004e3c81 mov eax, dword ptr [0x63f690] */ { const u32 m_ = (u32)(0x63f690u); eax = (u32)(M32(m_)); }
  /* 004e3c86 mov ecx, dword ptr [0x63f694] */ { const u32 m_ = (u32)(0x63f694u); ecx = (u32)(M32(m_)); }
  /* 004e3c8c mov edx, dword ptr [0x63f698] */ { const u32 m_ = (u32)(0x63f698u); edx = (u32)(M32(m_)); }
  /* 004e3c92 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 004e3c95 mov eax, dword ptr [ebx + 0x534] */ { const u32 m_ = (u32)(ebx + 0x534u); eax = (u32)(M32(m_)); }
  /* 004e3c9b mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 004e3c9e mov dword ptr [ebp - 0x20], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edx); }
  /* 004e3ca1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e3ca2 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3ca5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004e3ca7 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 004e3caa lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 004e3cad call 0x405500 */ esp -= 4; M32(esp) = 0x4e3cb2u; SAVEALL; F_00405500(c); ABI_CHECK(0x405500u, 0x4e3cadu); RETCHK(0x4e3cb2u, 0x4e3cadu); LOADALL;
  /* 004e3cb2 fstp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3cb5 mov al, byte ptr [ebx + 0x33c] */ { const u32 m_ = (u32)(ebx + 0x33cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e3cbb add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3cbe test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3cc0 je 0x4e3cfc */ if (ZF_) goto L_004e3cfc;
  /* 004e3cc2 fld dword ptr [ebx + 0x340] */ { const u32 m_ = (u32)(ebx + 0x340u); FPUSH((double)MF32(m_)); }
  /* 004e3cc8 fcomp dword ptr [0x656f5c] */ { const u32 m_ = (u32)(0x656f5cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3cce fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3cd0 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3cd3 jne 0x4e3d10 */ if (!ZF_) goto L_004e3d10;
  /* 004e3cd5 mov eax, dword ptr [ebx + 0x638] */ { const u32 m_ = (u32)(ebx + 0x638u); eax = (u32)(M32(m_)); }
  /* 004e3cdb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3cdd je 0x4e3d10 */ if (ZF_) goto L_004e3d10;
L_004e3cdf:;
  /* 004e3cdf mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004e3ce2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3ce3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e3ce4 call 0x4e6a90 */ esp -= 4; M32(esp) = 0x4e3ce9u; SAVEALL; F_004e6a90(c); ABI_CHECK(0x4e6a90u, 0x4e3ce4u); RETCHK(0x4e3ce9u, 0x4e3ce4u); LOADALL;
  /* 004e3ce9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004e3cec mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004e3cf3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004e3cf4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004e3cf5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004e3cf6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004e3cf8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004e3cf9 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_004e3cfc:;
  /* 004e3cfc mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 004e3cfe cmp eax, 0xe */ { u32 a_ = eax, b_ = 0xeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e3d01 jl 0x4e3d10 */ if (LT_) goto L_004e3d10;
  /* 004e3d03 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 004e3d06 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e3d07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e3d08 call 0x4e68e0 */ esp -= 4; M32(esp) = 0x4e3d0du; SAVEALL; F_004e68e0(c); ABI_CHECK(0x4e68e0u, 0x4e3d08u); RETCHK(0x4e3d0du, 0x4e3d08u); LOADALL;
  /* 004e3d0d mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
L_004e3d10:;
  /* 004e3d10 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3d13 fcomp dword ptr [0x656dcc] */ { const u32 m_ = (u32)(0x656dccu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3d19 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3d1b test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3d1e je 0x4e3dca */ if (ZF_) goto L_004e3dca;
  /* 004e3d24 fld dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)MF32(m_)); }
  /* 004e3d27 fsub dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e3d2a fdiv dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e3d2d fcomp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3d30 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3d32 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3d35 jnp 0x4e3dca */ if (!PF_) goto L_004e3dca;
  /* 004e3d3b fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3d3e mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e3d44 fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3d4a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004e3d4c mov dword ptr [ebx + 0x574], edx */ { const u32 m_ = (u32)(ebx + 0x574u); M32(m_) = (u32)(edx); }
  /* 004e3d52 fld st(0) */ { double v_ = ST(0); FPUSH(v_); }
  /* 004e3d54 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3d57 fmul dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3d5a fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3d5d fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 004e3d5f fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3d62 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004e3d65 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004e3d67 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3d69 mov ecx, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); ecx = (u32)(M32(m_)); }
  /* 004e3d6f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3d71 fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004e3d74 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3d77 fstp dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3d7a fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004e3d7d mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e3d83 fadd dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3d86 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3d89 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3d8c fmul dword ptr [ebx + 0x4d8] */ { const u32 m_ = (u32)(ebx + 0x4d8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3d92 fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3d98 fadd dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3d9e fst dword ptr [ebx + 0x49c] */ { const u32 m_ = (u32)(ebx + 0x49cu); MF32(m_) = (float)ST(0); }
  /* 004e3da4 fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3daa fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3dac test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3daf jp 0x4e3db7 */ if (PF_) goto L_004e3db7;
  /* 004e3db1 mov dword ptr [ebx + 0x49c], edx */ { const u32 m_ = (u32)(ebx + 0x49cu); M32(m_) = (u32)(edx); }
L_004e3db7:;
  /* 004e3db7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004e3db9 mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 004e3dbe mov edi, edi */ { edi = (u32)(edi); }
L_004e3dc0:;
  /* 004e3dc0 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004e3dc2 add eax, 0x3c */ { u32 a_ = eax, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e3dc5 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004e3dc6 jne 0x4e3dc0 */ if (!ZF_) goto L_004e3dc0;
  /* 004e3dc8 jmp 0x4e3e08 */ goto L_004e3e08;
L_004e3dca:;
  /* 004e3dca fld dword ptr [ebp - 0x58] */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); FPUSH((double)MF32(m_)); }
  /* 004e3dcd mov ecx, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); ecx = (u32)(M32(m_)); }
  /* 004e3dd3 fadd dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e3dd6 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004e3dd9 fstp dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3ddb fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004e3dde mov edx, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); edx = (u32)(M32(m_)); }
  /* 004e3de4 fadd st(1) */ ST(0) = FR(ST(0) + ST(1));
  /* 004e3de6 fstp dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3de9 mov eax, dword ptr [ebx + 0x55c] */ { const u32 m_ = (u32)(ebx + 0x55cu); eax = (u32)(M32(m_)); }
  /* 004e3def fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e3df1 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004e3df4 fstp dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e3df7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004e3dfc mov dword ptr [ebx + 0x570], eax */ { const u32 m_ = (u32)(ebx + 0x570u); M32(m_) = (u32)(eax); }
  /* 004e3e02 mov dword ptr [ebx + 0x574], eax */ { const u32 m_ = (u32)(ebx + 0x574u); M32(m_) = (u32)(eax); }
L_004e3e08:;
  /* 004e3e08 cmp dword ptr [edi], 0xb */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e3e0b jne 0x4e3e20 */ if (!ZF_) goto L_004e3e20;
  /* 004e3e0d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 004e3e10 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e3e12 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e3e14 mov ebx, 0x12f44b80 */ { ebx = (u32)(0x12f44b80u); }
  /* 004e3e19 call 0x4e83b0 */ esp -= 4; M32(esp) = 0x4e3e1eu; SAVEALL; F_004e83b0(c); ABI_CHECK(0x4e83b0u, 0x4e3e19u); RETCHK(0x4e3e1eu, 0x4e3e19u); LOADALL;
  /* 004e3e1e mov ebx, esi */ { ebx = (u32)(esi); }
L_004e3e20:;
  /* 004e3e20 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004e3e23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e3e24 call 0x4e0c00 */ esp -= 4; M32(esp) = 0x4e3e29u; SAVEALL; F_004e0c00(c); ABI_CHECK(0x4e0c00u, 0x4e3e24u); RETCHK(0x4e3e29u, 0x4e3e24u); LOADALL;
  /* 004e3e29 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e3e2c mov ecx, dword ptr [edi + 0x538] */ { const u32 m_ = (u32)(edi + 0x538u); ecx = (u32)(M32(m_)); }
  /* 004e3e32 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e3e35 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e3e36 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e3e3bu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e3e36u); RETCHK(0x4e3e3bu, 0x4e3e36u); LOADALL;
  /* 004e3e3b mov edx, dword ptr [edi + 0x538] */ { const u32 m_ = (u32)(edi + 0x538u); edx = (u32)(M32(m_)); }
  /* 004e3e41 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e3e42 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e3e47u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e3e42u); RETCHK(0x4e3e47u, 0x4e3e42u); LOADALL;
  /* 004e3e47 mov ebx, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); ebx = (u32)(M32(m_)); }
  /* 004e3e4d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3e50 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e3e51 call 0x4fa2c0 */ esp -= 4; M32(esp) = 0x4e3e56u; SAVEALL; F_004fa2c0(c); ABI_CHECK(0x4fa2c0u, 0x4e3e51u); RETCHK(0x4e3e56u, 0x4e3e51u); LOADALL;
  /* 004e3e56 mov eax, edi */ { eax = (u32)(edi); }
  /* 004e3e58 call 0x4e5680 */ esp -= 4; M32(esp) = 0x4e3e5du; SAVEALL; F_004e5680(c); ABI_CHECK(0x4e5680u, 0x4e3e58u); RETCHK(0x4e3e5du, 0x4e3e58u); LOADALL;
  /* 004e3e5d call 0x4e5430 */ esp -= 4; M32(esp) = 0x4e3e62u; SAVEALL; F_004e5430(c); ABI_CHECK(0x4e5430u, 0x4e3e5du); RETCHK(0x4e3e62u, 0x4e3e5du); LOADALL;
  /* 004e3e62 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e3e63 mov eax, edi */ { eax = (u32)(edi); }
  /* 004e3e65 call 0x4e5d80 */ esp -= 4; M32(esp) = 0x4e3e6au; SAVEALL; F_004e5d80(c); ABI_CHECK(0x4e5d80u, 0x4e3e65u); RETCHK(0x4e3e6au, 0x4e3e65u); LOADALL;
  /* 004e3e6a mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 004e3e70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3e72 mov dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 004e3e79 je 0x4e40e1 */ if (ZF_) goto L_004e40e1;
  /* 004e3e7f mov eax, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 004e3e85 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3e87 je 0x4e40e1 */ if (ZF_) goto L_004e40e1;
  /* 004e3e8d mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004e3e93 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3e95 je 0x4e40e1 */ if (ZF_) goto L_004e40e1;
  /* 004e3e9b mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004e3ea1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3ea3 je 0x4e40e1 */ if (ZF_) goto L_004e40e1;
  /* 004e3ea9 mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 004e3eaf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3eb1 je 0x4e40e1 */ if (ZF_) goto L_004e40e1;
  /* 004e3eb7 mov eax, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 004e3ebd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3ebf je 0x4e40e1 */ if (ZF_) goto L_004e40e1;
  /* 004e3ec5 mov esi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); esi = (u32)(M32(m_)); }
  /* 004e3ec8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e3ec9 call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e3eceu; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e3ec9u); RETCHK(0x4e3eceu, 0x4e3ec9u); LOADALL;
  /* 004e3ece fst dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); MF32(m_) = (float)ST(0); }
  /* 004e3ed1 fcomp dword ptr [0x656ed4] */ { const u32 m_ = (u32)(0x656ed4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3ed7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e3eda fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3edc test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3edf jnp 0x4e409f */ if (!PF_) goto L_004e409f;
  /* 004e3ee5 mov eax, dword ptr [edi + 0x574] */ { const u32 m_ = (u32)(edi + 0x574u); eax = (u32)(M32(m_)); }
  /* 004e3eeb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e3eed jne 0x4e409f */ if (!ZF_) goto L_004e409f;
  /* 004e3ef3 mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 004e3ef9 call 0x54ad80 */ esp -= 4; M32(esp) = 0x4e3efeu; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4e3ef9u); RETCHK(0x4e3efeu, 0x4e3ef9u); LOADALL;
  /* 004e3efe mov eax, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 004e3f04 call 0x54ad80 */ esp -= 4; M32(esp) = 0x4e3f09u; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4e3f04u); RETCHK(0x4e3f09u, 0x4e3f04u); LOADALL;
  /* 004e3f09 fld dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); FPUSH((double)MF32(m_)); }
  /* 004e3f0c fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3f12 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3f14 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3f17 jne 0x4e40e1 */ if (!ZF_) goto L_004e40e1;
  /* 004e3f1d test byte ptr [edi + 0x564], 2 */ { const u32 m_ = (u32)(edi + 0x564u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3f24 jne 0x4e40e1 */ if (!ZF_) goto L_004e40e1;
  /* 004e3f2a mov eax, dword ptr [edi + 0x558] */ { const u32 m_ = (u32)(edi + 0x558u); eax = (u32)(M32(m_)); }
  /* 004e3f30 fld dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004e3f33 fmul dword ptr [edi + 0x49c] */ { const u32 m_ = (u32)(edi + 0x49cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3f39 fld dword ptr [eax] */ { const u32 m_ = (u32)(eax); FPUSH((double)MF32(m_)); }
  /* 004e3f3b fmul dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3f3d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3f3f fld dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004e3f42 fmul dword ptr [edi + 0x4a0] */ { const u32 m_ = (u32)(edi + 0x4a0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3f48 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 004e3f4a fdiv dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 004e3f4d fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 004e3f50 fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3f56 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3f58 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3f5b jne 0x4e3f66 */ if (!ZF_) goto L_004e3f66;
  /* 004e3f5d mov dword ptr [ebp + 0xc], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x3f800000u); }
  /* 004e3f64 jmp 0x4e3f7d */ goto L_004e3f7d;
L_004e3f66:;
  /* 004e3f66 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3f69 fcomp dword ptr [0x656dd0] */ { const u32 m_ = (u32)(0x656dd0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3f6f fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3f71 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3f74 jp 0x4e3f7d */ if (PF_) goto L_004e3f7d;
  /* 004e3f76 mov dword ptr [ebp + 0xc], 0xbf800000 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0xbf800000u); }
L_004e3f7d:;
  /* 004e3f7d fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3f80 call 0x5fedb6 */ { ST(0) = m_acos(ST(0)); }
  /* 004e3f85 fst dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); }
  /* 004e3f88 fcomp dword ptr [0x63f7e0] */ { const u32 m_ = (u32)(0x63f7e0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3f8e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3f90 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3f93 je 0x4e3fe9 */ if (ZF_) goto L_004e3fe9;
  /* 004e3f95 fld dword ptr [0x7a7f1c] */ { const u32 m_ = (u32)(0x7a7f1cu); FPUSH((double)MF32(m_)); }
  /* 004e3f9b fmul dword ptr [0x656f80] */ { const u32 m_ = (u32)(0x656f80u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e3fa1 fcomp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3fa4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3fa6 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3fa9 jp 0x4e401a */ if (PF_) goto L_004e401a;
  /* 004e3fab mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004e3fb1 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e3fb6u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e3fb1u); RETCHK(0x4e3fb6u, 0x4e3fb1u); LOADALL;
  /* 004e3fb6 mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 004e3fbc call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e3fc1u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e3fbcu); RETCHK(0x4e3fc1u, 0x4e3fbcu); LOADALL;
  /* 004e3fc1 mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 004e3fc7 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 004e3fca call 0x4fb020 */ esp -= 4; M32(esp) = 0x4e3fcfu; SAVEALL; F_004fb020(c); ABI_CHECK(0x4fb020u, 0x4e3fcau); RETCHK(0x4e3fcfu, 0x4e3fcau); LOADALL;
  /* 004e3fcf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3fd1 mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004e3fd7 je 0x4e4008 */ if (ZF_) goto L_004e4008;
L_004e3fd9:;
  /* 004e3fd9 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e3fdeu; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e3fd9u); RETCHK(0x4e3fdeu, 0x4e3fd9u); LOADALL;
  /* 004e3fde mov eax, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 004e3fe4 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e3fe9u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e3fe4u); RETCHK(0x4e3fe9u, 0x4e3fe4u); LOADALL;
L_004e3fe9:;
  /* 004e3fe9 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 004e3fec fcomp dword ptr [0x656dc0] */ { const u32 m_ = (u32)(0x656dc0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e3ff2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e3ff4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e3ff7 jne 0x4e40e1 */ if (!ZF_) goto L_004e40e1;
  /* 004e3ffd fld dword ptr [0x656dc0] */ { const u32 m_ = (u32)(0x656dc0u); FPUSH((double)MF32(m_)); }
  /* 004e4003 jmp 0x4e40e4 */ goto L_004e40e4;
L_004e4008:;
  /* 004e4008 call 0x54ad80 */ esp -= 4; M32(esp) = 0x4e400du; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4e4008u); RETCHK(0x4e400du, 0x4e4008u); LOADALL;
  /* 004e400d mov eax, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 004e4013 call 0x54ad80 */ esp -= 4; M32(esp) = 0x4e4018u; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4e4013u); RETCHK(0x4e4018u, 0x4e4013u); LOADALL;
  /* 004e4018 jmp 0x4e3fe9 */ goto L_004e3fe9;
L_004e401a:;
  /* 004e401a fld dword ptr [0x7a7f1c] */ { const u32 m_ = (u32)(0x7a7f1cu); FPUSH((double)MF32(m_)); }
  /* 004e4020 fmul dword ptr [0x6570d0] */ { const u32 m_ = (u32)(0x6570d0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e4026 fcomp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e4029 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e402b test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e402e jp 0x4e407e */ if (PF_) goto L_004e407e;
  /* 004e4030 mov ecx, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); ecx = (u32)(M32(m_)); }
  /* 004e4036 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004e4039 call 0x4fb020 */ esp -= 4; M32(esp) = 0x4e403eu; SAVEALL; F_004fb020(c); ABI_CHECK(0x4fb020u, 0x4e4039u); RETCHK(0x4e403eu, 0x4e4039u); LOADALL;
  /* 004e403e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4040 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004e4046 je 0x4e4063 */ if (ZF_) goto L_004e4063;
  /* 004e4048 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e404du; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e4048u); RETCHK(0x4e404du, 0x4e4048u); LOADALL;
  /* 004e404d mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 004e4053 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e4058u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e4053u); RETCHK(0x4e4058u, 0x4e4053u); LOADALL;
  /* 004e4058 mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004e405e jmp 0x4e3fd9 */ goto L_004e3fd9;
L_004e4063:;
  /* 004e4063 call 0x54ad80 */ esp -= 4; M32(esp) = 0x4e4068u; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4e4063u); RETCHK(0x4e4068u, 0x4e4063u); LOADALL;
  /* 004e4068 mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 004e406e call 0x54ad80 */ esp -= 4; M32(esp) = 0x4e4073u; SAVEALL; F_0054ad80(c); ABI_CHECK(0x54ad80u, 0x4e406eu); RETCHK(0x4e4073u, 0x4e406eu); LOADALL;
  /* 004e4073 mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004e4079 jmp 0x4e3fd9 */ goto L_004e3fd9;
L_004e407e:;
  /* 004e407e mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004e4084 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e4089u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e4084u); RETCHK(0x4e4089u, 0x4e4084u); LOADALL;
  /* 004e4089 mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 004e408f call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e4094u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e408fu); RETCHK(0x4e4094u, 0x4e408fu); LOADALL;
  /* 004e4094 mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004e409a jmp 0x4e3fd9 */ goto L_004e3fd9;
L_004e409f:;
  /* 004e409f mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 004e40a5 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e40aau; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e40a5u); RETCHK(0x4e40aau, 0x4e40a5u); LOADALL;
  /* 004e40aa mov eax, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 004e40b0 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e40b5u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e40b0u); RETCHK(0x4e40b5u, 0x4e40b0u); LOADALL;
  /* 004e40b5 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004e40bb call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e40c0u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e40bbu); RETCHK(0x4e40c0u, 0x4e40bbu); LOADALL;
  /* 004e40c0 mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 004e40c6 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e40cbu; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e40c6u); RETCHK(0x4e40cbu, 0x4e40c6u); LOADALL;
  /* 004e40cb mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004e40d1 call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e40d6u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e40d1u); RETCHK(0x4e40d6u, 0x4e40d1u); LOADALL;
  /* 004e40d6 mov eax, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 004e40dc call 0x54ad90 */ esp -= 4; M32(esp) = 0x4e40e1u; SAVEALL; F_0054ad90(c); ABI_CHECK(0x54ad90u, 0x4e40dcu); RETCHK(0x4e40e1u, 0x4e40dcu); LOADALL;
L_004e40e1:;
  /* 004e40e1 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
L_004e40e4:;
  /* 004e40e4 fsubr dword ptr [0x656dc0] */ { const u32 m_ = (u32)(0x656dc0u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004e40ea mov al, byte ptr [edi + 0x564] */ { const u32 m_ = (u32)(edi + 0x564u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e40f0 test al, 0xc */ { u32 a_ = (eax & 0xffu), b_ = 0xcu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e40f2 fmul dword ptr [0x657190] */ { const u32 m_ = (u32)(0x657190u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e40f8 fsubr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 004e40fe fst dword ptr [ebp - 0x138] */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); MF32(m_) = (float)ST(0); }
  /* 004e4104 fst dword ptr [ebp - 0x13c] */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); MF32(m_) = (float)ST(0); }
  /* 004e410a fstp dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4110 je 0x4e412f */ if (ZF_) goto L_004e412f;
  /* 004e4112 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e4114 lea edx, [ebp - 0x140] */ edx = (u32)((u32)(ebp + 0xfffffec0u));
  /* 004e411a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e411b lea eax, [ebp - 0x180] */ eax = (u32)((u32)(ebp + 0xfffffe80u));
  /* 004e4121 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4122 call 0x5af2d0 */ esp -= 4; M32(esp) = 0x4e4127u; SAVEALL; F_005af2d0(c); ABI_CHECK(0x5af2d0u, 0x4e4122u); RETCHK(0x4e4127u, 0x4e4122u); LOADALL;
  /* 004e4127 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e412a jmp 0x4e41b8 */ goto L_004e41b8;
L_004e412f:;
  /* 004e412f mov eax, dword ptr [ebp - 0x174] */ { const u32 m_ = (u32)(ebp + 0xfffffe8cu); eax = (u32)(M32(m_)); }
  /* 004e4135 or eax, 0x20003 */ { u32 a_ = eax, b_ = 0x20003u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004e413a mov dword ptr [ebp - 0x158], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffea8u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e4144 mov dword ptr [ebp - 0x16c], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffe94u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e414e mov dword ptr [ebp - 0x180], 0x3f800000 */ { const u32 m_ = (u32)(ebp + 0xfffffe80u); M32(m_) = (u32)(0x3f800000u); }
  /* 004e4158 mov dword ptr [ebp - 0x170], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffe90u); M32(m_) = (u32)(0x0u); }
  /* 004e4162 mov dword ptr [ebp - 0x178], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffe88u); M32(m_) = (u32)(0x0u); }
  /* 004e416c mov dword ptr [ebp - 0x17c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffe84u); M32(m_) = (u32)(0x0u); }
  /* 004e4176 mov dword ptr [ebp - 0x15c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffea4u); M32(m_) = (u32)(0x0u); }
  /* 004e4180 mov dword ptr [ebp - 0x160], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffea0u); M32(m_) = (u32)(0x0u); }
  /* 004e418a mov dword ptr [ebp - 0x168], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffe98u); M32(m_) = (u32)(0x0u); }
  /* 004e4194 mov dword ptr [ebp - 0x148], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeb8u); M32(m_) = (u32)(0x0u); }
  /* 004e419e mov dword ptr [ebp - 0x14c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); M32(m_) = (u32)(0x0u); }
  /* 004e41a8 mov dword ptr [ebp - 0x150], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeb0u); M32(m_) = (u32)(0x0u); }
  /* 004e41b2 mov dword ptr [ebp - 0x174], eax */ { const u32 m_ = (u32)(ebp + 0xfffffe8cu); M32(m_) = (u32)(eax); }
L_004e41b8:;
  /* 004e41b8 mov ecx, dword ptr [edi + 0x544] */ { const u32 m_ = (u32)(edi + 0x544u); ecx = (u32)(M32(m_)); }
  /* 004e41be push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e41bf call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e41c4u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e41bfu); RETCHK(0x4e41c4u, 0x4e41bfu); LOADALL;
  /* 004e41c4 mov edx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); edx = (u32)(M32(m_)); }
  /* 004e41c7 mov ecx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M32(m_)); }
  /* 004e41ca add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e41cd mov dword ptr [ebp - 0x50], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(edx); }
  /* 004e41d0 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e41d3 mov eax, dword ptr [edi + 0x548] */ { const u32 m_ = (u32)(edi + 0x548u); eax = (u32)(M32(m_)); }
  /* 004e41d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e41da mov dword ptr [ebp - 0x4c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(ecx); }
  /* 004e41dd mov dword ptr [ebp - 0x48], edx */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(edx); }
  /* 004e41e0 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e41e5u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e41e0u); RETCHK(0x4e41e5u, 0x4e41e0u); LOADALL;
  /* 004e41e5 mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 004e41e8 mov edx, dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); edx = (u32)(M32(m_)); }
  /* 004e41eb add eax, 0x30 */ { u32 a_ = eax, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e41ee mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e41f1 mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 004e41f4 mov ecx, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); ecx = (u32)(M32(m_)); }
  /* 004e41fa mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004e41fd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4200 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004e4202 mov dword ptr [ebp - 0x3c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edx); }
  /* 004e4205 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 004e4208 call 0x4fafd0 */ esp -= 4; M32(esp) = 0x4e420du; SAVEALL; F_004fafd0(c); ABI_CHECK(0x4fafd0u, 0x4e4208u); RETCHK(0x4e420du, 0x4e4208u); LOADALL;
  /* 004e420d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e420e call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e4213u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e420eu); RETCHK(0x4e4213u, 0x4e420eu); LOADALL;
  /* 004e4213 fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 004e4216 fsub dword ptr [edi + 0x3f0] */ { const u32 m_ = (u32)(edi + 0x3f0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e421c mov edx, dword ptr [edi + 0x57c] */ { const u32 m_ = (u32)(edi + 0x57cu); edx = (u32)(M32(m_)); }
  /* 004e4222 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004e4224 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004e4227 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004e4229 fstp dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e422c fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004e422f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4232 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4234 fsub dword ptr [edi + 0x42c] */ { const u32 m_ = (u32)(edi + 0x42cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e423a mov dword ptr [ebp + 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ebx); }
  /* 004e423d fstp dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4240 je 0x4e4328 */ if (ZF_) goto L_004e4328;
  /* 004e4246 mov eax, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004e4249 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e424b je 0x4e4328 */ if (ZF_) goto L_004e4328;
  /* 004e4251 mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 004e4257 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004e4259 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e425b je 0x4e427e */ if (ZF_) goto L_004e427e;
  /* 004e425d call 0x54ada0 */ esp -= 4; M32(esp) = 0x4e4262u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4e425du); RETCHK(0x4e4262u, 0x4e425du); LOADALL;
  /* 004e4262 mov ecx, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); ecx = (u32)(M32(m_)); }
  /* 004e4268 mov dword ptr [ecx + 0x34], edx */ { const u32 m_ = (u32)(ecx + 0x34u); M32(m_) = (u32)(edx); }
  /* 004e426b mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 004e4271 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004e4278 mov dword ptr [edi + 0x1b8], edx */ { const u32 m_ = (u32)(edi + 0x1b8u); M32(m_) = (u32)(edx); }
L_004e427e:;
  /* 004e427e mov eax, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 004e4284 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4286 je 0x4e42a9 */ if (ZF_) goto L_004e42a9;
  /* 004e4288 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4e428du; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4e4288u); RETCHK(0x4e428du, 0x4e4288u); LOADALL;
  /* 004e428d mov ecx, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); ecx = (u32)(M32(m_)); }
  /* 004e4293 mov dword ptr [ecx + 0x34], edx */ { const u32 m_ = (u32)(ecx + 0x34u); M32(m_) = (u32)(edx); }
  /* 004e4296 mov eax, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 004e429c mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004e42a3 mov dword ptr [edi + 0x1bc], edx */ { const u32 m_ = (u32)(edi + 0x1bcu); M32(m_) = (u32)(edx); }
L_004e42a9:;
  /* 004e42a9 mov al, byte ptr [edi + 0x33c] */ { const u32 m_ = (u32)(edi + 0x33cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e42af test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e42b1 jne 0x4e431c */ if (!ZF_) goto L_004e431c;
  /* 004e42b3 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 004e42b6 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004e42b8 mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 004e42be lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 004e42c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e42c2 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004e42c5 mov edx, dword ptr [edx + 0x63e818] */ { const u32 m_ = (u32)(edx + 0x63e818u); edx = (u32)(M32(m_)); }
  /* 004e42cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e42cc call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4e42d1u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4e42ccu); RETCHK(0x4e42d1u, 0x4e42ccu); LOADALL;
  /* 004e42d1 mov dword ptr [edi + 0x1b8], eax */ { const u32 m_ = (u32)(edi + 0x1b8u); M32(m_) = (u32)(eax); }
  /* 004e42d7 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 004e42d9 mov eax, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); eax = (u32)(M32(m_)); }
  /* 004e42df lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 004e42e2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e42e3 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004e42e6 mov edx, dword ptr [edx + 0x63e818] */ { const u32 m_ = (u32)(edx + 0x63e818u); edx = (u32)(M32(m_)); }
  /* 004e42ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e42ed call 0x4fbc90 */ esp -= 4; M32(esp) = 0x4e42f2u; SAVEALL; F_004fbc90(c); ABI_CHECK(0x4fbc90u, 0x4e42edu); RETCHK(0x4e42f2u, 0x4e42edu); LOADALL;
  /* 004e42f2 mov dword ptr [edi + 0x1bc], eax */ { const u32 m_ = (u32)(edi + 0x1bcu); M32(m_) = (u32)(eax); }
  /* 004e42f8 mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 004e42fe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4300 je 0x4e4309 */ if (ZF_) goto L_004e4309;
  /* 004e4302 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_004e4309:;
  /* 004e4309 mov eax, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 004e430f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4311 je 0x4e4328 */ if (ZF_) goto L_004e4328;
  /* 004e4313 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
  /* 004e431a jmp 0x4e4328 */ goto L_004e4328;
L_004e431c:;
  /* 004e431c mov dword ptr [edi + 0x1b8], edx */ { const u32 m_ = (u32)(edi + 0x1b8u); M32(m_) = (u32)(edx); }
  /* 004e4322 mov dword ptr [edi + 0x1bc], edx */ { const u32 m_ = (u32)(edi + 0x1bcu); M32(m_) = (u32)(edx); }
L_004e4328:;
  /* 004e4328 mov eax, dword ptr [edi + 0x1b8] */ { const u32 m_ = (u32)(edi + 0x1b8u); eax = (u32)(M32(m_)); }
  /* 004e432e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4330 je 0x4e437c */ if (ZF_) goto L_004e437c;
  /* 004e4332 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e4335 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 004e4338 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e433b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e4340 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e4342 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e4344 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e4347 mov esi, dword ptr [ecx + 0x1b8] */ { const u32 m_ = (u32)(ecx + 0x1b8u); esi = (u32)(M32(m_)); }
  /* 004e434d mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e4350 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 004e4353 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e4356 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e4358 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 004e435b mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e435e mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e4361 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e4364 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e4367 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e4368 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e436du; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e4368u); RETCHK(0x4e436du, 0x4e4368u); LOADALL;
  /* 004e436d mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e4370 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e4371 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e4376u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e4371u); RETCHK(0x4e4376u, 0x4e4371u); LOADALL;
  /* 004e4376 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e4379 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e437c:;
  /* 004e437c mov eax, dword ptr [edi + 0x1bc] */ { const u32 m_ = (u32)(edi + 0x1bcu); eax = (u32)(M32(m_)); }
  /* 004e4382 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4384 je 0x4e43d0 */ if (ZF_) goto L_004e43d0;
  /* 004e4386 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e4389 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e438c mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 004e438f add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e4392 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e4397 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e4399 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e439b mov esi, dword ptr [eax + 0x1bc] */ { const u32 m_ = (u32)(eax + 0x1bcu); esi = (u32)(M32(m_)); }
  /* 004e43a1 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e43a4 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 004e43a7 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e43aa mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004e43ac mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 004e43af mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004e43b2 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e43b5 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e43b8 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e43bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e43bc call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e43c1u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e43bcu); RETCHK(0x4e43c1u, 0x4e43bcu); LOADALL;
  /* 004e43c1 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e43c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e43c5 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e43cau; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e43c5u); RETCHK(0x4e43cau, 0x4e43c5u); LOADALL;
  /* 004e43ca mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e43cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e43d0:;
  /* 004e43d0 mov eax, dword ptr [edi + 0x1c8] */ { const u32 m_ = (u32)(edi + 0x1c8u); eax = (u32)(M32(m_)); }
  /* 004e43d6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e43d8 je 0x4e4424 */ if (ZF_) goto L_004e4424;
  /* 004e43da mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e43dd mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e43e0 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e43e3 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e43e8 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e43ea rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e43ec mov esi, dword ptr [edx + 0x1c8] */ { const u32 m_ = (u32)(edx + 0x1c8u); esi = (u32)(M32(m_)); }
  /* 004e43f2 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e43f5 mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 004e43f8 mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 004e43fb add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e43fe mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e4400 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 004e4403 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e4406 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e4409 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e440c add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e440f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e4410 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e4415u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e4410u); RETCHK(0x4e4415u, 0x4e4410u); LOADALL;
  /* 004e4415 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4418 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4419 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e441eu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e4419u); RETCHK(0x4e441eu, 0x4e4419u); LOADALL;
  /* 004e441e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e4421 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e4424:;
  /* 004e4424 mov eax, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004e442a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e442c je 0x4e4497 */ if (ZF_) goto L_004e4497;
  /* 004e442e test byte ptr [edi + 0x564], 8 */ { const u32 m_ = (u32)(edi + 0x564u); u32 a_ = M8(m_), b_ = 0x8u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4435 je 0x4e4450 */ if (ZF_) goto L_004e4450;
  /* 004e4437 mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e443a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e443b lea ecx, [ebp - 0x180] */ ecx = (u32)((u32)(ebp + 0xfffffe80u));
  /* 004e4441 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e4442 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e4445 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e4446 call 0x5ae8c0 */ esp -= 4; M32(esp) = 0x4e444bu; SAVEALL; F_005ae8c0(c); ABI_CHECK(0x5ae8c0u, 0x4e4446u); RETCHK(0x4e444bu, 0x4e4446u); LOADALL;
  /* 004e444b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e444e jmp 0x4e4462 */ goto L_004e4462;
L_004e4450:;
  /* 004e4450 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e4453 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e4456 mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e445b mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e445d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e445f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_004e4462:;
  /* 004e4462 mov esi, dword ptr [edi + 0x1cc] */ { const u32 m_ = (u32)(edi + 0x1ccu); esi = (u32)(M32(m_)); }
  /* 004e4468 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e446b mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 004e446e mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 004e4471 add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e4474 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e4476 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 004e4479 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e447c mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e447f mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e4482 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e4485 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e4486 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e448bu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e4486u); RETCHK(0x4e448bu, 0x4e4486u); LOADALL;
  /* 004e448b mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e448e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e448f call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e4494u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e448fu); RETCHK(0x4e4494u, 0x4e448fu); LOADALL;
  /* 004e4494 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e4497:;
  /* 004e4497 mov eax, dword ptr [edi + 0x1c0] */ { const u32 m_ = (u32)(edi + 0x1c0u); eax = (u32)(M32(m_)); }
  /* 004e449d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e449f je 0x4e44eb */ if (ZF_) goto L_004e44eb;
  /* 004e44a1 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e44a4 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 004e44a7 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e44aa mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e44af mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e44b1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e44b3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e44b6 mov esi, dword ptr [ecx + 0x1c0] */ { const u32 m_ = (u32)(ecx + 0x1c0u); esi = (u32)(M32(m_)); }
  /* 004e44bc mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e44bf mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 004e44c2 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e44c5 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e44c7 mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 004e44ca mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e44cd mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e44d0 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e44d3 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e44d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e44d7 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e44dcu; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e44d7u); RETCHK(0x4e44dcu, 0x4e44d7u); LOADALL;
  /* 004e44dc mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e44df push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e44e0 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e44e5u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e44e0u); RETCHK(0x4e44e5u, 0x4e44e0u); LOADALL;
  /* 004e44e5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e44e8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e44eb:;
  /* 004e44eb mov eax, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); eax = (u32)(M32(m_)); }
  /* 004e44f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e44f3 je 0x4e455e */ if (ZF_) goto L_004e455e;
  /* 004e44f5 test byte ptr [edi + 0x564], 4 */ { const u32 m_ = (u32)(edi + 0x564u); u32 a_ = M8(m_), b_ = 0x4u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e44fc je 0x4e4517 */ if (ZF_) goto L_004e4517;
  /* 004e44fe mov edx, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e4501 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004e4502 lea ecx, [ebp - 0x180] */ ecx = (u32)((u32)(ebp + 0xfffffe80u));
  /* 004e4508 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e4509 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e450c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e450d call 0x5ae8c0 */ esp -= 4; M32(esp) = 0x4e4512u; SAVEALL; F_005ae8c0(c); ABI_CHECK(0x5ae8c0u, 0x4e450du); RETCHK(0x4e4512u, 0x4e450du); LOADALL;
  /* 004e4512 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4515 jmp 0x4e4529 */ goto L_004e4529;
L_004e4517:;
  /* 004e4517 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e451a add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e451d mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e4522 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e4524 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e4526 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_004e4529:;
  /* 004e4529 mov esi, dword ptr [edi + 0x1c4] */ { const u32 m_ = (u32)(edi + 0x1c4u); esi = (u32)(M32(m_)); }
  /* 004e452f mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4532 mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
  /* 004e4535 mov edx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (u32)(M32(m_)); }
  /* 004e4538 add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e453b mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e453d mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 004e4540 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e4543 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e4546 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e4549 add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e454c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e454d call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e4552u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e454du); RETCHK(0x4e4552u, 0x4e454du); LOADALL;
  /* 004e4552 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4555 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4556 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e455bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e4556u); RETCHK(0x4e455bu, 0x4e4556u); LOADALL;
  /* 004e455b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e455e:;
  /* 004e455e mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004e4561 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 004e4563 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4566 je 0x4e4572 */ if (ZF_) goto L_004e4572;
  /* 004e4568 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e456b je 0x4e4572 */ if (ZF_) goto L_004e4572;
  /* 004e456d cmp eax, 0xf */ { u32 a_ = eax, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4570 jne 0x4e4580 */ if (!ZF_) goto L_004e4580;
L_004e4572:;
  /* 004e4572 mov byte ptr [edi + 0x1d0], 0 */ { const u32 m_ = (u32)(edi + 0x1d0u); M8(m_) = (u8)(0x0u); }
  /* 004e4579 mov byte ptr [edi + 0x2f1], 0 */ { const u32 m_ = (u32)(edi + 0x2f1u); M8(m_) = (u8)(0x0u); }
L_004e4580:;
  /* 004e4580 mov al, byte ptr [edi + 0x2f1] */ { const u32 m_ = (u32)(edi + 0x2f1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e4586 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4588 mov al, byte ptr [0x7a6c64] */ { const u32 m_ = (u32)(0x7a6c64u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e458d jne 0x4e464f */ if (!ZF_) goto L_004e464f;
  /* 004e4593 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4595 je 0x4e464f */ if (ZF_) goto L_004e464f;
  /* 004e459b mov dword ptr [0x9b8b2c], 0 */ { const u32 m_ = (u32)(0x9b8b2cu); M32(m_) = (u32)(0x0u); }
  /* 004e45a5 mov dword ptr [0x9b8b30], 0 */ { const u32 m_ = (u32)(0x9b8b30u); M32(m_) = (u32)(0x0u); }
  /* 004e45af mov dword ptr [0x9b8b34], 0 */ { const u32 m_ = (u32)(0x9b8b34u); M32(m_) = (u32)(0x0u); }
  /* 004e45b9 mov dword ptr [0x9b8b20], 0 */ { const u32 m_ = (u32)(0x9b8b20u); M32(m_) = (u32)(0x0u); }
  /* 004e45c3 mov dword ptr [0x9b8b24], 0 */ { const u32 m_ = (u32)(0x9b8b24u); M32(m_) = (u32)(0x0u); }
  /* 004e45cd mov dword ptr [0x9b8b28], 0 */ { const u32 m_ = (u32)(0x9b8b28u); M32(m_) = (u32)(0x0u); }
  /* 004e45d7 mov dword ptr [0x9b8b14], 0 */ { const u32 m_ = (u32)(0x9b8b14u); M32(m_) = (u32)(0x0u); }
  /* 004e45e1 mov dword ptr [0x9b8b18], 0 */ { const u32 m_ = (u32)(0x9b8b18u); M32(m_) = (u32)(0x0u); }
  /* 004e45eb mov dword ptr [0x9b8b1c], 0 */ { const u32 m_ = (u32)(0x9b8b1cu); M32(m_) = (u32)(0x0u); }
  /* 004e45f5 mov dword ptr [0x9b8b08], 0 */ { const u32 m_ = (u32)(0x9b8b08u); M32(m_) = (u32)(0x0u); }
  /* 004e45ff mov dword ptr [0x9b8b0c], 0 */ { const u32 m_ = (u32)(0x9b8b0cu); M32(m_) = (u32)(0x0u); }
  /* 004e4609 mov dword ptr [0x9b8b10], 0 */ { const u32 m_ = (u32)(0x9b8b10u); M32(m_) = (u32)(0x0u); }
  /* 004e4613 mov dword ptr [0x9b8afc], 0 */ { const u32 m_ = (u32)(0x9b8afcu); M32(m_) = (u32)(0x0u); }
  /* 004e461d mov dword ptr [0x9b8b00], 0 */ { const u32 m_ = (u32)(0x9b8b00u); M32(m_) = (u32)(0x0u); }
  /* 004e4627 mov dword ptr [0x9b8b04], 0 */ { const u32 m_ = (u32)(0x9b8b04u); M32(m_) = (u32)(0x0u); }
  /* 004e4631 mov dword ptr [0x9b8af0], 0 */ { const u32 m_ = (u32)(0x9b8af0u); M32(m_) = (u32)(0x0u); }
  /* 004e463b mov dword ptr [0x9b8af4], 0 */ { const u32 m_ = (u32)(0x9b8af4u); M32(m_) = (u32)(0x0u); }
  /* 004e4645 mov dword ptr [0x9b8af8], 0 */ { const u32 m_ = (u32)(0x9b8af8u); M32(m_) = (u32)(0x0u); }
L_004e464f:;
  /* 004e464f mov cl, byte ptr [edi + 0x1d0] */ { const u32 m_ = (u32)(edi + 0x1d0u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e4655 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4657 je 0x4e4c31 */ if (ZF_) goto L_004e4c31;
  /* 004e465d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e465f je 0x4e4c31 */ if (ZF_) goto L_004e4c31;
  /* 004e4665 mov al, byte ptr [edi + 0x2f0] */ { const u32 m_ = (u32)(edi + 0x2f0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e466b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e466d je 0x4e4798 */ if (ZF_) goto L_004e4798;
  /* 004e4673 mov al, byte ptr [edi + 0x1d8] */ { const u32 m_ = (u32)(edi + 0x1d8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e4679 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e467b je 0x4e4703 */ if (ZF_) goto L_004e4703;
  /* 004e4681 mov edx, dword ptr [edi + 0x2dc] */ { const u32 m_ = (u32)(edi + 0x2dcu); edx = (u32)(M32(m_)); }
  /* 004e4687 mov eax, dword ptr [edi + edx*4 + 0x1dc] */ { const u32 m_ = (u32)(edi + edx * 4u + 0x1dcu); eax = (u32)(M32(m_)); }
  /* 004e468e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4690 je 0x4e4703 */ if (ZF_) goto L_004e4703;
  /* 004e4692 mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e4695 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004e4698 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e469b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e46a0 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 004e46a2 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e46a4 mov edx, dword ptr [eax + 0x2dc] */ { const u32 m_ = (u32)(eax + 0x2dcu); edx = (u32)(M32(m_)); }
  /* 004e46aa inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004e46ab mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004e46ad cmp ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e46b0 mov dword ptr [eax + 0x2dc], edx */ { const u32 m_ = (u32)(eax + 0x2dcu); M32(m_) = (u32)(edx); }
  /* 004e46b6 jl 0x4e46c2 */ if (LT_) goto L_004e46c2;
  /* 004e46b8 mov dword ptr [eax + 0x2dc], 0 */ { const u32 m_ = (u32)(eax + 0x2dcu); M32(m_) = (u32)(0x0u); }
L_004e46c2:;
  /* 004e46c2 mov ecx, dword ptr [eax + 0x2dc] */ { const u32 m_ = (u32)(eax + 0x2dcu); ecx = (u32)(M32(m_)); }
  /* 004e46c8 mov esi, dword ptr [eax + ecx*4 + 0x1dc] */ { const u32 m_ = (u32)(eax + ecx * 4u + 0x1dcu); esi = (u32)(M32(m_)); }
  /* 004e46cf mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e46d2 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 004e46d5 mov ecx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ecx = (u32)(M32(m_)); }
  /* 004e46d8 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e46db mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e46dd mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 004e46e0 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e46e3 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e46e6 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e46e9 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e46ec push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e46ed call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e46f2u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e46edu); RETCHK(0x4e46f2u, 0x4e46edu); LOADALL;
  /* 004e46f2 mov edx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e46f5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e46f6 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e46fbu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e46f6u); RETCHK(0x4e46fbu, 0x4e46f6u); LOADALL;
  /* 004e46fb mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e46fe jmp 0x4e4bf3 */ goto L_004e4bf3;
L_004e4703:;
  /* 004e4703 mov ebx, dword ptr [edi + 0x2e8] */ { const u32 m_ = (u32)(edi + 0x2e8u); ebx = (u32)(M32(m_)); }
  /* 004e4709 mov eax, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004e470c mov edi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e470f mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004e4712 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 004e4715 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 004e4718 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e471b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e4720 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e4722 mov esi, dword ptr [ebx - 4] */ { const u32 m_ = (u32)(ebx + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004e4725 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e4728 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e472b mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004e472d mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 004e4730 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004e4733 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e4736 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4739 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e473c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e473d call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e4742u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e473du); RETCHK(0x4e4742u, 0x4e473du); LOADALL;
  /* 004e4742 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e4745 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e4746 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e474bu; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e4746u); RETCHK(0x4e474bu, 0x4e4746u); LOADALL;
  /* 004e474b mov edx, dword ptr [ebx - 8] */ { const u32 m_ = (u32)(ebx + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004e474e mov edi, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e4751 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 004e4754 mov edx, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); edx = (u32)(M32(m_)); }
  /* 004e4757 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e475a mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e475f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e4761 mov ebx, dword ptr [ebx - 8] */ { const u32 m_ = (u32)(ebx + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 004e4764 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4767 mov ecx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); ecx = (u32)(M32(m_)); }
  /* 004e476a add eax, 0x40 */ { u32 a_ = eax, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e476d mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e476f mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 004e4772 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e4775 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e4778 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 004e477b add edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004e477e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e477f call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e4784u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e477fu); RETCHK(0x4e4784u, 0x4e477fu); LOADALL;
  /* 004e4784 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4787 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4788 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e478du; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e4788u); RETCHK(0x4e478du, 0x4e4788u); LOADALL;
  /* 004e478d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e4790 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4793 jmp 0x4e4bf6 */ goto L_004e4bf6;
L_004e4798:;
  /* 004e4798 fld dword ptr [0x9b8b2c] */ { const u32 m_ = (u32)(0x9b8b2cu); FPUSH((double)MF32(m_)); }
  /* 004e479e fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e47a4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e47a6 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e47a9 je 0x4e47c2 */ if (ZF_) goto L_004e47c2;
  /* 004e47ab fld dword ptr [0x9b8b2c] */ { const u32 m_ = (u32)(0x9b8b2cu); FPUSH((double)MF32(m_)); }
  /* 004e47b1 fcomp dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e47b7 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e47b9 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e47bc jp 0x4e4bf6 */ if (PF_) goto L_004e4bf6;
L_004e47c2:;
  /* 004e47c2 fld dword ptr [0x9b8b20] */ { const u32 m_ = (u32)(0x9b8b20u); FPUSH((double)MF32(m_)); }
  /* 004e47c8 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e47ce fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e47d0 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e47d3 je 0x4e47ec */ if (ZF_) goto L_004e47ec;
  /* 004e47d5 fld dword ptr [0x9b8b20] */ { const u32 m_ = (u32)(0x9b8b20u); FPUSH((double)MF32(m_)); }
  /* 004e47db fcomp dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e47e1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e47e3 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e47e6 jp 0x4e4bf6 */ if (PF_) goto L_004e4bf6;
L_004e47ec:;
  /* 004e47ec mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e47ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e47f0 lea edx, [ebp - 0x80] */ edx = (u32)((u32)(ebp + 0xffffff80u));
  /* 004e47f3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e47f4 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e47f9u; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e47f4u); RETCHK(0x4e47f9u, 0x4e47f4u); LOADALL;
  /* 004e47f9 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e47fb fld dword ptr [ebp - 0x7c] */ { const u32 m_ = (u32)(ebp + 0xffffff84u); FPUSH((double)MF32(m_)); }
  /* 004e47fe add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4801 fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e4807 fld dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); FPUSH((double)MF32(m_)); }
  /* 004e480a fsubr st(1) */ ST(0) = FR(ST(1) - ST(0));
  /* 004e480c fld dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); FPUSH((double)MF32(m_)); }
  /* 004e480f fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e4815 fld dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); FPUSH((double)MF32(m_)); }
  /* 004e4818 fmul dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e481e fsubp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) - s0_); FPOP(); }
  /* 004e4820 fstp dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4823 fld dword ptr [ebp - 0x80] */ { const u32 m_ = (u32)(ebp + 0xffffff80u); FPUSH((double)MF32(m_)); }
  /* 004e4826 fsub st(2) */ ST(0) = FR(ST(0) - ST(2));
  /* 004e4828 fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e482b fmul dword ptr [0x6571d0] */ { const u32 m_ = (u32)(0x6571d0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e4831 fstp dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4834 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e4836 fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 004e4839 fmul dword ptr [0x6571d0] */ { const u32 m_ = (u32)(0x6571d0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e483f fstp dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4842 fld dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); FPUSH((double)MF32(m_)); }
  /* 004e4845 fmul dword ptr [0x6571d0] */ { const u32 m_ = (u32)(0x6571d0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 004e484b fstp dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e484e fld dword ptr [0x9b8b2c] */ { const u32 m_ = (u32)(0x9b8b2cu); FPUSH((double)MF32(m_)); }
  /* 004e4854 fadd dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4857 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e485a fld dword ptr [0x9b8b30] */ { const u32 m_ = (u32)(0x9b8b30u); FPUSH((double)MF32(m_)); }
  /* 004e4860 fadd dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4863 fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4866 fld dword ptr [0x9b8b34] */ { const u32 m_ = (u32)(0x9b8b34u); FPUSH((double)MF32(m_)); }
  /* 004e486c fadd dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e486f fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4872 fld dword ptr [0x9b8b2c] */ { const u32 m_ = (u32)(0x9b8b2cu); FPUSH((double)MF32(m_)); }
  /* 004e4878 fsub dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e487b fstp dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e487e fld dword ptr [0x9b8b30] */ { const u32 m_ = (u32)(0x9b8b30u); FPUSH((double)MF32(m_)); }
  /* 004e4884 fsub dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4887 fstp dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e488a fld dword ptr [0x9b8b34] */ { const u32 m_ = (u32)(0x9b8b34u); FPUSH((double)MF32(m_)); }
  /* 004e4890 fsub dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4893 fstp dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4896 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 004e4899 fadd dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e489c fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e489f fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 004e48a2 fadd dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e48a5 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e48a8 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004e48ab fadd dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e48ae fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e48b1 fld dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); FPUSH((double)MF32(m_)); }
  /* 004e48b4 fsub dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e48b7 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e48ba fld dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); FPUSH((double)MF32(m_)); }
  /* 004e48bd fsub dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e48c0 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e48c3 fld dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); FPUSH((double)MF32(m_)); }
  /* 004e48c6 fsub dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e48c9 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e48cc fld dword ptr [0x9b8b14] */ { const u32 m_ = (u32)(0x9b8b14u); FPUSH((double)MF32(m_)); }
  /* 004e48d2 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e48d8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e48da test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e48dd je 0x4e48f2 */ if (ZF_) goto L_004e48f2;
  /* 004e48df fld dword ptr [0x9b8b14] */ { const u32 m_ = (u32)(0x9b8b14u); FPUSH((double)MF32(m_)); }
  /* 004e48e5 fcomp dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e48eb fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e48ed test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e48f0 jp 0x4e4918 */ if (PF_) goto L_004e4918;
L_004e48f2:;
  /* 004e48f2 fld dword ptr [0x9b8afc] */ { const u32 m_ = (u32)(0x9b8afcu); FPUSH((double)MF32(m_)); }
  /* 004e48f8 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e48fe fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e4900 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4903 je 0x4e4972 */ if (ZF_) goto L_004e4972;
  /* 004e4905 fld dword ptr [0x9b8afc] */ { const u32 m_ = (u32)(0x9b8afcu); FPUSH((double)MF32(m_)); }
  /* 004e490b fcomp dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e4911 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e4913 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4916 jnp 0x4e4972 */ if (!PF_) goto L_004e4972;
L_004e4918:;
  /* 004e4918 mov esi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 004e491b mov ebx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ebx = (u32)(M32(m_)); }
  /* 004e491e mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 004e4921 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4924 mov eax, esp */ { eax = (u32)(esp); }
  /* 004e4926 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 004e4928 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004e492b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e492e mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004e4931 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004e4934 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4937 mov edx, esp */ { edx = (u32)(esp); }
  /* 004e4939 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e493b mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004e493e mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e4941 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e4944 mov edx, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); edx = (u32)(M32(m_)); }
  /* 004e4947 mov eax, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); eax = (u32)(M32(m_)); }
  /* 004e494a sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e494d mov ecx, esp */ { ecx = (u32)(esp); }
  /* 004e494f mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004e4951 mov edx, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); edx = (u32)(M32(m_)); }
  /* 004e4954 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004e4957 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e495a mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 004e495d mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 004e4960 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4963 mov eax, esp */ { eax = (u32)(esp); }
  /* 004e4965 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e4967 mov ecx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ecx = (u32)(M32(m_)); }
  /* 004e496a mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e496d mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e4970 jmp 0x4e49da */ goto L_004e49da;
L_004e4972:;
  /* 004e4972 mov esi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 004e4975 mov ebx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ebx = (u32)(M32(m_)); }
  /* 004e4978 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 004e497b sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e497e mov edx, esp */ { edx = (u32)(esp); }
  /* 004e4980 mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 004e4982 mov dword ptr [edx + 4], ebx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004e4985 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e4988 mov edx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); edx = (u32)(M32(m_)); }
  /* 004e498b mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 004e498e sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4991 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 004e4993 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004e4995 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 004e4998 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004e499b mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e499e mov ecx, dword ptr [0x9b8afc] */ { const u32 m_ = (u32)(0x9b8afcu); ecx = (u32)(M32(m_)); }
  /* 004e49a4 mov edx, dword ptr [0x9b8b00] */ { const u32 m_ = (u32)(0x9b8b00u); edx = (u32)(M32(m_)); }
  /* 004e49aa sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e49ad mov eax, esp */ { eax = (u32)(esp); }
  /* 004e49af mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e49b1 mov ecx, dword ptr [0x9b8b04] */ { const u32 m_ = (u32)(0x9b8b04u); ecx = (u32)(M32(m_)); }
  /* 004e49b7 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e49ba mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e49bd mov eax, dword ptr [0x9b8b14] */ { const u32 m_ = (u32)(0x9b8b14u); eax = (u32)(M32(m_)); }
  /* 004e49c2 mov ecx, dword ptr [0x9b8b18] */ { const u32 m_ = (u32)(0x9b8b18u); ecx = (u32)(M32(m_)); }
  /* 004e49c8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e49cb mov edx, esp */ { edx = (u32)(esp); }
  /* 004e49cd mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e49cf mov eax, dword ptr [0x9b8b1c] */ { const u32 m_ = (u32)(0x9b8b1cu); eax = (u32)(M32(m_)); }
  /* 004e49d4 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e49d7 mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
L_004e49da:;
  /* 004e49da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e49db call 0x4e6f20 */ esp -= 4; M32(esp) = 0x4e49e0u; SAVEALL; F_004e6f20(c); ABI_CHECK(0x4e6f20u, 0x4e49dbu); RETCHK(0x4e49e0u, 0x4e49dbu); LOADALL;
  /* 004e49e0 mov ecx, dword ptr [edi + 0xa4] */ { const u32 m_ = (u32)(edi + 0xa4u); ecx = (u32)(M32(m_)); }
  /* 004e49e6 mov edx, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edx = (u32)(M32(m_)); }
  /* 004e49e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e49ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e49eb call 0x57ad90 */ esp -= 4; M32(esp) = 0x4e49f0u; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x4e49ebu); RETCHK(0x4e49f0u, 0x4e49ebu); LOADALL;
  /* 004e49f0 fld dword ptr [0x9b8b20] */ { const u32 m_ = (u32)(0x9b8b20u); FPUSH((double)MF32(m_)); }
  /* 004e49f6 fadd dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e49f9 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004e49fc mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004e49ff mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 004e4a02 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a05 fld dword ptr [0x9b8b24] */ { const u32 m_ = (u32)(0x9b8b24u); FPUSH((double)MF32(m_)); }
  /* 004e4a0b mov dword ptr [0x9b8b14], eax */ { const u32 m_ = (u32)(0x9b8b14u); M32(m_) = (u32)(eax); }
  /* 004e4a10 fadd dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4a13 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 004e4a16 mov dword ptr [0x9b8b04], eax */ { const u32 m_ = (u32)(0x9b8b04u); M32(m_) = (u32)(eax); }
  /* 004e4a1b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4a1e fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a21 fld dword ptr [0x9b8b28] */ { const u32 m_ = (u32)(0x9b8b28u); FPUSH((double)MF32(m_)); }
  /* 004e4a27 mov dword ptr [0x9b8b18], ecx */ { const u32 m_ = (u32)(0x9b8b18u); M32(m_) = (u32)(ecx); }
  /* 004e4a2d fadd dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4a30 mov dword ptr [0x9b8b1c], edx */ { const u32 m_ = (u32)(0x9b8b1cu); M32(m_) = (u32)(edx); }
  /* 004e4a36 mov dword ptr [0x9b8afc], esi */ { const u32 m_ = (u32)(0x9b8afcu); M32(m_) = (u32)(esi); }
  /* 004e4a3c mov dword ptr [0x9b8b00], ebx */ { const u32 m_ = (u32)(0x9b8b00u); M32(m_) = (u32)(ebx); }
  /* 004e4a42 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a45 fld dword ptr [0x9b8b20] */ { const u32 m_ = (u32)(0x9b8b20u); FPUSH((double)MF32(m_)); }
  /* 004e4a4b fsub dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4a4e fstp dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a51 fld dword ptr [0x9b8b24] */ { const u32 m_ = (u32)(0x9b8b24u); FPUSH((double)MF32(m_)); }
  /* 004e4a57 fsub dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4a5a fstp dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a5d fld dword ptr [0x9b8b28] */ { const u32 m_ = (u32)(0x9b8b28u); FPUSH((double)MF32(m_)); }
  /* 004e4a63 fsub dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4a66 fstp dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a69 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004e4a6c fadd dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4a6f fstp dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a72 fld dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); FPUSH((double)MF32(m_)); }
  /* 004e4a75 fadd dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4a78 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a7b fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004e4a7e fadd dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4a81 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a84 fld dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)MF32(m_)); }
  /* 004e4a87 fsub dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4a8a fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a8d fld dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)MF32(m_)); }
  /* 004e4a90 fsub dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4a93 fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a96 fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 004e4a99 fsub dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 004e4a9c fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4a9f fld dword ptr [0x9b8b08] */ { const u32 m_ = (u32)(0x9b8b08u); FPUSH((double)MF32(m_)); }
  /* 004e4aa5 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e4aab fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e4aad test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4ab0 je 0x4e4ac5 */ if (ZF_) goto L_004e4ac5;
  /* 004e4ab2 fld dword ptr [0x9b8b08] */ { const u32 m_ = (u32)(0x9b8b08u); FPUSH((double)MF32(m_)); }
  /* 004e4ab8 fcomp dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e4abe fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e4ac0 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4ac3 jp 0x4e4aeb */ if (PF_) goto L_004e4aeb;
L_004e4ac5:;
  /* 004e4ac5 fld dword ptr [0x9b8af0] */ { const u32 m_ = (u32)(0x9b8af0u); FPUSH((double)MF32(m_)); }
  /* 004e4acb fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e4ad1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e4ad3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4ad6 je 0x4e4b45 */ if (ZF_) goto L_004e4b45;
  /* 004e4ad8 fld dword ptr [0x9b8af0] */ { const u32 m_ = (u32)(0x9b8af0u); FPUSH((double)MF32(m_)); }
  /* 004e4ade fcomp dword ptr [0x656fa0] */ { const u32 m_ = (u32)(0x656fa0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e4ae4 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e4ae6 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4ae9 jnp 0x4e4b45 */ if (!PF_) goto L_004e4b45;
L_004e4aeb:;
  /* 004e4aeb mov esi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 004e4aee mov ebx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ebx = (u32)(M32(m_)); }
  /* 004e4af1 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 004e4af4 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4af7 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 004e4af9 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 004e4afb mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004e4afe mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e4b01 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 004e4b04 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004e4b07 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4b0a mov eax, esp */ { eax = (u32)(esp); }
  /* 004e4b0c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e4b0e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 004e4b11 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e4b14 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e4b17 mov eax, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); eax = (u32)(M32(m_)); }
  /* 004e4b1a mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
  /* 004e4b1d sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4b20 mov edx, esp */ { edx = (u32)(esp); }
  /* 004e4b22 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e4b24 mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 004e4b27 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e4b2a mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e4b2d mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 004e4b30 mov eax, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); eax = (u32)(M32(m_)); }
  /* 004e4b33 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4b36 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 004e4b38 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004e4b3a mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 004e4b3d mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004e4b40 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e4b43 jmp 0x4e4bae */ goto L_004e4bae;
L_004e4b45:;
  /* 004e4b45 mov esi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 004e4b48 mov ebx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ebx = (u32)(M32(m_)); }
  /* 004e4b4b mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 004e4b4e sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4b51 mov eax, esp */ { eax = (u32)(esp); }
  /* 004e4b53 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 004e4b55 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004e4b58 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004e4b5b mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 004e4b5e mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 004e4b61 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4b64 mov edx, esp */ { edx = (u32)(esp); }
  /* 004e4b66 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 004e4b68 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004e4b6b mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004e4b6e mov dword ptr [edx + 8], eax */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004e4b71 mov edx, dword ptr [0x9b8af0] */ { const u32 m_ = (u32)(0x9b8af0u); edx = (u32)(M32(m_)); }
  /* 004e4b77 mov eax, dword ptr [0x9b8af4] */ { const u32 m_ = (u32)(0x9b8af4u); eax = (u32)(M32(m_)); }
  /* 004e4b7c sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4b7f mov ecx, esp */ { ecx = (u32)(esp); }
  /* 004e4b81 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004e4b83 mov edx, dword ptr [0x9b8af8] */ { const u32 m_ = (u32)(0x9b8af8u); edx = (u32)(M32(m_)); }
  /* 004e4b89 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004e4b8c mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e4b8f mov ecx, dword ptr [0x9b8b08] */ { const u32 m_ = (u32)(0x9b8b08u); ecx = (u32)(M32(m_)); }
  /* 004e4b95 mov edx, dword ptr [0x9b8b0c] */ { const u32 m_ = (u32)(0x9b8b0cu); edx = (u32)(M32(m_)); }
  /* 004e4b9b sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4b9e mov eax, esp */ { eax = (u32)(esp); }
  /* 004e4ba0 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004e4ba2 mov ecx, dword ptr [0x9b8b10] */ { const u32 m_ = (u32)(0x9b8b10u); ecx = (u32)(M32(m_)); }
  /* 004e4ba8 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004e4bab mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_004e4bae:;
  /* 004e4bae push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004e4baf call 0x4e6f20 */ esp -= 4; M32(esp) = 0x4e4bb4u; SAVEALL; F_004e6f20(c); ABI_CHECK(0x4e6f20u, 0x4e4bafu); RETCHK(0x4e4bb4u, 0x4e4bafu); LOADALL;
  /* 004e4bb4 mov edx, dword ptr [edi + 0xa4] */ { const u32 m_ = (u32)(edi + 0xa4u); edx = (u32)(M32(m_)); }
  /* 004e4bba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4bbb mov eax, dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); eax = (u32)(M32(m_)); }
  /* 004e4bbe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4bbf call 0x57ad90 */ esp -= 4; M32(esp) = 0x4e4bc4u; SAVEALL; F_0057ad90(c); ABI_CHECK(0x57ad90u, 0x4e4bbfu); RETCHK(0x4e4bc4u, 0x4e4bbfu); LOADALL;
  /* 004e4bc4 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 004e4bc7 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 004e4bca mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 004e4bcd mov dword ptr [0x9b8b08], ecx */ { const u32 m_ = (u32)(0x9b8b08u); M32(m_) = (u32)(ecx); }
  /* 004e4bd3 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 004e4bd6 mov dword ptr [0x9b8b0c], edx */ { const u32 m_ = (u32)(0x9b8b0cu); M32(m_) = (u32)(edx); }
  /* 004e4bdc mov dword ptr [0x9b8b10], eax */ { const u32 m_ = (u32)(0x9b8b10u); M32(m_) = (u32)(eax); }
  /* 004e4be1 mov dword ptr [0x9b8af0], esi */ { const u32 m_ = (u32)(0x9b8af0u); M32(m_) = (u32)(esi); }
  /* 004e4be7 mov dword ptr [0x9b8af4], ebx */ { const u32 m_ = (u32)(0x9b8af4u); M32(m_) = (u32)(ebx); }
  /* 004e4bed mov dword ptr [0x9b8af8], ecx */ { const u32 m_ = (u32)(0x9b8af8u); M32(m_) = (u32)(ecx); }
L_004e4bf3:;
  /* 004e4bf3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e4bf6:;
  /* 004e4bf6 mov edx, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); edx = (u32)(M32(m_)); }
  /* 004e4bf9 mov eax, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); eax = (u32)(M32(m_)); }
  /* 004e4bfc mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 004e4bff mov dword ptr [0x9b8b2c], edx */ { const u32 m_ = (u32)(0x9b8b2cu); M32(m_) = (u32)(edx); }
  /* 004e4c05 mov edx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); edx = (u32)(M32(m_)); }
  /* 004e4c08 mov dword ptr [0x9b8b30], eax */ { const u32 m_ = (u32)(0x9b8b30u); M32(m_) = (u32)(eax); }
  /* 004e4c0d mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 004e4c10 mov dword ptr [0x9b8b34], ecx */ { const u32 m_ = (u32)(0x9b8b34u); M32(m_) = (u32)(ecx); }
  /* 004e4c16 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 004e4c19 mov dword ptr [0x9b8b20], edx */ { const u32 m_ = (u32)(0x9b8b20u); M32(m_) = (u32)(edx); }
  /* 004e4c1f mov dword ptr [0x9b8b24], eax */ { const u32 m_ = (u32)(0x9b8b24u); M32(m_) = (u32)(eax); }
  /* 004e4c24 mov dword ptr [0x9b8b28], ecx */ { const u32 m_ = (u32)(0x9b8b28u); M32(m_) = (u32)(ecx); }
  /* 004e4c2a mov byte ptr [edi + 0x1d0], 0 */ { const u32 m_ = (u32)(edi + 0x1d0u); M8(m_) = (u8)(0x0u); }
L_004e4c31:;
  /* 004e4c31 mov al, byte ptr [edi + 0xbc] */ { const u32 m_ = (u32)(edi + 0xbcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e4c37 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4c39 je 0x4e4c56 */ if (ZF_) goto L_004e4c56;
  /* 004e4c3b mov al, byte ptr [edi + 0x369] */ { const u32 m_ = (u32)(edi + 0x369u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004e4c41 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4c43 mov eax, 0x4e2b */ { eax = (u32)(0x4e2bu); }
  /* 004e4c48 jne 0x4e4c50 */ if (!ZF_) goto L_004e4c50;
  /* 004e4c4a mov eax, dword ptr [edi + 0x1b4] */ { const u32 m_ = (u32)(edi + 0x1b4u); eax = (u32)(M32(m_)); }
L_004e4c50:;
  /* 004e4c50 call 0x9c4d53 */ esp -= 4; M32(esp) = 0x4e4c55u; SAVEALL; F_009c4d53(c); ABI_CHECK(0x9c4d53u, 0x4e4c50u); RETCHK(0x4e4c55u, 0x4e4c50u); LOADALL;
  /* 004e4c55 nop */ ;
L_004e4c56:;
  /* 004e4c56 mov eax, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); eax = (u32)(M32(m_)); }
  /* 004e4c5c cmp dword ptr [edi + 0x1a4], eax */ { const u32 m_ = (u32)(edi + 0x1a4u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4c62 mov dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 004e4c69 je 0x4e4d05 */ if (ZF_) goto L_004e4d05;
  /* 004e4c6f mov dword ptr [edi + 0x1a4], eax */ { const u32 m_ = (u32)(edi + 0x1a4u); M32(m_) = (u32)(eax); }
  /* 004e4c75 mov eax, dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); eax = (u32)(M32(m_)); }
  /* 004e4c7b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4c7d jle 0x4e4d67 */ if ((ZF_|LT_)) goto L_004e4d67;
  /* 004e4c83 lea ebx, [edi + 0x178] */ ebx = (u32)((u32)(edi + 0x178u));
  /* 004e4c89 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004e4c90:;
  /* 004e4c90 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004e4c92 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4c94 je 0x4e4cb3 */ if (ZF_) goto L_004e4cb3;
  /* 004e4c96 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4e4c9bu; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4e4c96u); RETCHK(0x4e4c9bu, 0x4e4c96u); LOADALL;
  /* 004e4c9b mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004e4c9d mov dword ptr [edx + 0x34], 0 */ { const u32 m_ = (u32)(edx + 0x34u); M32(m_) = (u32)(0x0u); }
  /* 004e4ca4 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 004e4ca6 mov dword ptr [eax + 0x38], 1 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004e4cad mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_004e4cb3:;
  /* 004e4cb3 mov ecx, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); ecx = (u32)(M32(m_)); }
  /* 004e4cb9 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004e4cbc mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004e4cbf push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004e4cc1 call 0x4fafd0 */ esp -= 4; M32(esp) = 0x4e4cc6u; SAVEALL; F_004fafd0(c); ABI_CHECK(0x4fafd0u, 0x4e4cc1u); RETCHK(0x4e4cc6u, 0x4e4cc1u); LOADALL;
  /* 004e4cc6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4cc7 call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e4cccu; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e4cc7u); RETCHK(0x4e4cccu, 0x4e4cc7u); LOADALL;
  /* 004e4ccc mov edx, dword ptr [ebp - 0x88] */ { const u32 m_ = (u32)(ebp + 0xffffff78u); edx = (u32)(M32(m_)); }
  /* 004e4cd2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4cd5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4cd6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e4cd7 mov edx, dword ptr [edi + 0x1a0] */ { const u32 m_ = (u32)(edi + 0x1a0u); edx = (u32)(M32(m_)); }
  /* 004e4cdd call 0x4fbd30 */ esp -= 4; M32(esp) = 0x4e4ce2u; SAVEALL; F_004fbd30(c); ABI_CHECK(0x4fbd30u, 0x4e4cddu); RETCHK(0x4e4ce2u, 0x4e4cddu); LOADALL;
  /* 004e4ce2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4ce4 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 004e4ce6 je 0x4e4cef */ if (ZF_) goto L_004e4cef;
  /* 004e4ce8 mov dword ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(0x1u); }
L_004e4cef:;
  /* 004e4cef mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004e4cf2 mov ecx, dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); ecx = (u32)(M32(m_)); }
  /* 004e4cf8 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004e4cf9 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004e4cfc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4cfe mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004e4d01 jl 0x4e4c90 */ if (LT_) goto L_004e4c90;
  /* 004e4d03 jmp 0x4e4d67 */ goto L_004e4d67;
L_004e4d05:;
  /* 004e4d05 mov eax, dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); eax = (u32)(M32(m_)); }
  /* 004e4d0b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4d0d jle 0x4e4d67 */ if ((ZF_|LT_)) goto L_004e4d67;
  /* 004e4d0f lea ebx, [edi + 0x178] */ ebx = (u32)((u32)(edi + 0x178u));
L_004e4d15:;
  /* 004e4d15 cmp dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4d18 je 0x4e4d53 */ if (ZF_) goto L_004e4d53;
  /* 004e4d1a mov eax, dword ptr [edi + 0x560] */ { const u32 m_ = (u32)(edi + 0x560u); eax = (u32)(M32(m_)); }
  /* 004e4d20 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 004e4d23 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004e4d26 call 0x4fafd0 */ esp -= 4; M32(esp) = 0x4e4d2bu; SAVEALL; F_004fafd0(c); ABI_CHECK(0x4fafd0u, 0x4e4d26u); RETCHK(0x4e4d2bu, 0x4e4d26u); LOADALL;
  /* 004e4d2b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4d2c call 0x5abd50 */ esp -= 4; M32(esp) = 0x4e4d31u; SAVEALL; F_005abd50(c); ABI_CHECK(0x5abd50u, 0x4e4d2cu); RETCHK(0x4e4d31u, 0x4e4d2cu); LOADALL;
  /* 004e4d31 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 004e4d33 mov edi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edi = (u32)(M32(m_)); }
  /* 004e4d36 mov esi, eax */ { esi = (u32)(eax); }
  /* 004e4d38 add edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004e4d3b mov ecx, 0x10 */ { ecx = (u32)(0x10u); }
  /* 004e4d40 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004e4d42 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004e4d44 mov eax, dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4d47 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4d48 call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e4d4du; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e4d48u); RETCHK(0x4e4d4du, 0x4e4d48u); LOADALL;
  /* 004e4d4d mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004e4d50 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004e4d53:;
  /* 004e4d53 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004e4d56 mov ecx, dword ptr [edi + 0x1a8] */ { const u32 m_ = (u32)(edi + 0x1a8u); ecx = (u32)(M32(m_)); }
  /* 004e4d5c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004e4d5d add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004e4d60 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4d62 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004e4d65 jl 0x4e4d15 */ if (LT_) goto L_004e4d15;
L_004e4d67:;
  /* 004e4d67 mov esi, dword ptr [edi + 0x58c] */ { const u32 m_ = (u32)(edi + 0x58cu); esi = (u32)(M32(m_)); }
  /* 004e4d6d test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004e4d6f je 0x4e4dd5 */ if (ZF_) goto L_004e4dd5;
  /* 004e4d71 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e4d74 mov edx, dword ptr [edi + 0x55c] */ { const u32 m_ = (u32)(edi + 0x55cu); edx = (u32)(M32(m_)); }
  /* 004e4d7a mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004e4d7c add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004e4d7f mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004e4d81 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004e4d84 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004e4d87 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e4d8a mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 004e4d8d mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4d90 add eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004e4d93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4d94 call 0x5ae8b0 */ esp -= 4; M32(esp) = 0x4e4d99u; SAVEALL; F_005ae8b0(c); ABI_CHECK(0x5ae8b0u, 0x4e4d94u); RETCHK(0x4e4d99u, 0x4e4d94u); LOADALL;
  /* 004e4d99 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004e4d9c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e4d9d call 0x5abcd0 */ esp -= 4; M32(esp) = 0x4e4da2u; SAVEALL; F_005abcd0(c); ABI_CHECK(0x5abcd0u, 0x4e4d9du); RETCHK(0x4e4da2u, 0x4e4d9du); LOADALL;
  /* 004e4da2 mov eax, dword ptr [edi + 0x58c] */ { const u32 m_ = (u32)(edi + 0x58cu); eax = (u32)(M32(m_)); }
  /* 004e4da8 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 004e4dab xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004e4dad add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4db0 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004e4db2 jne 0x4e4dd5 */ if (!ZF_) goto L_004e4dd5;
  /* 004e4db4 call 0x54ada0 */ esp -= 4; M32(esp) = 0x4e4db9u; SAVEALL; F_0054ada0(c); ABI_CHECK(0x54ada0u, 0x4e4db4u); RETCHK(0x4e4db9u, 0x4e4db4u); LOADALL;
  /* 004e4db9 mov eax, dword ptr [edi + 0x58c] */ { const u32 m_ = (u32)(edi + 0x58cu); eax = (u32)(M32(m_)); }
  /* 004e4dbf mov dword ptr [eax + 0x34], edx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(edx); }
  /* 004e4dc2 mov ecx, dword ptr [edi + 0x58c] */ { const u32 m_ = (u32)(edi + 0x58cu); ecx = (u32)(M32(m_)); }
  /* 004e4dc8 mov dword ptr [ecx + 0x38], 1 */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(0x1u); }
  /* 004e4dcf mov dword ptr [edi + 0x58c], edx */ { const u32 m_ = (u32)(edi + 0x58cu); M32(m_) = (u32)(edx); }
L_004e4dd5:;
  /* 004e4dd5 lea esi, [edi + 0x4a4] */ esi = (u32)((u32)(edi + 0x4a4u));
  /* 004e4ddb mov edx, esi */ { edx = (u32)(esi); }
  /* 004e4ddd mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004e4ddf mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004e4de2 mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 004e4de5 mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 004e4deb mov dword ptr [ebp - 0x9c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff64u); M32(m_) = (u32)(ecx); }
  /* 004e4df1 mov ecx, dword ptr [edi + 0x55c] */ { const u32 m_ = (u32)(edi + 0x55cu); ecx = (u32)(M32(m_)); }
  /* 004e4df7 mov dword ptr [ebp - 0x98], edx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(edx); }
  /* 004e4dfd mov edx, dword ptr [edi + 0x534] */ { const u32 m_ = (u32)(edi + 0x534u); edx = (u32)(M32(m_)); }
  /* 004e4e03 push 0x40200000 */ { u32 v_ = 0x40200000u; esp -= 4; M32(esp) = v_; }
  /* 004e4e08 mov eax, 0x63f690 */ { eax = (u32)(0x63f690u); }
  /* 004e4e0d call 0x404cf0 */ esp -= 4; M32(esp) = 0x4e4e12u; SAVEALL; F_00404cf0(c); ABI_CHECK(0x404cf0u, 0x4e4e0du); RETCHK(0x4e4e12u, 0x4e4e0du); LOADALL;
  /* 004e4e12 fcomp dword ptr [0x656f94] */ { const u32 m_ = (u32)(0x656f94u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004e4e18 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4e1b fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004e4e1d test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004e4e20 jp 0x4e4e56 */ if (PF_) goto L_004e4e56;
  /* 004e4e22 fld dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); FPUSH((double)MF32(m_)); }
  /* 004e4e28 fadd dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4e2a fstp dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4e30 fld dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); FPUSH((double)MF32(m_)); }
  /* 004e4e36 fadd dword ptr [edi + 0x4a8] */ { const u32 m_ = (u32)(edi + 0x4a8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4e3c fstp dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4e42 fld dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); FPUSH((double)MF32(m_)); }
  /* 004e4e48 fadd dword ptr [edi + 0x4ac] */ { const u32 m_ = (u32)(edi + 0x4acu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4e4e fstp dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004e4e54 jmp 0x4e4e80 */ goto L_004e4e80;
L_004e4e56:;
  /* 004e4e56 fld dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); FPUSH((double)MF32(m_)); }
  /* 004e4e5c mov eax, dword ptr [ebp - 0xa0] */ { const u32 m_ = (u32)(ebp + 0xffffff60u); eax = (u32)(M32(m_)); }
  /* 004e4e62 fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004e4e68 mov ecx, dword ptr [ebp - 0x98] */ { const u32 m_ = (u32)(ebp + 0xffffff68u); ecx = (u32)(M32(m_)); }
  /* 004e4e6e mov dword ptr [ebp - 0xa0], eax */ { const u32 m_ = (u32)(ebp + 0xffffff60u); M32(m_) = (u32)(eax); }
  /* 004e4e74 mov dword ptr [ebp - 0x98], ecx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(ecx); }
  /* 004e4e7a fstp dword ptr [ebp - 0x9c] */ { const u32 m_ = (u32)(ebp + 0xffffff64u); MF32(m_) = (float)ST(0); FPOP(); }
L_004e4e80:;
  /* 004e4e80 lea edx, [ebp - 0xa0] */ edx = (u32)((u32)(ebp + 0xffffff60u));
  /* 004e4e86 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004e4e87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004e4e88 call 0x5aa860 */ esp -= 4; M32(esp) = 0x4e4e8du; SAVEALL; F_005aa860(c); ABI_CHECK(0x5aa860u, 0x4e4e88u); RETCHK(0x4e4e8du, 0x4e4e88u); LOADALL;
  /* 004e4e8d fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e4e8f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4e92 call 0x4e62e0 */ esp -= 4; M32(esp) = 0x4e4e97u; SAVEALL; F_004e62e0(c); ABI_CHECK(0x4e62e0u, 0x4e4e92u); RETCHK(0x4e4e97u, 0x4e4e92u); LOADALL;
  /* 004e4e97 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 004e4e9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004e4e9b call 0x5aa970 */ esp -= 4; M32(esp) = 0x4e4ea0u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x4e4e9bu); RETCHK(0x4e4ea0u, 0x4e4e9bu); LOADALL;
  /* 004e4ea0 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 004e4ea2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004e4ea5 call 0x459c10 */ esp -= 4; M32(esp) = 0x4e4eaau; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x4e4ea5u); RETCHK(0x4e4eaau, 0x4e4ea5u); LOADALL;
  /* 004e4eaa mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004e4ead push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004e4eae call 0x4e89e0 */ esp -= 4; M32(esp) = 0x4e4eb3u; SAVEALL; F_004e89e0(c); ABI_CHECK(0x4e89e0u, 0x4e4eaeu); RETCHK(0x4e4eb3u, 0x4e4eaeu); LOADALL;
  /* 004e4eb3 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004e4eb6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004e4eb7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004e4eb8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004e4ebf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004e4ec0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004e4ec2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004e4ec3 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
L_0062deb0:;
  /* 0062deb0 inc dword ptr [0x9c107c] */ { const u32 m_ = (u32)(0x9c107cu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0062deb6 jmp 0x4e0e10 */ goto L_004e0e10;
}

void F_0062debb(CPU *c) {
  NATIVE_HOOK(0x62debbu) REGS; LOADALL;
L_0062debb:;
  /* 0062debb cmp dword ptr [0x7a6c78], 0 */ { const u32 m_ = (u32)(0x7a6c78u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0062dec2 jle 0x62dee7 */ if ((ZF_|LT_)) goto L_0062dee7;
  /* 0062dec4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0062dec5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062dec6 mov ebx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 0062deca mov esi, dword ptr [0x9c107c] */ { const u32 m_ = (u32)(0x9c107cu); esi = (u32)(M32(m_)); }
L_0062ded0:;
  /* 0062ded0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0062ded2 jle 0x62dee2 */ if ((ZF_|LT_)) goto L_0062dee2;
  /* 0062ded4 push 0x3c23d70a */ { u32 v_ = 0x3c23d70au; esp -= 4; M32(esp) = v_; }
  /* 0062ded9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0062deda call 0x4db310 */ esp -= 4; M32(esp) = 0x62dedfu; SAVEALL; F_004db310(c); ABI_CHECK(0x4db310u, 0x62dedau); RETCHK(0x62dedfu, 0x62dedau); LOADALL;
  /* 0062dedf dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0062dee0 jmp 0x62ded0 */ goto L_0062ded0;
L_0062dee2:;
  /* 0062dee2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0062dee3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062dee4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0062dee7:;
  /* 0062dee7 jmp 0x4db310 */ SAVEALL; F_004db310(c); return;
}

void F_0062df00(CPU *c) {
  NATIVE_HOOK(0x62df00u) REGS; LOADALL;
L_0062df00:;
  /* 0062df00 call 0x50ce20 */ esp -= 4; M32(esp) = 0x62df05u; SAVEALL; F_0050ce20(c); ABI_CHECK(0x50ce20u, 0x62df00u); RETCHK(0x62df05u, 0x62df00u); LOADALL;
  /* 0062df05 mov dword ptr [0x7a80fc], 0x62df2e */ { const u32 m_ = (u32)(0x7a80fcu); M32(m_) = (u32)(0x62df2eu); }
  /* 0062df0f mov dword ptr [0x7a8100], 0x62df33 */ { const u32 m_ = (u32)(0x7a8100u); M32(m_) = (u32)(0x62df33u); }
  /* 0062df19 mov dword ptr [0x7a8104], 0x9dfe00 */ { const u32 m_ = (u32)(0x7a8104u); M32(m_) = (u32)(0x9dfe00u); }
  /* 0062df23 mov dword ptr [0x7a8108], 0x62df39 */ { const u32 m_ = (u32)(0x7a8108u); M32(m_) = (u32)(0x62df39u); }
  /* 0062df2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062df2e(CPU *c) {
  NATIVE_HOOK(0x62df2eu) REGS; LOADALL;
L_0062df2e:;
  /* 0062df2e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062df30 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0062df33(CPU *c) {
  NATIVE_HOOK(0x62df33u) REGS; LOADALL;
L_0062df33:;
  /* 0062df33 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0062df39(CPU *c) {
  NATIVE_HOOK(0x62df39u) REGS; LOADALL;
L_0062df39:;
  /* 0062df39 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0062df60(CPU *c) {
  NATIVE_HOOK(0x62df60u) REGS; LOADALL;
L_0062df60:;
  /* 0062df60 fld dword ptr [ebp - 0xe28] */ { const u32 m_ = (u32)(ebp + 0xfffff1d8u); FPUSH((double)MF32(m_)); }
  /* 0062df66 fadd dword ptr [ebp - 0xdfc] */ { const u32 m_ = (u32)(ebp + 0xfffff204u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062df6c fld dword ptr [ebp - 0xe1c] */ { const u32 m_ = (u32)(ebp + 0xfffff1e4u); FPUSH((double)MF32(m_)); }
  /* 0062df72 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0062df78 fadd dword ptr [ebp - 0xdf8] */ { const u32 m_ = (u32)(ebp + 0xfffff208u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062df7e fstp dword ptr [ebp - 0xdf8] */ { const u32 m_ = (u32)(ebp + 0xfffff208u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062df84 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062df88(CPU *c) {
  NATIVE_HOOK(0x62df88u) REGS; LOADALL;
L_0062df88:;
  /* 0062df88 fst dword ptr [ebp - 0xe28] */ { const u32 m_ = (u32)(ebp + 0xfffff1d8u); MF32(m_) = (float)ST(0); }
  /* 0062df8e fadd dword ptr [ebp - 0xdfc] */ { const u32 m_ = (u32)(ebp + 0xfffff204u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062df94 fld dword ptr [ebp - 0xe1c] */ { const u32 m_ = (u32)(ebp + 0xfffff1e4u); FPUSH((double)MF32(m_)); }
  /* 0062df9a fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0062dfa0 fadd dword ptr [ebp - 0xdf8] */ { const u32 m_ = (u32)(ebp + 0xfffff208u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0062dfa6 fstp dword ptr [ebp - 0xdf8] */ { const u32 m_ = (u32)(ebp + 0xfffff208u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0062dfac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c10a0(CPU *c) {
  NATIVE_HOOK(0x9c10a0u) REGS; LOADALL;
  goto L_009c10a0;
L_0062ce2c:;
  /* 0062ce2c jmp 0x9ddc34 */ goto L_009ddc34;
L_0062ce33:;
  /* 0062ce33 jne 0x62ce3d */ if (!ZF_) goto L_0062ce3d;
  /* 0062ce35 mov eax, dword ptr [eax*4 + 0x672ac0] */ { const u32 m_ = (u32)(eax * 4u + 0x672ac0u); eax = (u32)(M32(m_)); }
  /* 0062ce3c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062ce3d:;
  /* 0062ce3d mov eax, dword ptr [eax*4 + 0x672b20] */ { const u32 m_ = (u32)(eax * 4u + 0x672b20u); eax = (u32)(M32(m_)); }
  /* 0062ce44 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c10a0:;
  /* 009c10a0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009c10a3 test byte ptr [ecx + 0x45], 2 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009c10a7 setne byte ptr [0x9c1084] */ { const u32 m_ = (u32)(0x9c1084u); M8(m_) = (u8)((!ZF_) ? 1u : 0u); }
  /* 009c10ae jmp 0x62ce2c */ goto L_0062ce2c;
L_009ddc00:;
  /* 009ddc00 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009ddc03 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddc06 jae 0x9ddc1e */ if (!CF_) goto L_009ddc1e;
  /* 009ddc08 test byte ptr [ecx + 0x45], 1 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009ddc0c jne 0x9ddc16 */ if (!ZF_) goto L_009ddc16;
  /* 009ddc0e mov eax, dword ptr [eax*4 + 0x9c11d4] */ { const u32 m_ = (u32)(eax * 4u + 0x9c11d4u); eax = (u32)(M32(m_)); }
  /* 009ddc15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc16:;
  /* 009ddc16 mov eax, dword ptr [eax*4 + 0x9c1200] */ { const u32 m_ = (u32)(eax * 4u + 0x9c1200u); eax = (u32)(M32(m_)); }
  /* 009ddc1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc1e:;
  /* 009ddc1e test byte ptr [ecx + 0x45], 1 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009ddc22 jne 0x9ddc2c */ if (!ZF_) goto L_009ddc2c;
  /* 009ddc24 mov eax, dword ptr [eax*4 + 0x9c42d4] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42d4u); eax = (u32)(M32(m_)); }
  /* 009ddc2b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc2c:;
  /* 009ddc2c mov eax, dword ptr [eax*4 + 0x9c4300] */ { const u32 m_ = (u32)(eax * 4u + 0x9c4300u); eax = (u32)(M32(m_)); }
  /* 009ddc33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc34:;
  /* 009ddc34 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddc37 jae 0x9ddc00 */ if (!CF_) goto L_009ddc00;
  /* 009ddc39 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009ddc3c test byte ptr [ecx + 0x45], 1 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009ddc40 jmp 0x62ce33 */ goto L_0062ce33;
}

void F_009c10b3(CPU *c) {
  NATIVE_HOOK(0x9c10b3u) REGS; LOADALL;
  goto L_009c10b3;
L_0062ce45:;
  /* 0062ce45 jmp 0x9ddc45 */ goto L_009ddc45;
L_0062ce4c:;
  /* 0062ce4c jne 0x62ce56 */ if (!ZF_) goto L_0062ce56;
  /* 0062ce4e mov eax, dword ptr [eax*4 + 0x672af0] */ { const u32 m_ = (u32)(eax * 4u + 0x672af0u); eax = (u32)(M32(m_)); }
  /* 0062ce55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062ce56:;
  /* 0062ce56 mov eax, dword ptr [eax*4 + 0x672b50] */ { const u32 m_ = (u32)(eax * 4u + 0x672b50u); eax = (u32)(M32(m_)); }
  /* 0062ce5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c10b3:;
  /* 009c10b3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009c10b6 test byte ptr [ecx + 0x45], 2 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009c10ba setne byte ptr [0x9c1084] */ { const u32 m_ = (u32)(0x9c1084u); M8(m_) = (u8)((!ZF_) ? 1u : 0u); }
  /* 009c10c1 jmp 0x62ce45 */ goto L_0062ce45;
L_009ddc00:;
  /* 009ddc00 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009ddc03 cmp eax, 0x16 */ { u32 a_ = eax, b_ = 0x16u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddc06 jae 0x9ddc1e */ if (!CF_) goto L_009ddc1e;
  /* 009ddc08 test byte ptr [ecx + 0x45], 1 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009ddc0c jne 0x9ddc16 */ if (!ZF_) goto L_009ddc16;
  /* 009ddc0e mov eax, dword ptr [eax*4 + 0x9c11d4] */ { const u32 m_ = (u32)(eax * 4u + 0x9c11d4u); eax = (u32)(M32(m_)); }
  /* 009ddc15 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc16:;
  /* 009ddc16 mov eax, dword ptr [eax*4 + 0x9c1200] */ { const u32 m_ = (u32)(eax * 4u + 0x9c1200u); eax = (u32)(M32(m_)); }
  /* 009ddc1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc1e:;
  /* 009ddc1e test byte ptr [ecx + 0x45], 1 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009ddc22 jne 0x9ddc2c */ if (!ZF_) goto L_009ddc2c;
  /* 009ddc24 mov eax, dword ptr [eax*4 + 0x9c42d4] */ { const u32 m_ = (u32)(eax * 4u + 0x9c42d4u); eax = (u32)(M32(m_)); }
  /* 009ddc2b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc2c:;
  /* 009ddc2c mov eax, dword ptr [eax*4 + 0x9c4300] */ { const u32 m_ = (u32)(eax * 4u + 0x9c4300u); eax = (u32)(M32(m_)); }
  /* 009ddc33 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009ddc45:;
  /* 009ddc45 cmp eax, 0xb */ { u32 a_ = eax, b_ = 0xbu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009ddc48 jae 0x9ddc00 */ if (!CF_) goto L_009ddc00;
  /* 009ddc4a mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009ddc4d test byte ptr [ecx + 0x45], 1 */ { const u32 m_ = (u32)(ecx + 0x45u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 009ddc51 jmp 0x62ce4c */ goto L_0062ce4c;
}

void F_009c10c6(CPU *c) {
  NATIVE_HOOK(0x9c10c6u) REGS; LOADALL;
L_009c10c6:;
  /* 009c10c6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c10c7 mov esi, esp */ { esi = (u32)(esp); }
  /* 009c10c9 push 0x9c1090 */ { u32 v_ = 0x9c1090u; esp -= 4; M32(esp) = v_; }
  /* 009c10ce lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 009c10d1 call 0x403060 */ esp -= 4; M32(esp) = 0x9c10d6u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9c10d1u); RETCHK(0x9c10d6u, 0x9c10d1u); LOADALL;
  /* 009c10d6 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 009c10d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c10da mov ecx, dword ptr [ebx + 0x5c] */ { const u32 m_ = (u32)(ebx + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 009c10dd call 0x5075d0 */ esp -= 4; M32(esp) = 0x9c10e2u; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9c10ddu); RETCHK(0x9c10e2u, 0x9c10ddu); LOADALL;
  /* 009c10e2 mov dword ptr [0x9c1080], eax */ { const u32 m_ = (u32)(0x9c1080u); M32(m_) = (u32)(eax); }
  /* 009c10e7 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 009c10ea call 0x43ee60 */ esp -= 4; M32(esp) = 0x9c10efu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9c10eau); RETCHK(0x9c10efu, 0x9c10eau); LOADALL;
  /* 009c10ef mov ecx, dword ptr [0x9c1080] */ { const u32 m_ = (u32)(0x9c1080u); ecx = (u32)(M32(m_)); }
  /* 009c10f5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c10f7 je 0x9c1100 */ if (ZF_) goto L_009c1100;
  /* 009c10f9 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c10fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c10fd call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1100u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1100u, 0x9c10fdu); LOADALL; }
L_009c1100:;
  /* 009c1100 mov esp, esi */ { esp = (u32)(esi); }
  /* 009c1102 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c1103 mov al, byte ptr [0x7a68ce] */ { const u32 m_ = (u32)(0x7a68ceu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c1108 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1197(CPU *c) {
  NATIVE_HOOK(0x9c1197u) REGS; LOADALL;
L_009c1197:;
  /* 009c1197 push dword ptr [esp] */ { const u32 m_ = (u32)(esp); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c119a mov dword ptr [esp + 4], 0x40000003 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x40000003u); }
  /* 009c11a2 cmp byte ptr [0x9c1085], 0 */ { const u32 m_ = (u32)(0x9c1085u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c11a9 je 0x9c11ba */ if (ZF_) goto L_009c11ba;
  /* 009c11ab mov byte ptr [0x9c1085], 0 */ { const u32 m_ = (u32)(0x9c1085u); M8(m_) = (u8)(0x0u); }
  /* 009c11b2 mov dword ptr [esp + 4], 0x40000005 */ { const u32 m_ = (u32)(esp + 0x4u); M32(m_) = (u32)(0x40000005u); }
L_009c11ba:;
  /* 009c11ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c13c0(CPU *c) {
  NATIVE_HOOK(0x9c13c0u) REGS; LOADALL;
L_009c13c0:;
  /* 009c13c0 pushfd */ { u32 e_ = EFLAGS_; esp -= 4; M32(esp) = e_; }
  /* 009c13c1 mov eax, dword ptr [edi + 0x198] */ { const u32 m_ = (u32)(edi + 0x198u); eax = (u32)(M32(m_)); }
  /* 009c13c7 fild dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)(s32)M32(m_)); }
  /* 009c13ca fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 009c13cd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c13cf jle 0x9c13e8 */ if ((ZF_|LT_)) goto L_009c13e8;
  /* 009c13d1 cmp eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c13d4 jg 0x9c13e8 */ if (!(ZF_|LT_)) goto L_009c13e8;
  /* 009c13d6 fld dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)MF32(m_)); }
  /* 009c13d9 fsub st(1) */ ST(0) = FR(ST(0) - ST(1));
  /* 009c13db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c13dc fisub dword ptr [esp] */ { const u32 m_ = (u32)(esp); ST(0) = FR(ST(0) - (double)(s32)M32(m_)); }
  /* 009c13df pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009c13e0 fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 009c13e6 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
L_009c13e8:;
  /* 009c13e8 fst dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); MF32(m_) = (float)ST(0); }
  /* 009c13eb faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 009c13ed fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c13f0 popfd */ { u32 e_ = M32(esp); esp += 4; c->df = (e_ >> 10) & 1; SETRAW(e_); }
  /* 009c13f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c14c0(CPU *c) {
  NATIVE_HOOK(0x9c14c0u) REGS; LOADALL;
  goto L_009c14c0;
L_0043f54e:;
  /* 0043f54e mov esi, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); esi = (u32)(M32(m_)); }
  /* 0043f551 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f553 mov ecx, dword ptr [ebx + 0x478] */ { const u32 m_ = (u32)(ebx + 0x478u); ecx = (u32)(M32(m_)); }
  /* 0043f559 je 0x43f564 */ if (ZF_) goto L_0043f564;
  /* 0043f55b mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0043f55d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f55f call dword ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f562u; SAVEALL; call_ind(c, t_); RETCHK(0x43f562u, 0x43f55fu); LOADALL; }
  /* 0043f562 jmp 0x43f56b */ goto L_0043f56b;
L_0043f564:;
  /* 0043f564 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0043f566 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0043f568 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f56bu; SAVEALL; call_ind(c, t_); RETCHK(0x43f56bu, 0x43f568u); LOADALL; }
L_0043f56b:;
  /* 0043f56b mov al, byte ptr [0x7a68c1] */ { const u32 m_ = (u32)(0x7a68c1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f570 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f572 jne 0x43f7af */ if (!ZF_) goto L_0043f7af;
  /* 0043f578 mov eax, dword ptr [ebp - 0x390] */ { const u32 m_ = (u32)(ebp + 0xfffffc70u); eax = (u32)(M32(m_)); }
  /* 0043f57e call 0x401020 */ esp -= 4; M32(esp) = 0x43f583u; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x43f57eu); RETCHK(0x43f583u, 0x43f57eu); LOADALL;
  /* 0043f583 cmp dword ptr [eax + 0x5c], esi */ { const u32 m_ = (u32)(eax + 0x5cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0043f586 jge 0x43f693 */ if (!LT_) goto L_0043f693;
  /* 0043f58c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0043f58e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0043f590 mov byte ptr [0x7a6af9], 1 */ { const u32 m_ = (u32)(0x7a6af9u); M8(m_) = (u8)(0x1u); }
  /* 0043f597 mov dword ptr [ebp - 0x48], 0x1000001f */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x1000001fu); }
  /* 0043f59e call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f5a1u; SAVEALL; call_ind(c, t_); RETCHK(0x43f5a1u, 0x43f59eu); LOADALL; }
  /* 0043f5a1 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0043f5a4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0043f5a5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f5a7 mov dword ptr [ebp - 0x44], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(eax); }
  /* 0043f5aa call 0x4019a0 */ esp -= 4; M32(esp) = 0x43f5afu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x43f5aau); RETCHK(0x43f5afu, 0x43f5aau); LOADALL;
  /* 0043f5af add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f5b2 mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 0043f5b7 call 0x401000 */ esp -= 4; M32(esp) = 0x43f5bcu; SAVEALL; F_00401000(c); ABI_CHECK(0x401000u, 0x43f5b7u); RETCHK(0x43f5bcu, 0x43f5b7u); LOADALL;
  /* 0043f5bc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f5be call 0x54c180 */ esp -= 4; M32(esp) = 0x43f5c3u; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x43f5beu); RETCHK(0x43f5c3u, 0x43f5beu); LOADALL;
  /* 0043f5c3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f5c6 mov dword ptr [0x7a68c4], 0 */ { const u32 m_ = (u32)(0x7a68c4u); M32(m_) = (u32)(0x0u); }
  /* 0043f5d0 mov byte ptr [0x7a68cc], 0 */ { const u32 m_ = (u32)(0x7a68ccu); M8(m_) = (u8)(0x0u); }
  /* 0043f5d7 call 0x550820 */ esp -= 4; M32(esp) = 0x43f5dcu; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x43f5d7u); RETCHK(0x43f5dcu, 0x43f5d7u); LOADALL;
  /* 0043f5dc mov eax, dword ptr [eax + 0xf64] */ { const u32 m_ = (u32)(eax + 0xf64u); eax = (u32)(M32(m_)); }
  /* 0043f5e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f5e4 je 0x43f5f3 */ if (ZF_) goto L_0043f5f3;
  /* 0043f5e6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0043f5e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f5e9 mov esi, 0x6432c8 */ { esi = (u32)(0x6432c8u); }
  /* 0043f5ee call 0x530e70 */ esp -= 4; M32(esp) = 0x43f5f3u; SAVEALL; F_00530e70(c); ABI_CHECK(0x530e70u, 0x43f5eeu); RETCHK(0x43f5f3u, 0x43f5eeu); LOADALL;
L_0043f5f3:;
  /* 0043f5f3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0043f5f5 mov dword ptr [ebx + 0x4dc], eax */ { const u32 m_ = (u32)(ebx + 0x4dcu); M32(m_) = (u32)(eax); }
  /* 0043f5fb mov dword ptr [ebp - 0x28], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(0xfu); }
  /* 0043f602 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 0043f605 mov byte ptr [ebp - 0x3c], al */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0043f608 lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0043f60b mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 0043f612 mov eax, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); eax = (u32)(M32(m_)); }
  /* 0043f617 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0043f618 call 0x4190f0 */ esp -= 4; M32(esp) = 0x43f61du; SAVEALL; F_004190f0(c); ABI_CHECK(0x4190f0u, 0x43f618u); RETCHK(0x43f61du, 0x43f618u); LOADALL;
  /* 0043f61d mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0043f620 mov ebx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ebx = (u32)(M32(m_)); }
  /* 0043f623 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0043f628 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0043f62a jae 0x43f62f */ if (!CF_) goto L_0043f62f;
  /* 0043f62c lea ebx, [ebp - 0x3c] */ ebx = (u32)((u32)(ebp + 0xffffffc4u));
L_0043f62f:;
  /* 0043f62f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0043f630 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0043f635 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f63bu; SAVEALL; call_ind(c, t_); RETCHK(0x43f63bu, 0x43f635u); LOADALL; }
  /* 0043f63b mov esi, eax */ { esi = (u32)(eax); }
  /* 0043f63d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0043f63f nop */ ;
L_0043f640:;
  /* 0043f640 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f642 mov bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f644 mov al, dl */ { eax = (eax & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0043f646 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0043f648 jne 0x43f668 */ if (!ZF_) goto L_0043f668;
  /* 0043f64a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f64c je 0x43f664 */ if (ZF_) goto L_0043f664;
  /* 0043f64e mov dl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f651 mov bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f654 mov al, dl */ { eax = (eax & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 0043f656 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0043f658 jne 0x43f668 */ if (!ZF_) goto L_0043f668;
  /* 0043f65a add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0043f65d add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0043f660 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f662 jne 0x43f640 */ if (!ZF_) goto L_0043f640;
L_0043f664:;
  /* 0043f664 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0043f666 jmp 0x43f66d */ goto L_0043f66d;
L_0043f668:;
  /* 0043f668 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0043f66a sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_0043f66d:;
  /* 0043f66d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f66f jne 0x43f67c */ if (!ZF_) goto L_0043f67c;
  /* 0043f671 mov edi, dword ptr [0x694ff8] */ { const u32 m_ = (u32)(0x694ff8u); edi = (u32)(M32(m_)); }
  /* 0043f677 call 0x418fd0 */ esp -= 4; M32(esp) = 0x43f67cu; SAVEALL; F_00418fd0(c); ABI_CHECK(0x418fd0u, 0x43f677u); RETCHK(0x43f67cu, 0x43f677u); LOADALL;
L_0043f67c:;
  /* 0043f67c lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0043f67f mov dword ptr [0x7a6c7c], 0 */ { const u32 m_ = (u32)(0x7a6c7cu); M32(m_) = (u32)(0x0u); }
  /* 0043f689 call 0x43ee60 */ esp -= 4; M32(esp) = 0x43f68eu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x43f689u); RETCHK(0x43f68eu, 0x43f689u); LOADALL;
  /* 0043f68e jmp 0x44010d */ goto L_0044010d;
L_0043f693:;
  /* 0043f693 mov eax, dword ptr [ebp - 0x390] */ { const u32 m_ = (u32)(ebp + 0xfffffc70u); eax = (u32)(M32(m_)); }
  /* 0043f699 call 0x4021f0 */ esp -= 4; M32(esp) = 0x43f69eu; SAVEALL; F_004021f0(c); ABI_CHECK(0x4021f0u, 0x43f699u); RETCHK(0x43f69eu, 0x43f699u); LOADALL;
  /* 0043f69e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f6a0 jne 0x43f6f0 */ if (!ZF_) goto L_0043f6f0;
  /* 0043f6a2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f6a4 jle 0x43f6f0 */ if ((ZF_|LT_)) goto L_0043f6f0;
  /* 0043f6a6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0043f6a8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0043f6aa mov dword ptr [ebp - 0x1c], 0x10000023 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x10000023u); }
  /* 0043f6b1 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f6b4u; SAVEALL; call_ind(c, t_); RETCHK(0x43f6b4u, 0x43f6b1u); LOADALL; }
  /* 0043f6b4 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0043f6b7 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0043f6ba mov eax, dword ptr [ebp - 0x390] */ { const u32 m_ = (u32)(ebp + 0xfffffc70u); eax = (u32)(M32(m_)); }
  /* 0043f6c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0043f6c1 mov edx, 0xc */ { edx = (u32)(0xcu); }
  /* 0043f6c6 mov dword ptr [ebp - 0x14], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x1u); }
  /* 0043f6cd call 0x401000 */ esp -= 4; M32(esp) = 0x43f6d2u; SAVEALL; F_00401000(c); ABI_CHECK(0x401000u, 0x43f6cdu); RETCHK(0x43f6d2u, 0x43f6cdu); LOADALL;
  /* 0043f6d2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f6d4 call 0x54c180 */ esp -= 4; M32(esp) = 0x43f6d9u; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x43f6d4u); RETCHK(0x43f6d9u, 0x43f6d4u); LOADALL;
  /* 0043f6d9 mov ecx, dword ptr [ebx + 0x46c] */ { const u32 m_ = (u32)(ebx + 0x46cu); ecx = (u32)(M32(m_)); }
  /* 0043f6df mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0043f6e1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f6e4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f6e6 call dword ptr [edx + 0x40] */ { const u32 m_ = (u32)(edx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f6e9u; SAVEALL; call_ind(c, t_); RETCHK(0x43f6e9u, 0x43f6e6u); LOADALL; }
  /* 0043f6e9 mov byte ptr [0x7a68c1], 1 */ { const u32 m_ = (u32)(0x7a68c1u); M8(m_) = (u8)(0x1u); }
L_0043f6f0:;
  /* 0043f6f0 lea esi, [ebx + 0xf4] */ esi = (u32)((u32)(ebx + 0xf4u));
  /* 0043f6f6 mov dword ptr [ebp + 0xc], 8 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x8u); }
  /* 0043f6fd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0043f700:;
  /* 0043f700 mov eax, dword ptr [esi - 0x14] */ { const u32 m_ = (u32)(esi + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0043f703 cmp eax, dword ptr [ebp - 0x140] */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0043f709 jne 0x43f719 */ if (!ZF_) goto L_0043f719;
  /* 0043f70b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0043f70d mov ecx, 0x68a49c */ { ecx = (u32)(0x68a49cu); }
  /* 0043f712 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0043f714 call 0x5218e0 */ esp -= 4; M32(esp) = 0x43f719u; SAVEALL; F_005218e0(c); ABI_CHECK(0x5218e0u, 0x43f714u); RETCHK(0x43f719u, 0x43f714u); LOADALL;
L_0043f719:;
  /* 0043f719 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0043f71c add esi, 0x70 */ { u32 a_ = esi, b_ = 0x70u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0043f71f dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0043f720 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0043f723 jne 0x43f700 */ if (!ZF_) goto L_0043f700;
  /* 0043f725 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 0043f728 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f72a jle 0x43f792 */ if ((ZF_|LT_)) goto L_0043f792;
  /* 0043f72c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0043f72e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0043f72f push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0043f734 lea edx, [ebp - 0x18c] */ edx = (u32)((u32)(ebp + 0xfffffe74u));
  /* 0043f73a push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 0043f73c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0043f73d call 0x5fe928 */ esp -= 4; M32(esp) = 0x43f742u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x43f73du); RETCHK(0x43f742u, 0x43f73du); LOADALL;
  /* 0043f742 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f745 lea eax, [ebp - 0x18c] */ eax = (u32)((u32)(ebp + 0xfffffe74u));
  /* 0043f74b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f74c lea ecx, [ebp - 0x3f0] */ ecx = (u32)((u32)(ebp + 0xfffffc10u));
  /* 0043f752 call 0x403060 */ esp -= 4; M32(esp) = 0x43f757u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x43f752u); RETCHK(0x43f757u, 0x43f752u); LOADALL;
  /* 0043f757 mov dword ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x3u); }
  /* 0043f75e mov esi, dword ptr [ebx + 0x4bc] */ { const u32 m_ = (u32)(ebx + 0x4bcu); esi = (u32)(M32(m_)); }
  /* 0043f764 lea eax, [ebp - 0x3f0] */ eax = (u32)((u32)(ebp + 0xfffffc10u));
  /* 0043f76a call 0x5224b0 */ esp -= 4; M32(esp) = 0x43f76fu; SAVEALL; F_005224b0(c); ABI_CHECK(0x5224b0u, 0x43f76au); RETCHK(0x43f76fu, 0x43f76au); LOADALL;
  /* 0043f76f lea ecx, [ebp - 0x3f0] */ ecx = (u32)((u32)(ebp + 0xfffffc10u));
  /* 0043f775 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0043f77c call 0x43ee60 */ esp -= 4; M32(esp) = 0x43f781u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x43f77cu); RETCHK(0x43f781u, 0x43f77cu); LOADALL;
  /* 0043f781 mov ecx, dword ptr [ebx + 0x4bc] */ { const u32 m_ = (u32)(ebx + 0x4bcu); ecx = (u32)(M32(m_)); }
  /* 0043f787 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0043f789 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0043f78b call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f78eu; SAVEALL; call_ind(c, t_); RETCHK(0x43f78eu, 0x43f78bu); LOADALL; }
  /* 0043f78e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0043f790 jmp 0x43f7a1 */ goto L_0043f7a1;
L_0043f792:;
  /* 0043f792 mov ecx, dword ptr [ebx + 0x4bc] */ { const u32 m_ = (u32)(ebx + 0x4bcu); ecx = (u32)(M32(m_)); }
  /* 0043f798 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0043f79a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f79c call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f79fu; SAVEALL; call_ind(c, t_); RETCHK(0x43f79fu, 0x43f79cu); LOADALL; }
  /* 0043f79f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
L_0043f7a1:;
  /* 0043f7a1 mov ecx, dword ptr [ebx + 0x4c0] */ { const u32 m_ = (u32)(ebx + 0x4c0u); ecx = (u32)(M32(m_)); }
  /* 0043f7a7 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0043f7a9 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f7acu; SAVEALL; call_ind(c, t_); RETCHK(0x43f7acu, 0x43f7a9u); LOADALL; }
  /* 0043f7ac mov esi, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); esi = (u32)(M32(m_)); }
L_0043f7af:;
  /* 0043f7af mov al, byte ptr [0x7a68c2] */ { const u32 m_ = (u32)(0x7a68c2u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f7b4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f7b6 jne 0x43f8ef */ if (!ZF_) goto L_0043f8ef;
  /* 0043f7bc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f7be jle 0x43f8ef */ if ((ZF_|LT_)) goto L_0043f8ef;
  /* 0043f7c4 mov eax, dword ptr [ebp - 0x390] */ { const u32 m_ = (u32)(ebp + 0xfffffc70u); eax = (u32)(M32(m_)); }
  /* 0043f7ca call 0x4021f0 */ esp -= 4; M32(esp) = 0x43f7cfu; SAVEALL; F_004021f0(c); ABI_CHECK(0x4021f0u, 0x43f7cau); RETCHK(0x43f7cfu, 0x43f7cau); LOADALL;
  /* 0043f7cf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f7d1 jne 0x43f8e8 */ if (!ZF_) goto L_0043f8e8;
  /* 0043f7d7 mov esi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); esi = (u32)(M32(m_)); }
  /* 0043f7dd push 0x1c2 */ { u32 v_ = 0x1c2u; esp -= 4; M32(esp) = v_; }
  /* 0043f7e2 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0043f7e7 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x43f7e9u; SAVEALL; call_ind(c, t_); RETCHK(0x43f7e9u, 0x43f7e7u); LOADALL; }
  /* 0043f7e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f7ea lea ecx, [ebp - 0x38c] */ ecx = (u32)((u32)(ebp + 0xfffffc74u));
  /* 0043f7f0 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0043f7f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0043f7f6 call 0x5fe928 */ esp -= 4; M32(esp) = 0x43f7fbu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x43f7f6u); RETCHK(0x43f7fbu, 0x43f7f6u); LOADALL;
  /* 0043f7fb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f7fe lea edx, [ebp - 0x38c] */ edx = (u32)((u32)(ebp + 0xfffffc74u));
  /* 0043f804 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0043f805 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0043f808 call 0x403060 */ esp -= 4; M32(esp) = 0x43f80du; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x43f808u); RETCHK(0x43f80du, 0x43f808u); LOADALL;
  /* 0043f80d mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 0043f814 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0043f817 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f819 je 0x43f859 */ if (ZF_) goto L_0043f859;
  /* 0043f81b push 0x338 */ { u32 v_ = 0x338u; esp -= 4; M32(esp) = v_; }
  /* 0043f820 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0043f825 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x43f827u; SAVEALL; call_ind(c, t_); RETCHK(0x43f827u, 0x43f825u); LOADALL; }
  /* 0043f827 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f828 lea eax, [ebp - 0x38c] */ eax = (u32)((u32)(ebp + 0xfffffc74u));
  /* 0043f82e push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0043f833 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f834 call 0x5fe928 */ esp -= 4; M32(esp) = 0x43f839u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x43f834u); RETCHK(0x43f839u, 0x43f834u); LOADALL;
  /* 0043f839 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f83c lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0043f83f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0043f840 mov eax, 0x645b8c */ { eax = (u32)(0x645b8cu); }
  /* 0043f845 call 0x40c8f0 */ esp -= 4; M32(esp) = 0x43f84au; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x43f845u); RETCHK(0x43f84au, 0x43f845u); LOADALL;
  /* 0043f84a lea edx, [ebp - 0x40] */ edx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0043f84d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0043f84e lea eax, [ebp - 0x38c] */ eax = (u32)((u32)(ebp + 0xfffffc74u));
  /* 0043f854 call 0x40c8f0 */ esp -= 4; M32(esp) = 0x43f859u; SAVEALL; F_0040c8f0(c); ABI_CHECK(0x40c8f0u, 0x43f854u); RETCHK(0x43f859u, 0x43f854u); LOADALL;
L_0043f859:;
  /* 0043f859 cmp dword ptr [ebp - 0x28], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0043f85d mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 0043f860 mov dword ptr [ebp - 0x20], 0x43480000 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x43480000u); }
  /* 0043f867 mov dword ptr [ebp - 0x1c], 0x43870000 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x43870000u); }
  /* 0043f86e mov dword ptr [ebp - 0x18], 0x44160000 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x44160000u); }
  /* 0043f875 mov dword ptr [ebp - 0x14], 0x43aa0000 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x43aa0000u); }
  /* 0043f87c jae 0x43f881 */ if (!CF_) goto L_0043f881;
  /* 0043f87e lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
L_0043f881:;
  /* 0043f881 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0043f883 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f885 push 0x40a00000 */ { u32 v_ = 0x40a00000u; esp -= 4; M32(esp) = v_; }
  /* 0043f88a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f88b sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f88e lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0043f891 mov eax, esp */ { eax = (u32)(esp); }
  /* 0043f893 mov dword ptr [ebp - 0x44], esp */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(esp); }
  /* 0043f896 call 0x52cea0 */ esp -= 4; M32(esp) = 0x43f89bu; SAVEALL; F_0052cea0(c); ABI_CHECK(0x52cea0u, 0x43f896u); RETCHK(0x43f89bu, 0x43f896u); LOADALL;
  /* 0043f89b call 0x44aca0 */ esp -= 4; M32(esp) = 0x43f8a0u; SAVEALL; F_0044aca0(c); ABI_CHECK(0x44aca0u, 0x43f89bu); RETCHK(0x43f8a0u, 0x43f89bu); LOADALL;
  /* 0043f8a0 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 0043f8a3 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f8a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f8a7 push 0x1c3 */ { u32 v_ = 0x1c3u; esp -= 4; M32(esp) = v_; }
  /* 0043f8ac push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0043f8b1 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f8b7u; SAVEALL; call_ind(c, t_); RETCHK(0x43f8b7u, 0x43f8b1u); LOADALL; }
  /* 0043f8b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0043f8b8 lea ecx, [ebp - 0x38c] */ ecx = (u32)((u32)(ebp + 0xfffffc74u));
  /* 0043f8be push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0043f8c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0043f8c4 call 0x5fe928 */ esp -= 4; M32(esp) = 0x43f8c9u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x43f8c4u); RETCHK(0x43f8c9u, 0x43f8c4u); LOADALL;
  /* 0043f8c9 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0043f8cb lea esi, [ebp - 0x38c] */ esi = (u32)((u32)(ebp + 0xfffffc74u));
  /* 0043f8d1 call 0x40ddd0 */ esp -= 4; M32(esp) = 0x43f8d6u; SAVEALL; F_0040ddd0(c); ABI_CHECK(0x40ddd0u, 0x43f8d1u); RETCHK(0x43f8d6u, 0x43f8d1u); LOADALL;
  /* 0043f8d6 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f8d9 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0043f8dc mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0043f8e3 call 0x43ee60 */ esp -= 4; M32(esp) = 0x43f8e8u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x43f8e3u); RETCHK(0x43f8e8u, 0x43f8e3u); LOADALL;
L_0043f8e8:;
  /* 0043f8e8 mov byte ptr [0x7a68c2], 1 */ { const u32 m_ = (u32)(0x7a68c2u); M8(m_) = (u8)(0x1u); }
L_0043f8ef:;
  /* 0043f8ef mov al, byte ptr [0x7a68ce] */ { const u32 m_ = (u32)(0x7a68ceu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f8f4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f8f6 jne 0x43f905 */ if (!ZF_) goto L_0043f905;
  /* 0043f8f8 mov al, byte ptr [0x7a68cf] */ { const u32 m_ = (u32)(0x7a68cfu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0043f8fd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0043f8ff je 0x44008b */ if (ZF_) goto L_0044008b;
L_0043f905:;
  /* 0043f905 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0043f907 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0043f909 mov dword ptr [ebp - 0x1c], 0x10000023 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x10000023u); }
  /* 0043f910 call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x43f913u; SAVEALL; call_ind(c, t_); RETCHK(0x43f913u, 0x43f910u); LOADALL; }
  /* 0043f913 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0043f916 mov eax, dword ptr [ebp - 0x390] */ { const u32 m_ = (u32)(ebp + 0xfffffc70u); eax = (u32)(M32(m_)); }
  /* 0043f91c mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 0043f922 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0043f924 mov dword ptr [ebp - 0x14], 1 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x1u); }
  /* 0043f92b je 0x43f93b */ if (ZF_) goto L_0043f93b;
  /* 0043f92d lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0043f930 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0043f931 mov edx, 0xc */ { edx = (u32)(0xcu); }
  /* 0043f936 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x43f93bu; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x43f936u); RETCHK(0x43f93bu, 0x43f936u); LOADALL;
L_0043f93b:;
  /* 0043f93b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0043f93d call 0x54c180 */ esp -= 4; M32(esp) = 0x43f942u; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x43f93du); RETCHK(0x43f942u, 0x43f93du); LOADALL;
  /* 0043f942 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0043f945 jmp 0x44008b */ goto L_0044008b;
L_0044008b:;
  /* 0044008b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0044008e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00440091 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00440092 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00440093 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00440094 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00440096 call 0x54c0b0 */ esp -= 4; M32(esp) = 0x44009bu; SAVEALL; F_0054c0b0(c); ABI_CHECK(0x54c0b0u, 0x440096u); RETCHK(0x44009bu, 0x440096u); LOADALL;
  /* 0044009b jmp 0x44010d */ goto L_0044010d;
L_0044010d:;
  /* 0044010d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00440110 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00440117 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0044011a call 0x61af31 */ esp -= 4; M32(esp) = 0x44011fu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x44011au); RETCHK(0x44011fu, 0x44011au); LOADALL;
  /* 0044011f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00440120 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00440121 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00440122 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00440124 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00440125 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_009c14c0:;
  /* 009c14c0 jne 0x9c14d8 */ if (!ZF_) goto L_009c14d8;
  /* 009c14c2 mov eax, dword ptr [ebp - 0x14c] */ { const u32 m_ = (u32)(ebp + 0xfffffeb4u); eax = (u32)(M32(m_)); }
  /* 009c14c8 cmp eax, dword ptr [0x9c1088] */ { const u32 m_ = (u32)(0x9c1088u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c14ce je 0x9c14d8 */ if (ZF_) goto L_009c14d8;
  /* 009c14d0 mov dword ptr [0x9c1088], eax */ { const u32 m_ = (u32)(0x9c1088u); M32(m_) = (u32)(eax); }
  /* 009c14d5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c14d7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_009c14d8:;
  /* 009c14d8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c14db jmp 0x43f54e */ goto L_0043f54e;
}

void F_009c1510(CPU *c) {
  NATIVE_HOOK(0x9c1510u) REGS; LOADALL;
L_009c1510:;
  /* 009c1510 mov ecx, dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 009c1514 cmp byte ptr [ecx], 0x7e */ { const u32 m_ = (u32)(ecx); u32 a_ = M8(m_), b_ = 0x7eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c1517 jne 0x9c1520 */ if (!ZF_) goto L_009c1520;
  /* 009c1519 cmp dword ptr [esp + 0xc], 1 */ { const u32 m_ = (u32)(esp + 0xcu); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c151e ja 0x9c152f */ if (!(CF_|ZF_)) goto L_009c152f;
L_009c1520:;
  /* 009c1520 mov ecx, dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 009c1524 mov dword ptr [0x9c1500], ecx */ { const u32 m_ = (u32)(0x9c1500u); M32(m_) = (u32)(ecx); }
  /* 009c152a jmp 0x40a4a0 */ SAVEALL; F_0040a4a0(c); return;
L_009c152f:;
  /* 009c152f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c1530 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c1531 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009c1532 mov esi, dword ptr [esp + 0x14] */ { const u32 m_ = (u32)(esp + 0x14u); esi = (u32)(M32(m_)); }
  /* 009c1536 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1537 mov edi, dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); edi = (u32)(M32(m_)); }
  /* 009c153b dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 009c153c mov dword ptr [0x9c1500], edi */ { const u32 m_ = (u32)(0x9c1500u); M32(m_) = (u32)(edi); }
  /* 009c1542 mov ebx, eax */ { ebx = (u32)(eax); }
L_009c1544:;
  /* 009c1544 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009c1545 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c1546 push dword ptr [esp + 0x18] */ { const u32 m_ = (u32)(esp + 0x18u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c154a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 009c154c call 0x40a4a0 */ esp -= 4; M32(esp) = 0x9c1551u; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x9c154cu); RETCHK(0x9c1551u, 0x9c154cu); LOADALL;
  /* 009c1551 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1554 je 0x9c158a */ if (ZF_) goto L_009c158a;
  /* 009c1556 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 009c1558 mov ecx, dword ptr [esp + 0x10] */ { const u32 m_ = (u32)(esp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 009c155c lea edx, [ecx + 4] */ edx = (u32)((u32)(ecx + 0x4u));
  /* 009c155f cmp dword ptr [ecx + 0x18], 0x10 */ { const u32 m_ = (u32)(ecx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1563 jb 0x9c1567 */ if (CF_) goto L_009c1567;
  /* 009c1565 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_009c1567:;
  /* 009c1567 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1569 je 0x9c1576 */ if (ZF_) goto L_009c1576;
  /* 009c156b mov al, byte ptr [edx + ebx - 1] */ { const u32 m_ = (u32)(edx + ebx + 0xffffffffu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c156f call 0x9c1590 */ esp -= 4; M32(esp) = 0x9c1574u; SAVEALL; F_009c1590(c); ABI_CHECK(0x9c1590u, 0x9c156fu); RETCHK(0x9c1574u, 0x9c156fu); LOADALL;
  /* 009c1574 jb 0x9c1587 */ if (CF_) goto L_009c1587;
L_009c1576:;
  /* 009c1576 lea ecx, [ebx + edi] */ ecx = (u32)((u32)(ebx + edi));
  /* 009c1579 mov al, byte ptr [edx + ecx] */ { const u32 m_ = (u32)(edx + ecx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c157c call 0x9c1590 */ esp -= 4; M32(esp) = 0x9c1581u; SAVEALL; F_009c1590(c); ABI_CHECK(0x9c1590u, 0x9c157cu); RETCHK(0x9c1581u, 0x9c157cu); LOADALL;
  /* 009c1581 jb 0x9c1587 */ if (CF_) goto L_009c1587;
  /* 009c1583 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 009c1585 jmp 0x9c158a */ goto L_009c158a;
L_009c1587:;
  /* 009c1587 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1588 jmp 0x9c1544 */ goto L_009c1544;
L_009c158a:;
  /* 009c158a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c158b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c158c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009c158d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_009c1590(CPU *c) {
  NATIVE_HOOK(0x9c1590u) REGS; LOADALL;
L_009c1590:;
  /* 009c1590 mov ah, al */ { eax = (eax & 0xffff00ffu) | (((u32)((eax & 0xffu)) & 0xffu) << 8); }
  /* 009c1592 sub al, 0x30 */ { u32 a_ = (eax & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 009c1594 cmp al, 0xa */ { u32 a_ = (eax & 0xffu), b_ = 0xau; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c1596 jb 0x9c159e */ if (CF_) goto L_009c159e;
  /* 009c1598 mov al, ah */ { eax = (eax & 0xffffff00u) | ((u32)(((eax >> 8) & 0xffu)) & 0xffu); }
  /* 009c159a sub al, 0x61 */ { u32 a_ = (eax & 0xffu), b_ = 0x61u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 009c159c cmp al, 0x1a */ { u32 a_ = (eax & 0xffu), b_ = 0x1au; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
L_009c159e:;
  /* 009c159e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c159f(CPU *c) {
  NATIVE_HOOK(0x9c159fu) REGS; LOADALL;
  goto L_009c159f;
L_004fa030:;
  /* 004fa030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004fa031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004fa033 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa036 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004fa037 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa038 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fa03b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004fa03d cmp dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa040 jae 0x4fa049 */ if (!CF_) goto L_004fa049;
  /* 004fa042 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fa044 call 0x60166e */ esp -= 4; M32(esp) = 0x4fa049u; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x4fa044u); RETCHK(0x4fa049u, 0x4fa044u); LOADALL;
L_004fa049:;
  /* 004fa049 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fa04c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004fa04e sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fa050 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa052 jae 0x4fa056 */ if (!CF_) goto L_004fa056;
  /* 004fa054 mov ebx, ecx */ { ebx = (u32)(ecx); }
L_004fa056:;
  /* 004fa056 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fa059 or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004fa05c sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fa05e sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fa060 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa062 ja 0x4fa06e */ if (!(CF_|ZF_)) goto L_004fa06e;
  /* 004fa064 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fa066 call 0x6016ae */ esp -= 4; M32(esp) = 0x4fa06bu; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x4fa066u); RETCHK(0x4fa06bu, 0x4fa066u); LOADALL;
  /* 004fa06b mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_004fa06e:;
  /* 004fa06e mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 004fa071 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fa073 sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fa075 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa077 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 004fa07a jae 0x4fa0b6 */ if (!CF_) goto L_004fa0b6;
  /* 004fa07c cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa080 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004fa083 jb 0x4fa08c */ if (CF_) goto L_004fa08c;
  /* 004fa085 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004fa087 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 004fa08a jmp 0x4fa08f */ goto L_004fa08f;
L_004fa08c:;
  /* 004fa08c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
L_004fa08f:;
  /* 004fa08f cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa093 jb 0x4fa097 */ if (CF_) goto L_004fa097;
  /* 004fa095 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_004fa097:;
  /* 004fa097 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004fa09a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa09b mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 004fa09e add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fa0a0 add edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004fa0a2 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fa0a4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa0a5 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fa0a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa0a8 call 0x5fe998 */ esp -= 4; M32(esp) = 0x4fa0adu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x4fa0a8u); RETCHK(0x4fa0adu, 0x4fa0a8u); LOADALL;
  /* 004fa0ad mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004fa0b0 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fa0b3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004fa0b6:;
  /* 004fa0b6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa0b8 ja 0x4fa0c2 */ if (!(CF_|ZF_)) goto L_004fa0c2;
  /* 004fa0ba test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa0bc jbe 0x4fa1b7 */ if ((CF_|ZF_)) goto L_004fa1b7;
L_004fa0c2:;
  /* 004fa0c2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004fa0c4 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 004fa0c7 sub edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fa0c9 add edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fa0cb cmp edi, -2 */ { u32 a_ = edi, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa0ce mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 004fa0d1 jbe 0x4fa0dd */ if ((CF_|ZF_)) goto L_004fa0dd;
  /* 004fa0d3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fa0d5 call 0x6016ae */ esp -= 4; M32(esp) = 0x4fa0dau; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x4fa0d5u); RETCHK(0x4fa0dau, 0x4fa0d5u); LOADALL;
  /* 004fa0da mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
L_004fa0dd:;
  /* 004fa0dd mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 004fa0e0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa0e2 jae 0x4fa10f */ if (!CF_) goto L_004fa10f;
  /* 004fa0e4 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 004fa0e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa0e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004fa0e9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004fa0eb call 0x4042c0 */ esp -= 4; M32(esp) = 0x4fa0f0u; SAVEALL; F_004042c0(c); ABI_CHECK(0x4042c0u, 0x4fa0ebu); RETCHK(0x4fa0f0u, 0x4fa0ebu); LOADALL;
  /* 004fa0f0 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004fa0f3 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_004fa0f5:;
  /* 004fa0f5 jbe 0x4fa1b7 */ if ((CF_|ZF_)) goto L_004fa1b7;
  /* 004fa0fb cmp ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa0fe jae 0x4fa15f */ if (!CF_) goto L_004fa15f;
  /* 004fa100 mov edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edi = (u32)(M32(m_)); }
  /* 004fa103 cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa106 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004fa109 jb 0x4fa13b */ if (CF_) goto L_004fa13b;
  /* 004fa10b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fa10d jmp 0x4fa13d */ goto L_004fa13d;
L_004fa10f:;
  /* 004fa10f test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004fa111 jne 0x4fa0f5 */ if (!ZF_) goto L_004fa0f5;
  /* 004fa113 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa116 mov dword ptr [esi + 0x14], edi */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(edi); }
  /* 004fa119 jb 0x4fa12b */ if (CF_) goto L_004fa12b;
  /* 004fa11b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa11e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa11f mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004fa122 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa124 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa125 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa127 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa128 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004fa12b:;
  /* 004fa12b lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004fa12e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa12f mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004fa132 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa134 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa135 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa137 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa138 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004fa13b:;
  /* 004fa13b mov ecx, eax */ { ecx = (u32)(eax); }
L_004fa13d:;
  /* 004fa13d cmp edi, 0x10 */ { u32 a_ = edi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa140 jb 0x4fa144 */ if (CF_) goto L_004fa144;
  /* 004fa142 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_004fa144:;
  /* 004fa144 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004fa147 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004fa148 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004fa14b add ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fa14d add ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fa14f add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fa151 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fa152 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004fa154 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004fa155 call 0x5fe998 */ esp -= 4; M32(esp) = 0x4fa15au; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x4fa155u); RETCHK(0x4fa15au, 0x4fa155u); LOADALL;
  /* 004fa15a add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004fa15d jmp 0x4fa162 */ goto L_004fa162;
L_004fa15f:;
  /* 004fa15f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_004fa162:;
  /* 004fa162 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa166 jb 0x4fa16d */ if (CF_) goto L_004fa16d;
  /* 004fa168 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004fa16b jmp 0x4fa170 */ goto L_004fa170;
L_004fa16d:;
  /* 004fa16d lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
L_004fa170:;
  /* 004fa170 movsx eax, byte ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)((u32)sxt(M8(m_), 1) & 0xffffffffu); }
  /* 004fa174 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004fa177 mov bl, al */ { ebx = (ebx & 0xffffff00u) | ((u32)((eax & 0xffu)) & 0xffu); }
  /* 004fa179 mov bh, bl */ { ebx = (ebx & 0xffff00ffu) | (((u32)((ebx & 0xffu)) & 0xffu) << 8); }
  /* 004fa17b add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004fa17d mov edx, ecx */ { edx = (u32)(ecx); }
  /* 004fa17f shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004fa182 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004fa184 shl eax, 0x10 */ { u32 n_ = (16u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004fa187 mov ax, bx */ { eax = (eax & 0xffff0000u) | ((u32)((ebx & 0xffffu)) & 0xffffu); }
  /* 004fa18a rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004fa18c mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004fa18e and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004fa191 rep stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = (u8)(eax & 0xffu); edi += st_; ecx--; } }
  /* 004fa193 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004fa197 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004fa19a mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004fa19d jb 0x4fa1b0 */ if (CF_) goto L_004fa1b0;
  /* 004fa19f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004fa1a2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa1a3 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 004fa1a7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa1a9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa1aa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa1ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa1ad ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004fa1b0:;
  /* 004fa1b0 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004fa1b3 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
L_004fa1b7:;
  /* 004fa1b7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004fa1b8 mov eax, esi */ { eax = (u32)(esi); }
  /* 004fa1ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004fa1bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004fa1bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004fa1be ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_009c159f:;
  /* 009c159f mov eax, dword ptr [0x9c1500] */ { const u32 m_ = (u32)(0x9c1500u); eax = (u32)(M32(m_)); }
  /* 009c15a4 mov dword ptr [esp + 8], eax */ { const u32 m_ = (u32)(esp + 0x8u); M32(m_) = (u32)(eax); }
  /* 009c15a8 jmp 0x4fa030 */ goto L_004fa030;
}

void F_009c1810(CPU *c) {
  NATIVE_HOOK(0x9c1810u) REGS; LOADALL;
  goto L_009c1810;
L_005fefae:;
  /* 005fefae jmp dword ptr [0x62e664] */ { const u32 m_ = (u32)(0x62e664u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_009c1810:;
  /* 009c1810 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1811 sub esp, 0x20c */ { u32 a_ = esp, b_ = 0x20cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c1817 push 0x9c1780 */ { u32 v_ = 0x9c1780u; esp -= 4; M32(esp) = v_; }
  /* 009c181c call dword ptr [0x62e160] */ { const u32 m_ = (u32)(0x62e160u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1822u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1822u, 0x9c181cu); LOADALL; }
  /* 009c1822 push 0x9c178d */ { u32 v_ = 0x9c178du; esp -= 4; M32(esp) = v_; }
  /* 009c1827 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c1828 call dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c182eu; SAVEALL; call_ind(c, t_); RETCHK(0x9c182eu, 0x9c1828u); LOADALL; }
  /* 009c182e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1830 je 0x9c1955 */ if (ZF_) goto L_009c1955;
  /* 009c1836 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 009c183b lea ecx, [esp + 4] */ ecx = (u32)((u32)(esp + 0x4u));
  /* 009c183f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009c1840 push 0x9c17a5 */ { u32 v_ = 0x9c17a5u; esp -= 4; M32(esp) = v_; }
  /* 009c1845 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x9c1847u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1847u, 0x9c1845u); LOADALL; }
  /* 009c1847 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1849 je 0x9c1955 */ if (ZF_) goto L_009c1955;
  /* 009c184f cmp eax, 0x100 */ { u32 a_ = eax, b_ = 0x100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1854 jae 0x9c1955 */ if (!CF_) goto L_009c1955;
  /* 009c185a push 0x9c17b5 */ { u32 v_ = 0x9c17b5u; esp -= 4; M32(esp) = v_; }
  /* 009c185f call dword ptr [0x62e160] */ { const u32 m_ = (u32)(0x62e160u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1865u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1865u, 0x9c185fu); LOADALL; }
  /* 009c1865 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1867 je 0x9c1955 */ if (ZF_) goto L_009c1955;
  /* 009c186d mov ebx, eax */ { ebx = (u32)(eax); }
  /* 009c186f push 0x9c17c0 */ { u32 v_ = 0x9c17c0u; esp -= 4; M32(esp) = v_; }
  /* 009c1874 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c1875 call dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c187bu; SAVEALL; call_ind(c, t_); RETCHK(0x9c187bu, 0x9c1875u); LOADALL; }
  /* 009c187b mov dword ptr [esp + 0x204], eax */ { const u32 m_ = (u32)(esp + 0x204u); M32(m_) = (u32)(eax); }
  /* 009c1882 push 0x9c17da */ { u32 v_ = 0x9c17dau; esp -= 4; M32(esp) = v_; }
  /* 009c1887 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c1888 call dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c188eu; SAVEALL; call_ind(c, t_); RETCHK(0x9c188eu, 0x9c1888u); LOADALL; }
  /* 009c188e mov dword ptr [esp + 0x208], eax */ { const u32 m_ = (u32)(esp + 0x208u); M32(m_) = (u32)(eax); }
  /* 009c1895 push 0x9c17f4 */ { u32 v_ = 0x9c17f4u; esp -= 4; M32(esp) = v_; }
  /* 009c189a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c189b call dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c18a1u; SAVEALL; call_ind(c, t_); RETCHK(0x9c18a1u, 0x9c189bu); LOADALL; }
  /* 009c18a1 mov ebp, eax */ { ebp = (u32)(eax); }
  /* 009c18a3 test ebp, ebp */ { u32 a_ = ebp, b_ = ebp; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c18a5 je 0x9c1955 */ if (ZF_) goto L_009c1955;
  /* 009c18ab cmp dword ptr [esp + 0x204], 0 */ { const u32 m_ = (u32)(esp + 0x204u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c18b3 je 0x9c1955 */ if (ZF_) goto L_009c1955;
  /* 009c18b9 cmp dword ptr [esp + 0x208], 0 */ { const u32 m_ = (u32)(esp + 0x208u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c18c1 je 0x9c1955 */ if (ZF_) goto L_009c1955;
  /* 009c18c7 mov esi, dword ptr [0x7a6d98] */ { const u32 m_ = (u32)(0x7a6d98u); esi = (u32)(M32(m_)); }
  /* 009c18cd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c18cf je 0x9c1955 */ if (ZF_) goto L_009c1955;
  /* 009c18d5 mov dword ptr [esp + 0x200], 0 */ { const u32 m_ = (u32)(esp + 0x200u); M32(m_) = (u32)(0x0u); }
  /* 009c18e0 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 009c18e2 lea eax, [esp + 0x200] */ eax = (u32)((u32)(esp + 0x200u));
  /* 009c18e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c18ea push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c18eb call dword ptr [esp + 0x20c] */ { const u32 m_ = (u32)(esp + 0x20cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c18f2u; SAVEALL; call_ind(c, t_); RETCHK(0x9c18f2u, 0x9c18ebu); LOADALL; }
  /* 009c18f2 mov esp, ebx */ { esp = (u32)(ebx); }
  /* 009c18f4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c18f6 jne 0x9c1955 */ if (!ZF_) goto L_009c1955;
  /* 009c18f8 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_009c18fa:;
  /* 009c18fa cmp edi, dword ptr [esp + 0x200] */ { const u32 m_ = (u32)(esp + 0x200u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1901 jge 0x9c1955 */ if (!LT_) goto L_009c1955;
  /* 009c1903 mov byte ptr [esp + 0x100], 0 */ { const u32 m_ = (u32)(esp + 0x100u); M8(m_) = (u8)(0x0u); }
  /* 009c190b mov ebx, esp */ { ebx = (u32)(esp); }
  /* 009c190d push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 009c1912 lea eax, [esp + 0x104] */ eax = (u32)((u32)(esp + 0x104u));
  /* 009c1919 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c191a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009c191b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c191c call dword ptr [esp + 0x218] */ { const u32 m_ = (u32)(esp + 0x218u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1923u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1923u, 0x9c191cu); LOADALL; }
  /* 009c1923 mov esp, ebx */ { esp = (u32)(ebx); }
  /* 009c1925 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1927 jne 0x9c1952 */ if (!ZF_) goto L_009c1952;
  /* 009c1929 mov byte ptr [esp + 0x1ff], 0 */ { const u32 m_ = (u32)(esp + 0x1ffu); M8(m_) = (u8)(0x0u); }
  /* 009c1931 lea eax, [esp + 0x100] */ eax = (u32)((u32)(esp + 0x100u));
  /* 009c1938 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c1939 lea eax, [esp + 4] */ eax = (u32)((u32)(esp + 0x4u));
  /* 009c193d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c193e call dword ptr [0x62e1dc] */ { const u32 m_ = (u32)(0x62e1dcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1944u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1944u, 0x9c193eu); LOADALL; }
  /* 009c1944 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1946 jne 0x9c1952 */ if (!ZF_) goto L_009c1952;
  /* 009c1948 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 009c194a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009c194b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c194c call ebp */ { u32 t_ = ebp; esp -= 4; M32(esp) = 0x9c194eu; SAVEALL; call_ind(c, t_); RETCHK(0x9c194eu, 0x9c194cu); LOADALL; }
  /* 009c194e mov esp, ebx */ { esp = (u32)(ebx); }
  /* 009c1950 jmp 0x9c1955 */ goto L_009c1955;
L_009c1952:;
  /* 009c1952 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1953 jmp 0x9c18fa */ goto L_009c18fa;
L_009c1955:;
  /* 009c1955 add esp, 0x20c */ { u32 a_ = esp, b_ = 0x20cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c195b popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c195c jmp 0x5fefae */ goto L_005fefae;
}

void F_009c1970(CPU *c) {
  NATIVE_HOOK(0x9c1970u) REGS; LOADALL;
L_009c1970:;
  /* 009c1970 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c1973 mov esi, esp */ { esi = (u32)(esp); }
  /* 009c1975 push 0x9c1660 */ { u32 v_ = 0x9c1660u; esp -= 4; M32(esp) = v_; }
  /* 009c197a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009c197c call 0x403060 */ esp -= 4; M32(esp) = 0x9c1981u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9c197cu); RETCHK(0x9c1981u, 0x9c197cu); LOADALL;
  /* 009c1981 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c1982 mov ecx, dword ptr [edi + 0xd4] */ { const u32 m_ = (u32)(edi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 009c1988 call 0x5075d0 */ esp -= 4; M32(esp) = 0x9c198du; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9c1988u); RETCHK(0x9c198du, 0x9c1988u); LOADALL;
  /* 009c198d mov dword ptr [0x9c16f8], eax */ { const u32 m_ = (u32)(0x9c16f8u); M32(m_) = (u32)(eax); }
  /* 009c1992 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009c1994 call 0x43ee60 */ esp -= 4; M32(esp) = 0x9c1999u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9c1994u); RETCHK(0x9c1999u, 0x9c1994u); LOADALL;
  /* 009c1999 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c199c jmp 0x9c19e4 */ SAVEALL; F_009c19e4(c); return;
}

void F_009c19c4(CPU *c) {
  NATIVE_HOOK(0x9c19c4u) REGS; LOADALL;
L_009c19c4:;
  /* 009c19c4 cmp ebx, dword ptr [0x9c1a08] */ { const u32 m_ = (u32)(0x9c1a08u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c19ca jne 0x9c19f8 */ if (!ZF_) goto L_009c19f8;
  /* 009c19cc mov eax, dword ptr [0x9c16f8] */ { const u32 m_ = (u32)(0x9c16f8u); eax = (u32)(M32(m_)); }
  /* 009c19d1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c19d3 je 0x9c19f8 */ if (ZF_) goto L_009c19f8;
  /* 009c19d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c19d6 call 0x506330 */ esp -= 4; M32(esp) = 0x9c19dbu; SAVEALL; F_00506330(c); ABI_CHECK(0x506330u, 0x9c19d6u); RETCHK(0x9c19dbu, 0x9c19d6u); LOADALL;
  /* 009c19db pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009c19dc cmp al, byte ptr [0x9c16fc] */ { const u32 m_ = (u32)(0x9c16fcu); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c19e2 je 0x9c19f8 */ if (ZF_) goto L_009c19f8;
  /* 009c19e4 mov eax, dword ptr [0x9c16f8] */ { const u32 m_ = (u32)(0x9c16f8u); eax = (u32)(M32(m_)); }
  /* 009c19e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c19eb je 0x9c19f8 */ if (ZF_) goto L_009c19f8;
  /* 009c19ed mov cl, byte ptr [0x9c16fc] */ { const u32 m_ = (u32)(0x9c16fcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c19f3 call 0x506340 */ esp -= 4; M32(esp) = 0x9c19f8u; SAVEALL; F_00506340(c); ABI_CHECK(0x506340u, 0x9c19f3u); RETCHK(0x9c19f8u, 0x9c19f3u); LOADALL;
L_009c19f8:;
  /* 009c19f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c19e4(CPU *c) {
  NATIVE_HOOK(0x9c19e4u) REGS; LOADALL;
L_009c19e4:;
  /* 009c19e4 mov eax, dword ptr [0x9c16f8] */ { const u32 m_ = (u32)(0x9c16f8u); eax = (u32)(M32(m_)); }
  /* 009c19e9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c19eb je 0x9c19f8 */ if (ZF_) goto L_009c19f8;
  /* 009c19ed mov cl, byte ptr [0x9c16fc] */ { const u32 m_ = (u32)(0x9c16fcu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c19f3 call 0x506340 */ esp -= 4; M32(esp) = 0x9c19f8u; SAVEALL; F_00506340(c); ABI_CHECK(0x506340u, 0x9c19f3u); RETCHK(0x9c19f8u, 0x9c19f3u); LOADALL;
L_009c19f8:;
  /* 009c19f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1a10(CPU *c) {
  NATIVE_HOOK(0x9c1a10u) REGS; LOADALL;
L_009c1a10:;
  /* 009c1a10 mov dword ptr [edi + 0x46c], eax */ { const u32 m_ = (u32)(edi + 0x46cu); M32(m_) = (u32)(eax); }
  /* 009c1a16 mov dword ptr [0x9c1a08], edi */ { const u32 m_ = (u32)(0x9c1a08u); M32(m_) = (u32)(edi); }
  /* 009c1a1c pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1a1d mov ebx, esp */ { ebx = (u32)(esp); }
  /* 009c1a1f sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c1a22 mov esi, esp */ { esi = (u32)(esp); }
  /* 009c1a24 push 0x9c1700 */ { u32 v_ = 0x9c1700u; esp -= 4; M32(esp) = v_; }
  /* 009c1a29 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009c1a2b call 0x403060 */ esp -= 4; M32(esp) = 0x9c1a30u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9c1a2bu); RETCHK(0x9c1a30u, 0x9c1a2bu); LOADALL;
  /* 009c1a30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c1a31 mov ecx, dword ptr [edi + 0xd4] */ { const u32 m_ = (u32)(edi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 009c1a37 call 0x5075d0 */ esp -= 4; M32(esp) = 0x9c1a3cu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9c1a37u); RETCHK(0x9c1a3cu, 0x9c1a37u); LOADALL;
  /* 009c1a3c mov dword ptr [0x9c1a00], eax */ { const u32 m_ = (u32)(0x9c1a00u); M32(m_) = (u32)(eax); }
  /* 009c1a41 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009c1a43 call 0x43ee60 */ esp -= 4; M32(esp) = 0x9c1a48u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9c1a43u); RETCHK(0x9c1a48u, 0x9c1a43u); LOADALL;
  /* 009c1a48 mov eax, dword ptr [0x9c1a00] */ { const u32 m_ = (u32)(0x9c1a00u); eax = (u32)(M32(m_)); }
  /* 009c1a4d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1a4f je 0x9c1a5c */ if (ZF_) goto L_009c1a5c;
  /* 009c1a51 mov cl, byte ptr [0x9c1a04] */ { const u32 m_ = (u32)(0x9c1a04u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c1a57 call 0x506340 */ esp -= 4; M32(esp) = 0x9c1a5cu; SAVEALL; F_00506340(c); ABI_CHECK(0x506340u, 0x9c1a57u); RETCHK(0x9c1a5cu, 0x9c1a57u); LOADALL;
L_009c1a5c:;
  /* 009c1a5c call 0x9c1970 */ esp -= 4; M32(esp) = 0x9c1a61u; SAVEALL; F_009c1970(c); ABI_CHECK(0x9c1970u, 0x9c1a5cu); RETCHK(0x9c1a61u, 0x9c1a5cu); LOADALL;
  /* 009c1a61 mov esp, ebx */ { esp = (u32)(ebx); }
  /* 009c1a63 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c1a64 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1cb2(CPU *c) {
  NATIVE_HOOK(0x9c1cb2u) REGS; LOADALL;
L_009c1cb2:;
  /* 009c1cb2 mov edi, dword ptr [0x9c1a08] */ { const u32 m_ = (u32)(0x9c1a08u); edi = (u32)(M32(m_)); }
  /* 009c1cb8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1cba je 0x9c1d1f */ if (ZF_) goto L_009c1d1f;
  /* 009c1cbc cmp edi, dword ptr [0x9c1b60] */ { const u32 m_ = (u32)(0x9c1b60u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1cc2 je 0x9c1ceb */ if (ZF_) goto L_009c1ceb;
  /* 009c1cc4 mov dword ptr [0x9c1b60], edi */ { const u32 m_ = (u32)(0x9c1b60u); M32(m_) = (u32)(edi); }
  /* 009c1cca xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_009c1ccc:;
  /* 009c1ccc push dword ptr [esi*4 + 0x9c1b88] */ { const u32 m_ = (u32)(esi * 4u + 0x9c1b88u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c1cd3 mov ecx, dword ptr [edi + 0xd4] */ { const u32 m_ = (u32)(edi + 0xd4u); ecx = (u32)(M32(m_)); }
  /* 009c1cd9 call 0x9c1d20 */ esp -= 4; M32(esp) = 0x9c1cdeu; SAVEALL; F_009c1d20(c); ABI_CHECK(0x9c1d20u, 0x9c1cd9u); RETCHK(0x9c1cdeu, 0x9c1cd9u); LOADALL;
  /* 009c1cde mov dword ptr [esi*4 + 0x9c1b40], eax */ { const u32 m_ = (u32)(esi * 4u + 0x9c1b40u); M32(m_) = (u32)(eax); }
  /* 009c1ce5 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1ce6 cmp esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1ce9 jb 0x9c1ccc */ if (CF_) goto L_009c1ccc;
L_009c1ceb:;
  /* 009c1ceb xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_009c1ced:;
  /* 009c1ced mov ecx, dword ptr [esi*4 + 0x9c1b40] */ { const u32 m_ = (u32)(esi * 4u + 0x9c1b40u); ecx = (u32)(M32(m_)); }
  /* 009c1cf4 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1cf6 je 0x9c1d19 */ if (ZF_) goto L_009c1d19;
  /* 009c1cf8 imul eax, esi, 0x70 */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x70u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009c1cfb mov eax, dword ptr [edi + eax + 0xe0] */ { const u32 m_ = (u32)(edi + eax + 0xe0u); eax = (u32)(M32(m_)); }
  /* 009c1d02 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 009c1d04 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1d06 je 0x9c1d13 */ if (ZF_) goto L_009c1d13;
  /* 009c1d08 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009c1d09 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 009c1d0b call 0x9c1d4d */ esp -= 4; M32(esp) = 0x9c1d10u; SAVEALL; F_009c1d4d(c); ABI_CHECK(0x9c1d4du, 0x9c1d0bu); RETCHK(0x9c1d10u, 0x9c1d0bu); LOADALL;
  /* 009c1d10 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009c1d11 mov edx, eax */ { edx = (u32)(eax); }
L_009c1d13:;
  /* 009c1d13 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009c1d14 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c1d16 call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1d19u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1d19u, 0x9c1d16u); LOADALL; }
L_009c1d19:;
  /* 009c1d19 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1d1a cmp esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1d1d jb 0x9c1ced */ if (CF_) goto L_009c1ced;
L_009c1d1f:;
  /* 009c1d1f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1d20(CPU *c) {
  NATIVE_HOOK(0x9c1d20u) REGS; LOADALL;
L_009c1d20:;
  /* 009c1d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 009c1d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 009c1d23 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c1d24 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 009c1d26 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c1d29 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 009c1d2b push dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c1d2e call 0x403060 */ esp -= 4; M32(esp) = 0x9c1d33u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x9c1d2eu); RETCHK(0x9c1d33u, 0x9c1d2eu); LOADALL;
  /* 009c1d33 push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 009c1d34 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 009c1d36 call 0x5075d0 */ esp -= 4; M32(esp) = 0x9c1d3bu; SAVEALL; F_005075d0(c); ABI_CHECK(0x5075d0u, 0x9c1d36u); RETCHK(0x9c1d3bu, 0x9c1d36u); LOADALL;
  /* 009c1d3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 009c1d3c lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 009c1d3f call 0x43ee60 */ esp -= 4; M32(esp) = 0x9c1d44u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x9c1d3fu); RETCHK(0x9c1d44u, 0x9c1d3fu); LOADALL;
  /* 009c1d44 pop eax */ { u32 v_ = M32(esp); esp += 4; eax = (u32)(v_); }
  /* 009c1d45 lea esp, [ebp - 4] */ esp = (u32)((u32)(ebp + 0xfffffffcu));
  /* 009c1d48 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c1d49 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009c1d4a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_009c1d4d(CPU *c) {
  NATIVE_HOOK(0x9c1d4du) REGS; LOADALL;
L_009c1d4d:;
  /* 009c1d4d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009c1d4e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c1d50 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_009c1d52:;
  /* 009c1d52 cmp dword ptr [edx*8 + 0x9c1b00], ecx */ { const u32 m_ = (u32)(edx * 8u + 0x9c1b00u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1d59 jne 0x9c1d64 */ if (!ZF_) goto L_009c1d64;
  /* 009c1d5b mov eax, dword ptr [edx*8 + 0x9c1b04] */ { const u32 m_ = (u32)(edx * 8u + 0x9c1b04u); eax = (u32)(M32(m_)); }
  /* 009c1d62 jmp 0x9c1d6a */ goto L_009c1d6a;
L_009c1d64:;
  /* 009c1d64 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1d65 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1d68 jb 0x9c1d52 */ if (CF_) goto L_009c1d52;
L_009c1d6a:;
  /* 009c1d6a pop edx */ { u32 v_ = M32(esp); esp += 4; edx = (u32)(v_); }
  /* 009c1d6b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1d6c(CPU *c) {
  NATIVE_HOOK(0x9c1d6cu) REGS; LOADALL;
L_009c1d6c:;
  /* 009c1d6c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c1d6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 009c1d6e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 009c1d6f mov edi, ecx */ { edi = (u32)(ecx); }
  /* 009c1d71 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c1d73 call 0x4019a0 */ esp -= 4; M32(esp) = 0x9c1d78u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x9c1d73u); RETCHK(0x9c1d78u, 0x9c1d73u); LOADALL;
  /* 009c1d78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c1d7b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 009c1d7d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_009c1d7f:;
  /* 009c1d7f cmp dword ptr [esi*8 + 0x9c1b04], 0 */ { const u32 m_ = (u32)(esi * 8u + 0x9c1b04u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1d87 je 0x9c1d9b */ if (ZF_) goto L_009c1d9b;
  /* 009c1d89 mov ecx, dword ptr [esi*8 + 0x9c1b00] */ { const u32 m_ = (u32)(esi * 8u + 0x9c1b00u); ecx = (u32)(M32(m_)); }
  /* 009c1d90 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 009c1d92 call 0x401060 */ esp -= 4; M32(esp) = 0x9c1d97u; SAVEALL; F_00401060(c); ABI_CHECK(0x401060u, 0x9c1d92u); RETCHK(0x9c1d97u, 0x9c1d92u); LOADALL;
  /* 009c1d97 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1d99 je 0x9c1da5 */ if (ZF_) goto L_009c1da5;
L_009c1d9b:;
  /* 009c1d9b inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1d9c cmp esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1d9f jb 0x9c1d7f */ if (CF_) goto L_009c1d7f;
  /* 009c1da1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 009c1da3 jmp 0x9c1daa */ goto L_009c1daa;
L_009c1da5:;
  /* 009c1da5 mov eax, 1 */ { eax = (u32)(0x1u); }
L_009c1daa:;
  /* 009c1daa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c1dab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c1dac pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009c1dad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1dd1(CPU *c) {
  NATIVE_HOOK(0x9c1dd1u) REGS; LOADALL;
L_009c1dd1:;
  /* 009c1dd1 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1dd2 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 009c1dd4 mov esi, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); esi = (u32)(M32(m_)); }
  /* 009c1dd7 cmp esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1dda jae 0x9c1dee */ if (!CF_) goto L_009c1dee;
  /* 009c1ddc mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 009c1ddf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1de1 je 0x9c1dee */ if (ZF_) goto L_009c1dee;
  /* 009c1de3 call 0x9c1d6c */ esp -= 4; M32(esp) = 0x9c1de8u; SAVEALL; F_009c1d6c(c); ABI_CHECK(0x9c1d6cu, 0x9c1de3u); RETCHK(0x9c1de8u, 0x9c1de3u); LOADALL;
  /* 009c1de8 mov byte ptr [esi + 0x9c1b78], al */ { const u32 m_ = (u32)(esi + 0x9c1b78u); M8(m_) = (u8)((eax & 0xffu)); }
L_009c1dee:;
  /* 009c1dee mov esp, ebx */ { esp = (u32)(ebx); }
  /* 009c1df0 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c1df1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1df2(CPU *c) {
  NATIVE_HOOK(0x9c1df2u) REGS; LOADALL;
L_009c1df2:;
  /* 009c1df2 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1df3 mov esi, dword ptr [ebp - 0x4c] */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); esi = (u32)(M32(m_)); }
  /* 009c1df6 cmp esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1df9 jae 0x9c1e0b */ if (!CF_) goto L_009c1e0b;
  /* 009c1dfb mov ecx, 0xfffffffe */ { ecx = (u32)(0xfffffffeu); }
  /* 009c1e00 call 0x9c1d4d */ esp -= 4; M32(esp) = 0x9c1e05u; SAVEALL; F_009c1d4d(c); ABI_CHECK(0x9c1d4du, 0x9c1e00u); RETCHK(0x9c1e05u, 0x9c1e00u); LOADALL;
  /* 009c1e05 mov byte ptr [esi + 0x9c1b78], al */ { const u32 m_ = (u32)(esi + 0x9c1b78u); M8(m_) = (u8)((eax & 0xffu)); }
L_009c1e0b:;
  /* 009c1e0b popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c1e0c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1e17(CPU *c) {
  NATIVE_HOOK(0x9c1e17u) REGS; LOADALL;
L_009c1e17:;
  /* 009c1e17 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1e18 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 009c1e1a sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c1e1d cmp esi, dword ptr [0x9c1b74] */ { const u32 m_ = (u32)(0x9c1b74u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1e23 je 0x9c1e67 */ if (ZF_) goto L_009c1e67;
  /* 009c1e25 mov dword ptr [0x9c1b74], esi */ { const u32 m_ = (u32)(0x9c1b74u); M32(m_) = (u32)(esi); }
  /* 009c1e2b mov dword ptr [0x9c1b7c], 0 */ { const u32 m_ = (u32)(0x9c1b7cu); M32(m_) = (u32)(0x0u); }
  /* 009c1e35 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 009c1e37 mov edi, dword ptr [edi - 0x420] */ { const u32 m_ = (u32)(edi + 0xfffffbe0u); edi = (u32)(M32(m_)); }
  /* 009c1e3d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_009c1e3f:;
  /* 009c1e3f push dword ptr [ebx*4 + 0x9c1ba8] */ { const u32 m_ = (u32)(ebx * 4u + 0x9c1ba8u); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c1e46 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009c1e48 call 0x9c1d20 */ esp -= 4; M32(esp) = 0x9c1e4du; SAVEALL; F_009c1d20(c); ABI_CHECK(0x9c1d20u, 0x9c1e48u); RETCHK(0x9c1e4du, 0x9c1e48u); LOADALL;
  /* 009c1e4d mov dword ptr [ebx*4 + 0x9c1b64], eax */ { const u32 m_ = (u32)(ebx * 4u + 0x9c1b64u); M32(m_) = (u32)(eax); }
  /* 009c1e54 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1e56 je 0x9c1e61 */ if (ZF_) goto L_009c1e61;
  /* 009c1e58 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 009c1e5a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 009c1e5c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 009c1e5e call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1e61u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1e61u, 0x9c1e5eu); LOADALL; }
L_009c1e61:;
  /* 009c1e61 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1e62 cmp ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1e65 jb 0x9c1e3f */ if (CF_) goto L_009c1e3f;
L_009c1e67:;
  /* 009c1e67 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_009c1e69:;
  /* 009c1e69 mov edi, dword ptr [ebx*4 + 0x9c1b64] */ { const u32 m_ = (u32)(ebx * 4u + 0x9c1b64u); edi = (u32)(M32(m_)); }
  /* 009c1e70 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1e72 je 0x9c1ee1 */ if (ZF_) goto L_009c1ee1;
  /* 009c1e74 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 009c1e76 cmp dword ptr [esi + 8], 4 */ { const u32 m_ = (u32)(esi + 0x8u); u32 a_ = M32(m_), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1e7a jne 0x9c1ecb */ if (!ZF_) goto L_009c1ecb;
  /* 009c1e7c mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 009c1e7e mov ecx, dword ptr [ecx + ebx*4] */ { const u32 m_ = (u32)(ecx + ebx * 4u); ecx = (u32)(M32(m_)); }
  /* 009c1e81 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1e83 je 0x9c1ecb */ if (ZF_) goto L_009c1ecb;
  /* 009c1e85 cmp byte ptr [ecx + 0x3e], 0 */ { const u32 m_ = (u32)(ecx + 0x3eu); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c1e89 je 0x9c1ecb */ if (ZF_) goto L_009c1ecb;
  /* 009c1e8b cmp byte ptr [ebx + 0x9c1b78], 0 */ { const u32 m_ = (u32)(ebx + 0x9c1b78u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c1e92 je 0x9c1ecb */ if (ZF_) goto L_009c1ecb;
  /* 009c1e94 fld dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); FPUSH((double)MF32(m_)); }
  /* 009c1e97 fadd dword ptr [0x9c1b80] */ { const u32 m_ = (u32)(0x9c1b80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009c1e9d fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c1ea0 fld dword ptr [ecx + 0x48] */ { const u32 m_ = (u32)(ecx + 0x48u); FPUSH((double)MF32(m_)); }
  /* 009c1ea3 fadd dword ptr [0x9c1b84] */ { const u32 m_ = (u32)(0x9c1b84u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 009c1ea9 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c1ead mov eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); eax = (u32)(M32(m_)); }
  /* 009c1eb0 cmp eax, dword ptr [edi + 0x44] */ { const u32 m_ = (u32)(edi + 0x44u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1eb3 jne 0x9c1ebe */ if (!ZF_) goto L_009c1ebe;
  /* 009c1eb5 mov eax, dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M32(m_)); }
  /* 009c1eb9 cmp eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1ebc je 0x9c1ec6 */ if (ZF_) goto L_009c1ec6;
L_009c1ebe:;
  /* 009c1ebe push esp */ { u32 v_ = esp; esp -= 4; M32(esp) = v_; }
  /* 009c1ebf mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 009c1ec1 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009c1ec3 call dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1ec6u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1ec6u, 0x9c1ec3u); LOADALL; }
L_009c1ec6:;
  /* 009c1ec6 mov edx, 1 */ { edx = (u32)(0x1u); }
L_009c1ecb:;
  /* 009c1ecb cmp dl, byte ptr [ebx + 0x9c1b7c] */ { const u32 m_ = (u32)(ebx + 0x9c1b7cu); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c1ed1 je 0x9c1ee1 */ if (ZF_) goto L_009c1ee1;
  /* 009c1ed3 mov byte ptr [ebx + 0x9c1b7c], dl */ { const u32 m_ = (u32)(ebx + 0x9c1b7cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 009c1ed9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 009c1eda mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 009c1edc mov ecx, edi */ { ecx = (u32)(edi); }
  /* 009c1ede call dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x9c1ee1u; SAVEALL; call_ind(c, t_); RETCHK(0x9c1ee1u, 0x9c1edeu); LOADALL; }
L_009c1ee1:;
  /* 009c1ee1 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1ee2 cmp ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1ee5 jb 0x9c1e69 */ if (CF_) goto L_009c1e69;
  /* 009c1ee7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 009c1ee9 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c1eea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_009c1f9c(CPU *c) {
  NATIVE_HOOK(0x9c1f9cu) REGS; LOADALL;
L_009c1f9c:;
  /* 009c1f9c mov edx, dword ptr [0x9c1f00] */ { const u32 m_ = (u32)(0x9c1f00u); edx = (u32)(M32(m_)); }
  /* 009c1fa2 mov esi, dword ptr [0x9c1f04] */ { const u32 m_ = (u32)(0x9c1f04u); esi = (u32)(M32(m_)); }
  /* 009c1fa8 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1faa je 0x9c1fb0 */ if (ZF_) goto L_009c1fb0;
  /* 009c1fac test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1fae jne 0x9c1fbe */ if (!ZF_) goto L_009c1fbe;
L_009c1fb0:;
  /* 009c1fb0 mov edx, dword ptr [eax*8 + 0x63f5c0] */ { const u32 m_ = (u32)(eax * 8u + 0x63f5c0u); edx = (u32)(M32(m_)); }
  /* 009c1fb7 mov esi, dword ptr [eax*8 + 0x63f5c4] */ { const u32 m_ = (u32)(eax * 8u + 0x63f5c4u); esi = (u32)(M32(m_)); }
L_009c1fbe:;
  /* 009c1fbe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
