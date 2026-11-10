#include "funcs.h"

void F_0054e270(CPU *c) {
  NATIVE_HOOK(0x54e270u) REGS; LOADALL;
L_0054e270:;
  /* 0054e270 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e271 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e273 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e279 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e27e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e281 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e282 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e288 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e28d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e28e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e293u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e28eu); RETCHK(0x54e293u, 0x54e28eu); LOADALL;
  /* 0054e293 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e296 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e29b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e2a1 call 0x54da20 */ esp -= 4; M32(esp) = 0x54e2a6u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e2a1u); RETCHK(0x54e2a6u, 0x54e2a1u); LOADALL;
  /* 0054e2a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e2a7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054e2a9 push 0x6554e8 */ { u32 v_ = 0x6554e8u; esp -= 4; M32(esp) = v_; }
  /* 0054e2ae push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e2b3 call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e2b9u; SAVEALL; call_ind(c, t_); RETCHK(0x54e2b9u, 0x54e2b3u); LOADALL; }
  /* 0054e2b9 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e2bc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e2bd call 0x61af31 */ esp -= 4; M32(esp) = 0x54e2c2u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e2bdu); RETCHK(0x54e2c2u, 0x54e2bdu); LOADALL;
  /* 0054e2c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e2c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e2c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e2d0(CPU *c) {
  NATIVE_HOOK(0x54e2d0u) REGS; LOADALL;
L_0054e2d0:;
  /* 0054e2d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e2d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e2d3 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e2d9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e2de mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e2e1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e2e2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e2e8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e2ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e2ee call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e2f3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e2eeu); RETCHK(0x54e2f3u, 0x54e2eeu); LOADALL;
  /* 0054e2f3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e2f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e2f7 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0054e2fc lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054e302 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054e307 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054e308 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54e30du; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54e308u); RETCHK(0x54e30du, 0x54e308u); LOADALL;
  /* 0054e30d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e310 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e315 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e31b call 0x54da20 */ esp -= 4; M32(esp) = 0x54e320u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e31bu); RETCHK(0x54e320u, 0x54e31bu); LOADALL;
  /* 0054e320 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e321 lea eax, [ebp - 0x308] */ eax = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054e327 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e328 push 0x6554e8 */ { u32 v_ = 0x6554e8u; esp -= 4; M32(esp) = v_; }
  /* 0054e32d push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e332 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e338u; SAVEALL; call_ind(c, t_); RETCHK(0x54e338u, 0x54e332u); LOADALL; }
  /* 0054e338 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e33b neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e33d sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054e33f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e341 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e342 call 0x61af31 */ esp -= 4; M32(esp) = 0x54e347u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e342u); RETCHK(0x54e347u, 0x54e342u); LOADALL;
  /* 0054e347 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e349 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e34a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e350(CPU *c) {
  NATIVE_HOOK(0x54e350u) REGS; LOADALL;
L_0054e350:;
  /* 0054e350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e353 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e359 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e35e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e361 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e362 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e368 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e36d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e36e call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e373u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e36eu); RETCHK(0x54e373u, 0x54e36eu); LOADALL;
  /* 0054e373 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e376 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e37b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e381 call 0x54da20 */ esp -= 4; M32(esp) = 0x54e386u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e381u); RETCHK(0x54e386u, 0x54e381u); LOADALL;
  /* 0054e386 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e389 mov edx, dword ptr [ecx*4 + 0x688918] */ { const u32 m_ = (u32)(ecx * 4u + 0x688918u); edx = (u32)(M32(m_)); }
  /* 0054e390 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e391 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054e393 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054e394 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e399 call dword ptr [0x62e100] */ { const u32 m_ = (u32)(0x62e100u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e39fu; SAVEALL; call_ind(c, t_); RETCHK(0x54e39fu, 0x54e399u); LOADALL; }
  /* 0054e39f mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e3a2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e3a3 call 0x61af31 */ esp -= 4; M32(esp) = 0x54e3a8u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e3a3u); RETCHK(0x54e3a8u, 0x54e3a3u); LOADALL;
  /* 0054e3a8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e3aa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e3ab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e3b0(CPU *c) {
  NATIVE_HOOK(0x54e3b0u) REGS; LOADALL;
L_0054e3b0:;
  /* 0054e3b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e3b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e3b3 sub esp, 0x308 */ { u32 a_ = esp, b_ = 0x308u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e3b9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054e3be mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e3c1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e3c2 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e3c8 push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 0054e3cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e3ce call 0x5feb7e */ esp -= 4; M32(esp) = 0x54e3d3u; SAVEALL; F_005feb7e(c); ABI_CHECK(0x5feb7eu, 0x54e3ceu); RETCHK(0x54e3d3u, 0x54e3ceu); LOADALL;
  /* 0054e3d3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054e3d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e3d7 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0054e3dc lea edx, [ebp - 0x308] */ edx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054e3e2 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0054e3e7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054e3e8 call 0x5fe928 */ esp -= 4; M32(esp) = 0x54e3edu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x54e3e8u); RETCHK(0x54e3edu, 0x54e3e8u); LOADALL;
  /* 0054e3ed add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e3f0 mov edi, 0x655594 */ { edi = (u32)(0x655594u); }
  /* 0054e3f5 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054e3fb call 0x54da20 */ esp -= 4; M32(esp) = 0x54e400u; SAVEALL; F_0054da20(c); ABI_CHECK(0x54da20u, 0x54e3fbu); RETCHK(0x54e400u, 0x54e3fbu); LOADALL;
  /* 0054e400 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e403 mov edx, dword ptr [ecx*4 + 0x688918] */ { const u32 m_ = (u32)(ecx * 4u + 0x688918u); edx = (u32)(M32(m_)); }
  /* 0054e40a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e40b lea eax, [ebp - 0x308] */ eax = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 0054e411 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e412 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054e413 push 0x65557c */ { u32 v_ = 0x65557cu; esp -= 4; M32(esp) = v_; }
  /* 0054e418 call dword ptr [0x62e104] */ { const u32 m_ = (u32)(0x62e104u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e41eu; SAVEALL; call_ind(c, t_); RETCHK(0x54e41eu, 0x54e418u); LOADALL; }
  /* 0054e41e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e421 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e423 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0054e425 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0054e427 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e428 call 0x61af31 */ esp -= 4; M32(esp) = 0x54e42du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54e428u); RETCHK(0x54e42du, 0x54e428u); LOADALL;
  /* 0054e42d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e42f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e430 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e440(CPU *c) {
  NATIVE_HOOK(0x54e440u) REGS; LOADALL;
L_0054e440:;
  /* 0054e440 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e441 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e443 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054e445 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0054e44a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054e450 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e451 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054e458 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e459 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e45a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0054e45c call 0x5fe934 */ esp -= 4; M32(esp) = 0x54e461u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54e45cu); RETCHK(0x54e461u, 0x54e45cu); LOADALL;
  /* 0054e461 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054e463 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e466 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0054e469 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e46b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054e472 je 0x54e48f */ if (ZF_) goto L_0054e48f;
  /* 0054e474 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054e477 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e478 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0054e47f mov dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 0054e486 call 0x6025a0 */ esp -= 4; M32(esp) = 0x54e48bu; SAVEALL; F_006025a0(c); ABI_CHECK(0x6025a0u, 0x54e486u); RETCHK(0x54e48bu, 0x54e486u); LOADALL;
  /* 0054e48b mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054e48d jmp 0x54e491 */ goto L_0054e491;
L_0054e48f:;
  /* 0054e48f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0054e491:;
  /* 0054e491 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0054e498 mov dword ptr [ebx], esi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(esi); }
  /* 0054e49a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e49c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e49d jne 0x54e4a9 */ if (!ZF_) goto L_0054e4a9;
  /* 0054e49f push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 0054e4a4 call 0x602590 */ esp -= 4; M32(esp) = 0x54e4a9u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x54e4a4u); RETCHK(0x54e4a9u, 0x54e4a4u); LOADALL;
L_0054e4a9:;
  /* 0054e4a9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054e4ac mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054e4ae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054e4b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e4b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e4b8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054e4c0(CPU *c) {
  NATIVE_HOOK(0x54e4c0u) REGS; LOADALL;
L_0054e4c0:;
  /* 0054e4c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e4c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e4c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054e4c5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0054e4ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054e4d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e4d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054e4d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e4d9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e4da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e4db push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0054e4dd mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0054e4df call 0x5fe934 */ esp -= 4; M32(esp) = 0x54e4e4u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54e4dfu); RETCHK(0x54e4e4u, 0x54e4dfu); LOADALL;
  /* 0054e4e4 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054e4e6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e4e9 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0054e4ec test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e4ee mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054e4f5 je 0x54e522 */ if (ZF_) goto L_0054e522;
  /* 0054e4f7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e4f8 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0054e4ff mov dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 0054e506 call dword ptr [0x62e470] */ { const u32 m_ = (u32)(0x62e470u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e50cu; SAVEALL; call_ind(c, t_); RETCHK(0x54e50cu, 0x54e506u); LOADALL; }
  /* 0054e50c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e50e mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054e510 jne 0x54e524 */ if (!ZF_) goto L_0054e524;
  /* 0054e512 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e514 je 0x54e524 */ if (ZF_) goto L_0054e524;
  /* 0054e516 push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 0054e51b call 0x602590 */ esp -= 4; M32(esp) = 0x54e520u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x54e51bu); RETCHK(0x54e520u, 0x54e51bu); LOADALL;
  /* 0054e520 jmp 0x54e524 */ goto L_0054e524;
L_0054e522:;
  /* 0054e522 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0054e524:;
  /* 0054e524 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e526 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054e529 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0054e530 mov dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(esi); }
  /* 0054e532 jne 0x54e53e */ if (!ZF_) goto L_0054e53e;
  /* 0054e534 push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 0054e539 call 0x602590 */ esp -= 4; M32(esp) = 0x54e53eu; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x54e539u); RETCHK(0x54e53eu, 0x54e539u); LOADALL;
L_0054e53e:;
  /* 0054e53e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054e541 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054e543 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e544 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e545 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054e54c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e54e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e54f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054e580(CPU *c) {
  NATIVE_HOOK(0x54e580u) REGS; LOADALL;
L_0054e580:;
  /* 0054e580 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e581 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e583 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054e585 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0054e58a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054e590 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e591 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054e598 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e599 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e59a mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0054e59c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e59e je 0x54e5ab */ if (ZF_) goto L_0054e5ab;
  /* 0054e5a0 call 0x54e820 */ esp -= 4; M32(esp) = 0x54e5a5u; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54e5a0u); RETCHK(0x54e5a5u, 0x54e5a0u); LOADALL;
  /* 0054e5a5 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_0054e5ab:;
  /* 0054e5ab push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0054e5ad call 0x5fe934 */ esp -= 4; M32(esp) = 0x54e5b2u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54e5adu); RETCHK(0x54e5b2u, 0x54e5adu); LOADALL;
  /* 0054e5b2 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054e5b4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e5b7 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0054e5ba xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054e5bc cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e5be mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e5c1 je 0x54e5ea */ if (ZF_) goto L_0054e5ea;
  /* 0054e5c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054e5c4 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0054e5c7 mov dword ptr [esi + 8], 1 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 0054e5ce call dword ptr [0x62e470] */ { const u32 m_ = (u32)(0x62e470u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e5d4u; SAVEALL; call_ind(c, t_); RETCHK(0x54e5d4u, 0x54e5ceu); LOADALL; }
  /* 0054e5d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e5d6 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0054e5d8 jne 0x54e5ec */ if (!ZF_) goto L_0054e5ec;
  /* 0054e5da test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e5dc je 0x54e5ec */ if (ZF_) goto L_0054e5ec;
  /* 0054e5de push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 0054e5e3 call 0x602590 */ esp -= 4; M32(esp) = 0x54e5e8u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x54e5e3u); RETCHK(0x54e5e8u, 0x54e5e3u); LOADALL;
  /* 0054e5e8 jmp 0x54e5ec */ goto L_0054e5ec;
L_0054e5ea:;
  /* 0054e5ea xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_0054e5ec:;
  /* 0054e5ec mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0054e5f3 mov dword ptr [edi], esi */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(esi); }
  /* 0054e5f5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e5f7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e5f8 jne 0x54e604 */ if (!ZF_) goto L_0054e604;
  /* 0054e5fa push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 0054e5ff call 0x602590 */ esp -= 4; M32(esp) = 0x54e604u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x54e5ffu); RETCHK(0x54e604u, 0x54e5ffu); LOADALL;
L_0054e604:;
  /* 0054e604 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054e607 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054e609 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054e610 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e612 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e613 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e620(CPU *c) {
  NATIVE_HOOK(0x54e620u) REGS; LOADALL;
L_0054e620:;
  /* 0054e620 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e621 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e623 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054e625 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0054e62a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054e630 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e631 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054e638 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e639 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054e63a push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 0054e63c call 0x5fe934 */ esp -= 4; M32(esp) = 0x54e641u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x54e63cu); RETCHK(0x54e641u, 0x54e63cu); LOADALL;
  /* 0054e641 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e644 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0054e647 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e649 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0054e650 je 0x54e662 */ if (ZF_) goto L_0054e662;
  /* 0054e652 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e655 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e656 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e657 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054e659 call 0x54e740 */ esp -= 4; M32(esp) = 0x54e65eu; SAVEALL; F_0054e740(c); ABI_CHECK(0x54e740u, 0x54e659u); RETCHK(0x54e65eu, 0x54e659u); LOADALL;
  /* 0054e65e mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054e660 jmp 0x54e664 */ goto L_0054e664;
L_0054e662:;
  /* 0054e662 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_0054e664:;
  /* 0054e664 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e666 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0054e66d jne 0x54e68c */ if (!ZF_) goto L_0054e68c;
  /* 0054e66f push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 0054e674 call 0x602590 */ esp -= 4; M32(esp) = 0x54e679u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x54e674u); RETCHK(0x54e679u, 0x54e674u); LOADALL;
  /* 0054e679 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054e67b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054e67c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054e67f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054e686 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e688 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e689 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0054e68c:;
  /* 0054e68c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e68d mov esi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); esi = (u32)(M32(m_)); }
  /* 0054e68f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e691 je 0x54e69e */ if (ZF_) goto L_0054e69e;
  /* 0054e693 call 0x54e820 */ esp -= 4; M32(esp) = 0x54e698u; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54e693u); RETCHK(0x54e698u, 0x54e693u); LOADALL;
  /* 0054e698 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_0054e69e:;
  /* 0054e69e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054e6a1 mov dword ptr [edi], ebx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ebx); }
  /* 0054e6a3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e6a4 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054e6a6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054e6a7 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054e6ae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e6b0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e6b1 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054e6c0(CPU *c) {
  NATIVE_HOOK(0x54e6c0u) REGS; LOADALL;
L_0054e6c0:;
  /* 0054e6c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e6c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e6c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054e6c5 push 0x61b4a8 */ { u32 v_ = 0x61b4a8u; esp -= 4; M32(esp) = v_; }
  /* 0054e6ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054e6d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e6d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054e6d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e6d9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054e6dc mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054e6de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e6df xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054e6e1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e6e3 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 0054e6e6 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054e6e9 je 0x54e6f5 */ if (ZF_) goto L_0054e6f5;
  /* 0054e6eb add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054e6ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e6ef call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e6f5u; SAVEALL; call_ind(c, t_); RETCHK(0x54e6f5u, 0x54e6efu); LOADALL; }
L_0054e6f5:;
  /* 0054e6f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e6f6 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054e6f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e6fa lea edi, [ebp + 8] */ edi = (u32)((u32)(ebp + 0x8u));
  /* 0054e6fd mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0054e700 call 0x54e620 */ esp -= 4; M32(esp) = 0x54e705u; SAVEALL; F_0054e620(c); ABI_CHECK(0x54e620u, 0x54e700u); RETCHK(0x54e705u, 0x54e700u); LOADALL;
  /* 0054e705 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0054e708 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e70a mov dword ptr [ebx], esi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(esi); }
  /* 0054e70c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e70d je 0x54e71e */ if (ZF_) goto L_0054e71e;
  /* 0054e70f lea edx, [esi + 8] */ edx = (u32)((u32)(esi + 0x8u));
  /* 0054e712 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054e713 call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e719u; SAVEALL; call_ind(c, t_); RETCHK(0x54e719u, 0x54e713u); LOADALL; }
  /* 0054e719 call 0x54e820 */ esp -= 4; M32(esp) = 0x54e71eu; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54e719u); RETCHK(0x54e71eu, 0x54e719u); LOADALL;
L_0054e71e:;
  /* 0054e71e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054e721 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054e723 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e724 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054e72b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e72d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e72e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054e740(CPU *c) {
  NATIVE_HOOK(0x54e740u) REGS; LOADALL;
L_0054e740:;
  /* 0054e740 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e741 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e743 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054e746 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054e749 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e74a mov esi, dword ptr [0x62e464] */ { const u32 m_ = (u32)(0x62e464u); esi = (u32)(M32(m_)); }
  /* 0054e750 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e751 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054e753 mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 0054e756 mov dword ptr [ebx + 8], 1 */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(0x1u); }
  /* 0054e75d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054e75f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e761 je 0x54e771 */ if (ZF_) goto L_0054e771;
  /* 0054e763 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054e765 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e767 je 0x54e771 */ if (ZF_) goto L_0054e771;
  /* 0054e769 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e76a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54e76cu; SAVEALL; call_ind(c, t_); RETCHK(0x54e76cu, 0x54e76au); LOADALL; }
  /* 0054e76c mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054e76f jmp 0x54e774 */ goto L_0054e774;
L_0054e771:;
  /* 0054e771 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
L_0054e774:;
  /* 0054e774 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054e777 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0054e779 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e77b je 0x54e78b */ if (ZF_) goto L_0054e78b;
  /* 0054e77d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054e77f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e781 je 0x54e78b */ if (ZF_) goto L_0054e78b;
  /* 0054e783 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e784 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54e786u; SAVEALL; call_ind(c, t_); RETCHK(0x54e786u, 0x54e784u); LOADALL; }
  /* 0054e786 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0054e789 jmp 0x54e78e */ goto L_0054e78e;
L_0054e78b:;
  /* 0054e78b mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
L_0054e78e:;
  /* 0054e78e mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054e791 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0054e794 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054e796 shl edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0054e798 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054e799 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e79a call dword ptr [0x62e468] */ { const u32 m_ = (u32)(0x62e468u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e7a0u; SAVEALL; call_ind(c, t_); RETCHK(0x54e7a0u, 0x54e79au); LOADALL; }
  /* 0054e7a0 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e7a2 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 0054e7a4 jne 0x54e7ba */ if (!ZF_) goto L_0054e7ba;
  /* 0054e7a6 push 0x8007000e */ { u32 v_ = 0x8007000eu; esp -= 4; M32(esp) = v_; }
  /* 0054e7ab call 0x602590 */ esp -= 4; M32(esp) = 0x54e7b0u; SAVEALL; F_00602590(c); ABI_CHECK(0x602590u, 0x54e7abu); RETCHK(0x54e7b0u, 0x54e7abu); LOADALL;
  /* 0054e7b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e7b1 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054e7b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e7b4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e7b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e7b7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0054e7ba:;
  /* 0054e7ba mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054e7bd mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0054e7bf cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e7c1 je 0x54e7e2 */ if (ZF_) goto L_0054e7e2;
  /* 0054e7c3 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0054e7c5 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e7c7 je 0x54e7e2 */ if (ZF_) goto L_0054e7e2;
  /* 0054e7c9 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054e7cc lea ecx, [ecx + ecx + 2] */ ecx = (u32)((u32)(ecx + ecx + 0x2u));
  /* 0054e7d0 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0054e7d2 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0054e7d5 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054e7d7 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0054e7d9 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0054e7db and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054e7de rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0054e7e0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_0054e7e2:;
  /* 0054e7e2 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054e7e5 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0054e7e7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e7e9 je 0x54e80e */ if (ZF_) goto L_0054e80e;
  /* 0054e7eb mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 0054e7ed cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e7ef je 0x54e80e */ if (ZF_) goto L_0054e80e;
  /* 0054e7f1 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0054e7f3 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054e7f6 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054e7f9 lea ecx, [ecx + ecx + 2] */ ecx = (u32)((u32)(ecx + ecx + 0x2u));
  /* 0054e7fd lea edi, [edx + eax*2] */ edi = (u32)((u32)(edx + eax * 2u));
  /* 0054e800 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0054e802 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0054e805 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0054e807 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0054e809 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054e80c rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
L_0054e80e:;
  /* 0054e80e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e80f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054e811 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e812 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054e814 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e815 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0054e820(CPU *c) {
  NATIVE_HOOK(0x54e820u) REGS; LOADALL;
L_0054e820:;
  /* 0054e820 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e821 lea edi, [esi + 8] */ edi = (u32)((u32)(esi + 0x8u));
  /* 0054e824 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e825 call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e82bu; SAVEALL; call_ind(c, t_); RETCHK(0x54e82bu, 0x54e825u); LOADALL; }
  /* 0054e82b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e82d jne 0x54e85d */ if (!ZF_) goto L_0054e85d;
  /* 0054e82f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e831 je 0x54e859 */ if (ZF_) goto L_0054e859;
  /* 0054e833 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054e835 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e837 je 0x54e840 */ if (ZF_) goto L_0054e840;
  /* 0054e839 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e83a call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54e840u; SAVEALL; call_ind(c, t_); RETCHK(0x54e840u, 0x54e83au); LOADALL; }
L_0054e840:;
  /* 0054e840 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054e843 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e845 je 0x54e850 */ if (ZF_) goto L_0054e850;
  /* 0054e847 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e848 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54e84du; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54e848u); RETCHK(0x54e84du, 0x54e848u); LOADALL;
  /* 0054e84d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054e850:;
  /* 0054e850 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e851 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54e856u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54e851u); RETCHK(0x54e856u, 0x54e851u); LOADALL;
  /* 0054e856 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054e859:;
  /* 0054e859 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054e85b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e85c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054e85d:;
  /* 0054e85d mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0054e85f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e860 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e870(CPU *c) {
  NATIVE_HOOK(0x54e870u) REGS; LOADALL;
L_0054e870:;
  /* 0054e870 mov dword ptr [ecx], 0x6555a4 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6555a4u); }
  /* 0054e876 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e880(CPU *c) {
  NATIVE_HOOK(0x54e880u) REGS; LOADALL;
L_0054e880:;
  /* 0054e880 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054e881 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054e884 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e885 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0054e888 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e889 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054e88b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054e88d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054e88f jbe 0x54e89e */ if ((CF_|ZF_)) goto L_0054e89e;
L_0054e891:;
  /* 0054e891 cmp byte ptr [eax + esi], dl */ { const u32 m_ = (u32)(eax + esi); u32 a_ = M8(m_), b_ = (edx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054e894 je 0x54e8a4 */ if (ZF_) goto L_0054e8a4;
  /* 0054e896 mov ebx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054e899 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054e89a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e89c jb 0x54e891 */ if (CF_) goto L_0054e891;
L_0054e89e:;
  /* 0054e89e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e89f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e8a0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0054e8a2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054e8a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0054e8a4:;
  /* 0054e8a4 mov byte ptr [eax + esi], 0 */ { const u32 m_ = (u32)(eax + esi); M8(m_) = (u8)(0x0u); }
  /* 0054e8a8 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0054e8ab mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054e8ae mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054e8b1 mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0054e8b4 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0054e8b7 add edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0054e8b9 or edx, 0xffffffff */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0054e8bc sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054e8be mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054e8c1 mov dword ptr [ecx + 4], edi */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edi); }
  /* 0054e8c4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054e8c5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054e8c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e8c8 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054e8cb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054e8cd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054e8ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e8d0(CPU *c) {
  NATIVE_HOOK(0x54e8d0u) REGS; LOADALL;
L_0054e8d0:;
  /* 0054e8d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054e8d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054e8d3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054e8d7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e8d8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0054e8da mov dword ptr [esi], 0x6555a4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6555a4u); }
  /* 0054e8e0 je 0x54e8eb */ if (ZF_) goto L_0054e8eb;
  /* 0054e8e2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e8e3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54e8e8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54e8e3u); RETCHK(0x54e8e8u, 0x54e8e3u); LOADALL;
  /* 0054e8e8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054e8eb:;
  /* 0054e8eb mov eax, esi */ { eax = (u32)(esi); }
  /* 0054e8ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054e8ee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054e8ef ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054e900(CPU *c) {
  NATIVE_HOOK(0x54e900u) REGS; LOADALL;
L_0054e900:;
  /* 0054e900 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0054e902 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0054e905 mov edx, 0xf */ { edx = (u32)(0xfu); }
  /* 0054e90a mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0054e90d mov byte ptr [eax + 8], cl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e910 mov dword ptr [eax + 0x38], edx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(edx); }
  /* 0054e913 mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0054e916 mov byte ptr [eax + 0x24], cl */ { const u32 m_ = (u32)(eax + 0x24u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e919 mov dword ptr [eax + 0x54], edx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(edx); }
  /* 0054e91c mov dword ptr [eax + 0x50], ecx */ { const u32 m_ = (u32)(eax + 0x50u); M32(m_) = (u32)(ecx); }
  /* 0054e91f mov byte ptr [eax + 0x40], cl */ { const u32 m_ = (u32)(eax + 0x40u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e922 mov dword ptr [eax + 0x70], edx */ { const u32 m_ = (u32)(eax + 0x70u); M32(m_) = (u32)(edx); }
  /* 0054e925 mov dword ptr [eax + 0x6c], ecx */ { const u32 m_ = (u32)(eax + 0x6cu); M32(m_) = (u32)(ecx); }
  /* 0054e928 mov byte ptr [eax + 0x5c], cl */ { const u32 m_ = (u32)(eax + 0x5cu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e92b mov dword ptr [eax + 0x8c], edx */ { const u32 m_ = (u32)(eax + 0x8cu); M32(m_) = (u32)(edx); }
  /* 0054e931 mov dword ptr [eax + 0x88], ecx */ { const u32 m_ = (u32)(eax + 0x88u); M32(m_) = (u32)(ecx); }
  /* 0054e937 mov byte ptr [eax + 0x78], cl */ { const u32 m_ = (u32)(eax + 0x78u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e93a mov dword ptr [eax + 0xa8], edx */ { const u32 m_ = (u32)(eax + 0xa8u); M32(m_) = (u32)(edx); }
  /* 0054e940 mov dword ptr [eax + 0xa4], ecx */ { const u32 m_ = (u32)(eax + 0xa4u); M32(m_) = (u32)(ecx); }
  /* 0054e946 mov byte ptr [eax + 0x94], cl */ { const u32 m_ = (u32)(eax + 0x94u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e94c mov dword ptr [eax + 0xc4], edx */ { const u32 m_ = (u32)(eax + 0xc4u); M32(m_) = (u32)(edx); }
  /* 0054e952 mov dword ptr [eax + 0xc0], ecx */ { const u32 m_ = (u32)(eax + 0xc0u); M32(m_) = (u32)(ecx); }
  /* 0054e958 mov byte ptr [eax + 0xb0], cl */ { const u32 m_ = (u32)(eax + 0xb0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e95e mov dword ptr [eax + 0xe0], edx */ { const u32 m_ = (u32)(eax + 0xe0u); M32(m_) = (u32)(edx); }
  /* 0054e964 mov dword ptr [eax + 0xdc], ecx */ { const u32 m_ = (u32)(eax + 0xdcu); M32(m_) = (u32)(ecx); }
  /* 0054e96a mov byte ptr [eax + 0xcc], cl */ { const u32 m_ = (u32)(eax + 0xccu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e970 mov dword ptr [eax + 0x100], edx */ { const u32 m_ = (u32)(eax + 0x100u); M32(m_) = (u32)(edx); }
  /* 0054e976 mov dword ptr [eax + 0xfc], ecx */ { const u32 m_ = (u32)(eax + 0xfcu); M32(m_) = (u32)(ecx); }
  /* 0054e97c mov byte ptr [eax + 0xec], cl */ { const u32 m_ = (u32)(eax + 0xecu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e982 mov dword ptr [eax + 0x108], ecx */ { const u32 m_ = (u32)(eax + 0x108u); M32(m_) = (u32)(ecx); }
  /* 0054e988 mov dword ptr [0x7a6e14], eax */ { const u32 m_ = (u32)(0x7a6e14u); M32(m_) = (u32)(eax); }
  /* 0054e98d mov byte ptr [eax + 0xe4], cl */ { const u32 m_ = (u32)(eax + 0xe4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e993 mov byte ptr [eax + 0xe5], cl */ { const u32 m_ = (u32)(eax + 0xe5u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054e999 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054e9a0(CPU *c) {
  NATIVE_HOOK(0x54e9a0u) REGS; LOADALL;
L_0054e9a0:;
  /* 0054e9a0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054e9a1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054e9a2 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054e9a4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054e9a5 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054e9a7 mov dword ptr [0x7a6e14], ebx */ { const u32 m_ = (u32)(0x7a6e14u); M32(m_) = (u32)(ebx); }
  /* 0054e9ad call 0x54f220 */ esp -= 4; M32(esp) = 0x54e9b2u; SAVEALL; F_0054f220(c); ABI_CHECK(0x54f220u, 0x54e9adu); RETCHK(0x54e9b2u, 0x54e9adu); LOADALL;
  /* 0054e9b2 cmp dword ptr [esi + 0x100], 0x10 */ { const u32 m_ = (u32)(esi + 0x100u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e9b9 jb 0x54e9ca */ if (CF_) goto L_0054e9ca;
  /* 0054e9bb mov eax, dword ptr [esi + 0xec] */ { const u32 m_ = (u32)(esi + 0xecu); eax = (u32)(M32(m_)); }
  /* 0054e9c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054e9c2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54e9c7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54e9c2u); RETCHK(0x54e9c7u, 0x54e9c2u); LOADALL;
  /* 0054e9c7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054e9ca:;
  /* 0054e9ca mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0054e9cf mov dword ptr [esi + 0x100], edi */ { const u32 m_ = (u32)(esi + 0x100u); M32(m_) = (u32)(edi); }
  /* 0054e9d5 mov dword ptr [esi + 0xfc], ebx */ { const u32 m_ = (u32)(esi + 0xfcu); M32(m_) = (u32)(ebx); }
  /* 0054e9db mov byte ptr [esi + 0xec], bl */ { const u32 m_ = (u32)(esi + 0xecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054e9e1 cmp dword ptr [esi + 0xe0], 0x10 */ { const u32 m_ = (u32)(esi + 0xe0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054e9e8 jb 0x54e9f9 */ if (CF_) goto L_0054e9f9;
  /* 0054e9ea mov ecx, dword ptr [esi + 0xcc] */ { const u32 m_ = (u32)(esi + 0xccu); ecx = (u32)(M32(m_)); }
  /* 0054e9f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054e9f1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54e9f6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54e9f1u); RETCHK(0x54e9f6u, 0x54e9f1u); LOADALL;
  /* 0054e9f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054e9f9:;
  /* 0054e9f9 mov dword ptr [esi + 0xe0], edi */ { const u32 m_ = (u32)(esi + 0xe0u); M32(m_) = (u32)(edi); }
  /* 0054e9ff mov dword ptr [esi + 0xdc], ebx */ { const u32 m_ = (u32)(esi + 0xdcu); M32(m_) = (u32)(ebx); }
  /* 0054ea05 mov byte ptr [esi + 0xcc], bl */ { const u32 m_ = (u32)(esi + 0xccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ea0b cmp dword ptr [esi + 0xc4], 0x10 */ { const u32 m_ = (u32)(esi + 0xc4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ea12 jb 0x54ea23 */ if (CF_) goto L_0054ea23;
  /* 0054ea14 mov edx, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); edx = (u32)(M32(m_)); }
  /* 0054ea1a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ea1b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ea20u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ea1bu); RETCHK(0x54ea20u, 0x54ea1bu); LOADALL;
  /* 0054ea20 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ea23:;
  /* 0054ea23 mov dword ptr [esi + 0xc4], edi */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(edi); }
  /* 0054ea29 mov dword ptr [esi + 0xc0], ebx */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(ebx); }
  /* 0054ea2f mov byte ptr [esi + 0xb0], bl */ { const u32 m_ = (u32)(esi + 0xb0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ea35 cmp dword ptr [esi + 0xa8], 0x10 */ { const u32 m_ = (u32)(esi + 0xa8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ea3c jb 0x54ea4d */ if (CF_) goto L_0054ea4d;
  /* 0054ea3e mov eax, dword ptr [esi + 0x94] */ { const u32 m_ = (u32)(esi + 0x94u); eax = (u32)(M32(m_)); }
  /* 0054ea44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ea45 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ea4au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ea45u); RETCHK(0x54ea4au, 0x54ea45u); LOADALL;
  /* 0054ea4a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ea4d:;
  /* 0054ea4d mov dword ptr [esi + 0xa8], edi */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(edi); }
  /* 0054ea53 mov dword ptr [esi + 0xa4], ebx */ { const u32 m_ = (u32)(esi + 0xa4u); M32(m_) = (u32)(ebx); }
  /* 0054ea59 mov byte ptr [esi + 0x94], bl */ { const u32 m_ = (u32)(esi + 0x94u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ea5f cmp dword ptr [esi + 0x8c], 0x10 */ { const u32 m_ = (u32)(esi + 0x8cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ea66 jb 0x54ea74 */ if (CF_) goto L_0054ea74;
  /* 0054ea68 mov ecx, dword ptr [esi + 0x78] */ { const u32 m_ = (u32)(esi + 0x78u); ecx = (u32)(M32(m_)); }
  /* 0054ea6b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ea6c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ea71u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ea6cu); RETCHK(0x54ea71u, 0x54ea6cu); LOADALL;
  /* 0054ea71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ea74:;
  /* 0054ea74 mov dword ptr [esi + 0x8c], edi */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(edi); }
  /* 0054ea7a mov dword ptr [esi + 0x88], ebx */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(ebx); }
  /* 0054ea80 mov byte ptr [esi + 0x78], bl */ { const u32 m_ = (u32)(esi + 0x78u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ea83 cmp dword ptr [esi + 0x70], 0x10 */ { const u32 m_ = (u32)(esi + 0x70u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ea87 jb 0x54ea95 */ if (CF_) goto L_0054ea95;
  /* 0054ea89 mov edx, dword ptr [esi + 0x5c] */ { const u32 m_ = (u32)(esi + 0x5cu); edx = (u32)(M32(m_)); }
  /* 0054ea8c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ea8d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ea92u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ea8du); RETCHK(0x54ea92u, 0x54ea8du); LOADALL;
  /* 0054ea92 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ea95:;
  /* 0054ea95 mov dword ptr [esi + 0x70], edi */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(edi); }
  /* 0054ea98 mov dword ptr [esi + 0x6c], ebx */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(ebx); }
  /* 0054ea9b mov byte ptr [esi + 0x5c], bl */ { const u32 m_ = (u32)(esi + 0x5cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ea9e cmp dword ptr [esi + 0x54], 0x10 */ { const u32 m_ = (u32)(esi + 0x54u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054eaa2 jb 0x54eab0 */ if (CF_) goto L_0054eab0;
  /* 0054eaa4 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 0054eaa7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054eaa8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54eaadu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54eaa8u); RETCHK(0x54eaadu, 0x54eaa8u); LOADALL;
  /* 0054eaad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054eab0:;
  /* 0054eab0 mov dword ptr [esi + 0x54], edi */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(edi); }
  /* 0054eab3 mov dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 0054eab6 mov byte ptr [esi + 0x40], bl */ { const u32 m_ = (u32)(esi + 0x40u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054eab9 cmp dword ptr [esi + 0x38], 0x10 */ { const u32 m_ = (u32)(esi + 0x38u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054eabd jb 0x54eacb */ if (CF_) goto L_0054eacb;
  /* 0054eabf mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0054eac2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054eac3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54eac8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54eac3u); RETCHK(0x54eac8u, 0x54eac3u); LOADALL;
  /* 0054eac8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054eacb:;
  /* 0054eacb mov dword ptr [esi + 0x38], edi */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(edi); }
  /* 0054eace mov dword ptr [esi + 0x34], ebx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ebx); }
  /* 0054ead1 mov byte ptr [esi + 0x24], bl */ { const u32 m_ = (u32)(esi + 0x24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054ead4 cmp dword ptr [esi + 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054ead8 jb 0x54eae6 */ if (CF_) goto L_0054eae6;
  /* 0054eada mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0054eadd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054eade call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54eae3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54eadeu); RETCHK(0x54eae3u, 0x54eadeu); LOADALL;
  /* 0054eae3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054eae6:;
  /* 0054eae6 mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 0054eae9 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 0054eaec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054eaed mov byte ptr [esi + 8], bl */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054eaf0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054eaf1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054eaf2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054eb00(CPU *c) {
  NATIVE_HOOK(0x54eb00u) REGS; LOADALL;
L_0054eb00:;
  /* 0054eb00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054eb01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054eb03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054eb05 push 0x620f58 */ { u32 v_ = 0x620f58u; esp -= 4; M32(esp) = v_; }
  /* 0054eb0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054eb10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054eb11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054eb18 sub esp, 0x34 */ { u32 a_ = esp, b_ = 0x34u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054eb1b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054eb20 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0054eb23 mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054eb28 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054eb29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054eb2a mov dword ptr [eax + 0x108], ecx */ { const u32 m_ = (u32)(eax + 0x108u); M32(m_) = (u32)(ecx); }
  /* 0054eb30 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054eb32 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054eb33 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0054eb36 mov esi, edx */ { esi = (u32)(edx); }
  /* 0054eb38 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0054eb3f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 0054eb42 mov byte ptr [ebp - 0x2c], al */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054eb45 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054eb47 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0054eb4a push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 0054eb4f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054eb52 call 0x404420 */ esp -= 4; M32(esp) = 0x54eb57u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54eb52u); RETCHK(0x54eb57u, 0x54eb52u); LOADALL;
  /* 0054eb57 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054eb59 lea ecx, [esi + 0x20] */ ecx = (u32)((u32)(esi + 0x20u));
  /* 0054eb5c push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 0054eb61 mov dword ptr [ebp - 0x40], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ecx); }
  /* 0054eb64 call 0x404420 */ esp -= 4; M32(esp) = 0x54eb69u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54eb64u); RETCHK(0x54eb69u, 0x54eb64u); LOADALL;
  /* 0054eb69 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054eb6b lea edi, [esi + 0x74] */ edi = (u32)((u32)(esi + 0x74u));
  /* 0054eb6e push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 0054eb73 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0054eb75 call 0x404420 */ esp -= 4; M32(esp) = 0x54eb7au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54eb75u); RETCHK(0x54eb7au, 0x54eb75u); LOADALL;
  /* 0054eb7a push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054eb7c lea ebx, [esi + 0x90] */ ebx = (u32)((u32)(esi + 0x90u));
  /* 0054eb82 push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 0054eb87 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054eb89 call 0x404420 */ esp -= 4; M32(esp) = 0x54eb8eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54eb89u); RETCHK(0x54eb8eu, 0x54eb89u); LOADALL;
  /* 0054eb8e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054eb90 lea ecx, [esi + 0xac] */ ecx = (u32)((u32)(esi + 0xacu));
  /* 0054eb96 push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 0054eb9b call 0x404420 */ esp -= 4; M32(esp) = 0x54eba0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54eb9bu); RETCHK(0x54eba0u, 0x54eb9bu); LOADALL;
  /* 0054eba0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054eba2 lea ecx, [esi + 0xc8] */ ecx = (u32)((u32)(esi + 0xc8u));
  /* 0054eba8 push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 0054ebad call 0x404420 */ esp -= 4; M32(esp) = 0x54ebb2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54ebadu); RETCHK(0x54ebb2u, 0x54ebadu); LOADALL;
  /* 0054ebb2 mov al, byte ptr [esi + 0xe4] */ { const u32 m_ = (u32)(esi + 0xe4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ebb8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ebba je 0x54ef44 */ if (ZF_) goto L_0054ef44;
  /* 0054ebc0 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ebc2 push 0x655978 */ { u32 v_ = 0x655978u; esp -= 4; M32(esp) = v_; }
  /* 0054ebc7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ebc8 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x54ebcdu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x54ebc8u); RETCHK(0x54ebcdu, 0x54ebc8u); LOADALL;
  /* 0054ebcd mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ebcf mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0054ebd4 mov dword ptr [ecx + 0x80], eax */ { const u32 m_ = (u32)(ecx + 0x80u); M32(m_) = (u32)(eax); }
  /* 0054ebda mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ebdc mov dword ptr [edx + 0x84], 0 */ { const u32 m_ = (u32)(edx + 0x84u); M32(m_) = (u32)(0x0u); }
  /* 0054ebe6 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ebe8 mov dword ptr [ecx + 0x88], 3 */ { const u32 m_ = (u32)(ecx + 0x88u); M32(m_) = (u32)(0x3u); }
  /* 0054ebf2 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ebf4 mov dword ptr [edx + 0x8c], eax */ { const u32 m_ = (u32)(edx + 0x8cu); M32(m_) = (u32)(eax); }
  /* 0054ebfa mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ebfc mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054ec01 mov eax, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); eax = (u32)(M32(m_)); }
  /* 0054ec07 mov edx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); edx = (u32)(M32(m_)); }
  /* 0054ec0a add ecx, 0x98 */ { u32 a_ = ecx, b_ = 0x98u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ec10 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0054ec12 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0054ec15 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 0054ec18 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0054ec1b mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0054ec1e mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0054ec21 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ec23 mov dword ptr [ecx + 0x17c], 1 */ { const u32 m_ = (u32)(ecx + 0x17cu); M32(m_) = (u32)(0x1u); }
  /* 0054ec2d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ec2f mov dword ptr [edx + 0xa8], 0x54f250 */ { const u32 m_ = (u32)(edx + 0xa8u); M32(m_) = (u32)(0x54f250u); }
  /* 0054ec39 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ec3b mov dword ptr [eax + 0xac], 0x54f280 */ { const u32 m_ = (u32)(eax + 0xacu); M32(m_) = (u32)(0x54f280u); }
  /* 0054ec45 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ec47 mov dword ptr [ecx + 0xb0], 0x54f2b0 */ { const u32 m_ = (u32)(ecx + 0xb0u); M32(m_) = (u32)(0x54f2b0u); }
  /* 0054ec51 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ec53 mov dword ptr [edx + 0xb4], 0x54f2f0 */ { const u32 m_ = (u32)(edx + 0xb4u); M32(m_) = (u32)(0x54f2f0u); }
  /* 0054ec5d mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ec5f mov dword ptr [eax + 0xb8], 0x54f340 */ { const u32 m_ = (u32)(eax + 0xb8u); M32(m_) = (u32)(0x54f340u); }
  /* 0054ec69 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ec6b mov dword ptr [ecx + 0xbc], 0x54f370 */ { const u32 m_ = (u32)(ecx + 0xbcu); M32(m_) = (u32)(0x54f370u); }
  /* 0054ec75 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ec77 mov dword ptr [edx + 0xc0], 0x54f3a0 */ { const u32 m_ = (u32)(edx + 0xc0u); M32(m_) = (u32)(0x54f3a0u); }
  /* 0054ec81 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ec83 mov dword ptr [eax + 0xc4], 0x54f3d0 */ { const u32 m_ = (u32)(eax + 0xc4u); M32(m_) = (u32)(0x54f3d0u); }
  /* 0054ec8d mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ec8f mov dword ptr [ecx + 0xc8], 0x54f4a0 */ { const u32 m_ = (u32)(ecx + 0xc8u); M32(m_) = (u32)(0x54f4a0u); }
  /* 0054ec99 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ec9b mov dword ptr [edx + 0xcc], 0x54f500 */ { const u32 m_ = (u32)(edx + 0xccu); M32(m_) = (u32)(0x54f500u); }
  /* 0054eca5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054eca7 mov dword ptr [eax + 0xd0], 0x546e40 */ { const u32 m_ = (u32)(eax + 0xd0u); M32(m_) = (u32)(0x546e40u); }
  /* 0054ecb1 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ecb3 mov dword ptr [ecx + 0xd4], 0x54f5b0 */ { const u32 m_ = (u32)(ecx + 0xd4u); M32(m_) = (u32)(0x54f5b0u); }
  /* 0054ecbd mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ecbf mov dword ptr [edx + 0xd8], 0x54f5e0 */ { const u32 m_ = (u32)(edx + 0xd8u); M32(m_) = (u32)(0x54f5e0u); }
  /* 0054ecc9 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054eccb mov dword ptr [eax + 0xe0], 0x54f650 */ { const u32 m_ = (u32)(eax + 0xe0u); M32(m_) = (u32)(0x54f650u); }
  /* 0054ecd5 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ecd7 mov dword ptr [ecx + 0xe4], 0x54f6a0 */ { const u32 m_ = (u32)(ecx + 0xe4u); M32(m_) = (u32)(0x54f6a0u); }
  /* 0054ece1 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ece3 mov dword ptr [edx + 0xec], 0x54f9b0 */ { const u32 m_ = (u32)(edx + 0xecu); M32(m_) = (u32)(0x54f9b0u); }
  /* 0054eced mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ecef mov dword ptr [eax + 0xe8], 0x54f9d0 */ { const u32 m_ = (u32)(eax + 0xe8u); M32(m_) = (u32)(0x54f9d0u); }
  /* 0054ecf9 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ecfb mov dword ptr [ecx + 0xf0], 0x546e40 */ { const u32 m_ = (u32)(ecx + 0xf0u); M32(m_) = (u32)(0x546e40u); }
  /* 0054ed05 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ed07 mov dword ptr [edx + 0xf4], 0x54f9f0 */ { const u32 m_ = (u32)(edx + 0xf4u); M32(m_) = (u32)(0x54f9f0u); }
  /* 0054ed11 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ed13 mov dword ptr [eax + 0x16c], 0x550030 */ { const u32 m_ = (u32)(eax + 0x16cu); M32(m_) = (u32)(0x550030u); }
  /* 0054ed1d mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054ed1f mov dword ptr [ecx + 0x100], 0x54fa10 */ { const u32 m_ = (u32)(ecx + 0x100u); M32(m_) = (u32)(0x54fa10u); }
  /* 0054ed29 mov al, byte ptr [esi + 0xe5] */ { const u32 m_ = (u32)(esi + 0xe5u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ed2f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ed32 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ed34 je 0x54ef3a */ if (ZF_) goto L_0054ef3a;
  /* 0054ed3a push 0x2000 */ { u32 v_ = 0x2000u; esp -= 4; M32(esp) = v_; }
  /* 0054ed3f call 0x5fe9ce */ esp -= 4; M32(esp) = 0x54ed44u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x54ed3fu); RETCHK(0x54ed44u, 0x54ed3fu); LOADALL;
  /* 0054ed44 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ed47 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 0054ed4c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ed4d mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 0054ed50 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054ed54 call dword ptr [0x62e45c] */ { const u32 m_ = (u32)(0x62e45cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ed5au; SAVEALL; call_ind(c, t_); RETCHK(0x54ed5au, 0x54ed54u); LOADALL; }
  /* 0054ed5a mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ed5c mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0054ed5f lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0054ed62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ed63 push 0x655964 */ { u32 v_ = 0x655964u; esp -= 4; M32(esp) = v_; }
  /* 0054ed68 call dword ptr [edx + 0x154] */ { const u32 m_ = (u32)(edx + 0x154u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ed6eu; SAVEALL; call_ind(c, t_); RETCHK(0x54ed6eu, 0x54ed68u); LOADALL; }
  /* 0054ed6e mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0054ed71 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ed72 call 0x602700 */ esp -= 4; M32(esp) = 0x54ed77u; SAVEALL; F_00602700(c); ABI_CHECK(0x602700u, 0x54ed72u); RETCHK(0x54ed77u, 0x54ed72u); LOADALL;
  /* 0054ed77 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054ed79 lea edx, [ecx + 1] */ edx = (u32)((u32)(ecx + 0x1u));
  /* 0054ed7c mov dword ptr [ebp - 0x3c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edx); }
  /* 0054ed7f nop */ ;
L_0054ed80:;
  /* 0054ed80 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ed82 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054ed83 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ed85 jne 0x54ed80 */ if (!ZF_) goto L_0054ed80;
  /* 0054ed87 sub ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ed8a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ed8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ed8c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0054ed8e call 0x404420 */ esp -= 4; M32(esp) = 0x54ed93u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54ed8eu); RETCHK(0x54ed93u, 0x54ed8eu); LOADALL;
  /* 0054ed93 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0054ed96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ed97 call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ed9du; SAVEALL; call_ind(c, t_); RETCHK(0x54ed9du, 0x54ed97u); LOADALL; }
  /* 0054ed9d mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 0054eda0 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 0054eda5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054eda6 call dword ptr [0x62e45c] */ { const u32 m_ = (u32)(0x62e45cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54edacu; SAVEALL; call_ind(c, t_); RETCHK(0x54edacu, 0x54eda6u); LOADALL; }
  /* 0054edac mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054edae mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0054edb1 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0054edb4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054edb5 push 0x65594c */ { u32 v_ = 0x65594cu; esp -= 4; M32(esp) = v_; }
  /* 0054edba call dword ptr [edx + 0x154] */ { const u32 m_ = (u32)(edx + 0x154u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54edc0u; SAVEALL; call_ind(c, t_); RETCHK(0x54edc0u, 0x54edbau); LOADALL; }
  /* 0054edc0 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0054edc3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054edc4 call 0x602700 */ esp -= 4; M32(esp) = 0x54edc9u; SAVEALL; F_00602700(c); ABI_CHECK(0x602700u, 0x54edc4u); RETCHK(0x54edc9u, 0x54edc4u); LOADALL;
  /* 0054edc9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054edcb lea edi, [ecx + 1] */ edi = (u32)((u32)(ecx + 0x1u));
  /* 0054edce mov edi, edi */ { edi = (u32)(edi); }
L_0054edd0:;
  /* 0054edd0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054edd2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054edd3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054edd5 jne 0x54edd0 */ if (!ZF_) goto L_0054edd0;
  /* 0054edd7 sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054edd9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054edda push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054eddb mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054eddd call 0x404420 */ esp -= 4; M32(esp) = 0x54ede2u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54edddu); RETCHK(0x54ede2u, 0x54edddu); LOADALL;
  /* 0054ede2 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0054ede5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ede6 call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54edecu; SAVEALL; call_ind(c, t_); RETCHK(0x54edecu, 0x54ede6u); LOADALL; }
  /* 0054edec mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 0054edef mov edi, dword ptr [0x62e45c] */ { const u32 m_ = (u32)(0x62e45cu); edi = (u32)(M32(m_)); }
  /* 0054edf5 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 0054edfa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054edfb call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54edfdu; SAVEALL; call_ind(c, t_); RETCHK(0x54edfdu, 0x54edfbu); LOADALL; }
  /* 0054edfd mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0054edff lea edx, [ebp - 0x34] */ edx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0054ee02 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ee03 push 0x655934 */ { u32 v_ = 0x655934u; esp -= 4; M32(esp) = v_; }
  /* 0054ee08 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0054ee0b call dword ptr [ecx + 0x154] */ { const u32 m_ = (u32)(ecx + 0x154u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ee11u; SAVEALL; call_ind(c, t_); RETCHK(0x54ee11u, 0x54ee0bu); LOADALL; }
  /* 0054ee11 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0054ee14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ee15 call 0x602700 */ esp -= 4; M32(esp) = 0x54ee1au; SAVEALL; F_00602700(c); ABI_CHECK(0x602700u, 0x54ee15u); RETCHK(0x54ee1au, 0x54ee15u); LOADALL;
  /* 0054ee1a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054ee1c lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 0054ee1f nop */ ;
L_0054ee20:;
  /* 0054ee20 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ee22 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054ee23 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ee25 jne 0x54ee20 */ if (!ZF_) goto L_0054ee20;
  /* 0054ee27 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ee29 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ee2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ee2b lea ecx, [esi + 0xac] */ ecx = (u32)((u32)(esi + 0xacu));
  /* 0054ee31 call 0x404420 */ esp -= 4; M32(esp) = 0x54ee36u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54ee31u); RETCHK(0x54ee36u, 0x54ee31u); LOADALL;
  /* 0054ee36 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0054ee39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ee3a call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ee40u; SAVEALL; call_ind(c, t_); RETCHK(0x54ee40u, 0x54ee3au); LOADALL; }
  /* 0054ee40 mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 0054ee43 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 0054ee48 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ee49 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54ee4bu; SAVEALL; call_ind(c, t_); RETCHK(0x54ee4bu, 0x54ee49u); LOADALL; }
  /* 0054ee4b lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0054ee4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ee4f mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0054ee52 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ee54 push 0x655924 */ { u32 v_ = 0x655924u; esp -= 4; M32(esp) = v_; }
  /* 0054ee59 call dword ptr [eax + 0x154] */ { const u32 m_ = (u32)(eax + 0x154u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ee5fu; SAVEALL; call_ind(c, t_); RETCHK(0x54ee5fu, 0x54ee59u); LOADALL; }
  /* 0054ee5f mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0054ee62 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ee63 call 0x602700 */ esp -= 4; M32(esp) = 0x54ee68u; SAVEALL; F_00602700(c); ABI_CHECK(0x602700u, 0x54ee63u); RETCHK(0x54ee68u, 0x54ee63u); LOADALL;
  /* 0054ee68 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054ee6a lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 0054ee6d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0054ee70:;
  /* 0054ee70 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ee72 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054ee73 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ee75 jne 0x54ee70 */ if (!ZF_) goto L_0054ee70;
  /* 0054ee77 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ee79 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ee7a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ee7b lea ecx, [esi + 0xc8] */ ecx = (u32)((u32)(esi + 0xc8u));
  /* 0054ee81 call 0x404420 */ esp -= 4; M32(esp) = 0x54ee86u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54ee81u); RETCHK(0x54ee86u, 0x54ee81u); LOADALL;
  /* 0054ee86 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0054ee89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ee8a call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ee90u; SAVEALL; call_ind(c, t_); RETCHK(0x54ee90u, 0x54ee8au); LOADALL; }
  /* 0054ee90 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 0054ee93 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 0054ee98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ee99 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54ee9bu; SAVEALL; call_ind(c, t_); RETCHK(0x54ee9bu, 0x54ee99u); LOADALL; }
  /* 0054ee9b mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0054ee9d mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0054eea0 lea eax, [ebp - 0x34] */ eax = (u32)((u32)(ebp + 0xffffffccu));
  /* 0054eea3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054eea4 push 0x655910 */ { u32 v_ = 0x655910u; esp -= 4; M32(esp) = v_; }
  /* 0054eea9 call dword ptr [edx + 0x154] */ { const u32 m_ = (u32)(edx + 0x154u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54eeafu; SAVEALL; call_ind(c, t_); RETCHK(0x54eeafu, 0x54eea9u); LOADALL; }
  /* 0054eeaf mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0054eeb2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054eeb3 call 0x602700 */ esp -= 4; M32(esp) = 0x54eeb8u; SAVEALL; F_00602700(c); ABI_CHECK(0x602700u, 0x54eeb3u); RETCHK(0x54eeb8u, 0x54eeb3u); LOADALL;
  /* 0054eeb8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054eeba lea ebx, [ecx + 1] */ ebx = (u32)((u32)(ecx + 0x1u));
  /* 0054eebd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_0054eec0:;
  /* 0054eec0 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054eec2 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054eec3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054eec5 jne 0x54eec0 */ if (!ZF_) goto L_0054eec0;
  /* 0054eec7 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054eec9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054eeca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054eecb lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 0054eece call 0x404420 */ esp -= 4; M32(esp) = 0x54eed3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54eeceu); RETCHK(0x54eed3u, 0x54eeceu); LOADALL;
  /* 0054eed3 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0054eed6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054eed7 call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54eeddu; SAVEALL; call_ind(c, t_); RETCHK(0x54eeddu, 0x54eed7u); LOADALL; }
  /* 0054eedd mov ebx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ebx = (u32)(M32(m_)); }
  /* 0054eee0 push 0x1000 */ { u32 v_ = 0x1000u; esp -= 4; M32(esp) = v_; }
  /* 0054eee5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054eee6 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54eee8u; SAVEALL; call_ind(c, t_); RETCHK(0x54eee8u, 0x54eee6u); LOADALL; }
  /* 0054eee8 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0054eeeb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054eeec mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 0054eeef mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054eef1 push 0x655904 */ { u32 v_ = 0x655904u; esp -= 4; M32(esp) = v_; }
  /* 0054eef6 call dword ptr [eax + 0x154] */ { const u32 m_ = (u32)(eax + 0x154u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54eefcu; SAVEALL; call_ind(c, t_); RETCHK(0x54eefcu, 0x54eef6u); LOADALL; }
  /* 0054eefc mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0054eeff push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ef00 call 0x602700 */ esp -= 4; M32(esp) = 0x54ef05u; SAVEALL; F_00602700(c); ABI_CHECK(0x602700u, 0x54ef00u); RETCHK(0x54ef05u, 0x54ef00u); LOADALL;
  /* 0054ef05 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0054ef07 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
  /* 0054ef0a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0054ef10:;
  /* 0054ef10 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ef12 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054ef13 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ef15 jne 0x54ef10 */ if (!ZF_) goto L_0054ef10;
  /* 0054ef17 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ef19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ef1a mov ecx, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); ecx = (u32)(M32(m_)); }
  /* 0054ef1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ef1e call 0x404420 */ esp -= 4; M32(esp) = 0x54ef23u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54ef1eu); RETCHK(0x54ef23u, 0x54ef1eu); LOADALL;
  /* 0054ef23 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0054ef26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ef27 call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ef2du; SAVEALL; call_ind(c, t_); RETCHK(0x54ef2du, 0x54ef27u); LOADALL; }
  /* 0054ef2d test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ef2f je 0x54ef3a */ if (ZF_) goto L_0054ef3a;
  /* 0054ef31 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054ef32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ef37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ef32u); RETCHK(0x54ef37u, 0x54ef32u); LOADALL;
  /* 0054ef37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ef3a:;
  /* 0054ef3a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054ef3c jmp 0x54ef46 */ goto L_0054ef46;
L_0054ef44:;
  /* 0054ef44 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0054ef46:;
  /* 0054ef46 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ef49 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ef50 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0054ef53 call 0x61af31 */ esp -= 4; M32(esp) = 0x54ef58u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54ef53u); RETCHK(0x54ef58u, 0x54ef53u); LOADALL;
  /* 0054ef58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ef59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ef5a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ef5b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054ef5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ef5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ef3a(CPU *c) {
  NATIVE_HOOK(0x54ef3au) REGS; LOADALL;
L_0054ef3a:;
  /* 0054ef3a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054ef3c jmp 0x54ef46 */ goto L_0054ef46;
L_0054ef46:;
  /* 0054ef46 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054ef49 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054ef50 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0054ef53 call 0x61af31 */ esp -= 4; M32(esp) = 0x54ef58u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54ef53u); RETCHK(0x54ef58u, 0x54ef53u); LOADALL;
  /* 0054ef58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ef59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ef5a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054ef5b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054ef5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054ef5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ef3e(CPU *c) {
  NATIVE_HOOK(0x54ef3eu) REGS; LOADALL;
L_0054ef3e:;
  /* 0054ef3e mov eax, 0x54ef3a */ { eax = (u32)(0x54ef3au); }
  /* 0054ef43 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054ef60(CPU *c) {
  NATIVE_HOOK(0x54ef60u) REGS; LOADALL;
L_0054ef60:;
  /* 0054ef60 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054ef62 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0054ef65:;
  /* 0054ef65 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ef67 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054ef68 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ef6a jne 0x54ef65 */ if (!ZF_) goto L_0054ef65;
  /* 0054ef6c sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054ef6e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054ef6f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ef70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ef71 call 0x5fe9ce */ esp -= 4; M32(esp) = 0x54ef76u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x54ef71u); RETCHK(0x54ef76u, 0x54ef71u); LOADALL;
  /* 0054ef76 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054ef78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ef7b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ef7d je 0x54efb2 */ if (ZF_) goto L_0054efb2;
  /* 0054ef7f mov edx, esi */ { edx = (u32)(esi); }
  /* 0054ef81 mov eax, edi */ { eax = (u32)(edi); }
  /* 0054ef83 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_0054ef85:;
  /* 0054ef85 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054ef87 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054ef8a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054ef8b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054ef8d jne 0x54ef85 */ if (!ZF_) goto L_0054ef85;
  /* 0054ef8f push 0x2f */ { u32 v_ = 0x2fu; esp -= 4; M32(esp) = v_; }
  /* 0054ef91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ef92 call 0x5fe9c2 */ esp -= 4; M32(esp) = 0x54ef97u; SAVEALL; F_005fe9c2(c); ABI_CHECK(0x5fe9c2u, 0x54ef92u); RETCHK(0x54ef97u, 0x54ef92u); LOADALL;
  /* 0054ef97 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054ef9a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ef9c je 0x54efb2 */ if (ZF_) goto L_0054efb2;
  /* 0054ef9e mov edi, edi */ { edi = (u32)(edi); }
L_0054efa0:;
  /* 0054efa0 push 0x2f */ { u32 v_ = 0x2fu; esp -= 4; M32(esp) = v_; }
  /* 0054efa2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054efa3 mov byte ptr [eax], 0x5c */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x5cu); }
  /* 0054efa6 call 0x5fe9c2 */ esp -= 4; M32(esp) = 0x54efabu; SAVEALL; F_005fe9c2(c); ABI_CHECK(0x5fe9c2u, 0x54efa6u); RETCHK(0x54efabu, 0x54efa6u); LOADALL;
  /* 0054efab add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054efae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054efb0 jne 0x54efa0 */ if (!ZF_) goto L_0054efa0;
L_0054efb2:;
  /* 0054efb2 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054efb4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054efb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054efc0(CPU *c) {
  NATIVE_HOOK(0x54efc0u) REGS; LOADALL;
L_0054efc0:;
  /* 0054efc0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054efc2 je 0x54efcb */ if (ZF_) goto L_0054efcb;
  /* 0054efc4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054efc5 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54efcau; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54efc5u); RETCHK(0x54efcau, 0x54efc5u); LOADALL;
  /* 0054efca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
L_0054efcb:;
  /* 0054efcb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054efd0(CPU *c) {
  NATIVE_HOOK(0x54efd0u) REGS; LOADALL;
L_0054efd0:;
  /* 0054efd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054efd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054efd3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054efd5 push 0x61c566 */ { u32 v_ = 0x61c566u; esp -= 4; M32(esp) = v_; }
  /* 0054efda mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054efe0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054efe1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054efe8 sub esp, 0x298 */ { u32 a_ = esp, b_ = 0x298u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054efee mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054eff3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054eff4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054eff5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054eff6 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0054eff8 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 0054effd xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054efff push 0x6558fc */ { u32 v_ = 0x6558fcu; esp -= 4; M32(esp) = v_; }
  /* 0054f004 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0054f007 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0054f00a mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 0054f00d mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 0054f010 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0054f014 call 0x404420 */ esp -= 4; M32(esp) = 0x54f019u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54f014u); RETCHK(0x54f019u, 0x54f014u); LOADALL;
  /* 0054f019 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0054f01c push 0x11 */ { u32 v_ = 0x11u; esp -= 4; M32(esp) = v_; }
  /* 0054f01e push 0x6558e8 */ { u32 v_ = 0x6558e8u; esp -= 4; M32(esp) = v_; }
  /* 0054f023 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f026 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0054f029 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 0054f02c mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0054f030 call 0x404420 */ esp -= 4; M32(esp) = 0x54f035u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54f030u); RETCHK(0x54f035u, 0x54f030u); LOADALL;
  /* 0054f035 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0054f038 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054f03c mov dword ptr [ebx + 0x104], edi */ { const u32 m_ = (u32)(ebx + 0x104u); M32(m_) = (u32)(edi); }
  /* 0054f042 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f043 add ebx, 0xe8 */ { u32 a_ = ebx, b_ = 0xe8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0054f049 push 0x6558d8 */ { u32 v_ = 0x6558d8u; esp -= 4; M32(esp) = v_; }
  /* 0054f04e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054f050 call 0x404420 */ esp -= 4; M32(esp) = 0x54f055u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54f050u); RETCHK(0x54f055u, 0x54f050u); LOADALL;
  /* 0054f055 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054f05a lea eax, [ebp - 0x148] */ eax = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0054f060 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f061 call dword ptr [0x62e110] */ { const u32 m_ = (u32)(0x62e110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f067u; SAVEALL; call_ind(c, t_); RETCHK(0x54f067u, 0x54f061u); LOADALL; }
  /* 0054f067 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f06a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f06b lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0054f071 lea esi, [ebp - 0x2a4] */ esi = (u32)((u32)(ebp + 0xfffffd5cu));
  /* 0054f077 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x54f07cu; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x54f077u); RETCHK(0x54f07cu, 0x54f077u); LOADALL;
  /* 0054f07c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f07f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054f081 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f082 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f083 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f086 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0054f08a call 0x404140 */ esp -= 4; M32(esp) = 0x54f08fu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x54f08au); RETCHK(0x54f08fu, 0x54f08au); LOADALL;
  /* 0054f08f mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054f093 mov eax, dword ptr [ebp - 0x28c] */ { const u32 m_ = (u32)(ebp + 0xfffffd74u); eax = (u32)(M32(m_)); }
  /* 0054f099 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0054f09e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f0a0 jb 0x54f0b1 */ if (CF_) goto L_0054f0b1;
  /* 0054f0a2 mov edx, dword ptr [ebp - 0x2a0] */ { const u32 m_ = (u32)(ebp + 0xfffffd60u); edx = (u32)(M32(m_)); }
  /* 0054f0a8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f0a9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54f0aeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54f0a9u); RETCHK(0x54f0aeu, 0x54f0a9u); LOADALL;
  /* 0054f0ae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f0b1:;
  /* 0054f0b1 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f0b4 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0054f0b7 jae 0x54f0bc */ if (!CF_) goto L_0054f0bc;
  /* 0054f0b9 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0054f0bc:;
  /* 0054f0bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f0bd push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054f0c2 lea eax, [ebp - 0x148] */ eax = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0054f0c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f0c9 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0054f0ce push 0x6558cc */ { u32 v_ = 0x6558ccu; esp -= 4; M32(esp) = v_; }
  /* 0054f0d3 push 0x6558c4 */ { u32 v_ = 0x6558c4u; esp -= 4; M32(esp) = v_; }
  /* 0054f0d8 call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f0deu; SAVEALL; call_ind(c, t_); RETCHK(0x54f0deu, 0x54f0d8u); LOADALL; }
  /* 0054f0de lea edi, [ebp - 0x148] */ edi = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 0054f0e4 call 0x54ef60 */ esp -= 4; M32(esp) = 0x54f0e9u; SAVEALL; F_0054ef60(c); ABI_CHECK(0x54ef60u, 0x54f0e4u); RETCHK(0x54f0e9u, 0x54f0e4u); LOADALL;
  /* 0054f0e9 mov edi, eax */ { edi = (u32)(eax); }
  /* 0054f0eb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f0ec mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0054f0ee lea esi, [ebp - 0x2a4] */ esi = (u32)((u32)(ebp + 0xfffffd5cu));
  /* 0054f0f4 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x54f0f9u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x54f0f4u); RETCHK(0x54f0f9u, 0x54f0f4u); LOADALL;
  /* 0054f0f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f0fc push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054f0fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f100 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f101 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054f103 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0054f107 call 0x404140 */ esp -= 4; M32(esp) = 0x54f10cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x54f107u); RETCHK(0x54f10cu, 0x54f107u); LOADALL;
  /* 0054f10c mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054f110 mov eax, dword ptr [ebp - 0x28c] */ { const u32 m_ = (u32)(ebp + 0xfffffd74u); eax = (u32)(M32(m_)); }
  /* 0054f116 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0054f11b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f11d jb 0x54f12e */ if (CF_) goto L_0054f12e;
  /* 0054f11f mov ecx, dword ptr [ebp - 0x2a0] */ { const u32 m_ = (u32)(ebp + 0xfffffd60u); ecx = (u32)(M32(m_)); }
  /* 0054f125 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f126 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54f12bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54f126u); RETCHK(0x54f12bu, 0x54f126u); LOADALL;
  /* 0054f12b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f12e:;
  /* 0054f12e mov eax, edi */ { eax = (u32)(edi); }
  /* 0054f130 call 0x54efc0 */ esp -= 4; M32(esp) = 0x54f135u; SAVEALL; F_0054efc0(c); ABI_CHECK(0x54efc0u, 0x54f130u); RETCHK(0x54f135u, 0x54f130u); LOADALL;
  /* 0054f135 cmp dword ptr [ebx + 0x18], esi */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f138 jb 0x54f13f */ if (CF_) goto L_0054f13f;
  /* 0054f13a mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054f13d jmp 0x54f142 */ goto L_0054f142;
L_0054f13f:;
  /* 0054f13f lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_0054f142:;
  /* 0054f142 lea edx, [ebp - 0x288] */ edx = (u32)((u32)(ebp + 0xfffffd78u));
  /* 0054f148 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f149 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f14a call dword ptr [0x62e114] */ { const u32 m_ = (u32)(0x62e114u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f150u; SAVEALL; call_ind(c, t_); RETCHK(0x54f150u, 0x54f14au); LOADALL; }
  /* 0054f150 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f153 je 0x54f1c9 */ if (ZF_) goto L_0054f1c9;
  /* 0054f155 cmp dword ptr [ebx + 0x18], esi */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f158 jb 0x54f15f */ if (CF_) goto L_0054f15f;
  /* 0054f15a mov ebx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0054f15d jmp 0x54f162 */ goto L_0054f162;
L_0054f15f:;
  /* 0054f15f add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
L_0054f162:;
  /* 0054f162 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f163 call dword ptr [0x62e198] */ { const u32 m_ = (u32)(0x62e198u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f169u; SAVEALL; call_ind(c, t_); RETCHK(0x54f169u, 0x54f163u); LOADALL; }
  /* 0054f169 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f16b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054f16e mov dword ptr [edi + 0x104], eax */ { const u32 m_ = (u32)(edi + 0x104u); M32(m_) = (u32)(eax); }
  /* 0054f174 je 0x54f1c9 */ if (ZF_) goto L_0054f1c9;
  /* 0054f176 cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f179 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0054f17c jae 0x54f181 */ if (!CF_) goto L_0054f181;
  /* 0054f17e lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
L_0054f181:;
  /* 0054f181 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f182 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f183 call dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f189u; SAVEALL; call_ind(c, t_); RETCHK(0x54f189u, 0x54f183u); LOADALL; }
  /* 0054f189 call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x54f18bu; SAVEALL; call_ind(c, t_); RETCHK(0x54f18bu, 0x54f189u); LOADALL; }
  /* 0054f18b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f18d mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 0054f18f je 0x54f1c9 */ if (ZF_) goto L_0054f1c9;
  /* 0054f191 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f194 jb 0x54f1a2 */ if (CF_) goto L_0054f1a2;
  /* 0054f196 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0054f199 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f19a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54f19fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54f19au); RETCHK(0x54f19fu, 0x54f19au); LOADALL;
  /* 0054f19f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f1a2:;
  /* 0054f1a2 cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f1a5 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0054f1ac mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0054f1b3 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0054f1b7 jb 0x54f1c5 */ if (CF_) goto L_0054f1c5;
  /* 0054f1b9 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 0054f1bc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f1bd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54f1c2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54f1bdu); RETCHK(0x54f1c2u, 0x54f1bdu); LOADALL;
  /* 0054f1c2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f1c5:;
  /* 0054f1c5 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054f1c7 jmp 0x54f1ff */ goto L_0054f1ff;
L_0054f1c9:;
  /* 0054f1c9 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f1cc jb 0x54f1da */ if (CF_) goto L_0054f1da;
  /* 0054f1ce mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0054f1d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f1d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54f1d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54f1d2u); RETCHK(0x54f1d7u, 0x54f1d2u); LOADALL;
  /* 0054f1d7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f1da:;
  /* 0054f1da cmp dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f1dd mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0054f1e4 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 0054f1eb mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0054f1ef jb 0x54f1fd */ if (CF_) goto L_0054f1fd;
  /* 0054f1f1 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0054f1f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f1f5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54f1fau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54f1f5u); RETCHK(0x54f1fau, 0x54f1f5u); LOADALL;
  /* 0054f1fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f1fd:;
  /* 0054f1fd xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
L_0054f1ff:;
  /* 0054f1ff mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054f202 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054f203 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054f204 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054f20b mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0054f20e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054f20f call 0x61af31 */ esp -= 4; M32(esp) = 0x54f214u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54f20fu); RETCHK(0x54f214u, 0x54f20fu); LOADALL;
  /* 0054f214 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054f216 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f217 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0054f220(CPU *c) {
  NATIVE_HOOK(0x54f220u) REGS; LOADALL;
L_0054f220:;
  /* 0054f220 mov eax, dword ptr [esi + 0x104] */ { const u32 m_ = (u32)(esi + 0x104u); eax = (u32)(M32(m_)); }
  /* 0054f226 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f228 je 0x54f24c */ if (ZF_) goto L_0054f24c;
  /* 0054f22a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f22b call dword ptr [0x62e194] */ { const u32 m_ = (u32)(0x62e194u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f231u; SAVEALL; call_ind(c, t_); RETCHK(0x54f231u, 0x54f22bu); LOADALL; }
  /* 0054f231 mov eax, dword ptr [esi + 0x104] */ { const u32 m_ = (u32)(esi + 0x104u); eax = (u32)(M32(m_)); }
  /* 0054f237 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f239 je 0x54f242 */ if (ZF_) goto L_0054f242;
  /* 0054f23b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f23c call dword ptr [0x62e0d4] */ { const u32 m_ = (u32)(0x62e0d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f242u; SAVEALL; call_ind(c, t_); RETCHK(0x54f242u, 0x54f23cu); LOADALL; }
L_0054f242:;
  /* 0054f242 mov dword ptr [esi + 0x104], 0 */ { const u32 m_ = (u32)(esi + 0x104u); M32(m_) = (u32)(0x0u); }
L_0054f24c:;
  /* 0054f24c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054f250(CPU *c) {
  NATIVE_HOOK(0x54f250u) REGS; LOADALL;
L_0054f250:;
  /* 0054f250 push 0x6558a8 */ { u32 v_ = 0x6558a8u; esp -= 4; M32(esp) = v_; }
  /* 0054f255 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f25bu; SAVEALL; call_ind(c, t_); RETCHK(0x54f25bu, 0x54f255u); LOADALL; }
  /* 0054f25b mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f260 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f266 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0054f268 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f269 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f26fu; SAVEALL; call_ind(c, t_); RETCHK(0x54f26fu, 0x54f269u); LOADALL; }
  /* 0054f26f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054f280(CPU *c) {
  NATIVE_HOOK(0x54f280u) REGS; LOADALL;
L_0054f280:;
  /* 0054f280 push 0x65588c */ { u32 v_ = 0x65588cu; esp -= 4; M32(esp) = v_; }
  /* 0054f285 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f28bu; SAVEALL; call_ind(c, t_); RETCHK(0x54f28bu, 0x54f285u); LOADALL; }
  /* 0054f28b mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f290 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f296 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0054f298 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f299 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f29fu; SAVEALL; call_ind(c, t_); RETCHK(0x54f29fu, 0x54f299u); LOADALL; }
  /* 0054f29f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054f2b0(CPU *c) {
  NATIVE_HOOK(0x54f2b0u) REGS; LOADALL;
L_0054f2b0:;
  /* 0054f2b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f2b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f2b3 push 0x655878 */ { u32 v_ = 0x655878u; esp -= 4; M32(esp) = v_; }
  /* 0054f2b8 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f2beu; SAVEALL; call_ind(c, t_); RETCHK(0x54f2beu, 0x54f2b8u); LOADALL; }
  /* 0054f2be mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054f2c1 mov ecx, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); ecx = (u32)(M32(m_)); }
  /* 0054f2c4 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0054f2c7 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054f2c9 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054f2cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f2cc mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054f2cf sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054f2d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f2d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f2d3 mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f2d8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f2d9 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f2df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f2e0 call dword ptr [0x62e518] */ { const u32 m_ = (u32)(0x62e518u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f2e6u; SAVEALL; call_ind(c, t_); RETCHK(0x54f2e6u, 0x54f2e0u); LOADALL; }
  /* 0054f2e6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f2e7 ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
}

void F_0054f2f0(CPU *c) {
  NATIVE_HOOK(0x54f2f0u) REGS; LOADALL;
L_0054f2f0:;
  /* 0054f2f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f2f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f2f3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f2f6 mov ecx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); ecx = (u32)(M32(m_)); }
  /* 0054f2fc mov edx, dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); edx = (u32)(M32(m_)); }
  /* 0054f302 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0054f305 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f306 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f307 call dword ptr [0x62e554] */ { const u32 m_ = (u32)(0x62e554u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f30du; SAVEALL; call_ind(c, t_); RETCHK(0x54f30du, 0x54f307u); LOADALL; }
  /* 0054f30d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0054f310 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 0054f313 mov edx, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); edx = (u32)(M32(m_)); }
  /* 0054f316 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054f318 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0054f31b mov ecx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0054f31e mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0054f320 mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0054f323 mov eax, dword ptr [ebp + 0x24] */ { const u32 m_ = (u32)(ebp + 0x24u); eax = (u32)(M32(m_)); }
  /* 0054f326 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 0054f328 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054f32b push 0x655864 */ { u32 v_ = 0x655864u; esp -= 4; M32(esp) = v_; }
  /* 0054f330 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0054f332 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f338u; SAVEALL; call_ind(c, t_); RETCHK(0x54f338u, 0x54f332u); LOADALL; }
  /* 0054f338 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054f33a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f33b ret 0x20 */ c->popped = M32(esp); esp += 36u; SAVEALL; return;
}

void F_0054f340(CPU *c) {
  NATIVE_HOOK(0x54f340u) REGS; LOADALL;
L_0054f340:;
  /* 0054f340 push 0x655850 */ { u32 v_ = 0x655850u; esp -= 4; M32(esp) = v_; }
  /* 0054f345 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f34bu; SAVEALL; call_ind(c, t_); RETCHK(0x54f34bu, 0x54f345u); LOADALL; }
  /* 0054f34b mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f350 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f356 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054f358 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f359 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f35fu; SAVEALL; call_ind(c, t_); RETCHK(0x54f35fu, 0x54f359u); LOADALL; }
  /* 0054f35f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054f370(CPU *c) {
  NATIVE_HOOK(0x54f370u) REGS; LOADALL;
L_0054f370:;
  /* 0054f370 push 0x65583c */ { u32 v_ = 0x65583cu; esp -= 4; M32(esp) = v_; }
  /* 0054f375 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f37bu; SAVEALL; call_ind(c, t_); RETCHK(0x54f37bu, 0x54f375u); LOADALL; }
  /* 0054f37b mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f380 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f386 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f388 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f389 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f38fu; SAVEALL; call_ind(c, t_); RETCHK(0x54f38fu, 0x54f389u); LOADALL; }
  /* 0054f38f ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054f3a0(CPU *c) {
  NATIVE_HOOK(0x54f3a0u) REGS; LOADALL;
L_0054f3a0:;
  /* 0054f3a0 push 0x655828 */ { u32 v_ = 0x655828u; esp -= 4; M32(esp) = v_; }
  /* 0054f3a5 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f3abu; SAVEALL; call_ind(c, t_); RETCHK(0x54f3abu, 0x54f3a5u); LOADALL; }
  /* 0054f3ab mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f3b0 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f3b6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f3b7 call dword ptr [0x62e558] */ { const u32 m_ = (u32)(0x62e558u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f3bdu; SAVEALL; call_ind(c, t_); RETCHK(0x54f3bdu, 0x54f3b7u); LOADALL; }
  /* 0054f3bd push 0x12 */ { u32 v_ = 0x12u; esp -= 4; M32(esp) = v_; }
  /* 0054f3bf call dword ptr [0x62e51c] */ { const u32 m_ = (u32)(0x62e51cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f3c5u; SAVEALL; call_ind(c, t_); RETCHK(0x54f3c5u, 0x54f3bfu); LOADALL; }
  /* 0054f3c5 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054f3c7 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054f3d0(CPU *c) {
  NATIVE_HOOK(0x54f3d0u) REGS; LOADALL;
L_0054f3d0:;
  /* 0054f3d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f3d1 mov esi, dword ptr [0x62e55c] */ { const u32 m_ = (u32)(0x62e55cu); esi = (u32)(M32(m_)); }
  /* 0054f3d7 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54f3d9u; SAVEALL; call_ind(c, t_); RETCHK(0x54f3d9u, 0x54f3d7u); LOADALL; }
  /* 0054f3d9 mov ecx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); ecx = (u32)(M32(m_)); }
  /* 0054f3df cmp dword ptr [ecx + 0x108], eax */ { const u32 m_ = (u32)(ecx + 0x108u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f3e5 je 0x54f492 */ if (ZF_) goto L_0054f492;
  /* 0054f3eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f3ec push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f3ee call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54f3f0u; SAVEALL; call_ind(c, t_); RETCHK(0x54f3f0u, 0x54f3eeu); LOADALL; }
  /* 0054f3f0 mov edi, dword ptr [0x62e4e8] */ { const u32 m_ = (u32)(0x62e4e8u); edi = (u32)(M32(m_)); }
  /* 0054f3f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f3f7 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54f3f9u; SAVEALL; call_ind(c, t_); RETCHK(0x54f3f9u, 0x54f3f7u); LOADALL; }
  /* 0054f3f9 mov edx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); edx = (u32)(M32(m_)); }
  /* 0054f3ff mov esi, eax */ { esi = (u32)(eax); }
  /* 0054f401 mov eax, dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); eax = (u32)(M32(m_)); }
  /* 0054f407 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f409 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f40a call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54f40cu; SAVEALL; call_ind(c, t_); RETCHK(0x54f40cu, 0x54f40au); LOADALL; }
  /* 0054f40c mov edi, eax */ { edi = (u32)(eax); }
  /* 0054f40e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f410 je 0x54f43b */ if (ZF_) goto L_0054f43b;
  /* 0054f412 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f413 mov ebx, dword ptr [0x62e560] */ { const u32 m_ = (u32)(0x62e560u); ebx = (u32)(M32(m_)); }
  /* 0054f419 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054f41b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f41c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f41d call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54f41fu; SAVEALL; call_ind(c, t_); RETCHK(0x54f41fu, 0x54f41du); LOADALL; }
  /* 0054f41f mov ecx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); ecx = (u32)(M32(m_)); }
  /* 0054f425 mov edx, dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); edx = (u32)(M32(m_)); }
  /* 0054f42b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f42c call dword ptr [0x62e564] */ { const u32 m_ = (u32)(0x62e564u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f432u; SAVEALL; call_ind(c, t_); RETCHK(0x54f432u, 0x54f42cu); LOADALL; }
  /* 0054f432 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f434 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f435 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f436 call ebx */ { u32 t_ = ebx; esp -= 4; M32(esp) = 0x54f438u; SAVEALL; call_ind(c, t_); RETCHK(0x54f438u, 0x54f436u); LOADALL; }
  /* 0054f438 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054f439 jmp 0x54f44d */ goto L_0054f44d;
L_0054f43b:;
  /* 0054f43b mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f440 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f446 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f447 call dword ptr [0x62e564] */ { const u32 m_ = (u32)(0x62e564u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f44du; SAVEALL; call_ind(c, t_); RETCHK(0x54f44du, 0x54f447u); LOADALL; }
L_0054f44d:;
  /* 0054f44d mov edx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); edx = (u32)(M32(m_)); }
  /* 0054f453 mov eax, dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); eax = (u32)(M32(m_)); }
  /* 0054f459 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f45a call dword ptr [0x62e568] */ { const u32 m_ = (u32)(0x62e568u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f460u; SAVEALL; call_ind(c, t_); RETCHK(0x54f460u, 0x54f45au); LOADALL; }
  /* 0054f460 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f462 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054f463 je 0x54f47e */ if (ZF_) goto L_0054f47e;
  /* 0054f465 mov ecx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); ecx = (u32)(M32(m_)); }
  /* 0054f46b mov edx, dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); edx = (u32)(M32(m_)); }
  /* 0054f471 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 0054f473 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f474 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f47au; SAVEALL; call_ind(c, t_); RETCHK(0x54f47au, 0x54f474u); LOADALL; }
  /* 0054f47a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054f47b ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
L_0054f47e:;
  /* 0054f47e mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f483 mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f489 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0054f48b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f48c call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f492u; SAVEALL; call_ind(c, t_); RETCHK(0x54f492u, 0x54f48cu); LOADALL; }
L_0054f492:;
  /* 0054f492 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054f493 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054f4a0(CPU *c) {
  NATIVE_HOOK(0x54f4a0u) REGS; LOADALL;
L_0054f4a0:;
  /* 0054f4a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f4a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f4a3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f4a6 mov ecx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); ecx = (u32)(M32(m_)); }
  /* 0054f4ac mov edx, dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); edx = (u32)(M32(m_)); }
  /* 0054f4b2 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0054f4b5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f4b6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f4b7 call dword ptr [0x62e554] */ { const u32 m_ = (u32)(0x62e554u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f4bdu; SAVEALL; call_ind(c, t_); RETCHK(0x54f4bdu, 0x54f4b7u); LOADALL; }
  /* 0054f4bd mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 0054f4c0 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0054f4c3 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0054f4c6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f4c8 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054f4ca mov edx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); edx = (u32)(M32(m_)); }
  /* 0054f4d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f4d1 sub ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054f4d4 mov eax, dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); eax = (u32)(M32(m_)); }
  /* 0054f4da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f4db push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f4dd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f4df push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0054f4e1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f4e2 call dword ptr [0x62e56c] */ { const u32 m_ = (u32)(0x62e56cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f4e8u; SAVEALL; call_ind(c, t_); RETCHK(0x54f4e8u, 0x54f4e2u); LOADALL; }
  /* 0054f4e8 push 0x65580c */ { u32 v_ = 0x65580cu; esp -= 4; M32(esp) = v_; }
  /* 0054f4ed call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f4f3u; SAVEALL; call_ind(c, t_); RETCHK(0x54f4f3u, 0x54f4edu); LOADALL; }
  /* 0054f4f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054f4f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f4f6 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0054f500(CPU *c) {
  NATIVE_HOOK(0x54f500u) REGS; LOADALL;
L_0054f500:;
  /* 0054f500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f503 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f504 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f505 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f507 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f509 push 0x655800 */ { u32 v_ = 0x655800u; esp -= 4; M32(esp) = v_; }
  /* 0054f50e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f510 call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f516u; SAVEALL; call_ind(c, t_); RETCHK(0x54f516u, 0x54f510u); LOADALL; }
  /* 0054f516 mov edi, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edi = (u32)(M32(m_)); }
  /* 0054f519 cmp edi, 0xff */ { u32 a_ = edi, b_ = 0xffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f51f jg 0x54f525 */ if (!(ZF_|LT_)) goto L_0054f525;
  /* 0054f521 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f523 jge 0x54f52a */ if (!LT_) goto L_0054f52a;
L_0054f525:;
  /* 0054f525 mov edi, 0x80 */ { edi = (u32)(0x80u); }
L_0054f52a:;
  /* 0054f52a mov eax, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); eax = (u32)(M32(m_)); }
  /* 0054f52f mov ecx, dword ptr [eax + 0x108] */ { const u32 m_ = (u32)(eax + 0x108u); ecx = (u32)(M32(m_)); }
  /* 0054f535 push -0x14 */ { u32 v_ = 0xffffffecu; esp -= 4; M32(esp) = v_; }
  /* 0054f537 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f538 call dword ptr [0x62e570] */ { const u32 m_ = (u32)(0x62e570u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f53eu; SAVEALL; call_ind(c, t_); RETCHK(0x54f53eu, 0x54f538u); LOADALL; }
  /* 0054f53e mov edx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); edx = (u32)(M32(m_)); }
  /* 0054f544 xor eax, 0x80000 */ { u32 a_ = eax, b_ = 0x80000u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054f549 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f54a mov eax, dword ptr [edx + 0x108] */ { const u32 m_ = (u32)(edx + 0x108u); eax = (u32)(M32(m_)); }
  /* 0054f550 push -0x14 */ { u32 v_ = 0xffffffecu; esp -= 4; M32(esp) = v_; }
  /* 0054f552 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f553 call dword ptr [0x62e540] */ { const u32 m_ = (u32)(0x62e540u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f559u; SAVEALL; call_ind(c, t_); RETCHK(0x54f559u, 0x54f553u); LOADALL; }
  /* 0054f559 push 0x6557f4 */ { u32 v_ = 0x6557f4u; esp -= 4; M32(esp) = v_; }
  /* 0054f55e call dword ptr [0x62e198] */ { const u32 m_ = (u32)(0x62e198u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f564u; SAVEALL; call_ind(c, t_); RETCHK(0x54f564u, 0x54f55eu); LOADALL; }
  /* 0054f564 mov esi, eax */ { esi = (u32)(eax); }
  /* 0054f566 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f568 je 0x54f595 */ if (ZF_) goto L_0054f595;
  /* 0054f56a push 0x6557d8 */ { u32 v_ = 0x6557d8u; esp -= 4; M32(esp) = v_; }
  /* 0054f56f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f570 call dword ptr [0x62e19c] */ { const u32 m_ = (u32)(0x62e19cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f576u; SAVEALL; call_ind(c, t_); RETCHK(0x54f576u, 0x54f570u); LOADALL; }
  /* 0054f576 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f578 je 0x54f58e */ if (ZF_) goto L_0054f58e;
  /* 0054f57a mov ecx, dword ptr [0x7a6e14] */ { const u32 m_ = (u32)(0x7a6e14u); ecx = (u32)(M32(m_)); }
  /* 0054f580 mov edx, dword ptr [ecx + 0x108] */ { const u32 m_ = (u32)(ecx + 0x108u); edx = (u32)(M32(m_)); }
  /* 0054f586 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0054f588 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f589 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f58b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f58c call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x54f58eu; SAVEALL; call_ind(c, t_); RETCHK(0x54f58eu, 0x54f58cu); LOADALL; }
L_0054f58e:;
  /* 0054f58e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f58f call dword ptr [0x62e194] */ { const u32 m_ = (u32)(0x62e194u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f595u; SAVEALL; call_ind(c, t_); RETCHK(0x54f595u, 0x54f58fu); LOADALL; }
L_0054f595:;
  /* 0054f595 push 0x6557c4 */ { u32 v_ = 0x6557c4u; esp -= 4; M32(esp) = v_; }
  /* 0054f59a call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f5a0u; SAVEALL; call_ind(c, t_); RETCHK(0x54f5a0u, 0x54f59au); LOADALL; }
  /* 0054f5a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054f5a1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054f5a2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f5a3 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0054f5b0(CPU *c) {
  NATIVE_HOOK(0x54f5b0u) REGS; LOADALL;
L_0054f5b0:;
  /* 0054f5b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f5b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f5b3 push 0x6557b4 */ { u32 v_ = 0x6557b4u; esp -= 4; M32(esp) = v_; }
  /* 0054f5b8 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f5beu; SAVEALL; call_ind(c, t_); RETCHK(0x54f5beu, 0x54f5b8u); LOADALL; }
  /* 0054f5be mov eax, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); eax = (u32)(M32(m_)); }
  /* 0054f5c1 push 0x6557a8 */ { u32 v_ = 0x6557a8u; esp -= 4; M32(esp) = v_; }
  /* 0054f5c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f5c7 call dword ptr [0x62e458] */ { const u32 m_ = (u32)(0x62e458u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f5cdu; SAVEALL; call_ind(c, t_); RETCHK(0x54f5cdu, 0x54f5c7u); LOADALL; }
  /* 0054f5cd mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054f5cf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f5d0 ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0054f5e0(CPU *c) {
  NATIVE_HOOK(0x54f5e0u) REGS; LOADALL;
L_0054f5e0:;
  /* 0054f5e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f5e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f5e3 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f5e9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054f5ee push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f5ef mov esi, dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); esi = (u32)(M32(m_)); }
  /* 0054f5f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f5f6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0054f5f9 push 0x655798 */ { u32 v_ = 0x655798u; esp -= 4; M32(esp) = v_; }
  /* 0054f5fe call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54f600u; SAVEALL; call_ind(c, t_); RETCHK(0x54f600u, 0x54f5feu); LOADALL; }
  /* 0054f600 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0054f602 mov ecx, 0x41 */ { ecx = (u32)(0x41u); }
  /* 0054f607 lea edi, [ebp - 0x108] */ edi = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054f60d rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0054f60f mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054f612 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054f615 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f616 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f617 lea edx, [ebp - 0x108] */ edx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054f61d push 0x655774 */ { u32 v_ = 0x655774u; esp -= 4; M32(esp) = v_; }
  /* 0054f622 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f623 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x54f628u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x54f623u); RETCHK(0x54f628u, 0x54f623u); LOADALL;
  /* 0054f628 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f62b lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0054f631 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f632 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x54f634u; SAVEALL; call_ind(c, t_); RETCHK(0x54f634u, 0x54f632u); LOADALL; }
  /* 0054f634 mov ecx, dword ptr [ebp + 0x20] */ { const u32 m_ = (u32)(ebp + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0054f637 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f638 call dword ptr [0x62e118] */ { const u32 m_ = (u32)(0x62e118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f63eu; SAVEALL; call_ind(c, t_); RETCHK(0x54f63eu, 0x54f638u); LOADALL; }
  /* 0054f63e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054f641 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054f642 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054f644 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054f645 call 0x61af31 */ esp -= 4; M32(esp) = 0x54f64au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54f645u); RETCHK(0x54f64au, 0x54f645u); LOADALL;
  /* 0054f64a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054f64c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f64d ret 0x1c */ c->popped = M32(esp); esp += 32u; SAVEALL; return;
}

void F_0054f650(CPU *c) {
  NATIVE_HOOK(0x54f650u) REGS; LOADALL;
L_0054f650:;
  /* 0054f650 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f651 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f653 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f656 push 0x65575c */ { u32 v_ = 0x65575cu; esp -= 4; M32(esp) = v_; }
  /* 0054f65b call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f661u; SAVEALL; call_ind(c, t_); RETCHK(0x54f661u, 0x54f65bu); LOADALL; }
  /* 0054f661 mov edx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); edx = (u32)(M32(m_)); }
  /* 0054f664 mov cl, byte ptr [0x7a6e38] */ { const u32 m_ = (u32)(0x7a6e38u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054f66a mov eax, dword ptr [0x688974] */ { const u32 m_ = (u32)(0x688974u); eax = (u32)(M32(m_)); }
  /* 0054f66f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f670 mov byte ptr [ebp - 4], cl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0054f673 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0054f676 call 0x54fa20 */ esp -= 4; M32(esp) = 0x54f67bu; SAVEALL; F_0054fa20(c); ABI_CHECK(0x54fa20u, 0x54f676u); RETCHK(0x54f67bu, 0x54f676u); LOADALL;
  /* 0054f67b mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0054f67e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0054f681 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f682 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f683 call 0x54fc00 */ esp -= 4; M32(esp) = 0x54f688u; SAVEALL; F_0054fc00(c); ABI_CHECK(0x54fc00u, 0x54f683u); RETCHK(0x54f688u, 0x54f683u); LOADALL;
  /* 0054f688 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f68b mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054f68d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054f68f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f690 ret 0x18 */ c->popped = M32(esp); esp += 28u; SAVEALL; return;
}

void F_0054f6a0(CPU *c) {
  NATIVE_HOOK(0x54f6a0u) REGS; LOADALL;
L_0054f6a0:;
  /* 0054f6a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f6a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f6a3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054f6a5 push 0x61c52e */ { u32 v_ = 0x61c52eu; esp -= 4; M32(esp) = v_; }
  /* 0054f6aa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054f6b0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f6b1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054f6b8 sub esp, 0x138 */ { u32 a_ = esp, b_ = 0x138u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f6be mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054f6c3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f6c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054f6c5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054f6c6 mov edi, dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); edi = (u32)(M32(m_)); }
  /* 0054f6cc push 0x655744 */ { u32 v_ = 0x655744u; esp -= 4; M32(esp) = v_; }
  /* 0054f6d1 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0054f6d4 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54f6d6u; SAVEALL; call_ind(c, t_); RETCHK(0x54f6d6u, 0x54f6d4u); LOADALL; }
  /* 0054f6d6 mov ecx, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0054f6d9 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054f6db push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f6dc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f6dd push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0054f6e2 lea eax, [ebp - 0x12c] */ eax = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0054f6e8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f6e9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054f6eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f6ec push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f6ed push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f6ee call dword ptr [0x62e170] */ { const u32 m_ = (u32)(0x62e170u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f6f4u; SAVEALL; call_ind(c, t_); RETCHK(0x54f6f4u, 0x54f6eeu); LOADALL; }
  /* 0054f6f4 mov esi, 0x6555a4 */ { esi = (u32)(0x6555a4u); }
  /* 0054f6f9 lea eax, [ebp - 0x12c] */ eax = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0054f6ff mov dword ptr [ebp - 0x144], esi */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); M32(m_) = (u32)(esi); }
  /* 0054f705 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0054f708:;
  /* 0054f708 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054f70a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054f70b cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054f70d jne 0x54f708 */ if (!ZF_) goto L_0054f708;
  /* 0054f70f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054f711 lea edx, [ebp - 0x12c] */ edx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 0054f717 mov dword ptr [ebp - 0x13c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffec4u); M32(m_) = (u32)(eax); }
  /* 0054f71d mov dword ptr [ebp - 0x140], edx */ { const u32 m_ = (u32)(ebp + 0xfffffec0u); M32(m_) = (u32)(edx); }
  /* 0054f723 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0054f726 mov dword ptr [ebp - 0x138], esi */ { const u32 m_ = (u32)(ebp + 0xfffffec8u); M32(m_) = (u32)(esi); }
  /* 0054f72c mov dword ptr [ebp - 0x130], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M32(m_) = (u32)(ebx); }
  /* 0054f732 mov dword ptr [ebp - 0x134], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); M32(m_) = (u32)(ebx); }
  /* 0054f738 lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f73e mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f740 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f746 call 0x54e880 */ esp -= 4; M32(esp) = 0x54f74bu; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f746u); RETCHK(0x54f74bu, 0x54f746u); LOADALL;
  /* 0054f74b mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0054f752 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0054f755 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054f758 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0054f75c mov edx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); edx = (u32)(M32(m_)); }
  /* 0054f762 mov eax, edx */ { eax = (u32)(edx); }
  /* 0054f764 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0054f767:;
  /* 0054f767 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054f769 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054f76a cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054f76c jne 0x54f767 */ if (!ZF_) goto L_0054f767;
  /* 0054f76e sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054f770 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f771 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f772 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f775 call 0x404420 */ esp -= 4; M32(esp) = 0x54f77au; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54f775u); RETCHK(0x54f77au, 0x54f775u); LOADALL;
  /* 0054f77a cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f77e mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0054f781 jae 0x54f786 */ if (!CF_) goto L_0054f786;
  /* 0054f783 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0054f786:;
  /* 0054f786 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f787 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54f789u; SAVEALL; call_ind(c, t_); RETCHK(0x54f789u, 0x54f787u); LOADALL; }
  /* 0054f789 push 0x6437ec */ { u32 v_ = 0x6437ecu; esp -= 4; M32(esp) = v_; }
  /* 0054f78e call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54f790u; SAVEALL; call_ind(c, t_); RETCHK(0x54f790u, 0x54f78eu); LOADALL; }
  /* 0054f790 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0054f793 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0054f795 push 0x655738 */ { u32 v_ = 0x655738u; esp -= 4; M32(esp) = v_; }
  /* 0054f79a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f79b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f79c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f79f call 0x405de0 */ esp -= 4; M32(esp) = 0x54f7a4u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x54f79fu); RETCHK(0x54f7a4u, 0x54f79fu); LOADALL;
  /* 0054f7a4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f7a6 jne 0x54f974 */ if (!ZF_) goto L_0054f974;
  /* 0054f7ac lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f7b2 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f7b4 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f7ba call 0x54e880 */ esp -= 4; M32(esp) = 0x54f7bfu; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f7bau); RETCHK(0x54f7bfu, 0x54f7bau); LOADALL;
  /* 0054f7bf mov edx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); edx = (u32)(M32(m_)); }
  /* 0054f7c5 mov eax, edx */ { eax = (u32)(edx); }
  /* 0054f7c7 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0054f7ca lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0054f7d0:;
  /* 0054f7d0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054f7d2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054f7d3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054f7d5 jne 0x54f7d0 */ if (!ZF_) goto L_0054f7d0;
  /* 0054f7d7 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054f7d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f7da push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f7db lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f7de call 0x404420 */ esp -= 4; M32(esp) = 0x54f7e3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54f7deu); RETCHK(0x54f7e3u, 0x54f7deu); LOADALL;
  /* 0054f7e3 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f7e7 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0054f7ea jae 0x54f7ef */ if (!CF_) goto L_0054f7ef;
  /* 0054f7ec lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_0054f7ef:;
  /* 0054f7ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f7f0 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54f7f2u; SAVEALL; call_ind(c, t_); RETCHK(0x54f7f2u, 0x54f7f0u); LOADALL; }
  /* 0054f7f2 push 0x6437ec */ { u32 v_ = 0x6437ecu; esp -= 4; M32(esp) = v_; }
  /* 0054f7f7 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54f7f9u; SAVEALL; call_ind(c, t_); RETCHK(0x54f7f9u, 0x54f7f7u); LOADALL; }
  /* 0054f7f9 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0054f7fc push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0054f7fe push 0x655730 */ { u32 v_ = 0x655730u; esp -= 4; M32(esp) = v_; }
  /* 0054f803 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f804 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f805 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f808 call 0x405de0 */ esp -= 4; M32(esp) = 0x54f80du; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x54f808u); RETCHK(0x54f80du, 0x54f808u); LOADALL;
  /* 0054f80d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f80f jne 0x54f8a2 */ if (!ZF_) goto L_0054f8a2;
  /* 0054f815 lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f81b mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f81d lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f823 call 0x54e880 */ esp -= 4; M32(esp) = 0x54f828u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f823u); RETCHK(0x54f828u, 0x54f823u); LOADALL;
  /* 0054f828 mov edx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); edx = (u32)(M32(m_)); }
  /* 0054f82e mov eax, edx */ { eax = (u32)(edx); }
  /* 0054f830 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0054f833:;
  /* 0054f833 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054f835 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054f836 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054f838 jne 0x54f833 */ if (!ZF_) goto L_0054f833;
  /* 0054f83a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054f83c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f83d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f83e mov ecx, 0x68a5d4 */ { ecx = (u32)(0x68a5d4u); }
  /* 0054f843 call 0x404420 */ esp -= 4; M32(esp) = 0x54f848u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54f843u); RETCHK(0x54f848u, 0x54f843u); LOADALL;
  /* 0054f848 lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f84e mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f850 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f856 call 0x54e880 */ esp -= 4; M32(esp) = 0x54f85bu; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f856u); RETCHK(0x54f85bu, 0x54f856u); LOADALL;
  /* 0054f85b mov edx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); edx = (u32)(M32(m_)); }
  /* 0054f861 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f862 call 0x5fe92e */ esp -= 4; M32(esp) = 0x54f867u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x54f862u); RETCHK(0x54f867u, 0x54f862u); LOADALL;
  /* 0054f867 mov dword ptr [0x68896c], eax */ { const u32 m_ = (u32)(0x68896cu); M32(m_) = (u32)(eax); }
  /* 0054f86c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f86f lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f875 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f877 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f87d call 0x54e880 */ esp -= 4; M32(esp) = 0x54f882u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f87du); RETCHK(0x54f882u, 0x54f87du); LOADALL;
  /* 0054f882 mov eax, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); eax = (u32)(M32(m_)); }
  /* 0054f888 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f889 call 0x5fe92e */ esp -= 4; M32(esp) = 0x54f88eu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x54f889u); RETCHK(0x54f88eu, 0x54f889u); LOADALL;
  /* 0054f88e mov dword ptr [0x688970], eax */ { const u32 m_ = (u32)(0x688970u); M32(m_) = (u32)(eax); }
  /* 0054f893 mov dword ptr [0x7a6e18], 7 */ { const u32 m_ = (u32)(0x7a6e18u); M32(m_) = (u32)(0x7u); }
  /* 0054f89d jmp 0x54f971 */ goto L_0054f971;
L_0054f8a2:;
  /* 0054f8a2 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 0054f8a5 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0054f8a7 push 0x655724 */ { u32 v_ = 0x655724u; esp -= 4; M32(esp) = v_; }
  /* 0054f8ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f8ad push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054f8ae lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0054f8b1 call 0x405de0 */ esp -= 4; M32(esp) = 0x54f8b6u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x54f8b1u); RETCHK(0x54f8b6u, 0x54f8b1u); LOADALL;
  /* 0054f8b6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054f8b8 jne 0x54f974 */ if (!ZF_) goto L_0054f974;
  /* 0054f8be lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f8c4 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f8c6 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f8cc call 0x54e880 */ esp -= 4; M32(esp) = 0x54f8d1u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f8ccu); RETCHK(0x54f8d1u, 0x54f8ccu); LOADALL;
  /* 0054f8d1 mov edx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); edx = (u32)(M32(m_)); }
  /* 0054f8d7 mov eax, edx */ { eax = (u32)(edx); }
  /* 0054f8d9 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0054f8dc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0054f8e0:;
  /* 0054f8e0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054f8e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054f8e3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054f8e5 jne 0x54f8e0 */ if (!ZF_) goto L_0054f8e0;
  /* 0054f8e7 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054f8e9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f8ea push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f8eb mov ecx, 0x68a5d4 */ { ecx = (u32)(0x68a5d4u); }
  /* 0054f8f0 call 0x404420 */ esp -= 4; M32(esp) = 0x54f8f5u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x54f8f0u); RETCHK(0x54f8f5u, 0x54f8f0u); LOADALL;
  /* 0054f8f5 lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f8fb mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f8fd lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f903 call 0x54e880 */ esp -= 4; M32(esp) = 0x54f908u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f903u); RETCHK(0x54f908u, 0x54f903u); LOADALL;
  /* 0054f908 mov edx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); edx = (u32)(M32(m_)); }
  /* 0054f90e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f90f call 0x5fe92e */ esp -= 4; M32(esp) = 0x54f914u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x54f90fu); RETCHK(0x54f914u, 0x54f90fu); LOADALL;
  /* 0054f914 mov dword ptr [0x68896c], eax */ { const u32 m_ = (u32)(0x68896cu); M32(m_) = (u32)(eax); }
  /* 0054f919 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f91c lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f922 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f924 lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f92a call 0x54e880 */ esp -= 4; M32(esp) = 0x54f92fu; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f92au); RETCHK(0x54f92fu, 0x54f92au); LOADALL;
  /* 0054f92f mov eax, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); eax = (u32)(M32(m_)); }
  /* 0054f935 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054f936 call 0x5fe92e */ esp -= 4; M32(esp) = 0x54f93bu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x54f936u); RETCHK(0x54f93bu, 0x54f936u); LOADALL;
  /* 0054f93b mov dword ptr [0x688970], eax */ { const u32 m_ = (u32)(0x688970u); M32(m_) = (u32)(eax); }
  /* 0054f940 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054f943 lea eax, [ebp - 0x138] */ eax = (u32)((u32)(ebp + 0xfffffec8u));
  /* 0054f949 mov dl, 0x2f */ { edx = (edx & 0xffffff00u) | ((u32)(0x2fu) & 0xffu); }
  /* 0054f94b lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 0054f951 call 0x54e880 */ esp -= 4; M32(esp) = 0x54f956u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x54f951u); RETCHK(0x54f956u, 0x54f951u); LOADALL;
  /* 0054f956 mov ecx, dword ptr [ebp - 0x134] */ { const u32 m_ = (u32)(ebp + 0xfffffeccu); ecx = (u32)(M32(m_)); }
  /* 0054f95c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054f95d call 0x5fe92e */ esp -= 4; M32(esp) = 0x54f962u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x54f95du); RETCHK(0x54f962u, 0x54f95du); LOADALL;
  /* 0054f962 mov dword ptr [0x688974], eax */ { const u32 m_ = (u32)(0x688974u); M32(m_) = (u32)(eax); }
  /* 0054f967 mov dword ptr [0x7a6e18], 0xf */ { const u32 m_ = (u32)(0x7a6e18u); M32(m_) = (u32)(0xfu); }
L_0054f971:;
  /* 0054f971 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f974:;
  /* 0054f974 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054f978 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054f979 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054f97a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054f97b jb 0x54f989 */ if (CF_) goto L_0054f989;
  /* 0054f97d mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 0054f980 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054f981 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54f986u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54f981u); RETCHK(0x54f986u, 0x54f981u); LOADALL;
  /* 0054f986 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054f989:;
  /* 0054f989 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054f98c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054f993 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0054f996 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054f998 call 0x61af31 */ esp -= 4; M32(esp) = 0x54f99du; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54f998u); RETCHK(0x54f99du, 0x54f998u); LOADALL;
  /* 0054f99d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054f99f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f9a0 ret 0x14 */ c->popped = M32(esp); esp += 24u; SAVEALL; return;
}

void F_0054f9b0(CPU *c) {
  NATIVE_HOOK(0x54f9b0u) REGS; LOADALL;
L_0054f9b0:;
  /* 0054f9b0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f9b2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f9b4 push 0x655718 */ { u32 v_ = 0x655718u; esp -= 4; M32(esp) = v_; }
  /* 0054f9b9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f9bb call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f9c1u; SAVEALL; call_ind(c, t_); RETCHK(0x54f9c1u, 0x54f9bbu); LOADALL; }
  /* 0054f9c1 push 0x655708 */ { u32 v_ = 0x655708u; esp -= 4; M32(esp) = v_; }
  /* 0054f9c6 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f9ccu; SAVEALL; call_ind(c, t_); RETCHK(0x54f9ccu, 0x54f9c6u); LOADALL; }
  /* 0054f9cc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054f9d0(CPU *c) {
  NATIVE_HOOK(0x54f9d0u) REGS; LOADALL;
L_0054f9d0:;
  /* 0054f9d0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f9d2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f9d4 push 0x6556fc */ { u32 v_ = 0x6556fcu; esp -= 4; M32(esp) = v_; }
  /* 0054f9d9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0054f9db call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f9e1u; SAVEALL; call_ind(c, t_); RETCHK(0x54f9e1u, 0x54f9dbu); LOADALL; }
  /* 0054f9e1 push 0x6556ec */ { u32 v_ = 0x6556ecu; esp -= 4; M32(esp) = v_; }
  /* 0054f9e6 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f9ecu; SAVEALL; call_ind(c, t_); RETCHK(0x54f9ecu, 0x54f9e6u); LOADALL; }
  /* 0054f9ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054f9f0(CPU *c) {
  NATIVE_HOOK(0x54f9f0u) REGS; LOADALL;
L_0054f9f0:;
  /* 0054f9f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054f9f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054f9f3 push 0x6556d8 */ { u32 v_ = 0x6556d8u; esp -= 4; M32(esp) = v_; }
  /* 0054f9f8 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54f9feu; SAVEALL; call_ind(c, t_); RETCHK(0x54f9feu, 0x54f9f8u); LOADALL; }
  /* 0054f9fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054f9ff jmp dword ptr [0x62e118] */ { const u32 m_ = (u32)(0x62e118u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0054fa10(CPU *c) {
  NATIVE_HOOK(0x54fa10u) REGS; LOADALL;
L_0054fa10:;
  /* 0054fa10 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0054fa12 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054fa20(CPU *c) {
  NATIVE_HOOK(0x54fa20u) REGS; LOADALL;
L_0054fa20:;
  /* 0054fa20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054fa21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054fa23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054fa25 push 0x620f41 */ { u32 v_ = 0x620f41u; esp -= 4; M32(esp) = v_; }
  /* 0054fa2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054fa30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fa31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054fa38 sub esp, 0x30c */ { u32 a_ = esp, b_ = 0x30cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054fa3e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0054fa43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054fa44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fa45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054fa46 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0054fa48 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0054fa4b mov bl, cl */ { ebx = (ebx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 0054fa4d mov dword ptr [ebp - 0x314], edi */ { const u32 m_ = (u32)(ebp + 0xfffffcecu); M32(m_) = (u32)(edi); }
  /* 0054fa53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054fa54 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0054fa57 call 0x4019a0 */ esp -= 4; M32(esp) = 0x54fa5cu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x54fa57u); RETCHK(0x54fa5cu, 0x54fa57u); LOADALL;
  /* 0054fa5c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054fa5f mov esi, eax */ { esi = (u32)(eax); }
  /* 0054fa61 call 0x550820 */ esp -= 4; M32(esp) = 0x54fa66u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x54fa61u); RETCHK(0x54fa66u, 0x54fa61u); LOADALL;
  /* 0054fa66 cmp dword ptr [eax + 0xd14], 0x10 */ { const u32 m_ = (u32)(eax + 0xd14u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fa6d mov ecx, dword ptr [eax + 0xd10] */ { const u32 m_ = (u32)(eax + 0xd10u); ecx = (u32)(M32(m_)); }
  /* 0054fa73 jb 0x54fa7d */ if (CF_) goto L_0054fa7d;
  /* 0054fa75 mov eax, dword ptr [eax + 0xd00] */ { const u32 m_ = (u32)(eax + 0xd00u); eax = (u32)(M32(m_)); }
  /* 0054fa7b jmp 0x54fa82 */ goto L_0054fa82;
L_0054fa7d:;
  /* 0054fa7d add eax, 0xd00 */ { u32 a_ = eax, b_ = 0xd00u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0054fa82:;
  /* 0054fa82 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 0054fa87 lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 0054fa8d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054fa8e inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0054fa8f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fa90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fa91 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054fa92 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054fa93 call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fa99u; SAVEALL; call_ind(c, t_); RETCHK(0x54fa99u, 0x54fa93u); LOADALL; }
  /* 0054fa99 cmp bl, 2 */ { u32 a_ = (ebx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fa9c lea edi, [ebp - 0x314] */ edi = (u32)((u32)(ebp + 0xfffffcecu));
  /* 0054faa2 jne 0x54fb1a */ if (!ZF_) goto L_0054fb1a;
  /* 0054faa4 mov ebx, 0x6556c4 */ { ebx = (u32)(0x6556c4u); }
  /* 0054faa9 call 0x54e580 */ esp -= 4; M32(esp) = 0x54faaeu; SAVEALL; F_0054e580(c); ABI_CHECK(0x54e580u, 0x54faa9u); RETCHK(0x54faaeu, 0x54faa9u); LOADALL;
  /* 0054faae mov eax, dword ptr [esi + 0xb14] */ { const u32 m_ = (u32)(esi + 0xb14u); eax = (u32)(M32(m_)); }
  /* 0054fab4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fab5 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054fab7 call 0x4020c0 */ esp -= 4; M32(esp) = 0x54fabcu; SAVEALL; F_004020c0(c); ABI_CHECK(0x4020c0u, 0x54fab7u); RETCHK(0x54fabcu, 0x54fab7u); LOADALL;
  /* 0054fabc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fabd lea eax, [ebp - 0x210] */ eax = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 0054fac3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fac4 push 0x6556b0 */ { u32 v_ = 0x6556b0u; esp -= 4; M32(esp) = v_; }
  /* 0054fac9 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0054facf push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 0054fad4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fad5 call 0x5feb84 */ esp -= 4; M32(esp) = 0x54fadau; SAVEALL; F_005feb84(c); ABI_CHECK(0x5feb84u, 0x54fad5u); RETCHK(0x54fadau, 0x54fad5u); LOADALL;
  /* 0054fada add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054fadd lea edx, [ebp - 0x318] */ edx = (u32)((u32)(ebp + 0xfffffce8u));
  /* 0054fae3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054fae4 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0054faea call 0x54e4c0 */ esp -= 4; M32(esp) = 0x54faefu; SAVEALL; F_0054e4c0(c); ABI_CHECK(0x54e4c0u, 0x54faeau); RETCHK(0x54faefu, 0x54faeau); LOADALL;
  /* 0054faef lea eax, [ebp - 0x318] */ eax = (u32)((u32)(ebp + 0xfffffce8u));
  /* 0054faf5 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054faf9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0054fafa:;
  /* 0054fafa lea edi, [ebp - 0x314] */ edi = (u32)((u32)(ebp + 0xfffffcecu));
  /* 0054fb00 call 0x54e620 */ esp -= 4; M32(esp) = 0x54fb05u; SAVEALL; F_0054e620(c); ABI_CHECK(0x54e620u, 0x54fb00u); RETCHK(0x54fb05u, 0x54fb00u); LOADALL;
  /* 0054fb05 mov esi, dword ptr [ebp - 0x318] */ { const u32 m_ = (u32)(ebp + 0xfffffce8u); esi = (u32)(M32(m_)); }
  /* 0054fb0b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fb0d je 0x54fb98 */ if (ZF_) goto L_0054fb98;
  /* 0054fb13 call 0x54e820 */ esp -= 4; M32(esp) = 0x54fb18u; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54fb13u); RETCHK(0x54fb18u, 0x54fb13u); LOADALL;
  /* 0054fb18 jmp 0x54fb98 */ goto L_0054fb98;
L_0054fb1a:;
  /* 0054fb1a cmp bl, 6 */ { u32 a_ = (ebx & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fb1d jne 0x54fb8e */ if (!ZF_) goto L_0054fb8e;
  /* 0054fb1f mov ebx, 0x655698 */ { ebx = (u32)(0x655698u); }
  /* 0054fb24 call 0x54e580 */ esp -= 4; M32(esp) = 0x54fb29u; SAVEALL; F_0054e580(c); ABI_CHECK(0x54e580u, 0x54fb24u); RETCHK(0x54fb29u, 0x54fb24u); LOADALL;
  /* 0054fb29 lea edx, [ebp - 0x310] */ edx = (u32)((u32)(ebp + 0xfffffcf0u));
  /* 0054fb2f mov eax, esi */ { eax = (u32)(esi); }
  /* 0054fb31 call 0x4020d0 */ esp -= 4; M32(esp) = 0x54fb36u; SAVEALL; F_004020d0(c); ABI_CHECK(0x4020d0u, 0x54fb31u); RETCHK(0x54fb36u, 0x54fb31u); LOADALL;
  /* 0054fb36 mov ecx, dword ptr [ebp - 0x310] */ { const u32 m_ = (u32)(ebp + 0xfffffcf0u); ecx = (u32)(M32(m_)); }
  /* 0054fb3c mov eax, dword ptr [esi + 0xb14] */ { const u32 m_ = (u32)(esi + 0xb14u); eax = (u32)(M32(m_)); }
  /* 0054fb42 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fb43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fb44 mov eax, esi */ { eax = (u32)(esi); }
  /* 0054fb46 call 0x4020c0 */ esp -= 4; M32(esp) = 0x54fb4bu; SAVEALL; F_004020c0(c); ABI_CHECK(0x4020c0u, 0x54fb46u); RETCHK(0x54fb4bu, 0x54fb46u); LOADALL;
  /* 0054fb4b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fb4c lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 0054fb52 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054fb53 push 0x65567c */ { u32 v_ = 0x65567cu; esp -= 4; M32(esp) = v_; }
  /* 0054fb58 lea eax, [ebp - 0x110] */ eax = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0054fb5e push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 0054fb63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fb64 call 0x5feb84 */ esp -= 4; M32(esp) = 0x54fb69u; SAVEALL; F_005feb84(c); ABI_CHECK(0x5feb84u, 0x54fb64u); RETCHK(0x54fb69u, 0x54fb64u); LOADALL;
  /* 0054fb69 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054fb6c lea ecx, [ebp - 0x318] */ ecx = (u32)((u32)(ebp + 0xfffffce8u));
  /* 0054fb72 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fb73 lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0054fb79 call 0x54e4c0 */ esp -= 4; M32(esp) = 0x54fb7eu; SAVEALL; F_0054e4c0(c); ABI_CHECK(0x54e4c0u, 0x54fb79u); RETCHK(0x54fb7eu, 0x54fb79u); LOADALL;
  /* 0054fb7e lea edx, [ebp - 0x318] */ edx = (u32)((u32)(ebp + 0xfffffce8u));
  /* 0054fb84 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0054fb88 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054fb89 jmp 0x54fafa */ goto L_0054fafa;
L_0054fb8e:;
  /* 0054fb8e mov ebx, 0x655664 */ { ebx = (u32)(0x655664u); }
  /* 0054fb93 call 0x54e580 */ esp -= 4; M32(esp) = 0x54fb98u; SAVEALL; F_0054e580(c); ABI_CHECK(0x54e580u, 0x54fb93u); RETCHK(0x54fb98u, 0x54fb93u); LOADALL;
L_0054fb98:;
  /* 0054fb98 mov esi, dword ptr [ebp - 0x314] */ { const u32 m_ = (u32)(ebp + 0xfffffcecu); esi = (u32)(M32(m_)); }
  /* 0054fb9e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fba0 je 0x54fba6 */ if (ZF_) goto L_0054fba6;
  /* 0054fba2 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054fba4 jmp 0x54fba8 */ goto L_0054fba8;
L_0054fba6:;
  /* 0054fba6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054fba8:;
  /* 0054fba8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fba9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0054fbac push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fbad call dword ptr [0x62e458] */ { const u32 m_ = (u32)(0x62e458u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fbb3u; SAVEALL; call_ind(c, t_); RETCHK(0x54fbb3u, 0x54fbadu); LOADALL; }
  /* 0054fbb3 mov edi, dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); edi = (u32)(M32(m_)); }
  /* 0054fbb9 push 0x65575c */ { u32 v_ = 0x65575cu; esp -= 4; M32(esp) = v_; }
  /* 0054fbbe call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54fbc0u; SAVEALL; call_ind(c, t_); RETCHK(0x54fbc0u, 0x54fbbeu); LOADALL; }
  /* 0054fbc0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fbc2 je 0x54fbc8 */ if (ZF_) goto L_0054fbc8;
  /* 0054fbc4 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054fbc6 jmp 0x54fbca */ goto L_0054fbca;
L_0054fbc8:;
  /* 0054fbc8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054fbca:;
  /* 0054fbca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fbcb call dword ptr [0x62e118] */ { const u32 m_ = (u32)(0x62e118u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fbd1u; SAVEALL; call_ind(c, t_); RETCHK(0x54fbd1u, 0x54fbcbu); LOADALL; }
  /* 0054fbd1 push 0x6437ec */ { u32 v_ = 0x6437ecu; esp -= 4; M32(esp) = v_; }
  /* 0054fbd6 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54fbd8u; SAVEALL; call_ind(c, t_); RETCHK(0x54fbd8u, 0x54fbd6u); LOADALL; }
  /* 0054fbd8 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fbda je 0x54fbe1 */ if (ZF_) goto L_0054fbe1;
  /* 0054fbdc call 0x54e820 */ esp -= 4; M32(esp) = 0x54fbe1u; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54fbdcu); RETCHK(0x54fbe1u, 0x54fbdcu); LOADALL;
L_0054fbe1:;
  /* 0054fbe1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054fbe4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054fbe5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054fbe6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054fbed mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0054fbf0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054fbf1 call 0x61af31 */ esp -= 4; M32(esp) = 0x54fbf6u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x54fbf1u); RETCHK(0x54fbf6u, 0x54fbf1u); LOADALL;
  /* 0054fbf6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054fbf8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054fbf9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054fc00(CPU *c) {
  NATIVE_HOOK(0x54fc00u) REGS; LOADALL;
L_0054fc00:;
  /* 0054fc00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054fc01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054fc03 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054fc09 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054fc0b push 0x61b4a8 */ { u32 v_ = 0x61b4a8u; esp -= 4; M32(esp) = v_; }
  /* 0054fc10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fc11 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054fc14 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054fc1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054fc1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fc1d xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0054fc1f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0054fc20 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0054fc23 cmp al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fc25 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0054fc28 jne 0x54fc31 */ if (!ZF_) goto L_0054fc31;
  /* 0054fc2a mov ebx, 0x65565c */ { ebx = (u32)(0x65565cu); }
  /* 0054fc2f jmp 0x54fc76 */ goto L_0054fc76;
L_0054fc31:;
  /* 0054fc31 cmp al, 2 */ { u32 a_ = (eax & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fc33 jne 0x54fc3c */ if (!ZF_) goto L_0054fc3c;
  /* 0054fc35 mov ebx, 0x655654 */ { ebx = (u32)(0x655654u); }
  /* 0054fc3a jmp 0x54fc76 */ goto L_0054fc76;
L_0054fc3c:;
  /* 0054fc3c cmp al, 3 */ { u32 a_ = (eax & 0xffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fc3e jne 0x54fc47 */ if (!ZF_) goto L_0054fc47;
  /* 0054fc40 mov ebx, 0x65564c */ { ebx = (u32)(0x65564cu); }
  /* 0054fc45 jmp 0x54fc76 */ goto L_0054fc76;
L_0054fc47:;
  /* 0054fc47 cmp al, 4 */ { u32 a_ = (eax & 0xffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fc49 jne 0x54fc52 */ if (!ZF_) goto L_0054fc52;
  /* 0054fc4b mov ebx, 0x655640 */ { ebx = (u32)(0x655640u); }
  /* 0054fc50 jmp 0x54fc76 */ goto L_0054fc76;
L_0054fc52:;
  /* 0054fc52 cmp al, 5 */ { u32 a_ = (eax & 0xffu), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fc54 jne 0x54fc5d */ if (!ZF_) goto L_0054fc5d;
  /* 0054fc56 mov ebx, 0x655634 */ { ebx = (u32)(0x655634u); }
  /* 0054fc5b jmp 0x54fc76 */ goto L_0054fc76;
L_0054fc5d:;
  /* 0054fc5d cmp al, 6 */ { u32 a_ = (eax & 0xffu), b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fc5f jne 0x54fc68 */ if (!ZF_) goto L_0054fc68;
  /* 0054fc61 mov ebx, 0x655628 */ { ebx = (u32)(0x655628u); }
  /* 0054fc66 jmp 0x54fc76 */ goto L_0054fc76;
L_0054fc68:;
  /* 0054fc68 cmp al, 7 */ { u32 a_ = (eax & 0xffu), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0054fc6a mov ebx, 0x65561c */ { ebx = (u32)(0x65561cu); }
  /* 0054fc6f je 0x54fc76 */ if (ZF_) goto L_0054fc76;
  /* 0054fc71 mov ebx, 0x655610 */ { ebx = (u32)(0x655610u); }
L_0054fc76:;
  /* 0054fc76 lea edi, [ebp + 8] */ edi = (u32)((u32)(ebp + 0x8u));
  /* 0054fc79 call 0x54e580 */ esp -= 4; M32(esp) = 0x54fc7eu; SAVEALL; F_0054e580(c); ABI_CHECK(0x54e580u, 0x54fc79u); RETCHK(0x54fc7eu, 0x54fc79u); LOADALL;
  /* 0054fc7e mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0054fc81 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fc83 je 0x54fc89 */ if (ZF_) goto L_0054fc89;
  /* 0054fc85 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0054fc87 jmp 0x54fc8b */ goto L_0054fc8b;
L_0054fc89:;
  /* 0054fc89 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054fc8b:;
  /* 0054fc8b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fc8c mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054fc8f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fc90 call dword ptr [0x62e458] */ { const u32 m_ = (u32)(0x62e458u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fc96u; SAVEALL; call_ind(c, t_); RETCHK(0x54fc96u, 0x54fc90u); LOADALL; }
  /* 0054fc96 cmp edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fc98 je 0x54fca1 */ if (ZF_) goto L_0054fca1;
  /* 0054fc9a mov esi, edi */ { esi = (u32)(edi); }
  /* 0054fc9c call 0x54e820 */ esp -= 4; M32(esp) = 0x54fca1u; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54fc9cu); RETCHK(0x54fca1u, 0x54fc9cu); LOADALL;
L_0054fca1:;
  /* 0054fca1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0054fca4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054fca5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054fca6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0054fcad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0054fcae mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0054fcb0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0054fcb1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054fcc0(CPU *c) {
  NATIVE_HOOK(0x54fcc0u) REGS; LOADALL;
L_0054fcc0:;
  /* 0054fcc0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fcc1 call 0x54efd0 */ esp -= 4; M32(esp) = 0x54fcc6u; SAVEALL; F_0054efd0(c); ABI_CHECK(0x54efd0u, 0x54fcc1u); RETCHK(0x54fcc6u, 0x54fcc1u); LOADALL;
  /* 0054fcc6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054fcc8 mov byte ptr [esi + 0xe4], al */ { const u32 m_ = (u32)(esi + 0xe4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0054fcce je 0x54fce3 */ if (ZF_) goto L_0054fce3;
  /* 0054fcd0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054fcd2 mov ecx, dword ptr [eax + 0x90] */ { const u32 m_ = (u32)(eax + 0x90u); ecx = (u32)(M32(m_)); }
  /* 0054fcd8 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fcda jne 0x54fce3 */ if (!ZF_) goto L_0054fce3;
  /* 0054fcdc mov byte ptr [esi + 0xe5], 1 */ { const u32 m_ = (u32)(esi + 0xe5u); M8(m_) = (u8)(0x1u); }
L_0054fce3:;
  /* 0054fce3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0054fcf0(CPU *c) {
  NATIVE_HOOK(0x54fcf0u) REGS; LOADALL;
L_0054fcf0:;
  /* 0054fcf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0054fcf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0054fcf3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0054fcf5 push 0x61b698 */ { u32 v_ = 0x61b698u; esp -= 4; M32(esp) = v_; }
  /* 0054fcfa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0054fd00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fd01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0054fd08 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0054fd0b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054fd0e mov dl, byte ptr [ecx + 0xe4] */ { const u32 m_ = (u32)(ecx + 0xe4u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0054fd14 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0054fd16 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0054fd19 je 0x55001d */ if (ZF_) goto L_0055001d;
  /* 0054fd1f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0054fd20 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054fd22 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fd24 je 0x55001c */ if (ZF_) goto L_0055001c;
  /* 0054fd2a mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0054fd2d mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0054fd30 jle 0x54ffd6 */ if ((ZF_|LT_)) goto L_0054ffd6;
  /* 0054fd36 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054fd39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fd3a mov dword ptr [ebp + 0xc], edx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(edx); }
  /* 0054fd3d mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0054fd40 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0054fd41:;
  /* 0054fd41 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0054fd44 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fd45 lea ebx, [ebp - 0x10] */ ebx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0054fd48 call 0x54e440 */ esp -= 4; M32(esp) = 0x54fd4du; SAVEALL; F_0054e440(c); ABI_CHECK(0x54e440u, 0x54fd48u); RETCHK(0x54fd4du, 0x54fd48u); LOADALL;
  /* 0054fd4d mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0054fd4f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fd50 lea edi, [ebp + 0x10] */ edi = (u32)((u32)(ebp + 0x10u));
  /* 0054fd53 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0054fd57 call 0x54e620 */ esp -= 4; M32(esp) = 0x54fd5cu; SAVEALL; F_0054e620(c); ABI_CHECK(0x54e620u, 0x54fd57u); RETCHK(0x54fd5cu, 0x54fd57u); LOADALL;
  /* 0054fd5c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054fd5e mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054fd61 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 0054fd64 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fd66 mov edi, dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); edi = (u32)(M32(m_)); }
  /* 0054fd6c je 0x54fda1 */ if (ZF_) goto L_0054fda1;
  /* 0054fd6e lea edx, [esi + 8] */ edx = (u32)((u32)(esi + 0x8u));
  /* 0054fd71 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054fd72 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54fd74u; SAVEALL; call_ind(c, t_); RETCHK(0x54fd74u, 0x54fd72u); LOADALL; }
  /* 0054fd74 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fd76 jne 0x54fd9e */ if (!ZF_) goto L_0054fd9e;
  /* 0054fd78 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054fd7a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fd7c je 0x54fd85 */ if (ZF_) goto L_0054fd85;
  /* 0054fd7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fd7f call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fd85u; SAVEALL; call_ind(c, t_); RETCHK(0x54fd85u, 0x54fd7fu); LOADALL; }
L_0054fd85:;
  /* 0054fd85 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054fd88 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fd8a je 0x54fd95 */ if (ZF_) goto L_0054fd95;
  /* 0054fd8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fd8d call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54fd92u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54fd8du); RETCHK(0x54fd92u, 0x54fd8du); LOADALL;
  /* 0054fd92 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fd95:;
  /* 0054fd95 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fd96 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54fd9bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54fd96u); RETCHK(0x54fd9bu, 0x54fd96u); LOADALL;
  /* 0054fd9b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fd9e:;
  /* 0054fd9e mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
L_0054fda1:;
  /* 0054fda1 push 0x65560c */ { u32 v_ = 0x65560cu; esp -= 4; M32(esp) = v_; }
  /* 0054fda6 lea ebx, [ebp - 0x14] */ ebx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0054fda9 call 0x54e440 */ esp -= 4; M32(esp) = 0x54fdaeu; SAVEALL; F_0054e440(c); ABI_CHECK(0x54e440u, 0x54fda9u); RETCHK(0x54fdaeu, 0x54fda9u); LOADALL;
  /* 0054fdae mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054fdb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fdb1 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0054fdb4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fdb5 lea ebx, [ebp - 0x20] */ ebx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0054fdb8 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0054fdbc call 0x54e6c0 */ esp -= 4; M32(esp) = 0x54fdc1u; SAVEALL; F_0054e6c0(c); ABI_CHECK(0x54e6c0u, 0x54fdbcu); RETCHK(0x54fdc1u, 0x54fdbcu); LOADALL;
  /* 0054fdc1 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054fdc3 lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0054fdc6 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fdc8 je 0x54fde9 */ if (ZF_) goto L_0054fde9;
  /* 0054fdca mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0054fdcd test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fdcf je 0x54fdd6 */ if (ZF_) goto L_0054fdd6;
  /* 0054fdd1 call 0x54e820 */ esp -= 4; M32(esp) = 0x54fdd6u; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54fdd1u); RETCHK(0x54fdd6u, 0x54fdd1u); LOADALL;
L_0054fdd6:;
  /* 0054fdd6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054fdd8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fdda mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 0054fddd je 0x54fde9 */ if (ZF_) goto L_0054fde9;
  /* 0054fddf add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0054fde2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fde3 call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fde9u; SAVEALL; call_ind(c, t_); RETCHK(0x54fde9u, 0x54fde3u); LOADALL; }
L_0054fde9:;
  /* 0054fde9 mov esi, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); esi = (u32)(M32(m_)); }
  /* 0054fdec test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fdee je 0x54fe2b */ if (ZF_) goto L_0054fe2b;
  /* 0054fdf0 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 0054fdf3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fdf4 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54fdf6u; SAVEALL; call_ind(c, t_); RETCHK(0x54fdf6u, 0x54fdf4u); LOADALL; }
  /* 0054fdf6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fdf8 jne 0x54fe24 */ if (!ZF_) goto L_0054fe24;
  /* 0054fdfa test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fdfc je 0x54fe24 */ if (ZF_) goto L_0054fe24;
  /* 0054fdfe mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054fe00 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fe02 je 0x54fe0b */ if (ZF_) goto L_0054fe0b;
  /* 0054fe04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fe05 call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fe0bu; SAVEALL; call_ind(c, t_); RETCHK(0x54fe0bu, 0x54fe05u); LOADALL; }
L_0054fe0b:;
  /* 0054fe0b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054fe0e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fe10 je 0x54fe1b */ if (ZF_) goto L_0054fe1b;
  /* 0054fe12 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fe13 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54fe18u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54fe13u); RETCHK(0x54fe18u, 0x54fe13u); LOADALL;
  /* 0054fe18 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fe1b:;
  /* 0054fe1b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fe1c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54fe21u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54fe1cu); RETCHK(0x54fe21u, 0x54fe1cu); LOADALL;
  /* 0054fe21 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fe24:;
  /* 0054fe24 mov dword ptr [ebp - 0x20], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0x0u); }
L_0054fe2b:;
  /* 0054fe2b mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0054fe2f mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 0054fe32 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fe34 je 0x54fe6d */ if (ZF_) goto L_0054fe6d;
  /* 0054fe36 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 0054fe39 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fe3a call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54fe3cu; SAVEALL; call_ind(c, t_); RETCHK(0x54fe3cu, 0x54fe3au); LOADALL; }
  /* 0054fe3c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fe3e jne 0x54fe66 */ if (!ZF_) goto L_0054fe66;
  /* 0054fe40 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054fe42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fe44 je 0x54fe4d */ if (ZF_) goto L_0054fe4d;
  /* 0054fe46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fe47 call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fe4du; SAVEALL; call_ind(c, t_); RETCHK(0x54fe4du, 0x54fe47u); LOADALL; }
L_0054fe4d:;
  /* 0054fe4d mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054fe50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fe52 je 0x54fe5d */ if (ZF_) goto L_0054fe5d;
  /* 0054fe54 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fe55 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54fe5au; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54fe55u); RETCHK(0x54fe5au, 0x54fe55u); LOADALL;
  /* 0054fe5a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fe5d:;
  /* 0054fe5d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fe5e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54fe63u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54fe5eu); RETCHK(0x54fe63u, 0x54fe5eu); LOADALL;
  /* 0054fe63 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fe66:;
  /* 0054fe66 mov dword ptr [ebp - 0x14], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0x0u); }
L_0054fe6d:;
  /* 0054fe6d mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 0054fe70 add edx, 0x40 */ { u32 a_ = edx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0054fe73 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054fe74 lea ebx, [ebp - 0x18] */ ebx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0054fe77 call 0x54e440 */ esp -= 4; M32(esp) = 0x54fe7cu; SAVEALL; F_0054e440(c); ABI_CHECK(0x54e440u, 0x54fe77u); RETCHK(0x54fe7cu, 0x54fe77u); LOADALL;
  /* 0054fe7c mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0054fe7e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fe7f lea edi, [ebp + 0x10] */ edi = (u32)((u32)(ebp + 0x10u));
  /* 0054fe82 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0054fe86 call 0x54e620 */ esp -= 4; M32(esp) = 0x54fe8bu; SAVEALL; F_0054e620(c); ABI_CHECK(0x54e620u, 0x54fe86u); RETCHK(0x54fe8bu, 0x54fe86u); LOADALL;
  /* 0054fe8b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0054fe8d mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0054fe90 mov esi, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esi = (u32)(M32(m_)); }
  /* 0054fe93 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fe95 mov edi, dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); edi = (u32)(M32(m_)); }
  /* 0054fe9b je 0x54fed0 */ if (ZF_) goto L_0054fed0;
  /* 0054fe9d lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 0054fea0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054fea1 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54fea3u; SAVEALL; call_ind(c, t_); RETCHK(0x54fea3u, 0x54fea1u); LOADALL; }
  /* 0054fea3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fea5 jne 0x54fecd */ if (!ZF_) goto L_0054fecd;
  /* 0054fea7 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054fea9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054feab je 0x54feb4 */ if (ZF_) goto L_0054feb4;
  /* 0054fead push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054feae call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54feb4u; SAVEALL; call_ind(c, t_); RETCHK(0x54feb4u, 0x54feaeu); LOADALL; }
L_0054feb4:;
  /* 0054feb4 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054feb7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054feb9 je 0x54fec4 */ if (ZF_) goto L_0054fec4;
  /* 0054febb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054febc call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54fec1u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54febcu); RETCHK(0x54fec1u, 0x54febcu); LOADALL;
  /* 0054fec1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fec4:;
  /* 0054fec4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054fec5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54fecau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54fec5u); RETCHK(0x54fecau, 0x54fec5u); LOADALL;
  /* 0054feca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054fecd:;
  /* 0054fecd mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
L_0054fed0:;
  /* 0054fed0 push 0x65560c */ { u32 v_ = 0x65560cu; esp -= 4; M32(esp) = v_; }
  /* 0054fed5 lea ebx, [ebp - 0x1c] */ ebx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0054fed8 call 0x54e440 */ esp -= 4; M32(esp) = 0x54feddu; SAVEALL; F_0054e440(c); ABI_CHECK(0x54e440u, 0x54fed8u); RETCHK(0x54feddu, 0x54fed8u); LOADALL;
  /* 0054fedd mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0054fedf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054fee0 lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0054fee3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fee4 lea ebx, [ebp - 0x24] */ ebx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0054fee7 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 0054feeb call 0x54e6c0 */ esp -= 4; M32(esp) = 0x54fef0u; SAVEALL; F_0054e6c0(c); ABI_CHECK(0x54e6c0u, 0x54feebu); RETCHK(0x54fef0u, 0x54feebu); LOADALL;
  /* 0054fef0 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0054fef2 lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0054fef5 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0054fef7 je 0x54ff1a */ if (ZF_) goto L_0054ff1a;
  /* 0054fef9 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0054fefc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fefe je 0x54ff05 */ if (ZF_) goto L_0054ff05;
  /* 0054ff00 call 0x54e820 */ esp -= 4; M32(esp) = 0x54ff05u; SAVEALL; F_0054e820(c); ABI_CHECK(0x54e820u, 0x54ff00u); RETCHK(0x54ff05u, 0x54ff00u); LOADALL;
L_0054ff05:;
  /* 0054ff05 mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
  /* 0054ff07 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff09 mov dword ptr [ebp + 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ebx); }
  /* 0054ff0c je 0x54ff1d */ if (ZF_) goto L_0054ff1d;
  /* 0054ff0e lea edx, [ebx + 8] */ edx = (u32)((u32)(ebx + 0x8u));
  /* 0054ff11 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ff12 call dword ptr [0x62e108] */ { const u32 m_ = (u32)(0x62e108u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ff18u; SAVEALL; call_ind(c, t_); RETCHK(0x54ff18u, 0x54ff12u); LOADALL; }
  /* 0054ff18 jmp 0x54ff1d */ goto L_0054ff1d;
L_0054ff1a:;
  /* 0054ff1a mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
L_0054ff1d:;
  /* 0054ff1d mov esi, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); esi = (u32)(M32(m_)); }
  /* 0054ff20 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff22 je 0x54ff5f */ if (ZF_) goto L_0054ff5f;
  /* 0054ff24 lea eax, [esi + 8] */ eax = (u32)((u32)(esi + 0x8u));
  /* 0054ff27 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ff28 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54ff2au; SAVEALL; call_ind(c, t_); RETCHK(0x54ff2au, 0x54ff28u); LOADALL; }
  /* 0054ff2a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff2c jne 0x54ff58 */ if (!ZF_) goto L_0054ff58;
  /* 0054ff2e test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff30 je 0x54ff58 */ if (ZF_) goto L_0054ff58;
  /* 0054ff32 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ff34 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff36 je 0x54ff3f */ if (ZF_) goto L_0054ff3f;
  /* 0054ff38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ff39 call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ff3fu; SAVEALL; call_ind(c, t_); RETCHK(0x54ff3fu, 0x54ff39u); LOADALL; }
L_0054ff3f:;
  /* 0054ff3f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054ff42 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff44 je 0x54ff4f */ if (ZF_) goto L_0054ff4f;
  /* 0054ff46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ff47 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54ff4cu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54ff47u); RETCHK(0x54ff4cu, 0x54ff47u); LOADALL;
  /* 0054ff4c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ff4f:;
  /* 0054ff4f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ff50 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ff55u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ff50u); RETCHK(0x54ff55u, 0x54ff50u); LOADALL;
  /* 0054ff55 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ff58:;
  /* 0054ff58 mov dword ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(0x0u); }
L_0054ff5f:;
  /* 0054ff5f mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 0054ff63 mov esi, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); esi = (u32)(M32(m_)); }
  /* 0054ff66 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff68 je 0x54ffa1 */ if (ZF_) goto L_0054ffa1;
  /* 0054ff6a lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 0054ff6d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0054ff6e call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x54ff70u; SAVEALL; call_ind(c, t_); RETCHK(0x54ff70u, 0x54ff6eu); LOADALL; }
  /* 0054ff70 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff72 jne 0x54ff9a */ if (!ZF_) goto L_0054ff9a;
  /* 0054ff74 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0054ff76 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff78 je 0x54ff81 */ if (ZF_) goto L_0054ff81;
  /* 0054ff7a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ff7b call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ff81u; SAVEALL; call_ind(c, t_); RETCHK(0x54ff81u, 0x54ff7bu); LOADALL; }
L_0054ff81:;
  /* 0054ff81 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054ff84 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ff86 je 0x54ff91 */ if (ZF_) goto L_0054ff91;
  /* 0054ff88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ff89 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x54ff8eu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x54ff89u); RETCHK(0x54ff8eu, 0x54ff89u); LOADALL;
  /* 0054ff8e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ff91:;
  /* 0054ff91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0054ff92 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x54ff97u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x54ff92u); RETCHK(0x54ff97u, 0x54ff92u); LOADALL;
  /* 0054ff97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0054ff9a:;
  /* 0054ff9a mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
L_0054ffa1:;
  /* 0054ffa1 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0054ffa4 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0054ffa7 add ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0054ffad dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0054ffae mov dword ptr [ebp + 0xc], ecx */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0054ffb1 mov dword ptr [ebp - 0x28], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(eax); }
  /* 0054ffb4 jne 0x54fd41 */ if (!ZF_) goto L_0054fd41;
  /* 0054ffba test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ffbc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0054ffbd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0054ffbe je 0x54ffd6 */ if (ZF_) goto L_0054ffd6;
  /* 0054ffc0 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0054ffc3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ffc5 jne 0x54ffd2 */ if (!ZF_) goto L_0054ffd2;
  /* 0054ffc7 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0054ffc9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0054ffca call 0x602700 */ esp -= 4; M32(esp) = 0x54ffcfu; SAVEALL; F_00602700(c); ABI_CHECK(0x602700u, 0x54ffcau); RETCHK(0x54ffcfu, 0x54ffcau); LOADALL;
  /* 0054ffcf mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
L_0054ffd2:;
  /* 0054ffd2 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054ffd4 jmp 0x54ffd8 */ goto L_0054ffd8;
L_0054ffd6:;
  /* 0054ffd6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0054ffd8:;
  /* 0054ffd8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0054ffdb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0054ffdd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ffde call dword ptr [edx + 0x158] */ { const u32 m_ = (u32)(edx + 0x158u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54ffe4u; SAVEALL; call_ind(c, t_); RETCHK(0x54ffe4u, 0x54ffdeu); LOADALL; }
  /* 0054ffe4 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054ffe6 je 0x55001c */ if (ZF_) goto L_0055001c;
  /* 0054ffe8 lea eax, [ebx + 8] */ eax = (u32)((u32)(ebx + 0x8u));
  /* 0054ffeb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054ffec call dword ptr [0x62e10c] */ { const u32 m_ = (u32)(0x62e10cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x54fff2u; SAVEALL; call_ind(c, t_); RETCHK(0x54fff2u, 0x54ffecu); LOADALL; }
  /* 0054fff2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fff4 jne 0x55001c */ if (!ZF_) goto L_0055001c;
  /* 0054fff6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0054fff8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0054fffa je 0x550003 */ if (ZF_) goto L_00550003;
  /* 0054fffc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0054fffd call dword ptr [0x62e460] */ { const u32 m_ = (u32)(0x62e460u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550003u; SAVEALL; call_ind(c, t_); RETCHK(0x550003u, 0x54fffdu); LOADALL; }
L_00550003:;
  /* 00550003 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00550006 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00550008 je 0x550013 */ if (ZF_) goto L_00550013;
  /* 0055000a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055000b call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x550010u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x55000bu); RETCHK(0x550010u, 0x55000bu); LOADALL;
  /* 00550010 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00550013:;
  /* 00550013 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00550014 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x550019u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x550014u); RETCHK(0x550019u, 0x550014u); LOADALL;
  /* 00550019 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055001c:;
  /* 0055001c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_0055001d:;
  /* 0055001d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00550020 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00550027 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550029 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055002a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00550017(CPU *c) {
  NATIVE_HOOK(0x550017u) REGS; LOADALL;
L_00550017:;
  /* 00550017 or al, byte ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = (eax & 0xffu), b_ = M8(m_); u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00550019 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055001c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055001d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00550020 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00550027 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550029 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055002a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00550030(CPU *c) {
  NATIVE_HOOK(0x550030u) REGS; LOADALL;
L_00550030:;
  /* 00550030 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550031 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550033 call 0x550820 */ esp -= 4; M32(esp) = 0x550038u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x550033u); RETCHK(0x550038u, 0x550033u); LOADALL;
  /* 00550038 mov ecx, dword ptr [eax + 0xf64] */ { const u32 m_ = (u32)(eax + 0xf64u); ecx = (u32)(M32(m_)); }
  /* 0055003e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00550041 cmp eax, 0x69 */ { u32 a_ = eax, b_ = 0x69u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550044 ja 0x5500f9 */ if (!(CF_|ZF_)) goto L_005500f9;
  /* 0055004a movzx eax, byte ptr [eax + 0x550124] */ { const u32 m_ = (u32)(eax + 0x550124u); eax = (u32)(M8(m_)); }
  /* 00550051 jmp dword ptr [eax*4 + 0x550100] */ { const u32 m_ = (u32)(eax * 4u + 0x550100u); u32 t_ = M32(m_); switch (t_) { case 0x550058u: goto L_00550058; case 0x550065u: goto L_00550065; case 0x550070u: goto L_00550070; case 0x550084u: goto L_00550084; case 0x55009eu: goto L_0055009e; case 0x5500bau: goto L_005500ba; case 0x5500ddu: goto L_005500dd; case 0x5500eeu: goto L_005500ee; case 0x5500f9u: goto L_005500f9; default: SAVEALL; call_ind(c, t_); return; } }
L_00550058:;
  /* 00550058 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0055005a call 0x530ee0 */ esp -= 4; M32(esp) = 0x55005fu; SAVEALL; F_00530ee0(c); ABI_CHECK(0x530ee0u, 0x55005au); RETCHK(0x55005fu, 0x55005au); LOADALL;
  /* 0055005f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550061 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550062 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00550065:;
  /* 00550065 call 0x530f20 */ esp -= 4; M32(esp) = 0x55006au; SAVEALL; F_00530f20(c); ABI_CHECK(0x530f20u, 0x550065u); RETCHK(0x55006au, 0x550065u); LOADALL;
  /* 0055006a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055006c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055006d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00550070:;
  /* 00550070 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00550072 call 0x530e50 */ esp -= 4; M32(esp) = 0x550077u; SAVEALL; F_00530e50(c); ABI_CHECK(0x530e50u, 0x550072u); RETCHK(0x550077u, 0x550072u); LOADALL;
  /* 00550077 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00550079 call 0x530e40 */ esp -= 4; M32(esp) = 0x55007eu; SAVEALL; F_00530e40(c); ABI_CHECK(0x530e40u, 0x550079u); RETCHK(0x55007eu, 0x550079u); LOADALL;
  /* 0055007e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550080 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550081 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00550084:;
  /* 00550084 push 0x39c800c8 */ { u32 v_ = 0x39c800c8u; esp -= 4; M32(esp) = v_; }
  /* 00550089 call 0x530e50 */ esp -= 4; M32(esp) = 0x55008eu; SAVEALL; F_00530e50(c); ABI_CHECK(0x530e50u, 0x550089u); RETCHK(0x55008eu, 0x550089u); LOADALL;
  /* 0055008e push 0x39c800c8 */ { u32 v_ = 0x39c800c8u; esp -= 4; M32(esp) = v_; }
  /* 00550093 call 0x530e40 */ esp -= 4; M32(esp) = 0x550098u; SAVEALL; F_00530e40(c); ABI_CHECK(0x530e40u, 0x550093u); RETCHK(0x550098u, 0x550093u); LOADALL;
  /* 00550098 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055009a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055009b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0055009e:;
  /* 0055009e fld dword ptr [ecx + 0x3a8] */ { const u32 m_ = (u32)(ecx + 0x3a8u); FPUSH((double)MF32(m_)); }
  /* 005500a4 fmul dword ptr [0x6570a4] */ { const u32 m_ = (u32)(0x6570a4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005500aa call 0x61b154 */ esp -= 4; M32(esp) = 0x5500afu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5500aau); RETCHK(0x5500afu, 0x5500aau); LOADALL;
  /* 005500af mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005500b2 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005500b4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005500b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005500b7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005500ba:;
  /* 005500ba mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005500bd fild dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)(s32)M32(m_)); }
  /* 005500bf fmul dword ptr [0x656d8c] */ { const u32 m_ = (u32)(0x656d8cu); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005500c5 fstp dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005500c8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005500cb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005500cc call 0x530e50 */ esp -= 4; M32(esp) = 0x5500d1u; SAVEALL; F_00530e50(c); ABI_CHECK(0x530e50u, 0x5500ccu); RETCHK(0x5500d1u, 0x5500ccu); LOADALL;
  /* 005500d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005500d2 call 0x530e40 */ esp -= 4; M32(esp) = 0x5500d7u; SAVEALL; F_00530e40(c); ABI_CHECK(0x530e40u, 0x5500d2u); RETCHK(0x5500d7u, 0x5500d2u); LOADALL;
  /* 005500d7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005500d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005500da ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005500dd:;
  /* 005500dd push 0x6555e4 */ { u32 v_ = 0x6555e4u; esp -= 4; M32(esp) = v_; }
  /* 005500e2 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5500e8u; SAVEALL; call_ind(c, t_); RETCHK(0x5500e8u, 0x5500e2u); LOADALL; }
  /* 005500e8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005500ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005500eb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_005500ee:;
  /* 005500ee push 0x6555bc */ { u32 v_ = 0x6555bcu; esp -= 4; M32(esp) = v_; }
  /* 005500f3 call dword ptr [0x62e16c] */ { const u32 m_ = (u32)(0x62e16cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5500f9u; SAVEALL; call_ind(c, t_); RETCHK(0x5500f9u, 0x5500f3u); LOADALL; }
L_005500f9:;
  /* 005500f9 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005500fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005500fc ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00550190(CPU *c) {
  NATIVE_HOOK(0x550190u) REGS; LOADALL;
L_00550190:;
  /* 00550190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550191 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550193 sub esp, 0x204 */ { u32 a_ = esp, b_ = 0x204u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550199 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055019e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005501a1 mov al, byte ptr [ebx + 0xe4] */ { const u32 m_ = (u32)(ebx + 0xe4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005501a7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005501a9 je 0x550249 */ if (ZF_) goto L_00550249;
  /* 005501af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005501b0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005501b1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005501b3 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 005501b8 lea edi, [ebp - 0x104] */ edi = (u32)((u32)(ebp + 0xfffffefcu));
  /* 005501be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005501bf rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005501c1 call 0x4019a0 */ esp -= 4; M32(esp) = 0x5501c6u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5501c1u); RETCHK(0x5501c6u, 0x5501c1u); LOADALL;
  /* 005501c6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005501c9 mov esi, eax */ { esi = (u32)(eax); }
  /* 005501cb call 0x550820 */ esp -= 4; M32(esp) = 0x5501d0u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x5501cbu); RETCHK(0x5501d0u, 0x5501cbu); LOADALL;
  /* 005501d0 cmp dword ptr [eax + 0xd14], 0x10 */ { const u32 m_ = (u32)(eax + 0xd14u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005501d7 mov ecx, dword ptr [eax + 0xd10] */ { const u32 m_ = (u32)(eax + 0xd10u); ecx = (u32)(M32(m_)); }
  /* 005501dd jb 0x5501e7 */ if (CF_) goto L_005501e7;
  /* 005501df mov eax, dword ptr [eax + 0xd00] */ { const u32 m_ = (u32)(eax + 0xd00u); eax = (u32)(M32(m_)); }
  /* 005501e5 jmp 0x5501ec */ goto L_005501ec;
L_005501e7:;
  /* 005501e7 add eax, 0xd00 */ { u32 a_ = eax, b_ = 0xd00u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_005501ec:;
  /* 005501ec push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 005501f1 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 005501f7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005501f8 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005501f9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005501fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005501fb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005501fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005501ff call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550205u; SAVEALL; call_ind(c, t_); RETCHK(0x550205u, 0x5501ffu); LOADALL; }
  /* 00550205 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00550208 mov ecx, dword ptr [esi + 0xb14] */ { const u32 m_ = (u32)(esi + 0xb14u); ecx = (u32)(M32(m_)); }
  /* 0055020e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055020f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550210 mov eax, esi */ { eax = (u32)(esi); }
  /* 00550212 call 0x4020c0 */ esp -= 4; M32(esp) = 0x550217u; SAVEALL; F_004020c0(c); ABI_CHECK(0x4020c0u, 0x550212u); RETCHK(0x550217u, 0x550212u); LOADALL;
  /* 00550217 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550218 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 0055021e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055021f push 0x6555a8 */ { u32 v_ = 0x6555a8u; esp -= 4; M32(esp) = v_; }
  /* 00550224 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055022a push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 0055022f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550230 call 0x5feb84 */ esp -= 4; M32(esp) = 0x550235u; SAVEALL; F_005feb84(c); ABI_CHECK(0x5feb84u, 0x550230u); RETCHK(0x550235u, 0x550230u); LOADALL;
  /* 00550235 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00550237 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055023a lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00550240 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550241 call dword ptr [ecx + 0x15c] */ { const u32 m_ = (u32)(ecx + 0x15cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550247u; SAVEALL; call_ind(c, t_); RETCHK(0x550247u, 0x550241u); LOADALL; }
  /* 00550247 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00550248 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00550249:;
  /* 00550249 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055024c call 0x61af31 */ esp -= 4; M32(esp) = 0x550251u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55024cu); RETCHK(0x550251u, 0x55024cu); LOADALL;
  /* 00550251 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550253 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550254 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00550260(CPU *c) {
  NATIVE_HOOK(0x550260u) REGS; LOADALL;
L_00550260:;
  /* 00550260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550263 sub esp, 0x204 */ { u32 a_ = esp, b_ = 0x204u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550269 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055026e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00550271 mov al, byte ptr [ebx + 0xe4] */ { const u32 m_ = (u32)(ebx + 0xe4u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550277 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550279 je 0x550319 */ if (ZF_) goto L_00550319;
  /* 0055027f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550280 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550281 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550283 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00550288 lea edi, [ebp - 0x104] */ edi = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055028e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055028f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00550291 call 0x4019a0 */ esp -= 4; M32(esp) = 0x550296u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x550291u); RETCHK(0x550296u, 0x550291u); LOADALL;
  /* 00550296 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550299 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055029b call 0x550820 */ esp -= 4; M32(esp) = 0x5502a0u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x55029bu); RETCHK(0x5502a0u, 0x55029bu); LOADALL;
  /* 005502a0 cmp dword ptr [eax + 0xd14], 0x10 */ { const u32 m_ = (u32)(eax + 0xd14u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005502a7 mov ecx, dword ptr [eax + 0xd10] */ { const u32 m_ = (u32)(eax + 0xd10u); ecx = (u32)(M32(m_)); }
  /* 005502ad jb 0x5502b7 */ if (CF_) goto L_005502b7;
  /* 005502af mov eax, dword ptr [eax + 0xd00] */ { const u32 m_ = (u32)(eax + 0xd00u); eax = (u32)(M32(m_)); }
  /* 005502b5 jmp 0x5502bc */ goto L_005502bc;
L_005502b7:;
  /* 005502b7 add eax, 0xd00 */ { u32 a_ = eax, b_ = 0xd00u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_005502bc:;
  /* 005502bc push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 005502c1 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 005502c7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005502c8 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005502c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005502ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005502cb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005502cd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005502cf call dword ptr [0x62e174] */ { const u32 m_ = (u32)(0x62e174u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5502d5u; SAVEALL; call_ind(c, t_); RETCHK(0x5502d5u, 0x5502cfu); LOADALL; }
  /* 005502d5 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005502d8 mov ecx, dword ptr [esi + 0xb14] */ { const u32 m_ = (u32)(esi + 0xb14u); ecx = (u32)(M32(m_)); }
  /* 005502de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005502df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005502e0 mov eax, esi */ { eax = (u32)(esi); }
  /* 005502e2 call 0x4020c0 */ esp -= 4; M32(esp) = 0x5502e7u; SAVEALL; F_004020c0(c); ABI_CHECK(0x4020c0u, 0x5502e2u); RETCHK(0x5502e7u, 0x5502e2u); LOADALL;
  /* 005502e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005502e8 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 005502ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005502ef push 0x6555a8 */ { u32 v_ = 0x6555a8u; esp -= 4; M32(esp) = v_; }
  /* 005502f4 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 005502fa push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 005502ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550300 call 0x5feb84 */ esp -= 4; M32(esp) = 0x550305u; SAVEALL; F_005feb84(c); ABI_CHECK(0x5feb84u, 0x550300u); RETCHK(0x550305u, 0x550300u); LOADALL;
  /* 00550305 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00550307 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055030a lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00550310 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550311 call dword ptr [ecx + 0x160] */ { const u32 m_ = (u32)(ecx + 0x160u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550317u; SAVEALL; call_ind(c, t_); RETCHK(0x550317u, 0x550311u); LOADALL; }
  /* 00550317 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00550318 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00550319:;
  /* 00550319 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055031c call 0x61af31 */ esp -= 4; M32(esp) = 0x550321u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55031cu); RETCHK(0x550321u, 0x55031cu); LOADALL;
  /* 00550321 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550323 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550324 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00550330(CPU *c) {
  NATIVE_HOOK(0x550330u) REGS; LOADALL;
L_00550330:;
  /* 00550330 mov cl, byte ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550336 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550338 je 0x550342 */ if (ZF_) goto L_00550342;
  /* 0055033a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055033c jmp dword ptr [eax + 0x188] */ { const u32 m_ = (u32)(eax + 0x188u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00550342:;
  /* 00550342 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550350(CPU *c) {
  NATIVE_HOOK(0x550350u) REGS; LOADALL;
L_00550350:;
  /* 00550350 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550351 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550353 mov cl, byte ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550359 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055035b je 0x550366 */ if (ZF_) goto L_00550366;
  /* 0055035d mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055035f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550360 jmp dword ptr [eax + 0x190] */ { const u32 m_ = (u32)(eax + 0x190u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00550366:;
  /* 00550366 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550367 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00550370(CPU *c) {
  NATIVE_HOOK(0x550370u) REGS; LOADALL;
L_00550370:;
  /* 00550370 mov cl, byte ptr [eax + 0xe4] */ { const u32 m_ = (u32)(eax + 0xe4u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550376 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550378 je 0x550382 */ if (ZF_) goto L_00550382;
  /* 0055037a mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055037c jmp dword ptr [eax + 0x194] */ { const u32 m_ = (u32)(eax + 0x194u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00550382:;
  /* 00550382 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00550384 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550390(CPU *c) {
  NATIVE_HOOK(0x550390u) REGS; LOADALL;
L_00550390:;
  /* 00550390 mov cl, byte ptr [0x9b9208] */ { const u32 m_ = (u32)(0x9b9208u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550396 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0055039b test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055039d jne 0x5503c4 */ if (!ZF_) goto L_005503c4;
  /* 0055039f mov edx, dword ptr [0x9b9208] */ { const u32 m_ = (u32)(0x9b9208u); edx = (u32)(M32(m_)); }
  /* 005503a5 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005503a7 mov eax, 0x9b9200 */ { eax = (u32)(0x9b9200u); }
  /* 005503ac mov dword ptr [0x9b9208], edx */ { const u32 m_ = (u32)(0x9b9208u); M32(m_) = (u32)(edx); }
  /* 005503b2 call 0x541b70 */ esp -= 4; M32(esp) = 0x5503b7u; SAVEALL; F_00541b70(c); ABI_CHECK(0x541b70u, 0x5503b2u); RETCHK(0x5503b7u, 0x5503b2u); LOADALL;
  /* 005503b7 push 0x62c930 */ { u32 v_ = 0x62c930u; esp -= 4; M32(esp) = v_; }
  /* 005503bc call 0x5fe916 */ esp -= 4; M32(esp) = 0x5503c1u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x5503bcu); RETCHK(0x5503c1u, 0x5503bcu); LOADALL;
  /* 005503c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005503c4:;
  /* 005503c4 mov eax, 0x9b9200 */ { eax = (u32)(0x9b9200u); }
  /* 005503c9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005503d0(CPU *c) {
  NATIVE_HOOK(0x5503d0u) REGS; LOADALL;
L_005503d0:;
  /* 005503d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005503d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005503d3 sub esp, 0x204 */ { u32 a_ = esp, b_ = 0x204u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005503d9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005503de mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005503e1 call 0x550820 */ esp -= 4; M32(esp) = 0x5503e6u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x5503e1u); RETCHK(0x5503e6u, 0x5503e1u); LOADALL;
  /* 005503e6 add eax, 0x6e1 */ { u32 a_ = eax, b_ = 0x6e1u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005503eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005503ec push 0x65598c */ { u32 v_ = 0x65598cu; esp -= 4; M32(esp) = v_; }
  /* 005503f1 lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 005503f7 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 005503fc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005503fd call 0x5fe928 */ esp -= 4; M32(esp) = 0x550402u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5503fdu); RETCHK(0x550402u, 0x5503fdu); LOADALL;
  /* 00550402 lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00550408 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055040b mov edx, eax */ { edx = (u32)(eax); }
  /* 0055040d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00550410:;
  /* 00550410 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550412 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550413 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550415 jne 0x550410 */ if (!ZF_) goto L_00550410;
  /* 00550417 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550418 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550419 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055041c sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055041e dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0055041f nop */ ;
L_00550420:;
  /* 00550420 mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550423 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550424 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550426 jne 0x550420 */ if (!ZF_) goto L_00550420;
  /* 00550428 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055042a shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0055042d mov esi, edx */ { esi = (u32)(edx); }
  /* 0055042f rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00550431 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00550433 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00550436 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00550438 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055043b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055043c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055043d call 0x61af31 */ esp -= 4; M32(esp) = 0x550442u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55043du); RETCHK(0x550442u, 0x55043du); LOADALL;
  /* 00550442 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550444 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550445 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550450(CPU *c) {
  NATIVE_HOOK(0x550450u) REGS; LOADALL;
L_00550450:;
  /* 00550450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550453 sub esp, 0x3a0 */ { u32 a_ = esp, b_ = 0x3a0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550459 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055045e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055045f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550460 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00550463 call 0x550390 */ esp -= 4; M32(esp) = 0x550468u; SAVEALL; F_00550390(c); ABI_CHECK(0x550390u, 0x550463u); RETCHK(0x550468u, 0x550463u); LOADALL;
  /* 00550468 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550469 call 0x541ba0 */ esp -= 4; M32(esp) = 0x55046eu; SAVEALL; F_00541ba0(c); ABI_CHECK(0x541ba0u, 0x550469u); RETCHK(0x55046eu, 0x550469u); LOADALL;
  /* 0055046e call 0x601668 */ esp -= 4; M32(esp) = 0x550473u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x55046eu); RETCHK(0x550473u, 0x55046eu); LOADALL;
  /* 00550473 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00550475 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550476 call dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550479u; SAVEALL; call_ind(c, t_); RETCHK(0x550479u, 0x550476u); LOADALL; }
  /* 00550479 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055047b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055047d mov byte ptr [ebp - 0x384], bl */ { const u32 m_ = (u32)(ebp + 0xfffffc7cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550483 mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
  /* 00550488 lea edi, [ebp - 0x383] */ edi = (u32)((u32)(ebp + 0xfffffc7du));
  /* 0055048e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00550490 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00550492 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00550493 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550495 mov byte ptr [ebp - 0x184], bl */ { const u32 m_ = (u32)(ebp + 0xfffffe7cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055049b mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 005504a0 lea edi, [ebp - 0x183] */ edi = (u32)((u32)(ebp + 0xfffffe7du));
  /* 005504a6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005504a8 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 005504aa stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 005504ab xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005504ad mov dword ptr [ebp - 0x43], eax */ { const u32 m_ = (u32)(ebp + 0xffffffbdu); M32(m_) = (u32)(eax); }
  /* 005504b0 mov dword ptr [ebp - 0x3f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc1u); M32(m_) = (u32)(eax); }
  /* 005504b3 mov dword ptr [ebp - 0x3b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc5u); M32(m_) = (u32)(eax); }
  /* 005504b6 mov dword ptr [ebp - 0x37], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc9u); M32(m_) = (u32)(eax); }
  /* 005504b9 mov dword ptr [ebp - 0x33], eax */ { const u32 m_ = (u32)(ebp + 0xffffffcdu); M32(m_) = (u32)(eax); }
  /* 005504bc mov dword ptr [ebp - 0x2f], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd1u); M32(m_) = (u32)(eax); }
  /* 005504bf xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005504c1 mov dword ptr [ebp - 0x2b], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd5u); M32(m_) = (u32)(eax); }
  /* 005504c4 mov dword ptr [ebp - 0x23], edx */ { const u32 m_ = (u32)(ebp + 0xffffffddu); M32(m_) = (u32)(edx); }
  /* 005504c7 mov word ptr [ebp - 0x27], ax */ { const u32 m_ = (u32)(ebp + 0xffffffd9u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 005504cb mov dword ptr [ebp - 0x1f], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe1u); M32(m_) = (u32)(edx); }
  /* 005504ce mov dword ptr [ebp - 0x1b], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M32(m_) = (u32)(edx); }
  /* 005504d1 mov byte ptr [ebp - 0x84], bl */ { const u32 m_ = (u32)(ebp + 0xffffff7cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005504d7 mov dword ptr [ebp - 0x17], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(edx); }
  /* 005504da mov byte ptr [ebp - 0x25], al */ { const u32 m_ = (u32)(ebp + 0xffffffdbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005504dd mov ecx, 0xf */ { ecx = (u32)(0xfu); }
  /* 005504e2 lea edi, [ebp - 0x83] */ edi = (u32)((u32)(ebp + 0xffffff7du));
  /* 005504e8 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005504ea mov dword ptr [ebp - 0x13], edx */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M32(m_) = (u32)(edx); }
  /* 005504ed mov dword ptr [ebp - 0xf], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff1u); M32(m_) = (u32)(edx); }
  /* 005504f0 mov dword ptr [ebp - 0xb], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff5u); M32(m_) = (u32)(edx); }
  /* 005504f3 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 005504f5 mov word ptr [ebp - 7], dx */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005504f9 mov byte ptr [ebp - 0x24], bl */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005504fc mov byte ptr [ebp - 5], dl */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005504ff mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550502 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00550503 call 0x601668 */ esp -= 4; M32(esp) = 0x550508u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x550503u); RETCHK(0x550508u, 0x550503u); LOADALL;
  /* 00550508 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055050a lea edx, [ebp - 0x398] */ edx = (u32)((u32)(ebp + 0xfffffc68u));
  /* 00550510 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550511 lea edx, [ebp - 0x390] */ edx = (u32)((u32)(ebp + 0xfffffc70u));
  /* 00550517 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550518 lea edx, [ebp - 0x38c] */ edx = (u32)((u32)(ebp + 0xfffffc74u));
  /* 0055051e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055051f lea edx, [ebp - 0x394] */ edx = (u32)((u32)(ebp + 0xfffffc6cu));
  /* 00550525 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550526 lea edx, [ebp - 0x3a0] */ edx = (u32)((u32)(ebp + 0xfffffc60u));
  /* 0055052c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055052d lea edx, [ebp - 0x39c] */ edx = (u32)((u32)(ebp + 0xfffffc64u));
  /* 00550533 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550534 lea edx, [ebp - 0x388] */ edx = (u32)((u32)(ebp + 0xfffffc78u));
  /* 0055053a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055053b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055053c call dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55053fu; SAVEALL; call_ind(c, t_); RETCHK(0x55053fu, 0x55053cu); LOADALL; }
  /* 0055053f mov eax, dword ptr [ebp - 0x39c] */ { const u32 m_ = (u32)(ebp + 0xfffffc64u); eax = (u32)(M32(m_)); }
  /* 00550545 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550547 je 0x55055b */ if (ZF_) goto L_0055055b;
  /* 00550549 lea edx, [ebp - 0x384] */ edx = (u32)((u32)(ebp + 0xfffffc7cu));
  /* 0055054f sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_00550551:;
  /* 00550551 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550553 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00550556 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550557 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00550559 jne 0x550551 */ if (!ZF_) goto L_00550551;
L_0055055b:;
  /* 0055055b mov eax, dword ptr [ebp - 0x394] */ { const u32 m_ = (u32)(ebp + 0xfffffc6cu); eax = (u32)(M32(m_)); }
  /* 00550561 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550563 je 0x55057a */ if (ZF_) goto L_0055057a;
  /* 00550565 lea edx, [ebp - 0x184] */ edx = (u32)((u32)(ebp + 0xfffffe7cu));
  /* 0055056b sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0055056d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00550570:;
  /* 00550570 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550572 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00550575 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550576 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00550578 jne 0x550570 */ if (!ZF_) goto L_00550570;
L_0055057a:;
  /* 0055057a mov eax, dword ptr [ebp - 0x38c] */ { const u32 m_ = (u32)(ebp + 0xfffffc74u); eax = (u32)(M32(m_)); }
  /* 00550580 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550582 je 0x55059a */ if (ZF_) goto L_0055059a;
  /* 00550584 lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00550587 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00550589 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00550590:;
  /* 00550590 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550592 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00550595 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550596 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00550598 jne 0x550590 */ if (!ZF_) goto L_00550590;
L_0055059a:;
  /* 0055059a mov eax, dword ptr [ebp - 0x390] */ { const u32 m_ = (u32)(ebp + 0xfffffc70u); eax = (u32)(M32(m_)); }
  /* 005505a0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005505a2 je 0x5505ba */ if (ZF_) goto L_005505ba;
  /* 005505a4 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 005505a7 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005505a9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005505b0:;
  /* 005505b0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005505b2 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005505b5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005505b6 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005505b8 jne 0x5505b0 */ if (!ZF_) goto L_005505b0;
L_005505ba:;
  /* 005505ba mov eax, dword ptr [ebp - 0x398] */ { const u32 m_ = (u32)(ebp + 0xfffffc68u); eax = (u32)(M32(m_)); }
  /* 005505c0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005505c2 je 0x5505da */ if (ZF_) goto L_005505da;
  /* 005505c4 lea edx, [ebp - 0x84] */ edx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 005505ca sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005505cc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_005505d0:;
  /* 005505d0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005505d2 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005505d5 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005505d6 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005505d8 jne 0x5505d0 */ if (!ZF_) goto L_005505d0;
L_005505da:;
  /* 005505da call 0x601668 */ esp -= 4; M32(esp) = 0x5505dfu; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x5505dau); RETCHK(0x5505dfu, 0x5505dau); LOADALL;
  /* 005505df mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005505e1 lea edx, [ebp - 0x84] */ edx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 005505e7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005505e8 lea edx, [ebp - 0x44] */ edx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 005505eb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005505ec lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005505ef push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005505f0 lea edx, [ebp - 0x184] */ edx = (u32)((u32)(ebp + 0xfffffe7cu));
  /* 005505f6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005505f7 push 0x5503d0 */ { u32 v_ = 0x5503d0u; esp -= 4; M32(esp) = v_; }
  /* 005505fc lea edx, [ebp - 0x384] */ edx = (u32)((u32)(ebp + 0xfffffc7cu));
  /* 00550602 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550603 mov edx, dword ptr [ebp - 0x388] */ { const u32 m_ = (u32)(ebp + 0xfffffc78u); edx = (u32)(M32(m_)); }
  /* 00550609 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055060a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055060b call dword ptr [ecx + 0x40] */ { const u32 m_ = (u32)(ecx + 0x40u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55060eu; SAVEALL; call_ind(c, t_); RETCHK(0x55060eu, 0x55060bu); LOADALL; }
  /* 0055060e mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00550611 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00550612 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00550613 call 0x61af31 */ esp -= 4; M32(esp) = 0x550618u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x550613u); RETCHK(0x550618u, 0x550613u); LOADALL;
  /* 00550618 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055061a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055061b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550620(CPU *c) {
  NATIVE_HOOK(0x550620u) REGS; LOADALL;
L_00550620:;
  /* 00550620 call 0x601668 */ esp -= 4; M32(esp) = 0x550625u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x550620u); RETCHK(0x550625u, 0x550620u); LOADALL;
  /* 00550625 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00550627 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550628 call dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55062bu; SAVEALL; call_ind(c, t_); RETCHK(0x55062bu, 0x550628u); LOADALL; }
  /* 0055062b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550630(CPU *c) {
  NATIVE_HOOK(0x550630u) REGS; LOADALL;
L_00550630:;
  /* 00550630 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550631 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550633 mov eax, edi */ { eax = (u32)(edi); }
  /* 00550635 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00550638:;
  /* 00550638 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055063a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055063b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055063d jne 0x550638 */ if (!ZF_) goto L_00550638;
  /* 0055063f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00550641 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00550642 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00550644 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550645 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550647 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00550649 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055064b jle 0x55067d */ if ((ZF_|LT_)) goto L_0055067d;
  /* 0055064d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00550650:;
  /* 00550650 mov cl, byte ptr [esi + edi + 1] */ { const u32 m_ = (u32)(esi + edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550654 mov eax, esi */ { eax = (u32)(esi); }
  /* 00550656 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00550657 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00550659 mov dl, byte ptr [esi + edi] */ { const u32 m_ = (u32)(esi + edi); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055065c sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0055065e sub dl, 0x42 */ { u32 a_ = (edx & 0xffu), b_ = 0x42u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00550661 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550662 sub cl, 2 */ { u32 a_ = (ecx & 0xffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00550665 shl cl, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = (ecx & 0xffu); u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffu; u32 cf_ = n_ <= 8u ? (a_ >> (8u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 7) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, cf_, 0, 0, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); } }
  /* 00550668 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550669 cmp eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055066c jge 0x55067d */ if (!LT_) goto L_0055067d;
  /* 0055066e add cl, dl */ { u32 a_ = (ecx & 0xffu), b_ = (edx & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00550670 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00550673 xor cl, 0xd7 */ { u32 a_ = (ecx & 0xffu), b_ = 0xd7u; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00550676 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550678 mov byte ptr [eax + edx], cl */ { const u32 m_ = (u32)(eax + edx); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0055067b jl 0x550650 */ if (LT_) goto L_00550650;
L_0055067d:;
  /* 0055067d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055067e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055067f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00550680 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550681 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550690(CPU *c) {
  NATIVE_HOOK(0x550690u) REGS; LOADALL;
L_00550690:;
  /* 00550690 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550691 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550693 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550694 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00550695 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550696 mov edi, eax */ { edi = (u32)(eax); }
  /* 00550698 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055069b mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0055069d cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055069f mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005506a2 je 0x5506cd */ if (ZF_) goto L_005506cd;
  /* 005506a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_005506a5:;
  /* 005506a5 mov esi, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); esi = (u32)(M32(m_)); }
  /* 005506a8 call 0x5293f0 */ esp -= 4; M32(esp) = 0x5506adu; SAVEALL; F_005293f0(c); ABI_CHECK(0x5293f0u, 0x5506a8u); RETCHK(0x5506adu, 0x5506a8u); LOADALL;
  /* 005506ad mov ebx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 005506b0 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005506b2 je 0x5506bc */ if (ZF_) goto L_005506bc;
  /* 005506b4 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005506b6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005506b8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 005506ba call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5506bcu; SAVEALL; call_ind(c, t_); RETCHK(0x5506bcu, 0x5506bau); LOADALL; }
L_005506bc:;
  /* 005506bc lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005506bf call 0x53d420 */ esp -= 4; M32(esp) = 0x5506c4u; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x5506bfu); RETCHK(0x5506c4u, 0x5506bfu); LOADALL;
  /* 005506c4 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 005506c7 cmp ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005506ca jne 0x5506a5 */ if (!ZF_) goto L_005506a5;
  /* 005506cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_005506cd:;
  /* 005506cd mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005506d0 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 005506d3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005506d4 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005506d6 call 0x53d300 */ esp -= 4; M32(esp) = 0x5506dbu; SAVEALL; F_0053d300(c); ABI_CHECK(0x53d300u, 0x5506d6u); RETCHK(0x5506dbu, 0x5506d6u); LOADALL;
  /* 005506db mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005506de mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 005506e1 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005506e4 mov dword ptr [edi + 8], 0 */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005506eb mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005506ed mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 005506f0 mov dword ptr [edi + 8], edi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005506f3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005506f4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005506f5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005506f7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005506f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550700(CPU *c) {
  NATIVE_HOOK(0x550700u) REGS; LOADALL;
L_00550700:;
  /* 00550700 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550702 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 00550707 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0055070a fild dword ptr [eax*8 + 0x640ba8] */ { const u32 m_ = (u32)(eax * 8u + 0x640ba8u); FPUSH((double)(s32)M32(m_)); }
  /* 00550711 je 0x550735 */ if (ZF_) goto L_00550735;
  /* 00550713 fst dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); MF32(m_) = (float)ST(0); }
  /* 00550719 fild dword ptr [eax*8 + 0x640bac] */ { const u32 m_ = (u32)(eax * 8u + 0x640bacu); FPUSH((double)(s32)M32(m_)); }
  /* 00550720 fst dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); MF32(m_) = (float)ST(0); }
  /* 00550726 jmp 0x9c1f10 */ goto L_009c1f10;
L_00550735:;
  /* 00550735 fstp dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055073b fild dword ptr [eax*8 + 0x640bac] */ { const u32 m_ = (u32)(eax * 8u + 0x640bacu); FPUSH((double)(s32)M32(m_)); }
  /* 00550742 fstp dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00550748 jmp 0x62d842 */ SAVEALL; F_0062d842(c); return;
L_009c1f10:;
  /* 009c1f10 fxch st(1) */ { double t_ = ST(0); ST(0) = ST(1); ST(1) = t_; }
  /* 009c1f12 fstp dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c1f18 fstp dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c1f1e pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1f1f cmp dword ptr [0x9c0268], 0 */ { const u32 m_ = (u32)(0x9c0268u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1f26 je 0x9c1f82 */ if (ZF_) goto L_009c1f82;
  /* 009c1f28 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 009c1f2d mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 009c1f30 mov ecx, dword ptr [eax*8 + 0x640ba8] */ { const u32 m_ = (u32)(eax * 8u + 0x640ba8u); ecx = (u32)(M32(m_)); }
  /* 009c1f37 mov edx, dword ptr [eax*8 + 0x640bac] */ { const u32 m_ = (u32)(eax * 8u + 0x640bacu); edx = (u32)(M32(m_)); }
  /* 009c1f3e imul esi, ecx, 9 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x9u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009c1f41 imul edi, edx, 0x10 */ { s64 p_ = (s64)(s32)edx * (s64)(s32)0x10u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 009c1f44 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1f46 jne 0x9c1f82 */ if (!ZF_) goto L_009c1f82;
  /* 009c1f48 fld dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); FPUSH((double)MF32(m_)); }
  /* 009c1f4e fdiv dword ptr [0x9c1f08] */ { const u32 m_ = (u32)(0x9c1f08u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 009c1f54 fld dword ptr [0x9c1f0c] */ { const u32 m_ = (u32)(0x9c1f0cu); FPUSH((double)MF32(m_)); }
  /* 009c1f5a fcompi st(1) */ { u32 e_ = (EFLAGS_ & ~0x8d5u) | fcomi_fl(ST(0), ST(1)); SETRAW(e_); FPOP(); }
  /* 009c1f5c jbe 0x9c1f66 */ if ((CF_|ZF_)) goto L_009c1f66;
  /* 009c1f5e fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 009c1f60 fld dword ptr [0x9c1f0c] */ { const u32 m_ = (u32)(0x9c1f0cu); FPUSH((double)MF32(m_)); }
L_009c1f66:;
  /* 009c1f66 fst dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); MF32(m_) = (float)ST(0); }
  /* 009c1f6c fld dword ptr [0x688100] */ { const u32 m_ = (u32)(0x688100u); FPUSH((double)MF32(m_)); }
  /* 009c1f72 fmul st(1) */ ST(0) = FR(ST(0) * ST(1));
  /* 009c1f74 fdiv dword ptr [0x688104] */ { const u32 m_ = (u32)(0x688104u); ST(0) = FR(ST(0) / (double)MF32(m_)); }
  /* 009c1f7a fstp dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 009c1f80 fstp st(0) */ ST(0) = ST(0); FPOP();
L_009c1f82:;
  /* 009c1f82 fld dword ptr [0x6880f8] */ { const u32 m_ = (u32)(0x6880f8u); FPUSH((double)MF32(m_)); }
  /* 009c1f88 fistp dword ptr [0x9c1f00] */ { const u32 m_ = (u32)(0x9c1f00u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009c1f8e fld dword ptr [0x6880fc] */ { const u32 m_ = (u32)(0x6880fcu); FPUSH((double)MF32(m_)); }
  /* 009c1f94 fistp dword ptr [0x9c1f04] */ { const u32 m_ = (u32)(0x9c1f04u); M32(m_) = (u32)rt_f2i(c, ST(0), 32, 0); FPOP(); }
  /* 009c1f9a popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c1f9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550760(CPU *c) {
  NATIVE_HOOK(0x550760u) REGS; LOADALL;
L_00550760:;
  /* 00550760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550763 sub esp, 0x304 */ { u32 a_ = esp, b_ = 0x304u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550769 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055076e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00550771 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00550777 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550778 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0055077d call dword ptr [0x62e1bc] */ { const u32 m_ = (u32)(0x62e1bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550783u; SAVEALL; call_ind(c, t_); RETCHK(0x550783u, 0x55077du); LOADALL; }
  /* 00550783 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00550789 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055078a lea edx, [ebp - 0x304] */ edx = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 00550790 push 0x655b14 */ { u32 v_ = 0x655b14u; esp -= 4; M32(esp) = v_; }
  /* 00550795 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550796 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x55079bu; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x550796u); RETCHK(0x55079bu, 0x550796u); LOADALL;
  /* 0055079b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055079e add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005507a1 lea eax, [ebp - 0x304] */ eax = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 005507a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005507a8 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 005507ad push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005507ae push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 005507b3 push 0x642964 */ { u32 v_ = 0x642964u; esp -= 4; M32(esp) = v_; }
  /* 005507b8 push 0x655b0c */ { u32 v_ = 0x655b0cu; esp -= 4; M32(esp) = v_; }
  /* 005507bd call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5507c3u; SAVEALL; call_ind(c, t_); RETCHK(0x5507c3u, 0x5507bdu); LOADALL; }
  /* 005507c3 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005507c6 call 0x61af31 */ esp -= 4; M32(esp) = 0x5507cbu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5507c6u); RETCHK(0x5507cbu, 0x5507c6u); LOADALL;
  /* 005507cb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005507cd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005507ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005507d0(CPU *c) {
  NATIVE_HOOK(0x5507d0u) REGS; LOADALL;
L_005507d0:;
  /* 005507d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005507d1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005507d3 call 0x4019a0 */ esp -= 4; M32(esp) = 0x5507d8u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5507d3u); RETCHK(0x5507d8u, 0x5507d3u); LOADALL;
  /* 005507d8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005507db mov esi, eax */ { esi = (u32)(eax); }
  /* 005507dd call 0x401e10 */ esp -= 4; M32(esp) = 0x5507e2u; SAVEALL; F_00401e10(c); ABI_CHECK(0x401e10u, 0x5507ddu); RETCHK(0x5507e2u, 0x5507ddu); LOADALL;
  /* 005507e2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005507e4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005507e6 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005507e8 call 0x559eb0 */ esp -= 4; M32(esp) = 0x5507edu; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x5507e8u); RETCHK(0x5507edu, 0x5507e8u); LOADALL;
  /* 005507ed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005507ee call dword ptr [0x62e4d8] */ { const u32 m_ = (u32)(0x62e4d8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5507f4u; SAVEALL; call_ind(c, t_); RETCHK(0x5507f4u, 0x5507eeu); LOADALL; }
  /* 005507f4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005507f5 mov dword ptr [0x7a6e24], 0 */ { const u32 m_ = (u32)(0x7a6e24u); M32(m_) = (u32)(0x0u); }
  /* 005507ff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550820(CPU *c) {
  NATIVE_HOOK(0x550820u) REGS; LOADALL;
L_00550820:;
  /* 00550820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550823 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00550829 mov cl, byte ptr [0x9ba6e0] */ { const u32 m_ = (u32)(0x9ba6e0u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055082f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00550831 push 0x61d7de */ { u32 v_ = 0x61d7deu; esp -= 4; M32(esp) = v_; }
  /* 00550836 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550837 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0055083c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055083e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00550845 jne 0x55086b */ if (!ZF_) goto L_0055086b;
  /* 00550847 or dword ptr [0x9ba6e0], eax */ { const u32 m_ = (u32)(0x9ba6e0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0055084d push 0x9b9740 */ { u32 v_ = 0x9b9740u; esp -= 4; M32(esp) = v_; }
  /* 00550852 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00550859 call 0x5509f0 */ esp -= 4; M32(esp) = 0x55085eu; SAVEALL; F_005509f0(c); ABI_CHECK(0x5509f0u, 0x550859u); RETCHK(0x55085eu, 0x550859u); LOADALL;
  /* 0055085e push 0x62c940 */ { u32 v_ = 0x62c940u; esp -= 4; M32(esp) = v_; }
  /* 00550863 call 0x5fe916 */ esp -= 4; M32(esp) = 0x550868u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x550863u); RETCHK(0x550868u, 0x550863u); LOADALL;
  /* 00550868 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055086b:;
  /* 0055086b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055086e mov eax, 0x9b9740 */ { eax = (u32)(0x9b9740u); }
  /* 00550873 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055087a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055087c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055087d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550880(CPU *c) {
  NATIVE_HOOK(0x550880u) REGS; LOADALL;
L_00550880:;
  /* 00550880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550883 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550889 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055088e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055088f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00550892 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550894 mov byte ptr [ebp - 0x108], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M8(m_) = (u8)(0x0u); }
  /* 0055089b mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 005508a0 lea edi, [ebp - 0x107] */ edi = (u32)((u32)(ebp + 0xfffffef9u));
  /* 005508a6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 005508a8 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 005508aa stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 005508ab push 0x103 */ { u32 v_ = 0x103u; esp -= 4; M32(esp) = v_; }
  /* 005508b0 lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 005508b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005508b7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005508b9 call dword ptr [0x62e124] */ { const u32 m_ = (u32)(0x62e124u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5508bfu; SAVEALL; call_ind(c, t_); RETCHK(0x5508bfu, 0x5508b9u); LOADALL; }
  /* 005508bf lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 005508c5 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 005508c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005508c8 call 0x5fe9e0 */ esp -= 4; M32(esp) = 0x5508cdu; SAVEALL; F_005fe9e0(c); ABI_CHECK(0x5fe9e0u, 0x5508c8u); RETCHK(0x5508cdu, 0x5508c8u); LOADALL;
  /* 005508cd add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005508d0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005508d2 je 0x55090e */ if (ZF_) goto L_0055090e;
  /* 005508d4 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 005508d7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_005508d8:;
  /* 005508d8 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005508db inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005508dc test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005508de jne 0x5508d8 */ if (!ZF_) goto L_005508d8;
  /* 005508e0 mov edx, dword ptr [0x655afc] */ { const u32 m_ = (u32)(0x655afcu); edx = (u32)(M32(m_)); }
  /* 005508e6 mov edi, eax */ { edi = (u32)(eax); }
  /* 005508e8 mov dword ptr [edi], edx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(edx); }
  /* 005508ea mov eax, dword ptr [0x655b00] */ { const u32 m_ = (u32)(0x655b00u); eax = (u32)(M32(m_)); }
  /* 005508ef mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005508f2 mov ecx, dword ptr [0x655b04] */ { const u32 m_ = (u32)(0x655b04u); ecx = (u32)(M32(m_)); }
  /* 005508f8 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 005508fb mov dx, word ptr [0x655b08] */ { const u32 m_ = (u32)(0x655b08u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00550902 mov word ptr [edi + 0xc], dx */ { const u32 m_ = (u32)(edi + 0xcu); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 00550906 mov al, byte ptr [0x655b0a] */ { const u32 m_ = (u32)(0x655b0au); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055090b mov byte ptr [edi + 0xe], al */ { const u32 m_ = (u32)(edi + 0xeu); M8(m_) = (u8)((eax & 0xffu)); }
L_0055090e:;
  /* 0055090e lea eax, [ebp - 0x108] */ eax = (u32)((u32)(ebp + 0xfffffef8u));
  /* 00550914 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00550917 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00550918:;
  /* 00550918 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055091a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055091b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055091d jne 0x550918 */ if (!ZF_) goto L_00550918;
  /* 0055091f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00550921 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00550924 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550925 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550926 lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 0055092c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055092d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0055092f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00550931 push 0x655af4 */ { u32 v_ = 0x655af4u; esp -= 4; M32(esp) = v_; }
  /* 00550936 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550937 call dword ptr [0x62e000] */ { const u32 m_ = (u32)(0x62e000u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55093du; SAVEALL; call_ind(c, t_); RETCHK(0x55093du, 0x550937u); LOADALL; }
  /* 0055093d mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00550940 call 0x61af31 */ esp -= 4; M32(esp) = 0x550945u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x550940u); RETCHK(0x550945u, 0x550940u); LOADALL;
  /* 00550945 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550947 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550948 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550950(CPU *c) {
  NATIVE_HOOK(0x550950u) REGS; LOADALL;
L_00550950:;
  /* 00550950 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550951 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550953 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550956 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550957 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055095a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055095b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0055095d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055095f push 0x655ad8 */ { u32 v_ = 0x655ad8u; esp -= 4; M32(esp) = v_; }
  /* 00550964 push 0x80000002 */ { u32 v_ = 0x80000002u; esp -= 4; M32(esp) = v_; }
  /* 00550969 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00550970 call dword ptr [0x62e008] */ { const u32 m_ = (u32)(0x62e008u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550976u; SAVEALL; call_ind(c, t_); RETCHK(0x550976u, 0x550970u); LOADALL; }
  /* 00550976 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00550978 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055097a jne 0x55099d */ if (!ZF_) goto L_0055099d;
  /* 0055097c mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0055097f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550980 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00550983 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550984 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550985 push 0x655af4 */ { u32 v_ = 0x655af4u; esp -= 4; M32(esp) = v_; }
  /* 0055098a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055098b call dword ptr [0x62e004] */ { const u32 m_ = (u32)(0x62e004u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550991u; SAVEALL; call_ind(c, t_); RETCHK(0x550991u, 0x55098bu); LOADALL; }
  /* 00550991 mov esi, eax */ { esi = (u32)(eax); }
  /* 00550993 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00550995 je 0x5509d5 */ if (ZF_) goto L_005509d5;
  /* 00550997 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055099a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055099b jmp 0x5509cb */ goto L_005509cb;
L_0055099d:;
  /* 0055099d lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005509a0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005509a1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005509a3 push 0x2001f */ { u32 v_ = 0x2001fu; esp -= 4; M32(esp) = v_; }
  /* 005509a8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005509aa push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 005509af push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005509b1 push 0x655ad8 */ { u32 v_ = 0x655ad8u; esp -= 4; M32(esp) = v_; }
  /* 005509b6 push 0x80000002 */ { u32 v_ = 0x80000002u; esp -= 4; M32(esp) = v_; }
  /* 005509bb call dword ptr [0x62e00c] */ { const u32 m_ = (u32)(0x62e00cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5509c1u; SAVEALL; call_ind(c, t_); RETCHK(0x5509c1u, 0x5509bbu); LOADALL; }
  /* 005509c1 mov esi, eax */ { esi = (u32)(eax); }
  /* 005509c3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005509c5 jne 0x5509d5 */ if (!ZF_) goto L_005509d5;
  /* 005509c7 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 005509ca push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
L_005509cb:;
  /* 005509cb call 0x550880 */ esp -= 4; M32(esp) = 0x5509d0u; SAVEALL; F_00550880(c); ABI_CHECK(0x550880u, 0x5509cbu); RETCHK(0x5509d0u, 0x5509cbu); LOADALL;
  /* 005509d0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005509d3 mov esi, eax */ { esi = (u32)(eax); }
L_005509d5:;
  /* 005509d5 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005509d8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005509da je 0x5509e3 */ if (ZF_) goto L_005509e3;
  /* 005509dc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005509dd call dword ptr [0x62e010] */ { const u32 m_ = (u32)(0x62e010u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5509e3u; SAVEALL; call_ind(c, t_); RETCHK(0x5509e3u, 0x5509ddu); LOADALL; }
L_005509e3:;
  /* 005509e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005509e5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005509e7 sete al */ { eax = (eax & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 005509ea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005509eb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005509ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005509ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005509f0(CPU *c) {
  NATIVE_HOOK(0x5509f0u) REGS; LOADALL;
L_005509f0:;
  /* 005509f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005509f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005509f3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005509f9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005509fb push 0x61d7be */ { u32 v_ = 0x61d7beu; esp -= 4; M32(esp) = v_; }
  /* 00550a00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550a01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00550a08 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00550a09 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550a0a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00550a0d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550a0e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550a0f call 0x54ba60 */ esp -= 4; M32(esp) = 0x550a14u; SAVEALL; F_0054ba60(c); ABI_CHECK(0x54ba60u, 0x550a0fu); RETCHK(0x550a14u, 0x550a0fu); LOADALL;
  /* 00550a14 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00550a16 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00550a19 mov dword ptr [esi], 0x655998 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x655998u); }
  /* 00550a1f mov dword ptr [esi + 0xce8], ebx */ { const u32 m_ = (u32)(esi + 0xce8u); M32(m_) = (u32)(ebx); }
  /* 00550a25 mov dword ptr [esi + 0xcec], ebx */ { const u32 m_ = (u32)(esi + 0xcecu); M32(m_) = (u32)(ebx); }
  /* 00550a2b mov dword ptr [esi + 0xcf0], ebx */ { const u32 m_ = (u32)(esi + 0xcf0u); M32(m_) = (u32)(ebx); }
  /* 00550a31 mov eax, 0xf */ { eax = (u32)(0xfu); }
  /* 00550a36 mov dword ptr [esi + 0xd14], eax */ { const u32 m_ = (u32)(esi + 0xd14u); M32(m_) = (u32)(eax); }
  /* 00550a3c mov dword ptr [esi + 0xd10], ebx */ { const u32 m_ = (u32)(esi + 0xd10u); M32(m_) = (u32)(ebx); }
  /* 00550a42 mov byte ptr [esi + 0xd00], bl */ { const u32 m_ = (u32)(esi + 0xd00u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550a48 mov dword ptr [esi + 0xd38], eax */ { const u32 m_ = (u32)(esi + 0xd38u); M32(m_) = (u32)(eax); }
  /* 00550a4e mov dword ptr [esi + 0xd34], ebx */ { const u32 m_ = (u32)(esi + 0xd34u); M32(m_) = (u32)(ebx); }
  /* 00550a54 mov byte ptr [esi + 0xd24], bl */ { const u32 m_ = (u32)(esi + 0xd24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550a5a mov dword ptr [esi + 0xd54], eax */ { const u32 m_ = (u32)(esi + 0xd54u); M32(m_) = (u32)(eax); }
  /* 00550a60 mov dword ptr [esi + 0xd50], ebx */ { const u32 m_ = (u32)(esi + 0xd50u); M32(m_) = (u32)(ebx); }
  /* 00550a66 mov byte ptr [esi + 0xd40], bl */ { const u32 m_ = (u32)(esi + 0xd40u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550a6c mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00550a70 mov dword ptr [esi + 0xf64], ebx */ { const u32 m_ = (u32)(esi + 0xf64u); M32(m_) = (u32)(ebx); }
  /* 00550a76 call 0x53d4e0 */ esp -= 4; M32(esp) = 0x550a7bu; SAVEALL; F_0053d4e0(c); ABI_CHECK(0x53d4e0u, 0x550a76u); RETCHK(0x550a7bu, 0x550a76u); LOADALL;
  /* 00550a7b mov dword ptr [esi + 0xf6c], eax */ { const u32 m_ = (u32)(esi + 0xf6cu); M32(m_) = (u32)(eax); }
  /* 00550a81 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00550a83 mov byte ptr [eax + 0x15], cl */ { const u32 m_ = (u32)(eax + 0x15u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00550a86 mov eax, dword ptr [esi + 0xf6c] */ { const u32 m_ = (u32)(esi + 0xf6cu); eax = (u32)(M32(m_)); }
  /* 00550a8c mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 00550a8f mov eax, dword ptr [esi + 0xf6c] */ { const u32 m_ = (u32)(esi + 0xf6cu); eax = (u32)(M32(m_)); }
  /* 00550a95 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 00550a97 mov eax, dword ptr [esi + 0xf6c] */ { const u32 m_ = (u32)(esi + 0xf6cu); eax = (u32)(M32(m_)); }
  /* 00550a9d mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 00550aa0 mov dword ptr [esi + 0xf70], ebx */ { const u32 m_ = (u32)(esi + 0xf70u); M32(m_) = (u32)(ebx); }
  /* 00550aa6 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 00550aaa mov byte ptr [esi + 0xe0], cl */ { const u32 m_ = (u32)(esi + 0xe0u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00550ab0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550ab2 mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 00550ab7 lea edi, [esi + 0x6e1] */ edi = (u32)((u32)(esi + 0x6e1u));
  /* 00550abd rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00550abf mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 00550ac4 lea edi, [esi + 0x8e1] */ edi = (u32)((u32)(esi + 0x8e1u));
  /* 00550aca rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00550acc mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 00550ad1 lea edi, [esi + 0xae1] */ edi = (u32)((u32)(esi + 0xae1u));
  /* 00550ad7 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00550ad9 lea edi, [esi + 0xd64] */ edi = (u32)((u32)(esi + 0xd64u));
  /* 00550adf mov ecx, 0x80 */ { ecx = (u32)(0x80u); }
  /* 00550ae4 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 00550ae6 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00550ae8 mov edi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); edi = (u32)(M32(m_)); }
  /* 00550aee push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00550af3 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x550af5u; SAVEALL; call_ind(c, t_); RETCHK(0x550af5u, 0x550af3u); LOADALL; }
  /* 00550af5 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_00550af8:;
  /* 00550af8 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550afa inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550afb cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00550afd jne 0x550af8 */ if (!ZF_) goto L_00550af8;
  /* 00550aff sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00550b01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550b02 push 0x48 */ { u32 v_ = 0x48u; esp -= 4; M32(esp) = v_; }
  /* 00550b04 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00550b09 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x550b0bu; SAVEALL; call_ind(c, t_); RETCHK(0x550b0bu, 0x550b09u); LOADALL; }
  /* 00550b0b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550b0c lea eax, [esi + 0xd64] */ eax = (u32)((u32)(esi + 0xd64u));
  /* 00550b12 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550b13 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x550b18u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x550b13u); RETCHK(0x550b18u, 0x550b13u); LOADALL;
  /* 00550b18 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550b1b push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00550b1d push 0x655ad0 */ { u32 v_ = 0x655ad0u; esp -= 4; M32(esp) = v_; }
  /* 00550b22 lea ecx, [esi + 0xd3c] */ ecx = (u32)((u32)(esi + 0xd3cu));
  /* 00550b28 mov dword ptr [esi + 0xf8c], ebx */ { const u32 m_ = (u32)(esi + 0xf8cu); M32(m_) = (u32)(ebx); }
  /* 00550b2e mov dword ptr [esi + 0xf88], ebx */ { const u32 m_ = (u32)(esi + 0xf88u); M32(m_) = (u32)(ebx); }
  /* 00550b34 mov dword ptr [esi + 0xf84], ebx */ { const u32 m_ = (u32)(esi + 0xf84u); M32(m_) = (u32)(ebx); }
  /* 00550b3a mov dword ptr [esi + 0xf80], ebx */ { const u32 m_ = (u32)(esi + 0xf80u); M32(m_) = (u32)(ebx); }
  /* 00550b40 mov dword ptr [esi + 0xf7c], ebx */ { const u32 m_ = (u32)(esi + 0xf7cu); M32(m_) = (u32)(ebx); }
  /* 00550b46 mov dword ptr [esi + 0xf78], ebx */ { const u32 m_ = (u32)(esi + 0xf78u); M32(m_) = (u32)(ebx); }
  /* 00550b4c mov dword ptr [esi + 0xf74], ebx */ { const u32 m_ = (u32)(esi + 0xf74u); M32(m_) = (u32)(ebx); }
  /* 00550b52 mov dword ptr [esi + 0xf90], ebx */ { const u32 m_ = (u32)(esi + 0xf90u); M32(m_) = (u32)(ebx); }
  /* 00550b58 mov dword ptr [esi + 0xf94], ebx */ { const u32 m_ = (u32)(esi + 0xf94u); M32(m_) = (u32)(ebx); }
  /* 00550b5e mov byte ptr [esi + 0xf9a], bl */ { const u32 m_ = (u32)(esi + 0xf9au); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550b64 mov dword ptr [esi + 0xd8], ebx */ { const u32 m_ = (u32)(esi + 0xd8u); M32(m_) = (u32)(ebx); }
  /* 00550b6a mov dword ptr [esi + 0xd18], ebx */ { const u32 m_ = (u32)(esi + 0xd18u); M32(m_) = (u32)(ebx); }
  /* 00550b70 mov byte ptr [esi + 0xd58], bl */ { const u32 m_ = (u32)(esi + 0xd58u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550b76 mov dword ptr [esi + 0xd1c], ebx */ { const u32 m_ = (u32)(esi + 0xd1cu); M32(m_) = (u32)(ebx); }
  /* 00550b7c call 0x404420 */ esp -= 4; M32(esp) = 0x550b81u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x550b7cu); RETCHK(0x550b81u, 0x550b7cu); LOADALL;
  /* 00550b81 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00550b84 mov dword ptr [esi + 0xcf8], ebx */ { const u32 m_ = (u32)(esi + 0xcf8u); M32(m_) = (u32)(ebx); }
  /* 00550b8a mov byte ptr [esi + 0xd5a], bl */ { const u32 m_ = (u32)(esi + 0xd5au); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550b90 mov dword ptr [esi + 0xd5c], ebx */ { const u32 m_ = (u32)(esi + 0xd5cu); M32(m_) = (u32)(ebx); }
  /* 00550b96 mov byte ptr [esi + 0xd59], bl */ { const u32 m_ = (u32)(esi + 0xd59u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550b9c mov dword ptr [esi + 0xd60], ebx */ { const u32 m_ = (u32)(esi + 0xd60u); M32(m_) = (u32)(ebx); }
  /* 00550ba2 mov byte ptr [esi + 0xc8], bl */ { const u32 m_ = (u32)(esi + 0xc8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00550ba8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00550ba9 mov eax, esi */ { eax = (u32)(esi); }
  /* 00550bab pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00550bac mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00550bb3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00550bb4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550bb6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550bb7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00550bc0(CPU *c) {
  NATIVE_HOOK(0x550bc0u) REGS; LOADALL;
L_00550bc0:;
  /* 00550bc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550bc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550bc3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550bc4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00550bc6 call 0x550bf0 */ esp -= 4; M32(esp) = 0x550bcbu; SAVEALL; F_00550bf0(c); ABI_CHECK(0x550bf0u, 0x550bc6u); RETCHK(0x550bcbu, 0x550bc6u); LOADALL;
  /* 00550bcb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550bcf je 0x550bda */ if (ZF_) goto L_00550bda;
  /* 00550bd1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550bd2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x550bd7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x550bd2u); RETCHK(0x550bd7u, 0x550bd2u); LOADALL;
  /* 00550bd7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00550bda:;
  /* 00550bda mov eax, esi */ { eax = (u32)(esi); }
  /* 00550bdc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00550bdd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550bde ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00550bf0(CPU *c) {
  NATIVE_HOOK(0x550bf0u) REGS; LOADALL;
L_00550bf0:;
  /* 00550bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550bf3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00550bf5 push 0x61d760 */ { u32 v_ = 0x61d760u; esp -= 4; M32(esp) = v_; }
  /* 00550bfa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00550c00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550c01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00550c08 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550c0b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00550c0c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00550c0e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550c0f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550c10 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00550c13 mov dword ptr [ebx], 0x655998 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x655998u); }
  /* 00550c19 push 0x6437e8 */ { u32 v_ = 0x6437e8u; esp -= 4; M32(esp) = v_; }
  /* 00550c1e mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00550c25 call 0x54e140 */ esp -= 4; M32(esp) = 0x550c2au; SAVEALL; F_0054e140(c); ABI_CHECK(0x54e140u, 0x550c25u); RETCHK(0x550c2au, 0x550c25u); LOADALL;
  /* 00550c2a mov eax, dword ptr [ebx + 0xf6c] */ { const u32 m_ = (u32)(ebx + 0xf6cu); eax = (u32)(M32(m_)); }
  /* 00550c30 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00550c32 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550c35 lea edi, [ebx + 0xf68] */ edi = (u32)((u32)(ebx + 0xf68u));
  /* 00550c3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550c3c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550c3d lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00550c40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550c41 mov esi, edi */ { esi = (u32)(edi); }
  /* 00550c43 call 0x4f12f0 */ esp -= 4; M32(esp) = 0x550c48u; SAVEALL; F_004f12f0(c); ABI_CHECK(0x4f12f0u, 0x550c43u); RETCHK(0x550c48u, 0x550c43u); LOADALL;
  /* 00550c48 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00550c4b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550c4c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x550c51u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x550c4cu); RETCHK(0x550c51u, 0x550c4cu); LOADALL;
  /* 00550c51 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00550c53 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
  /* 00550c56 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00550c59 mov eax, dword ptr [ebx + 0xd54] */ { const u32 m_ = (u32)(ebx + 0xd54u); eax = (u32)(M32(m_)); }
  /* 00550c5f mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 00550c64 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550c67 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550c69 jb 0x550c7a */ if (CF_) goto L_00550c7a;
  /* 00550c6b mov edx, dword ptr [ebx + 0xd40] */ { const u32 m_ = (u32)(ebx + 0xd40u); edx = (u32)(M32(m_)); }
  /* 00550c71 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550c72 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x550c77u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x550c72u); RETCHK(0x550c77u, 0x550c72u); LOADALL;
  /* 00550c77 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00550c7a:;
  /* 00550c7a mov dword ptr [ebx + 0xd54], 0xf */ { const u32 m_ = (u32)(ebx + 0xd54u); M32(m_) = (u32)(0xfu); }
  /* 00550c84 mov dword ptr [ebx + 0xd50], esi */ { const u32 m_ = (u32)(ebx + 0xd50u); M32(m_) = (u32)(esi); }
  /* 00550c8a mov byte ptr [ebx + 0xd40], 0 */ { const u32 m_ = (u32)(ebx + 0xd40u); M8(m_) = (u8)(0x0u); }
  /* 00550c91 cmp dword ptr [ebx + 0xd38], edi */ { const u32 m_ = (u32)(ebx + 0xd38u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550c97 jb 0x550ca8 */ if (CF_) goto L_00550ca8;
  /* 00550c99 mov eax, dword ptr [ebx + 0xd24] */ { const u32 m_ = (u32)(ebx + 0xd24u); eax = (u32)(M32(m_)); }
  /* 00550c9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550ca0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x550ca5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x550ca0u); RETCHK(0x550ca5u, 0x550ca0u); LOADALL;
  /* 00550ca5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00550ca8:;
  /* 00550ca8 mov dword ptr [ebx + 0xd38], 0xf */ { const u32 m_ = (u32)(ebx + 0xd38u); M32(m_) = (u32)(0xfu); }
  /* 00550cb2 mov dword ptr [ebx + 0xd34], esi */ { const u32 m_ = (u32)(ebx + 0xd34u); M32(m_) = (u32)(esi); }
  /* 00550cb8 mov byte ptr [ebx + 0xd24], 0 */ { const u32 m_ = (u32)(ebx + 0xd24u); M8(m_) = (u8)(0x0u); }
  /* 00550cbf cmp dword ptr [ebx + 0xd14], edi */ { const u32 m_ = (u32)(ebx + 0xd14u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550cc5 jb 0x550cd6 */ if (CF_) goto L_00550cd6;
  /* 00550cc7 mov ecx, dword ptr [ebx + 0xd00] */ { const u32 m_ = (u32)(ebx + 0xd00u); ecx = (u32)(M32(m_)); }
  /* 00550ccd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550cce call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x550cd3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x550cceu); RETCHK(0x550cd3u, 0x550cceu); LOADALL;
  /* 00550cd3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00550cd6:;
  /* 00550cd6 mov dword ptr [ebx + 0xd14], 0xf */ { const u32 m_ = (u32)(ebx + 0xd14u); M32(m_) = (u32)(0xfu); }
  /* 00550ce0 mov dword ptr [ebx + 0xd10], esi */ { const u32 m_ = (u32)(ebx + 0xd10u); M32(m_) = (u32)(esi); }
  /* 00550ce6 mov byte ptr [ebx + 0xd00], 0 */ { const u32 m_ = (u32)(ebx + 0xd00u); M8(m_) = (u8)(0x0u); }
  /* 00550ced mov eax, dword ptr [ebx + 0xce8] */ { const u32 m_ = (u32)(ebx + 0xce8u); eax = (u32)(M32(m_)); }
  /* 00550cf3 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550cf5 je 0x550d15 */ if (ZF_) goto L_00550d15;
  /* 00550cf7 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00550cfa mov edi, dword ptr [ebx + 0xcec] */ { const u32 m_ = (u32)(ebx + 0xcecu); edi = (u32)(M32(m_)); }
  /* 00550d00 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550d01 call 0x403f60 */ esp -= 4; M32(esp) = 0x550d06u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x550d01u); RETCHK(0x550d06u, 0x550d01u); LOADALL;
  /* 00550d06 mov eax, dword ptr [ebx + 0xce8] */ { const u32 m_ = (u32)(ebx + 0xce8u); eax = (u32)(M32(m_)); }
  /* 00550d0c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550d0d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x550d12u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x550d0du); RETCHK(0x550d12u, 0x550d0du); LOADALL;
  /* 00550d12 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00550d15:;
  /* 00550d15 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00550d17 mov dword ptr [ebx + 0xce8], esi */ { const u32 m_ = (u32)(ebx + 0xce8u); M32(m_) = (u32)(esi); }
  /* 00550d1d mov dword ptr [ebx + 0xcec], esi */ { const u32 m_ = (u32)(ebx + 0xcecu); M32(m_) = (u32)(esi); }
  /* 00550d23 mov dword ptr [ebx + 0xcf0], esi */ { const u32 m_ = (u32)(ebx + 0xcf0u); M32(m_) = (u32)(esi); }
  /* 00550d29 call 0x54bb00 */ esp -= 4; M32(esp) = 0x550d2eu; SAVEALL; F_0054bb00(c); ABI_CHECK(0x54bb00u, 0x550d29u); RETCHK(0x550d2eu, 0x550d29u); LOADALL;
  /* 00550d2e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00550d31 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00550d32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00550d33 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00550d34 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00550d3b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00550d3d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00550d3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00550d40(CPU *c) {
  NATIVE_HOOK(0x550d40u) REGS; LOADALL;
L_00550d40:;
  /* 00550d40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00550d41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00550d43 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00550d45 push 0x62693d */ { u32 v_ = 0x62693du; esp -= 4; M32(esp) = v_; }
  /* 00550d4a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00550d50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550d51 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00550d58 sub esp, 0x5cc */ { u32 a_ = esp, b_ = 0x5ccu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550d5e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00550d63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00550d64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00550d65 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00550d67 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550d68 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00550d6b mov dword ptr [ebp - 0x578], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); M32(m_) = (u32)(ebx); }
  /* 00550d71 call 0x41b490 */ esp -= 4; M32(esp) = 0x550d76u; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x550d71u); RETCHK(0x550d76u, 0x550d71u); LOADALL;
  /* 00550d76 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550d77 call 0x41b580 */ esp -= 4; M32(esp) = 0x550d7cu; SAVEALL; F_0041b580(c); ABI_CHECK(0x41b580u, 0x550d77u); RETCHK(0x550d7cu, 0x550d77u); LOADALL;
  /* 00550d7c call 0x550950 */ esp -= 4; M32(esp) = 0x550d81u; SAVEALL; F_00550950(c); ABI_CHECK(0x550950u, 0x550d7cu); RETCHK(0x550d81u, 0x550d7cu); LOADALL;
  /* 00550d81 call 0x558f50 */ esp -= 4; M32(esp) = 0x550d86u; SAVEALL; F_00558f50(c); ABI_CHECK(0x558f50u, 0x550d81u); RETCHK(0x550d86u, 0x550d81u); LOADALL;
  /* 00550d86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00550d88 je 0x550d92 */ if (ZF_) goto L_00550d92;
  /* 00550d8a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00550d8c call dword ptr [0x62e520] */ { const u32 m_ = (u32)(0x62e520u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550d92u; SAVEALL; call_ind(c, t_); RETCHK(0x550d92u, 0x550d8cu); LOADALL; }
L_00550d92:;
  /* 00550d92 lea eax, [ebp - 0x164] */ eax = (u32)((u32)(ebp + 0xfffffe9cu));
  /* 00550d98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550d99 call 0x550760 */ esp -= 4; M32(esp) = 0x550d9eu; SAVEALL; F_00550760(c); ABI_CHECK(0x550760u, 0x550d99u); RETCHK(0x550d9eu, 0x550d99u); LOADALL;
  /* 00550d9e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550da1 call 0x601668 */ esp -= 4; M32(esp) = 0x550da6u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x550da1u); RETCHK(0x550da6u, 0x550da1u); LOADALL;
  /* 00550da6 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00550da8 lea edx, [ebp - 0x164] */ edx = (u32)((u32)(ebp + 0xfffffe9cu));
  /* 00550dae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550daf push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00550db1 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00550db3 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00550db5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550db6 call dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550dbcu; SAVEALL; call_ind(c, t_); RETCHK(0x550dbcu, 0x550db6u); LOADALL; }
  /* 00550dbc call 0x518bb0 */ esp -= 4; M32(esp) = 0x550dc1u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x550dbcu); RETCHK(0x550dc1u, 0x550dbcu); LOADALL;
  /* 00550dc1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00550dc3 call 0x516f50 */ esp -= 4; M32(esp) = 0x550dc8u; SAVEALL; F_00516f50(c); ABI_CHECK(0x516f50u, 0x550dc3u); RETCHK(0x550dc8u, 0x550dc3u); LOADALL;
  /* 00550dc8 call 0x518bb0 */ esp -= 4; M32(esp) = 0x550dcdu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x550dc8u); RETCHK(0x550dcdu, 0x550dc8u); LOADALL;
  /* 00550dcd call 0x5181d0 */ esp -= 4; M32(esp) = 0x550dd2u; SAVEALL; F_005181d0(c); ABI_CHECK(0x5181d0u, 0x550dcdu); RETCHK(0x550dd2u, 0x550dcdu); LOADALL;
  /* 00550dd2 mov edi, eax */ { edi = (u32)(eax); }
  /* 00550dd4 call 0x552f00 */ esp -= 4; M32(esp) = 0x550dd9u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x550dd4u); RETCHK(0x550dd9u, 0x550dd4u); LOADALL;
  /* 00550dd9 mov esi, eax */ { esi = (u32)(eax); }
  /* 00550ddb mov eax, edi */ { eax = (u32)(edi); }
  /* 00550ddd call 0x552f80 */ esp -= 4; M32(esp) = 0x550de2u; SAVEALL; F_00552f80(c); ABI_CHECK(0x552f80u, 0x550dddu); RETCHK(0x550de2u, 0x550dddu); LOADALL;
  /* 00550de2 call 0x552f00 */ esp -= 4; M32(esp) = 0x550de7u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x550de2u); RETCHK(0x550de7u, 0x550de2u); LOADALL;
  /* 00550de7 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 00550dea xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00550dec cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550dee jg 0x550e4a */ if (!(ZF_|LT_)) goto L_00550e4a;
  /* 00550df0 mov esi, dword ptr [0x62e574] */ { const u32 m_ = (u32)(0x62e574u); esi = (u32)(M32(m_)); }
  /* 00550df6 mov edi, dword ptr [0x62e1b0] */ { const u32 m_ = (u32)(0x62e1b0u); edi = (u32)(M32(m_)); }
  /* 00550dfc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00550e00:;
  /* 00550e00 push 0x3d4ccccd */ { u32 v_ = 0x3d4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 00550e05 call 0x552f00 */ esp -= 4; M32(esp) = 0x550e0au; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x550e05u); RETCHK(0x550e0au, 0x550e05u); LOADALL;
  /* 00550e0a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00550e0c call 0x552ff0 */ esp -= 4; M32(esp) = 0x550e11u; SAVEALL; F_00552ff0(c); ABI_CHECK(0x552ff0u, 0x550e0cu); RETCHK(0x550e11u, 0x550e0cu); LOADALL;
  /* 00550e11 call 0x552f00 */ esp -= 4; M32(esp) = 0x550e16u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x550e11u); RETCHK(0x550e16u, 0x550e11u); LOADALL;
  /* 00550e16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550e17 call 0x553060 */ esp -= 4; M32(esp) = 0x550e1cu; SAVEALL; F_00553060(c); ABI_CHECK(0x553060u, 0x550e17u); RETCHK(0x550e1cu, 0x550e17u); LOADALL;
  /* 00550e1c push 0x1b */ { u32 v_ = 0x1bu; esp -= 4; M32(esp) = v_; }
  /* 00550e1e call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x550e20u; SAVEALL; call_ind(c, t_); RETCHK(0x550e20u, 0x550e1eu); LOADALL; }
  /* 00550e20 test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 00550e23 jge 0x550e2e */ if (!LT_) goto L_00550e2e;
  /* 00550e25 mov byte ptr [ebx + 0xc8], 1 */ { const u32 m_ = (u32)(ebx + 0xc8u); M8(m_) = (u8)(0x1u); }
  /* 00550e2c jmp 0x550e3c */ goto L_00550e3c;
L_00550e2e:;
  /* 00550e2e mov al, byte ptr [ebx + 0xc8] */ { const u32 m_ = (u32)(ebx + 0xc8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00550e34 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550e36 jne 0x550e3c */ if (!ZF_) goto L_00550e3c;
  /* 00550e38 push 0x32 */ { u32 v_ = 0x32u; esp -= 4; M32(esp) = v_; }
  /* 00550e3a call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x550e3cu; SAVEALL; call_ind(c, t_); RETCHK(0x550e3cu, 0x550e3au); LOADALL; }
L_00550e3c:;
  /* 00550e3c call 0x552f00 */ esp -= 4; M32(esp) = 0x550e41u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x550e3cu); RETCHK(0x550e41u, 0x550e3cu); LOADALL;
  /* 00550e41 mov ecx, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00550e44 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00550e46 jle 0x550e00 */ if ((ZF_|LT_)) goto L_00550e00;
  /* 00550e48 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00550e4a:;
  /* 00550e4a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00550e4b call 0x552f00 */ esp -= 4; M32(esp) = 0x550e50u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x550e4bu); RETCHK(0x550e50u, 0x550e4bu); LOADALL;
  /* 00550e50 call 0x5531e0 */ esp -= 4; M32(esp) = 0x550e55u; SAVEALL; F_005531e0(c); ABI_CHECK(0x5531e0u, 0x550e50u); RETCHK(0x550e55u, 0x550e50u); LOADALL;
  /* 00550e55 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00550e57 call 0x54bc30 */ esp -= 4; M32(esp) = 0x550e5cu; SAVEALL; F_0054bc30(c); ABI_CHECK(0x54bc30u, 0x550e57u); RETCHK(0x550e5cu, 0x550e57u); LOADALL;
  /* 00550e5c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00550e5e je 0x551a15 */ if (ZF_) goto L_00551a15;
  /* 00550e64 mov edx, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); edx = (u32)(M32(m_)); }
  /* 00550e6a mov dword ptr [ebx + 0xf8c], edi */ { const u32 m_ = (u32)(ebx + 0xf8cu); M32(m_) = (u32)(edi); }
  /* 00550e70 mov dword ptr [ebx + 0xf88], edi */ { const u32 m_ = (u32)(ebx + 0xf88u); M32(m_) = (u32)(edi); }
  /* 00550e76 mov dword ptr [ebx + 0xf84], edi */ { const u32 m_ = (u32)(ebx + 0xf84u); M32(m_) = (u32)(edi); }
  /* 00550e7c mov dword ptr [ebx + 0xf80], edi */ { const u32 m_ = (u32)(ebx + 0xf80u); M32(m_) = (u32)(edi); }
  /* 00550e82 mov dword ptr [ebx + 0xf7c], edi */ { const u32 m_ = (u32)(ebx + 0xf7cu); M32(m_) = (u32)(edi); }
  /* 00550e88 mov dword ptr [ebx + 0xf78], edi */ { const u32 m_ = (u32)(ebx + 0xf78u); M32(m_) = (u32)(edi); }
  /* 00550e8e mov dword ptr [ebx + 0xf74], edi */ { const u32 m_ = (u32)(ebx + 0xf74u); M32(m_) = (u32)(edi); }
  /* 00550e94 mov dword ptr [ebx + 0xf90], edi */ { const u32 m_ = (u32)(ebx + 0xf90u); M32(m_) = (u32)(edi); }
  /* 00550e9a mov dword ptr [ebx + 0xf94], edi */ { const u32 m_ = (u32)(ebx + 0xf94u); M32(m_) = (u32)(edi); }
  /* 00550ea0 mov ecx, dword ptr [0x9c0260] */ { const u32 m_ = (u32)(0x9c0260u); ecx = (u32)(M32(m_)); }
  /* 00550ea6 call 0x54eb00 */ esp -= 4; M32(esp) = 0x550eabu; SAVEALL; F_0054eb00(c); ABI_CHECK(0x54eb00u, 0x550ea6u); RETCHK(0x550eabu, 0x550ea6u); LOADALL;
  /* 00550eab mov ecx, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); ecx = (u32)(M32(m_)); }
  /* 00550eb1 movzx eax, byte ptr [ecx + 0xe5] */ { const u32 m_ = (u32)(ecx + 0xe5u); eax = (u32)(M8(m_)); }
  /* 00550eb8 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550eba mov dword ptr [0x7a6e94], eax */ { const u32 m_ = (u32)(0x7a6e94u); M32(m_) = (u32)(eax); }
  /* 00550ebf je 0x550f71 */ if (ZF_) goto L_00550f71;
  /* 00550ec5 mov eax, dword ptr [ecx + 0x8c] */ { const u32 m_ = (u32)(ecx + 0x8cu); eax = (u32)(M32(m_)); }
  /* 00550ecb mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00550ed0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550ed2 jb 0x550ed9 */ if (CF_) goto L_00550ed9;
  /* 00550ed4 mov ecx, dword ptr [ecx + 0x78] */ { const u32 m_ = (u32)(ecx + 0x78u); ecx = (u32)(M32(m_)); }
  /* 00550ed7 jmp 0x550edc */ goto L_00550edc;
L_00550ed9:;
  /* 00550ed9 add ecx, 0x78 */ { u32 a_ = ecx, b_ = 0x78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00550edc:;
  /* 00550edc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550edd push 0x64827c */ { u32 v_ = 0x64827cu; esp -= 4; M32(esp) = v_; }
  /* 00550ee2 lea eax, [ebx + 0xe1] */ eax = (u32)((u32)(ebx + 0xe1u));
  /* 00550ee8 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00550eed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550eee call 0x5fe928 */ esp -= 4; M32(esp) = 0x550ef3u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x550eeeu); RETCHK(0x550ef3u, 0x550eeeu); LOADALL;
  /* 00550ef3 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00550ef8 mov ecx, dword ptr [eax + 0xa8] */ { const u32 m_ = (u32)(eax + 0xa8u); ecx = (u32)(M32(m_)); }
  /* 00550efe add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550f01 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550f03 jb 0x550f0d */ if (CF_) goto L_00550f0d;
  /* 00550f05 mov eax, dword ptr [eax + 0x94] */ { const u32 m_ = (u32)(eax + 0x94u); eax = (u32)(M32(m_)); }
  /* 00550f0b jmp 0x550f12 */ goto L_00550f12;
L_00550f0d:;
  /* 00550f0d add eax, 0x94 */ { u32 a_ = eax, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00550f12:;
  /* 00550f12 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550f13 push 0x64827c */ { u32 v_ = 0x64827cu; esp -= 4; M32(esp) = v_; }
  /* 00550f18 lea ecx, [ebx + 0x2e1] */ ecx = (u32)((u32)(ebx + 0x2e1u));
  /* 00550f1e push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00550f23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550f24 call 0x5fe928 */ esp -= 4; M32(esp) = 0x550f29u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x550f24u); RETCHK(0x550f29u, 0x550f24u); LOADALL;
  /* 00550f29 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00550f2e mov ecx, dword ptr [eax + 0xc4] */ { const u32 m_ = (u32)(eax + 0xc4u); ecx = (u32)(M32(m_)); }
  /* 00550f34 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550f37 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550f39 jb 0x550f43 */ if (CF_) goto L_00550f43;
  /* 00550f3b mov eax, dword ptr [eax + 0xb0] */ { const u32 m_ = (u32)(eax + 0xb0u); eax = (u32)(M32(m_)); }
  /* 00550f41 jmp 0x550f48 */ goto L_00550f48;
L_00550f43:;
  /* 00550f43 add eax, 0xb0 */ { u32 a_ = eax, b_ = 0xb0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00550f48:;
  /* 00550f48 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00550f49 push 0x64827c */ { u32 v_ = 0x64827cu; esp -= 4; M32(esp) = v_; }
  /* 00550f4e lea edx, [ebx + 0x4e1] */ edx = (u32)((u32)(ebx + 0x4e1u));
  /* 00550f54 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00550f59 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550f5a call 0x5fe928 */ esp -= 4; M32(esp) = 0x550f5fu; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x550f5au); RETCHK(0x550f5fu, 0x550f5au); LOADALL;
  /* 00550f5f add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550f62 mov dword ptr [ebx + 0xd18], 2 */ { const u32 m_ = (u32)(ebx + 0xd18u); M32(m_) = (u32)(0x2u); }
  /* 00550f6c jmp 0x5515d2 */ goto L_005515d2;
L_00550f71:;
  /* 00550f71 mov dword ptr [ebp - 0x570], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(0x0u); }
  /* 00550f7b call dword ptr [0x62e128] */ { const u32 m_ = (u32)(0x62e128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x550f81u; SAVEALL; call_ind(c, t_); RETCHK(0x550f81u, 0x550f7bu); LOADALL; }
  /* 00550f81 lea ecx, [ebp - 0x570] */ ecx = (u32)((u32)(ebp + 0xfffffa90u));
  /* 00550f87 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00550f88 call 0x55aff0 */ esp -= 4; M32(esp) = 0x550f8du; SAVEALL; F_0055aff0(c); ABI_CHECK(0x55aff0u, 0x550f88u); RETCHK(0x550f8du, 0x550f88u); LOADALL;
  /* 00550f8d mov dword ptr [ebp - 0x56c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); M32(m_) = (u32)(eax); }
  /* 00550f93 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550f95 mov byte ptr [ebp - 0x564], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa9cu); M8(m_) = (u8)(0x0u); }
  /* 00550f9c mov ecx, 0xff */ { ecx = (u32)(0xffu); }
  /* 00550fa1 lea edi, [ebp - 0x563] */ edi = (u32)((u32)(ebp + 0xfffffa9du));
  /* 00550fa7 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00550fa9 mov ecx, dword ptr [ebp - 0x570] */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); ecx = (u32)(M32(m_)); }
  /* 00550faf stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00550fb1 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00550fb2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00550fb5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00550fb7 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00550fb9 jle 0x551070 */ if ((ZF_|LT_)) goto L_00551070;
  /* 00550fbf nop */ ;
L_00550fc0:;
  /* 00550fc0 mov edx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); edx = (u32)(M32(m_)); }
  /* 00550fc6 mov esi, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); esi = (u32)(M32(m_)); }
  /* 00550fc9 mov edi, 0x655acc */ { edi = (u32)(0x655accu); }
  /* 00550fce mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 00550fd3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00550fd5 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00550fd7 je 0x550fe9 */ if (ZF_) goto L_00550fe9;
  /* 00550fd9 mov ecx, dword ptr [ebp - 0x570] */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); ecx = (u32)(M32(m_)); }
  /* 00550fdf inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550fe0 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00550fe2 jl 0x550fc0 */ if (LT_) goto L_00550fc0;
  /* 00550fe4 jmp 0x551070 */ goto L_00551070;
L_00550fe9:;
  /* 00550fe9 mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00550fef mov edx, dword ptr [ecx + eax*4 + 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x4u); edx = (u32)(M32(m_)); }
  /* 00550ff3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00550ff4 push 0x3ff */ { u32 v_ = 0x3ffu; esp -= 4; M32(esp) = v_; }
  /* 00550ff9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00550ffa lea eax, [ebp - 0x564] */ eax = (u32)((u32)(ebp + 0xfffffa9cu));
  /* 00551000 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551001 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x551006u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x551001u); RETCHK(0x551006u, 0x551001u); LOADALL;
  /* 00551006 lea eax, [ebp - 0x564] */ eax = (u32)((u32)(ebp + 0xfffffa9cu));
  /* 0055100c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055100f mov byte ptr [0x7a6eb7], 1 */ { const u32 m_ = (u32)(0x7a6eb7u); M8(m_) = (u8)(0x1u); }
  /* 00551016 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00551019 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00551020:;
  /* 00551020 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00551022 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551023 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00551025 jne 0x551020 */ if (!ZF_) goto L_00551020;
  /* 00551027 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00551029 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0055102b inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055102c mov edi, eax */ { edi = (u32)(eax); }
  /* 0055102e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055102f call 0x5fe9ce */ esp -= 4; M32(esp) = 0x551034u; SAVEALL; F_005fe9ce(c); ABI_CHECK(0x5fe9ceu, 0x55102fu); RETCHK(0x551034u, 0x55102fu); LOADALL;
  /* 00551034 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551036 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551037 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551038 lea edi, [ebp - 0x564] */ edi = (u32)((u32)(ebp + 0xfffffa9cu));
  /* 0055103e call 0x550630 */ esp -= 4; M32(esp) = 0x551043u; SAVEALL; F_00550630(c); ABI_CHECK(0x550630u, 0x55103eu); RETCHK(0x551043u, 0x55103eu); LOADALL;
  /* 00551043 mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00551049 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055104a mov byte ptr [eax + esi], 0 */ { const u32 m_ = (u32)(eax + esi); M8(m_) = (u8)(0x0u); }
  /* 0055104e call 0x5fe99e */ esp -= 4; M32(esp) = 0x551053u; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x55104eu); RETCHK(0x551053u, 0x55104eu); LOADALL;
  /* 00551053 lea edx, [ebp - 0x570] */ edx = (u32)((u32)(ebp + 0xfffffa90u));
  /* 00551059 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055105a mov eax, esi */ { eax = (u32)(esi); }
  /* 0055105c call 0x55aff0 */ esp -= 4; M32(esp) = 0x551061u; SAVEALL; F_0055aff0(c); ABI_CHECK(0x55aff0u, 0x55105cu); RETCHK(0x551061u, 0x55105cu); LOADALL;
  /* 00551061 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551062 mov dword ptr [ebp - 0x56c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); M32(m_) = (u32)(eax); }
  /* 00551068 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x55106du; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x551068u); RETCHK(0x55106du, 0x551068u); LOADALL;
  /* 0055106d add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00551070:;
  /* 00551070 mov eax, dword ptr [ebp - 0x570] */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); eax = (u32)(M32(m_)); }
  /* 00551076 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551078 mov dword ptr [ebp - 0x568], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(0x0u); }
  /* 00551082 jle 0x5515c1 */ if ((ZF_|LT_)) goto L_005515c1;
  /* 00551088 jmp 0x551090 */ goto L_00551090;
L_00551090:;
  /* 00551090 mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00551096 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 0055109c mov eax, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0055109f mov edi, 0x655ac4 */ { edi = (u32)(0x655ac4u); }
  /* 005510a4 mov esi, eax */ { esi = (u32)(eax); }
  /* 005510a6 mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 005510ab xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005510ad repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 005510af je 0x551573 */ if (ZF_) goto L_00551573;
  /* 005510b5 mov edi, 0x655ac0 */ { edi = (u32)(0x655ac0u); }
  /* 005510ba mov esi, eax */ { esi = (u32)(eax); }
  /* 005510bc mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 005510c1 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005510c3 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 005510c5 je 0x551573 */ if (ZF_) goto L_00551573;
  /* 005510cb mov edi, 0x655ab4 */ { edi = (u32)(0x655ab4u); }
  /* 005510d0 mov esi, eax */ { esi = (u32)(eax); }
  /* 005510d2 mov ecx, 0xa */ { ecx = (u32)(0xau); }
  /* 005510d7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005510d9 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 005510db je 0x551527 */ if (ZF_) goto L_00551527;
  /* 005510e1 mov edi, 0x655ab0 */ { edi = (u32)(0x655ab0u); }
  /* 005510e6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005510e8 mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 005510ed xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005510ef repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 005510f1 je 0x551527 */ if (ZF_) goto L_00551527;
  /* 005510f7 mov edi, 0x655aac */ { edi = (u32)(0x655aacu); }
  /* 005510fc mov esi, eax */ { esi = (u32)(eax); }
  /* 005510fe mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 00551103 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00551105 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00551107 jne 0x551201 */ if (!ZF_) goto L_00551201;
  /* 0055110d mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 00551113 mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00551119 mov edi, dword ptr [ecx + eax*4 + 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x4u); edi = (u32)(M32(m_)); }
  /* 0055111d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055111e mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 00551124 mov eax, edi */ { eax = (u32)(edi); }
  /* 00551126 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 00551129 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00551130:;
  /* 00551130 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00551132 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551133 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00551135 jne 0x551130 */ if (!ZF_) goto L_00551130;
  /* 00551137 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00551139 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055113a lea esi, [ebx + 0xd20] */ esi = (u32)((u32)(ebx + 0xd20u));
  /* 00551140 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551141 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00551143 call 0x404420 */ esp -= 4; M32(esp) = 0x551148u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x551143u); RETCHK(0x551148u, 0x551143u); LOADALL;
  /* 00551148 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551149 mov ecx, 0x6433f8 */ { ecx = (u32)(0x6433f8u); }
  /* 0055114e lea esi, [ebp - 0x5bc] */ esi = (u32)((u32)(ebp + 0xfffffa44u));
  /* 00551154 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x551159u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x551154u); RETCHK(0x551159u, 0x551154u); LOADALL;
  /* 00551159 lea edx, [ebx + 0xd3c] */ edx = (u32)((u32)(ebx + 0xd3cu));
  /* 0055115f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551160 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00551162 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551163 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00551166 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00551169 call 0x464640 */ esp -= 4; M32(esp) = 0x55116eu; SAVEALL; F_00464640(c); ABI_CHECK(0x464640u, 0x551169u); RETCHK(0x55116eu, 0x551169u); LOADALL;
  /* 0055116e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00551175 mov eax, dword ptr [ebp - 0x5a4] */ { const u32 m_ = (u32)(ebp + 0xfffffa5cu); eax = (u32)(M32(m_)); }
  /* 0055117b mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00551180 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551183 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551185 jb 0x551196 */ if (CF_) goto L_00551196;
  /* 00551187 mov eax, dword ptr [ebp - 0x5b8] */ { const u32 m_ = (u32)(ebp + 0xfffffa48u); eax = (u32)(M32(m_)); }
  /* 0055118d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055118e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x551193u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55118eu); RETCHK(0x551193u, 0x55118eu); LOADALL;
  /* 00551193 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00551196:;
  /* 00551196 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551199 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 0055119c mov dword ptr [ebp - 0x5a4], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffa5cu); M32(m_) = (u32)(0xfu); }
  /* 005511a6 mov dword ptr [ebp - 0x5a8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffa58u); M32(m_) = (u32)(edi); }
  /* 005511ac mov byte ptr [ebp - 0x5b8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa48u); M8(m_) = (u8)(0x0u); }
  /* 005511b3 jae 0x5511b8 */ if (!CF_) goto L_005511b8;
  /* 005511b5 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005511b8:;
  /* 005511b8 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 005511bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005511be lea ecx, [ebx + 0xae1] */ ecx = (u32)((u32)(ebx + 0xae1u));
  /* 005511c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005511c5 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x5511cau; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x5511c5u); RETCHK(0x5511cau, 0x5511c5u); LOADALL;
  /* 005511ca mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005511cd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005511d0 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005511d2 mov byte ptr [ebx + 0xce0], 0 */ { const u32 m_ = (u32)(ebx + 0xce0u); M8(m_) = (u8)(0x0u); }
  /* 005511d9 mov byte ptr [ebx + 0xd58], 1 */ { const u32 m_ = (u32)(ebx + 0xd58u); M8(m_) = (u8)(0x1u); }
  /* 005511e0 jb 0x5511ee */ if (CF_) goto L_005511ee;
  /* 005511e2 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 005511e5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005511e6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5511ebu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5511e6u); RETCHK(0x5511ebu, 0x5511e6u); LOADALL;
  /* 005511eb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005511ee:;
  /* 005511ee mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 005511f5 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 005511f8 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 005511fc jmp 0x5515a6 */ goto L_005515a6;
L_00551201:;
  /* 00551201 mov edi, 0x655aa4 */ { edi = (u32)(0x655aa4u); }
  /* 00551206 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551208 mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 0055120d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0055120f repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00551211 jne 0x55136f */ if (!ZF_) goto L_0055136f;
  /* 00551217 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 0055121d mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00551223 mov esi, dword ptr [ecx + eax*4 + 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x4u); esi = (u32)(M32(m_)); }
  /* 00551227 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551228 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 0055122e mov eax, esi */ { eax = (u32)(esi); }
  /* 00551230 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_00551233:;
  /* 00551233 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00551235 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551236 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00551238 jne 0x551233 */ if (!ZF_) goto L_00551233;
  /* 0055123a sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055123c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055123d lea edi, [ebx + 0xd3c] */ edi = (u32)((u32)(ebx + 0xd3cu));
  /* 00551243 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551244 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00551246 call 0x404420 */ esp -= 4; M32(esp) = 0x55124bu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x551246u); RETCHK(0x55124bu, 0x551246u); LOADALL;
  /* 0055124b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055124c mov ecx, 0x6433a0 */ { ecx = (u32)(0x6433a0u); }
  /* 00551251 lea esi, [ebp - 0x5a0] */ esi = (u32)((u32)(ebp + 0xfffffa60u));
  /* 00551257 call 0x41a9b0 */ esp -= 4; M32(esp) = 0x55125cu; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x551257u); RETCHK(0x55125cu, 0x551257u); LOADALL;
  /* 0055125c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055125f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00551261 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00551263 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551264 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00551266 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0055126d call 0x404140 */ esp -= 4; M32(esp) = 0x551272u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x55126du); RETCHK(0x551272u, 0x55126du); LOADALL;
  /* 00551272 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00551279 cmp dword ptr [ebp - 0x588], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffa78u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551280 jb 0x551291 */ if (CF_) goto L_00551291;
  /* 00551282 mov edx, dword ptr [ebp - 0x59c] */ { const u32 m_ = (u32)(ebp + 0xfffffa64u); edx = (u32)(M32(m_)); }
  /* 00551288 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551289 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55128eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x551289u); RETCHK(0x55128eu, 0x551289u); LOADALL;
  /* 0055128e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00551291:;
  /* 00551291 lea eax, [ebx + 0xd20] */ eax = (u32)((u32)(ebx + 0xd20u));
  /* 00551297 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551298 mov ecx, 0x6433f8 */ { ecx = (u32)(0x6433f8u); }
  /* 0055129d lea esi, [ebp - 0x5d8] */ esi = (u32)((u32)(ebp + 0xfffffa28u));
  /* 005512a3 mov dword ptr [ebp - 0x588], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffa78u); M32(m_) = (u32)(0xfu); }
  /* 005512ad mov dword ptr [ebp - 0x58c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa74u); M32(m_) = (u32)(0x0u); }
  /* 005512b7 mov byte ptr [ebp - 0x59c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa64u); M8(m_) = (u8)(0x0u); }
  /* 005512be call 0x41a9b0 */ esp -= 4; M32(esp) = 0x5512c3u; SAVEALL; F_0041a9b0(c); ABI_CHECK(0x41a9b0u, 0x5512beu); RETCHK(0x5512c3u, 0x5512beu); LOADALL;
  /* 005512c3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005512c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005512c5 lea esi, [ebp - 0x48] */ esi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 005512c8 mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 005512cf call 0x464640 */ esp -= 4; M32(esp) = 0x5512d4u; SAVEALL; F_00464640(c); ABI_CHECK(0x464640u, 0x5512cfu); RETCHK(0x5512d4u, 0x5512cfu); LOADALL;
  /* 005512d4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005512db mov eax, dword ptr [ebp - 0x5c0] */ { const u32 m_ = (u32)(ebp + 0xfffffa40u); eax = (u32)(M32(m_)); }
  /* 005512e1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005512e4 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005512e7 jb 0x5512f8 */ if (CF_) goto L_005512f8;
  /* 005512e9 mov ecx, dword ptr [ebp - 0x5d4] */ { const u32 m_ = (u32)(ebp + 0xfffffa2cu); ecx = (u32)(M32(m_)); }
  /* 005512ef push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005512f0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5512f5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5512f0u); RETCHK(0x5512f5u, 0x5512f0u); LOADALL;
  /* 005512f5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005512f8:;
  /* 005512f8 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 005512fb mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00551300 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 00551305 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551307 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 0055130a mov dword ptr [ebp - 0x5c0], edi */ { const u32 m_ = (u32)(ebp + 0xfffffa40u); M32(m_) = (u32)(edi); }
  /* 00551310 mov dword ptr [ebp - 0x5c4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa3cu); M32(m_) = (u32)(0x0u); }
  /* 0055131a mov byte ptr [ebp - 0x5d4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffa2cu); M8(m_) = (u8)(0x0u); }
  /* 00551321 jae 0x551326 */ if (!CF_) goto L_00551326;
  /* 00551323 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_00551326:;
  /* 00551326 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0055132b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055132c lea edx, [ebx + 0xae1] */ edx = (u32)((u32)(ebx + 0xae1u));
  /* 00551332 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551333 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x551338u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x551333u); RETCHK(0x551338u, 0x551333u); LOADALL;
  /* 00551338 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 0055133b add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055133e cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551340 mov byte ptr [ebx + 0xce0], 0 */ { const u32 m_ = (u32)(ebx + 0xce0u); M8(m_) = (u8)(0x0u); }
  /* 00551347 mov byte ptr [ebx + 0xd58], 1 */ { const u32 m_ = (u32)(ebx + 0xd58u); M8(m_) = (u8)(0x1u); }
  /* 0055134e jb 0x55135c */ if (CF_) goto L_0055135c;
  /* 00551350 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 00551353 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551354 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x551359u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x551354u); RETCHK(0x551359u, 0x551354u); LOADALL;
  /* 00551359 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055135c:;
  /* 0055135c mov dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edi); }
  /* 0055135f mov dword ptr [ebp - 0x34], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0x0u); }
  /* 00551366 mov byte ptr [ebp - 0x44], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)(0x0u); }
  /* 0055136a jmp 0x5515a6 */ goto L_005515a6;
L_0055136f:;
  /* 0055136f mov edi, 0x655a9c */ { edi = (u32)(0x655a9cu); }
  /* 00551374 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551376 mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 0055137b xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0055137d repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 0055137f jne 0x55149f */ if (!ZF_) goto L_0055149f;
  /* 00551385 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 0055138b mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00551391 mov edx, dword ptr [ecx + eax*4 + 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x4u); edx = (u32)(M32(m_)); }
  /* 00551395 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551396 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551397 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0055139a mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 005513a0 call 0x403060 */ esp -= 4; M32(esp) = 0x5513a5u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x5513a0u); RETCHK(0x5513a5u, 0x5513a0u); LOADALL;
  /* 005513a5 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005513a7 mov esi, 3 */ { esi = (u32)(0x3u); }
  /* 005513ac mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005513af mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 005513b2 push 0x6553dc */ { u32 v_ = 0x6553dcu; esp -= 4; M32(esp) = v_; }
  /* 005513b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005513b8 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005513ba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005513bb lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 005513be call 0x405de0 */ esp -= 4; M32(esp) = 0x5513c3u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x5513beu); RETCHK(0x5513c3u, 0x5513beu); LOADALL;
  /* 005513c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005513c5 jne 0x5513eb */ if (!ZF_) goto L_005513eb;
  /* 005513c7 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 005513ca mov dword ptr [ebx + 0xd18], esi */ { const u32 m_ = (u32)(ebx + 0xd18u); M32(m_) = (u32)(esi); }
  /* 005513d0 mov dword ptr [ebx + 0xd1c], 2 */ { const u32 m_ = (u32)(ebx + 0xd1cu); M32(m_) = (u32)(0x2u); }
  /* 005513da mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005513e1 call 0x43ee60 */ esp -= 4; M32(esp) = 0x5513e6u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x5513e1u); RETCHK(0x5513e6u, 0x5513e1u); LOADALL;
  /* 005513e6 jmp 0x5515a6 */ goto L_005515a6;
L_005513eb:;
  /* 005513eb mov esi, 0x6425f0 */ { esi = (u32)(0x6425f0u); }
  /* 005513f0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 005513f3 call 0x405bd0 */ esp -= 4; M32(esp) = 0x5513f8u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x5513f3u); RETCHK(0x5513f8u, 0x5513f3u); LOADALL;
  /* 005513f8 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005513fa jne 0x551477 */ if (!ZF_) goto L_00551477;
  /* 005513fc mov esi, 0x655a98 */ { esi = (u32)(0x655a98u); }
  /* 00551401 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00551404 call 0x405bd0 */ esp -= 4; M32(esp) = 0x551409u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x551404u); RETCHK(0x551409u, 0x551404u); LOADALL;
  /* 00551409 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055140b jne 0x551477 */ if (!ZF_) goto L_00551477;
  /* 0055140d mov esi, 0x65525c */ { esi = (u32)(0x65525cu); }
  /* 00551412 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00551415 call 0x405bd0 */ esp -= 4; M32(esp) = 0x55141au; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x551415u); RETCHK(0x55141au, 0x551415u); LOADALL;
  /* 0055141a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055141c jne 0x55144f */ if (!ZF_) goto L_0055144f;
  /* 0055141e mov esi, 0x64f1d8 */ { esi = (u32)(0x64f1d8u); }
  /* 00551423 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00551426 call 0x405bd0 */ esp -= 4; M32(esp) = 0x55142bu; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x551426u); RETCHK(0x55142bu, 0x551426u); LOADALL;
  /* 0055142b test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055142d jne 0x55144f */ if (!ZF_) goto L_0055144f;
  /* 0055142f lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00551432 mov dword ptr [ebx + 0xd18], edi */ { const u32 m_ = (u32)(ebx + 0xd18u); M32(m_) = (u32)(edi); }
  /* 00551438 mov dword ptr [ebx + 0xd1c], edi */ { const u32 m_ = (u32)(ebx + 0xd1cu); M32(m_) = (u32)(edi); }
  /* 0055143e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00551445 call 0x43ee60 */ esp -= 4; M32(esp) = 0x55144au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x551445u); RETCHK(0x55144au, 0x551445u); LOADALL;
  /* 0055144a jmp 0x5515a6 */ goto L_005515a6;
L_0055144f:;
  /* 0055144f lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00551452 mov dword ptr [ebx + 0xd18], 5 */ { const u32 m_ = (u32)(ebx + 0xd18u); M32(m_) = (u32)(0x5u); }
  /* 0055145c mov dword ptr [ebx + 0xd1c], 4 */ { const u32 m_ = (u32)(ebx + 0xd1cu); M32(m_) = (u32)(0x4u); }
  /* 00551466 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0055146d call 0x43ee60 */ esp -= 4; M32(esp) = 0x551472u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x55146du); RETCHK(0x551472u, 0x55146du); LOADALL;
  /* 00551472 jmp 0x5515a6 */ goto L_005515a6;
L_00551477:;
  /* 00551477 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0055147a mov dword ptr [ebx + 0xd18], 4 */ { const u32 m_ = (u32)(ebx + 0xd18u); M32(m_) = (u32)(0x4u); }
  /* 00551484 mov dword ptr [ebx + 0xd1c], 1 */ { const u32 m_ = (u32)(ebx + 0xd1cu); M32(m_) = (u32)(0x1u); }
  /* 0055148e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00551495 call 0x43ee60 */ esp -= 4; M32(esp) = 0x55149au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x551495u); RETCHK(0x55149au, 0x551495u); LOADALL;
  /* 0055149a jmp 0x5515a6 */ goto L_005515a6;
L_0055149f:;
  /* 0055149f mov edi, 0x655a8c */ { edi = (u32)(0x655a8cu); }
  /* 005514a4 mov esi, eax */ { esi = (u32)(eax); }
  /* 005514a6 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 005514ab xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005514ad repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 005514af jne 0x5514e3 */ if (!ZF_) goto L_005514e3;
  /* 005514b1 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 005514b7 mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 005514bd inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005514be mov byte ptr [ebx + 0xd5a], 1 */ { const u32 m_ = (u32)(ebx + 0xd5au); M8(m_) = (u8)(0x1u); }
  /* 005514c5 mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 005514c8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005514c9 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 005514cf call 0x5fe92e */ esp -= 4; M32(esp) = 0x5514d4u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x5514cfu); RETCHK(0x5514d4u, 0x5514cfu); LOADALL;
  /* 005514d4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005514d7 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005514d8 mov dword ptr [ebx + 0xd5c], eax */ { const u32 m_ = (u32)(ebx + 0xd5cu); M32(m_) = (u32)(eax); }
  /* 005514de jmp 0x5515a6 */ goto L_005515a6;
L_005514e3:;
  /* 005514e3 mov esi, eax */ { esi = (u32)(eax); }
  /* 005514e5 mov edi, 0x655a88 */ { edi = (u32)(0x655a88u); }
  /* 005514ea mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 005514ef xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005514f1 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 005514f3 jne 0x5515a6 */ if (!ZF_) goto L_005515a6;
  /* 005514f9 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 005514ff mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00551505 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551506 mov byte ptr [ebx + 0xd59], 1 */ { const u32 m_ = (u32)(ebx + 0xd59u); M8(m_) = (u8)(0x1u); }
  /* 0055150d mov edx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edx = (u32)(M32(m_)); }
  /* 00551510 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551511 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 00551517 call 0x5fe92e */ esp -= 4; M32(esp) = 0x55151cu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x551517u); RETCHK(0x55151cu, 0x551517u); LOADALL;
  /* 0055151c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055151f mov dword ptr [ebx + 0xd60], eax */ { const u32 m_ = (u32)(ebx + 0xd60u); M32(m_) = (u32)(eax); }
  /* 00551525 jmp 0x5515a6 */ goto L_005515a6;
L_00551527:;
  /* 00551527 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 0055152d mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 00551533 mov edx, dword ptr [ecx + eax*4 + 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x4u); edx = (u32)(M32(m_)); }
  /* 00551537 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551538 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 0055153d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055153e lea esi, [ebx + 0x8e1] */ esi = (u32)((u32)(ebx + 0x8e1u));
  /* 00551544 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551545 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 0055154b call 0x5fe7ca */ esp -= 4; M32(esp) = 0x551550u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x55154bu); RETCHK(0x551550u, 0x55154bu); LOADALL;
  /* 00551550 push 0x1ff */ { u32 v_ = 0x1ffu; esp -= 4; M32(esp) = v_; }
  /* 00551555 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551556 push 0x7a6eb8 */ { u32 v_ = 0x7a6eb8u; esp -= 4; M32(esp) = v_; }
  /* 0055155b mov byte ptr [ebx + 0xae0], 0 */ { const u32 m_ = (u32)(ebx + 0xae0u); M8(m_) = (u8)(0x0u); }
  /* 00551562 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x551567u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x551562u); RETCHK(0x551567u, 0x551562u); LOADALL;
  /* 00551567 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055156a mov byte ptr [0x7a70b7], 0 */ { const u32 m_ = (u32)(0x7a70b7u); M8(m_) = (u8)(0x0u); }
  /* 00551571 jmp 0x5515a6 */ goto L_005515a6;
L_00551573:;
  /* 00551573 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 00551579 mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 0055157f mov edx, dword ptr [ecx + eax*4 + 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0x4u); edx = (u32)(M32(m_)); }
  /* 00551583 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551584 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00551589 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 0055158f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551590 lea eax, [ebx + 0x6e1] */ eax = (u32)((u32)(ebx + 0x6e1u));
  /* 00551596 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551597 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x55159cu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x551597u); RETCHK(0x55159cu, 0x551597u); LOADALL;
  /* 0055159c add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055159f mov byte ptr [ebx + 0x8e0], 0 */ { const u32 m_ = (u32)(ebx + 0x8e0u); M8(m_) = (u8)(0x0u); }
L_005515a6:;
  /* 005515a6 mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 005515ac mov ecx, dword ptr [ebp - 0x570] */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); ecx = (u32)(M32(m_)); }
  /* 005515b2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005515b3 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005515b5 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 005515bb jl 0x551090 */ if (LT_) goto L_00551090;
L_005515c1:;
  /* 005515c1 mov ecx, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); ecx = (u32)(M32(m_)); }
  /* 005515c7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005515c8 call 0x5fe99e */ esp -= 4; M32(esp) = 0x5515cdu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x5515c8u); RETCHK(0x5515cdu, 0x5515c8u); LOADALL;
  /* 005515cd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005515d0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_005515d2:;
  /* 005515d2 mov eax, dword ptr [ebx + 0xd18] */ { const u32 m_ = (u32)(ebx + 0xd18u); eax = (u32)(M32(m_)); }
  /* 005515d8 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005515db je 0x5515fe */ if (ZF_) goto L_005515fe;
  /* 005515dd cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005515e0 je 0x5515fe */ if (ZF_) goto L_005515fe;
  /* 005515e2 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005515e4 jne 0x5515fa */ if (!ZF_) goto L_005515fa;
  /* 005515e6 mov al, byte ptr [ebx + 0x6e1] */ { const u32 m_ = (u32)(ebx + 0x6e1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005515ec test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005515ee je 0x5515fe */ if (ZF_) goto L_005515fe;
  /* 005515f0 mov al, byte ptr [ebx + 0x8e1] */ { const u32 m_ = (u32)(ebx + 0x8e1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005515f6 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005515f8 je 0x5515fe */ if (ZF_) goto L_005515fe;
L_005515fa:;
  /* 005515fa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005515fc jmp 0x551603 */ goto L_00551603;
L_005515fe:;
  /* 005515fe mov eax, 1 */ { eax = (u32)(0x1u); }
L_00551603:;
  /* 00551603 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00551605 mov byte ptr [ebx + 0xe0], al */ { const u32 m_ = (u32)(ebx + 0xe0u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0055160b jne 0x551626 */ if (!ZF_) goto L_00551626;
  /* 0055160d cmp dword ptr [0x7a6e94], edi */ { const u32 m_ = (u32)(0x7a6e94u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551613 je 0x551621 */ if (ZF_) goto L_00551621;
  /* 00551615 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 0055161a call 0x550330 */ esp -= 4; M32(esp) = 0x55161fu; SAVEALL; F_00550330(c); ABI_CHECK(0x550330u, 0x55161au); RETCHK(0x55161fu, 0x55161au); LOADALL;
  /* 0055161f jmp 0x551626 */ goto L_00551626;
L_00551621:;
  /* 00551621 call 0x553600 */ esp -= 4; M32(esp) = 0x551626u; SAVEALL; F_00553600(c); ABI_CHECK(0x553600u, 0x551621u); RETCHK(0x551626u, 0x551621u); LOADALL;
L_00551626:;
  /* 00551626 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00551628 call 0x552f00 */ esp -= 4; M32(esp) = 0x55162du; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551628u); RETCHK(0x55162du, 0x551628u); LOADALL;
  /* 0055162d call 0x5531e0 */ esp -= 4; M32(esp) = 0x551632u; SAVEALL; F_005531e0(c); ABI_CHECK(0x5531e0u, 0x55162du); RETCHK(0x551632u, 0x55162du); LOADALL;
  /* 00551632 push 0x3d4ccccd */ { u32 v_ = 0x3d4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 00551637 call 0x552f00 */ esp -= 4; M32(esp) = 0x55163cu; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551637u); RETCHK(0x55163cu, 0x551637u); LOADALL;
  /* 0055163c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055163e call 0x552ff0 */ esp -= 4; M32(esp) = 0x551643u; SAVEALL; F_00552ff0(c); ABI_CHECK(0x552ff0u, 0x55163eu); RETCHK(0x551643u, 0x55163eu); LOADALL;
  /* 00551643 mov ecx, dword ptr [0x7a6e94] */ { const u32 m_ = (u32)(0x7a6e94u); ecx = (u32)(M32(m_)); }
  /* 00551649 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055164b setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 0055164e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055164f call 0x518bb0 */ esp -= 4; M32(esp) = 0x551654u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x55164fu); RETCHK(0x551654u, 0x55164fu); LOADALL;
  /* 00551654 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00551656 call 0x5170c0 */ esp -= 4; M32(esp) = 0x55165bu; SAVEALL; F_005170c0(c); ABI_CHECK(0x5170c0u, 0x551656u); RETCHK(0x55165bu, 0x551656u); LOADALL;
  /* 0055165b push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0055165d mov byte ptr [ebp - 0x571], al */ { const u32 m_ = (u32)(ebp + 0xfffffa8fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00551663 call 0x552f00 */ esp -= 4; M32(esp) = 0x551668u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551663u); RETCHK(0x551668u, 0x551663u); LOADALL;
  /* 00551668 call 0x5531e0 */ esp -= 4; M32(esp) = 0x55166du; SAVEALL; F_005531e0(c); ABI_CHECK(0x5531e0u, 0x551668u); RETCHK(0x55166du, 0x551668u); LOADALL;
  /* 0055166d push 0x3d4ccccd */ { u32 v_ = 0x3d4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 00551672 call 0x552f00 */ esp -= 4; M32(esp) = 0x551677u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551672u); RETCHK(0x551677u, 0x551672u); LOADALL;
  /* 00551677 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00551679 call 0x552ff0 */ esp -= 4; M32(esp) = 0x55167eu; SAVEALL; F_00552ff0(c); ABI_CHECK(0x552ff0u, 0x551679u); RETCHK(0x55167eu, 0x551679u); LOADALL;
  /* 0055167e push 0x648360 */ { u32 v_ = 0x648360u; esp -= 4; M32(esp) = v_; }
  /* 00551683 call 0x556030 */ esp -= 4; M32(esp) = 0x551688u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x551683u); RETCHK(0x551688u, 0x551683u); LOADALL;
  /* 00551688 mov edi, eax */ { edi = (u32)(eax); }
  /* 0055168a call 0x555e40 */ esp -= 4; M32(esp) = 0x55168fu; SAVEALL; F_00555e40(c); ABI_CHECK(0x555e40u, 0x55168au); RETCHK(0x55168fu, 0x55168au); LOADALL;
  /* 0055168f call 0x543680 */ esp -= 4; M32(esp) = 0x551694u; SAVEALL; F_00543680(c); ABI_CHECK(0x543680u, 0x55168fu); RETCHK(0x551694u, 0x55168fu); LOADALL;
  /* 00551694 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551695 mov ecx, 0x655a74 */ { ecx = (u32)(0x655a74u); }
  /* 0055169a call 0x543810 */ esp -= 4; M32(esp) = 0x55169fu; SAVEALL; F_00543810(c); ABI_CHECK(0x543810u, 0x55169au); RETCHK(0x55169fu, 0x55169au); LOADALL;
  /* 0055169f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005516a1 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005516a3 je 0x551a15 */ if (ZF_) goto L_00551a15;
  /* 005516a9 cmp byte ptr [ebp - 0x571], bl */ { const u32 m_ = (u32)(ebp + 0xfffffa8fu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005516af je 0x551a15 */ if (ZF_) goto L_00551a15;
  /* 005516b5 call 0x554450 */ esp -= 4; M32(esp) = 0x5516bau; SAVEALL; F_00554450(c); ABI_CHECK(0x554450u, 0x5516b5u); RETCHK(0x5516bau, 0x5516b5u); LOADALL;
  /* 005516ba push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005516bb call 0x5545b0 */ esp -= 4; M32(esp) = 0x5516c0u; SAVEALL; F_005545b0(c); ABI_CHECK(0x5545b0u, 0x5516bbu); RETCHK(0x5516c0u, 0x5516bbu); LOADALL;
  /* 005516c0 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005516c2 call 0x552f00 */ esp -= 4; M32(esp) = 0x5516c7u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x5516c2u); RETCHK(0x5516c7u, 0x5516c2u); LOADALL;
  /* 005516c7 call 0x5531e0 */ esp -= 4; M32(esp) = 0x5516ccu; SAVEALL; F_005531e0(c); ABI_CHECK(0x5531e0u, 0x5516c7u); RETCHK(0x5516ccu, 0x5516c7u); LOADALL;
  /* 005516cc push 0x3d4ccccd */ { u32 v_ = 0x3d4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 005516d1 call 0x552f00 */ esp -= 4; M32(esp) = 0x5516d6u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x5516d1u); RETCHK(0x5516d6u, 0x5516d1u); LOADALL;
  /* 005516d6 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005516d8 call 0x552ff0 */ esp -= 4; M32(esp) = 0x5516ddu; SAVEALL; F_00552ff0(c); ABI_CHECK(0x552ff0u, 0x5516d8u); RETCHK(0x5516ddu, 0x5516d8u); LOADALL;
  /* 005516dd call 0x4e8c90 */ esp -= 4; M32(esp) = 0x5516e2u; SAVEALL; F_004e8c90(c); ABI_CHECK(0x4e8c90u, 0x5516ddu); RETCHK(0x5516e2u, 0x5516ddu); LOADALL;
  /* 005516e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005516e3 call 0x4e8d30 */ esp -= 4; M32(esp) = 0x5516e8u; SAVEALL; F_004e8d30(c); ABI_CHECK(0x4e8d30u, 0x5516e3u); RETCHK(0x5516e8u, 0x5516e3u); LOADALL;
  /* 005516e8 call 0x54e0d0 */ esp -= 4; M32(esp) = 0x5516edu; SAVEALL; F_0054e0d0(c); ABI_CHECK(0x54e0d0u, 0x5516e8u); RETCHK(0x5516edu, 0x5516e8u); LOADALL;
  /* 005516ed mov edx, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); edx = (u32)(M32(m_)); }
  /* 005516f3 mov cl, byte ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005516f6 mov esi, eax */ { esi = (u32)(eax); }
  /* 005516f8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005516fa cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005516fc setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005516ff mov edi, 0x655514 */ { edi = (u32)(0x655514u); }
  /* 00551704 mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 00551709 mov dword ptr [ebp - 0x56c], esi */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); M32(m_) = (u32)(esi); }
  /* 0055170f inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551710 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 00551716 mov dword ptr [ebp - 0x570], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(eax); }
  /* 0055171c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055171e repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00551720 jne 0x551733 */ if (!ZF_) goto L_00551733;
  /* 00551722 mov ecx, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); ecx = (u32)(M32(m_)); }
  /* 00551728 mov dword ptr [ebp - 0x570], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(ecx); }
  /* 0055172e jmp 0x5517f7 */ goto L_005517f7;
L_00551733:;
  /* 00551733 mov esi, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); esi = (u32)(M32(m_)); }
  /* 00551739 mov edi, 0x648674 */ { edi = (u32)(0x648674u); }
  /* 0055173e mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 00551743 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00551745 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00551747 jne 0x551785 */ if (!ZF_) goto L_00551785;
  /* 00551749 lea ecx, [edx + 0x20] */ ecx = (u32)((u32)(edx + 0x20u));
  /* 0055174c mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055174e mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00551750 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00551753 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 00551756 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00551759 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0055175c mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055175f mov edi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edi = (u32)(M32(m_)); }
  /* 00551762 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00551764 mov eax, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); eax = (u32)(M32(m_)); }
  /* 00551767 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055176a mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 0055176d mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00551770 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00551773 mov byte ptr [ebp - 0x14], bl */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00551776 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00551779 mov dword ptr [ecx + 0xc], esi */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(esi); }
  /* 0055177c mov dword ptr [ebp - 0x570], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(ebx); }
  /* 00551782 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
L_00551785:;
  /* 00551785 mov esi, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); esi = (u32)(M32(m_)); }
  /* 0055178b mov edi, 0x6427e0 */ { edi = (u32)(0x6427e0u); }
  /* 00551790 mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 00551795 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00551797 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00551799 jne 0x5517d5 */ if (!ZF_) goto L_005517d5;
  /* 0055179b lea ecx, [edx + 0x20] */ ecx = (u32)((u32)(edx + 0x20u));
  /* 0055179e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 005517a0 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 005517a2 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 005517a5 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 005517a8 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 005517ab mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 005517ae mov edi, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); edi = (u32)(M32(m_)); }
  /* 005517b1 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 005517b3 mov dword ptr [ecx + 4], edx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(edx); }
  /* 005517b6 mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 005517b9 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 005517bc mov byte ptr [ebp - 0x14], bl */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005517bf mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005517c2 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 005517c5 mov dword ptr [ecx + 0xc], esi */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(esi); }
  /* 005517c8 mov dword ptr [ebp - 0x570], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(0x1u); }
  /* 005517d2 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
L_005517d5:;
  /* 005517d5 mov esi, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); esi = (u32)(M32(m_)); }
  /* 005517db mov edi, 0x6437e8 */ { edi = (u32)(0x6437e8u); }
  /* 005517e0 mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 005517e5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 005517e7 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 005517e9 jne 0x5517f7 */ if (!ZF_) goto L_005517f7;
  /* 005517eb mov eax, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); eax = (u32)(M32(m_)); }
  /* 005517f1 mov dword ptr [ebp - 0x570], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(eax); }
L_005517f7:;
  /* 005517f7 push 0x3d4 */ { u32 v_ = 0x3d4u; esp -= 4; M32(esp) = v_; }
  /* 005517fc call 0x5fe934 */ esp -= 4; M32(esp) = 0x551801u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5517fcu); RETCHK(0x551801u, 0x5517fcu); LOADALL;
  /* 00551801 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551804 mov dword ptr [ebp - 0x570], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(eax); }
  /* 0055180a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055180c mov dword ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x4u); }
  /* 00551813 je 0x55181d */ if (ZF_) goto L_0055181d;
  /* 00551815 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551816 call 0x530ba0 */ esp -= 4; M32(esp) = 0x55181bu; SAVEALL; F_00530ba0(c); ABI_CHECK(0x530ba0u, 0x551816u); RETCHK(0x55181bu, 0x551816u); LOADALL;
  /* 0055181b jmp 0x55181f */ goto L_0055181f;
L_0055181d:;
  /* 0055181d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0055181f:;
  /* 0055181f or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00551822 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00551825 mov edi, dword ptr [ebp - 0x578] */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); edi = (u32)(M32(m_)); }
  /* 0055182b push 0x648674 */ { u32 v_ = 0x648674u; esp -= 4; M32(esp) = v_; }
  /* 00551830 mov dword ptr [edi + 0xf64], eax */ { const u32 m_ = (u32)(edi + 0xf64u); M32(m_) = (u32)(eax); }
  /* 00551836 mov dword ptr [0x7a553c], 0x3f000000 */ { const u32 m_ = (u32)(0x7a553cu); M32(m_) = (u32)(0x3f000000u); }
  /* 00551840 call 0x54e140 */ esp -= 4; M32(esp) = 0x551845u; SAVEALL; F_0054e140(c); ABI_CHECK(0x54e140u, 0x551840u); RETCHK(0x551845u, 0x551840u); LOADALL;
  /* 00551845 mov eax, dword ptr [edi + 0xf64] */ { const u32 m_ = (u32)(edi + 0xf64u); eax = (u32)(M32(m_)); }
  /* 0055184b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055184e call 0x530d90 */ esp -= 4; M32(esp) = 0x551853u; SAVEALL; F_00530d90(c); ABI_CHECK(0x530d90u, 0x55184eu); RETCHK(0x551853u, 0x55184eu); LOADALL;
  /* 00551853 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551855 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00551858 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 0055185a mov byte ptr [edi + 0xf98], cl */ { const u32 m_ = (u32)(edi + 0xf98u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00551860 call 0x552f00 */ esp -= 4; M32(esp) = 0x551865u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551860u); RETCHK(0x551865u, 0x551860u); LOADALL;
  /* 00551865 call 0x5531e0 */ esp -= 4; M32(esp) = 0x55186au; SAVEALL; F_005531e0(c); ABI_CHECK(0x5531e0u, 0x551865u); RETCHK(0x55186au, 0x551865u); LOADALL;
  /* 0055186a push 0x3d4ccccd */ { u32 v_ = 0x3d4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 0055186f call 0x552f00 */ esp -= 4; M32(esp) = 0x551874u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x55186fu); RETCHK(0x551874u, 0x55186fu); LOADALL;
  /* 00551874 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00551876 call 0x552ff0 */ esp -= 4; M32(esp) = 0x55187bu; SAVEALL; F_00552ff0(c); ABI_CHECK(0x552ff0u, 0x551876u); RETCHK(0x55187bu, 0x551876u); LOADALL;
  /* 0055187b call 0x518bb0 */ esp -= 4; M32(esp) = 0x551880u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x55187bu); RETCHK(0x551880u, 0x55187bu); LOADALL;
  /* 00551880 call 0x518360 */ esp -= 4; M32(esp) = 0x551885u; SAVEALL; F_00518360(c); ABI_CHECK(0x518360u, 0x551880u); RETCHK(0x551885u, 0x551880u); LOADALL;
  /* 00551885 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551886 call 0x4fb430 */ esp -= 4; M32(esp) = 0x55188bu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x551886u); RETCHK(0x55188bu, 0x551886u); LOADALL;
  /* 0055188b call 0x4fb490 */ esp -= 4; M32(esp) = 0x551890u; SAVEALL; F_004fb490(c); ABI_CHECK(0x4fb490u, 0x55188bu); RETCHK(0x551890u, 0x55188bu); LOADALL;
  /* 00551890 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551892 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00551895 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00551897 je 0x551a15 */ if (ZF_) goto L_00551a15;
  /* 0055189d push 0x120 */ { u32 v_ = 0x120u; esp -= 4; M32(esp) = v_; }
  /* 005518a2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5518a7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5518a2u); RETCHK(0x5518a7u, 0x5518a2u); LOADALL;
  /* 005518a7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005518aa mov dword ptr [ebp - 0x578], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); M32(m_) = (u32)(eax); }
  /* 005518b0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005518b2 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 005518b9 je 0x5518c9 */ if (ZF_) goto L_005518c9;
  /* 005518bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005518bc call 0x40aeb0 */ esp -= 4; M32(esp) = 0x5518c1u; SAVEALL; F_0040aeb0(c); ABI_CHECK(0x40aeb0u, 0x5518bcu); RETCHK(0x5518c1u, 0x5518bcu); LOADALL;
  /* 005518c1 mov dword ptr [ebp - 0x570], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(eax); }
  /* 005518c7 jmp 0x5518cf */ goto L_005518cf;
L_005518c9:;
  /* 005518c9 mov dword ptr [ebp - 0x570], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); M32(m_) = (u32)(ebx); }
L_005518cf:;
  /* 005518cf push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 005518d4 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 005518d7 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5518dcu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5518d7u); RETCHK(0x5518dcu, 0x5518d7u); LOADALL;
  /* 005518dc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005518df mov dword ptr [ebp - 0x578], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); M32(m_) = (u32)(eax); }
  /* 005518e5 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005518e7 mov dword ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x6u); }
  /* 005518ee je 0x551902 */ if (ZF_) goto L_00551902;
  /* 005518f0 mov esi, eax */ { esi = (u32)(eax); }
  /* 005518f2 call 0x4061b0 */ esp -= 4; M32(esp) = 0x5518f7u; SAVEALL; F_004061b0(c); ABI_CHECK(0x4061b0u, 0x5518f2u); RETCHK(0x5518f7u, 0x5518f2u); LOADALL;
  /* 005518f7 mov dword ptr [ebp - 0x56c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); M32(m_) = (u32)(eax); }
  /* 005518fd or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00551900 jmp 0x551908 */ goto L_00551908;
L_00551902:;
  /* 00551902 mov dword ptr [ebp - 0x56c], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); M32(m_) = (u32)(ebx); }
L_00551908:;
  /* 00551908 push 0x184 */ { u32 v_ = 0x184u; esp -= 4; M32(esp) = v_; }
  /* 0055190d mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00551910 call 0x5fe934 */ esp -= 4; M32(esp) = 0x551915u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x551910u); RETCHK(0x551915u, 0x551910u); LOADALL;
  /* 00551915 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551918 mov dword ptr [ebp - 0x578], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); M32(m_) = (u32)(eax); }
  /* 0055191e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551920 mov dword ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7u); }
  /* 00551927 je 0x55193b */ if (ZF_) goto L_0055193b;
  /* 00551929 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055192b call 0x4aca80 */ esp -= 4; M32(esp) = 0x551930u; SAVEALL; F_004aca80(c); ABI_CHECK(0x4aca80u, 0x55192bu); RETCHK(0x551930u, 0x55192bu); LOADALL;
  /* 00551930 mov dword ptr [ebp - 0x568], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(eax); }
  /* 00551936 or esi, 0xffffffff */ { u32 a_ = esi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00551939 jmp 0x551941 */ goto L_00551941;
L_0055193b:;
  /* 0055193b mov dword ptr [ebp - 0x568], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); M32(m_) = (u32)(ebx); }
L_00551941:;
  /* 00551941 push 0x42c */ { u32 v_ = 0x42cu; esp -= 4; M32(esp) = v_; }
  /* 00551946 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00551949 call 0x5fe934 */ esp -= 4; M32(esp) = 0x55194eu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x551949u); RETCHK(0x55194eu, 0x551949u); LOADALL;
  /* 0055194e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551951 mov dword ptr [ebp - 0x578], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); M32(m_) = (u32)(eax); }
  /* 00551957 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551959 mov dword ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x8u); }
  /* 00551960 je 0x551970 */ if (ZF_) goto L_00551970;
  /* 00551962 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551963 call 0x40e520 */ esp -= 4; M32(esp) = 0x551968u; SAVEALL; F_0040e520(c); ABI_CHECK(0x40e520u, 0x551963u); RETCHK(0x551968u, 0x551963u); LOADALL;
  /* 00551968 mov dword ptr [ebp - 0x578], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); M32(m_) = (u32)(eax); }
  /* 0055196e jmp 0x551976 */ goto L_00551976;
L_00551970:;
  /* 00551970 mov dword ptr [ebp - 0x578], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); M32(m_) = (u32)(ebx); }
L_00551976:;
  /* 00551976 push 0xd21c */ { u32 v_ = 0xd21cu; esp -= 4; M32(esp) = v_; }
  /* 0055197b mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0055197e call 0x5fe934 */ esp -= 4; M32(esp) = 0x551983u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x55197eu); RETCHK(0x551983u, 0x55197eu); LOADALL;
  /* 00551983 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551986 mov dword ptr [ebp - 0x584], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa7cu); M32(m_) = (u32)(eax); }
  /* 0055198c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055198e mov dword ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x9u); }
  /* 00551995 je 0x5519a1 */ if (ZF_) goto L_005519a1;
  /* 00551997 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551998 call 0x4b1cf0 */ esp -= 4; M32(esp) = 0x55199du; SAVEALL; F_004b1cf0(c); ABI_CHECK(0x4b1cf0u, 0x551998u); RETCHK(0x55199du, 0x551998u); LOADALL;
  /* 0055199d mov esi, eax */ { esi = (u32)(eax); }
  /* 0055199f jmp 0x5519a3 */ goto L_005519a3;
L_005519a1:;
  /* 005519a1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_005519a3:;
  /* 005519a3 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005519aa mov edx, dword ptr [ebp - 0x570] */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); edx = (u32)(M32(m_)); }
  /* 005519b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005519b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005519b2 call 0x54bd90 */ esp -= 4; M32(esp) = 0x5519b7u; SAVEALL; F_0054bd90(c); ABI_CHECK(0x54bd90u, 0x5519b2u); RETCHK(0x5519b7u, 0x5519b2u); LOADALL;
  /* 005519b7 mov eax, dword ptr [ebp - 0x56c] */ { const u32 m_ = (u32)(ebp + 0xfffffa94u); eax = (u32)(M32(m_)); }
  /* 005519bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005519be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005519bf call 0x54bd90 */ esp -= 4; M32(esp) = 0x5519c4u; SAVEALL; F_0054bd90(c); ABI_CHECK(0x54bd90u, 0x5519bfu); RETCHK(0x5519c4u, 0x5519bfu); LOADALL;
  /* 005519c4 mov ecx, dword ptr [ebp - 0x568] */ { const u32 m_ = (u32)(ebp + 0xfffffa98u); ecx = (u32)(M32(m_)); }
  /* 005519ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005519cb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005519cc call 0x54bd90 */ esp -= 4; M32(esp) = 0x5519d1u; SAVEALL; F_0054bd90(c); ABI_CHECK(0x54bd90u, 0x5519ccu); RETCHK(0x5519d1u, 0x5519ccu); LOADALL;
  /* 005519d1 mov edx, dword ptr [ebp - 0x578] */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); edx = (u32)(M32(m_)); }
  /* 005519d7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005519d8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005519d9 call 0x54bd90 */ esp -= 4; M32(esp) = 0x5519deu; SAVEALL; F_0054bd90(c); ABI_CHECK(0x54bd90u, 0x5519d9u); RETCHK(0x5519deu, 0x5519d9u); LOADALL;
  /* 005519de push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005519df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005519e0 call 0x54bd90 */ esp -= 4; M32(esp) = 0x5519e5u; SAVEALL; F_0054bd90(c); ABI_CHECK(0x54bd90u, 0x5519e0u); RETCHK(0x5519e5u, 0x5519e0u); LOADALL;
  /* 005519e5 cmp dword ptr [0x7a6e94], ebx */ { const u32 m_ = (u32)(0x7a6e94u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005519eb setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 005519ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005519ef mov eax, 0x7a81a8 */ { eax = (u32)(0x7a81a8u); }
  /* 005519f4 call 0x531740 */ esp -= 4; M32(esp) = 0x5519f9u; SAVEALL; F_00531740(c); ABI_CHECK(0x531740u, 0x5519f4u); RETCHK(0x5519f9u, 0x5519f4u); LOADALL;
  /* 005519f9 cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005519fb mov byte ptr [ebp - 0x571], al */ { const u32 m_ = (u32)(ebp + 0xfffffa8fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00551a01 jne 0x551a1c */ if (!ZF_) goto L_00551a1c;
  /* 00551a03 push 0x655a30 */ { u32 v_ = 0x655a30u; esp -= 4; M32(esp) = v_; }
  /* 00551a08 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 00551a0d call 0x541010 */ esp -= 4; M32(esp) = 0x551a12u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x551a0du); RETCHK(0x551a12u, 0x551a0du); LOADALL;
  /* 00551a12 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00551a15:;
  /* 00551a15 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00551a17 jmp 0x551bbe */ goto L_00551bbe;
L_00551a1c:;
  /* 00551a1c mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 00551a21 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551a23 je 0x551aa2 */ if (ZF_) goto L_00551aa2;
  /* 00551a25 movzx ecx, word ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); ecx = (u32)(M16(m_)); }
  /* 00551a29 mov dword ptr [0x7a822c], ecx */ { const u32 m_ = (u32)(0x7a822cu); M32(m_) = (u32)(ecx); }
  /* 00551a2f mov dword ptr [0x7a8228], ecx */ { const u32 m_ = (u32)(0x7a8228u); M32(m_) = (u32)(ecx); }
  /* 00551a35 movzx ecx, word ptr [eax + 0x36] */ { const u32 m_ = (u32)(eax + 0x36u); ecx = (u32)(M16(m_)); }
  /* 00551a39 mov dword ptr [0x7a8234], ecx */ { const u32 m_ = (u32)(0x7a8234u); M32(m_) = (u32)(ecx); }
  /* 00551a3f mov dword ptr [0x7a8230], ecx */ { const u32 m_ = (u32)(0x7a8230u); M32(m_) = (u32)(ecx); }
  /* 00551a45 movzx ecx, word ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); ecx = (u32)(M16(m_)); }
  /* 00551a49 mov dword ptr [0x7a823c], ecx */ { const u32 m_ = (u32)(0x7a823cu); M32(m_) = (u32)(ecx); }
  /* 00551a4f mov dword ptr [0x7a8238], ecx */ { const u32 m_ = (u32)(0x7a8238u); M32(m_) = (u32)(ecx); }
  /* 00551a55 movzx ecx, word ptr [eax + 0x3a] */ { const u32 m_ = (u32)(eax + 0x3au); ecx = (u32)(M16(m_)); }
  /* 00551a59 mov dword ptr [0x7a8244], ecx */ { const u32 m_ = (u32)(0x7a8244u); M32(m_) = (u32)(ecx); }
  /* 00551a5f mov dword ptr [0x7a8240], ecx */ { const u32 m_ = (u32)(0x7a8240u); M32(m_) = (u32)(ecx); }
  /* 00551a65 movzx ecx, word ptr [eax + 0x40] */ { const u32 m_ = (u32)(eax + 0x40u); ecx = (u32)(M16(m_)); }
  /* 00551a69 mov dword ptr [0x7a824c], ecx */ { const u32 m_ = (u32)(0x7a824cu); M32(m_) = (u32)(ecx); }
  /* 00551a6f mov dword ptr [0x7a8248], ecx */ { const u32 m_ = (u32)(0x7a8248u); M32(m_) = (u32)(ecx); }
  /* 00551a75 movzx ecx, word ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ecx = (u32)(M16(m_)); }
  /* 00551a79 mov dword ptr [0x7a8254], ecx */ { const u32 m_ = (u32)(0x7a8254u); M32(m_) = (u32)(ecx); }
  /* 00551a7f mov dword ptr [0x7a8250], ecx */ { const u32 m_ = (u32)(0x7a8250u); M32(m_) = (u32)(ecx); }
  /* 00551a85 movzx eax, word ptr [eax + 0x3e] */ { const u32 m_ = (u32)(eax + 0x3eu); eax = (u32)(M16(m_)); }
  /* 00551a89 mov dword ptr [0x7a825c], eax */ { const u32 m_ = (u32)(0x7a825cu); M32(m_) = (u32)(eax); }
  /* 00551a8e mov dword ptr [0x7a8258], eax */ { const u32 m_ = (u32)(0x7a8258u); M32(m_) = (u32)(eax); }
  /* 00551a93 mov eax, 0x38 */ { eax = (u32)(0x38u); }
  /* 00551a98 mov dword ptr [0x7a827c], eax */ { const u32 m_ = (u32)(0x7a827cu); M32(m_) = (u32)(eax); }
  /* 00551a9d mov dword ptr [0x7a8278], eax */ { const u32 m_ = (u32)(0x7a8278u); M32(m_) = (u32)(eax); }
L_00551aa2:;
  /* 00551aa2 push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00551aa4 call 0x552f00 */ esp -= 4; M32(esp) = 0x551aa9u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551aa4u); RETCHK(0x551aa9u, 0x551aa4u); LOADALL;
  /* 00551aa9 call 0x5531e0 */ esp -= 4; M32(esp) = 0x551aaeu; SAVEALL; F_005531e0(c); ABI_CHECK(0x5531e0u, 0x551aa9u); RETCHK(0x551aaeu, 0x551aa9u); LOADALL;
  /* 00551aae push 0x3d4ccccd */ { u32 v_ = 0x3d4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 00551ab3 call 0x552f00 */ esp -= 4; M32(esp) = 0x551ab8u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551ab3u); RETCHK(0x551ab8u, 0x551ab3u); LOADALL;
  /* 00551ab8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00551aba call 0x552ff0 */ esp -= 4; M32(esp) = 0x551abfu; SAVEALL; F_00552ff0(c); ABI_CHECK(0x552ff0u, 0x551abau); RETCHK(0x551abfu, 0x551abau); LOADALL;
  /* 00551abf mov byte ptr [edi + 0xf99], 1 */ { const u32 m_ = (u32)(edi + 0xf99u); M8(m_) = (u8)(0x1u); }
  /* 00551ac6 mov dword ptr [edi + 0xcc], ebx */ { const u32 m_ = (u32)(edi + 0xccu); M32(m_) = (u32)(ebx); }
  /* 00551acc mov dword ptr [edi + 0xd0], ebx */ { const u32 m_ = (u32)(edi + 0xd0u); M32(m_) = (u32)(ebx); }
  /* 00551ad2 mov dword ptr [edi + 0xdc], ebx */ { const u32 m_ = (u32)(edi + 0xdcu); M32(m_) = (u32)(ebx); }
  /* 00551ad8 mov byte ptr [0x7a6e23], bl */ { const u32 m_ = (u32)(0x7a6e23u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00551ade call 0x404690 */ esp -= 4; M32(esp) = 0x551ae3u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x551adeu); RETCHK(0x551ae3u, 0x551adeu); LOADALL;
  /* 00551ae3 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551ae5 call 0x432a50 */ esp -= 4; M32(esp) = 0x551aeau; SAVEALL; F_00432a50(c); ABI_CHECK(0x432a50u, 0x551ae5u); RETCHK(0x551aeau, 0x551ae5u); LOADALL;
  /* 00551aea call 0x404700 */ esp -= 4; M32(esp) = 0x551aefu; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x551aeau); RETCHK(0x551aefu, 0x551aeau); LOADALL;
  /* 00551aef mov esi, eax */ { esi = (u32)(eax); }
  /* 00551af1 call 0x483370 */ esp -= 4; M32(esp) = 0x551af6u; SAVEALL; F_00483370(c); ABI_CHECK(0x483370u, 0x551af1u); RETCHK(0x551af6u, 0x551af1u); LOADALL;
  /* 00551af6 call 0x404770 */ esp -= 4; M32(esp) = 0x551afbu; SAVEALL; F_00404770(c); ABI_CHECK(0x404770u, 0x551af6u); RETCHK(0x551afbu, 0x551af6u); LOADALL;
  /* 00551afb mov esi, eax */ { esi = (u32)(eax); }
  /* 00551afd call 0x491550 */ esp -= 4; M32(esp) = 0x551b02u; SAVEALL; F_00491550(c); ABI_CHECK(0x491550u, 0x551afdu); RETCHK(0x551b02u, 0x551afdu); LOADALL;
  /* 00551b02 call 0x4047e0 */ esp -= 4; M32(esp) = 0x551b07u; SAVEALL; F_004047e0(c); ABI_CHECK(0x4047e0u, 0x551b02u); RETCHK(0x551b07u, 0x551b02u); LOADALL;
  /* 00551b07 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551b09 call 0x49b140 */ esp -= 4; M32(esp) = 0x551b0eu; SAVEALL; F_0049b140(c); ABI_CHECK(0x49b140u, 0x551b09u); RETCHK(0x551b0eu, 0x551b09u); LOADALL;
  /* 00551b0e mov esi, dword ptr [0x62e578] */ { const u32 m_ = (u32)(0x62e578u); esi = (u32)(M32(m_)); }
  /* 00551b14 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551b15 lea ecx, [ebp - 0x580] */ ecx = (u32)((u32)(ebp + 0xfffffa80u));
  /* 00551b1b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00551b1c push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00551b1e push 0x3a */ { u32 v_ = 0x3au; esp -= 4; M32(esp) = v_; }
  /* 00551b20 mov dword ptr [0x7a553c], 0x3f800000 */ { const u32 m_ = (u32)(0x7a553cu); M32(m_) = (u32)(0x3f800000u); }
  /* 00551b2a mov dword ptr [ebp - 0x580], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffa80u); M32(m_) = (u32)(0x8u); }
  /* 00551b34 mov dword ptr [ebp - 0x57c], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffa84u); M32(m_) = (u32)(ebx); }
  /* 00551b3a call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x551b3cu; SAVEALL; call_ind(c, t_); RETCHK(0x551b3cu, 0x551b3au); LOADALL; }
  /* 00551b3c mov eax, dword ptr [ebp - 0x57c] */ { const u32 m_ = (u32)(ebp + 0xfffffa84u); eax = (u32)(M32(m_)); }
  /* 00551b42 mov edx, eax */ { edx = (u32)(eax); }
  /* 00551b44 and eax, 0xfffffffb */ { u32 a_ = eax, b_ = 0xfffffffbu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00551b47 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551b48 mov dword ptr [ebp - 0x57c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffa84u); M32(m_) = (u32)(eax); }
  /* 00551b4e lea eax, [ebp - 0x580] */ eax = (u32)((u32)(ebp + 0xfffffa80u));
  /* 00551b54 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551b55 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00551b58 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00551b5a and dl, 1 */ { u32 a_ = (edx & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00551b5d push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 00551b5f mov byte ptr [edi + 0xf9b], dl */ { const u32 m_ = (u32)(edi + 0xf9bu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00551b65 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x551b67u; SAVEALL; call_ind(c, t_); RETCHK(0x551b67u, 0x551b65u); LOADALL; }
  /* 00551b67 call 0x54e270 */ esp -= 4; M32(esp) = 0x551b6cu; SAVEALL; F_0054e270(c); ABI_CHECK(0x54e270u, 0x551b67u); RETCHK(0x551b6cu, 0x551b67u); LOADALL;
  /* 00551b6c push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00551b6e mov dword ptr [edi + 0xcf4], eax */ { const u32 m_ = (u32)(edi + 0xcf4u); M32(m_) = (u32)(eax); }
  /* 00551b74 call 0x552f00 */ esp -= 4; M32(esp) = 0x551b79u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551b74u); RETCHK(0x551b79u, 0x551b74u); LOADALL;
  /* 00551b79 call 0x5531e0 */ esp -= 4; M32(esp) = 0x551b7eu; SAVEALL; F_005531e0(c); ABI_CHECK(0x5531e0u, 0x551b79u); RETCHK(0x551b7eu, 0x551b79u); LOADALL;
  /* 00551b7e push 0x3d4ccccd */ { u32 v_ = 0x3d4ccccdu; esp -= 4; M32(esp) = v_; }
  /* 00551b83 call 0x552f00 */ esp -= 4; M32(esp) = 0x551b88u; SAVEALL; F_00552f00(c); ABI_CHECK(0x552f00u, 0x551b83u); RETCHK(0x551b88u, 0x551b83u); LOADALL;
  /* 00551b88 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00551b8a call 0x552ff0 */ esp -= 4; M32(esp) = 0x551b8fu; SAVEALL; F_00552ff0(c); ABI_CHECK(0x552ff0u, 0x551b8au); RETCHK(0x551b8fu, 0x551b8au); LOADALL;
  /* 00551b8f call 0x439000 */ esp -= 4; M32(esp) = 0x551b94u; SAVEALL; F_00439000(c); ABI_CHECK(0x439000u, 0x551b8fu); RETCHK(0x551b94u, 0x551b8fu); LOADALL;
  /* 00551b94 mov ecx, dword ptr [ebp - 0x570] */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); ecx = (u32)(M32(m_)); }
  /* 00551b9a mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00551b9c call dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x551b9fu; SAVEALL; call_ind(c, t_); RETCHK(0x551b9fu, 0x551b9cu); LOADALL; }
  /* 00551b9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551ba0 mov eax, edi */ { eax = (u32)(edi); }
  /* 00551ba2 call 0x54be90 */ esp -= 4; M32(esp) = 0x551ba7u; SAVEALL; F_0054be90(c); ABI_CHECK(0x54be90u, 0x551ba2u); RETCHK(0x551ba7u, 0x551ba2u); LOADALL;
  /* 00551ba7 call 0x558f50 */ esp -= 4; M32(esp) = 0x551bacu; SAVEALL; F_00558f50(c); ABI_CHECK(0x558f50u, 0x551ba7u); RETCHK(0x551bacu, 0x551ba7u); LOADALL;
  /* 00551bac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551bae je 0x551bb8 */ if (ZF_) goto L_00551bb8;
  /* 00551bb0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00551bb2 call dword ptr [0x62e520] */ { const u32 m_ = (u32)(0x62e520u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x551bb8u; SAVEALL; call_ind(c, t_); RETCHK(0x551bb8u, 0x551bb2u); LOADALL; }
L_00551bb8:;
  /* 00551bb8 mov al, byte ptr [ebp - 0x571] */ { const u32 m_ = (u32)(ebp + 0xfffffa8fu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
L_00551bbe:;
  /* 00551bbe mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00551bc1 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00551bc2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00551bc3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00551bca mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00551bcd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00551bce call 0x61af31 */ esp -= 4; M32(esp) = 0x551bd3u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x551bceu); RETCHK(0x551bd3u, 0x551bceu); LOADALL;
  /* 00551bd3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00551bd5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00551bd6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00551be0(CPU *c) {
  NATIVE_HOOK(0x551be0u) REGS; LOADALL;
L_00551be0:;
  /* 00551be0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00551be1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00551be3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551be6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551be7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551be8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551be9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00551beb call 0x601668 */ esp -= 4; M32(esp) = 0x551bf0u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x551bebu); RETCHK(0x551bf0u, 0x551bebu); LOADALL;
  /* 00551bf0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00551bf2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00551bf4 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00551bf6 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00551bf8 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00551bfa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551bfb call dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x551c01u; SAVEALL; call_ind(c, t_); RETCHK(0x551c01u, 0x551bfbu); LOADALL; }
  /* 00551c01 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00551c04 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551c05 mov eax, esi */ { eax = (u32)(esi); }
  /* 00551c07 call 0x552c10 */ esp -= 4; M32(esp) = 0x551c0cu; SAVEALL; F_00552c10(c); ABI_CHECK(0x552c10u, 0x551c07u); RETCHK(0x551c0cu, 0x551c07u); LOADALL;
  /* 00551c0c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00551c0e call 0x4019a0 */ esp -= 4; M32(esp) = 0x551c13u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x551c0eu); RETCHK(0x551c13u, 0x551c0eu); LOADALL;
  /* 00551c13 mov edi, eax */ { edi = (u32)(eax); }
  /* 00551c15 mov eax, dword ptr [edi + 0xc30] */ { const u32 m_ = (u32)(edi + 0xc30u); eax = (u32)(M32(m_)); }
  /* 00551c1b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551c1e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551c20 je 0x551c56 */ if (ZF_) goto L_00551c56;
  /* 00551c22 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00551c25 fmul dword ptr [0x657100] */ { const u32 m_ = (u32)(0x657100u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00551c2b call 0x61b154 */ esp -= 4; M32(esp) = 0x551c30u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x551c2bu); RETCHK(0x551c30u, 0x551c2bu); LOADALL;
  /* 00551c30 mov ecx, dword ptr [edi + 0xc34] */ { const u32 m_ = (u32)(edi + 0xc34u); ecx = (u32)(M32(m_)); }
  /* 00551c36 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00551c38 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00551c3a cdq */ edx = (u32)((s32)eax >> 31);
  /* 00551c3b mov ecx, 0x3e8 */ { ecx = (u32)(0x3e8u); }
  /* 00551c40 idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x551c40u); eax = q_; edx = r_; }
  /* 00551c42 mov ecx, dword ptr [edi + 0xc30] */ { const u32 m_ = (u32)(edi + 0xc30u); ecx = (u32)(M32(m_)); }
  /* 00551c48 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00551c4a mov dword ptr [edi + 0xc30], ecx */ { const u32 m_ = (u32)(edi + 0xc30u); M32(m_) = (u32)(ecx); }
  /* 00551c50 mov dword ptr [edi + 0xc34], edx */ { const u32 m_ = (u32)(edi + 0xc34u); M32(m_) = (u32)(edx); }
L_00551c56:;
  /* 00551c56 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551c57 call 0x518bb0 */ esp -= 4; M32(esp) = 0x551c5cu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x551c57u); RETCHK(0x551c5cu, 0x551c57u); LOADALL;
  /* 00551c5c mov edi, eax */ { edi = (u32)(eax); }
  /* 00551c5e call 0x5179f0 */ esp -= 4; M32(esp) = 0x551c63u; SAVEALL; F_005179f0(c); ABI_CHECK(0x5179f0u, 0x551c5eu); RETCHK(0x551c63u, 0x551c5eu); LOADALL;
  /* 00551c63 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551c64 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00551c66 call 0x54bc40 */ esp -= 4; M32(esp) = 0x551c6bu; SAVEALL; F_0054bc40(c); ABI_CHECK(0x54bc40u, 0x551c66u); RETCHK(0x551c6bu, 0x551c66u); LOADALL;
  /* 00551c6b call 0x4fb430 */ esp -= 4; M32(esp) = 0x551c70u; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x551c6bu); RETCHK(0x551c70u, 0x551c6bu); LOADALL;
  /* 00551c70 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551c71 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551c72 call 0x4fb970 */ esp -= 4; M32(esp) = 0x551c77u; SAVEALL; F_004fb970(c); ABI_CHECK(0x4fb970u, 0x551c72u); RETCHK(0x551c77u, 0x551c72u); LOADALL;
  /* 00551c77 mov eax, dword ptr [esi + 0xf64] */ { const u32 m_ = (u32)(esi + 0xf64u); eax = (u32)(M32(m_)); }
  /* 00551c7d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00551c7f cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551c81 je 0x551c93 */ if (ZF_) goto L_00551c93;
  /* 00551c83 mov al, byte ptr [esi + 0xf98] */ { const u32 m_ = (u32)(esi + 0xf98u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00551c89 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00551c8b je 0x551c93 */ if (ZF_) goto L_00551c93;
  /* 00551c8d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551c8e call 0x530e60 */ esp -= 4; M32(esp) = 0x551c93u; SAVEALL; F_00530e60(c); ABI_CHECK(0x530e60u, 0x551c8eu); RETCHK(0x551c93u, 0x551c8eu); LOADALL;
L_00551c93:;
  /* 00551c93 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551c94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551c95 call 0x54c230 */ esp -= 4; M32(esp) = 0x551c9au; SAVEALL; F_0054c230(c); ABI_CHECK(0x54c230u, 0x551c95u); RETCHK(0x551c9au, 0x551c95u); LOADALL;
  /* 00551c9a fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00551c9d fadd dword ptr [esi + 0xd0] */ { const u32 m_ = (u32)(esi + 0xd0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00551ca3 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551ca6 fst dword ptr [esi + 0xd0] */ { const u32 m_ = (u32)(esi + 0xd0u); MF32(m_) = (float)ST(0); }
  /* 00551cac fcomp dword ptr [0x656f44] */ { const u32 m_ = (u32)(0x656f44u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00551cb2 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00551cb4 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00551cb7 jne 0x551d0f */ if (!ZF_) goto L_00551d0f;
  /* 00551cb9 call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x551cbfu; SAVEALL; call_ind(c, t_); RETCHK(0x551cbfu, 0x551cb9u); LOADALL; }
  /* 00551cbf mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00551cc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551cc2 mov dword ptr [ebp - 8], 0x10000001 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x10000001u); }
  /* 00551cc9 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00551ccc mov dword ptr [esi + 0xd0], edi */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(edi); }
  /* 00551cd2 mov dword ptr [esi + 0xd4], edi */ { const u32 m_ = (u32)(esi + 0xd4u); M32(m_) = (u32)(edi); }
  /* 00551cd8 call 0x4019a0 */ esp -= 4; M32(esp) = 0x551cddu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x551cd8u); RETCHK(0x551cddu, 0x551cd8u); LOADALL;
  /* 00551cdd mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00551ce3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551ce6 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551ce8 je 0x551cf8 */ if (ZF_) goto L_00551cf8;
  /* 00551cea lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00551ced push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551cee mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 00551cf3 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x551cf8u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x551cf3u); RETCHK(0x551cf8u, 0x551cf3u); LOADALL;
L_00551cf8:;
  /* 00551cf8 inc dword ptr [esi + 0xdc] */ { const u32 m_ = (u32)(esi + 0xdcu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00551cfe mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00551d00 mov dword ptr [esi + 0xcc], 1 */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(0x1u); }
  /* 00551d0a call 0x552b30 */ esp -= 4; M32(esp) = 0x551d0fu; SAVEALL; F_00552b30(c); ABI_CHECK(0x552b30u, 0x551d0au); RETCHK(0x551d0fu, 0x551d0au); LOADALL;
L_00551d0f:;
  /* 00551d0f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00551d10 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00551d11 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00551d12 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00551d14 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00551d15 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00551d20(CPU *c) {
  NATIVE_HOOK(0x551d20u) REGS; LOADALL;
L_00551d20:;
  /* 00551d20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00551d21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00551d23 sub esp, 0x214 */ { u32 a_ = esp, b_ = 0x214u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551d29 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00551d2e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551d2f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00551d32 call 0x54bce0 */ esp -= 4; M32(esp) = 0x551d37u; SAVEALL; F_0054bce0(c); ABI_CHECK(0x54bce0u, 0x551d32u); RETCHK(0x551d37u, 0x551d32u); LOADALL;
  /* 00551d37 call 0x518bb0 */ esp -= 4; M32(esp) = 0x551d3cu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x551d37u); RETCHK(0x551d3cu, 0x551d37u); LOADALL;
  /* 00551d3c test dword ptr [0x7a83b4], 0x40000000 */ { const u32 m_ = (u32)(0x7a83b4u); u32 a_ = M32(m_), b_ = 0x40000000u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551d46 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551d48 mov eax, dword ptr [esi + 0x130] */ { const u32 m_ = (u32)(esi + 0x130u); eax = (u32)(M32(m_)); }
  /* 00551d4e jne 0x551d7d */ if (!ZF_) goto L_00551d7d;
  /* 00551d50 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551d52 je 0x551e03 */ if (ZF_) goto L_00551e03;
  /* 00551d58 cmp dword ptr [eax + 0x148], 1 */ { const u32 m_ = (u32)(eax + 0x148u); u32 a_ = M32(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551d5f jne 0x551e03 */ if (!ZF_) goto L_00551e03;
  /* 00551d65 mov ecx, dword ptr [eax + 0xe0] */ { const u32 m_ = (u32)(eax + 0xe0u); ecx = (u32)(M32(m_)); }
  /* 00551d6b test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551d6d je 0x551e03 */ if (ZF_) goto L_00551e03;
  /* 00551d73 mov dword ptr [eax + 0xe0], 0 */ { const u32 m_ = (u32)(eax + 0xe0u); M32(m_) = (u32)(0x0u); }
L_00551d7d:;
  /* 00551d7d lea eax, [ebp - 0x214] */ eax = (u32)((u32)(ebp + 0xfffffdecu));
  /* 00551d83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551d84 call dword ptr [0x62e168] */ { const u32 m_ = (u32)(0x62e168u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x551d8au; SAVEALL; call_ind(c, t_); RETCHK(0x551d8au, 0x551d84u); LOADALL; }
  /* 00551d8a movzx ecx, word ptr [ebp - 0x206] */ { const u32 m_ = (u32)(ebp + 0xfffffdfau); ecx = (u32)(M16(m_)); }
  /* 00551d91 movzx edx, word ptr [ebp - 0x208] */ { const u32 m_ = (u32)(ebp + 0xfffffdf8u); edx = (u32)(M16(m_)); }
  /* 00551d98 movzx eax, word ptr [ebp - 0x20a] */ { const u32 m_ = (u32)(ebp + 0xfffffdf6u); eax = (u32)(M16(m_)); }
  /* 00551d9f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00551da0 movzx ecx, word ptr [ebp - 0x20c] */ { const u32 m_ = (u32)(ebp + 0xfffffdf4u); ecx = (u32)(M16(m_)); }
  /* 00551da7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551da8 movzx edx, word ptr [ebp - 0x20e] */ { const u32 m_ = (u32)(ebp + 0xfffffdf2u); edx = (u32)(M16(m_)); }
  /* 00551daf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551db0 movzx eax, word ptr [ebp - 0x212] */ { const u32 m_ = (u32)(ebp + 0xfffffdeeu); eax = (u32)(M16(m_)); }
  /* 00551db7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00551db8 movzx ecx, word ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); ecx = (u32)(M16(m_)); }
  /* 00551dbf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551dc0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551dc1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00551dc2 push 0x655a04 */ { u32 v_ = 0x655a04u; esp -= 4; M32(esp) = v_; }
  /* 00551dc7 lea edx, [ebp - 0x204] */ edx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00551dcd push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00551dd2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00551dd3 call 0x5fe928 */ esp -= 4; M32(esp) = 0x551dd8u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x551dd3u); RETCHK(0x551dd8u, 0x551dd3u); LOADALL;
  /* 00551dd8 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551ddb mov eax, esi */ { eax = (u32)(esi); }
  /* 00551ddd call 0x5181d0 */ esp -= 4; M32(esp) = 0x551de2u; SAVEALL; F_005181d0(c); ABI_CHECK(0x5181d0u, 0x551dddu); RETCHK(0x551de2u, 0x551dddu); LOADALL;
  /* 00551de2 call 0x559a10 */ esp -= 4; M32(esp) = 0x551de7u; SAVEALL; F_00559a10(c); ABI_CHECK(0x559a10u, 0x551de2u); RETCHK(0x551de7u, 0x551de2u); LOADALL;
  /* 00551de7 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551de9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551deb je 0x551e03 */ if (ZF_) goto L_00551e03;
  /* 00551ded lea eax, [ebp - 0x204] */ eax = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00551df3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551df4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551df5 call 0x577280 */ esp -= 4; M32(esp) = 0x551dfau; SAVEALL; F_00577280(c); ABI_CHECK(0x577280u, 0x551df5u); RETCHK(0x551dfau, 0x551df5u); LOADALL;
  /* 00551dfa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551dfb call 0x5b1210 */ esp -= 4; M32(esp) = 0x551e00u; SAVEALL; F_005b1210(c); ABI_CHECK(0x5b1210u, 0x551dfbu); RETCHK(0x551e00u, 0x551dfbu); LOADALL;
  /* 00551e00 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00551e03:;
  /* 00551e03 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00551e06 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00551e07 call 0x61af31 */ esp -= 4; M32(esp) = 0x551e0cu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x551e07u); RETCHK(0x551e0cu, 0x551e07u); LOADALL;
  /* 00551e0c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00551e0e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00551e0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00551e10(CPU *c) {
  NATIVE_HOOK(0x551e10u) REGS; LOADALL;
L_00551e10:;
  /* 00551e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00551e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00551e13 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551e16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551e17 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551e18 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00551e1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551e1b mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00551e1e call 0x5397d0 */ esp -= 4; M32(esp) = 0x551e23u; SAVEALL; F_005397d0(c); ABI_CHECK(0x5397d0u, 0x551e1eu); RETCHK(0x551e23u, 0x551e1eu); LOADALL;
  /* 00551e23 call 0x550690 */ esp -= 4; M32(esp) = 0x551e28u; SAVEALL; F_00550690(c); ABI_CHECK(0x550690u, 0x551e23u); RETCHK(0x551e28u, 0x551e23u); LOADALL;
  /* 00551e28 call 0x554450 */ esp -= 4; M32(esp) = 0x551e2du; SAVEALL; F_00554450(c); ABI_CHECK(0x554450u, 0x551e28u); RETCHK(0x551e2du, 0x551e28u); LOADALL;
  /* 00551e2d call 0x4d0bf0 */ esp -= 4; M32(esp) = 0x551e32u; SAVEALL; F_004d0bf0(c); ABI_CHECK(0x4d0bf0u, 0x551e2du); RETCHK(0x551e32u, 0x551e2du); LOADALL;
  /* 00551e32 call 0x4e8c90 */ esp -= 4; M32(esp) = 0x551e37u; SAVEALL; F_004e8c90(c); ABI_CHECK(0x4e8c90u, 0x551e32u); RETCHK(0x551e37u, 0x551e32u); LOADALL;
  /* 00551e37 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00551e39 call 0x4e8cf0 */ esp -= 4; M32(esp) = 0x551e3eu; SAVEALL; F_004e8cf0(c); ABI_CHECK(0x4e8cf0u, 0x551e39u); RETCHK(0x551e3eu, 0x551e39u); LOADALL;
  /* 00551e3e mov edi, dword ptr [0x62e578] */ { const u32 m_ = (u32)(0x62e578u); edi = (u32)(M32(m_)); }
  /* 00551e44 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00551e46 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551e47 lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00551e4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551e4b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00551e4d push 0x3a */ { u32 v_ = 0x3au; esp -= 4; M32(esp) = v_; }
  /* 00551e4f mov dword ptr [ebp - 0xc], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(0x8u); }
  /* 00551e56 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00551e59 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x551e5bu; SAVEALL; call_ind(c, t_); RETCHK(0x551e5bu, 0x551e59u); LOADALL; }
  /* 00551e5b cmp byte ptr [esi + 0xf9b], bl */ { const u32 m_ = (u32)(esi + 0xf9bu); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00551e61 je 0x551e77 */ if (ZF_) goto L_00551e77;
  /* 00551e63 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00551e66 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551e67 lea ecx, [ebp - 0xc] */ ecx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 00551e6a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00551e6b push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00551e6d or eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00551e70 push 0x3b */ { u32 v_ = 0x3bu; esp -= 4; M32(esp) = v_; }
  /* 00551e72 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00551e75 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x551e77u; SAVEALL; call_ind(c, t_); RETCHK(0x551e77u, 0x551e75u); LOADALL; }
L_00551e77:;
  /* 00551e77 mov esi, 0x7a81a8 */ { esi = (u32)(0x7a81a8u); }
  /* 00551e7c call 0x531810 */ esp -= 4; M32(esp) = 0x551e81u; SAVEALL; F_00531810(c); ABI_CHECK(0x531810u, 0x551e7cu); RETCHK(0x551e81u, 0x551e7cu); LOADALL;
  /* 00551e81 call 0x556030 */ esp -= 4; M32(esp) = 0x551e86u; SAVEALL; F_00556030(c); ABI_CHECK(0x556030u, 0x551e81u); RETCHK(0x551e86u, 0x551e81u); LOADALL;
  /* 00551e86 mov edi, eax */ { edi = (u32)(eax); }
  /* 00551e88 call 0x556260 */ esp -= 4; M32(esp) = 0x551e8du; SAVEALL; F_00556260(c); ABI_CHECK(0x556260u, 0x551e88u); RETCHK(0x551e8du, 0x551e88u); LOADALL;
  /* 00551e8d mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00551e90 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00551e92 call 0x54bd10 */ esp -= 4; M32(esp) = 0x551e97u; SAVEALL; F_0054bd10(c); ABI_CHECK(0x54bd10u, 0x551e92u); RETCHK(0x551e97u, 0x551e92u); LOADALL;
  /* 00551e97 call 0x4fb430 */ esp -= 4; M32(esp) = 0x551e9cu; SAVEALL; F_004fb430(c); ABI_CHECK(0x4fb430u, 0x551e97u); RETCHK(0x551e9cu, 0x551e97u); LOADALL;
  /* 00551e9c call 0x4fb4b0 */ esp -= 4; M32(esp) = 0x551ea1u; SAVEALL; F_004fb4b0(c); ABI_CHECK(0x4fb4b0u, 0x551e9cu); RETCHK(0x551ea1u, 0x551e9cu); LOADALL;
  /* 00551ea1 call 0x518bb0 */ esp -= 4; M32(esp) = 0x551ea6u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x551ea1u); RETCHK(0x551ea6u, 0x551ea1u); LOADALL;
  /* 00551ea6 mov edi, eax */ { edi = (u32)(eax); }
  /* 00551ea8 call 0x517700 */ esp -= 4; M32(esp) = 0x551eadu; SAVEALL; F_00517700(c); ABI_CHECK(0x517700u, 0x551ea8u); RETCHK(0x551eadu, 0x551ea8u); LOADALL;
  /* 00551ead mov eax, dword ptr [esi + 0xf64] */ { const u32 m_ = (u32)(esi + 0xf64u); eax = (u32)(M32(m_)); }
  /* 00551eb3 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551eb5 je 0x551ed2 */ if (ZF_) goto L_00551ed2;
  /* 00551eb7 call 0x530e10 */ esp -= 4; M32(esp) = 0x551ebcu; SAVEALL; F_00530e10(c); ABI_CHECK(0x530e10u, 0x551eb7u); RETCHK(0x551ebcu, 0x551eb7u); LOADALL;
  /* 00551ebc mov ecx, dword ptr [esi + 0xf64] */ { const u32 m_ = (u32)(esi + 0xf64u); ecx = (u32)(M32(m_)); }
  /* 00551ec2 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551ec4 je 0x551ecc */ if (ZF_) goto L_00551ecc;
  /* 00551ec6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00551ec8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00551eca call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x551eccu; SAVEALL; call_ind(c, t_); RETCHK(0x551eccu, 0x551ecau); LOADALL; }
L_00551ecc:;
  /* 00551ecc mov dword ptr [esi + 0xf64], ebx */ { const u32 m_ = (u32)(esi + 0xf64u); M32(m_) = (u32)(ebx); }
L_00551ed2:;
  /* 00551ed2 call 0x404690 */ esp -= 4; M32(esp) = 0x551ed7u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x551ed2u); RETCHK(0x551ed7u, 0x551ed2u); LOADALL;
  /* 00551ed7 mov eax, dword ptr [0x7a6894] */ { const u32 m_ = (u32)(0x7a6894u); eax = (u32)(M32(m_)); }
  /* 00551edc cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551ede je 0x551ef7 */ if (ZF_) goto L_00551ef7;
  /* 00551ee0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551ee1 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551ee3 call 0x4329b0 */ esp -= 4; M32(esp) = 0x551ee8u; SAVEALL; F_004329b0(c); ABI_CHECK(0x4329b0u, 0x551ee3u); RETCHK(0x551ee8u, 0x551ee3u); LOADALL;
  /* 00551ee8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551ee9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x551eeeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x551ee9u); RETCHK(0x551eeeu, 0x551ee9u); LOADALL;
  /* 00551eee add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551ef1 mov dword ptr [0x7a6894], ebx */ { const u32 m_ = (u32)(0x7a6894u); M32(m_) = (u32)(ebx); }
L_00551ef7:;
  /* 00551ef7 call 0x404700 */ esp -= 4; M32(esp) = 0x551efcu; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x551ef7u); RETCHK(0x551efcu, 0x551ef7u); LOADALL;
  /* 00551efc mov eax, dword ptr [0x7a6b44] */ { const u32 m_ = (u32)(0x7a6b44u); eax = (u32)(M32(m_)); }
  /* 00551f01 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551f03 je 0x551f1c */ if (ZF_) goto L_00551f1c;
  /* 00551f05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551f06 mov esi, eax */ { esi = (u32)(eax); }
  /* 00551f08 call 0x483220 */ esp -= 4; M32(esp) = 0x551f0du; SAVEALL; F_00483220(c); ABI_CHECK(0x483220u, 0x551f08u); RETCHK(0x551f0du, 0x551f08u); LOADALL;
  /* 00551f0d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551f0e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x551f13u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x551f0eu); RETCHK(0x551f13u, 0x551f0eu); LOADALL;
  /* 00551f13 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551f16 mov dword ptr [0x7a6b44], ebx */ { const u32 m_ = (u32)(0x7a6b44u); M32(m_) = (u32)(ebx); }
L_00551f1c:;
  /* 00551f1c call 0x404770 */ esp -= 4; M32(esp) = 0x551f21u; SAVEALL; F_00404770(c); ABI_CHECK(0x404770u, 0x551f1cu); RETCHK(0x551f21u, 0x551f1cu); LOADALL;
  /* 00551f21 mov eax, dword ptr [0x7a6b8c] */ { const u32 m_ = (u32)(0x7a6b8cu); eax = (u32)(M32(m_)); }
  /* 00551f26 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551f28 je 0x551f41 */ if (ZF_) goto L_00551f41;
  /* 00551f2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551f2b mov esi, eax */ { esi = (u32)(eax); }
  /* 00551f2d call 0x491400 */ esp -= 4; M32(esp) = 0x551f32u; SAVEALL; F_00491400(c); ABI_CHECK(0x491400u, 0x551f2du); RETCHK(0x551f32u, 0x551f2du); LOADALL;
  /* 00551f32 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551f33 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x551f38u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x551f33u); RETCHK(0x551f38u, 0x551f33u); LOADALL;
  /* 00551f38 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551f3b mov dword ptr [0x7a6b8c], ebx */ { const u32 m_ = (u32)(0x7a6b8cu); M32(m_) = (u32)(ebx); }
L_00551f41:;
  /* 00551f41 mov esi, dword ptr [0x7a6818] */ { const u32 m_ = (u32)(0x7a6818u); esi = (u32)(M32(m_)); }
  /* 00551f47 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551f49 je 0x551f61 */ if (ZF_) goto L_00551f61;
  /* 00551f4b mov edi, esi */ { edi = (u32)(esi); }
  /* 00551f4d call 0x5577c0 */ esp -= 4; M32(esp) = 0x551f52u; SAVEALL; F_005577c0(c); ABI_CHECK(0x5577c0u, 0x551f4du); RETCHK(0x551f52u, 0x551f4du); LOADALL;
  /* 00551f52 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551f53 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x551f58u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x551f53u); RETCHK(0x551f58u, 0x551f53u); LOADALL;
  /* 00551f58 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551f5b mov dword ptr [0x7a6818], ebx */ { const u32 m_ = (u32)(0x7a6818u); M32(m_) = (u32)(ebx); }
L_00551f61:;
  /* 00551f61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00551f62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00551f63 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00551f64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00551f66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00551f67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00551f70(CPU *c) {
  NATIVE_HOOK(0x551f70u) REGS; LOADALL;
L_00551f70:;
  /* 00551f70 mov ecx, dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00551f73 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00551f75 je 0x551f80 */ if (ZF_) goto L_00551f80;
  /* 00551f77 mov eax, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00551f7a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00551f7c mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00551f7f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00551f80:;
  /* 00551f80 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00551f82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00551f90(CPU *c) {
  NATIVE_HOOK(0x551f90u) REGS; LOADALL;
L_00551f90:;
  /* 00551f90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00551f91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00551f93 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551f94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551f95 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00551f98 cmp edi, 0xa */ { u32 a_ = edi, b_ = 0xau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00551f9b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00551f9d jne 0x551faf */ if (!ZF_) goto L_00551faf;
  /* 00551f9f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00551fa1 call 0x4019a0 */ esp -= 4; M32(esp) = 0x551fa6u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x551fa1u); RETCHK(0x551fa6u, 0x551fa1u); LOADALL;
  /* 00551fa6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00551fa9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551faa call 0x402a60 */ esp -= 4; M32(esp) = 0x551fafu; SAVEALL; F_00402a60(c); ABI_CHECK(0x402a60u, 0x551faau); RETCHK(0x551fafu, 0x551faau); LOADALL;
L_00551faf:;
  /* 00551faf mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00551fb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551fb3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551fb4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00551fb6 call 0x54c070 */ esp -= 4; M32(esp) = 0x551fbbu; SAVEALL; F_0054c070(c); ABI_CHECK(0x54c070u, 0x551fb6u); RETCHK(0x551fbbu, 0x551fb6u); LOADALL;
  /* 00551fbb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00551fbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00551fbd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00551fbe ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00551fd0(CPU *c) {
  NATIVE_HOOK(0x551fd0u) REGS; LOADALL;
L_00551fd0:;
  /* 00551fd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00551fd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00551fd3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00551fd5 push 0x6288c2 */ { u32 v_ = 0x6288c2u; esp -= 4; M32(esp) = v_; }
  /* 00551fda mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00551fe0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00551fe1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00551fe8 jmp 0x9c4f80 */ goto L_009c4f80;
L_00551fee:;
  /* 00551fee mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00551ff3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551ff4 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00551ff7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00551ff8 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00551ffb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00551ffc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00551ffd mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00552000 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00552003 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552004 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00552006 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552007 mov dword ptr [ebp - 0x214], edi */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(edi); }
  /* 0055200d call 0x54c0b0 */ esp -= 4; M32(esp) = 0x552012u; SAVEALL; F_0054c0b0(c); ABI_CHECK(0x54c0b0u, 0x55200du); RETCHK(0x552012u, 0x55200du); LOADALL;
  /* 00552012 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00552015 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00552017 lea eax, [ebp - 0x228] */ eax = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 0055201d mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00552020 call 0x464770 */ esp -= 4; M32(esp) = 0x552025u; SAVEALL; F_00464770(c); ABI_CHECK(0x464770u, 0x552020u); RETCHK(0x552025u, 0x552020u); LOADALL;
  /* 00552025 movsx ebx, bx */ { ebx = (u32)((u32)sxt((ebx & 0xffffu), 2) & 0xffffffffu); }
  /* 00552028 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552029 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055202b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00552032 call 0x464810 */ esp -= 4; M32(esp) = 0x552037u; SAVEALL; F_00464810(c); ABI_CHECK(0x464810u, 0x552032u); RETCHK(0x552037u, 0x552032u); LOADALL;
  /* 00552037 cmp edx, 0x10000132 */ { u32 a_ = edx, b_ = 0x10000132u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055203d jg 0x55244f */ if (!(ZF_|LT_)) goto L_0055244f;
  /* 00552043 je 0x55243b */ if (ZF_) goto L_0055243b;
  /* 00552049 cmp edx, 0x10000066 */ { u32 a_ = edx, b_ = 0x10000066u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055204f jg 0x5522a0 */ if (!(ZF_|LT_)) goto L_005522a0;
  /* 00552055 je 0x5521c7 */ if (ZF_) goto L_005521c7;
  /* 0055205b cmp edx, 0x1000000e */ { u32 a_ = edx, b_ = 0x1000000eu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552061 jg 0x5521e4 */ if (!(ZF_|LT_)) goto L_005521e4;
  /* 00552067 je 0x5521c7 */ if (ZF_) goto L_005521c7;
  /* 0055206d cmp edx, 0x10000005 */ { u32 a_ = edx, b_ = 0x10000005u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552073 jg 0x5521b6 */ if (!(ZF_|LT_)) goto L_005521b6;
  /* 00552079 je 0x5521c7 */ if (ZF_) goto L_005521c7;
  /* 0055207f cmp edx, 0x1000001 */ { u32 a_ = edx, b_ = 0x1000001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552085 je 0x552136 */ if (ZF_) goto L_00552136;
  /* 0055208b jmp 0x9c1a65 */ goto L_009c1a65;
L_00552097:;
  /* 00552097 call 0x601668 */ esp -= 4; M32(esp) = 0x55209cu; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x552097u); RETCHK(0x55209cu, 0x552097u); LOADALL;
  /* 0055209c fld dword ptr [edi + 0xd0] */ { const u32 m_ = (u32)(edi + 0xd0u); FPUSH((double)MF32(m_)); }
  /* 005520a2 fmul dword ptr [0x656ff0] */ { const u32 m_ = (u32)(0x656ff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005520a8 mov esi, eax */ { esi = (u32)(eax); }
  /* 005520aa mov ebx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ebx = (u32)(M32(m_)); }
  /* 005520ac call 0x61b154 */ esp -= 4; M32(esp) = 0x5520b1u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5520acu); RETCHK(0x5520b1u, 0x5520acu); LOADALL;
  /* 005520b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005520b2 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 005520b4 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 005520b6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005520b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005520b9 call dword ptr [ebx + 0x80] */ { const u32 m_ = (u32)(ebx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5520bfu; SAVEALL; call_ind(c, t_); RETCHK(0x5520bfu, 0x5520b9u); LOADALL; }
  /* 005520bf mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005520c2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005520c3 mov esi, edi */ { esi = (u32)(edi); }
  /* 005520c5 call 0x552b60 */ esp -= 4; M32(esp) = 0x5520cau; SAVEALL; F_00552b60(c); ABI_CHECK(0x552b60u, 0x5520c5u); RETCHK(0x5520cau, 0x5520c5u); LOADALL;
  /* 005520ca mov al, byte ptr [0x7a6e23] */ { const u32 m_ = (u32)(0x7a6e23u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005520cf test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005520d1 jne 0x55285d */ if (!ZF_) goto L_0055285d;
  /* 005520d7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005520d9 call 0x4019a0 */ esp -= 4; M32(esp) = 0x5520deu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5520d9u); RETCHK(0x5520deu, 0x5520d9u); LOADALL;
  /* 005520de fld dword ptr [esi + 0xd0] */ { const u32 m_ = (u32)(esi + 0xd0u); FPUSH((double)MF32(m_)); }
  /* 005520e4 fmul dword ptr [0x656ff4] */ { const u32 m_ = (u32)(0x656ff4u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005520ea add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005520ed mov edi, eax */ { edi = (u32)(eax); }
  /* 005520ef call 0x61b154 */ esp -= 4; M32(esp) = 0x5520f4u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5520efu); RETCHK(0x5520f4u, 0x5520efu); LOADALL;
  /* 005520f4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005520f6 mov eax, edi */ { eax = (u32)(edi); }
  /* 005520f8 call 0x401020 */ esp -= 4; M32(esp) = 0x5520fdu; SAVEALL; F_00401020(c); ABI_CHECK(0x401020u, 0x5520f8u); RETCHK(0x5520fdu, 0x5520f8u); LOADALL;
  /* 005520fd mov dword ptr [eax + 0xb8c], ebx */ { const u32 m_ = (u32)(eax + 0xb8cu); M32(m_) = (u32)(ebx); }
  /* 00552103 mov byte ptr [eax + 0xdd7], 1 */ { const u32 m_ = (u32)(eax + 0xdd7u); M8(m_) = (u8)(0x1u); }
  /* 0055210a mov byte ptr [eax + 0xed6], 1 */ { const u32 m_ = (u32)(eax + 0xed6u); M8(m_) = (u8)(0x1u); }
  /* 00552111 mov byte ptr [eax + 0xf47], 1 */ { const u32 m_ = (u32)(eax + 0xf47u); M8(m_) = (u8)(0x1u); }
  /* 00552118 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055211a mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 00552120 mov dword ptr [esi + 0xcc], eax */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(eax); }
  /* 00552126 mov dword ptr [esi + 0xdc], eax */ { const u32 m_ = (u32)(esi + 0xdcu); M32(m_) = (u32)(eax); }
  /* 0055212c mov byte ptr [0x7a6e23], al */ { const u32 m_ = (u32)(0x7a6e23u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00552131 jmp 0x55285d */ goto L_0055285d;
L_00552136:;
  /* 00552136 lea eax, [ebp - 0x228] */ eax = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 0055213c call 0x4648c0 */ esp -= 4; M32(esp) = 0x552141u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x55213cu); RETCHK(0x552141u, 0x55213cu); LOADALL;
  /* 00552141 lea eax, [ebp - 0x228] */ eax = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 00552147 call 0x4648c0 */ esp -= 4; M32(esp) = 0x55214cu; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x552147u); RETCHK(0x55214cu, 0x552147u); LOADALL;
  /* 0055214c lea eax, [ebp - 0x228] */ eax = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 00552152 call 0x4648c0 */ esp -= 4; M32(esp) = 0x552157u; SAVEALL; F_004648c0(c); ABI_CHECK(0x4648c0u, 0x552152u); RETCHK(0x552157u, 0x552152u); LOADALL;
  /* 00552157 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00552159 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0055215b lea ecx, [ebp - 0x228] */ ecx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 00552161 call 0x4648d0 */ esp -= 4; M32(esp) = 0x552166u; SAVEALL; F_004648d0(c); ABI_CHECK(0x4648d0u, 0x552161u); RETCHK(0x552166u, 0x552161u); LOADALL;
  /* 00552166 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552168 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055216a mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055216c shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0055216f add edi, 0xd64 */ { u32 a_ = edi, b_ = 0xd64u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00552175 mov dword ptr [ebp + 0x10], edi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(edi); }
  /* 00552178 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0055217a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055217c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055217f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00552181 mov ecx, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); ecx = (u32)(M32(m_)); }
  /* 00552187 mov byte ptr [ebx + ecx + 0xd65], 0 */ { const u32 m_ = (u32)(ebx + ecx + 0xd65u); M8(m_) = (u8)(0x0u); }
  /* 0055218f call 0x518bb0 */ esp -= 4; M32(esp) = 0x552194u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x55218fu); RETCHK(0x552194u, 0x55218fu); LOADALL;
  /* 00552194 mov esi, dword ptr [eax + 0x150] */ { const u32 m_ = (u32)(eax + 0x150u); esi = (u32)(M32(m_)); }
  /* 0055219a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055219c je 0x55285d */ if (ZF_) goto L_0055285d;
  /* 005521a2 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 005521a5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005521a8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 005521aa mov dword ptr [ebp - 0x214], esp */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(esp); }
  /* 005521b0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005521b1 jmp 0x55258e */ goto L_0055258e;
L_005521b6:;
  /* 005521b6 sub edx, 0x10000008 */ { u32 a_ = edx, b_ = 0x10000008u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005521bc je 0x5521c7 */ if (ZF_) goto L_005521c7;
  /* 005521be sub edx, 3 */ { u32 a_ = edx, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005521c1 jne 0x55285d */ if (!ZF_) goto L_0055285d;
L_005521c7:;
  /* 005521c7 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005521ca lea ecx, [eax - 6] */ ecx = (u32)((u32)(eax + 0xfffffffau));
  /* 005521cd cmp ecx, 0x28 */ { u32 a_ = ecx, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005521d0 ja 0x55285d */ if (!(CF_|ZF_)) goto L_0055285d;
  /* 005521d6 movzx ecx, byte ptr [ecx + 0x552890] */ { const u32 m_ = (u32)(ecx + 0x552890u); ecx = (u32)(M8(m_)); }
  /* 005521dd jmp dword ptr [ecx*4 + 0x552884] */ { const u32 m_ = (u32)(ecx * 4u + 0x552884u); u32 t_ = M32(m_); switch (t_) { case 0x552258u: goto L_00552258; case 0x55227du: goto L_0055227d; case 0x55285du: goto L_0055285d; default: SAVEALL; call_ind(c, t_); return; } }
L_005521e4:;
  /* 005521e4 add edx, 0xefffffef */ { u32 a_ = edx, b_ = 0xefffffefu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005521ea cmp edx, 0x4f */ { u32 a_ = edx, b_ = 0x4fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005521ed ja 0x55285d */ if (!(CF_|ZF_)) goto L_0055285d;
  /* 005521f3 movzx eax, byte ptr [edx + 0x5528c8] */ { const u32 m_ = (u32)(edx + 0x5528c8u); eax = (u32)(M8(m_)); }
  /* 005521fa jmp dword ptr [eax*4 + 0x5528bc] */ { const u32 m_ = (u32)(eax * 4u + 0x5528bcu); u32 t_ = M32(m_); switch (t_) { case 0x5521c7u: goto L_005521c7; case 0x552201u: goto L_00552201; case 0x55285du: goto L_0055285d; default: SAVEALL; call_ind(c, t_); return; } }
L_00552201:;
  /* 00552201 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00552204 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552207 jne 0x552227 */ if (!ZF_) goto L_00552227;
  /* 00552209 mov eax, dword ptr [0x7a68bc] */ { const u32 m_ = (u32)(0x7a68bcu); eax = (u32)(M32(m_)); }
  /* 0055220e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00552210 je 0x552249 */ if (ZF_) goto L_00552249;
  /* 00552212 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552213 call 0x440190 */ esp -= 4; M32(esp) = 0x552218u; SAVEALL; F_00440190(c); ABI_CHECK(0x440190u, 0x552213u); RETCHK(0x552218u, 0x552213u); LOADALL;
  /* 00552218 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055221a call 0x54c1b0 */ esp -= 4; M32(esp) = 0x55221fu; SAVEALL; F_0054c1b0(c); ABI_CHECK(0x54c1b0u, 0x55221au); RETCHK(0x55221fu, 0x55221au); LOADALL;
  /* 0055221f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552222 jmp 0x55285d */ goto L_0055285d;
L_00552227:;
  /* 00552227 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0055222c push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00552231 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552233 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552235 mov eax, esi */ { eax = (u32)(esi); }
  /* 00552237 call 0x555450 */ esp -= 4; M32(esp) = 0x55223cu; SAVEALL; F_00555450(c); ABI_CHECK(0x555450u, 0x552237u); RETCHK(0x55223cu, 0x552237u); LOADALL;
  /* 0055223c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055223d push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0055223f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552241 call 0x50b090 */ esp -= 4; M32(esp) = 0x552246u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x552241u); RETCHK(0x552246u, 0x552241u); LOADALL;
  /* 00552246 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00552249:;
  /* 00552249 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055224b call 0x54c1b0 */ esp -= 4; M32(esp) = 0x552250u; SAVEALL; F_0054c1b0(c); ABI_CHECK(0x54c1b0u, 0x55224bu); RETCHK(0x552250u, 0x55224bu); LOADALL;
  /* 00552250 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552253 jmp 0x55285d */ goto L_0055285d;
L_00552258:;
  /* 00552258 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0055225d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00552262 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552264 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552266 call 0x555450 */ esp -= 4; M32(esp) = 0x55226bu; SAVEALL; F_00555450(c); ABI_CHECK(0x555450u, 0x552266u); RETCHK(0x55226bu, 0x552266u); LOADALL;
  /* 0055226b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055226c push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0055226e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552270 call 0x50b090 */ esp -= 4; M32(esp) = 0x552275u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x552270u); RETCHK(0x552275u, 0x552270u); LOADALL;
  /* 00552275 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552278 jmp 0x55285d */ goto L_0055285d;
L_0055227d:;
  /* 0055227d push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00552282 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00552287 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552289 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055228b add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055228e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055228f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00552291 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552293 call 0x50b090 */ esp -= 4; M32(esp) = 0x552298u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x552293u); RETCHK(0x552298u, 0x552293u); LOADALL;
  /* 00552298 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055229b jmp 0x55285d */ goto L_0055285d;
L_005522a0:;
  /* 005522a0 add edx, 0xefffff5b */ { u32 a_ = edx, b_ = 0xefffff5bu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005522a6 cmp edx, 0x76 */ { u32 a_ = edx, b_ = 0x76u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005522a9 ja 0x55285d */ if (!(CF_|ZF_)) goto L_0055285d;
  /* 005522af movzx edx, byte ptr [edx + 0x552948] */ { const u32 m_ = (u32)(edx + 0x552948u); edx = (u32)(M8(m_)); }
  /* 005522b6 jmp dword ptr [edx*4 + 0x552918] */ { const u32 m_ = (u32)(edx * 4u + 0x552918u); u32 t_ = M32(m_); switch (t_) { case 0x5522bdu: goto L_005522bd; case 0x5522cfu: goto L_005522cf; case 0x5522e1u: goto L_005522e1; case 0x5522f3u: goto L_005522f3; case 0x552300u: goto L_00552300; case 0x552312u: goto L_00552312; case 0x552325u: goto L_00552325; case 0x552337u: goto L_00552337; case 0x552349u: goto L_00552349; case 0x55235bu: goto L_0055235b; case 0x5523d8u: goto L_005523d8; case 0x55285du: goto L_0055285d; default: SAVEALL; call_ind(c, t_); return; } }
L_005522bd:;
  /* 005522bd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005522be push 0x7a73a8 */ { u32 v_ = 0x7a73a8u; esp -= 4; M32(esp) = v_; }
  /* 005522c3 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005522c5 call 0x47bf30 */ esp -= 4; M32(esp) = 0x5522cau; SAVEALL; F_0047bf30(c); ABI_CHECK(0x47bf30u, 0x5522c5u); RETCHK(0x5522cau, 0x5522c5u); LOADALL;
  /* 005522ca jmp 0x55285d */ goto L_0055285d;
L_005522cf:;
  /* 005522cf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005522d0 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005522d2 mov edi, 0x7a73a8 */ { edi = (u32)(0x7a73a8u); }
  /* 005522d7 call 0x47c3f0 */ esp -= 4; M32(esp) = 0x5522dcu; SAVEALL; F_0047c3f0(c); ABI_CHECK(0x47c3f0u, 0x5522d7u); RETCHK(0x5522dcu, 0x5522d7u); LOADALL;
  /* 005522dc jmp 0x55285d */ goto L_0055285d;
L_005522e1:;
  /* 005522e1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005522e2 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005522e4 mov edi, 0x7a73a8 */ { edi = (u32)(0x7a73a8u); }
  /* 005522e9 call 0x47c5f0 */ esp -= 4; M32(esp) = 0x5522eeu; SAVEALL; F_0047c5f0(c); ABI_CHECK(0x47c5f0u, 0x5522e9u); RETCHK(0x5522eeu, 0x5522e9u); LOADALL;
  /* 005522ee jmp 0x55285d */ goto L_0055285d;
L_005522f3:;
  /* 005522f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005522f4 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005522f6 call 0x47c850 */ esp -= 4; M32(esp) = 0x5522fbu; SAVEALL; F_0047c850(c); ABI_CHECK(0x47c850u, 0x5522f6u); RETCHK(0x5522fbu, 0x5522f6u); LOADALL;
  /* 005522fb jmp 0x55285d */ goto L_0055285d;
L_00552300:;
  /* 00552300 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552301 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552302 call 0x404700 */ esp -= 4; M32(esp) = 0x552307u; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x552302u); RETCHK(0x552307u, 0x552302u); LOADALL;
  /* 00552307 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552308 call 0x484d70 */ esp -= 4; M32(esp) = 0x55230du; SAVEALL; F_00484d70(c); ABI_CHECK(0x484d70u, 0x552308u); RETCHK(0x55230du, 0x552308u); LOADALL;
  /* 0055230d jmp 0x55285d */ goto L_0055285d;
L_00552312:;
  /* 00552312 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552313 call 0x404700 */ esp -= 4; M32(esp) = 0x552318u; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x552313u); RETCHK(0x552318u, 0x552313u); LOADALL;
  /* 00552318 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552319 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0055231b call 0x484ed0 */ esp -= 4; M32(esp) = 0x552320u; SAVEALL; F_00484ed0(c); ABI_CHECK(0x484ed0u, 0x55231bu); RETCHK(0x552320u, 0x55231bu); LOADALL;
  /* 00552320 jmp 0x55285d */ goto L_0055285d;
L_00552325:;
  /* 00552325 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552326 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00552328 mov edi, 0x7a73a8 */ { edi = (u32)(0x7a73a8u); }
  /* 0055232d call 0x47cb50 */ esp -= 4; M32(esp) = 0x552332u; SAVEALL; F_0047cb50(c); ABI_CHECK(0x47cb50u, 0x55232du); RETCHK(0x552332u, 0x55232du); LOADALL;
  /* 00552332 jmp 0x55285d */ goto L_0055285d;
L_00552337:;
  /* 00552337 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00552339 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055233a mov ebx, 0x7a73a8 */ { ebx = (u32)(0x7a73a8u); }
  /* 0055233f call 0x47cd90 */ esp -= 4; M32(esp) = 0x552344u; SAVEALL; F_0047cd90(c); ABI_CHECK(0x47cd90u, 0x55233fu); RETCHK(0x552344u, 0x55233fu); LOADALL;
  /* 00552344 jmp 0x55285d */ goto L_0055285d;
L_00552349:;
  /* 00552349 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055234a call 0x471ec0 */ esp -= 4; M32(esp) = 0x55234fu; SAVEALL; F_00471ec0(c); ABI_CHECK(0x471ec0u, 0x55234au); RETCHK(0x55234fu, 0x55234au); LOADALL;
  /* 0055234f mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00552351 call 0x47de90 */ esp -= 4; M32(esp) = 0x552356u; SAVEALL; F_0047de90(c); ABI_CHECK(0x47de90u, 0x552351u); RETCHK(0x552356u, 0x552351u); LOADALL;
  /* 00552356 jmp 0x55285d */ goto L_0055285d;
L_0055235b:;
  /* 0055235b push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055235d call 0x4019a0 */ esp -= 4; M32(esp) = 0x552362u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x55235du); RETCHK(0x552362u, 0x55235du); LOADALL;
  /* 00552362 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552364 mov eax, dword ptr [esi + 0xb18] */ { const u32 m_ = (u32)(esi + 0xb18u); eax = (u32)(M32(m_)); }
  /* 0055236a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055236d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552370 mov ebx, 0x2003 */ { ebx = (u32)(0x2003u); }
  /* 00552375 je 0x55238b */ if (ZF_) goto L_0055238b;
  /* 00552377 call 0x54be60 */ esp -= 4; M32(esp) = 0x55237cu; SAVEALL; F_0054be60(c); ABI_CHECK(0x54be60u, 0x552377u); RETCHK(0x55237cu, 0x552377u); LOADALL;
  /* 0055237c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055237e je 0x5523a8 */ if (ZF_) goto L_005523a8;
  /* 00552380 call 0x402150 */ esp -= 4; M32(esp) = 0x552385u; SAVEALL; F_00402150(c); ABI_CHECK(0x402150u, 0x552380u); RETCHK(0x552385u, 0x552380u); LOADALL;
  /* 00552385 mov edi, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); edi = (u32)(M32(m_)); }
L_0055238b:;
  /* 0055238b call 0x54be20 */ esp -= 4; M32(esp) = 0x552390u; SAVEALL; F_0054be20(c); ABI_CHECK(0x54be20u, 0x55238bu); RETCHK(0x552390u, 0x55238bu); LOADALL;
  /* 00552390 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552392 call 0x54bfd0 */ esp -= 4; M32(esp) = 0x552397u; SAVEALL; F_0054bfd0(c); ABI_CHECK(0x54bfd0u, 0x552392u); RETCHK(0x552397u, 0x552392u); LOADALL;
  /* 00552397 push 0x3002 */ { u32 v_ = 0x3002u; esp -= 4; M32(esp) = v_; }
  /* 0055239c mov eax, esi */ { eax = (u32)(esi); }
  /* 0055239e call 0x54be90 */ esp -= 4; M32(esp) = 0x5523a3u; SAVEALL; F_0054be90(c); ABI_CHECK(0x54be90u, 0x55239eu); RETCHK(0x5523a3u, 0x55239eu); LOADALL;
  /* 005523a3 jmp 0x55285d */ goto L_0055285d;
L_005523a8:;
  /* 005523a8 call 0x402150 */ esp -= 4; M32(esp) = 0x5523adu; SAVEALL; F_00402150(c); ABI_CHECK(0x402150u, 0x5523a8u); RETCHK(0x5523adu, 0x5523a8u); LOADALL;
  /* 005523ad mov esi, dword ptr [ebp - 0x214] */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); esi = (u32)(M32(m_)); }
  /* 005523b3 call 0x54bfd0 */ esp -= 4; M32(esp) = 0x5523b8u; SAVEALL; F_0054bfd0(c); ABI_CHECK(0x54bfd0u, 0x5523b3u); RETCHK(0x5523b8u, 0x5523b3u); LOADALL;
  /* 005523b8 mov ebx, 0x2003 */ { ebx = (u32)(0x2003u); }
  /* 005523bd mov edi, esi */ { edi = (u32)(esi); }
  /* 005523bf call 0x54be20 */ esp -= 4; M32(esp) = 0x5523c4u; SAVEALL; F_0054be20(c); ABI_CHECK(0x54be20u, 0x5523bfu); RETCHK(0x5523c4u, 0x5523bfu); LOADALL;
  /* 005523c4 mov dword ptr [eax + 0x38], 0x3002 */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(0x3002u); }
  /* 005523cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005523cc mov eax, esi */ { eax = (u32)(esi); }
  /* 005523ce call 0x54be90 */ esp -= 4; M32(esp) = 0x5523d3u; SAVEALL; F_0054be90(c); ABI_CHECK(0x54be90u, 0x5523ceu); RETCHK(0x5523d3u, 0x5523ceu); LOADALL;
  /* 005523d3 jmp 0x55285d */ goto L_0055285d;
L_005523d8:;
  /* 005523d8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005523db add esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005523de cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005523e1 ja 0x55285d */ if (!(CF_|ZF_)) goto L_0055285d;
  /* 005523e7 jmp dword ptr [eax*4 + 0x5529c0] */ { const u32 m_ = (u32)(eax * 4u + 0x5529c0u); u32 t_ = M32(m_); switch (t_) { case 0x5523eeu: goto L_005523ee; case 0x552418u: goto L_00552418; default: SAVEALL; call_ind(c, t_); return; } }
L_005523ee:;
  /* 005523ee push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 005523f3 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 005523f8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005523fa push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005523fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005523fd push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005523ff push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552401 mov dword ptr [0x7a6e18], 0 */ { const u32 m_ = (u32)(0x7a6e18u); M32(m_) = (u32)(0x0u); }
  /* 0055240b call 0x50b090 */ esp -= 4; M32(esp) = 0x552410u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x55240bu); RETCHK(0x552410u, 0x55240bu); LOADALL;
  /* 00552410 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552413 jmp 0x55285d */ goto L_0055285d;
L_00552418:;
  /* 00552418 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 0055241d push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00552422 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552424 push 0x5507d0 */ { u32 v_ = 0x5507d0u; esp -= 4; M32(esp) = v_; }
  /* 00552429 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055242a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055242c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055242e call 0x50b090 */ esp -= 4; M32(esp) = 0x552433u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x55242eu); RETCHK(0x552433u, 0x55242eu); LOADALL;
  /* 00552433 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552436 jmp 0x55285d */ goto L_0055285d;
L_0055243b:;
  /* 0055243b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055243c call 0x404700 */ esp -= 4; M32(esp) = 0x552441u; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x55243cu); RETCHK(0x552441u, 0x55243cu); LOADALL;
  /* 00552441 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00552443 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552445 call 0x485050 */ esp -= 4; M32(esp) = 0x55244au; SAVEALL; F_00485050(c); ABI_CHECK(0x485050u, 0x552445u); RETCHK(0x55244au, 0x552445u); LOADALL;
  /* 0055244a jmp 0x55285d */ goto L_0055285d;
L_0055244f:;
  /* 0055244f cmp edx, 0x10000144 */ { u32 a_ = edx, b_ = 0x10000144u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552455 jg 0x5525a6 */ if (!(ZF_|LT_)) goto L_005525a6;
  /* 0055245b je 0x55255f */ if (ZF_) goto L_0055255f;
  /* 00552461 add edx, 0xeffffecc */ { u32 a_ = edx, b_ = 0xeffffeccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00552467 cmp edx, 7 */ { u32 a_ = edx, b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055246a ja 0x55285d */ if (!(CF_|ZF_)) goto L_0055285d;
  /* 00552470 jmp dword ptr [edx*4 + 0x5529d0] */ { const u32 m_ = (u32)(edx * 4u + 0x5529d0u); u32 t_ = M32(m_); switch (t_) { case 0x552477u: goto L_00552477; case 0x552488u: goto L_00552488; case 0x55249au: goto L_0055249a; case 0x5524acu: goto L_005524ac; case 0x552526u: goto L_00552526; case 0x55253bu: goto L_0055253b; case 0x55285du: goto L_0055285d; default: SAVEALL; call_ind(c, t_); return; } }
L_00552477:;
  /* 00552477 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552478 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552479 call 0x471fc0 */ esp -= 4; M32(esp) = 0x55247eu; SAVEALL; F_00471fc0(c); ABI_CHECK(0x471fc0u, 0x552479u); RETCHK(0x55247eu, 0x552479u); LOADALL;
  /* 0055247e call 0x480810 */ esp -= 4; M32(esp) = 0x552483u; SAVEALL; F_00480810(c); ABI_CHECK(0x480810u, 0x55247eu); RETCHK(0x552483u, 0x55247eu); LOADALL;
  /* 00552483 jmp 0x55285d */ goto L_0055285d;
L_00552488:;
  /* 00552488 call 0x471fc0 */ esp -= 4; M32(esp) = 0x55248du; SAVEALL; F_00471fc0(c); ABI_CHECK(0x471fc0u, 0x552488u); RETCHK(0x55248du, 0x552488u); LOADALL;
  /* 0055248d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055248e mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00552490 call 0x4808f0 */ esp -= 4; M32(esp) = 0x552495u; SAVEALL; F_004808f0(c); ABI_CHECK(0x4808f0u, 0x552490u); RETCHK(0x552495u, 0x552490u); LOADALL;
  /* 00552495 jmp 0x55285d */ goto L_0055285d;
L_0055249a:;
  /* 0055249a call 0x471fc0 */ esp -= 4; M32(esp) = 0x55249fu; SAVEALL; F_00471fc0(c); ABI_CHECK(0x471fc0u, 0x55249au); RETCHK(0x55249fu, 0x55249au); LOADALL;
  /* 0055249f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005524a0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 005524a2 call 0x4808f0 */ esp -= 4; M32(esp) = 0x5524a7u; SAVEALL; F_004808f0(c); ABI_CHECK(0x4808f0u, 0x5524a2u); RETCHK(0x5524a7u, 0x5524a2u); LOADALL;
  /* 005524a7 jmp 0x55285d */ goto L_0055285d;
L_005524ac:;
  /* 005524ac lea eax, [ebp - 0x238] */ eax = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 005524b2 mov dword ptr [ebp + 0x10], 0 */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(0x0u); }
  /* 005524b9 call 0x5680c0 */ esp -= 4; M32(esp) = 0x5524beu; SAVEALL; F_005680c0(c); ABI_CHECK(0x5680c0u, 0x5524b9u); RETCHK(0x5524beu, 0x5524b9u); LOADALL;
  /* 005524be mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005524c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005524c2 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005524c6 call 0x568120 */ esp -= 4; M32(esp) = 0x5524cbu; SAVEALL; F_00568120(c); ABI_CHECK(0x568120u, 0x5524c6u); RETCHK(0x5524cbu, 0x5524c6u); LOADALL;
  /* 005524cb lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 005524ce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005524cf lea eax, [ebp - 0x238] */ eax = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 005524d5 call 0x568230 */ esp -= 4; M32(esp) = 0x5524dau; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5524d5u); RETCHK(0x5524dau, 0x5524d5u); LOADALL;
  /* 005524da test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005524dc jle 0x55285d */ if ((ZF_|LT_)) goto L_0055285d;
  /* 005524e2 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 005524e5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005524e6 lea eax, [ebp - 0x238] */ eax = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 005524ec call 0x568230 */ esp -= 4; M32(esp) = 0x5524f1u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x5524ecu); RETCHK(0x5524f1u, 0x5524ecu); LOADALL;
  /* 005524f1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005524f3 jle 0x55285d */ if ((ZF_|LT_)) goto L_0055285d;
  /* 005524f9 lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 005524fc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005524fd lea eax, [ebp - 0x238] */ eax = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 00552503 call 0x568230 */ esp -= 4; M32(esp) = 0x552508u; SAVEALL; F_00568230(c); ABI_CHECK(0x568230u, 0x552503u); RETCHK(0x552508u, 0x552503u); LOADALL;
  /* 00552508 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055250a jle 0x55285d */ if ((ZF_|LT_)) goto L_0055285d;
  /* 00552510 call 0x404700 */ esp -= 4; M32(esp) = 0x552515u; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x552510u); RETCHK(0x552515u, 0x552510u); LOADALL;
  /* 00552515 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00552518 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055251a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0055251c call 0x485dd0 */ esp -= 4; M32(esp) = 0x552521u; SAVEALL; F_00485dd0(c); ABI_CHECK(0x485dd0u, 0x55251cu); RETCHK(0x552521u, 0x55251cu); LOADALL;
  /* 00552521 jmp 0x55285d */ goto L_0055285d;
L_00552526:;
  /* 00552526 call 0x404700 */ esp -= 4; M32(esp) = 0x55252bu; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x552526u); RETCHK(0x55252bu, 0x552526u); LOADALL;
  /* 0055252b mov esi, eax */ { esi = (u32)(eax); }
  /* 0055252d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055252f xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00552531 call 0x485dd0 */ esp -= 4; M32(esp) = 0x552536u; SAVEALL; F_00485dd0(c); ABI_CHECK(0x485dd0u, 0x552531u); RETCHK(0x552536u, 0x552531u); LOADALL;
  /* 00552536 jmp 0x55285d */ goto L_0055285d;
L_0055253b:;
  /* 0055253b push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00552540 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00552545 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552547 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552549 push 0x6559e0 */ { u32 v_ = 0x6559e0u; esp -= 4; M32(esp) = v_; }
  /* 0055254e push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00552550 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552552 call 0x50b090 */ esp -= 4; M32(esp) = 0x552557u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x552552u); RETCHK(0x552557u, 0x552552u); LOADALL;
  /* 00552557 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055255a jmp 0x55285d */ goto L_0055285d;
L_0055255f:;
  /* 0055255f call 0x518bb0 */ esp -= 4; M32(esp) = 0x552564u; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x55255fu); RETCHK(0x552564u, 0x55255fu); LOADALL;
  /* 00552564 mov esi, dword ptr [eax + 0x150] */ { const u32 m_ = (u32)(eax + 0x150u); esi = (u32)(M32(m_)); }
  /* 0055256a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055256c je 0x55285d */ if (ZF_) goto L_0055285d;
  /* 00552572 push 0x2a0 */ { u32 v_ = 0x2a0u; esp -= 4; M32(esp) = v_; }
  /* 00552577 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0055257c call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x552582u; SAVEALL; call_ind(c, t_); RETCHK(0x552582u, 0x55257cu); LOADALL; }
  /* 00552582 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552585 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00552587 mov dword ptr [ebp - 0x214], esp */ { const u32 m_ = (u32)(ebp + 0xfffffdecu); M32(m_) = (u32)(esp); }
  /* 0055258d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_0055258e:;
  /* 0055258e call 0x403060 */ esp -= 4; M32(esp) = 0x552593u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x55258eu); RETCHK(0x552593u, 0x55258eu); LOADALL;
  /* 00552593 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00552595 call 0x538490 */ esp -= 4; M32(esp) = 0x55259au; SAVEALL; F_00538490(c); ABI_CHECK(0x538490u, 0x552595u); RETCHK(0x55259au, 0x552595u); LOADALL;
  /* 0055259a mov eax, esi */ { eax = (u32)(esi); }
  /* 0055259c call 0x5385c0 */ esp -= 4; M32(esp) = 0x5525a1u; SAVEALL; F_005385c0(c); ABI_CHECK(0x5385c0u, 0x55259cu); RETCHK(0x5525a1u, 0x55259cu); LOADALL;
  /* 005525a1 jmp 0x55285d */ goto L_0055285d;
L_005525a6:;
  /* 005525a6 cmp edx, 0x10000167 */ { u32 a_ = edx, b_ = 0x10000167u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005525ac jg 0x5527c9 */ if (!(ZF_|LT_)) goto L_005527c9;
  /* 005525b2 je 0x5527b6 */ if (ZF_) goto L_005527b6;
  /* 005525b8 lea eax, [edx - 0x10000150] */ eax = (u32)((u32)(edx + 0xeffffeb0u));
  /* 005525be cmp eax, 0x15 */ { u32 a_ = eax, b_ = 0x15u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005525c1 ja 0x55285d */ if (!(CF_|ZF_)) goto L_0055285d;
  /* 005525c7 movzx eax, byte ptr [eax + 0x552a10] */ { const u32 m_ = (u32)(eax + 0x552a10u); eax = (u32)(M8(m_)); }
  /* 005525ce jmp dword ptr [eax*4 + 0x5529f0] */ { const u32 m_ = (u32)(eax * 4u + 0x5529f0u); u32 t_ = M32(m_); switch (t_) { case 0x5525d5u: goto L_005525d5; case 0x5525e8u: goto L_005525e8; case 0x5525fbu: goto L_005525fb; case 0x55260eu: goto L_0055260e; case 0x552620u: goto L_00552620; case 0x552634u: goto L_00552634; case 0x5526f5u: goto L_005526f5; case 0x55285du: goto L_0055285d; default: SAVEALL; call_ind(c, t_); return; } }
L_005525d5:;
  /* 005525d5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005525d6 call 0x421080 */ esp -= 4; M32(esp) = 0x5525dbu; SAVEALL; F_00421080(c); ABI_CHECK(0x421080u, 0x5525d6u); RETCHK(0x5525dbu, 0x5525d6u); LOADALL;
  /* 005525db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005525dc mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005525de call 0x568860 */ esp -= 4; M32(esp) = 0x5525e3u; SAVEALL; F_00568860(c); ABI_CHECK(0x568860u, 0x5525deu); RETCHK(0x5525e3u, 0x5525deu); LOADALL;
  /* 005525e3 jmp 0x55285d */ goto L_0055285d;
L_005525e8:;
  /* 005525e8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005525e9 call 0x421080 */ esp -= 4; M32(esp) = 0x5525eeu; SAVEALL; F_00421080(c); ABI_CHECK(0x421080u, 0x5525e9u); RETCHK(0x5525eeu, 0x5525e9u); LOADALL;
  /* 005525ee push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005525ef mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005525f1 call 0x4213f0 */ esp -= 4; M32(esp) = 0x5525f6u; SAVEALL; F_004213f0(c); ABI_CHECK(0x4213f0u, 0x5525f1u); RETCHK(0x5525f6u, 0x5525f1u); LOADALL;
  /* 005525f6 jmp 0x55285d */ goto L_0055285d;
L_005525fb:;
  /* 005525fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005525fc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005525fd call 0x40d630 */ esp -= 4; M32(esp) = 0x552602u; SAVEALL; F_0040d630(c); ABI_CHECK(0x40d630u, 0x5525fdu); RETCHK(0x552602u, 0x5525fdu); LOADALL;
  /* 00552602 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552604 call 0x40d770 */ esp -= 4; M32(esp) = 0x552609u; SAVEALL; F_0040d770(c); ABI_CHECK(0x40d770u, 0x552604u); RETCHK(0x552609u, 0x552604u); LOADALL;
  /* 00552609 jmp 0x55285d */ goto L_0055285d;
L_0055260e:;
  /* 0055260e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055260f push 0x7a73a8 */ { u32 v_ = 0x7a73a8u; esp -= 4; M32(esp) = v_; }
  /* 00552614 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00552616 call 0x47c050 */ esp -= 4; M32(esp) = 0x55261bu; SAVEALL; F_0047c050(c); ABI_CHECK(0x47c050u, 0x552616u); RETCHK(0x55261bu, 0x552616u); LOADALL;
  /* 0055261b jmp 0x55285d */ goto L_0055285d;
L_00552620:;
  /* 00552620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552621 call 0x438ee0 */ esp -= 4; M32(esp) = 0x552626u; SAVEALL; F_00438ee0(c); ABI_CHECK(0x438ee0u, 0x552621u); RETCHK(0x552626u, 0x552621u); LOADALL;
  /* 00552626 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00552628 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055262a call 0x470bf0 */ esp -= 4; M32(esp) = 0x55262fu; SAVEALL; F_00470bf0(c); ABI_CHECK(0x470bf0u, 0x55262au); RETCHK(0x55262fu, 0x55262au); LOADALL;
  /* 0055262f jmp 0x55285d */ goto L_0055285d;
L_00552634:;
  /* 00552634 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00552637 mov byte ptr [ebp - 0x210], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); M8(m_) = (u8)(0x0u); }
  /* 0055263e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00552640 mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
  /* 00552645 lea edi, [ebp - 0x20f] */ edi = (u32)((u32)(ebp + 0xfffffdf1u));
  /* 0055264b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055264d stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0055264f stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00552650 call 0x40d630 */ esp -= 4; M32(esp) = 0x552655u; SAVEALL; F_0040d630(c); ABI_CHECK(0x40d630u, 0x552650u); RETCHK(0x552655u, 0x552650u); LOADALL;
  /* 00552655 mov eax, esi */ { eax = (u32)(esi); }
  /* 00552657 lea esi, [ebp - 0x2a8] */ esi = (u32)((u32)(ebp + 0xfffffd58u));
  /* 0055265d call 0x40d930 */ esp -= 4; M32(esp) = 0x552662u; SAVEALL; F_0040d930(c); ABI_CHECK(0x40d930u, 0x55265du); RETCHK(0x552662u, 0x55265du); LOADALL;
  /* 00552662 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00552666 cmp dword ptr [eax + 0x18], 0x10 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055266a jb 0x552671 */ if (CF_) goto L_00552671;
  /* 0055266c mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055266f jmp 0x552674 */ goto L_00552674;
L_00552671:;
  /* 00552671 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00552674:;
  /* 00552674 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552675 push 0x2f8 */ { u32 v_ = 0x2f8u; esp -= 4; M32(esp) = v_; }
  /* 0055267a push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0055267f call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x552685u; SAVEALL; call_ind(c, t_); RETCHK(0x552685u, 0x55267fu); LOADALL; }
  /* 00552685 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552686 lea ecx, [ebp - 0x210] */ ecx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 0055268c push 0x1ff */ { u32 v_ = 0x1ffu; esp -= 4; M32(esp) = v_; }
  /* 00552691 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00552692 call 0x5fe928 */ esp -= 4; M32(esp) = 0x552697u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x552692u); RETCHK(0x552697u, 0x552692u); LOADALL;
  /* 00552697 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055269a lea ecx, [ebp - 0x2a8] */ ecx = (u32)((u32)(ebp + 0xfffffd58u));
  /* 005526a0 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 005526a4 call 0x43ee60 */ esp -= 4; M32(esp) = 0x5526a9u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x5526a4u); RETCHK(0x5526a9u, 0x5526a4u); LOADALL;
  /* 005526a9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005526ab call 0x4019a0 */ esp -= 4; M32(esp) = 0x5526b0u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5526abu); RETCHK(0x5526b0u, 0x5526abu); LOADALL;
  /* 005526b0 mov esi, eax */ { esi = (u32)(eax); }
  /* 005526b2 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005526b5 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005526b7 je 0x55285d */ if (ZF_) goto L_0055285d;
  /* 005526bd lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 005526c3 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005526c4 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 005526ca call 0x403060 */ esp -= 4; M32(esp) = 0x5526cfu; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x5526cau); RETCHK(0x5526cfu, 0x5526cau); LOADALL;
  /* 005526cf lea eax, [ebp - 0x254] */ eax = (u32)((u32)(ebp + 0xfffffdacu));
  /* 005526d5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005526d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005526d7 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 005526dc mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 005526e0 call 0x402940 */ esp -= 4; M32(esp) = 0x5526e5u; SAVEALL; F_00402940(c); ABI_CHECK(0x402940u, 0x5526e0u); RETCHK(0x5526e5u, 0x5526e0u); LOADALL;
  /* 005526e5 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 005526eb call 0x43ee60 */ esp -= 4; M32(esp) = 0x5526f0u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x5526ebu); RETCHK(0x5526f0u, 0x5526ebu); LOADALL;
  /* 005526f0 jmp 0x55285d */ goto L_0055285d;
L_005526f5:;
  /* 005526f5 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 005526f8 mov byte ptr [ebp - 0x210], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffdf0u); M8(m_) = (u8)(0x0u); }
  /* 005526ff xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00552701 mov ecx, 0x7f */ { ecx = (u32)(0x7fu); }
  /* 00552706 lea edi, [ebp - 0x20f] */ edi = (u32)((u32)(ebp + 0xfffffdf1u));
  /* 0055270c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055270e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00552710 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00552711 call 0x40d630 */ esp -= 4; M32(esp) = 0x552716u; SAVEALL; F_0040d630(c); ABI_CHECK(0x40d630u, 0x552711u); RETCHK(0x552716u, 0x552711u); LOADALL;
  /* 00552716 mov eax, esi */ { eax = (u32)(esi); }
  /* 00552718 lea esi, [ebp - 0x28c] */ esi = (u32)((u32)(ebp + 0xfffffd74u));
  /* 0055271e call 0x40d930 */ esp -= 4; M32(esp) = 0x552723u; SAVEALL; F_0040d930(c); ABI_CHECK(0x40d930u, 0x55271eu); RETCHK(0x552723u, 0x55271eu); LOADALL;
  /* 00552723 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00552727 cmp dword ptr [eax + 0x18], 0x10 */ { const u32 m_ = (u32)(eax + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055272b jb 0x552732 */ if (CF_) goto L_00552732;
  /* 0055272d mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00552730 jmp 0x552735 */ goto L_00552735;
L_00552732:;
  /* 00552732 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00552735:;
  /* 00552735 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552736 push 0x2f9 */ { u32 v_ = 0x2f9u; esp -= 4; M32(esp) = v_; }
  /* 0055273b push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00552740 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x552746u; SAVEALL; call_ind(c, t_); RETCHK(0x552746u, 0x552740u); LOADALL; }
  /* 00552746 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552747 lea ecx, [ebp - 0x210] */ ecx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 0055274d push 0x1ff */ { u32 v_ = 0x1ffu; esp -= 4; M32(esp) = v_; }
  /* 00552752 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00552753 call 0x5fe928 */ esp -= 4; M32(esp) = 0x552758u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x552753u); RETCHK(0x552758u, 0x552753u); LOADALL;
  /* 00552758 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055275b lea ecx, [ebp - 0x28c] */ ecx = (u32)((u32)(ebp + 0xfffffd74u));
  /* 00552761 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00552765 call 0x43ee60 */ esp -= 4; M32(esp) = 0x55276au; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x552765u); RETCHK(0x55276au, 0x552765u); LOADALL;
  /* 0055276a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055276c call 0x4019a0 */ esp -= 4; M32(esp) = 0x552771u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x55276cu); RETCHK(0x552771u, 0x55276cu); LOADALL;
  /* 00552771 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552773 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552776 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00552778 je 0x55285d */ if (ZF_) goto L_0055285d;
  /* 0055277e lea edx, [ebp - 0x210] */ edx = (u32)((u32)(ebp + 0xfffffdf0u));
  /* 00552784 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00552785 lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 0055278b call 0x403060 */ esp -= 4; M32(esp) = 0x552790u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x55278bu); RETCHK(0x552790u, 0x55278bu); LOADALL;
  /* 00552790 lea eax, [ebp - 0x270] */ eax = (u32)((u32)(ebp + 0xfffffd90u));
  /* 00552796 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552797 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552798 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0055279d mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 005527a1 call 0x402940 */ esp -= 4; M32(esp) = 0x5527a6u; SAVEALL; F_00402940(c); ABI_CHECK(0x402940u, 0x5527a1u); RETCHK(0x5527a6u, 0x5527a1u); LOADALL;
  /* 005527a6 lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 005527ac call 0x43ee60 */ esp -= 4; M32(esp) = 0x5527b1u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x5527acu); RETCHK(0x5527b1u, 0x5527acu); LOADALL;
  /* 005527b1 jmp 0x55285d */ goto L_0055285d;
L_005527b6:;
  /* 005527b6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005527b7 call 0x421080 */ esp -= 4; M32(esp) = 0x5527bcu; SAVEALL; F_00421080(c); ABI_CHECK(0x421080u, 0x5527b7u); RETCHK(0x5527bcu, 0x5527b7u); LOADALL;
  /* 005527bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005527bd mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005527bf call 0x4214a0 */ esp -= 4; M32(esp) = 0x5527c4u; SAVEALL; F_004214a0(c); ABI_CHECK(0x4214a0u, 0x5527bfu); RETCHK(0x5527c4u, 0x5527bfu); LOADALL;
  /* 005527c4 jmp 0x55285d */ goto L_0055285d;
L_005527c9:;
  /* 005527c9 cmp edx, 0x40000002 */ { u32 a_ = edx, b_ = 0x40000002u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005527cf jg 0x552846 */ if (!(ZF_|LT_)) goto L_00552846;
  /* 005527d1 je 0x552835 */ if (ZF_) goto L_00552835;
  /* 005527d3 lea eax, [edx - 0x10000169] */ eax = (u32)((u32)(edx + 0xeffffe97u));
  /* 005527d9 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005527dc ja 0x55285d */ if (!(CF_|ZF_)) goto L_0055285d;
  /* 005527de jmp dword ptr [eax*4 + 0x552a28] */ { const u32 m_ = (u32)(eax * 4u + 0x552a28u); u32 t_ = M32(m_); switch (t_) { case 0x5527e5u: goto L_005527e5; case 0x5527f5u: goto L_005527f5; case 0x552805u: goto L_00552805; case 0x552815u: goto L_00552815; case 0x552825u: goto L_00552825; case 0x55285du: goto L_0055285d; default: SAVEALL; call_ind(c, t_); return; } }
L_005527e5:;
  /* 005527e5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005527e6 call 0x421080 */ esp -= 4; M32(esp) = 0x5527ebu; SAVEALL; F_00421080(c); ABI_CHECK(0x421080u, 0x5527e6u); RETCHK(0x5527ebu, 0x5527e6u); LOADALL;
  /* 005527eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005527ec mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005527ee call 0x5687e0 */ esp -= 4; M32(esp) = 0x5527f3u; SAVEALL; F_005687e0(c); ABI_CHECK(0x5687e0u, 0x5527eeu); RETCHK(0x5527f3u, 0x5527eeu); LOADALL;
  /* 005527f3 jmp 0x55285d */ goto L_0055285d;
L_005527f5:;
  /* 005527f5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005527f6 call 0x568460 */ esp -= 4; M32(esp) = 0x5527fbu; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x5527f6u); RETCHK(0x5527fbu, 0x5527f6u); LOADALL;
  /* 005527fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005527fc mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005527fe call 0x5689c0 */ esp -= 4; M32(esp) = 0x552803u; SAVEALL; F_005689c0(c); ABI_CHECK(0x5689c0u, 0x5527feu); RETCHK(0x552803u, 0x5527feu); LOADALL;
  /* 00552803 jmp 0x55285d */ goto L_0055285d;
L_00552805:;
  /* 00552805 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552806 call 0x568460 */ esp -= 4; M32(esp) = 0x55280bu; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x552806u); RETCHK(0x55280bu, 0x552806u); LOADALL;
  /* 0055280b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055280c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0055280e call 0x568910 */ esp -= 4; M32(esp) = 0x552813u; SAVEALL; F_00568910(c); ABI_CHECK(0x568910u, 0x55280eu); RETCHK(0x552813u, 0x55280eu); LOADALL;
  /* 00552813 jmp 0x55285d */ goto L_0055285d;
L_00552815:;
  /* 00552815 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552816 call 0x568460 */ esp -= 4; M32(esp) = 0x55281bu; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x552816u); RETCHK(0x55281bu, 0x552816u); LOADALL;
  /* 0055281b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055281c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0055281e call 0x568860 */ esp -= 4; M32(esp) = 0x552823u; SAVEALL; F_00568860(c); ABI_CHECK(0x568860u, 0x55281eu); RETCHK(0x552823u, 0x55281eu); LOADALL;
  /* 00552823 jmp 0x55285d */ goto L_0055285d;
L_00552825:;
  /* 00552825 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552826 call 0x568460 */ esp -= 4; M32(esp) = 0x55282bu; SAVEALL; F_00568460(c); ABI_CHECK(0x568460u, 0x552826u); RETCHK(0x55282bu, 0x552826u); LOADALL;
  /* 0055282b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055282c mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0055282e call 0x5687e0 */ esp -= 4; M32(esp) = 0x552833u; SAVEALL; F_005687e0(c); ABI_CHECK(0x5687e0u, 0x55282eu); RETCHK(0x552833u, 0x55282eu); LOADALL;
  /* 00552833 jmp 0x55285d */ goto L_0055285d;
L_00552835:;
  /* 00552835 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552836 call 0x41ce10 */ esp -= 4; M32(esp) = 0x55283bu; SAVEALL; F_0041ce10(c); ABI_CHECK(0x41ce10u, 0x552836u); RETCHK(0x55283bu, 0x552836u); LOADALL;
  /* 0055283b mov edx, ebx */ { edx = (u32)(ebx); }
  /* 0055283d mov esi, eax */ { esi = (u32)(eax); }
  /* 0055283f call 0x41c5e0 */ esp -= 4; M32(esp) = 0x552844u; SAVEALL; F_0041c5e0(c); ABI_CHECK(0x41c5e0u, 0x55283fu); RETCHK(0x552844u, 0x55283fu); LOADALL;
  /* 00552844 jmp 0x55285d */ goto L_0055285d;
L_00552846:;
  /* 00552846 jmp 0x9e0280 */ goto L_009e0280;
L_0055284e:;
  /* 0055284e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055284f call 0x41ce10 */ esp -= 4; M32(esp) = 0x552854u; SAVEALL; F_0041ce10(c); ABI_CHECK(0x41ce10u, 0x55284fu); RETCHK(0x552854u, 0x55284fu); LOADALL;
  /* 00552854 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00552856 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552858 call 0x41c870 */ esp -= 4; M32(esp) = 0x55285du; SAVEALL; F_0041c870(c); ABI_CHECK(0x41c870u, 0x552858u); RETCHK(0x55285du, 0x552858u); LOADALL;
L_0055285d:;
  /* 0055285d call 0x9c4a98 */ esp -= 4; M32(esp) = 0x552862u; SAVEALL; F_009c4a98(c); ABI_CHECK(0x9c4a98u, 0x55285du); RETCHK(0x552862u, 0x55285du); LOADALL;
  /* 00552862 nop */ ;
  /* 00552863 call 0x9de180 */ esp -= 4; M32(esp) = 0x552868u; SAVEALL; F_009de180(c); ABI_CHECK(0x9de180u, 0x552863u); RETCHK(0x552868u, 0x552863u); LOADALL;
  /* 00552868 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055286b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00552872 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00552875 call 0x61af31 */ esp -= 4; M32(esp) = 0x55287au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x552875u); RETCHK(0x55287au, 0x552875u); LOADALL;
  /* 0055287a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055287b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055287c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055287d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055287f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552880 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_009c199e:;
  /* 009c199e cmp edx, 0x4000000a */ { u32 a_ = edx, b_ = 0x4000000au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c19a4 jne 0x55285d */ if (!ZF_) goto L_0055285d;
  /* 009c19aa pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c19ab mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009c19ae cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c19b2 setne byte ptr [0x9c16fc] */ { const u32 m_ = (u32)(0x9c16fcu); M8(m_) = (u8)((!ZF_) ? 1u : 0u); }
  /* 009c19b9 call 0x9c19e4 */ esp -= 4; M32(esp) = 0x9c19beu; SAVEALL; F_009c19e4(c); ABI_CHECK(0x9c19e4u, 0x9c19b9u); RETCHK(0x9c19beu, 0x9c19b9u); LOADALL;
  /* 009c19be popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c19bf jmp 0x55285d */ goto L_0055285d;
L_009c1a65:;
  /* 009c1a65 cmp edx, 0x40000007 */ { u32 a_ = edx, b_ = 0x40000007u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1a6b je 0x9c1a8a */ if (ZF_) goto L_009c1a8a;
  /* 009c1a6d cmp edx, 0x40000008 */ { u32 a_ = edx, b_ = 0x40000008u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1a73 je 0x9c1c40 */ if (ZF_) goto L_009c1c40;
  /* 009c1a79 cmp edx, 0x10000001 */ { u32 a_ = edx, b_ = 0x10000001u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1a7f jne 0x9c199e */ if (!ZF_) goto L_009c199e;
  /* 009c1a85 jmp 0x552097 */ goto L_00552097;
L_009c1a8a:;
  /* 009c1a8a pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1a8b mov ebx, esp */ { ebx = (u32)(esp); }
  /* 009c1a8d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009c1a90 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1a94 setne byte ptr [0x9c1a04] */ { const u32 m_ = (u32)(0x9c1a04u); M8(m_) = (u8)((!ZF_) ? 1u : 0u); }
  /* 009c1a9b mov eax, dword ptr [0x9c1a00] */ { const u32 m_ = (u32)(0x9c1a00u); eax = (u32)(M32(m_)); }
  /* 009c1aa0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1aa2 je 0x9c1aaf */ if (ZF_) goto L_009c1aaf;
  /* 009c1aa4 mov cl, byte ptr [0x9c1a04] */ { const u32 m_ = (u32)(0x9c1a04u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 009c1aaa call 0x506340 */ esp -= 4; M32(esp) = 0x9c1aafu; SAVEALL; F_00506340(c); ABI_CHECK(0x506340u, 0x9c1aaau); RETCHK(0x9c1aafu, 0x9c1aaau); LOADALL;
L_009c1aaf:;
  /* 009c1aaf mov esp, ebx */ { esp = (u32)(ebx); }
  /* 009c1ab1 popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c1ab2 jmp 0x55285d */ goto L_0055285d;
L_009c1c40:;
  /* 009c1c40 pushal */ { u32 s_ = esp; esp -= 32; M32(esp+28) = eax; M32(esp+24) = ecx; M32(esp+20) = edx; M32(esp+16) = ebx; M32(esp+12) = s_; M32(esp+8) = ebp; M32(esp+4) = esi; M32(esp) = edi; }
  /* 009c1c41 mov ebx, esp */ { ebx = (u32)(esp); }
  /* 009c1c43 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009c1c46 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 009c1c49 mov edx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); edx = (u32)(M32(m_)); }
  /* 009c1c4c cmp ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1c4f jne 0x9c1c66 */ if (!ZF_) goto L_009c1c66;
  /* 009c1c51 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_009c1c53:;
  /* 009c1c53 mov dword ptr [edi*8 + 0x9c1b04], 0 */ { const u32 m_ = (u32)(edi * 8u + 0x9c1b04u); M32(m_) = (u32)(0x0u); }
  /* 009c1c5e inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1c5f cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1c62 jb 0x9c1c53 */ if (CF_) goto L_009c1c53;
  /* 009c1c64 jmp 0x9c1ca5 */ goto L_009c1ca5;
L_009c1c66:;
  /* 009c1c66 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1c68 setne dl */ { edx = (edx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 009c1c6b movzx edx, dl */ { edx = (u32)((edx & 0xffu)); }
  /* 009c1c6e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_009c1c70:;
  /* 009c1c70 cmp dword ptr [edi*8 + 0x9c1b00], ecx */ { const u32 m_ = (u32)(edi * 8u + 0x9c1b00u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1c77 je 0x9c1c9e */ if (ZF_) goto L_009c1c9e;
  /* 009c1c79 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1c7a cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1c7d jb 0x9c1c70 */ if (CF_) goto L_009c1c70;
  /* 009c1c7f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009c1c81 je 0x9c1ca5 */ if (ZF_) goto L_009c1ca5;
  /* 009c1c83 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_009c1c85:;
  /* 009c1c85 cmp dword ptr [edi*8 + 0x9c1b04], 0 */ { const u32 m_ = (u32)(edi * 8u + 0x9c1b04u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1c8d je 0x9c1c97 */ if (ZF_) goto L_009c1c97;
  /* 009c1c8f inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 009c1c90 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009c1c93 jb 0x9c1c85 */ if (CF_) goto L_009c1c85;
  /* 009c1c95 jmp 0x9c1ca5 */ goto L_009c1ca5;
L_009c1c97:;
  /* 009c1c97 mov dword ptr [edi*8 + 0x9c1b00], ecx */ { const u32 m_ = (u32)(edi * 8u + 0x9c1b00u); M32(m_) = (u32)(ecx); }
L_009c1c9e:;
  /* 009c1c9e mov dword ptr [edi*8 + 0x9c1b04], edx */ { const u32 m_ = (u32)(edi * 8u + 0x9c1b04u); M32(m_) = (u32)(edx); }
L_009c1ca5:;
  /* 009c1ca5 call 0x9c1cb2 */ esp -= 4; M32(esp) = 0x9c1caau; SAVEALL; F_009c1cb2(c); ABI_CHECK(0x9c1cb2u, 0x9c1ca5u); RETCHK(0x9c1caau, 0x9c1ca5u); LOADALL;
  /* 009c1caa mov esp, ebx */ { esp = (u32)(ebx); }
  /* 009c1cac popal */ { edi = M32(esp); esi = M32(esp+4); ebp = M32(esp+8); ebx = M32(esp+16); edx = M32(esp+20); ecx = M32(esp+24); eax = M32(esp+28); esp += 32; }
  /* 009c1cad jmp 0x55285d */ goto L_0055285d;
L_009c4f80:;
  /* 009c4f80 sub esp, 0x29c */ { u32 a_ = esp, b_ = 0x29cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 009c4f86 push dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 v_ = M32(m_); esp -= 4; M32(esp) = v_; }
  /* 009c4f89 jmp 0x551fee */ goto L_00551fee;
L_009e0280:;
  /* 009e0280 cmp edx, 0x40000004 */ { u32 a_ = edx, b_ = 0x40000004u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0286 je 0x55284e */ if (ZF_) goto L_0055284e;
  /* 009e028c jmp 0x9e03c0 */ goto L_009e03c0;
L_009e03c0:;
  /* 009e03c0 cmp edx, 0x40000008 */ { u32 a_ = edx, b_ = 0x40000008u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e03c6 je 0x9e0417 */ if (ZF_) goto L_009e0417;
  /* 009e03c8 cmp edx, 0x40000007 */ { u32 a_ = edx, b_ = 0x40000007u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e03ce je 0x9e03dc */ if (ZF_) goto L_009e03dc;
  /* 009e03d0 cmp edx, 0x4000000a */ { u32 a_ = edx, b_ = 0x4000000au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e03d6 jne 0x9c1a65 */ if (!ZF_) goto L_009c1a65;
L_009e03dc:;
  /* 009e03dc mov eax, dword ptr [0x9c1a08] */ { const u32 m_ = (u32)(0x9c1a08u); eax = (u32)(M32(m_)); }
  /* 009e03e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009e03e3 je 0x9e03f1 */ if (ZF_) goto L_009e03f1;
  /* 009e03e5 cmp eax, dword ptr [0x7a68bc] */ { const u32 m_ = (u32)(0x7a68bcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e03eb je 0x9c1a65 */ if (ZF_) goto L_009c1a65;
L_009e03f1:;
  /* 009e03f1 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009e03f4 cmp dword ptr [eax + 4], 0 */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e03f8 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 009e03fb cmp edx, 0x40000007 */ { u32 a_ = edx, b_ = 0x40000007u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e0401 jne 0x9e040d */ if (!ZF_) goto L_009e040d;
  /* 009e0403 mov byte ptr [0x9c1a04], al */ { const u32 m_ = (u32)(0x9c1a04u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 009e0408 jmp 0x55285d */ goto L_0055285d;
L_009e040d:;
  /* 009e040d mov byte ptr [0x9c16fc], al */ { const u32 m_ = (u32)(0x9c16fcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 009e0412 jmp 0x55285d */ goto L_0055285d;
L_009e0417:;
  /* 009e0417 mov dword ptr [0x9c1b60], 0 */ { const u32 m_ = (u32)(0x9c1b60u); M32(m_) = (u32)(0x0u); }
  /* 009e0421 mov eax, dword ptr [0x9c1a08] */ { const u32 m_ = (u32)(0x9c1a08u); eax = (u32)(M32(m_)); }
  /* 009e0426 cmp eax, dword ptr [0x7a68bc] */ { const u32 m_ = (u32)(0x7a68bcu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009e042c je 0x9c1a65 */ if (ZF_) goto L_009c1a65;
  /* 009e0432 mov dword ptr [0x9c1a08], 0 */ { const u32 m_ = (u32)(0x9c1a08u); M32(m_) = (u32)(0x0u); }
  /* 009e043c jmp 0x9c1a65 */ goto L_009c1a65;
}

void F_00552a50(CPU *c) {
  NATIVE_HOOK(0x552a50u) REGS; LOADALL;
L_00552a50:;
  /* 00552a50 mov eax, dword ptr [0x7a6e24] */ { const u32 m_ = (u32)(0x7a6e24u); eax = (u32)(M32(m_)); }
  /* 00552a55 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00552a57 jne 0x552ab6 */ if (!ZF_) goto L_00552ab6;
  /* 00552a59 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552a5a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00552a5b mov ebx, 0x2002 */ { ebx = (u32)(0x2002u); }
  /* 00552a60 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00552a62 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00552a64 nop */ ;
  /* 00552a65 nop */ ;
  /* 00552a66 nop */ ;
  /* 00552a67 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00552a69 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552a6a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00552a6b jne 0x552ab6 */ if (!ZF_) goto L_00552ab6;
  /* 00552a6d mov eax, dword ptr [0x7a6d2c] */ { const u32 m_ = (u32)(0x7a6d2cu); eax = (u32)(M32(m_)); }
  /* 00552a72 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00552a74 je 0x552a86 */ if (ZF_) goto L_00552a86;
  /* 00552a76 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00552a78 call 0x51c660 */ esp -= 4; M32(esp) = 0x552a7du; SAVEALL; F_0051c660(c); ABI_CHECK(0x51c660u, 0x552a78u); RETCHK(0x552a7du, 0x552a78u); LOADALL;
  /* 00552a7d mov eax, dword ptr [0x7a6d2c] */ { const u32 m_ = (u32)(0x7a6d2cu); eax = (u32)(M32(m_)); }
  /* 00552a82 mov byte ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x1u); }
L_00552a86:;
  /* 00552a86 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00552a8b push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00552a90 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552a92 push 0x5507d0 */ { u32 v_ = 0x5507d0u; esp -= 4; M32(esp) = v_; }
  /* 00552a97 push 0x46 */ { u32 v_ = 0x46u; esp -= 4; M32(esp) = v_; }
  /* 00552a99 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00552a9e call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x552aa4u; SAVEALL; call_ind(c, t_); RETCHK(0x552aa4u, 0x552a9eu); LOADALL; }
  /* 00552aa4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552aa5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552aa7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552aa9 call 0x50b090 */ esp -= 4; M32(esp) = 0x552aaeu; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x552aa9u); RETCHK(0x552aaeu, 0x552aa9u); LOADALL;
  /* 00552aae add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552ab1 mov dword ptr [0x7a6e24], eax */ { const u32 m_ = (u32)(0x7a6e24u); M32(m_) = (u32)(eax); }
L_00552ab6:;
  /* 00552ab6 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00552ac0(CPU *c) {
  NATIVE_HOOK(0x552ac0u) REGS; LOADALL;
L_00552ac0:;
  /* 00552ac0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552ac1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552ac3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552ac4 jmp 0x54c0f0 */ SAVEALL; F_0054c0f0(c); return;
}

void F_00552ad0(CPU *c) {
  NATIVE_HOOK(0x552ad0u) REGS; LOADALL;
L_00552ad0:;
  /* 00552ad0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552ad1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00552ad2 mov ebx, 0x2002 */ { ebx = (u32)(0x2002u); }
  /* 00552ad7 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00552ad9 call 0x54be60 */ esp -= 4; M32(esp) = 0x552adeu; SAVEALL; F_0054be60(c); ABI_CHECK(0x54be60u, 0x552ad9u); RETCHK(0x552adeu, 0x552ad9u); LOADALL;
  /* 00552ade test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00552ae0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552ae1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00552ae2 jne 0x552b28 */ if (!ZF_) goto L_00552b28;
  /* 00552ae4 mov eax, dword ptr [0x7a6d2c] */ { const u32 m_ = (u32)(0x7a6d2cu); eax = (u32)(M32(m_)); }
  /* 00552ae9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00552aeb je 0x552afd */ if (ZF_) goto L_00552afd;
  /* 00552aed mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00552aef call 0x51c660 */ esp -= 4; M32(esp) = 0x552af4u; SAVEALL; F_0051c660(c); ABI_CHECK(0x51c660u, 0x552aefu); RETCHK(0x552af4u, 0x552aefu); LOADALL;
  /* 00552af4 mov eax, dword ptr [0x7a6d2c] */ { const u32 m_ = (u32)(0x7a6d2cu); eax = (u32)(M32(m_)); }
  /* 00552af9 mov byte ptr [eax + 0x34], 1 */ { const u32 m_ = (u32)(eax + 0x34u); M8(m_) = (u8)(0x1u); }
L_00552afd:;
  /* 00552afd push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00552b02 push 0x190 */ { u32 v_ = 0x190u; esp -= 4; M32(esp) = v_; }
  /* 00552b07 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552b09 push 0x5507d0 */ { u32 v_ = 0x5507d0u; esp -= 4; M32(esp) = v_; }
  /* 00552b0e push 0x46 */ { u32 v_ = 0x46u; esp -= 4; M32(esp) = v_; }
  /* 00552b10 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00552b15 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x552b1bu; SAVEALL; call_ind(c, t_); RETCHK(0x552b1bu, 0x552b15u); LOADALL; }
  /* 00552b1b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552b1c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552b1e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552b20 call 0x50b090 */ esp -= 4; M32(esp) = 0x552b25u; SAVEALL; F_0050b090(c); ABI_CHECK(0x50b090u, 0x552b20u); RETCHK(0x552b25u, 0x552b20u); LOADALL;
  /* 00552b25 add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00552b28:;
  /* 00552b28 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00552b30(CPU *c) {
  NATIVE_HOOK(0x552b30u) REGS; LOADALL;
L_00552b30:;
  /* 00552b30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552b31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552b33 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552b36 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552b37 lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00552b3a mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 00552b3d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00552b3e lea eax, [esi + 0xf68] */ eax = (u32)((u32)(esi + 0xf68u));
  /* 00552b44 lea ebx, [ebp - 0x10] */ ebx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00552b47 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00552b4e call 0x552da0 */ esp -= 4; M32(esp) = 0x552b53u; SAVEALL; F_00552da0(c); ABI_CHECK(0x552da0u, 0x552b4eu); RETCHK(0x552b53u, 0x552b4eu); LOADALL;
  /* 00552b53 inc dword ptr [esi + 0xf90] */ { const u32 m_ = (u32)(esi + 0xf90u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552b59 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00552b5a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552b5c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552b5d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00552b60(CPU *c) {
  NATIVE_HOOK(0x552b60u) REGS; LOADALL;
L_00552b60:;
  /* 00552b60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552b61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552b63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00552b64 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552b65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00552b66 lea edi, [esi + 0xf68] */ edi = (u32)((u32)(esi + 0xf68u));
  /* 00552b6c lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 00552b6f lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00552b72 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00552b74 call 0x552e40 */ esp -= 4; M32(esp) = 0x552b79u; SAVEALL; F_00552e40(c); ABI_CHECK(0x552e40u, 0x552b74u); RETCHK(0x552b79u, 0x552b74u); LOADALL;
  /* 00552b79 mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
  /* 00552b7c fld dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); FPUSH((double)MF32(m_)); }
  /* 00552b7f call 0x61b154 */ esp -= 4; M32(esp) = 0x552b84u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x552b7fu); RETCHK(0x552b84u, 0x552b7fu); LOADALL;
  /* 00552b84 fld dword ptr [esi + 0xd4] */ { const u32 m_ = (u32)(esi + 0xd4u); FPUSH((double)MF32(m_)); }
  /* 00552b8a cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552b8d fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00552b93 fstp dword ptr [esi + 0xd8] */ { const u32 m_ = (u32)(esi + 0xd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00552b99 jge 0x552ba3 */ if (!LT_) goto L_00552ba3;
  /* 00552b9b inc dword ptr [esi + 0xf78] */ { const u32 m_ = (u32)(esi + 0xf78u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552ba1 jmp 0x552be2 */ goto L_00552be2;
L_00552ba3:;
  /* 00552ba3 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552ba6 jge 0x552bb0 */ if (!LT_) goto L_00552bb0;
  /* 00552ba8 inc dword ptr [esi + 0xf7c] */ { const u32 m_ = (u32)(esi + 0xf7cu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552bae jmp 0x552be2 */ goto L_00552be2;
L_00552bb0:;
  /* 00552bb0 cmp eax, 3 */ { u32 a_ = eax, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552bb3 jge 0x552bbd */ if (!LT_) goto L_00552bbd;
  /* 00552bb5 inc dword ptr [esi + 0xf80] */ { const u32 m_ = (u32)(esi + 0xf80u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552bbb jmp 0x552be2 */ goto L_00552be2;
L_00552bbd:;
  /* 00552bbd cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552bc0 jge 0x552bca */ if (!LT_) goto L_00552bca;
  /* 00552bc2 inc dword ptr [esi + 0xf84] */ { const u32 m_ = (u32)(esi + 0xf84u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552bc8 jmp 0x552be2 */ goto L_00552be2;
L_00552bca:;
  /* 00552bca cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552bcd jge 0x552bd7 */ if (!LT_) goto L_00552bd7;
  /* 00552bcf inc dword ptr [esi + 0xf88] */ { const u32 m_ = (u32)(esi + 0xf88u); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552bd5 jmp 0x552be2 */ goto L_00552be2;
L_00552bd7:;
  /* 00552bd7 cmp eax, 6 */ { u32 a_ = eax, b_ = 0x6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552bda jl 0x552be2 */ if (LT_) goto L_00552be2;
  /* 00552bdc inc dword ptr [esi + 0xf8c] */ { const u32 m_ = (u32)(esi + 0xf8cu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00552be2:;
  /* 00552be2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552be3 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00552be6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552be7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00552be8 call 0x55fe30 */ esp -= 4; M32(esp) = 0x552bedu; SAVEALL; F_0055fe30(c); ABI_CHECK(0x55fe30u, 0x552be8u); RETCHK(0x552bedu, 0x552be8u); LOADALL;
  /* 00552bed mov eax, dword ptr [esi + 0xf94] */ { const u32 m_ = (u32)(esi + 0xf94u); eax = (u32)(M32(m_)); }
  /* 00552bf3 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552bf4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552bf5 mov dword ptr [esi + 0xf94], eax */ { const u32 m_ = (u32)(esi + 0xf94u); M32(m_) = (u32)(eax); }
  /* 00552bfb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00552bfc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552bfe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552bff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00552c10(CPU *c) {
  NATIVE_HOOK(0x552c10u) REGS; LOADALL;
L_00552c10:;
  /* 00552c10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552c11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552c13 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00552c14 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552c15 mov esi, dword ptr [eax + 0xf6c] */ { const u32 m_ = (u32)(eax + 0xf6cu); esi = (u32)(M32(m_)); }
  /* 00552c1b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00552c1d cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552c1f mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00552c22 je 0x552c3c */ if (ZF_) goto L_00552c3c;
L_00552c24:;
  /* 00552c24 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00552c27 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00552c2a fadd dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00552c2d fstp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00552c30 call 0x53d420 */ esp -= 4; M32(esp) = 0x552c35u; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x552c30u); RETCHK(0x552c35u, 0x552c30u); LOADALL;
  /* 00552c35 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00552c38 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552c3a jne 0x552c24 */ if (!ZF_) goto L_00552c24;
L_00552c3c:;
  /* 00552c3c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00552c3d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552c3f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552c40 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00552c50(CPU *c) {
  NATIVE_HOOK(0x552c50u) REGS; LOADALL;
L_00552c50:;
  /* 00552c50 mov byte ptr [eax + 0xf9a], 1 */ { const u32 m_ = (u32)(eax + 0xf9au); M8(m_) = (u8)(0x1u); }
  /* 00552c57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00552c60(CPU *c) {
  NATIVE_HOOK(0x552c60u) REGS; LOADALL;
L_00552c60:;
  /* 00552c60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552c61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552c63 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00552c65 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 00552c6a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00552c70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552c71 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00552c78 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552c7b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00552c80 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552c81 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00552c83 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00552c86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552c87 mov dword ptr [ebp - 0x30], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ebx); }
  /* 00552c8a mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00552c91 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00552c94 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00552c97 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00552c9a mov eax, dword ptr [edi + 0xce8] */ { const u32 m_ = (u32)(edi + 0xce8u); eax = (u32)(M32(m_)); }
  /* 00552ca0 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552ca2 je 0x552d28 */ if (ZF_) goto L_00552d28;
  /* 00552ca8 mov ecx, dword ptr [edi + 0xcec] */ { const u32 m_ = (u32)(edi + 0xcecu); ecx = (u32)(M32(m_)); }
  /* 00552cae sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00552cb0 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00552cb5 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00552cb7 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00552cb9 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00552cbc mov eax, edx */ { eax = (u32)(edx); }
  /* 00552cbe shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00552cc1 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00552cc3 mov dword ptr [ebp - 0x30], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(eax); }
  /* 00552cc6 je 0x552d28 */ if (ZF_) goto L_00552d28;
  /* 00552cc8 mov eax, dword ptr [edi + 0xce8] */ { const u32 m_ = (u32)(edi + 0xce8u); eax = (u32)(M32(m_)); }
  /* 00552cce cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552cd0 jne 0x552cd6 */ if (!ZF_) goto L_00552cd6;
  /* 00552cd2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00552cd4 jmp 0x552cf1 */ goto L_00552cf1;
L_00552cd6:;
  /* 00552cd6 mov ecx, dword ptr [edi + 0xcec] */ { const u32 m_ = (u32)(edi + 0xcecu); ecx = (u32)(M32(m_)); }
  /* 00552cdc sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00552cde mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00552ce3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00552ce5 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00552ce7 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00552cea mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00552cec shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00552cef add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00552cf1:;
  /* 00552cf1 mov eax, dword ptr [edi + 0xcf4] */ { const u32 m_ = (u32)(edi + 0xcf4u); eax = (u32)(M32(m_)); }
  /* 00552cf7 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00552cf9 div ecx */ { u32 q_, r_; SAVEALL; rt_divu(c, edx, eax, ecx, &q_, &r_, 0x552cf9u); eax = q_; edx = r_; }
  /* 00552cfb mov esi, edx */ { esi = (u32)(edx); }
  /* 00552cfd push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552cfe call 0x54e2d0 */ esp -= 4; M32(esp) = 0x552d03u; SAVEALL; F_0054e2d0(c); ABI_CHECK(0x54e2d0u, 0x552cfeu); RETCHK(0x552d03u, 0x552cfeu); LOADALL;
  /* 00552d03 lea ecx, [esi + 1] */ ecx = (u32)((u32)(esi + 0x1u));
  /* 00552d06 imul esi, esi, 0x1c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00552d09 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552d0c mov dword ptr [edi + 0xcf4], ecx */ { const u32 m_ = (u32)(edi + 0xcf4u); M32(m_) = (u32)(ecx); }
  /* 00552d12 mov ecx, dword ptr [edi + 0xce8] */ { const u32 m_ = (u32)(edi + 0xce8u); ecx = (u32)(M32(m_)); }
  /* 00552d18 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00552d1a add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00552d1c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552d1d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552d1e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00552d21 call 0x404140 */ esp -= 4; M32(esp) = 0x552d26u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x552d21u); RETCHK(0x552d26u, 0x552d21u); LOADALL;
  /* 00552d26 jmp 0x552d46 */ goto L_00552d46;
L_00552d28:;
  /* 00552d28 lea edx, [edi + 0xae1] */ edx = (u32)((u32)(edi + 0xae1u));
  /* 00552d2e mov eax, edx */ { eax = (u32)(edx); }
  /* 00552d30 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_00552d33:;
  /* 00552d33 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552d35 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00552d36 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00552d38 jne 0x552d33 */ if (!ZF_) goto L_00552d33;
  /* 00552d3a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00552d3c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552d3d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00552d3e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00552d41 call 0x404420 */ esp -= 4; M32(esp) = 0x552d46u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x552d41u); RETCHK(0x552d46u, 0x552d41u); LOADALL;
L_00552d46:;
  /* 00552d46 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00552d49 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00552d4b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552d4c lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00552d4f mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00552d56 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00552d59 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00552d5a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00552d5c mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00552d5f call 0x404140 */ esp -= 4; M32(esp) = 0x552d64u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x552d5fu); RETCHK(0x552d64u, 0x552d5fu); LOADALL;
  /* 00552d64 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552d68 jb 0x552d76 */ if (CF_) goto L_00552d76;
  /* 00552d6a mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00552d6d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552d6e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x552d73u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x552d6eu); RETCHK(0x552d73u, 0x552d6eu); LOADALL;
  /* 00552d73 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00552d76:;
  /* 00552d76 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00552d79 mov eax, esi */ { eax = (u32)(esi); }
  /* 00552d7b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00552d7c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00552d83 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00552d86 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00552d87 call 0x61af31 */ esp -= 4; M32(esp) = 0x552d8cu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x552d87u); RETCHK(0x552d8cu, 0x552d87u); LOADALL;
  /* 00552d8c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552d8e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552d8f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00552da0(CPU *c) {
  NATIVE_HOOK(0x552da0u) REGS; LOADALL;
L_00552da0:;
  /* 00552da0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552da1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552da3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552da6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552da7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00552da8 mov edi, eax */ { edi = (u32)(eax); }
  /* 00552daa mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 00552dad mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00552db0 mov dl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552db3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552db5 mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00552db7 mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00552dba jne 0x552ddd */ if (!ZF_) goto L_00552ddd;
  /* 00552dbc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00552dbf mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
L_00552dc1:;
  /* 00552dc1 cmp edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552dc4 setl cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((LT_) ? 1u : 0u) & 0xffu); }
  /* 00552dc7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552dc9 mov esi, eax */ { esi = (u32)(eax); }
  /* 00552dcb mov byte ptr [ebp - 8], cl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00552dce je 0x552dd4 */ if (ZF_) goto L_00552dd4;
  /* 00552dd0 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00552dd2 jmp 0x552dd7 */ goto L_00552dd7;
L_00552dd4:;
  /* 00552dd4 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
L_00552dd7:;
  /* 00552dd7 cmp byte ptr [eax + 0x15], 0 */ { const u32 m_ = (u32)(eax + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00552ddb je 0x552dc1 */ if (ZF_) goto L_00552dc1;
L_00552ddd:;
  /* 00552ddd test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552ddf mov eax, esi */ { eax = (u32)(esi); }
  /* 00552de1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00552de4 je 0x552e00 */ if (ZF_) goto L_00552e00;
  /* 00552de6 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00552de9 cmp esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552deb jne 0x552df5 */ if (!ZF_) goto L_00552df5;
  /* 00552ded mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00552df0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00552df1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00552df3 jmp 0x552e0f */ goto L_00552e0f;
L_00552df5:;
  /* 00552df5 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00552df8 call 0x552ea0 */ esp -= 4; M32(esp) = 0x552dfdu; SAVEALL; F_00552ea0(c); ABI_CHECK(0x552ea0u, 0x552df8u); RETCHK(0x552dfdu, 0x552df8u); LOADALL;
  /* 00552dfd mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
L_00552e00:;
  /* 00552e00 mov edx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); edx = (u32)(M32(m_)); }
  /* 00552e03 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00552e06 cmp edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552e08 jge 0x552e2c */ if (!LT_) goto L_00552e2c;
  /* 00552e0a mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00552e0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00552e0e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
L_00552e0f:;
  /* 00552e0f lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 00552e12 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00552e13 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00552e15 call 0x55fbe0 */ esp -= 4; M32(esp) = 0x552e1au; SAVEALL; F_0055fbe0(c); ABI_CHECK(0x55fbe0u, 0x552e15u); RETCHK(0x552e1au, 0x552e15u); LOADALL;
  /* 00552e1a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00552e1c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552e1d mov dword ptr [ebx], edx */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(edx); }
  /* 00552e1f mov byte ptr [ebx + 4], 1 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x1u); }
  /* 00552e23 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00552e25 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00552e26 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552e28 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552e29 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00552e2c:;
  /* 00552e2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552e2d mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 00552e2f mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 00552e33 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00552e35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00552e36 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552e38 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552e39 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00552e40(CPU *c) {
  NATIVE_HOOK(0x552e40u) REGS; LOADALL;
L_00552e40:;
  /* 00552e40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552e41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552e43 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552e46 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552e47 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00552e49 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00552e4c mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00552e4f cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00552e53 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00552e54 jne 0x552e6c */ if (!ZF_) goto L_00552e6c;
  /* 00552e56 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
L_00552e58:;
  /* 00552e58 cmp dword ptr [ecx + 0xc], edi */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552e5b jge 0x552e62 */ if (!LT_) goto L_00552e62;
  /* 00552e5d mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00552e60 jmp 0x552e66 */ goto L_00552e66;
L_00552e62:;
  /* 00552e62 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00552e64 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_00552e66:;
  /* 00552e66 cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00552e6a je 0x552e58 */ if (ZF_) goto L_00552e58;
L_00552e6c:;
  /* 00552e6c mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00552e6f cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552e71 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00552e74 je 0x552e8a */ if (ZF_) goto L_00552e8a;
  /* 00552e76 mov esi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); esi = (u32)(M32(m_)); }
  /* 00552e78 cmp esi, dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552e7b jl 0x552e8a */ if (LT_) goto L_00552e8a;
  /* 00552e7d lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00552e80 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00552e82 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552e83 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00552e85 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00552e86 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552e88 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552e89 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00552e8a:;
  /* 00552e8a mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00552e8d lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00552e90 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00552e92 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552e93 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00552e95 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00552e96 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00552e98 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00552e99 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00552ea0(CPU *c) {
  NATIVE_HOOK(0x552ea0u) REGS; LOADALL;
L_00552ea0:;
  /* 00552ea0 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00552ea2 mov cl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552ea5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552ea7 je 0x552eaf */ if (ZF_) goto L_00552eaf;
  /* 00552ea9 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00552eac mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00552eae ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00552eaf:;
  /* 00552eaf mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00552eb1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00552eb2 mov bl, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552eb5 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552eb7 jne 0x552ed3 */ if (!ZF_) goto L_00552ed3;
  /* 00552eb9 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00552ebc mov bl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552ebf test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552ec1 jne 0x552ecf */ if (!ZF_) goto L_00552ecf;
L_00552ec3:;
  /* 00552ec3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00552ec5 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00552ec8 mov bl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552ecb test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552ecd je 0x552ec3 */ if (ZF_) goto L_00552ec3;
L_00552ecf:;
  /* 00552ecf mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00552ed1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00552ed2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00552ed3:;
  /* 00552ed3 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00552ed6 mov cl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552ed9 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552edb jne 0x552efb */ if (!ZF_) goto L_00552efb;
  /* 00552edd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00552ee0:;
  /* 00552ee0 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00552ee2 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552ee4 jne 0x552ef2 */ if (!ZF_) goto L_00552ef2;
  /* 00552ee6 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00552ee8 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00552eeb mov cl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552eee test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552ef0 je 0x552ee0 */ if (ZF_) goto L_00552ee0;
L_00552ef2:;
  /* 00552ef2 mov cl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552ef5 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552ef7 jne 0x552efb */ if (!ZF_) goto L_00552efb;
  /* 00552ef9 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
L_00552efb:;
  /* 00552efb pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00552efc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00552f00(CPU *c) {
  NATIVE_HOOK(0x552f00u) REGS; LOADALL;
L_00552f00:;
  /* 00552f00 mov cl, byte ptr [0x9b91cc] */ { const u32 m_ = (u32)(0x9b91ccu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00552f06 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00552f0b test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00552f0d jne 0x552f34 */ if (!ZF_) goto L_00552f34;
  /* 00552f0f mov edx, dword ptr [0x9b91cc] */ { const u32 m_ = (u32)(0x9b91ccu); edx = (u32)(M32(m_)); }
  /* 00552f15 or edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00552f17 mov eax, 0x9b919c */ { eax = (u32)(0x9b919cu); }
  /* 00552f1c mov dword ptr [0x9b91cc], edx */ { const u32 m_ = (u32)(0x9b91ccu); M32(m_) = (u32)(edx); }
  /* 00552f22 call 0x552f40 */ esp -= 4; M32(esp) = 0x552f27u; SAVEALL; F_00552f40(c); ABI_CHECK(0x552f40u, 0x552f22u); RETCHK(0x552f27u, 0x552f22u); LOADALL;
  /* 00552f27 push 0x62c950 */ { u32 v_ = 0x62c950u; esp -= 4; M32(esp) = v_; }
  /* 00552f2c call 0x5fe916 */ esp -= 4; M32(esp) = 0x552f31u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x552f2cu); RETCHK(0x552f31u, 0x552f2cu); LOADALL;
  /* 00552f31 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00552f34:;
  /* 00552f34 mov eax, 0x9b919c */ { eax = (u32)(0x9b919cu); }
  /* 00552f39 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00552f40(CPU *c) {
  NATIVE_HOOK(0x552f40u) REGS; LOADALL;
L_00552f40:;
  /* 00552f40 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00552f42 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00552f43 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 00552f46 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00552f49 mov dword ptr [eax + 0x24], 0x43340000 */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(0x43340000u); }
  /* 00552f50 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00552f53 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00552f56 mov dword ptr [eax + 0x1c], 3 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x3u); }
  /* 00552f5d lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
  /* 00552f60 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00552f62 mov dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edx); }
  /* 00552f64 mov dword ptr [esi + 4], edx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edx); }
  /* 00552f67 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00552f6a mov dword ptr [0x7a553c], ecx */ { const u32 m_ = (u32)(0x7a553cu); M32(m_) = (u32)(ecx); }
  /* 00552f70 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00552f73 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00552f74 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00552f80(CPU *c) {
  NATIVE_HOOK(0x552f80u) REGS; LOADALL;
L_00552f80:;
  /* 00552f80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00552f81 push 0x655b8c */ { u32 v_ = 0x655b8cu; esp -= 4; M32(esp) = v_; }
  /* 00552f86 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 00552f89 call 0x5ab540 */ esp -= 4; M32(esp) = 0x552f8eu; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x552f89u); RETCHK(0x552f8eu, 0x552f89u); LOADALL;
  /* 00552f8e push 0x655b70 */ { u32 v_ = 0x655b70u; esp -= 4; M32(esp) = v_; }
  /* 00552f93 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00552f96 call 0x5ab540 */ esp -= 4; M32(esp) = 0x552f9bu; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x552f96u); RETCHK(0x552f9bu, 0x552f96u); LOADALL;
  /* 00552f9b push 0x655b54 */ { u32 v_ = 0x655b54u; esp -= 4; M32(esp) = v_; }
  /* 00552fa0 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00552fa3 call 0x5ab540 */ esp -= 4; M32(esp) = 0x552fa8u; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x552fa3u); RETCHK(0x552fa8u, 0x552fa3u); LOADALL;
  /* 00552fa8 push 0x655b38 */ { u32 v_ = 0x655b38u; esp -= 4; M32(esp) = v_; }
  /* 00552fad mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00552fb0 call 0x5ab540 */ esp -= 4; M32(esp) = 0x552fb5u; SAVEALL; F_005ab540(c); ABI_CHECK(0x5ab540u, 0x552fb0u); RETCHK(0x552fb5u, 0x552fb0u); LOADALL;
  /* 00552fb5 mov edi, dword ptr [0x62e1b4] */ { const u32 m_ = (u32)(0x62e1b4u); edi = (u32)(M32(m_)); }
  /* 00552fbb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00552fbe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552fc0 push 0x7a5538 */ { u32 v_ = 0x7a5538u; esp -= 4; M32(esp) = v_; }
  /* 00552fc5 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 00552fc8 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x552fcau; SAVEALL; call_ind(c, t_); RETCHK(0x552fcau, 0x552fc8u); LOADALL; }
  /* 00552fca push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00552fcc push 0x7a5534 */ { u32 v_ = 0x7a5534u; esp -= 4; M32(esp) = v_; }
  /* 00552fd1 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x552fd3u; SAVEALL; call_ind(c, t_); RETCHK(0x552fd3u, 0x552fd1u); LOADALL; }
  /* 00552fd3 mov dword ptr [esi + 0x28], 0 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 00552fda mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00552fdf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00552fe0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00552ff0(CPU *c) {
  NATIVE_HOOK(0x552ff0u) REGS; LOADALL;
L_00552ff0:;
  /* 00552ff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00552ff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00552ff3 mov eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00552ff6 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00552ff9 ja 0x55303a */ if (!(CF_|ZF_)) goto L_0055303a;
  /* 00552ffb jmp dword ptr [eax*4 + 0x553040] */ { const u32 m_ = (u32)(eax * 4u + 0x553040u); u32 t_ = M32(m_); switch (t_) { case 0x553002u: goto L_00553002; case 0x55300du: goto L_0055300d; case 0x553018u: goto L_00553018; case 0x553021u: goto L_00553021; case 0x553027u: goto L_00553027; case 0x55302du: goto L_0055302d; default: SAVEALL; call_ind(c, t_); return; } }
L_00553002:;
  /* 00553002 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00553004 call 0x5533a0 */ esp -= 4; M32(esp) = 0x553009u; SAVEALL; F_005533a0(c); ABI_CHECK(0x5533a0u, 0x553004u); RETCHK(0x553009u, 0x553004u); LOADALL;
  /* 00553009 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055300a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055300d:;
  /* 0055300d mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055300f call 0x5533b0 */ esp -= 4; M32(esp) = 0x553014u; SAVEALL; F_005533b0(c); ABI_CHECK(0x5533b0u, 0x55300fu); RETCHK(0x553014u, 0x55300fu); LOADALL;
  /* 00553014 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553015 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00553018:;
  /* 00553018 call 0x5533c0 */ esp -= 4; M32(esp) = 0x55301du; SAVEALL; F_005533c0(c); ABI_CHECK(0x5533c0u, 0x553018u); RETCHK(0x55301du, 0x553018u); LOADALL;
  /* 0055301d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055301e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00553021:;
  /* 00553021 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553022 jmp 0x553400 */ goto L_00553400;
L_00553027:;
  /* 00553027 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553028 jmp 0x553430 */ goto L_00553430;
L_0055302d:;
  /* 0055302d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00553030 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553031 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553032 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00553034 call 0x553460 */ esp -= 4; M32(esp) = 0x553039u; SAVEALL; F_00553460(c); ABI_CHECK(0x553460u, 0x553034u); RETCHK(0x553039u, 0x553034u); LOADALL;
  /* 00553039 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0055303a:;
  /* 0055303a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055303b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00553400:;
  /* 00553400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553403 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00553406 fmul dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00553409 fadd dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0055340c fst dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); MF32(m_) = (float)ST(0); }
  /* 0055340f fcomp dword ptr [0x656da0] */ { const u32 m_ = (u32)(0x656da0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00553415 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00553417 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055341a jne 0x55342a */ if (!ZF_) goto L_0055342a;
  /* 0055341c mov dword ptr [ecx + 0x20], 0x437f0000 */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(0x437f0000u); }
  /* 00553423 mov dword ptr [ecx + 0x1c], 2 */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(0x2u); }
L_0055342a:;
  /* 0055342a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055342b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00553430:;
  /* 00553430 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553431 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553433 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00553436 fmul dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00553439 fsubr dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 0055343c fst dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); MF32(m_) = (float)ST(0); }
  /* 0055343f fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00553445 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00553447 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055344a jp 0x55345a */ if (PF_) goto L_0055345a;
  /* 0055344c mov dword ptr [ecx + 0x20], 0 */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(0x0u); }
  /* 00553453 mov dword ptr [ecx + 0x1c], 2 */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(0x2u); }
L_0055345a:;
  /* 0055345a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055345b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00553060(CPU *c) {
  NATIVE_HOOK(0x553060u) REGS; LOADALL;
L_00553060:;
  /* 00553060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553063 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00553065 push 0x656f38 */ { u32 v_ = 0x656f38u; esp -= 4; M32(esp) = v_; }
  /* 0055306a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 0055306f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00553075 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553076 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055307d sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553080 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00553081 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553082 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00553083 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00553086 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00553089 wait */ ;
  /* 0055308a mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00553091 mov ebx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ebx = (u32)(M32(m_)); }
  /* 00553094 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553096 je 0x5531a5 */ if (ZF_) goto L_005531a5;
  /* 0055309c mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0055309f mov ecx, dword ptr [esi + eax*4 + 4] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005530a3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005530a5 je 0x5531a5 */ if (ZF_) goto L_005531a5;
  /* 005530ab fld dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005530ae call 0x61b154 */ esp -= 4; M32(esp) = 0x5530b3u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5530aeu); RETCHK(0x5530b3u, 0x5530aeu); LOADALL;
  /* 005530b3 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 005530b6 mov edi, eax */ { edi = (u32)(eax); }
  /* 005530b8 or edi, 0xffffff00 */ { u32 a_ = edi, b_ = 0xffffff00u; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005530be shl edi, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005530c1 or edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005530c3 shl edi, 8 */ { u32 n_ = (8u) & 31u; if (n_) { u32 a_ = edi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edi = (u32)(r_); } }
  /* 005530c6 or edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005530c8 mov dword ptr [ebp - 0x30], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edi); }
  /* 005530cb mov byte ptr [ebp - 0x1a], al */ { const u32 m_ = (u32)(ebp + 0xffffffe6u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005530ce mov byte ptr [ebp - 0x1b], al */ { const u32 m_ = (u32)(ebp + 0xffffffe5u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005530d1 mov byte ptr [ebp - 0x1c], al */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005530d4 mov byte ptr [ebp - 0x19], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe7u); M8(m_) = (u8)(0x0u); }
  /* 005530d8 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005530da lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 005530dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005530de push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005530df call 0x5afd30 */ esp -= 4; M32(esp) = 0x5530e4u; SAVEALL; F_005afd30(c); ABI_CHECK(0x5afd30u, 0x5530dfu); RETCHK(0x5530e4u, 0x5530dfu); LOADALL;
  /* 005530e4 mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 005530e7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005530e8 call 0x5afb80 */ esp -= 4; M32(esp) = 0x5530edu; SAVEALL; F_005afb80(c); ABI_CHECK(0x5afb80u, 0x5530e8u); RETCHK(0x5530edu, 0x5530e8u); LOADALL;
  /* 005530ed add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005530f0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005530f2 je 0x553183 */ if (ZF_) goto L_00553183;
  /* 005530f8 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005530fb mov eax, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); eax = (u32)(M32(m_)); }
  /* 005530fe mov dword ptr [ebp - 0x20], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(eax); }
  /* 00553101 mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00553104 mov ecx, dword ptr [esi + ecx*4 + 4] */ { const u32 m_ = (u32)(esi + ecx * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00553108 mov edx, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); edx = (u32)(M32(m_)); }
  /* 0055310b mov dword ptr [ebp - 0x38], edx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edx); }
  /* 0055310e mov ebx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00553111 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 00553114 mov eax, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); eax = (u32)(M32(m_)); }
  /* 00553117 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00553119 cdq */ edx = (u32)((s32)eax >> 31);
  /* 0055311a sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055311c mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0055311e sar ebx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ebx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ebx = (u32)(r_); } }
  /* 00553120 mov dword ptr [ebp - 0x40], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(ebx); }
  /* 00553123 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 00553126 mov eax, dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00553129 sub eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055312c cdq */ edx = (u32)((s32)eax >> 31);
  /* 0055312d sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055312f sar eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00553131 mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 00553134 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553135 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00553136 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0055313b push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00553140 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553142 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553144 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 00553147 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00553149 mov dword ptr [ebp - 0x24], eax */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(eax); }
  /* 0055314c fild dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)(s32)M32(m_)); }
  /* 0055314f sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553152 fstp dword ptr [esp + 0xc] */ { const u32 m_ = (u32)(esp + 0xcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553156 mov edx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edx = (u32)(M32(m_)); }
  /* 00553159 add ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0055315b mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 0055315e fild dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)(s32)M32(m_)); }
  /* 00553161 fstp dword ptr [esp + 8] */ { const u32 m_ = (u32)(esp + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553165 fild dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); FPUSH((double)(s32)M32(m_)); }
  /* 00553168 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055316c fild dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); FPUSH((double)(s32)M32(m_)); }
  /* 0055316f fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553172 call 0x4ee540 */ esp -= 4; M32(esp) = 0x553177u; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x553172u); RETCHK(0x553177u, 0x553172u); LOADALL;
  /* 00553177 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 0055317a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055317b call 0x5afb70 */ esp -= 4; M32(esp) = 0x553180u; SAVEALL; F_005afb70(c); ABI_CHECK(0x5afb70u, 0x55317bu); RETCHK(0x553180u, 0x55317bu); LOADALL;
  /* 00553180 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553183:;
  /* 00553183 mov esi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 00553186 call 0x559190 */ esp -= 4; M32(esp) = 0x55318bu; SAVEALL; F_00559190(c); ABI_CHECK(0x559190u, 0x553186u); RETCHK(0x55318bu, 0x553186u); LOADALL;
  /* 0055318b push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0055318d call 0x559eb0 */ esp -= 4; M32(esp) = 0x553192u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x55318du); RETCHK(0x553192u, 0x55318du); LOADALL;
  /* 00553192 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553193 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553199u; SAVEALL; call_ind(c, t_); RETCHK(0x553199u, 0x553193u); LOADALL; }
  /* 00553199 call 0x559eb0 */ esp -= 4; M32(esp) = 0x55319eu; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x553199u); RETCHK(0x55319eu, 0x553199u); LOADALL;
  /* 0055319e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055319f call dword ptr [0x62e53c] */ { const u32 m_ = (u32)(0x62e53cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5531a5u; SAVEALL; call_ind(c, t_); RETCHK(0x5531a5u, 0x55319fu); LOADALL; }
L_005531a5:;
  /* 005531a5 wait */ ;
  /* 005531a6 jmp 0x5531bb */ goto L_005531bb;
L_005531bb:;
  /* 005531bb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005531c2 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005531c5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005531cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005531cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005531ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005531cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005531d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005531d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005531a8(CPU *c) {
  NATIVE_HOOK(0x5531a8u) REGS; LOADALL;
L_005531a8:;
  /* 005531a8 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005531ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005531ae(CPU *c) {
  NATIVE_HOOK(0x5531aeu) REGS; LOADALL;
L_005531ae:;
  /* 005531ae mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 005531b1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005531b4 mov dword ptr [ecx + 0x2c], 0 */ { const u32 m_ = (u32)(ecx + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 005531bb mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005531c2 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005531c5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005531cc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005531cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005531ce pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005531cf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005531d1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005531d2 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005531e0(CPU *c) {
  NATIVE_HOOK(0x5531e0u) REGS; LOADALL;
L_005531e0:;
  /* 005531e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005531e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005531e3 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005531e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005531e7 mov esi, eax */ { esi = (u32)(eax); }
  /* 005531e9 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 005531ec test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005531ee je 0x553375 */ if (ZF_) goto L_00553375;
  /* 005531f4 mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 005531f7 mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 005531f9 mov byte ptr [ebp - 2], al */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005531fc mov byte ptr [ebp - 3], al */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005531ff mov byte ptr [ebp - 4], al */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00553202 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00553204 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00553207 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553208 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553209 mov byte ptr [ebp - 1], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)(0x0u); }
  /* 0055320d call 0x5afd30 */ esp -= 4; M32(esp) = 0x553212u; SAVEALL; F_005afd30(c); ABI_CHECK(0x5afd30u, 0x55320du); RETCHK(0x553212u, 0x55320du); LOADALL;
  /* 00553212 mov edx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); edx = (u32)(M32(m_)); }
  /* 00553215 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553216 call 0x5afb80 */ esp -= 4; M32(esp) = 0x55321bu; SAVEALL; F_005afb80(c); ABI_CHECK(0x5afb80u, 0x553216u); RETCHK(0x55321bu, 0x553216u); LOADALL;
  /* 0055321b add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055321e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553220 je 0x553353 */ if (ZF_) goto L_00553353;
  /* 00553226 mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 00553229 mov eax, dword ptr [eax + 0x60] */ { const u32 m_ = (u32)(eax + 0x60u); eax = (u32)(M32(m_)); }
  /* 0055322c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055322d mov ebx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00553230 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00553231 mov edi, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edi = (u32)(M32(m_)); }
  /* 00553234 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00553237 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055323a mov edx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); edx = (u32)(M32(m_)); }
  /* 0055323d mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00553240 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 00553243 mov ecx, dword ptr [esi + eax*4 + 4] */ { const u32 m_ = (u32)(esi + eax * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00553247 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553248 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055324a push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0055324f mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00553252 fild dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)(s32)M32(m_)); }
  /* 00553255 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0055325a mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0055325d push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055325f fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553262 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553264 fild dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); FPUSH((double)(s32)M32(m_)); }
  /* 00553267 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 0055326a mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0055326d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055326e fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553271 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00553274 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553275 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553277 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553279 call 0x4ee540 */ esp -= 4; M32(esp) = 0x55327eu; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x553279u); RETCHK(0x55327eu, 0x553279u); LOADALL;
  /* 0055327e mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00553281 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 00553284 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00553287 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055328a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055328b push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055328d push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00553292 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00553297 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553299 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055329b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055329c mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 0055329f mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005532a1 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005532a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005532a4 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005532a7 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 005532aa fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 005532ad mov edx, ebx */ { edx = (u32)(ebx); }
  /* 005532af sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005532b2 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 005532b4 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 005532b7 fstp dword ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005532bb fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 005532be fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005532c1 call 0x4ee540 */ esp -= 4; M32(esp) = 0x5532c6u; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x5532c1u); RETCHK(0x5532c6u, 0x5532c1u); LOADALL;
  /* 005532c6 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005532c9 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005532cc mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005532cf mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 005532d2 add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005532d5 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005532d7 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 005532da jle 0x553345 */ if ((ZF_|LT_)) goto L_00553345;
  /* 005532dc lea edx, [edi - 0xf] */ edx = (u32)((u32)(edi + 0xfffffff1u));
  /* 005532df sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005532e1 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 005532e4 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 005532e7 sub edi, 0xf */ { u32 a_ = edi, b_ = 0xfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005532ea mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 005532ed mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005532f0 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005532f3 lea eax, [ecx + ecx*2] */ eax = (u32)((u32)(ecx + ecx * 2u));
  /* 005532f6 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 005532f9 shl eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005532fb sub ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 005532fd mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 00553300 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553303 jmp 0x553308 */ goto L_00553308;
L_00553305:;
  /* 00553305 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
L_00553308:;
  /* 00553308 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0055330b mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0055330e add ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00553310 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00553313 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553314 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00553316 push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 0055331b push 0x3f800000 */ { u32 v_ = 0x3f800000u; esp -= 4; M32(esp) = v_; }
  /* 00553320 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553322 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553324 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553325 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00553328 fild dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)(s32)M32(m_)); }
  /* 0055332b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055332c fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055332f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553330 fild dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); FPUSH((double)(s32)M32(m_)); }
  /* 00553333 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553334 fstp dword ptr [esp] */ { const u32 m_ = (u32)(esp); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553337 call 0x4ee540 */ esp -= 4; M32(esp) = 0x55333cu; SAVEALL; F_004ee540(c); ABI_CHECK(0x4ee540u, 0x553337u); RETCHK(0x55333cu, 0x553337u); LOADALL;
  /* 0055333c add esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055333f dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00553340 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 00553343 jne 0x553305 */ if (!ZF_) goto L_00553305;
L_00553345:;
  /* 00553345 mov ecx, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00553348 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553349 call 0x5afb70 */ esp -= 4; M32(esp) = 0x55334eu; SAVEALL; F_005afb70(c); ABI_CHECK(0x5afb70u, 0x553349u); RETCHK(0x55334eu, 0x553349u); LOADALL;
  /* 0055334e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553351 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00553352 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00553353:;
  /* 00553353 mov esi, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); esi = (u32)(M32(m_)); }
  /* 00553356 call 0x559190 */ esp -= 4; M32(esp) = 0x55335bu; SAVEALL; F_00559190(c); ABI_CHECK(0x559190u, 0x553356u); RETCHK(0x55335bu, 0x553356u); LOADALL;
  /* 0055335b push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0055335d call 0x559eb0 */ esp -= 4; M32(esp) = 0x553362u; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x55335du); RETCHK(0x553362u, 0x55335du); LOADALL;
  /* 00553362 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553363 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553369u; SAVEALL; call_ind(c, t_); RETCHK(0x553369u, 0x553363u); LOADALL; }
  /* 00553369 call 0x559eb0 */ esp -= 4; M32(esp) = 0x55336eu; SAVEALL; F_00559eb0(c); ABI_CHECK(0x559eb0u, 0x553369u); RETCHK(0x55336eu, 0x553369u); LOADALL;
  /* 0055336e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055336f call dword ptr [0x62e53c] */ { const u32 m_ = (u32)(0x62e53cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553375u; SAVEALL; call_ind(c, t_); RETCHK(0x553375u, 0x55336fu); LOADALL; }
L_00553375:;
  /* 00553375 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00553376 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00553378 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553379 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00553380(CPU *c) {
  NATIVE_HOOK(0x553380u) REGS; LOADALL;
L_00553380:;
  /* 00553380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553383 fld dword ptr [0x7a553c] */ { const u32 m_ = (u32)(0x7a553cu); FPUSH((double)MF32(m_)); }
  /* 00553389 fadd dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0055338c fstp dword ptr [0x7a553c] */ { const u32 m_ = (u32)(0x7a553cu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00553392 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553393 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005533a0(CPU *c) {
  NATIVE_HOOK(0x5533a0u) REGS; LOADALL;
L_005533a0:;
  /* 005533a0 mov dword ptr [eax + 0x1c], 3 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x3u); }
  /* 005533a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005533b0(CPU *c) {
  NATIVE_HOOK(0x5533b0u) REGS; LOADALL;
L_005533b0:;
  /* 005533b0 mov dword ptr [eax + 0x1c], 4 */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(0x4u); }
  /* 005533b7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005533c0(CPU *c) {
  NATIVE_HOOK(0x5533c0u) REGS; LOADALL;
L_005533c0:;
  /* 005533c0 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 005533c6 mov dword ptr [ecx + 0x1c], 5 */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(0x5u); }
  /* 005533cd fld dword ptr [ecx + 0x20] */ { const u32 m_ = (u32)(ecx + 0x20u); FPUSH((double)MF32(m_)); }
  /* 005533d0 mov dword ptr [ecx + 0x28], 0x3f800000 */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(0x3f800000u); }
  /* 005533d7 fucompp */ c->fsw = fcom_sw(c->fsw, ST(0), ST(1)); FPOP(); FPOP();
  /* 005533d9 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005533db test ah, 0x44 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x44u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005533de jp 0x5533f5 */ if (PF_) goto L_005533f5;
  /* 005533e0 mov eax, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (u32)(M32(m_)); }
  /* 005533e3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005533e5 jne 0x5533f5 */ if (!ZF_) goto L_005533f5;
  /* 005533e7 mov dword ptr [ecx + 0x1c], 0 */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(0x0u); }
  /* 005533ee mov dword ptr [ecx + 0x14], 1 */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(0x1u); }
L_005533f5:;
  /* 005533f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553460(CPU *c) {
  NATIVE_HOOK(0x553460u) REGS; LOADALL;
L_00553460:;
  /* 00553460 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553461 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553463 fld dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); FPUSH((double)MF32(m_)); }
  /* 00553466 fsub dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00553469 fst dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); MF32(m_) = (float)ST(0); }
  /* 0055346c fcomp dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00553472 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00553474 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553477 je 0x553501 */ if (ZF_) goto L_00553501;
  /* 0055347d fld dword ptr [0x7a553c] */ { const u32 m_ = (u32)(0x7a553cu); FPUSH((double)MF32(m_)); }
  /* 00553483 mov eax, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00553486 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553488 fadd dword ptr [0x656f30] */ { const u32 m_ = (u32)(0x656f30u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0055348e fst dword ptr [0x7a553c] */ { const u32 m_ = (u32)(0x7a553cu); MF32(m_) = (float)ST(0); }
  /* 00553494 jne 0x5534b2 */ if (!ZF_) goto L_005534b2;
  /* 00553496 fcomp qword ptr [0x656f28] */ { const u32 m_ = (u32)(0x656f28u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 0055349c fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0055349e test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005534a1 jne 0x553501 */ if (!ZF_) goto L_00553501;
  /* 005534a3 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005534a8 mov dword ptr [esi + 0x18], ecx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005534ab mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005534ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005534af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005534b2:;
  /* 005534b2 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 005534b7 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005534b9 jne 0x5534d6 */ if (!ZF_) goto L_005534d6;
  /* 005534bb fcomp qword ptr [0x656f20] */ { const u32 m_ = (u32)(0x656f20u); c->fsw = fcom_sw(c->fsw, ST(0), MF64(m_)); FPOP(); }
  /* 005534c1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005534c3 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005534c6 jne 0x553501 */ if (!ZF_) goto L_00553501;
  /* 005534c8 mov dword ptr [esi + 0x18], 2 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x2u); }
  /* 005534cf mov dword ptr [esi + 0x1c], ecx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 005534d2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005534d3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005534d6:;
  /* 005534d6 cmp eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005534d9 jne 0x5534ff */ if (!ZF_) goto L_005534ff;
  /* 005534db fcomp dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005534e1 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005534e3 test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005534e6 jne 0x553501 */ if (!ZF_) goto L_00553501;
  /* 005534e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005534e9 push 0x7a5538 */ { u32 v_ = 0x7a5538u; esp -= 4; M32(esp) = v_; }
  /* 005534ee call dword ptr [0x62e1b4] */ { const u32 m_ = (u32)(0x62e1b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5534f4u; SAVEALL; call_ind(c, t_); RETCHK(0x5534f4u, 0x5534eeu); LOADALL; }
  /* 005534f4 mov dword ptr [esi + 0x2c], 0 */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(0x0u); }
  /* 005534fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005534fc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005534ff:;
  /* 005534ff fstp st(0) */ ST(0) = ST(0); FPOP();
L_00553501:;
  /* 00553501 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553502 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00553510(CPU *c) {
  NATIVE_HOOK(0x553510u) REGS; LOADALL;
L_00553510:;
  /* 00553510 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553511 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553513 sub esp, 0x11c */ { u32 a_ = esp, b_ = 0x11cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553519 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055351e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055351f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00553520 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00553523 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553525 mov byte ptr [ebp - 0x11c], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffee4u); M8(m_) = (u8)(0x0u); }
  /* 0055352c mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 00553531 lea edi, [ebp - 0x11b] */ edi = (u32)((u32)(ebp + 0xfffffee5u));
  /* 00553537 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00553539 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0055353b stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0055353c push 0x104 */ { u32 v_ = 0x104u; esp -= 4; M32(esp) = v_; }
  /* 00553541 lea eax, [ebp - 0x11c] */ eax = (u32)((u32)(ebp + 0xfffffee4u));
  /* 00553547 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553548 call dword ptr [0x62e110] */ { const u32 m_ = (u32)(0x62e110u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55354eu; SAVEALL; call_ind(c, t_); RETCHK(0x55354eu, 0x553548u); LOADALL; }
  /* 0055354e lea edi, [ebp - 0x11c] */ edi = (u32)((u32)(ebp + 0xfffffee4u));
  /* 00553554 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
L_00553555:;
  /* 00553555 mov al, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00553558 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00553559 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055355b jne 0x553555 */ if (!ZF_) goto L_00553555;
  /* 0055355d mov ecx, dword ptr [0x655cb8] */ { const u32 m_ = (u32)(0x655cb8u); ecx = (u32)(M32(m_)); }
  /* 00553563 mov edx, dword ptr [0x655cbc] */ { const u32 m_ = (u32)(0x655cbcu); edx = (u32)(M32(m_)); }
  /* 00553569 mov eax, dword ptr [0x655cc0] */ { const u32 m_ = (u32)(0x655cc0u); eax = (u32)(M32(m_)); }
  /* 0055356e mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
  /* 00553570 mov cx, word ptr [0x655cc4] */ { const u32 m_ = (u32)(0x655cc4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 00553577 mov dword ptr [edi + 4], edx */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(edx); }
  /* 0055357a xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0055357c mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055357f mov dword ptr [ebp - 0x17], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe9u); M32(m_) = (u32)(edx); }
  /* 00553582 lea eax, [ebp - 0x11c] */ eax = (u32)((u32)(ebp + 0xfffffee4u));
  /* 00553588 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553589 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 0055358b mov word ptr [edi + 0xc], cx */ { const u32 m_ = (u32)(edi + 0xcu); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0055358f mov dword ptr [ebp - 0x13], edx */ { const u32 m_ = (u32)(ebp + 0xffffffedu); M32(m_) = (u32)(edx); }
  /* 00553592 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00553595 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553596 mov dword ptr [ebp - 0xf], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff1u); M32(m_) = (u32)(edx); }
  /* 00553599 push 0x655cac */ { u32 v_ = 0x655cacu; esp -= 4; M32(esp) = v_; }
  /* 0055359e mov dword ptr [ebp - 0xb], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff5u); M32(m_) = (u32)(edx); }
  /* 005535a1 push 0x645584 */ { u32 v_ = 0x645584u; esp -= 4; M32(esp) = v_; }
  /* 005535a6 mov word ptr [ebp - 7], dx */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M16(m_) = (u16)((edx & 0xffffu)); }
  /* 005535aa push 0x655ca4 */ { u32 v_ = 0x655ca4u; esp -= 4; M32(esp) = v_; }
  /* 005535af mov byte ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M8(m_) = (u8)(0x0u); }
  /* 005535b3 mov byte ptr [ebp - 5], dl */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 005535b6 call dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5535bcu; SAVEALL; call_ind(c, t_); RETCHK(0x5535bcu, 0x5535b6u); LOADALL; }
  /* 005535bc mov eax, dword ptr [0x7a6e3c] */ { const u32 m_ = (u32)(0x7a6e3cu); eax = (u32)(M32(m_)); }
  /* 005535c1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005535c3 mov esi, dword ptr [0x62e57c] */ { const u32 m_ = (u32)(0x62e57cu); esi = (u32)(M32(m_)); }
  /* 005535c9 jne 0x5535d8 */ if (!ZF_) goto L_005535d8;
  /* 005535cb push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005535cd lea edx, [ebp - 0x18] */ edx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 005535d0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005535d1 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x5535d3u; SAVEALL; call_ind(c, t_); RETCHK(0x5535d3u, 0x5535d1u); LOADALL; }
  /* 005535d3 mov dword ptr [0x7a6e3c], eax */ { const u32 m_ = (u32)(0x7a6e3cu); M32(m_) = (u32)(eax); }
L_005535d8:;
  /* 005535d8 mov eax, dword ptr [0x7a6e40] */ { const u32 m_ = (u32)(0x7a6e40u); eax = (u32)(M32(m_)); }
  /* 005535dd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005535df jne 0x5535ef */ if (!ZF_) goto L_005535ef;
  /* 005535e1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005535e3 push 0x655c98 */ { u32 v_ = 0x655c98u; esp -= 4; M32(esp) = v_; }
  /* 005535e8 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x5535eau; SAVEALL; call_ind(c, t_); RETCHK(0x5535eau, 0x5535e8u); LOADALL; }
  /* 005535ea mov dword ptr [0x7a6e40], eax */ { const u32 m_ = (u32)(0x7a6e40u); M32(m_) = (u32)(eax); }
L_005535ef:;
  /* 005535ef mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 005535f2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005535f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005535f4 call 0x61af31 */ esp -= 4; M32(esp) = 0x5535f9u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5535f4u); RETCHK(0x5535f9u, 0x5535f4u); LOADALL;
  /* 005535f9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005535fb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005535fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553600(CPU *c) {
  NATIVE_HOOK(0x553600u) REGS; LOADALL;
L_00553600:;
  /* 00553600 call 0x553510 */ esp -= 4; M32(esp) = 0x553605u; SAVEALL; F_00553510(c); ABI_CHECK(0x553510u, 0x553600u); RETCHK(0x553605u, 0x553600u); LOADALL;
  /* 00553605 mov eax, dword ptr [0x7a6e3c] */ { const u32 m_ = (u32)(0x7a6e3cu); eax = (u32)(M32(m_)); }
  /* 0055360a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055360c je 0x553617 */ if (ZF_) goto L_00553617;
  /* 0055360e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553610 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553611 call dword ptr [0x62e580] */ { const u32 m_ = (u32)(0x62e580u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553617u; SAVEALL; call_ind(c, t_); RETCHK(0x553617u, 0x553611u); LOADALL; }
L_00553617:;
  /* 00553617 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553620(CPU *c) {
  NATIVE_HOOK(0x553620u) REGS; LOADALL;
L_00553620:;
  /* 00553620 test ax, ax */ { u32 a_ = (eax & 0xffffu), b_ = (eax & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 00553623 jne 0x55362b */ if (!ZF_) goto L_0055362b;
  /* 00553625 mov eax, 4 */ { eax = (u32)(0x4u); }
  /* 0055362a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055362b:;
  /* 0055362b cmp ax, 1 */ { u32 a_ = (eax & 0xffffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055362f jne 0x553637 */ if (!ZF_) goto L_00553637;
  /* 00553631 mov eax, 5 */ { eax = (u32)(0x5u); }
  /* 00553636 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00553637:;
  /* 00553637 cmp ax, 2 */ { u32 a_ = (eax & 0xffffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055363b jne 0x553643 */ if (!ZF_) goto L_00553643;
  /* 0055363d mov eax, 6 */ { eax = (u32)(0x6u); }
  /* 00553642 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00553643:;
  /* 00553643 cmp ax, 3 */ { u32 a_ = (eax & 0xffffu), b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00553647 jne 0x55364f */ if (!ZF_) goto L_0055364f;
  /* 00553649 mov eax, 7 */ { eax = (u32)(0x7u); }
  /* 0055364e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055364f:;
  /* 0055364f cmp ax, 4 */ { u32 a_ = (eax & 0xffffu), b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00553653 jne 0x55365b */ if (!ZF_) goto L_0055365b;
  /* 00553655 mov eax, 8 */ { eax = (u32)(0x8u); }
  /* 0055365a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055365b:;
  /* 0055365b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055365d cmp ax, 5 */ { u32 a_ = (eax & 0xffffu), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 00553661 setne cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00553664 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00553665 and ecx, 9 */ { u32 a_ = ecx, b_ = 0x9u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00553668 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055366a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553670(CPU *c) {
  NATIVE_HOOK(0x553670u) REGS; LOADALL;
L_00553670:;
  /* 00553670 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553671 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553673 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553676 add eax, 0x44 */ { u32 a_ = eax, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00553679 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0055367b mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055367e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055367f mov ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00553682 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 00553685 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00553688 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0055368b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055368e movzx ax, dl */ { eax = (eax & 0xffff0000u) | ((u32)((edx & 0xffu)) & 0xffffu); }
  /* 00553692 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553693 mov dword ptr [ebp - 0x14], edx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edx); }
  /* 00553696 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 00553699 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 0055369c call 0x553620 */ esp -= 4; M32(esp) = 0x5536a1u; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x55369cu); RETCHK(0x5536a1u, 0x55369cu); LOADALL;
  /* 005536a1 mov dword ptr [0x6881f0], eax */ { const u32 m_ = (u32)(0x6881f0u); M32(m_) = (u32)(eax); }
  /* 005536a6 movzx ax, dh */ { eax = (eax & 0xffff0000u) | ((u32)(((edx >> 8) & 0xffu)) & 0xffffu); }
  /* 005536aa call 0x553620 */ esp -= 4; M32(esp) = 0x5536afu; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x5536aau); RETCHK(0x5536afu, 0x5536aau); LOADALL;
  /* 005536af mov dword ptr [0x6881f4], eax */ { const u32 m_ = (u32)(0x6881f4u); M32(m_) = (u32)(eax); }
  /* 005536b4 movzx ax, byte ptr [ebp - 0x12] */ { const u32 m_ = (u32)(ebp + 0xffffffeeu); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005536b9 call 0x553620 */ esp -= 4; M32(esp) = 0x5536beu; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x5536b9u); RETCHK(0x5536beu, 0x5536b9u); LOADALL;
  /* 005536be mov dword ptr [0x6881f8], eax */ { const u32 m_ = (u32)(0x6881f8u); M32(m_) = (u32)(eax); }
  /* 005536c3 mov dword ptr [0x6881fc], eax */ { const u32 m_ = (u32)(0x6881fcu); M32(m_) = (u32)(eax); }
  /* 005536c8 movzx ax, bl */ { eax = (eax & 0xffff0000u) | ((u32)((ebx & 0xffu)) & 0xffffu); }
  /* 005536cc call 0x553620 */ esp -= 4; M32(esp) = 0x5536d1u; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x5536ccu); RETCHK(0x5536d1u, 0x5536ccu); LOADALL;
  /* 005536d1 mov dword ptr [0x688218], eax */ { const u32 m_ = (u32)(0x688218u); M32(m_) = (u32)(eax); }
  /* 005536d6 mov dword ptr [0x68821c], eax */ { const u32 m_ = (u32)(0x68821cu); M32(m_) = (u32)(eax); }
  /* 005536db movzx ax, byte ptr [ebp - 0xa] */ { const u32 m_ = (u32)(ebp + 0xfffffff6u); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005536e0 call 0x553620 */ esp -= 4; M32(esp) = 0x5536e5u; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x5536e0u); RETCHK(0x5536e5u, 0x5536e0u); LOADALL;
  /* 005536e5 mov dword ptr [0x688220], eax */ { const u32 m_ = (u32)(0x688220u); M32(m_) = (u32)(eax); }
  /* 005536ea mov dword ptr [0x688224], eax */ { const u32 m_ = (u32)(0x688224u); M32(m_) = (u32)(eax); }
  /* 005536ef movzx ax, byte ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 005536f4 call 0x553620 */ esp -= 4; M32(esp) = 0x5536f9u; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x5536f4u); RETCHK(0x5536f9u, 0x5536f4u); LOADALL;
  /* 005536f9 mov dword ptr [0x688210], eax */ { const u32 m_ = (u32)(0x688210u); M32(m_) = (u32)(eax); }
  /* 005536fe mov dword ptr [0x688214], eax */ { const u32 m_ = (u32)(0x688214u); M32(m_) = (u32)(eax); }
  /* 00553703 movzx ax, byte ptr [ebp - 6] */ { const u32 m_ = (u32)(ebp + 0xfffffffau); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00553708 call 0x553620 */ esp -= 4; M32(esp) = 0x55370du; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x553708u); RETCHK(0x55370du, 0x553708u); LOADALL;
  /* 0055370d mov edx, eax */ { edx = (u32)(eax); }
  /* 0055370f movzx ax, byte ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00553714 mov dword ptr [0x688350], edx */ { const u32 m_ = (u32)(0x688350u); M32(m_) = (u32)(edx); }
  /* 0055371a call 0x553620 */ esp -= 4; M32(esp) = 0x55371fu; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x55371au); RETCHK(0x55371fu, 0x55371au); LOADALL;
  /* 0055371f mov esi, eax */ { esi = (u32)(eax); }
  /* 00553721 movzx ax, byte ptr [ebp - 2] */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 00553726 mov dword ptr [0x688354], esi */ { const u32 m_ = (u32)(0x688354u); M32(m_) = (u32)(esi); }
  /* 0055372c call 0x553620 */ esp -= 4; M32(esp) = 0x553731u; SAVEALL; F_00553620(c); ABI_CHECK(0x553620u, 0x55372cu); RETCHK(0x553731u, 0x55372cu); LOADALL;
  /* 00553731 mov ecx, 0x16 */ { ecx = (u32)(0x16u); }
  /* 00553736 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00553738 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055373a sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055373c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055373d mov dword ptr [0x688358], eax */ { const u32 m_ = (u32)(0x688358u); M32(m_) = (u32)(eax); }
  /* 00553742 mov dword ptr [0x68835c], ecx */ { const u32 m_ = (u32)(0x68835cu); M32(m_) = (u32)(ecx); }
  /* 00553748 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00553749 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055374b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055374c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553750(CPU *c) {
  NATIVE_HOOK(0x553750u) REGS; LOADALL;
L_00553750:;
  /* 00553750 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553751 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00553752 mov edi, 0x6530e8 */ { edi = (u32)(0x6530e8u); }
  /* 00553757 mov esi, eax */ { esi = (u32)(eax); }
  /* 00553759 mov ecx, 2 */ { ecx = (u32)(0x2u); }
  /* 0055375e xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00553760 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553762 je 0x553779 */ if (ZF_) goto L_00553779;
  /* 00553764 mov esi, eax */ { esi = (u32)(eax); }
  /* 00553766 mov edi, 0x6530e4 */ { edi = (u32)(0x6530e4u); }
  /* 0055376b mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 00553770 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553772 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553774 je 0x553779 */ if (ZF_) goto L_00553779;
  /* 00553776 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00553777 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00553778 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00553779:;
  /* 00553779 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055377a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0055377f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00553780 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553790(CPU *c) {
  NATIVE_HOOK(0x553790u) REGS; LOADALL;
L_00553790:;
  /* 00553790 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553791 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553793 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00553795 push 0x61c501 */ { u32 v_ = 0x61c501u; esp -= 4; M32(esp) = v_; }
  /* 0055379a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005537a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005537a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005537a8 sub esp, 0x1f0 */ { u32 a_ = esp, b_ = 0x1f0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005537ae mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005537b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005537b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005537b5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005537b6 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 005537b8 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005537ba push 0x655c94 */ { u32 v_ = 0x655c94u; esp -= 4; M32(esp) = v_; }
  /* 005537bf lea ecx, [ebp - 0x1fc] */ ecx = (u32)((u32)(ebp + 0xfffffe04u));
  /* 005537c5 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005537c8 mov dword ptr [ebp - 0x1e4], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffe1cu); M32(m_) = (u32)(0xfu); }
  /* 005537d2 mov dword ptr [ebp - 0x1e8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffe18u); M32(m_) = (u32)(ebx); }
  /* 005537d8 mov byte ptr [ebp - 0x1f8], bl */ { const u32 m_ = (u32)(ebp + 0xfffffe08u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005537de call 0x404420 */ esp -= 4; M32(esp) = 0x5537e3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5537deu); RETCHK(0x5537e3u, 0x5537deu); LOADALL;
  /* 005537e3 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 005537e6 lea eax, [ebp - 0x1fc] */ eax = (u32)((u32)(ebp + 0xfffffe04u));
  /* 005537ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005537ed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005537ee lea esi, [ebp - 0x64] */ esi = (u32)((u32)(ebp + 0xffffff9cu));
  /* 005537f1 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005537f4 call 0x464640 */ esp -= 4; M32(esp) = 0x5537f9u; SAVEALL; F_00464640(c); ABI_CHECK(0x464640u, 0x5537f4u); RETCHK(0x5537f9u, 0x5537f4u); LOADALL;
  /* 005537f9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005537fc mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00553800 mov eax, dword ptr [ebp - 0x1e4] */ { const u32 m_ = (u32)(ebp + 0xfffffe1cu); eax = (u32)(M32(m_)); }
  /* 00553806 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0055380b cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055380d jb 0x55381e */ if (CF_) goto L_0055381e;
  /* 0055380f mov ecx, dword ptr [ebp - 0x1f8] */ { const u32 m_ = (u32)(ebp + 0xfffffe08u); ecx = (u32)(M32(m_)); }
  /* 00553815 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553816 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55381bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553816u); RETCHK(0x55381bu, 0x553816u); LOADALL;
  /* 0055381b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055381e:;
  /* 0055381e cmp dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553821 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 00553824 mov dword ptr [ebp - 0x1e4], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffe1cu); M32(m_) = (u32)(0xfu); }
  /* 0055382e mov dword ptr [ebp - 0x1e8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffe18u); M32(m_) = (u32)(ebx); }
  /* 00553834 mov byte ptr [ebp - 0x1f8], bl */ { const u32 m_ = (u32)(ebp + 0xfffffe08u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055383a jae 0x55383f */ if (!CF_) goto L_0055383f;
  /* 0055383c lea eax, [ebp - 0x60] */ eax = (u32)((u32)(ebp + 0xffffffa0u));
L_0055383f:;
  /* 0055383f lea edx, [ebp - 0x1a4] */ edx = (u32)((u32)(ebp + 0xfffffe5cu));
  /* 00553845 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553846 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553847 call dword ptr [0x62e114] */ { const u32 m_ = (u32)(0x62e114u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55384du; SAVEALL; call_ind(c, t_); RETCHK(0x55384du, 0x553847u); LOADALL; }
  /* 0055384d cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553850 mov dword ptr [ebp - 0x1a8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffe58u); M32(m_) = (u32)(eax); }
  /* 00553856 jne 0x553872 */ if (!ZF_) goto L_00553872;
  /* 00553858 cmp dword ptr [ebp - 0x4c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055385b jb 0x553b07 */ if (CF_) goto L_00553b07;
  /* 00553861 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 00553864 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553865 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55386au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553865u); RETCHK(0x55386au, 0x553865u); LOADALL;
  /* 0055386a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055386d jmp 0x553b07 */ goto L_00553b07;
L_00553872:;
  /* 00553872 mov esi, dword ptr [ebp - 0x1a8] */ { const u32 m_ = (u32)(ebp + 0xfffffe58u); esi = (u32)(M32(m_)); }
  /* 00553878 lea ecx, [ebp - 0x1a4] */ ecx = (u32)((u32)(ebp + 0xfffffe5cu));
  /* 0055387e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055387f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553880 call dword ptr [0x62e12c] */ { const u32 m_ = (u32)(0x62e12cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553886u; SAVEALL; call_ind(c, t_); RETCHK(0x553886u, 0x553880u); LOADALL; }
  /* 00553886 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553888 je 0x553ab8 */ if (ZF_) goto L_00553ab8;
  /* 0055388e test byte ptr [ebp - 0x1a4], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffe5cu); u32 a_ = M8(m_), b_ = 0x10u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553895 lea eax, [ebp - 0x178] */ eax = (u32)((u32)(ebp + 0xfffffe88u));
  /* 0055389b jne 0x55398c */ if (!ZF_) goto L_0055398c;
  /* 005538a1 mov dword ptr [ebp - 0x1ac], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffe54u); M32(m_) = (u32)(0xfu); }
  /* 005538ab mov dword ptr [ebp - 0x1b0], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffe50u); M32(m_) = (u32)(ebx); }
  /* 005538b1 mov byte ptr [ebp - 0x1c0], bl */ { const u32 m_ = (u32)(ebp + 0xfffffe40u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005538b7 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 005538ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005538c0:;
  /* 005538c0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005538c2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005538c3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005538c5 jne 0x5538c0 */ if (!ZF_) goto L_005538c0;
  /* 005538c7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005538c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005538ca lea edx, [ebp - 0x178] */ edx = (u32)((u32)(ebp + 0xfffffe88u));
  /* 005538d0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005538d1 lea ecx, [ebp - 0x1c4] */ ecx = (u32)((u32)(ebp + 0xfffffe3cu));
  /* 005538d7 call 0x404420 */ esp -= 4; M32(esp) = 0x5538dcu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5538d7u); RETCHK(0x5538dcu, 0x5538d7u); LOADALL;
  /* 005538dc lea eax, [ebp - 0x1c4] */ eax = (u32)((u32)(ebp + 0xfffffe3cu));
  /* 005538e2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005538e3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005538e4 lea esi, [ebp - 0x48] */ esi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 005538e7 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 005538eb call 0x464640 */ esp -= 4; M32(esp) = 0x5538f0u; SAVEALL; F_00464640(c); ABI_CHECK(0x464640u, 0x5538ebu); RETCHK(0x5538f0u, 0x5538ebu); LOADALL;
  /* 005538f0 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 005538f4 mov eax, dword ptr [ebp - 0x1ac] */ { const u32 m_ = (u32)(ebp + 0xfffffe54u); eax = (u32)(M32(m_)); }
  /* 005538fa add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005538fd cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553900 jb 0x553911 */ if (CF_) goto L_00553911;
  /* 00553902 mov ecx, dword ptr [ebp - 0x1c0] */ { const u32 m_ = (u32)(ebp + 0xfffffe40u); ecx = (u32)(M32(m_)); }
  /* 00553908 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553909 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55390eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553909u); RETCHK(0x55390eu, 0x553909u); LOADALL;
  /* 0055390e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553911:;
  /* 00553911 mov eax, dword ptr [ebp - 0x1a4] */ { const u32 m_ = (u32)(ebp + 0xfffffe5cu); eax = (u32)(M32(m_)); }
  /* 00553917 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553919 mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 0055391e mov dword ptr [ebp - 0x1ac], esi */ { const u32 m_ = (u32)(ebp + 0xfffffe54u); M32(m_) = (u32)(esi); }
  /* 00553924 mov dword ptr [ebp - 0x1b0], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffe50u); M32(m_) = (u32)(ebx); }
  /* 0055392a mov byte ptr [ebp - 0x1c0], bl */ { const u32 m_ = (u32)(ebp + 0xfffffe40u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553930 je 0x553951 */ if (ZF_) goto L_00553951;
  /* 00553932 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553936 mov ecx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); ecx = (u32)(M32(m_)); }
  /* 00553939 jae 0x55393e */ if (!CF_) goto L_0055393e;
  /* 0055393b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
L_0055393e:;
  /* 0055393e and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553941 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553942 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553943 call dword ptr [0x62e184] */ { const u32 m_ = (u32)(0x62e184u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553949u; SAVEALL; call_ind(c, t_); RETCHK(0x553949u, 0x553943u); LOADALL; }
  /* 00553949 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055394b je 0x553a90 */ if (ZF_) goto L_00553a90;
L_00553951:;
  /* 00553951 cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553955 mov eax, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); eax = (u32)(M32(m_)); }
  /* 00553958 jae 0x55395d */ if (!CF_) goto L_0055395d;
  /* 0055395a lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
L_0055395d:;
  /* 0055395d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055395e call dword ptr [0x62e17c] */ { const u32 m_ = (u32)(0x62e17cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553964u; SAVEALL; call_ind(c, t_); RETCHK(0x553964u, 0x55395eu); LOADALL; }
  /* 00553964 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553966 je 0x553a90 */ if (ZF_) goto L_00553a90;
  /* 0055396c cmp dword ptr [ebp - 0x30], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553970 jb 0x55397e */ if (CF_) goto L_0055397e;
  /* 00553972 mov edx, dword ptr [ebp - 0x44] */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); edx = (u32)(M32(m_)); }
  /* 00553975 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553976 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55397bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553976u); RETCHK(0x55397bu, 0x553976u); LOADALL;
  /* 0055397b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055397e:;
  /* 0055397e mov dword ptr [ebp - 0x30], esi */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(esi); }
  /* 00553981 mov dword ptr [ebp - 0x34], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ebx); }
  /* 00553984 mov byte ptr [ebp - 0x44], bl */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553987 jmp 0x553872 */ goto L_00553872;
L_0055398c:;
  /* 0055398c call 0x553750 */ esp -= 4; M32(esp) = 0x553991u; SAVEALL; F_00553750(c); ABI_CHECK(0x553750u, 0x55398cu); RETCHK(0x553991u, 0x55398cu); LOADALL;
  /* 00553991 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553993 jne 0x553872 */ if (!ZF_) goto L_00553872;
  /* 00553999 lea eax, [ebp - 0x178] */ eax = (u32)((u32)(ebp + 0xfffffe88u));
  /* 0055399f mov dword ptr [ebp - 0x1c8], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffe38u); M32(m_) = (u32)(0xfu); }
  /* 005539a9 mov dword ptr [ebp - 0x1cc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffe34u); M32(m_) = (u32)(ebx); }
  /* 005539af mov byte ptr [ebp - 0x1dc], bl */ { const u32 m_ = (u32)(ebp + 0xfffffe24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005539b5 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_005539b8:;
  /* 005539b8 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005539ba inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005539bb cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005539bd jne 0x5539b8 */ if (!ZF_) goto L_005539b8;
  /* 005539bf sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005539c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005539c2 lea eax, [ebp - 0x178] */ eax = (u32)((u32)(ebp + 0xfffffe88u));
  /* 005539c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005539c9 lea ecx, [ebp - 0x1e0] */ ecx = (u32)((u32)(ebp + 0xfffffe20u));
  /* 005539cf call 0x404420 */ esp -= 4; M32(esp) = 0x5539d4u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5539cfu); RETCHK(0x5539d4u, 0x5539cfu); LOADALL;
  /* 005539d4 lea ecx, [ebp - 0x1e0] */ ecx = (u32)((u32)(ebp + 0xfffffe20u));
  /* 005539da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005539db push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005539dc lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005539df mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 005539e3 call 0x464640 */ esp -= 4; M32(esp) = 0x5539e8u; SAVEALL; F_00464640(c); ABI_CHECK(0x464640u, 0x5539e3u); RETCHK(0x5539e8u, 0x5539e3u); LOADALL;
  /* 005539e8 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005539eb mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 005539ef mov eax, dword ptr [ebp - 0x1c8] */ { const u32 m_ = (u32)(ebp + 0xfffffe38u); eax = (u32)(M32(m_)); }
  /* 005539f5 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 005539fa cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005539fc jb 0x553a0d */ if (CF_) goto L_00553a0d;
  /* 005539fe mov edx, dword ptr [ebp - 0x1dc] */ { const u32 m_ = (u32)(ebp + 0xfffffe24u); edx = (u32)(M32(m_)); }
  /* 00553a04 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553a05 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x553a0au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553a05u); RETCHK(0x553a0au, 0x553a05u); LOADALL;
  /* 00553a0a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553a0d:;
  /* 00553a0d mov eax, dword ptr [ebp - 0x1a4] */ { const u32 m_ = (u32)(ebp + 0xfffffe5cu); eax = (u32)(M32(m_)); }
  /* 00553a13 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553a15 mov dword ptr [ebp - 0x1c8], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffe38u); M32(m_) = (u32)(0xfu); }
  /* 00553a1f mov dword ptr [ebp - 0x1cc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffe34u); M32(m_) = (u32)(ebx); }
  /* 00553a25 mov byte ptr [ebp - 0x1dc], bl */ { const u32 m_ = (u32)(ebp + 0xfffffe24u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553a2b je 0x553a47 */ if (ZF_) goto L_00553a47;
  /* 00553a2d cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553a30 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00553a33 jae 0x553a38 */ if (!CF_) goto L_00553a38;
  /* 00553a35 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
L_00553a38:;
  /* 00553a38 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553a3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553a3c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553a3d call dword ptr [0x62e184] */ { const u32 m_ = (u32)(0x62e184u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553a43u; SAVEALL; call_ind(c, t_); RETCHK(0x553a43u, 0x553a3du); LOADALL; }
  /* 00553a43 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553a45 je 0x553aa4 */ if (ZF_) goto L_00553aa4;
L_00553a47:;
  /* 00553a47 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00553a4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553a4b call 0x553790 */ esp -= 4; M32(esp) = 0x553a50u; SAVEALL; F_00553790(c); ABI_CHECK(0x553790u, 0x553a4bu); RETCHK(0x553a50u, 0x553a4bu); LOADALL;
  /* 00553a50 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553a53 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553a55 je 0x553aa4 */ if (ZF_) goto L_00553aa4;
  /* 00553a57 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553a5a mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 00553a5d jae 0x553a62 */ if (!CF_) goto L_00553a62;
  /* 00553a5f lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_00553a62:;
  /* 00553a62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553a63 call dword ptr [0x62e178] */ { const u32 m_ = (u32)(0x62e178u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553a69u; SAVEALL; call_ind(c, t_); RETCHK(0x553a69u, 0x553a63u); LOADALL; }
  /* 00553a69 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00553a6d cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553a70 jb 0x553a7e */ if (CF_) goto L_00553a7e;
  /* 00553a72 mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00553a75 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553a76 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x553a7bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553a76u); RETCHK(0x553a7bu, 0x553a76u); LOADALL;
  /* 00553a7b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553a7e:;
  /* 00553a7e mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00553a85 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00553a88 mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553a8b jmp 0x553872 */ goto L_00553872;
L_00553a90:;
  /* 00553a90 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00553a93 call 0x43ee60 */ esp -= 4; M32(esp) = 0x553a98u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x553a93u); RETCHK(0x553a98u, 0x553a93u); LOADALL;
  /* 00553a98 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00553a9b call 0x43ee60 */ esp -= 4; M32(esp) = 0x553aa0u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x553a9bu); RETCHK(0x553aa0u, 0x553a9bu); LOADALL;
  /* 00553aa0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00553aa2 jmp 0x553b09 */ goto L_00553b09;
L_00553aa4:;
  /* 00553aa4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00553aa7 call 0x43ee60 */ esp -= 4; M32(esp) = 0x553aacu; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x553aa7u); RETCHK(0x553aacu, 0x553aa7u); LOADALL;
L_00553aac:;
  /* 00553aac lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
L_00553aaf:;
  /* 00553aaf call 0x43ee60 */ esp -= 4; M32(esp) = 0x553ab4u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x553aafu); RETCHK(0x553ab4u, 0x553aafu); LOADALL;
  /* 00553ab4 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00553ab6 jmp 0x553b09 */ goto L_00553b09;
L_00553ab8:;
  /* 00553ab8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553ab9 call dword ptr [0x62e130] */ { const u32 m_ = (u32)(0x62e130u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553abfu; SAVEALL; call_ind(c, t_); RETCHK(0x553abfu, 0x553ab9u); LOADALL; }
  /* 00553abf mov eax, dword ptr [ebp - 0x1a4] */ { const u32 m_ = (u32)(ebp + 0xfffffe5cu); eax = (u32)(M32(m_)); }
  /* 00553ac5 test al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553ac7 je 0x553ae6 */ if (ZF_) goto L_00553ae6;
  /* 00553ac9 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553acd jb 0x553ad4 */ if (CF_) goto L_00553ad4;
  /* 00553acf mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00553ad2 jmp 0x553ad7 */ goto L_00553ad7;
L_00553ad4:;
  /* 00553ad4 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
L_00553ad7:;
  /* 00553ad7 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553ada push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553adb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553adc call dword ptr [0x62e184] */ { const u32 m_ = (u32)(0x62e184u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553ae2u; SAVEALL; call_ind(c, t_); RETCHK(0x553ae2u, 0x553adcu); LOADALL; }
  /* 00553ae2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553ae4 je 0x553aac */ if (ZF_) goto L_00553aac;
L_00553ae6:;
  /* 00553ae6 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553aea jb 0x553af1 */ if (CF_) goto L_00553af1;
  /* 00553aec mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00553aef jmp 0x553af4 */ goto L_00553af4;
L_00553af1:;
  /* 00553af1 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
L_00553af4:;
  /* 00553af4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553af5 call dword ptr [0x62e178] */ { const u32 m_ = (u32)(0x62e178u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553afbu; SAVEALL; call_ind(c, t_); RETCHK(0x553afbu, 0x553af5u); LOADALL; }
  /* 00553afb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553afd lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00553b00 je 0x553aaf */ if (ZF_) goto L_00553aaf;
  /* 00553b02 call 0x43ee60 */ esp -= 4; M32(esp) = 0x553b07u; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x553b02u); RETCHK(0x553b07u, 0x553b02u); LOADALL;
L_00553b07:;
  /* 00553b07 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_00553b09:;
  /* 00553b09 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00553b0c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00553b0d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00553b0e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00553b15 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00553b18 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00553b19 call 0x61af31 */ esp -= 4; M32(esp) = 0x553b1eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x553b19u); RETCHK(0x553b1eu, 0x553b19u); LOADALL;
  /* 00553b1e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00553b20 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553b21 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553b30(CPU *c) {
  NATIVE_HOOK(0x553b30u) REGS; LOADALL;
L_00553b30:;
  /* 00553b30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553b31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553b33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00553b35 push 0x61ff0e */ { u32 v_ = 0x61ff0eu; esp -= 4; M32(esp) = v_; }
  /* 00553b3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00553b40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553b41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00553b48 sub esp, 0x2c4 */ { u32 a_ = esp, b_ = 0x2c4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553b4e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00553b53 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00553b54 push 0x15 */ { u32 v_ = 0x15u; esp -= 4; M32(esp) = v_; }
  /* 00553b56 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00553b58 push 0x655c7c */ { u32 v_ = 0x655c7cu; esp -= 4; M32(esp) = v_; }
  /* 00553b5d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00553b60 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00553b63 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 00553b6a mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 00553b6d mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553b70 call 0x404420 */ esp -= 4; M32(esp) = 0x553b75u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x553b70u); RETCHK(0x553b75u, 0x553b70u); LOADALL;
  /* 00553b75 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00553b78 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553b79 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00553b7c call 0x553790 */ esp -= 4; M32(esp) = 0x553b81u; SAVEALL; F_00553790(c); ABI_CHECK(0x553790u, 0x553b7cu); RETCHK(0x553b81u, 0x553b7cu); LOADALL;
  /* 00553b81 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553b84 push 0x655c70 */ { u32 v_ = 0x655c70u; esp -= 4; M32(esp) = v_; }
  /* 00553b89 call dword ptr [0x62e17c] */ { const u32 m_ = (u32)(0x62e17cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553b8fu; SAVEALL; call_ind(c, t_); RETCHK(0x553b8fu, 0x553b89u); LOADALL; }
  /* 00553b8f call 0x5599a0 */ esp -= 4; M32(esp) = 0x553b94u; SAVEALL; F_005599a0(c); ABI_CHECK(0x5599a0u, 0x553b8fu); RETCHK(0x553b94u, 0x553b8fu); LOADALL;
  /* 00553b94 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553b96 jne 0x553bb1 */ if (!ZF_) goto L_00553bb1;
  /* 00553b98 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553b9c jb 0x553baa */ if (CF_) goto L_00553baa;
  /* 00553b9e mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 00553ba1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553ba2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x553ba7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553ba2u); RETCHK(0x553ba7u, 0x553ba2u); LOADALL;
  /* 00553ba7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553baa:;
  /* 00553baa xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553bac jmp 0x553f3c */ goto L_00553f3c;
L_00553bb1:;
  /* 00553bb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553bb2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00553bb3 push 0x2458 */ { u32 v_ = 0x2458u; esp -= 4; M32(esp) = v_; }
  /* 00553bb8 call 0x5fe934 */ esp -= 4; M32(esp) = 0x553bbdu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x553bb8u); RETCHK(0x553bbdu, 0x553bb8u); LOADALL;
  /* 00553bbd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553bc0 mov dword ptr [ebp - 0x2b8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffd48u); M32(m_) = (u32)(eax); }
  /* 00553bc6 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553bc8 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00553bcc je 0x553bd9 */ if (ZF_) goto L_00553bd9;
  /* 00553bce mov esi, eax */ { esi = (u32)(eax); }
  /* 00553bd0 call 0x54d490 */ esp -= 4; M32(esp) = 0x553bd5u; SAVEALL; F_0054d490(c); ABI_CHECK(0x54d490u, 0x553bd0u); RETCHK(0x553bd5u, 0x553bd0u); LOADALL;
  /* 00553bd5 mov esi, eax */ { esi = (u32)(eax); }
  /* 00553bd7 jmp 0x553bdb */ goto L_00553bdb;
L_00553bd9:;
  /* 00553bd9 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
L_00553bdb:;
  /* 00553bdb mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00553bdf mov eax, esi */ { eax = (u32)(esi); }
  /* 00553be1 mov dword ptr [0x7a6e2c], esi */ { const u32 m_ = (u32)(0x7a6e2cu); M32(m_) = (u32)(esi); }
  /* 00553be7 call 0x553670 */ esp -= 4; M32(esp) = 0x553becu; SAVEALL; F_00553670(c); ABI_CHECK(0x553670u, 0x553be7u); RETCHK(0x553becu, 0x553be7u); LOADALL;
  /* 00553bec add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00553bef mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00553bf1 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00553bf4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00553bf7 mov dword ptr [ebp - 0x2cc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffd34u); M32(m_) = (u32)(edx); }
  /* 00553bfd mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00553c00 mov dword ptr [ebp - 0x2c4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffd3cu); M32(m_) = (u32)(edx); }
  /* 00553c06 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00553c09 mov dword ptr [0x688fac], eax */ { const u32 m_ = (u32)(0x688facu); M32(m_) = (u32)(eax); }
  /* 00553c0e mov dword ptr [esi], 1 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x1u); }
  /* 00553c14 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553c16 mov dword ptr [ebp - 0x2c0], edx */ { const u32 m_ = (u32)(ebp + 0xfffffd40u); M32(m_) = (u32)(edx); }
  /* 00553c1c mov edx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00553c1f mov dword ptr [0x9c0268], ecx */ { const u32 m_ = (u32)(0x9c0268u); M32(m_) = (u32)(ecx); }
  /* 00553c25 mov byte ptr [ebp - 0x2ac], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffd54u); M8(m_) = (u8)(0x0u); }
  /* 00553c2c mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 00553c31 lea edi, [ebp - 0x2ab] */ edi = (u32)((u32)(ebp + 0xfffffd55u));
  /* 00553c37 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00553c39 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00553c3b stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00553c3c mov byte ptr [ebp - 0x1ac], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffe54u); M8(m_) = (u8)(0x0u); }
  /* 00553c43 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553c45 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 00553c4a lea edi, [ebp - 0x1ab] */ edi = (u32)((u32)(ebp + 0xfffffe55u));
  /* 00553c50 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00553c52 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00553c54 mov dword ptr [ebp - 0x2bc], edx */ { const u32 m_ = (u32)(ebp + 0xfffffd44u); M32(m_) = (u32)(edx); }
  /* 00553c5a stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00553c5b mov dword ptr [ebp - 0x2b8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffd48u); M32(m_) = (u32)(ebx); }
  /* 00553c61 call dword ptr [0x62e128] */ { const u32 m_ = (u32)(0x62e128u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553c67u; SAVEALL; call_ind(c, t_); RETCHK(0x553c67u, 0x553c61u); LOADALL; }
  /* 00553c67 lea ecx, [ebp - 0x2b8] */ ecx = (u32)((u32)(ebp + 0xfffffd48u));
  /* 00553c6d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553c6e call 0x55aff0 */ esp -= 4; M32(esp) = 0x553c73u; SAVEALL; F_0055aff0(c); ABI_CHECK(0x55aff0u, 0x553c6eu); RETCHK(0x553c73u, 0x553c6eu); LOADALL;
  /* 00553c73 push 0x10c */ { u32 v_ = 0x10cu; esp -= 4; M32(esp) = v_; }
  /* 00553c78 mov dword ptr [ebp - 0x2b4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffd4cu); M32(m_) = (u32)(eax); }
  /* 00553c7e mov byte ptr [ebp - 0x2ad], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffd53u); M8(m_) = (u8)(0x0u); }
  /* 00553c85 call 0x5fe934 */ esp -= 4; M32(esp) = 0x553c8au; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x553c85u); RETCHK(0x553c8au, 0x553c85u); LOADALL;
  /* 00553c8a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553c8d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553c8f je 0x553c98 */ if (ZF_) goto L_00553c98;
  /* 00553c91 call 0x54e900 */ esp -= 4; M32(esp) = 0x553c96u; SAVEALL; F_0054e900(c); ABI_CHECK(0x54e900u, 0x553c91u); RETCHK(0x553c96u, 0x553c91u); LOADALL;
  /* 00553c96 jmp 0x553c9a */ goto L_00553c9a;
L_00553c98:;
  /* 00553c98 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00553c9a:;
  /* 00553c9a mov esi, eax */ { esi = (u32)(eax); }
  /* 00553c9c mov dword ptr [0x7a6e34], eax */ { const u32 m_ = (u32)(0x7a6e34u); M32(m_) = (u32)(eax); }
  /* 00553ca1 call 0x54fcc0 */ esp -= 4; M32(esp) = 0x553ca6u; SAVEALL; F_0054fcc0(c); ABI_CHECK(0x54fcc0u, 0x553ca1u); RETCHK(0x553ca6u, 0x553ca1u); LOADALL;
  /* 00553ca6 mov edx, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); edx = (u32)(M32(m_)); }
  /* 00553cac mov al, byte ptr [edx + 0xe5] */ { const u32 m_ = (u32)(edx + 0xe5u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00553cb2 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553cb4 je 0x553cc2 */ if (ZF_) goto L_00553cc2;
  /* 00553cb6 mov byte ptr [ebp - 0x2ad], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffd53u); M8(m_) = (u8)(0x1u); }
  /* 00553cbd jmp 0x553e16 */ goto L_00553e16;
L_00553cc2:;
  /* 00553cc2 mov eax, dword ptr [ebp - 0x2b8] */ { const u32 m_ = (u32)(ebp + 0xfffffd48u); eax = (u32)(M32(m_)); }
  /* 00553cc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553cca jle 0x553e16 */ if ((ZF_|LT_)) goto L_00553e16;
L_00553cd0:;
  /* 00553cd0 mov eax, dword ptr [ebp - 0x2b4] */ { const u32 m_ = (u32)(ebp + 0xfffffd4cu); eax = (u32)(M32(m_)); }
  /* 00553cd6 mov eax, dword ptr [eax + ebx*4] */ { const u32 m_ = (u32)(eax + ebx * 4u); eax = (u32)(M32(m_)); }
  /* 00553cd9 mov edi, 0x655ac4 */ { edi = (u32)(0x655ac4u); }
  /* 00553cde mov esi, eax */ { esi = (u32)(eax); }
  /* 00553ce0 mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 00553ce5 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00553ce7 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553ce9 je 0x553de0 */ if (ZF_) goto L_00553de0;
  /* 00553cef mov edi, 0x655ac0 */ { edi = (u32)(0x655ac0u); }
  /* 00553cf4 mov esi, eax */ { esi = (u32)(eax); }
  /* 00553cf6 mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 00553cfb xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00553cfd repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553cff je 0x553de0 */ if (ZF_) goto L_00553de0;
  /* 00553d05 mov edi, 0x655ab4 */ { edi = (u32)(0x655ab4u); }
  /* 00553d0a mov esi, eax */ { esi = (u32)(eax); }
  /* 00553d0c mov ecx, 0xa */ { ecx = (u32)(0xau); }
  /* 00553d11 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00553d13 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553d15 je 0x553dba */ if (ZF_) goto L_00553dba;
  /* 00553d1b mov edi, 0x655ab0 */ { edi = (u32)(0x655ab0u); }
  /* 00553d20 mov esi, eax */ { esi = (u32)(eax); }
  /* 00553d22 mov ecx, 3 */ { ecx = (u32)(0x3u); }
  /* 00553d27 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00553d29 repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553d2b je 0x553dba */ if (ZF_) goto L_00553dba;
  /* 00553d31 mov edi, 0x655c68 */ { edi = (u32)(0x655c68u); }
  /* 00553d36 mov esi, eax */ { esi = (u32)(eax); }
  /* 00553d38 mov ecx, 5 */ { ecx = (u32)(0x5u); }
  /* 00553d3d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00553d3f repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553d41 jne 0x553d9f */ if (!ZF_) goto L_00553d9f;
  /* 00553d43 mov eax, dword ptr [ebp - 0x2b4] */ { const u32 m_ = (u32)(ebp + 0xfffffd4cu); eax = (u32)(M32(m_)); }
  /* 00553d49 mov ecx, dword ptr [eax + ebx*4 + 4] */ { const u32 m_ = (u32)(eax + ebx * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00553d4d inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00553d4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553d4f lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00553d52 call 0x403060 */ esp -= 4; M32(esp) = 0x553d57u; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x553d52u); RETCHK(0x553d57u, 0x553d52u); LOADALL;
  /* 00553d57 mov esi, 0x648674 */ { esi = (u32)(0x648674u); }
  /* 00553d5c lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00553d5f mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00553d63 call 0x405bd0 */ esp -= 4; M32(esp) = 0x553d68u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x553d63u); RETCHK(0x553d68u, 0x553d63u); LOADALL;
  /* 00553d68 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553d6a je 0x553d73 */ if (ZF_) goto L_00553d73;
  /* 00553d6c mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00553d71 jmp 0x553d86 */ goto L_00553d86;
L_00553d73:;
  /* 00553d73 mov esi, 0x6427e0 */ { esi = (u32)(0x6427e0u); }
  /* 00553d78 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00553d7b call 0x405bd0 */ esp -= 4; M32(esp) = 0x553d80u; SAVEALL; F_00405bd0(c); ABI_CHECK(0x405bd0u, 0x553d7bu); RETCHK(0x553d80u, 0x553d7bu); LOADALL;
  /* 00553d80 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553d82 je 0x553d91 */ if (ZF_) goto L_00553d91;
  /* 00553d84 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00553d86:;
  /* 00553d86 nop */ ;
  /* 00553d87 nop */ ;
  /* 00553d88 nop */ ;
  /* 00553d89 nop */ ;
  /* 00553d8a nop */ ;
  /* 00553d8b nop */ ;
  /* 00553d8c mov dword ptr [0x9c0268], eax */ { const u32 m_ = (u32)(0x9c0268u); M32(m_) = (u32)(eax); }
L_00553d91:;
  /* 00553d91 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00553d94 mov byte ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x0u); }
  /* 00553d98 call 0x43ee60 */ esp -= 4; M32(esp) = 0x553d9du; SAVEALL; F_0043ee60(c); ABI_CHECK(0x43ee60u, 0x553d98u); RETCHK(0x553d9du, 0x553d98u); LOADALL;
  /* 00553d9d jmp 0x553e07 */ goto L_00553e07;
L_00553d9f:;
  /* 00553d9f mov edi, 0x655a9c */ { edi = (u32)(0x655a9cu); }
  /* 00553da4 mov esi, eax */ { esi = (u32)(eax); }
  /* 00553da6 mov ecx, 6 */ { ecx = (u32)(0x6u); }
  /* 00553dab xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00553dad repe cmpsb byte ptr [esi], byte ptr es:[edi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { u32 a_ = M8(esi), b_ = M8(edi); esi += st_; edi += st_; SETFC(OP_SUB, a_, b_, (a_ - b_) & 0xffu, 1); ecx--; if (!ZF_) break; } }
  /* 00553daf jne 0x553e07 */ if (!ZF_) goto L_00553e07;
  /* 00553db1 mov byte ptr [ebp - 0x2ad], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffd53u); M8(m_) = (u8)(0x1u); }
  /* 00553db8 jmp 0x553e07 */ goto L_00553e07;
L_00553dba:;
  /* 00553dba mov eax, dword ptr [ebp - 0x2b4] */ { const u32 m_ = (u32)(ebp + 0xfffffd4cu); eax = (u32)(M32(m_)); }
  /* 00553dc0 mov ecx, dword ptr [eax + ebx*4 + 4] */ { const u32 m_ = (u32)(eax + ebx * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00553dc4 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00553dc5 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00553dca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553dcb lea edx, [ebp - 0x1ac] */ edx = (u32)((u32)(ebp + 0xfffffe54u));
  /* 00553dd1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553dd2 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x553dd7u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x553dd2u); RETCHK(0x553dd7u, 0x553dd2u); LOADALL;
  /* 00553dd7 mov byte ptr [ebp - 0xad], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff53u); M8(m_) = (u8)(0x0u); }
  /* 00553dde jmp 0x553e04 */ goto L_00553e04;
L_00553de0:;
  /* 00553de0 mov eax, dword ptr [ebp - 0x2b4] */ { const u32 m_ = (u32)(ebp + 0xfffffd4cu); eax = (u32)(M32(m_)); }
  /* 00553de6 mov ecx, dword ptr [eax + ebx*4 + 4] */ { const u32 m_ = (u32)(eax + ebx * 4u + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00553dea inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00553deb push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00553df0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553df1 lea edx, [ebp - 0x2ac] */ edx = (u32)((u32)(ebp + 0xfffffd54u));
  /* 00553df7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553df8 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x553dfdu; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x553df8u); RETCHK(0x553dfdu, 0x553df8u); LOADALL;
  /* 00553dfd mov byte ptr [ebp - 0x1ad], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffe53u); M8(m_) = (u8)(0x0u); }
L_00553e04:;
  /* 00553e04 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553e07:;
  /* 00553e07 mov eax, dword ptr [ebp - 0x2b8] */ { const u32 m_ = (u32)(ebp + 0xfffffd48u); eax = (u32)(M32(m_)); }
  /* 00553e0d inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00553e0e cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553e10 jl 0x553cd0 */ if (LT_) goto L_00553cd0;
L_00553e16:;
  /* 00553e16 mov eax, dword ptr [ebp - 0x2d0] */ { const u32 m_ = (u32)(ebp + 0xfffffd30u); eax = (u32)(M32(m_)); }
  /* 00553e1c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553e1e nop */ ;
  /* 00553e1f nop */ ;
  /* 00553e20 mov eax, dword ptr [ebp - 0x2c4] */ { const u32 m_ = (u32)(ebp + 0xfffffd3cu); eax = (u32)(M32(m_)); }
  /* 00553e26 mov ecx, dword ptr [eax*8 + 0x640c10] */ { const u32 m_ = (u32)(eax * 8u + 0x640c10u); ecx = (u32)(M32(m_)); }
  /* 00553e2d mov edx, dword ptr [eax*8 + 0x640c14] */ { const u32 m_ = (u32)(eax * 8u + 0x640c14u); edx = (u32)(M32(m_)); }
  /* 00553e34 mov eax, dword ptr [ebp - 0x2c0] */ { const u32 m_ = (u32)(ebp + 0xfffffd40u); eax = (u32)(M32(m_)); }
  /* 00553e3a mov dword ptr [0x7a595c], ecx */ { const u32 m_ = (u32)(0x7a595cu); M32(m_) = (u32)(ecx); }
  /* 00553e40 mov ecx, dword ptr [eax*4 + 0x640c50] */ { const u32 m_ = (u32)(eax * 4u + 0x640c50u); ecx = (u32)(M32(m_)); }
  /* 00553e47 mov dword ptr [0x7a5960], edx */ { const u32 m_ = (u32)(0x7a5960u); M32(m_) = (u32)(edx); }
  /* 00553e4d mov dword ptr [0x7a5964], ecx */ { const u32 m_ = (u32)(0x7a5964u); M32(m_) = (u32)(ecx); }
  /* 00553e53 mov al, byte ptr [ebp - 0x2ac] */ { const u32 m_ = (u32)(ebp + 0xfffffd54u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00553e59 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553e5b je 0x553e71 */ if (ZF_) goto L_00553e71;
  /* 00553e5d mov al, byte ptr [ebp - 0x1ac] */ { const u32 m_ = (u32)(ebp + 0xfffffe54u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00553e63 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553e65 je 0x553e71 */ if (ZF_) goto L_00553e71;
  /* 00553e67 mov al, byte ptr [ebp - 0x2ad] */ { const u32 m_ = (u32)(ebp + 0xfffffd53u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00553e6d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553e6f jmp 0x553eba */ goto L_00553eba;
L_00553e71:;
  /* 00553e71 push 0x10030 */ { u32 v_ = 0x10030u; esp -= 4; M32(esp) = v_; }
  /* 00553e76 push 0x68a6e0 */ { u32 v_ = 0x68a6e0u; esp -= 4; M32(esp) = v_; }
  /* 00553e7b push 0x553e90 */ { u32 v_ = 0x553e90u; esp -= 4; M32(esp) = v_; }
  /* 00553e80 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553e82 call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553e88u; SAVEALL; call_ind(c, t_); RETCHK(0x553e88u, 0x553e82u); LOADALL; }
  /* 00553e88 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553e8a call dword ptr [0x62e144] */ { const u32 m_ = (u32)(0x62e144u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553e90u; SAVEALL; call_ind(c, t_); RETCHK(0x553e90u, 0x553e8au); LOADALL; }
L_00553eba:;
  /* 00553eba mov eax, dword ptr [0x9c0264] */ { const u32 m_ = (u32)(0x9c0264u); eax = (u32)(M32(m_)); }
  /* 00553ebf push 0x64 */ { u32 v_ = 0x64u; esp -= 4; M32(esp) = v_; }
  /* 00553ec1 lea edx, [ebp - 0xac] */ edx = (u32)((u32)(ebp + 0xffffff54u));
  /* 00553ec7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553ec8 push 0x6b */ { u32 v_ = 0x6bu; esp -= 4; M32(esp) = v_; }
  /* 00553eca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553ecb call dword ptr [0x62e4d4] */ { const u32 m_ = (u32)(0x62e4d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553ed1u; SAVEALL; call_ind(c, t_); RETCHK(0x553ed1u, 0x553ecbu); LOADALL; }
  /* 00553ed1 lea eax, [ebp - 0xac] */ eax = (u32)((u32)(ebp + 0xffffff54u));
  /* 00553ed7 mov edx, eax */ { edx = (u32)(eax); }
  /* 00553ed9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00553ee0:;
  /* 00553ee0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00553ee2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00553ee3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553ee5 jne 0x553ee0 */ if (!ZF_) goto L_00553ee0;
  /* 00553ee7 mov edi, 0x68a6e0 */ { edi = (u32)(0x68a6e0u); }
  /* 00553eec xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553eee dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00553eef nop */ ;
L_00553ef0:;
  /* 00553ef0 mov cl, byte ptr [edi + 1] */ { const u32 m_ = (u32)(edi + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00553ef3 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00553ef4 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00553ef6 jne 0x553ef0 */ if (!ZF_) goto L_00553ef0;
  /* 00553ef8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00553efa shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00553efd mov esi, edx */ { esi = (u32)(edx); }
  /* 00553eff rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00553f01 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00553f03 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00553f06 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00553f08 mov ecx, dword ptr [ebp - 0x2b4] */ { const u32 m_ = (u32)(ebp + 0xfffffd4cu); ecx = (u32)(M32(m_)); }
  /* 00553f0e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553f0f mov dword ptr [0x7a5958], 0x68a6e0 */ { const u32 m_ = (u32)(0x7a5958u); M32(m_) = (u32)(0x68a6e0u); }
  /* 00553f19 call 0x5fe99e */ esp -= 4; M32(esp) = 0x553f1eu; SAVEALL; F_005fe99e(c); ABI_CHECK(0x5fe99eu, 0x553f19u); RETCHK(0x553f1eu, 0x553f19u); LOADALL;
  /* 00553f1e mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00553f21 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553f24 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553f27 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00553f28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00553f29 jb 0x553f37 */ if (CF_) goto L_00553f37;
  /* 00553f2b mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00553f2e push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553f2f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x553f34u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x553f2fu); RETCHK(0x553f34u, 0x553f2fu); LOADALL;
  /* 00553f34 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553f37:;
  /* 00553f37 mov eax, 1 */ { eax = (u32)(0x1u); }
L_00553f3c:;
  /* 00553f3c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00553f3f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00553f46 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00553f49 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00553f4a call 0x61af31 */ esp -= 4; M32(esp) = 0x553f4fu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x553f4au); RETCHK(0x553f4fu, 0x553f4au); LOADALL;
  /* 00553f4f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00553f51 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553f52 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00553f60(CPU *c) {
  NATIVE_HOOK(0x553f60u) REGS; LOADALL;
L_00553f60:;
  /* 00553f60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00553f61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00553f63 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553f66 mov eax, dword ptr [0x7a596c] */ { const u32 m_ = (u32)(0x7a596cu); eax = (u32)(M32(m_)); }
  /* 00553f6b mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00553f6d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00553f6e push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 00553f70 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553f71 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553f77u; SAVEALL; call_ind(c, t_); RETCHK(0x553f77u, 0x553f71u); LOADALL; }
  /* 00553f77 mov edx, dword ptr [0x7a596c] */ { const u32 m_ = (u32)(0x7a596cu); edx = (u32)(M32(m_)); }
  /* 00553f7d mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00553f7f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553f80 call dword ptr [0x62e53c] */ { const u32 m_ = (u32)(0x62e53cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553f86u; SAVEALL; call_ind(c, t_); RETCHK(0x553f86u, 0x553f80u); LOADALL; }
  /* 00553f86 call 0x559740 */ esp -= 4; M32(esp) = 0x553f8bu; SAVEALL; F_00559740(c); ABI_CHECK(0x559740u, 0x553f86u); RETCHK(0x553f8bu, 0x553f86u); LOADALL;
  /* 00553f8b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00553f8d jne 0x553fc3 */ if (!ZF_) goto L_00553fc3;
  /* 00553f8f push 0x655c40 */ { u32 v_ = 0x655c40u; esp -= 4; M32(esp) = v_; }
  /* 00553f94 mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 00553f99 call 0x541010 */ esp -= 4; M32(esp) = 0x553f9eu; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x553f99u); RETCHK(0x553f9eu, 0x553f99u); LOADALL;
  /* 00553f9e mov ecx, dword ptr [0x7a596c] */ { const u32 m_ = (u32)(0x7a596cu); ecx = (u32)(M32(m_)); }
  /* 00553fa4 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00553fa6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00553fa9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00553fab push 0x655c2c */ { u32 v_ = 0x655c2cu; esp -= 4; M32(esp) = v_; }
  /* 00553fb0 push 0x655c0c */ { u32 v_ = 0x655c0cu; esp -= 4; M32(esp) = v_; }
  /* 00553fb5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553fb6 call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x553fbcu; SAVEALL; call_ind(c, t_); RETCHK(0x553fbcu, 0x553fb6u); LOADALL; }
  /* 00553fbc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00553fbe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00553fbf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00553fc1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00553fc2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00553fc3:;
  /* 00553fc3 mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 00553fc8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00553fc9 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00553fcb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00553fcd je 0x553fdb */ if (ZF_) goto L_00553fdb;
  /* 00553fcf mov eax, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00553fd2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00553fd3 call 0x5b25f0 */ esp -= 4; M32(esp) = 0x553fd8u; SAVEALL; F_005b25f0(c); ABI_CHECK(0x5b25f0u, 0x553fd3u); RETCHK(0x553fd8u, 0x553fd3u); LOADALL;
  /* 00553fd8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00553fdb:;
  /* 00553fdb lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00553fde mov al, 0xff */ { eax = (eax & 0xffffff00u) | ((u32)(0xffu) & 0xffu); }
  /* 00553fe0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00553fe1 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00553fe4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00553fe5 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553fe8 mov byte ptr [ebp - 3], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffdu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553feb mov byte ptr [ebp - 2], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffeu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553fee mov byte ptr [ebp - 1], bl */ { const u32 m_ = (u32)(ebp + 0xffffffffu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553ff1 mov byte ptr [ebp - 8], bl */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553ff4 mov byte ptr [ebp - 7], al */ { const u32 m_ = (u32)(ebp + 0xfffffff9u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00553ff7 mov byte ptr [ebp - 6], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffau); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00553ffa mov byte ptr [ebp - 5], al */ { const u32 m_ = (u32)(ebp + 0xfffffffbu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00553ffd call 0x575440 */ esp -= 4; M32(esp) = 0x554002u; SAVEALL; F_00575440(c); ABI_CHECK(0x575440u, 0x553ffdu); RETCHK(0x554002u, 0x553ffdu); LOADALL;
  /* 00554002 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554005 mov dword ptr [0x7a5540], eax */ { const u32 m_ = (u32)(0x7a5540u); M32(m_) = (u32)(eax); }
  /* 0055400a call 0x550820 */ esp -= 4; M32(esp) = 0x55400fu; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x55400au); RETCHK(0x55400fu, 0x55400au); LOADALL;
  /* 0055400f mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00554011 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00554013 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x554016u; SAVEALL; call_ind(c, t_); RETCHK(0x554016u, 0x554013u); LOADALL; }
  /* 00554016 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554018 jne 0x554068 */ if (!ZF_) goto L_00554068;
  /* 0055401a push 0x655bc8 */ { u32 v_ = 0x655bc8u; esp -= 4; M32(esp) = v_; }
  /* 0055401f mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 00554024 call 0x541010 */ esp -= 4; M32(esp) = 0x554029u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x554024u); RETCHK(0x554029u, 0x554024u); LOADALL;
  /* 00554029 mov eax, dword ptr [0x7a596c] */ { const u32 m_ = (u32)(0x7a596cu); eax = (u32)(M32(m_)); }
  /* 0055402e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00554030 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554033 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554034 push 0x655bc0 */ { u32 v_ = 0x655bc0u; esp -= 4; M32(esp) = v_; }
  /* 00554039 push 0x655ba8 */ { u32 v_ = 0x655ba8u; esp -= 4; M32(esp) = v_; }
  /* 0055403e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055403f call dword ptr [0x62e4ec] */ { const u32 m_ = (u32)(0x62e4ecu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x554045u; SAVEALL; call_ind(c, t_); RETCHK(0x554045u, 0x55403fu); LOADALL; }
  /* 00554045 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00554047 push 0x7a5538 */ { u32 v_ = 0x7a5538u; esp -= 4; M32(esp) = v_; }
  /* 0055404c call dword ptr [0x62e1b4] */ { const u32 m_ = (u32)(0x62e1b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x554052u; SAVEALL; call_ind(c, t_); RETCHK(0x554052u, 0x55404cu); LOADALL; }
  /* 00554052 mov eax, dword ptr [0x7a5534] */ { const u32 m_ = (u32)(0x7a5534u); eax = (u32)(M32(m_)); }
L_00554057:;
  /* 00554057 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554059 je 0x554057 */ if (ZF_) goto L_00554057;
  /* 0055405b call 0x554090 */ esp -= 4; M32(esp) = 0x554060u; SAVEALL; F_00554090(c); ABI_CHECK(0x554090u, 0x55405bu); RETCHK(0x554060u, 0x55405bu); LOADALL;
  /* 00554060 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554061 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00554063 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554064 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554066 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554067 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554068:;
  /* 00554068 rdtsc */ { u64 t_ = rt_rdtsc(); eax = (u32)t_; edx = (u32)(t_ >> 32); }
  /* 0055406a mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0055406d mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00554070 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554071 call 0x5e7150 */ esp -= 4; M32(esp) = 0x554076u; SAVEALL; F_005e7150(c); ABI_CHECK(0x5e7150u, 0x554071u); RETCHK(0x554076u, 0x554071u); LOADALL;
  /* 00554076 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554079 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055407a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0055407f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554080 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554082 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554083 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554090(CPU *c) {
  NATIVE_HOOK(0x554090u) REGS; LOADALL;
L_00554090:;
  /* 00554090 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554091 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554093 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00554095 push 0x6268b0 */ { u32 v_ = 0x6268b0u; esp -= 4; M32(esp) = v_; }
  /* 0055409a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005540a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005540a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005540a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005540a9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005540aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005540ab push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005540ac xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005540ae mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 005540b1 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005540b2 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005540b5 call 0x4019a0 */ esp -= 4; M32(esp) = 0x5540bau; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5540b5u); RETCHK(0x5540bau, 0x5540b5u); LOADALL;
  /* 005540ba mov esi, eax */ { esi = (u32)(eax); }
  /* 005540bc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005540bf mov edi, esi */ { edi = (u32)(esi); }
  /* 005540c1 call 0x401dc0 */ esp -= 4; M32(esp) = 0x5540c6u; SAVEALL; F_00401dc0(c); ABI_CHECK(0x401dc0u, 0x5540c1u); RETCHK(0x5540c6u, 0x5540c1u); LOADALL;
  /* 005540c6 call 0x401e10 */ esp -= 4; M32(esp) = 0x5540cbu; SAVEALL; F_00401e10(c); ABI_CHECK(0x401e10u, 0x5540c6u); RETCHK(0x5540cbu, 0x5540c6u); LOADALL;
  /* 005540cb mov eax, dword ptr [0x7a596c] */ { const u32 m_ = (u32)(0x7a596cu); eax = (u32)(M32(m_)); }
  /* 005540d0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 005540d2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005540d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005540d4 call dword ptr [0x62e514] */ { const u32 m_ = (u32)(0x62e514u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5540dau; SAVEALL; call_ind(c, t_); RETCHK(0x5540dau, 0x5540d4u); LOADALL; }
  /* 005540da call 0x550820 */ esp -= 4; M32(esp) = 0x5540dfu; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x5540dau); RETCHK(0x5540dfu, 0x5540dau); LOADALL;
  /* 005540df mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 005540e1 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005540e3 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x5540e6u; SAVEALL; call_ind(c, t_); RETCHK(0x5540e6u, 0x5540e3u); LOADALL; }
  /* 005540e6 mov eax, dword ptr [0x7a5540] */ { const u32 m_ = (u32)(0x7a5540u); eax = (u32)(M32(m_)); }
  /* 005540eb cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005540ed je 0x5540fe */ if (ZF_) goto L_005540fe;
  /* 005540ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005540f0 call 0x5753f0 */ esp -= 4; M32(esp) = 0x5540f5u; SAVEALL; F_005753f0(c); ABI_CHECK(0x5753f0u, 0x5540f0u); RETCHK(0x5540f5u, 0x5540f0u); LOADALL;
  /* 005540f5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005540f8 mov dword ptr [0x7a5540], ebx */ { const u32 m_ = (u32)(0x7a5540u); M32(m_) = (u32)(ebx); }
L_005540fe:;
  /* 005540fe call 0x559710 */ esp -= 4; M32(esp) = 0x554103u; SAVEALL; F_00559710(c); ABI_CHECK(0x559710u, 0x5540feu); RETCHK(0x554103u, 0x5540feu); LOADALL;
  /* 00554103 mov eax, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); eax = (u32)(M32(m_)); }
  /* 00554108 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055410a je 0x554122 */ if (ZF_) goto L_00554122;
  /* 0055410c mov esi, eax */ { esi = (u32)(eax); }
  /* 0055410e call 0x54e9a0 */ esp -= 4; M32(esp) = 0x554113u; SAVEALL; F_0054e9a0(c); ABI_CHECK(0x54e9a0u, 0x55410eu); RETCHK(0x554113u, 0x55410eu); LOADALL;
  /* 00554113 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554114 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554119u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x554114u); RETCHK(0x554119u, 0x554114u); LOADALL;
  /* 00554119 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055411c mov dword ptr [0x7a6e34], ebx */ { const u32 m_ = (u32)(0x7a6e34u); M32(m_) = (u32)(ebx); }
L_00554122:;
  /* 00554122 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00554125 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554126 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554127 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055412e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055412f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554131 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554132 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554122(CPU *c) {
  NATIVE_HOOK(0x554122u) REGS; LOADALL;
L_00554122:;
  /* 00554122 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00554125 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554126 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554127 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055412e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055412f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554131 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554132 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554133(CPU *c) {
  NATIVE_HOOK(0x554133u) REGS; LOADALL;
L_00554133:;
  /* 00554133 mov eax, 0x554122 */ { eax = (u32)(0x554122u); }
  /* 00554138 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554140(CPU *c) {
  NATIVE_HOOK(0x554140u) REGS; LOADALL;
L_00554140:;
  /* 00554140 mov eax, dword ptr [0x7a6e30] */ { const u32 m_ = (u32)(0x7a6e30u); eax = (u32)(M32(m_)); }
  /* 00554145 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554147 je 0x55415a */ if (ZF_) goto L_0055415a;
  /* 00554149 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055414a call dword ptr [0x62e584] */ { const u32 m_ = (u32)(0x62e584u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x554150u; SAVEALL; call_ind(c, t_); RETCHK(0x554150u, 0x55414au); LOADALL; }
  /* 00554150 mov dword ptr [0x7a6e30], 0 */ { const u32 m_ = (u32)(0x7a6e30u); M32(m_) = (u32)(0x0u); }
L_0055415a:;
  /* 0055415a mov eax, dword ptr [0x7a6e2c] */ { const u32 m_ = (u32)(0x7a6e2cu); eax = (u32)(M32(m_)); }
  /* 0055415f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554161 je 0x554176 */ if (ZF_) goto L_00554176;
  /* 00554163 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554164 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554169u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x554164u); RETCHK(0x554169u, 0x554164u); LOADALL;
  /* 00554169 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055416c mov dword ptr [0x7a6e2c], 0 */ { const u32 m_ = (u32)(0x7a6e2cu); M32(m_) = (u32)(0x0u); }
L_00554176:;
  /* 00554176 jmp 0x559990 */ SAVEALL; F_00559990(c); return;
}

void F_00554180(CPU *c) {
  NATIVE_HOOK(0x554180u) REGS; LOADALL;
L_00554180:;
  /* 00554180 call 0x57ef10 */ esp -= 4; M32(esp) = 0x554185u; SAVEALL; F_0057ef10(c); ABI_CHECK(0x57ef10u, 0x554180u); RETCHK(0x554185u, 0x554180u); LOADALL;
  /* 00554185 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554187 jne 0x55418c */ if (!ZF_) goto L_0055418c;
L_00554189:;
  /* 00554189 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055418b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055418c:;
  /* 0055418c call 0x5ee3b0 */ esp -= 4; M32(esp) = 0x554191u; SAVEALL; F_005ee3b0(c); ABI_CHECK(0x5ee3b0u, 0x55418cu); RETCHK(0x554191u, 0x55418cu); LOADALL;
  /* 00554191 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554193 je 0x554189 */ if (ZF_) goto L_00554189;
  /* 00554195 call 0x5e9c10 */ esp -= 4; M32(esp) = 0x55419au; SAVEALL; F_005e9c10(c); ABI_CHECK(0x5e9c10u, 0x554195u); RETCHK(0x55419au, 0x554195u); LOADALL;
  /* 0055419a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055419c je 0x554189 */ if (ZF_) goto L_00554189;
  /* 0055419e call 0x5e8a20 */ esp -= 4; M32(esp) = 0x5541a3u; SAVEALL; F_005e8a20(c); ABI_CHECK(0x5e8a20u, 0x55419eu); RETCHK(0x5541a3u, 0x55419eu); LOADALL;
  /* 005541a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541a5 je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541a7 call 0x5e7f90 */ esp -= 4; M32(esp) = 0x5541acu; SAVEALL; F_005e7f90(c); ABI_CHECK(0x5e7f90u, 0x5541a7u); RETCHK(0x5541acu, 0x5541a7u); LOADALL;
  /* 005541ac test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541ae je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541b0 call 0x5e73e0 */ esp -= 4; M32(esp) = 0x5541b5u; SAVEALL; F_005e73e0(c); ABI_CHECK(0x5e73e0u, 0x5541b0u); RETCHK(0x5541b5u, 0x5541b0u); LOADALL;
  /* 005541b5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541b7 je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541b9 call 0x5e7280 */ esp -= 4; M32(esp) = 0x5541beu; SAVEALL; F_005e7280(c); ABI_CHECK(0x5e7280u, 0x5541b9u); RETCHK(0x5541beu, 0x5541b9u); LOADALL;
  /* 005541be test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541c0 je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541c2 call 0x5e6b70 */ esp -= 4; M32(esp) = 0x5541c7u; SAVEALL; F_005e6b70(c); ABI_CHECK(0x5e6b70u, 0x5541c2u); RETCHK(0x5541c7u, 0x5541c2u); LOADALL;
  /* 005541c7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541c9 je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541cb call 0x5e0a30 */ esp -= 4; M32(esp) = 0x5541d0u; SAVEALL; F_005e0a30(c); ABI_CHECK(0x5e0a30u, 0x5541cbu); RETCHK(0x5541d0u, 0x5541cbu); LOADALL;
  /* 005541d0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541d2 je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541d4 call 0x5dfe60 */ esp -= 4; M32(esp) = 0x5541d9u; SAVEALL; F_005dfe60(c); ABI_CHECK(0x5dfe60u, 0x5541d4u); RETCHK(0x5541d9u, 0x5541d4u); LOADALL;
  /* 005541d9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541db je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541dd call 0x5d8af0 */ esp -= 4; M32(esp) = 0x5541e2u; SAVEALL; F_005d8af0(c); ABI_CHECK(0x5d8af0u, 0x5541ddu); RETCHK(0x5541e2u, 0x5541ddu); LOADALL;
  /* 005541e2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541e4 je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541e6 call 0x5d3670 */ esp -= 4; M32(esp) = 0x5541ebu; SAVEALL; F_005d3670(c); ABI_CHECK(0x5d3670u, 0x5541e6u); RETCHK(0x5541ebu, 0x5541e6u); LOADALL;
  /* 005541eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005541ed je 0x554189 */ if (ZF_) goto L_00554189;
  /* 005541ef call 0x5cf7d0 */ esp -= 4; M32(esp) = 0x5541f4u; SAVEALL; F_005cf7d0(c); ABI_CHECK(0x5cf7d0u, 0x5541efu); RETCHK(0x5541f4u, 0x5541efu); LOADALL;
  /* 005541f4 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005541f6 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005541f8 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005541fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554200(CPU *c) {
  NATIVE_HOOK(0x554200u) REGS; LOADALL;
L_00554200:;
  /* 00554200 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554201 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554203 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554204 mov eax, dword ptr [0x68a6d8] */ { const u32 m_ = (u32)(0x68a6d8u); eax = (u32)(M32(m_)); }
  /* 00554209 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055420a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055420b xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0055420d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055420f je 0x55422c */ if (ZF_) goto L_0055422c;
  /* 00554211 call 0x559110 */ esp -= 4; M32(esp) = 0x554216u; SAVEALL; F_00559110(c); ABI_CHECK(0x559110u, 0x554211u); RETCHK(0x554216u, 0x554211u); LOADALL;
  /* 00554216 mov dword ptr [0x9bd598], eax */ { const u32 m_ = (u32)(0x9bd598u); M32(m_) = (u32)(eax); }
  /* 0055421b mov dword ptr [0x9bd594], eax */ { const u32 m_ = (u32)(0x9bd594u); M32(m_) = (u32)(eax); }
  /* 00554220 call 0x62d5c0 */ esp -= 4; M32(esp) = 0x554225u; SAVEALL; F_0062d5c0(c); ABI_CHECK(0x62d5c0u, 0x554220u); RETCHK(0x554225u, 0x554220u); LOADALL;
  /* 00554225 nop */ ;
  /* 00554226 mov dword ptr [0x9b917c], edi */ { const u32 m_ = (u32)(0x9b917cu); M32(m_) = (u32)(edi); }
L_0055422c:;
  /* 0055422c call 0x559110 */ esp -= 4; M32(esp) = 0x554231u; SAVEALL; F_00559110(c); ABI_CHECK(0x559110u, 0x55422cu); RETCHK(0x554231u, 0x55422cu); LOADALL;
  /* 00554231 mov esi, dword ptr [0x9bd594] */ { const u32 m_ = (u32)(0x9bd594u); esi = (u32)(M32(m_)); }
  /* 00554237 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00554239 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055423b cmp ecx, 0xf4240 */ { u32 a_ = ecx, b_ = 0xf4240u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554241 jbe 0x55425a */ if ((CF_|ZF_)) goto L_0055425a;
  /* 00554243 call 0x62d5c8 */ esp -= 4; M32(esp) = 0x554248u; SAVEALL; F_0062d5c8(c); ABI_CHECK(0x62d5c8u, 0x554243u); RETCHK(0x554248u, 0x554243u); LOADALL;
  /* 00554248 nop */ ;
  /* 00554249 mov dword ptr [0x9bd594], eax */ { const u32 m_ = (u32)(0x9bd594u); M32(m_) = (u32)(eax); }
  /* 0055424e mov dword ptr [0x9b9180], edx */ { const u32 m_ = (u32)(0x9b9180u); M32(m_) = (u32)(edx); }
  /* 00554254 mov dword ptr [0x9b917c], edi */ { const u32 m_ = (u32)(0x9b917cu); M32(m_) = (u32)(edi); }
L_0055425a:;
  /* 0055425a mov edx, dword ptr [0x9bd598] */ { const u32 m_ = (u32)(0x9bd598u); edx = (u32)(M32(m_)); }
  /* 00554260 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00554262 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00554264 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554266 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00554269 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 0055426c jge 0x554274 */ if (!LT_) goto L_00554274;
  /* 0055426e fadd dword ptr [0x656f48] */ { const u32 m_ = (u32)(0x656f48u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
L_00554274:;
  /* 00554274 fmul dword ptr [0x62ce60] */ { const u32 m_ = (u32)(0x62ce60u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0055427a mov dword ptr [0x9bd598], eax */ { const u32 m_ = (u32)(0x9bd598u); M32(m_) = (u32)(eax); }
  /* 0055427f fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00554282 mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 00554285 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554286 push 0x7a81a8 */ { u32 v_ = 0x7a81a8u; esp -= 4; M32(esp) = v_; }
  /* 0055428b call 0x5318d0 */ esp -= 4; M32(esp) = 0x554290u; SAVEALL; F_005318d0(c); ABI_CHECK(0x5318d0u, 0x55428bu); RETCHK(0x554290u, 0x55428bu); LOADALL;
  /* 00554290 call 0x550820 */ esp -= 4; M32(esp) = 0x554295u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x554290u); RETCHK(0x554295u, 0x554290u); LOADALL;
  /* 00554295 fld dword ptr [0x9b9178] */ { const u32 m_ = (u32)(0x9b9178u); FPUSH((double)MF32(m_)); }
  /* 0055429b fadd dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0055429e mov esi, eax */ { esi = (u32)(eax); }
  /* 005542a0 fst dword ptr [0x9b9178] */ { const u32 m_ = (u32)(0x9b9178u); MF32(m_) = (float)ST(0); }
  /* 005542a6 fcomp dword ptr [0x9c1040] */ { const u32 m_ = (u32)(0x9c1040u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005542ac fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005542ae test ah, 1 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005542b1 jne 0x554341 */ if (!ZF_) goto L_00554341;
  /* 005542b7 fld dword ptr [0x9b9178] */ { const u32 m_ = (u32)(0x9b9178u); FPUSH((double)MF32(m_)); }
  /* 005542bd fcomp dword ptr [0x656ee0] */ { const u32 m_ = (u32)(0x656ee0u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 005542c3 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005542c5 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005542c8 jne 0x5542d4 */ if (!ZF_) goto L_005542d4;
  /* 005542ca mov dword ptr [0x9b9178], 0x3dcccccd */ { const u32 m_ = (u32)(0x9b9178u); M32(m_) = (u32)(0x3dcccccdu); }
L_005542d4:;
  /* 005542d4 mov eax, dword ptr [0x9b9178] */ { const u32 m_ = (u32)(0x9b9178u); eax = (u32)(M32(m_)); }
  /* 005542d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005542da push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005542db call 0x4019a0 */ esp -= 4; M32(esp) = 0x5542e0u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5542dbu); RETCHK(0x5542e0u, 0x5542dbu); LOADALL;
  /* 005542e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005542e3 mov edi, eax */ { edi = (u32)(eax); }
  /* 005542e5 call 0x401f60 */ esp -= 4; M32(esp) = 0x5542eau; SAVEALL; F_00401f60(c); ABI_CHECK(0x401f60u, 0x5542e5u); RETCHK(0x5542eau, 0x5542e5u); LOADALL;
  /* 005542ea mov ecx, dword ptr [0x9b9178] */ { const u32 m_ = (u32)(0x9b9178u); ecx = (u32)(M32(m_)); }
  /* 005542f0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005542f1 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 005542f3 call 0x4019a0 */ esp -= 4; M32(esp) = 0x5542f8u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x5542f3u); RETCHK(0x5542f8u, 0x5542f3u); LOADALL;
  /* 005542f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005542fb mov edi, eax */ { edi = (u32)(eax); }
  /* 005542fd call 0x401f60 */ esp -= 4; M32(esp) = 0x554302u; SAVEALL; F_00401f60(c); ABI_CHECK(0x401f60u, 0x5542fdu); RETCHK(0x554302u, 0x5542fdu); LOADALL;
  /* 00554302 mov eax, dword ptr [0x9b9178] */ { const u32 m_ = (u32)(0x9b9178u); eax = (u32)(M32(m_)); }
  /* 00554307 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00554309 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055430a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055430c call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55430fu; SAVEALL; call_ind(c, t_); RETCHK(0x55430fu, 0x55430cu); LOADALL; }
  /* 0055430f mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00554311 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00554313 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x554316u; SAVEALL; call_ind(c, t_); RETCHK(0x554316u, 0x554313u); LOADALL; }
  /* 00554316 inc dword ptr [0x9b917c] */ { const u32 m_ = (u32)(0x9b917cu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055431c mov eax, 0x7a81a8 */ { eax = (u32)(0x7a81a8u); }
  /* 00554321 mov dword ptr [0x9b9178], 0 */ { const u32 m_ = (u32)(0x9b9178u); M32(m_) = (u32)(0x0u); }
  /* 0055432b call 0x531b00 */ esp -= 4; M32(esp) = 0x554330u; SAVEALL; F_00531b00(c); ABI_CHECK(0x531b00u, 0x55432bu); RETCHK(0x554330u, 0x55432bu); LOADALL;
  /* 00554330 mov eax, dword ptr [0x9b9180] */ { const u32 m_ = (u32)(0x9b9180u); eax = (u32)(M32(m_)); }
  /* 00554335 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554336 mov dword ptr [esi + 0xc4], eax */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(eax); }
  /* 0055433c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055433d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055433f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554340 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554341:;
  /* 00554341 mov ecx, dword ptr [0x9b9180] */ { const u32 m_ = (u32)(0x9b9180u); ecx = (u32)(M32(m_)); }
  /* 00554347 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554348 mov dword ptr [esi + 0xc4], ecx */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(ecx); }
  /* 0055434e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055434f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554351 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554352 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554360(CPU *c) {
  NATIVE_HOOK(0x554360u) REGS; LOADALL;
L_00554360:;
  /* 00554360 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554361 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554363 cmp eax, 0x12 */ { u32 a_ = eax, b_ = 0x12u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554366 ja 0x5543d2 */ if (!(CF_|ZF_)) goto L_005543d2;
  /* 00554368 movzx eax, byte ptr [eax + 0x554400] */ { const u32 m_ = (u32)(eax + 0x554400u); eax = (u32)(M8(m_)); }
  /* 0055436f jmp dword ptr [eax*4 + 0x5543dc] */ { const u32 m_ = (u32)(eax * 4u + 0x5543dcu); u32 t_ = M32(m_); switch (t_) { case 0x554376u: goto L_00554376; case 0x554383u: goto L_00554383; case 0x554395u: goto L_00554395; case 0x55439au: goto L_0055439a; case 0x5543a1u: goto L_005543a1; case 0x5543aeu: goto L_005543ae; case 0x5543bau: goto L_005543ba; case 0x5543c6u: goto L_005543c6; case 0x5543d2u: goto L_005543d2; default: SAVEALL; call_ind(c, t_); return; } }
L_00554376:;
  /* 00554376 call 0x553b30 */ esp -= 4; M32(esp) = 0x55437bu; SAVEALL; F_00553b30(c); ABI_CHECK(0x553b30u, 0x554376u); RETCHK(0x55437bu, 0x554376u); LOADALL;
  /* 0055437b neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0055437d sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0055437f neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00554381 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554382 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554383:;
  /* 00554383 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554384 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00554387 call 0x553f60 */ esp -= 4; M32(esp) = 0x55438cu; SAVEALL; F_00553f60(c); ABI_CHECK(0x553f60u, 0x554387u); RETCHK(0x55438cu, 0x554387u); LOADALL;
  /* 0055438c neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0055438e sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00554390 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00554392 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554393 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554394 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554395:;
  /* 00554395 call 0x554090 */ esp -= 4; M32(esp) = 0x55439au; SAVEALL; F_00554090(c); ABI_CHECK(0x554090u, 0x554395u); RETCHK(0x55439au, 0x554395u); LOADALL;
L_0055439a:;
  /* 0055439a mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0055439f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005543a0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005543a1:;
  /* 005543a1 call 0x554180 */ esp -= 4; M32(esp) = 0x5543a6u; SAVEALL; F_00554180(c); ABI_CHECK(0x554180u, 0x5543a1u); RETCHK(0x5543a6u, 0x5543a1u); LOADALL;
  /* 005543a6 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005543a8 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 005543aa neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 005543ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005543ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005543ae:;
  /* 005543ae call 0x558be0 */ esp -= 4; M32(esp) = 0x5543b3u; SAVEALL; F_00558be0(c); ABI_CHECK(0x558be0u, 0x5543aeu); RETCHK(0x5543b3u, 0x5543aeu); LOADALL;
  /* 005543b3 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005543b8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005543b9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005543ba:;
  /* 005543ba call 0x554200 */ esp -= 4; M32(esp) = 0x5543bfu; SAVEALL; F_00554200(c); ABI_CHECK(0x554200u, 0x5543bau); RETCHK(0x5543bfu, 0x5543bau); LOADALL;
  /* 005543bf mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005543c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005543c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005543c6:;
  /* 005543c6 call 0x554140 */ esp -= 4; M32(esp) = 0x5543cbu; SAVEALL; F_00554140(c); ABI_CHECK(0x554140u, 0x5543c6u); RETCHK(0x5543cbu, 0x5543c6u); LOADALL;
  /* 005543cb mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 005543d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005543d1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005543d2:;
  /* 005543d2 mov eax, 2 */ { eax = (u32)(0x2u); }
  /* 005543d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005543d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554420(CPU *c) {
  NATIVE_HOOK(0x554420u) REGS; LOADALL;
L_00554420:;
  /* 00554420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554423 call 0x550820 */ esp -= 4; M32(esp) = 0x554428u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x554423u); RETCHK(0x554428u, 0x554423u); LOADALL;
  /* 00554428 mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0055442b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0055442d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055442e mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00554431 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554432 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00554435 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554436 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00554439 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055443a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055443c call dword ptr [edx + 0x34] */ { const u32 m_ = (u32)(edx + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55443fu; SAVEALL; call_ind(c, t_); RETCHK(0x55443fu, 0x55443cu); LOADALL; }
  /* 0055443f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00554441 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554442 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554450(CPU *c) {
  NATIVE_HOOK(0x554450u) REGS; LOADALL;
L_00554450:;
  /* 00554450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554453 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00554459 mov cl, byte ptr [0x9bd590] */ { const u32 m_ = (u32)(0x9bd590u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055445f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00554461 push 0x61fede */ { u32 v_ = 0x61fedeu; esp -= 4; M32(esp) = v_; }
  /* 00554466 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554467 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0055446c test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055446e mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00554475 jne 0x55449b */ if (!ZF_) goto L_0055449b;
  /* 00554477 or dword ptr [0x9bd590], eax */ { const u32 m_ = (u32)(0x9bd590u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 0055447d push 0x9bd584 */ { u32 v_ = 0x9bd584u; esp -= 4; M32(esp) = v_; }
  /* 00554482 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00554489 call 0x5544b0 */ esp -= 4; M32(esp) = 0x55448eu; SAVEALL; F_005544b0(c); ABI_CHECK(0x5544b0u, 0x554489u); RETCHK(0x55448eu, 0x554489u); LOADALL;
  /* 0055448e push 0x62c960 */ { u32 v_ = 0x62c960u; esp -= 4; M32(esp) = v_; }
  /* 00554493 call 0x5fe916 */ esp -= 4; M32(esp) = 0x554498u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x554493u); RETCHK(0x554498u, 0x554493u); LOADALL;
  /* 00554498 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055449b:;
  /* 0055449b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055449e mov eax, 0x9bd584 */ { eax = (u32)(0x9bd584u); }
  /* 005544a3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005544aa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005544ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005544ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005544b0(CPU *c) {
  NATIVE_HOOK(0x5544b0u) REGS; LOADALL;
L_005544b0:;
  /* 005544b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005544b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005544b3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005544b9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005544bb push 0x61feb8 */ { u32 v_ = 0x61feb8u; esp -= 4; M32(esp) = v_; }
  /* 005544c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005544c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005544c8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005544c9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005544cc call 0x5442e0 */ esp -= 4; M32(esp) = 0x5544d1u; SAVEALL; F_005442e0(c); ABI_CHECK(0x5442e0u, 0x5544ccu); RETCHK(0x5544d1u, 0x5544ccu); LOADALL;
  /* 005544d1 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 005544d4 mov byte ptr [eax + 0x2d], 1 */ { const u32 m_ = (u32)(eax + 0x2du); M8(m_) = (u8)(0x1u); }
  /* 005544d8 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005544db mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 005544de mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005544e1 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005544e3 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005544e6 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 005544e9 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 005544f0 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005544f7 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 005544fa mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005544fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005544fe mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00554500 call 0x4d1780 */ esp -= 4; M32(esp) = 0x554505u; SAVEALL; F_004d1780(c); ABI_CHECK(0x4d1780u, 0x554500u); RETCHK(0x554505u, 0x554500u); LOADALL;
  /* 00554505 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00554508 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055450b mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055450e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00554511 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00554518 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055451a mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055451d mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 00554520 mov eax, esi */ { eax = (u32)(esi); }
  /* 00554522 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00554529 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055452a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055452c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055452d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00554530(CPU *c) {
  NATIVE_HOOK(0x554530u) REGS; LOADALL;
L_00554530:;
  /* 00554530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554533 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00554539 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055453b push 0x61feb8 */ { u32 v_ = 0x61feb8u; esp -= 4; M32(esp) = v_; }
  /* 00554540 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554541 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00554548 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554549 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055454c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055454d xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0055454f mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00554552 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00554555 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00554558 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554559 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055455b call 0x4d1780 */ esp -= 4; M32(esp) = 0x554560u; SAVEALL; F_004d1780(c); ABI_CHECK(0x4d1780u, 0x55455bu); RETCHK(0x554560u, 0x55455bu); LOADALL;
  /* 00554560 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00554563 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 00554566 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00554569 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 0055456c mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055456e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00554571 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 00554574 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0055457b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055457e mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00554580 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554581 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554582 lea edx, [ebp + 8] */ edx = (u32)((u32)(ebp + 0x8u));
  /* 00554585 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554586 call 0x4d2820 */ esp -= 4; M32(esp) = 0x55458bu; SAVEALL; F_004d2820(c); ABI_CHECK(0x4d2820u, 0x554586u); RETCHK(0x55458bu, 0x554586u); LOADALL;
  /* 0055458b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055458e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055458f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554594u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55458fu); RETCHK(0x554594u, 0x55458fu); LOADALL;
  /* 00554594 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00554597 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055459a mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 0055459d mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 005545a0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005545a1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005545a8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005545a9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005545ab pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005545ac ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005545b0(CPU *c) {
  NATIVE_HOOK(0x5545b0u) REGS; LOADALL;
L_005545b0:;
  /* 005545b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005545b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005545b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005545b5 push 0x61d714 */ { u32 v_ = 0x61d714u; esp -= 4; M32(esp) = v_; }
  /* 005545ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005545c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005545c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005545c8 sub esp, 0x108 */ { u32 a_ = esp, b_ = 0x108u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005545ce mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005545d3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005545d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005545d5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005545d6 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005545d8 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 005545dd mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 005545e0 mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 005545e3 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 005545e6 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005545e9 lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 005545ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005545ed mov ecx, 0x655ce0 */ { ecx = (u32)(0x655ce0u); }
  /* 005545f2 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 005545f5 call 0x41b430 */ esp -= 4; M32(esp) = 0x5545fau; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x5545f5u); RETCHK(0x5545fau, 0x5545f5u); LOADALL;
  /* 005545fa lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 00554600 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554601 call 0x5614b0 */ esp -= 4; M32(esp) = 0x554606u; SAVEALL; F_005614b0(c); ABI_CHECK(0x5614b0u, 0x554601u); RETCHK(0x554606u, 0x554601u); LOADALL;
  /* 00554606 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0055460a cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055460e mov eax, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); eax = (u32)(M32(m_)); }
  /* 00554611 jae 0x554616 */ if (!CF_) goto L_00554616;
  /* 00554613 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
L_00554616:;
  /* 00554616 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554617 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554618 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554619 lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 0055461f call 0x5628f0 */ esp -= 4; M32(esp) = 0x554624u; SAVEALL; F_005628f0(c); ABI_CHECK(0x5628f0u, 0x55461fu); RETCHK(0x554624u, 0x55461fu); LOADALL;
  /* 00554624 mov eax, 0x64fa20 */ { eax = (u32)(0x64fa20u); }
  /* 00554629 lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 0055462f call 0x560ba0 */ esp -= 4; M32(esp) = 0x554634u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x55462fu); RETCHK(0x554634u, 0x55462fu); LOADALL;
  /* 00554634 call 0x560c60 */ esp -= 4; M32(esp) = 0x554639u; SAVEALL; F_00560c60(c); ABI_CHECK(0x560c60u, 0x554634u); RETCHK(0x554639u, 0x554634u); LOADALL;
  /* 00554639 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055463b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055463d mov dword ptr [ebp - 0x50], esi */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(esi); }
  /* 00554640 je 0x554812 */ if (ZF_) goto L_00554812;
  /* 00554646 jmp 0x554650 */ goto L_00554650;
L_00554648:;
  /* 00554648 mov esi, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); esi = (u32)(M32(m_)); }
  /* 0055464b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055464d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00554650:;
  /* 00554650 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554651 mov eax, 0x655cd4 */ { eax = (u32)(0x655cd4u); }
  /* 00554656 call 0x560ed0 */ esp -= 4; M32(esp) = 0x55465bu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x554656u); RETCHK(0x55465bu, 0x554656u); LOADALL;
  /* 0055465b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055465c call 0x5fe92e */ esp -= 4; M32(esp) = 0x554661u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x55465cu); RETCHK(0x554661u, 0x55465cu); LOADALL;
  /* 00554661 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554664 mov dword ptr [ebp - 0x54], eax */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M32(m_) = (u32)(eax); }
  /* 00554667 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554668 mov eax, 0x655cc8 */ { eax = (u32)(0x655cc8u); }
  /* 0055466d call 0x560ed0 */ esp -= 4; M32(esp) = 0x554672u; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x55466du); RETCHK(0x554672u, 0x55466du); LOADALL;
  /* 00554672 mov esi, eax */ { esi = (u32)(eax); }
  /* 00554674 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00554677 mov dword ptr [ebp - 0x18], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ebx); }
  /* 0055467a mov byte ptr [ebp - 0x28], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055467d mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00554681 mov edx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); edx = (u32)(M32(m_)); }
  /* 00554684 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00554686 mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 00554689 mov dword ptr [ebp - 0x5c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edi); }
  /* 0055468c mov dword ptr [ebp - 0x60], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(ebx); }
  /* 0055468f mov byte ptr [ebp - 0x70], bl */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00554692 lea eax, [ecx + 1] */ eax = (u32)((u32)(ecx + 0x1u));
L_00554695:;
  /* 00554695 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00554697 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00554698 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055469a jne 0x554695 */ if (!ZF_) goto L_00554695;
  /* 0055469c sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055469e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055469f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005546a0 lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 005546a3 call 0x404420 */ esp -= 4; M32(esp) = 0x5546a8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5546a3u); RETCHK(0x5546a8u, 0x5546a3u); LOADALL;
  /* 005546a8 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 005546ac push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 005546ae push 0x64e77c */ { u32 v_ = 0x64e77cu; esp -= 4; M32(esp) = v_; }
  /* 005546b3 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 005546b9 mov dword ptr [ebp - 0x78], edi */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(edi); }
  /* 005546bc mov dword ptr [ebp - 0x7c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(ebx); }
  /* 005546bf mov byte ptr [ebp - 0x8c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005546c5 call 0x404420 */ esp -= 4; M32(esp) = 0x5546cau; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x5546c5u); RETCHK(0x5546cau, 0x5546c5u); LOADALL;
  /* 005546ca lea eax, [ebp - 0x74] */ eax = (u32)((u32)(ebp + 0xffffff8cu));
  /* 005546cd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005546ce lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 005546d4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005546d5 lea esi, [ebp - 0xcc] */ esi = (u32)((u32)(ebp + 0xffffff34u));
  /* 005546db mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 005546df call 0x464640 */ esp -= 4; M32(esp) = 0x5546e4u; SAVEALL; F_00464640(c); ABI_CHECK(0x464640u, 0x5546dfu); RETCHK(0x5546e4u, 0x5546dfu); LOADALL;
  /* 005546e4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005546e7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005546e9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005546ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005546eb lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 005546ee mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 005546f2 call 0x404140 */ esp -= 4; M32(esp) = 0x5546f7u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x5546f2u); RETCHK(0x5546f7u, 0x5546f2u); LOADALL;
  /* 005546f7 mov eax, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); eax = (u32)(M32(m_)); }
  /* 005546fd mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 00554702 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554704 jb 0x554715 */ if (CF_) goto L_00554715;
  /* 00554706 mov edx, dword ptr [ebp - 0xc8] */ { const u32 m_ = (u32)(ebp + 0xffffff38u); edx = (u32)(M32(m_)); }
  /* 0055470c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055470d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554712u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55470du); RETCHK(0x554712u, 0x55470du); LOADALL;
  /* 00554712 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554715:;
  /* 00554715 cmp dword ptr [ebp - 0x78], esi */ { const u32 m_ = (u32)(ebp + 0xffffff88u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554718 mov dword ptr [ebp - 0xb4], edi */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); M32(m_) = (u32)(edi); }
  /* 0055471e mov dword ptr [ebp - 0xb8], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff48u); M32(m_) = (u32)(ebx); }
  /* 00554724 mov byte ptr [ebp - 0xc8], bl */ { const u32 m_ = (u32)(ebp + 0xffffff38u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055472a jb 0x55473b */ if (CF_) goto L_0055473b;
  /* 0055472c mov eax, dword ptr [ebp - 0x8c] */ { const u32 m_ = (u32)(ebp + 0xffffff74u); eax = (u32)(M32(m_)); }
  /* 00554732 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554733 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554738u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x554733u); RETCHK(0x554738u, 0x554733u); LOADALL;
  /* 00554738 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055473b:;
  /* 0055473b mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0055473f cmp dword ptr [ebp - 0x5c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554742 mov dword ptr [ebp - 0x78], edi */ { const u32 m_ = (u32)(ebp + 0xffffff88u); M32(m_) = (u32)(edi); }
  /* 00554745 mov dword ptr [ebp - 0x7c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff84u); M32(m_) = (u32)(ebx); }
  /* 00554748 mov byte ptr [ebp - 0x8c], bl */ { const u32 m_ = (u32)(ebp + 0xffffff74u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055474e jb 0x55475c */ if (CF_) goto L_0055475c;
  /* 00554750 mov ecx, dword ptr [ebp - 0x70] */ { const u32 m_ = (u32)(ebp + 0xffffff90u); ecx = (u32)(M32(m_)); }
  /* 00554753 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554754 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554759u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x554754u); RETCHK(0x554759u, 0x554754u); LOADALL;
  /* 00554759 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055475c:;
  /* 0055475c mov edx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); edx = (u32)(M32(m_)); }
  /* 0055475f push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00554761 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554762 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00554765 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554766 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0055476c mov dword ptr [ebp - 0x5c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(edi); }
  /* 0055476f mov dword ptr [ebp - 0x60], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(ebx); }
  /* 00554772 mov byte ptr [ebp - 0x70], bl */ { const u32 m_ = (u32)(ebp + 0xffffff90u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00554775 mov dword ptr [ebp - 0xb0], edx */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M32(m_) = (u32)(edx); }
  /* 0055477b mov dword ptr [ebp - 0x94], edi */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(edi); }
  /* 00554781 mov dword ptr [ebp - 0x98], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(ebx); }
  /* 00554787 mov byte ptr [ebp - 0xa8], bl */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055478d call 0x404140 */ esp -= 4; M32(esp) = 0x554792u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x55478du); RETCHK(0x554792u, 0x55478du); LOADALL;
  /* 00554792 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554795 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0055479b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055479c lea ebx, [ebp - 0x58] */ ebx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0055479f mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 005547a3 call 0x4d0b50 */ esp -= 4; M32(esp) = 0x5547a8u; SAVEALL; F_004d0b50(c); ABI_CHECK(0x4d0b50u, 0x5547a3u); RETCHK(0x5547a8u, 0x5547a3u); LOADALL;
  /* 005547a8 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 005547ac cmp dword ptr [ebp - 0x94], esi */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005547b2 jb 0x5547c3 */ if (CF_) goto L_005547c3;
  /* 005547b4 mov edx, dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); edx = (u32)(M32(m_)); }
  /* 005547ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005547bb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5547c0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5547bbu); RETCHK(0x5547c0u, 0x5547bbu); LOADALL;
  /* 005547c0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005547c3:;
  /* 005547c3 mov eax, dword ptr [ebp - 0x50] */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); eax = (u32)(M32(m_)); }
  /* 005547c6 mov dword ptr [ebp - 0x94], edi */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(edi); }
  /* 005547cc mov dword ptr [ebp - 0x98], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0x0u); }
  /* 005547d6 mov byte ptr [ebp - 0xa8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M8(m_) = (u8)(0x0u); }
  /* 005547dd call 0x560cd0 */ esp -= 4; M32(esp) = 0x5547e2u; SAVEALL; F_00560cd0(c); ABI_CHECK(0x560cd0u, 0x5547ddu); RETCHK(0x5547e2u, 0x5547ddu); LOADALL;
  /* 005547e2 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005547e4 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 005547e8 cmp dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005547eb mov dword ptr [ebp - 0x50], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(ebx); }
  /* 005547ee jb 0x5547fc */ if (CF_) goto L_005547fc;
  /* 005547f0 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005547f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005547f4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5547f9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5547f4u); RETCHK(0x5547f9u, 0x5547f4u); LOADALL;
  /* 005547f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005547fc:;
  /* 005547fc test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005547fe mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00554801 mov dword ptr [ebp - 0x18], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x0u); }
  /* 00554808 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 0055480c jne 0x554648 */ if (!ZF_) goto L_00554648;
L_00554812:;
  /* 00554812 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00554815 mov eax, dword ptr [ebp - 0xe0] */ { const u32 m_ = (u32)(ebp + 0xffffff20u); eax = (u32)(M32(m_)); }
  /* 0055481b cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554820 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554821 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554822 mov dword ptr [ebp - 0x114], 0x643d40 */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M32(m_) = (u32)(0x643d40u); }
  /* 0055482c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055482d je 0x554838 */ if (ZF_) goto L_00554838;
  /* 0055482f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554830 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x554835u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x554830u); RETCHK(0x554835u, 0x554830u); LOADALL;
  /* 00554835 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554838:;
  /* 00554838 lea ecx, [ebp - 0x114] */ ecx = (u32)((u32)(ebp + 0xfffffeecu));
  /* 0055483e call 0x560aa0 */ esp -= 4; M32(esp) = 0x554843u; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x55483eu); RETCHK(0x554843u, 0x55483eu); LOADALL;
  /* 00554843 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554847 jb 0x554855 */ if (CF_) goto L_00554855;
  /* 00554849 mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0055484c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055484d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554852u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55484du); RETCHK(0x554852u, 0x55484du); LOADALL;
  /* 00554852 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554855:;
  /* 00554855 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00554858 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055485f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00554862 call 0x61af31 */ esp -= 4; M32(esp) = 0x554867u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x554862u); RETCHK(0x554867u, 0x554862u); LOADALL;
  /* 00554867 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554869 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055486a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00554870(CPU *c) {
  NATIVE_HOOK(0x554870u) REGS; LOADALL;
L_00554870:;
  /* 00554870 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554871 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554873 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554874 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554875 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554876 lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 00554879 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055487c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055487e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00554880 call 0x4d0c20 */ esp -= 4; M32(esp) = 0x554885u; SAVEALL; F_004d0c20(c); ABI_CHECK(0x4d0c20u, 0x554880u); RETCHK(0x554885u, 0x554880u); LOADALL;
  /* 00554885 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00554887 cmp eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055488a je 0x5548a8 */ if (ZF_) goto L_005548a8;
  /* 0055488c cmp dword ptr [eax + 0x28], 0x10 */ { const u32 m_ = (u32)(eax + 0x28u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554890 jb 0x55489d */ if (CF_) goto L_0055489d;
  /* 00554892 mov eax, dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); eax = (u32)(M32(m_)); }
  /* 00554895 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554896 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554897 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554899 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055489a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055489d:;
  /* 0055489d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055489e add eax, 0x14 */ { u32 a_ = eax, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005548a1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005548a2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005548a4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005548a5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_005548a8:;
  /* 005548a8 mov eax, edi */ { eax = (u32)(edi); }
  /* 005548aa pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005548ab pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005548ac mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005548ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005548af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005548c0(CPU *c) {
  NATIVE_HOOK(0x5548c0u) REGS; LOADALL;
L_005548c0:;
  /* 005548c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005548c1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005548c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005548c4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005548c5 mov dword ptr [eax + 0xc], ebx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ebx); }
  /* 005548c8 mov dword ptr [eax + 0x14], ebx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ebx); }
  /* 005548cb mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005548ce mov dword ptr [eax + 8], ebx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ebx); }
  /* 005548d1 mov dword ptr [eax + 0x18], ebx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ebx); }
  /* 005548d4 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 005548d6 lea esi, [eax + 0x20] */ esi = (u32)((u32)(eax + 0x20u));
  /* 005548d9 mov edi, 8 */ { edi = (u32)(0x8u); }
  /* 005548de mov edi, edi */ { edi = (u32)(edi); }
L_005548e0:;
  /* 005548e0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005548e2 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 005548e5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005548e6 lea ecx, [esi - 4] */ ecx = (u32)((u32)(esi + 0xfffffffcu));
  /* 005548e9 call 0x4f12b0 */ esp -= 4; M32(esp) = 0x5548eeu; SAVEALL; F_004f12b0(c); ABI_CHECK(0x4f12b0u, 0x5548e9u); RETCHK(0x5548eeu, 0x5548e9u); LOADALL;
  /* 005548ee mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005548f0 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 005548f3 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005548f5 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 005548f8 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 005548fa mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 005548fc add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 005548ff dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00554900 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 00554903 jne 0x5548e0 */ if (!ZF_) goto L_005548e0;
  /* 00554905 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554906 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554907 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554908 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554910(CPU *c) {
  NATIVE_HOOK(0x554910u) REGS; LOADALL;
L_00554910:;
  /* 00554910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554913 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00554915 push 0x625f68 */ { u32 v_ = 0x625f68u; esp -= 4; M32(esp) = v_; }
  /* 0055491a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00554920 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554921 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00554928 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055492b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00554930 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554931 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00554933 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00554936 mov dword ptr [ebp - 0x14], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(0xfu); }
  /* 0055493d mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00554940 mov byte ptr [ebp - 0x28], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)(0x0u); }
  /* 00554944 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00554947 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554948 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 0055494b call 0x41b430 */ esp -= 4; M32(esp) = 0x554950u; SAVEALL; F_0041b430(c); ABI_CHECK(0x41b430u, 0x55494bu); RETCHK(0x554950u, 0x55494bu); LOADALL;
  /* 00554950 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554952 jne 0x55496d */ if (!ZF_) goto L_0055496d;
  /* 00554954 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554958 jb 0x554966 */ if (CF_) goto L_00554966;
  /* 0055495a mov ecx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); ecx = (u32)(M32(m_)); }
  /* 0055495d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055495e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554963u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55495eu); RETCHK(0x554963u, 0x55495eu); LOADALL;
  /* 00554963 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554966:;
  /* 00554966 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554968 jmp 0x554a76 */ goto L_00554a76;
L_0055496d:;
  /* 0055496d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00554970 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554971 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00554973 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554975 jle 0x554a61 */ if ((ZF_|LT_)) goto L_00554a61;
  /* 0055497b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055497c mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055497f add esi, 0x80 */ { u32 a_ = esi, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00554985:;
  /* 00554985 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00554987 lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055498a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055498b lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0055498e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055498f mov eax, edi */ { eax = (u32)(edi); }
  /* 00554991 mov byte ptr [ebp - 0x30], 0xa */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M8(m_) = (u8)(0xau); }
  /* 00554995 call 0x40a4a0 */ esp -= 4; M32(esp) = 0x55499au; SAVEALL; F_0040a4a0(c); ABI_CHECK(0x40a4a0u, 0x554995u); RETCHK(0x55499au, 0x554995u); LOADALL;
  /* 0055499a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055499b mov edi, eax */ { edi = (u32)(eax); }
  /* 0055499d cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005549a1 mov eax, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); eax = (u32)(M32(m_)); }
  /* 005549a4 jae 0x5549a9 */ if (!CF_) goto L_005549a9;
  /* 005549a6 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
L_005549a9:;
  /* 005549a9 lea ecx, [esi + 4] */ ecx = (u32)((u32)(esi + 0x4u));
  /* 005549ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549ad push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005549ae lea edx, [esi - 4] */ edx = (u32)((u32)(esi + 0xfffffffcu));
  /* 005549b1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549b2 lea ecx, [esi - 8] */ ecx = (u32)((u32)(esi + 0xfffffff8u));
  /* 005549b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549b6 lea edx, [esi - 0xc] */ edx = (u32)((u32)(esi + 0xfffffff4u));
  /* 005549b9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549ba lea ecx, [esi - 0x10] */ ecx = (u32)((u32)(esi + 0xfffffff0u));
  /* 005549bd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549be lea edx, [esi - 0x14] */ edx = (u32)((u32)(esi + 0xffffffecu));
  /* 005549c1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549c2 lea ecx, [esi - 0x18] */ ecx = (u32)((u32)(esi + 0xffffffe8u));
  /* 005549c5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549c6 lea edx, [esi - 0x1c] */ edx = (u32)((u32)(esi + 0xffffffe4u));
  /* 005549c9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549ca lea ecx, [esi - 0x20] */ ecx = (u32)((u32)(esi + 0xffffffe0u));
  /* 005549cd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549ce lea edx, [esi - 0x24] */ edx = (u32)((u32)(esi + 0xffffffdcu));
  /* 005549d1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549d2 lea ecx, [esi - 0x28] */ ecx = (u32)((u32)(esi + 0xffffffd8u));
  /* 005549d5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549d6 lea edx, [esi - 0x2c] */ edx = (u32)((u32)(esi + 0xffffffd4u));
  /* 005549d9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549da lea ecx, [esi - 0x30] */ ecx = (u32)((u32)(esi + 0xffffffd0u));
  /* 005549dd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549de lea edx, [esi - 0x34] */ edx = (u32)((u32)(esi + 0xffffffccu));
  /* 005549e1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549e2 lea ecx, [esi - 0x38] */ ecx = (u32)((u32)(esi + 0xffffffc8u));
  /* 005549e5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549e6 lea edx, [esi - 0x3c] */ edx = (u32)((u32)(esi + 0xffffffc4u));
  /* 005549e9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549ea lea ecx, [esi - 0x40] */ ecx = (u32)((u32)(esi + 0xffffffc0u));
  /* 005549ed push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549ee lea edx, [esi - 0x44] */ edx = (u32)((u32)(esi + 0xffffffbcu));
  /* 005549f1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549f2 lea ecx, [esi - 0x48] */ ecx = (u32)((u32)(esi + 0xffffffb8u));
  /* 005549f5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549f6 lea edx, [esi - 0x50] */ edx = (u32)((u32)(esi + 0xffffffb0u));
  /* 005549f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005549fa lea ecx, [esi - 0x4c] */ ecx = (u32)((u32)(esi + 0xffffffb4u));
  /* 005549fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005549fe lea edx, [esi - 0x54] */ edx = (u32)((u32)(esi + 0xffffffacu));
  /* 00554a01 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554a02 lea ecx, [esi - 0x58] */ ecx = (u32)((u32)(esi + 0xffffffa8u));
  /* 00554a05 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554a06 lea edx, [esi - 0x5c] */ edx = (u32)((u32)(esi + 0xffffffa4u));
  /* 00554a09 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554a0a lea ecx, [esi - 0x64] */ ecx = (u32)((u32)(esi + 0xffffff9cu));
  /* 00554a0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554a0e lea edx, [esi - 0x70] */ edx = (u32)((u32)(esi + 0xffffff90u));
  /* 00554a11 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554a12 lea ecx, [esi - 0x68] */ ecx = (u32)((u32)(esi + 0xffffff98u));
  /* 00554a15 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554a16 lea edx, [esi - 0x6c] */ edx = (u32)((u32)(esi + 0xffffff94u));
  /* 00554a19 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554a1a lea ecx, [esi - 0x74] */ ecx = (u32)((u32)(esi + 0xffffff8cu));
  /* 00554a1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554a1e lea edx, [esi - 0x78] */ edx = (u32)((u32)(esi + 0xffffff88u));
  /* 00554a21 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554a22 lea ecx, [esi - 0x7c] */ ecx = (u32)((u32)(esi + 0xffffff84u));
  /* 00554a25 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554a26 add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00554a28 push 0x655d58 */ { u32 v_ = 0x655d58u; esp -= 4; M32(esp) = v_; }
  /* 00554a2d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554a2e call 0x5feaac */ esp -= 4; M32(esp) = 0x554a33u; SAVEALL; F_005feaac(c); ABI_CHECK(0x5feaacu, 0x554a2eu); RETCHK(0x554a33u, 0x554a2eu); LOADALL;
  /* 00554a33 add esp, 0x88 */ { u32 a_ = esp, b_ = 0x88u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554a39 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554a3c jne 0x554a59 */ if (!ZF_) goto L_00554a59;
  /* 00554a3e mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00554a41 mov dword ptr [esi - 0x80], 1 */ { const u32 m_ = (u32)(esi + 0xffffff80u); M32(m_) = (u32)(0x1u); }
  /* 00554a48 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00554a49 add esi, 0x170 */ { u32 a_ = esi, b_ = 0x170u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00554a4f cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554a51 jl 0x554985 */ if (LT_) goto L_00554985;
  /* 00554a57 jmp 0x554a60 */ goto L_00554a60;
L_00554a59:;
  /* 00554a59 mov dword ptr [esi - 0x80], 0 */ { const u32 m_ = (u32)(esi + 0xffffff80u); M32(m_) = (u32)(0x0u); }
L_00554a60:;
  /* 00554a60 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00554a61:;
  /* 00554a61 cmp dword ptr [ebp - 0x14], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554a65 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554a66 jb 0x554a74 */ if (CF_) goto L_00554a74;
  /* 00554a68 mov edx, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); edx = (u32)(M32(m_)); }
  /* 00554a6b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554a6c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554a71u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x554a6cu); RETCHK(0x554a71u, 0x554a6cu); LOADALL;
  /* 00554a71 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554a74:;
  /* 00554a74 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_00554a76:;
  /* 00554a76 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00554a79 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00554a80 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00554a83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00554a84 call 0x61af31 */ esp -= 4; M32(esp) = 0x554a89u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x554a84u); RETCHK(0x554a89u, 0x554a84u); LOADALL;
  /* 00554a89 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554a8b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554a8c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554a90(CPU *c) {
  NATIVE_HOOK(0x554a90u) REGS; LOADALL;
L_00554a90:;
  /* 00554a90 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554a91 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554a93 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554a95 jne 0x554a9b */ if (!ZF_) goto L_00554a9b;
  /* 00554a97 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554a99 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554a9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554a9b:;
  /* 00554a9b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554a9e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554a9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554aa0 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00554aa2 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00554aa4 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
  /* 00554aaa call 0x5b34e0 */ esp -= 4; M32(esp) = 0x554aafu; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x554aaau); RETCHK(0x554aafu, 0x554aaau); LOADALL;
  /* 00554aaf mov esi, eax */ { esi = (u32)(eax); }
  /* 00554ab1 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554ab4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554ab6 je 0x554aeb */ if (ZF_) goto L_00554aeb;
  /* 00554ab8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554aba push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554abc push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00554abe push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554abf call 0x5b3890 */ esp -= 4; M32(esp) = 0x554ac4u; SAVEALL; F_005b3890(c); ABI_CHECK(0x5b3890u, 0x554abfu); RETCHK(0x554ac4u, 0x554abfu); LOADALL;
  /* 00554ac4 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554ac7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554ac9 je 0x554ad6 */ if (ZF_) goto L_00554ad6;
  /* 00554acb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554acc call 0x579380 */ esp -= 4; M32(esp) = 0x554ad1u; SAVEALL; F_00579380(c); ABI_CHECK(0x579380u, 0x554accu); RETCHK(0x554ad1u, 0x554accu); LOADALL;
  /* 00554ad1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554ad4 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
L_00554ad6:;
  /* 00554ad6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554ad8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554ad9 call 0x5b3410 */ esp -= 4; M32(esp) = 0x554adeu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x554ad9u); RETCHK(0x554adeu, 0x554ad9u); LOADALL;
  /* 00554ade mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 00554ae0 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554ae3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554ae5 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00554ae8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554ae9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554aea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554aeb:;
  /* 00554aeb xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554aed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554aee pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554aef ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554af0(CPU *c) {
  NATIVE_HOOK(0x554af0u) REGS; LOADALL;
L_00554af0:;
  /* 00554af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554af3 sub esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554af6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554af8 jne 0x554b00 */ if (!ZF_) goto L_00554b00;
  /* 00554afa xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554afc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554afe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554aff ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554b00:;
  /* 00554b00 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554b03 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554b04 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554b05 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00554b07 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00554b09 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
  /* 00554b0f call 0x5b34e0 */ esp -= 4; M32(esp) = 0x554b14u; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x554b0fu); RETCHK(0x554b14u, 0x554b0fu); LOADALL;
  /* 00554b14 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00554b16 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554b19 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554b1b je 0x554b97 */ if (ZF_) goto L_00554b97;
  /* 00554b1d lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 00554b20 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554b21 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554b22 call 0x5b3a90 */ esp -= 4; M32(esp) = 0x554b27u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x554b22u); RETCHK(0x554b27u, 0x554b22u); LOADALL;
  /* 00554b27 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554b2a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554b2c je 0x554b7f */ if (ZF_) goto L_00554b7f;
  /* 00554b2e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554b2f nop */ ;
L_00554b30:;
  /* 00554b30 cmp dword ptr [ebp - 0x14], 0xc */ { const u32 m_ = (u32)(ebp + 0xffffffecu); u32 a_ = M32(m_), b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554b34 je 0x554b45 */ if (ZF_) goto L_00554b45;
  /* 00554b36 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00554b39 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554b3a push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554b3b call 0x5b3300 */ esp -= 4; M32(esp) = 0x554b40u; SAVEALL; F_005b3300(c); ABI_CHECK(0x5b3300u, 0x554b3bu); RETCHK(0x554b40u, 0x554b3bu); LOADALL;
  /* 00554b40 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554b43 jmp 0x554b6d */ goto L_00554b6d;
L_00554b45:;
  /* 00554b45 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00554b47 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
  /* 00554b4a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00554b50:;
  /* 00554b50 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554b53 je 0x554b60 */ if (ZF_) goto L_00554b60;
  /* 00554b55 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00554b56 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00554b59 cmp esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554b5c jl 0x554b50 */ if (LT_) goto L_00554b50;
  /* 00554b5e jmp 0x554b6d */ goto L_00554b6d;
L_00554b60:;
  /* 00554b60 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554b61 call 0x5e57a0 */ esp -= 4; M32(esp) = 0x554b66u; SAVEALL; F_005e57a0(c); ABI_CHECK(0x5e57a0u, 0x554b61u); RETCHK(0x554b66u, 0x554b61u); LOADALL;
  /* 00554b66 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554b69 mov dword ptr [edi + esi*4 + 4], eax */ { const u32 m_ = (u32)(edi + esi * 4u + 0x4u); M32(m_) = (u32)(eax); }
L_00554b6d:;
  /* 00554b6d lea eax, [ebp - 0x14] */ eax = (u32)((u32)(ebp + 0xffffffecu));
  /* 00554b70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554b71 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554b72 call 0x5b3a90 */ esp -= 4; M32(esp) = 0x554b77u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x554b72u); RETCHK(0x554b77u, 0x554b72u); LOADALL;
  /* 00554b77 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554b7a test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554b7c jne 0x554b30 */ if (!ZF_) goto L_00554b30;
  /* 00554b7e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00554b7f:;
  /* 00554b7f push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554b81 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554b82 call 0x5b3410 */ esp -= 4; M32(esp) = 0x554b87u; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x554b82u); RETCHK(0x554b87u, 0x554b82u); LOADALL;
  /* 00554b87 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554b8a mov dword ptr [edi], 1 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x1u); }
  /* 00554b90 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00554b92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554b93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554b95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554b96 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554b97:;
  /* 00554b97 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554b99 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554b9a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554b9c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554b9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554ba0(CPU *c) {
  NATIVE_HOOK(0x554ba0u) REGS; LOADALL;
L_00554ba0:;
  /* 00554ba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554ba1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554ba3 sub esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554ba6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00554ba7 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00554ba9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554bab mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 00554bae jne 0x554bb7 */ if (!ZF_) goto L_00554bb7;
  /* 00554bb0 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554bb2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554bb3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554bb5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554bb6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554bb7:;
  /* 00554bb7 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554bba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554bbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554bbc push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00554bbe push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00554bc0 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
  /* 00554bc6 call 0x5b34e0 */ esp -= 4; M32(esp) = 0x554bcbu; SAVEALL; F_005b34e0(c); ABI_CHECK(0x5b34e0u, 0x554bc6u); RETCHK(0x554bcbu, 0x554bc6u); LOADALL;
  /* 00554bcb mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00554bcd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554bd0 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554bd2 je 0x554cd2 */ if (ZF_) goto L_00554cd2;
  /* 00554bd8 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00554bdb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554bdc push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554bdd call 0x5b3a90 */ esp -= 4; M32(esp) = 0x554be2u; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x554bddu); RETCHK(0x554be2u, 0x554bddu); LOADALL;
  /* 00554be2 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554be5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554be7 je 0x554ca6 */ if (ZF_) goto L_00554ca6;
  /* 00554bed jmp 0x554bf2 */ goto L_00554bf2;
L_00554bef:;
  /* 00554bef mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
L_00554bf2:;
  /* 00554bf2 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00554bf5 cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554bf8 je 0x554c6f */ if (ZF_) goto L_00554c6f;
  /* 00554bfa cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554bfd je 0x554c52 */ if (ZF_) goto L_00554c52;
  /* 00554bff cmp eax, 0x29 */ { u32 a_ = eax, b_ = 0x29u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554c02 je 0x554c16 */ if (ZF_) goto L_00554c16;
  /* 00554c04 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00554c07 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554c08 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c09 call 0x5b3300 */ esp -= 4; M32(esp) = 0x554c0eu; SAVEALL; F_005b3300(c); ABI_CHECK(0x5b3300u, 0x554c09u); RETCHK(0x554c0eu, 0x554c09u); LOADALL;
  /* 00554c0e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c11 jmp 0x554c91 */ goto L_00554c91;
L_00554c16:;
  /* 00554c16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c17 call 0x5b9630 */ esp -= 4; M32(esp) = 0x554c1cu; SAVEALL; F_005b9630(c); ABI_CHECK(0x5b9630u, 0x554c17u); RETCHK(0x554c1cu, 0x554c17u); LOADALL;
  /* 00554c1c mov al, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00554c1e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c21 cmp al, 0x42 */ { u32 a_ = (eax & 0xffu), b_ = 0x42u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c23 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00554c2a jne 0x554c32 */ if (!ZF_) goto L_00554c32;
  /* 00554c2c lea ecx, [edi + 0x18] */ ecx = (u32)((u32)(edi + 0x18u));
  /* 00554c2f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_00554c32:;
  /* 00554c32 cmp al, 0x45 */ { u32 a_ = (eax & 0xffu), b_ = 0x45u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c34 jne 0x554c3c */ if (!ZF_) goto L_00554c3c;
  /* 00554c36 lea edx, [edi + 0x1c] */ edx = (u32)((u32)(edi + 0x1cu));
  /* 00554c39 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
L_00554c3c:;
  /* 00554c3c cmp al, 0x43 */ { u32 a_ = (eax & 0xffu), b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c3e jne 0x554c46 */ if (!ZF_) goto L_00554c46;
  /* 00554c40 lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 00554c43 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_00554c46:;
  /* 00554c46 cmp al, 0x52 */ { u32 a_ = (eax & 0xffu), b_ = 0x52u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c48 jne 0x554c91 */ if (!ZF_) goto L_00554c91;
  /* 00554c4a lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 00554c4d mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00554c50 jmp 0x554c91 */ goto L_00554c91;
L_00554c52:;
  /* 00554c52 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554c54 je 0x554c60 */ if (ZF_) goto L_00554c60;
  /* 00554c56 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c57 call 0x579380 */ esp -= 4; M32(esp) = 0x554c5cu; SAVEALL; F_00579380(c); ABI_CHECK(0x579380u, 0x554c57u); RETCHK(0x554c5cu, 0x554c57u); LOADALL;
  /* 00554c5c mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00554c5e jmp 0x554c8e */ goto L_00554c8e;
L_00554c60:;
  /* 00554c60 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00554c63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554c64 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c65 call 0x5b3300 */ esp -= 4; M32(esp) = 0x554c6au; SAVEALL; F_005b3300(c); ABI_CHECK(0x5b3300u, 0x554c65u); RETCHK(0x554c6au, 0x554c65u); LOADALL;
  /* 00554c6a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c6d jmp 0x554c91 */ goto L_00554c91;
L_00554c6f:;
  /* 00554c6f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00554c71 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
L_00554c74:;
  /* 00554c74 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554c77 je 0x554c84 */ if (ZF_) goto L_00554c84;
  /* 00554c79 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00554c7a add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00554c7d cmp esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554c80 jl 0x554c74 */ if (LT_) goto L_00554c74;
  /* 00554c82 jmp 0x554c91 */ goto L_00554c91;
L_00554c84:;
  /* 00554c84 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c85 call 0x5e57a0 */ esp -= 4; M32(esp) = 0x554c8au; SAVEALL; F_005e57a0(c); ABI_CHECK(0x5e57a0u, 0x554c85u); RETCHK(0x554c8au, 0x554c85u); LOADALL;
  /* 00554c8a mov dword ptr [edi + esi*4 + 4], eax */ { const u32 m_ = (u32)(edi + esi * 4u + 0x4u); M32(m_) = (u32)(eax); }
L_00554c8e:;
  /* 00554c8e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554c91:;
  /* 00554c91 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00554c94 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554c95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c96 call 0x5b3a90 */ esp -= 4; M32(esp) = 0x554c9bu; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x554c96u); RETCHK(0x554c9bu, 0x554c96u); LOADALL;
  /* 00554c9b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c9e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554ca0 jne 0x554bef */ if (!ZF_) goto L_00554bef;
L_00554ca6:;
  /* 00554ca6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554ca8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554ca9 call 0x5b3410 */ esp -= 4; M32(esp) = 0x554caeu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x554ca9u); RETCHK(0x554caeu, 0x554ca9u); LOADALL;
  /* 00554cae mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00554cb1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554cb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554cb6 mov dword ptr [edi], 1 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x1u); }
  /* 00554cbc je 0x554ccc */ if (ZF_) goto L_00554ccc;
  /* 00554cbe mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00554cc1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554cc3 je 0x554ccc */ if (ZF_) goto L_00554ccc;
  /* 00554cc5 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00554cc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554cca jne 0x554cda */ if (!ZF_) goto L_00554cda;
L_00554ccc:;
  /* 00554ccc mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_00554cd2:;
  /* 00554cd2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554cd3 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554cd5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554cd6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554cd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554cd9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554cda:;
  /* 00554cda pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554cdb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00554cdd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554cde mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554ce0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554ce1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554c44(CPU *c) {
  NATIVE_HOOK(0x554c44u) REGS; LOADALL;
  goto L_00554c44;
L_00554bef:;
  /* 00554bef mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 00554bf2 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00554bf5 cmp eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554bf8 je 0x554c6f */ if (ZF_) goto L_00554c6f;
  /* 00554bfa cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554bfd je 0x554c52 */ if (ZF_) goto L_00554c52;
  /* 00554bff cmp eax, 0x29 */ { u32 a_ = eax, b_ = 0x29u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554c02 je 0x554c16 */ if (ZF_) goto L_00554c16;
  /* 00554c04 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00554c07 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554c08 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c09 call 0x5b3300 */ esp -= 4; M32(esp) = 0x554c0eu; SAVEALL; F_005b3300(c); ABI_CHECK(0x5b3300u, 0x554c09u); RETCHK(0x554c0eu, 0x554c09u); LOADALL;
  /* 00554c0e add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c11 jmp 0x554c91 */ goto L_00554c91;
L_00554c16:;
  /* 00554c16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c17 call 0x5b9630 */ esp -= 4; M32(esp) = 0x554c1cu; SAVEALL; F_005b9630(c); ABI_CHECK(0x5b9630u, 0x554c17u); RETCHK(0x554c1cu, 0x554c17u); LOADALL;
  /* 00554c1c mov al, byte ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00554c1e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c21 cmp al, 0x42 */ { u32 a_ = (eax & 0xffu), b_ = 0x42u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c23 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00554c2a jne 0x554c32 */ if (!ZF_) goto L_00554c32;
  /* 00554c2c lea ecx, [edi + 0x18] */ ecx = (u32)((u32)(edi + 0x18u));
  /* 00554c2f mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
L_00554c32:;
  /* 00554c32 cmp al, 0x45 */ { u32 a_ = (eax & 0xffu), b_ = 0x45u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c34 jne 0x554c3c */ if (!ZF_) goto L_00554c3c;
  /* 00554c36 lea edx, [edi + 0x1c] */ edx = (u32)((u32)(edi + 0x1cu));
  /* 00554c39 mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
L_00554c3c:;
  /* 00554c3c cmp al, 0x43 */ { u32 a_ = (eax & 0xffu), b_ = 0x43u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c3e jne 0x554c46 */ if (!ZF_) goto L_00554c46;
  /* 00554c40 lea ecx, [edi + 0x20] */ ecx = (u32)((u32)(edi + 0x20u));
  /* 00554c43 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  goto L_00554c46;
L_00554c44:;
  /* 00554c44 dec ebp */ { u32 a_ = ebp; u32 r_ = (a_ - 1u) & 0xffffffffu; ebp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00554c45 cld */ c->df = 0;
L_00554c46:;
  /* 00554c46 cmp al, 0x52 */ { u32 a_ = (eax & 0xffu), b_ = 0x52u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00554c48 jne 0x554c91 */ if (!ZF_) goto L_00554c91;
  /* 00554c4a lea edx, [edi + 0x24] */ edx = (u32)((u32)(edi + 0x24u));
  /* 00554c4d mov dword ptr [ebp - 4], edx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edx); }
  /* 00554c50 jmp 0x554c91 */ goto L_00554c91;
L_00554c52:;
  /* 00554c52 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554c54 je 0x554c60 */ if (ZF_) goto L_00554c60;
  /* 00554c56 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c57 call 0x579380 */ esp -= 4; M32(esp) = 0x554c5cu; SAVEALL; F_00579380(c); ABI_CHECK(0x579380u, 0x554c57u); RETCHK(0x554c5cu, 0x554c57u); LOADALL;
  /* 00554c5c mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 00554c5e jmp 0x554c8e */ goto L_00554c8e;
L_00554c60:;
  /* 00554c60 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00554c63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554c64 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c65 call 0x5b3300 */ esp -= 4; M32(esp) = 0x554c6au; SAVEALL; F_005b3300(c); ABI_CHECK(0x5b3300u, 0x554c65u); RETCHK(0x554c6au, 0x554c65u); LOADALL;
  /* 00554c6a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c6d jmp 0x554c91 */ goto L_00554c91;
L_00554c6f:;
  /* 00554c6f xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00554c71 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
L_00554c74:;
  /* 00554c74 cmp dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554c77 je 0x554c84 */ if (ZF_) goto L_00554c84;
  /* 00554c79 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00554c7a add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00554c7d cmp esi, 5 */ { u32 a_ = esi, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554c80 jl 0x554c74 */ if (LT_) goto L_00554c74;
  /* 00554c82 jmp 0x554c91 */ goto L_00554c91;
L_00554c84:;
  /* 00554c84 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c85 call 0x5e57a0 */ esp -= 4; M32(esp) = 0x554c8au; SAVEALL; F_005e57a0(c); ABI_CHECK(0x5e57a0u, 0x554c85u); RETCHK(0x554c8au, 0x554c85u); LOADALL;
  /* 00554c8a mov dword ptr [edi + esi*4 + 4], eax */ { const u32 m_ = (u32)(edi + esi * 4u + 0x4u); M32(m_) = (u32)(eax); }
L_00554c8e:;
  /* 00554c8e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554c91:;
  /* 00554c91 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 00554c94 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554c95 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554c96 call 0x5b3a90 */ esp -= 4; M32(esp) = 0x554c9bu; SAVEALL; F_005b3a90(c); ABI_CHECK(0x5b3a90u, 0x554c96u); RETCHK(0x554c9bu, 0x554c96u); LOADALL;
  /* 00554c9b add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554c9e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554ca0 jne 0x554bef */ if (!ZF_) goto L_00554bef;
  /* 00554ca6 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554ca8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554ca9 call 0x5b3410 */ esp -= 4; M32(esp) = 0x554caeu; SAVEALL; F_005b3410(c); ABI_CHECK(0x5b3410u, 0x554ca9u); RETCHK(0x554caeu, 0x554ca9u); LOADALL;
  /* 00554cae mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 00554cb1 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554cb4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554cb6 mov dword ptr [edi], 1 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x1u); }
  /* 00554cbc je 0x554ccc */ if (ZF_) goto L_00554ccc;
  /* 00554cbe mov eax, dword ptr [edi + 0x1c] */ { const u32 m_ = (u32)(edi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00554cc1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554cc3 je 0x554ccc */ if (ZF_) goto L_00554ccc;
  /* 00554cc5 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00554cc8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554cca jne 0x554cda */ if (!ZF_) goto L_00554cda;
L_00554ccc:;
  /* 00554ccc mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
  /* 00554cd2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554cd3 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00554cd5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554cd6 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554cd8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554cd9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00554cda:;
  /* 00554cda pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00554cdb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00554cdd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00554cde mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00554ce0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00554ce1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00554cf0(CPU *c) {
  NATIVE_HOOK(0x554cf0u) REGS; LOADALL;
L_00554cf0:;
  /* 00554cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00554cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00554cf3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00554cf5 push 0x61fea0 */ { u32 v_ = 0x61fea0u; esp -= 4; M32(esp) = v_; }
  /* 00554cfa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00554d00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554d01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00554d08 sub esp, 0x328 */ { u32 a_ = esp, b_ = 0x328u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554d0e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00554d13 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00554d16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554d17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554d18 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00554d1a mov byte ptr [ebp - 0xb0], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff50u); M8(m_) = (u8)(0x0u); }
  /* 00554d21 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 00554d26 lea edi, [ebp - 0xaf] */ edi = (u32)((u32)(ebp + 0xffffff51u));
  /* 00554d2c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00554d2e stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00554d30 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00554d31 lea eax, [esi + 0xe8] */ eax = (u32)((u32)(esi + 0xe8u));
  /* 00554d37 call 0x5548c0 */ esp -= 4; M32(esp) = 0x554d3cu; SAVEALL; F_005548c0(c); ABI_CHECK(0x5548c0u, 0x554d37u); RETCHK(0x554d3cu, 0x554d37u); LOADALL;
  /* 00554d3c mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554d3f mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00554d42 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00554d45 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554d46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554d47 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554d48 push 0x655d54 */ { u32 v_ = 0x655d54u; esp -= 4; M32(esp) = v_; }
  /* 00554d4d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554d4e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554d51 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554d52 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554d53 lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00554d59 push 0x655d3c */ { u32 v_ = 0x655d3cu; esp -= 4; M32(esp) = v_; }
  /* 00554d5e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554d5f call 0x5fe9aa */ esp -= 4; M32(esp) = 0x554d64u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x554d5fu); RETCHK(0x554d64u, 0x554d5fu); LOADALL;
  /* 00554d64 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00554d67 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554d6a mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00554d6d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554d6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554d6f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554d70 push 0x655d54 */ { u32 v_ = 0x655d54u; esp -= 4; M32(esp) = v_; }
  /* 00554d75 lea edx, [ebp - 0xb0] */ edx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00554d7b push 0x655d2c */ { u32 v_ = 0x655d2cu; esp -= 4; M32(esp) = v_; }
  /* 00554d80 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554d81 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x554d86u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x554d81u); RETCHK(0x554d86u, 0x554d81u); LOADALL;
  /* 00554d86 lea eax, [ebp - 0x230] */ eax = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00554d8c lea ebx, [esi + 0xec] */ ebx = (u32)((u32)(esi + 0xecu));
  /* 00554d92 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554d93 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00554d95 call 0x554a90 */ esp -= 4; M32(esp) = 0x554d9au; SAVEALL; F_00554a90(c); ABI_CHECK(0x554a90u, 0x554d95u); RETCHK(0x554d9au, 0x554d95u); LOADALL;
  /* 00554d9a add esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554d9d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554d9f jne 0x554dac */ if (!ZF_) goto L_00554dac;
  /* 00554da1 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 00554da7 jmp 0x554e6b */ goto L_00554e6b;
L_00554dac:;
  /* 00554dac lea ecx, [ebp - 0x230] */ ecx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00554db2 push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 00554db7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554db8 mov dword ptr [ebp - 0x334], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffcccu); M32(m_) = (u32)(0x0u); }
  /* 00554dc2 call 0x5fea9a */ esp -= 4; M32(esp) = 0x554dc7u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x554dc2u); RETCHK(0x554dc7u, 0x554dc2u); LOADALL;
  /* 00554dc7 mov edi, eax */ { edi = (u32)(eax); }
  /* 00554dc9 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554dcc test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554dce je 0x554def */ if (ZF_) goto L_00554def;
  /* 00554dd0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554dd2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554dd4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554dd5 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x554ddau; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x554dd5u); RETCHK(0x554ddau, 0x554dd5u); LOADALL;
  /* 00554dda push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00554ddc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554dde push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554ddf call 0x5feaa0 */ esp -= 4; M32(esp) = 0x554de4u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x554ddfu); RETCHK(0x554de4u, 0x554ddfu); LOADALL;
  /* 00554de4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554de5 call 0x5feaa6 */ esp -= 4; M32(esp) = 0x554deau; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x554de5u); RETCHK(0x554deau, 0x554de5u); LOADALL;
  /* 00554dea add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554ded jmp 0x554df5 */ goto L_00554df5;
L_00554def:;
  /* 00554def mov eax, dword ptr [ebp - 0x334] */ { const u32 m_ = (u32)(ebp + 0xfffffcccu); eax = (u32)(M32(m_)); }
L_00554df5:;
  /* 00554df5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00554df7 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 00554dfe mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
  /* 00554e01 mov byte ptr [ebp - 0x2c], cl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00554e04 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00554e07 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00554e0a lea eax, [ebp - 0xb0] */ eax = (u32)((u32)(ebp + 0xffffff50u));
  /* 00554e10 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00554e13:;
  /* 00554e13 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00554e15 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00554e16 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554e18 jne 0x554e13 */ if (!ZF_) goto L_00554e13;
  /* 00554e1a sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00554e1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554e1d lea edx, [ebp - 0xb0] */ edx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00554e23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554e24 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00554e27 call 0x404420 */ esp -= 4; M32(esp) = 0x554e2cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x554e27u); RETCHK(0x554e2cu, 0x554e27u); LOADALL;
  /* 00554e2c call 0x41b490 */ esp -= 4; M32(esp) = 0x554e31u; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x554e2cu); RETCHK(0x554e31u, 0x554e2cu); LOADALL;
  /* 00554e31 lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00554e34 call 0x41b7b0 */ esp -= 4; M32(esp) = 0x554e39u; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x554e34u); RETCHK(0x554e39u, 0x554e34u); LOADALL;
  /* 00554e39 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554e3b jne 0x554e52 */ if (!ZF_) goto L_00554e52;
  /* 00554e3d mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00554e3f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554e41 je 0x554e52 */ if (ZF_) goto L_00554e52;
  /* 00554e43 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554e44 call 0x5784d0 */ esp -= 4; M32(esp) = 0x554e49u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x554e44u); RETCHK(0x554e49u, 0x554e44u); LOADALL;
  /* 00554e49 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554e4c mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_00554e52:;
  /* 00554e52 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00554e59 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554e5d jb 0x554e6b */ if (CF_) goto L_00554e6b;
  /* 00554e5f mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00554e62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554e63 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554e68u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x554e63u); RETCHK(0x554e68u, 0x554e63u); LOADALL;
  /* 00554e68 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554e6b:;
  /* 00554e6b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00554e6d mov byte ptr [ebp - 0x130], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffed0u); M8(m_) = (u8)(0x0u); }
  /* 00554e74 mov ecx, 0x1f */ { ecx = (u32)(0x1fu); }
  /* 00554e79 lea edi, [ebp - 0x12f] */ edi = (u32)((u32)(ebp + 0xfffffed1u));
  /* 00554e7f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00554e81 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00554e84 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 00554e86 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 00554e87 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554e8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554e8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554e8c push 0x655d54 */ { u32 v_ = 0x655d54u; esp -= 4; M32(esp) = v_; }
  /* 00554e91 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554e92 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554e93 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00554e96 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554e97 lea edx, [ebp - 0x330] */ edx = (u32)((u32)(ebp + 0xfffffcd0u));
  /* 00554e9d push 0x655d14 */ { u32 v_ = 0x655d14u; esp -= 4; M32(esp) = v_; }
  /* 00554ea2 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554ea3 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x554ea8u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x554ea3u); RETCHK(0x554ea8u, 0x554ea3u); LOADALL;
  /* 00554ea8 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554eab mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00554eae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554eaf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554eb0 push 0x655d54 */ { u32 v_ = 0x655d54u; esp -= 4; M32(esp) = v_; }
  /* 00554eb5 lea edx, [ebp - 0x130] */ edx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00554ebb push 0x655d04 */ { u32 v_ = 0x655d04u; esp -= 4; M32(esp) = v_; }
  /* 00554ec0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554ec1 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x554ec6u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x554ec1u); RETCHK(0x554ec6u, 0x554ec1u); LOADALL;
  /* 00554ec6 lea eax, [ebp - 0x330] */ eax = (u32)((u32)(ebp + 0xfffffcd0u));
  /* 00554ecc lea ebx, [esi + 0xf0] */ ebx = (u32)((u32)(esi + 0xf0u));
  /* 00554ed2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554ed3 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 00554ed5 call 0x554a90 */ esp -= 4; M32(esp) = 0x554edau; SAVEALL; F_00554a90(c); ABI_CHECK(0x554a90u, 0x554ed5u); RETCHK(0x554edau, 0x554ed5u); LOADALL;
  /* 00554eda add esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554edd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554edf jne 0x554eec */ if (!ZF_) goto L_00554eec;
  /* 00554ee1 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
  /* 00554ee7 jmp 0x554fca */ goto L_00554fca;
L_00554eec:;
  /* 00554eec lea ecx, [ebp - 0x330] */ ecx = (u32)((u32)(ebp + 0xfffffcd0u));
  /* 00554ef2 push 0x64f1d8 */ { u32 v_ = 0x64f1d8u; esp -= 4; M32(esp) = v_; }
  /* 00554ef7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554ef8 mov dword ptr [ebp - 0x334], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffcccu); M32(m_) = (u32)(0x0u); }
  /* 00554f02 call 0x5fea9a */ esp -= 4; M32(esp) = 0x554f07u; SAVEALL; F_005fea9a(c); ABI_CHECK(0x5fea9au, 0x554f02u); RETCHK(0x554f07u, 0x554f02u); LOADALL;
  /* 00554f07 mov edi, eax */ { edi = (u32)(eax); }
  /* 00554f09 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554f0c test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554f0e je 0x554f2f */ if (ZF_) goto L_00554f2f;
  /* 00554f10 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554f12 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554f14 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554f15 call 0x5feaa0 */ esp -= 4; M32(esp) = 0x554f1au; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x554f15u); RETCHK(0x554f1au, 0x554f15u); LOADALL;
  /* 00554f1a push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00554f1c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00554f1e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554f1f call 0x5feaa0 */ esp -= 4; M32(esp) = 0x554f24u; SAVEALL; F_005feaa0(c); ABI_CHECK(0x5feaa0u, 0x554f1fu); RETCHK(0x554f24u, 0x554f1fu); LOADALL;
  /* 00554f24 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00554f25 call 0x5feaa6 */ esp -= 4; M32(esp) = 0x554f2au; SAVEALL; F_005feaa6(c); ABI_CHECK(0x5feaa6u, 0x554f25u); RETCHK(0x554f2au, 0x554f25u); LOADALL;
  /* 00554f2a add esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554f2d jmp 0x554f35 */ goto L_00554f35;
L_00554f2f:;
  /* 00554f2f mov eax, dword ptr [ebp - 0x334] */ { const u32 m_ = (u32)(ebp + 0xfffffcccu); eax = (u32)(M32(m_)); }
L_00554f35:;
  /* 00554f35 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 00554f3c mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 00554f43 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 00554f47 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00554f4e mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00554f51 lea eax, [ebp - 0x130] */ eax = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00554f57 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00554f5a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00554f60:;
  /* 00554f60 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00554f62 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00554f63 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554f65 jne 0x554f60 */ if (!ZF_) goto L_00554f60;
  /* 00554f67 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00554f69 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554f6a lea edx, [ebp - 0x130] */ edx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00554f70 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554f71 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00554f74 call 0x404420 */ esp -= 4; M32(esp) = 0x554f79u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x554f74u); RETCHK(0x554f79u, 0x554f74u); LOADALL;
  /* 00554f79 call 0x41b490 */ esp -= 4; M32(esp) = 0x554f7eu; SAVEALL; F_0041b490(c); ABI_CHECK(0x41b490u, 0x554f79u); RETCHK(0x554f7eu, 0x554f79u); LOADALL;
  /* 00554f7e lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00554f81 call 0x41b7b0 */ esp -= 4; M32(esp) = 0x554f86u; SAVEALL; F_0041b7b0(c); ABI_CHECK(0x41b7b0u, 0x554f81u); RETCHK(0x554f86u, 0x554f81u); LOADALL;
  /* 00554f86 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00554f88 jne 0x554f9f */ if (!ZF_) goto L_00554f9f;
  /* 00554f8a mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00554f8c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00554f8e je 0x554f9f */ if (ZF_) goto L_00554f9f;
  /* 00554f90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554f91 call 0x5784d0 */ esp -= 4; M32(esp) = 0x554f96u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x554f91u); RETCHK(0x554f96u, 0x554f91u); LOADALL;
  /* 00554f96 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00554f99 mov dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x0u); }
L_00554f9f:;
  /* 00554f9f mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00554fa6 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00554faa jb 0x554fb8 */ if (CF_) goto L_00554fb8;
  /* 00554fac mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00554faf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554fb0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x554fb5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x554fb0u); RETCHK(0x554fb5u, 0x554fb0u); LOADALL;
  /* 00554fb5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00554fb8:;
  /* 00554fb8 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 00554fbf mov dword ptr [ebp - 0x1c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(0x0u); }
  /* 00554fc6 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
L_00554fca:;
  /* 00554fca mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00554fcd mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 00554fd0 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00554fd3 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00554fd6 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00554fd7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554fd8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554fd9 push 0x655d00 */ { u32 v_ = 0x655d00u; esp -= 4; M32(esp) = v_; }
  /* 00554fde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554fdf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00554fe0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00554fe1 lea eax, [ebp - 0x230] */ eax = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00554fe7 push 0x655d3c */ { u32 v_ = 0x655d3cu; esp -= 4; M32(esp) = v_; }
  /* 00554fec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00554fed call 0x5fe9aa */ esp -= 4; M32(esp) = 0x554ff2u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x554fedu); RETCHK(0x554ff2u, 0x554fedu); LOADALL;
  /* 00554ff2 push 0x28 */ { u32 v_ = 0x28u; esp -= 4; M32(esp) = v_; }
  /* 00554ff4 call 0x5fe934 */ esp -= 4; M32(esp) = 0x554ff9u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x554ff4u); RETCHK(0x554ff9u, 0x554ff4u); LOADALL;
  /* 00554ff9 mov dword ptr [esi + 0xf4], eax */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(eax); }
  /* 00554fff xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00555001 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00555003 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00555006 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00555009 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0055500c mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0055500f mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00555012 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00555015 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00555018 mov dword ptr [eax + 0x20], ecx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0055501b lea edx, [ebp - 0x230] */ edx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00555021 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00555024 mov edi, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); edi = (u32)(M32(m_)); }
  /* 0055502a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055502b call 0x554ba0 */ esp -= 4; M32(esp) = 0x555030u; SAVEALL; F_00554ba0(c); ABI_CHECK(0x554ba0u, 0x55502bu); RETCHK(0x555030u, 0x55502bu); LOADALL;
  /* 00555030 add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555033 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00555035 jne 0x555054 */ if (!ZF_) goto L_00555054;
  /* 00555037 mov eax, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); eax = (u32)(M32(m_)); }
  /* 0055503d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055503e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x555043u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55503eu); RETCHK(0x555043u, 0x55503eu); LOADALL;
  /* 00555043 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555046 mov dword ptr [esi + 0xf4], 0 */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(0x0u); }
  /* 00555050 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00555052 jmp 0x5550cd */ goto L_005550cd;
L_00555054:;
  /* 00555054 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00555057 mov edx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); edx = (u32)(M32(m_)); }
  /* 0055505a mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055505d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055505e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055505f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555060 push 0x655cfc */ { u32 v_ = 0x655cfcu; esp -= 4; M32(esp) = v_; }
  /* 00555065 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555066 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555067 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00555068 lea eax, [ebp - 0x230] */ eax = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 0055506e push 0x655d3c */ { u32 v_ = 0x655d3cu; esp -= 4; M32(esp) = v_; }
  /* 00555073 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555074 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x555079u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x555074u); RETCHK(0x555079u, 0x555074u); LOADALL;
  /* 00555079 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 0055507b call 0x5fe934 */ esp -= 4; M32(esp) = 0x555080u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x55507bu); RETCHK(0x555080u, 0x55507bu); LOADALL;
  /* 00555080 mov dword ptr [esi + 0xf8], eax */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(eax); }
  /* 00555086 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00555088 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0055508a mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0055508d mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00555090 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00555093 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00555096 lea edx, [ebp - 0x230] */ edx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 0055509c mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0055509f mov edi, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); edi = (u32)(M32(m_)); }
  /* 005550a5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005550a6 call 0x554af0 */ esp -= 4; M32(esp) = 0x5550abu; SAVEALL; F_00554af0(c); ABI_CHECK(0x554af0u, 0x5550a6u); RETCHK(0x5550abu, 0x5550a6u); LOADALL;
  /* 005550ab add esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005550ae test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005550b0 jne 0x5550cb */ if (!ZF_) goto L_005550cb;
  /* 005550b2 mov eax, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); eax = (u32)(M32(m_)); }
  /* 005550b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005550b9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5550beu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5550b9u); RETCHK(0x5550beu, 0x5550b9u); LOADALL;
  /* 005550be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005550c1 mov dword ptr [esi + 0xf8], 0 */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(0x0u); }
L_005550cb:;
  /* 005550cb mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
L_005550cd:;
  /* 005550cd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005550d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005550d1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005550d8 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 005550db pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005550dc call 0x61af31 */ esp -= 4; M32(esp) = 0x5550e1u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x5550dcu); RETCHK(0x5550e1u, 0x5550dcu); LOADALL;
  /* 005550e1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005550e3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005550e4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005550f0(CPU *c) {
  NATIVE_HOOK(0x5550f0u) REGS; LOADALL;
L_005550f0:;
  /* 005550f0 mov eax, dword ptr [esi + 0xec] */ { const u32 m_ = (u32)(esi + 0xecu); eax = (u32)(M32(m_)); }
  /* 005550f6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005550f7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005550f9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005550fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005550fc je 0x55510d */ if (ZF_) goto L_0055510d;
  /* 005550fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005550ff call 0x5784d0 */ esp -= 4; M32(esp) = 0x555104u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x5550ffu); RETCHK(0x555104u, 0x5550ffu); LOADALL;
  /* 00555104 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555107 mov dword ptr [esi + 0xec], ebx */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(ebx); }
L_0055510d:;
  /* 0055510d mov eax, dword ptr [esi + 0xf0] */ { const u32 m_ = (u32)(esi + 0xf0u); eax = (u32)(M32(m_)); }
  /* 00555113 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555115 je 0x555126 */ if (ZF_) goto L_00555126;
  /* 00555117 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555118 call 0x5784d0 */ esp -= 4; M32(esp) = 0x55511du; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x555118u); RETCHK(0x55511du, 0x555118u); LOADALL;
  /* 0055511d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555120 mov dword ptr [esi + 0xf0], ebx */ { const u32 m_ = (u32)(esi + 0xf0u); M32(m_) = (u32)(ebx); }
L_00555126:;
  /* 00555126 mov eax, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); eax = (u32)(M32(m_)); }
  /* 0055512c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055512e je 0x5551c4 */ if (ZF_) goto L_005551c4;
  /* 00555134 mov eax, dword ptr [eax + 0x24] */ { const u32 m_ = (u32)(eax + 0x24u); eax = (u32)(M32(m_)); }
  /* 00555137 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555139 je 0x555144 */ if (ZF_) goto L_00555144;
  /* 0055513b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055513c call 0x5784d0 */ esp -= 4; M32(esp) = 0x555141u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x55513cu); RETCHK(0x555141u, 0x55513cu); LOADALL;
  /* 00555141 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555144:;
  /* 00555144 mov eax, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); eax = (u32)(M32(m_)); }
  /* 0055514a mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 0055514d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055514f je 0x55515a */ if (ZF_) goto L_0055515a;
  /* 00555151 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555152 call 0x5784d0 */ esp -= 4; M32(esp) = 0x555157u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x555152u); RETCHK(0x555157u, 0x555152u); LOADALL;
  /* 00555157 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055515a:;
  /* 0055515a mov ecx, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); ecx = (u32)(M32(m_)); }
  /* 00555160 mov eax, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00555163 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555165 je 0x555170 */ if (ZF_) goto L_00555170;
  /* 00555167 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555168 call 0x5784d0 */ esp -= 4; M32(esp) = 0x55516du; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x555168u); RETCHK(0x55516du, 0x555168u); LOADALL;
  /* 0055516d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555170:;
  /* 00555170 mov edx, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); edx = (u32)(M32(m_)); }
  /* 00555176 mov eax, dword ptr [edx + 0x20] */ { const u32 m_ = (u32)(edx + 0x20u); eax = (u32)(M32(m_)); }
  /* 00555179 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055517b je 0x555186 */ if (ZF_) goto L_00555186;
  /* 0055517d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055517e call 0x5784d0 */ esp -= 4; M32(esp) = 0x555183u; SAVEALL; F_005784d0(c); ABI_CHECK(0x5784d0u, 0x55517eu); RETCHK(0x555183u, 0x55517eu); LOADALL;
  /* 00555183 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555186:;
  /* 00555186 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00555188 jmp 0x555190 */ goto L_00555190;
L_00555190:;
  /* 00555190 mov eax, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); eax = (u32)(M32(m_)); }
  /* 00555196 mov eax, dword ptr [edi + eax + 4] */ { const u32 m_ = (u32)(edi + eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055519a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055519c je 0x5551a7 */ if (ZF_) goto L_005551a7;
  /* 0055519e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055519f call 0x5e6960 */ esp -= 4; M32(esp) = 0x5551a4u; SAVEALL; F_005e6960(c); ABI_CHECK(0x5e6960u, 0x55519fu); RETCHK(0x5551a4u, 0x55519fu); LOADALL;
  /* 005551a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005551a7:;
  /* 005551a7 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005551aa cmp edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005551ad jl 0x555190 */ if (LT_) goto L_00555190;
  /* 005551af mov ecx, dword ptr [esi + 0xf4] */ { const u32 m_ = (u32)(esi + 0xf4u); ecx = (u32)(M32(m_)); }
  /* 005551b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005551b6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5551bbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5551b6u); RETCHK(0x5551bbu, 0x5551b6u); LOADALL;
  /* 005551bb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005551be mov dword ptr [esi + 0xf4], ebx */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(ebx); }
L_005551c4:;
  /* 005551c4 cmp dword ptr [esi + 0xf8], ebx */ { const u32 m_ = (u32)(esi + 0xf8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005551ca je 0x555204 */ if (ZF_) goto L_00555204;
  /* 005551cc xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005551ce mov edi, edi */ { edi = (u32)(edi); }
L_005551d0:;
  /* 005551d0 mov edx, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); edx = (u32)(M32(m_)); }
  /* 005551d6 mov eax, dword ptr [edi + edx + 4] */ { const u32 m_ = (u32)(edi + edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 005551da cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005551dc je 0x5551e7 */ if (ZF_) goto L_005551e7;
  /* 005551de push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005551df call 0x5e6960 */ esp -= 4; M32(esp) = 0x5551e4u; SAVEALL; F_005e6960(c); ABI_CHECK(0x5e6960u, 0x5551dfu); RETCHK(0x5551e4u, 0x5551dfu); LOADALL;
  /* 005551e4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005551e7:;
  /* 005551e7 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 005551ea cmp edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005551ed jl 0x5551d0 */ if (LT_) goto L_005551d0;
  /* 005551ef mov eax, dword ptr [esi + 0xf8] */ { const u32 m_ = (u32)(esi + 0xf8u); eax = (u32)(M32(m_)); }
  /* 005551f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005551f6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5551fbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5551f6u); RETCHK(0x5551fbu, 0x5551f6u); LOADALL;
  /* 005551fb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005551fe mov dword ptr [esi + 0xf8], ebx */ { const u32 m_ = (u32)(esi + 0xf8u); M32(m_) = (u32)(ebx); }
L_00555204:;
  /* 00555204 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00555205 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00555207 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555208 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555210(CPU *c) {
  NATIVE_HOOK(0x555210u) REGS; LOADALL;
L_00555210:;
  /* 00555210 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00555211 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00555213 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555216 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00555219 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055521b cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055521d je 0x5553b9 */ if (ZF_) goto L_005553b9;
  /* 00555223 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555225 je 0x5553b9 */ if (ZF_) goto L_005553b9;
  /* 0055522b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055522c mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0055522f mov dword ptr [ebp - 0x1c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(eax); }
  /* 00555232 mov dword ptr [ebp - 0x18], 0x7f7fffff */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0x7f7fffffu); }
  /* 00555239 mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0055523c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055523d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00555240:;
  /* 00555240 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00555243 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00555246 mov edi, dword ptr [eax + ecx*4] */ { const u32 m_ = (u32)(eax + ecx * 4u); edi = (u32)(M32(m_)); }
  /* 00555249 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055524b je 0x5553a4 */ if (ZF_) goto L_005553a4;
  /* 00555251 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00555252 call 0x5e5880 */ esp -= 4; M32(esp) = 0x555257u; SAVEALL; F_005e5880(c); ABI_CHECK(0x5e5880u, 0x555252u); RETCHK(0x555257u, 0x555252u); LOADALL;
  /* 00555257 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00555259 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055525c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055525e mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00555261 mov dword ptr [ebp - 4], 0x7f7fffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x7f7fffffu); }
  /* 00555268 mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0055526f mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 00555272 jle 0x5552c7 */ if ((ZF_|LT_)) goto L_005552c7;
L_00555274:;
  /* 00555274 lea edx, [ebp - 0x2c] */ edx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00555277 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00555278 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00555279 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055527a call 0x5e58d0 */ esp -= 4; M32(esp) = 0x55527fu; SAVEALL; F_005e58d0(c); ABI_CHECK(0x5e58d0u, 0x55527au); RETCHK(0x55527fu, 0x55527au); LOADALL;
  /* 0055527f fld dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); FPUSH((double)MF32(m_)); }
  /* 00555282 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00555284 lea eax, [ebp - 0x2c] */ eax = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00555287 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555288 fstp dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055528b fld dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); FPUSH((double)MF32(m_)); }
  /* 0055528e fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00555291 fstp dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00555294 fld dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); FPUSH((double)MF32(m_)); }
  /* 00555297 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0055529a fstp dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055529d call 0x5aa970 */ esp -= 4; M32(esp) = 0x5552a2u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x55529du); RETCHK(0x5552a2u, 0x55529du); LOADALL;
  /* 005552a2 fcom dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 005552a5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005552a8 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 005552aa test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005552ad jp 0x5552ba */ if (PF_) goto L_005552ba;
  /* 005552af fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005552b2 fild dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); FPUSH((double)(s32)M32(m_)); }
  /* 005552b5 fstp dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005552b8 jmp 0x5552bc */ goto L_005552bc;
L_005552ba:;
  /* 005552ba fstp st(0) */ ST(0) = ST(0); FPOP();
L_005552bc:;
  /* 005552bc mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 005552bf inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005552c0 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005552c2 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 005552c5 jl 0x555274 */ if (LT_) goto L_00555274;
L_005552c7:;
  /* 005552c7 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 005552ca fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 005552d0 fst dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); }
  /* 005552d3 fmul dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005552d6 fst dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); }
  /* 005552d9 fsub dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 005552dc fadd dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 005552e2 fld qword ptr [0x656ec0] */ { const u32 m_ = (u32)(0x656ec0u); FPUSH(MF64(m_)); }
  /* 005552e8 call 0x5fee50 */ { double y_ = ST(0); FPOP(); ST(0) = m_fmod(ST(0), y_); }
  /* 005552ed mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 005552f0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 005552f2 fstp dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005552f5 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 005552f8 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 005552fb jmp 0x555300 */ goto L_00555300;
L_00555300:;
  /* 00555300 fild dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); FPUSH((double)(s32)M32(m_)); }
  /* 00555303 fmul dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00555306 fmul dword ptr [0x656dc8] */ { const u32 m_ = (u32)(0x656dc8u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0055530c fadd dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0055530f fld qword ptr [0x656ec0] */ { const u32 m_ = (u32)(0x656ec0u); FPUSH(MF64(m_)); }
  /* 00555315 call 0x5fee50 */ { double y_ = ST(0); FPOP(); ST(0) = m_fmod(ST(0), y_); }
  /* 0055531a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055531c fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055531f mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00555322 lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00555325 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00555326 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555327 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00555329 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055532a call 0x5e6000 */ esp -= 4; M32(esp) = 0x55532fu; SAVEALL; F_005e6000(c); ABI_CHECK(0x5e6000u, 0x55532au); RETCHK(0x55532fu, 0x55532au); LOADALL;
  /* 0055532f fld dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); FPUSH((double)MF32(m_)); }
  /* 00555332 fsub dword ptr [esi] */ { const u32 m_ = (u32)(esi); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00555334 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00555337 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555338 fstp dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055533b fld dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); FPUSH((double)MF32(m_)); }
  /* 0055533e fsub dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 00555341 fstp dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00555344 fld dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); FPUSH((double)MF32(m_)); }
  /* 00555347 fsub dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0055534a fstp dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0055534d call 0x5aa970 */ esp -= 4; M32(esp) = 0x555352u; SAVEALL; F_005aa970(c); ABI_CHECK(0x5aa970u, 0x55534du); RETCHK(0x555352u, 0x55534du); LOADALL;
  /* 00555352 fcom dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); }
  /* 00555355 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555358 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0055535a test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055535d jp 0x55536a */ if (PF_) goto L_0055536a;
  /* 0055535f mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 00555362 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00555365 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 00555368 jmp 0x55536c */ goto L_0055536c;
L_0055536a:;
  /* 0055536a fstp st(0) */ ST(0) = ST(0); FPOP();
L_0055536c:;
  /* 0055536c inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055536d cmp ebx, 0x32 */ { u32 a_ = ebx, b_ = 0x32u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555370 mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 00555373 jl 0x555300 */ if (LT_) goto L_00555300;
  /* 00555375 fld dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); FPUSH((double)MF32(m_)); }
  /* 00555378 fsub dword ptr [0x656ea4] */ { const u32 m_ = (u32)(0x656ea4u); ST(0) = FR(ST(0) - (double)MF32(m_)); }
  /* 0055537e fcomp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00555381 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00555383 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00555386 jne 0x555394 */ if (!ZF_) goto L_00555394;
  /* 00555388 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055538b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055538e mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00555391 mov dword ptr [ebp - 0x1c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ecx); }
L_00555394:;
  /* 00555394 mov eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); eax = (u32)(M32(m_)); }
  /* 00555397 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00555398 cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055539b mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0055539e jl 0x555240 */ if (LT_) goto L_00555240;
L_005553a4:;
  /* 005553a4 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005553a7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005553a9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005553aa pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005553ab je 0x5553b2 */ if (ZF_) goto L_005553b2;
  /* 005553ad mov edx, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); edx = (u32)(M32(m_)); }
  /* 005553b0 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
L_005553b2:;
  /* 005553b2 fld dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); FPUSH((double)MF32(m_)); }
  /* 005553b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005553b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005553b8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005553b9:;
  /* 005553b9 fld dword ptr [0x656d88] */ { const u32 m_ = (u32)(0x656d88u); FPUSH((double)MF32(m_)); }
  /* 005553bf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005553c1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005553c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005553d0(CPU *c) {
  NATIVE_HOOK(0x5553d0u) REGS; LOADALL;
L_005553d0:;
  /* 005553d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005553d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005553d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005553d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005553d5 mov esi, eax */ { esi = (u32)(eax); }
  /* 005553d7 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005553d9 jne 0x5553e2 */ if (!ZF_) goto L_005553e2;
L_005553db:;
  /* 005553db xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005553dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005553de mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005553e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005553e1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005553e2:;
  /* 005553e2 cmp byte ptr [esi], 0x39 */ { const u32 m_ = (u32)(esi); u32 a_ = M8(m_), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005553e5 jne 0x5553db */ if (!ZF_) goto L_005553db;
  /* 005553e7 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005553ea inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005553eb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005553ec xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 005553ee test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005553f0 je 0x555436 */ if (ZF_) goto L_00555436;
L_005553f2:;
  /* 005553f2 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005553f5 jge 0x555415 */ if (!LT_) goto L_00555415;
  /* 005553f7 movsx eax, al */ { eax = (u32)((u32)sxt((eax & 0xffu), 1) & 0xffffffffu); }
  /* 005553fa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005553fb call 0x5feb8a */ esp -= 4; M32(esp) = 0x555400u; SAVEALL; F_005feb8a(c); ABI_CHECK(0x5feb8au, 0x5553fbu); RETCHK(0x555400u, 0x5553fbu); LOADALL;
  /* 00555400 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555403 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00555405 je 0x555436 */ if (ZF_) goto L_00555436;
  /* 00555407 mov al, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055540a inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055540b inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055540c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055540e jne 0x5553f2 */ if (!ZF_) goto L_005553f2;
  /* 00555410 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555413 jl 0x555436 */ if (LT_) goto L_00555436;
L_00555415:;
  /* 00555415 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00555417 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055541a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055541b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055541c mov dword ptr [ebp - 4], 0x76742e */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x76742eu); }
  /* 00555423 call 0x5feb06 */ esp -= 4; M32(esp) = 0x555428u; SAVEALL; F_005feb06(c); ABI_CHECK(0x5feb06u, 0x555423u); RETCHK(0x555428u, 0x555423u); LOADALL;
  /* 00555428 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055542b neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 0055542d sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 0055542f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00555430 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00555431 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00555432 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00555434 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00555435 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555436:;
  /* 00555436 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00555437 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00555439 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055543a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055543c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055543d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555440(CPU *c) {
  NATIVE_HOOK(0x555440u) REGS; LOADALL;
L_00555440:;
  /* 00555440 movsx eax, ax */ { eax = (u32)((u32)sxt((eax & 0xffffu), 2) & 0xffffffffu); }
  /* 00555443 lea eax, [eax + eax*4] */ eax = (u32)((u32)(eax + eax * 4u));
  /* 00555446 mov eax, dword ptr [eax*4 + 0x9c588c] */ { const u32 m_ = (u32)(eax * 4u + 0x9c588cu); eax = (u32)(M32(m_)); }
  /* 0055544d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555450(CPU *c) {
  NATIVE_HOOK(0x555450u) REGS; LOADALL;
L_00555450:;
  /* 00555450 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555451 push 0x655dbc */ { u32 v_ = 0x655dbcu; esp -= 4; M32(esp) = v_; }
  /* 00555456 call dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55545cu; SAVEALL; call_ind(c, t_); RETCHK(0x55545cu, 0x555456u); LOADALL; }
  /* 0055545c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555460(CPU *c) {
  NATIVE_HOOK(0x555460u) REGS; LOADALL;
L_00555460:;
  /* 00555460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00555461 call 0x5554b0 */ esp -= 4; M32(esp) = 0x555466u; SAVEALL; F_005554b0(c); ABI_CHECK(0x5554b0u, 0x555461u); RETCHK(0x555466u, 0x555461u); LOADALL;
  /* 00555466 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00555468 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0055546a mov byte ptr [esi + 0xbc], al */ { const u32 m_ = (u32)(esi + 0xbcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00555470 mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 00555473 mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 00555476 mov dword ptr [esi + 0xc4], eax */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(eax); }
  /* 0055547c mov dword ptr [esi + 0xc8], eax */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(eax); }
  /* 00555482 mov dword ptr [esi + 0xcc], eax */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(eax); }
  /* 00555488 mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 0055548e mov dword ptr [esi + 0xd4], eax */ { const u32 m_ = (u32)(esi + 0xd4u); M32(m_) = (u32)(eax); }
  /* 00555494 mov byte ptr [esi + 0x88], al */ { const u32 m_ = (u32)(esi + 0x88u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0055549a mov dword ptr [esi + 0x20], 1 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x1u); }
  /* 005554a1 mov dword ptr [esi + 0x60], 0x64 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x64u); }
  /* 005554a8 mov eax, esi */ { eax = (u32)(esi); }
  /* 005554aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005554b0(CPU *c) {
  NATIVE_HOOK(0x5554b0u) REGS; LOADALL;
L_005554b0:;
  /* 005554b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005554b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005554b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005554b5 push 0x61c4b7 */ { u32 v_ = 0x61c4b7u; esp -= 4; M32(esp) = v_; }
  /* 005554ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005554c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005554c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005554c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005554c9 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005554cc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005554ce mov edx, 0xf */ { edx = (u32)(0xfu); }
  /* 005554d3 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 005554d6 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 005554d9 mov byte ptr [eax + 8], cl */ { const u32 m_ = (u32)(eax + 0x8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005554dc mov dword ptr [eax + 0x3c], edx */ { const u32 m_ = (u32)(eax + 0x3cu); M32(m_) = (u32)(edx); }
  /* 005554df mov dword ptr [eax + 0x38], ecx */ { const u32 m_ = (u32)(eax + 0x38u); M32(m_) = (u32)(ecx); }
  /* 005554e2 mov byte ptr [eax + 0x28], cl */ { const u32 m_ = (u32)(eax + 0x28u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005554e5 mov dword ptr [eax + 0x58], edx */ { const u32 m_ = (u32)(eax + 0x58u); M32(m_) = (u32)(edx); }
  /* 005554e8 mov dword ptr [eax + 0x54], ecx */ { const u32 m_ = (u32)(eax + 0x54u); M32(m_) = (u32)(ecx); }
  /* 005554eb mov byte ptr [eax + 0x44], cl */ { const u32 m_ = (u32)(eax + 0x44u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 005554ee mov dword ptr [eax + 0x90], ecx */ { const u32 m_ = (u32)(eax + 0x90u); M32(m_) = (u32)(ecx); }
  /* 005554f4 mov dword ptr [eax + 0x94], ecx */ { const u32 m_ = (u32)(eax + 0x94u); M32(m_) = (u32)(ecx); }
  /* 005554fa mov dword ptr [eax + 0x98], ecx */ { const u32 m_ = (u32)(eax + 0x98u); M32(m_) = (u32)(ecx); }
  /* 00555500 mov dword ptr [eax + 0xa0], ecx */ { const u32 m_ = (u32)(eax + 0xa0u); M32(m_) = (u32)(ecx); }
  /* 00555506 mov dword ptr [eax + 0xa4], ecx */ { const u32 m_ = (u32)(eax + 0xa4u); M32(m_) = (u32)(ecx); }
  /* 0055550c mov dword ptr [eax + 0xa8], ecx */ { const u32 m_ = (u32)(eax + 0xa8u); M32(m_) = (u32)(ecx); }
  /* 00555512 mov dword ptr [eax + 0xb0], ecx */ { const u32 m_ = (u32)(eax + 0xb0u); M32(m_) = (u32)(ecx); }
  /* 00555518 mov dword ptr [eax + 0xb4], ecx */ { const u32 m_ = (u32)(eax + 0xb4u); M32(m_) = (u32)(ecx); }
  /* 0055551e mov dword ptr [eax + 0xb8], ecx */ { const u32 m_ = (u32)(eax + 0xb8u); M32(m_) = (u32)(ecx); }
  /* 00555524 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00555527 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055552e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00555530 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00555531 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00555540(CPU *c) {
  NATIVE_HOOK(0x555540u) REGS; LOADALL;
L_00555540:;
  /* 00555540 mov eax, dword ptr [esi + 0xb0] */ { const u32 m_ = (u32)(esi + 0xb0u); eax = (u32)(M32(m_)); }
  /* 00555546 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00555547 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00555549 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055554b je 0x555556 */ if (ZF_) goto L_00555556;
  /* 0055554d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055554e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x555553u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55554eu); RETCHK(0x555553u, 0x55554eu); LOADALL;
  /* 00555553 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555556:;
  /* 00555556 mov dword ptr [esi + 0xb0], ebx */ { const u32 m_ = (u32)(esi + 0xb0u); M32(m_) = (u32)(ebx); }
  /* 0055555c mov dword ptr [esi + 0xb4], ebx */ { const u32 m_ = (u32)(esi + 0xb4u); M32(m_) = (u32)(ebx); }
  /* 00555562 mov dword ptr [esi + 0xb8], ebx */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(ebx); }
  /* 00555568 mov eax, dword ptr [esi + 0xa0] */ { const u32 m_ = (u32)(esi + 0xa0u); eax = (u32)(M32(m_)); }
  /* 0055556e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555570 je 0x55557b */ if (ZF_) goto L_0055557b;
  /* 00555572 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555573 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x555578u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x555573u); RETCHK(0x555578u, 0x555573u); LOADALL;
  /* 00555578 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055557b:;
  /* 0055557b mov dword ptr [esi + 0xa0], ebx */ { const u32 m_ = (u32)(esi + 0xa0u); M32(m_) = (u32)(ebx); }
  /* 00555581 mov dword ptr [esi + 0xa4], ebx */ { const u32 m_ = (u32)(esi + 0xa4u); M32(m_) = (u32)(ebx); }
  /* 00555587 mov dword ptr [esi + 0xa8], ebx */ { const u32 m_ = (u32)(esi + 0xa8u); M32(m_) = (u32)(ebx); }
  /* 0055558d mov eax, dword ptr [esi + 0x90] */ { const u32 m_ = (u32)(esi + 0x90u); eax = (u32)(M32(m_)); }
  /* 00555593 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555595 je 0x5555a0 */ if (ZF_) goto L_005555a0;
  /* 00555597 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555598 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55559du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x555598u); RETCHK(0x55559du, 0x555598u); LOADALL;
  /* 0055559d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005555a0:;
  /* 005555a0 mov dword ptr [esi + 0x90], ebx */ { const u32 m_ = (u32)(esi + 0x90u); M32(m_) = (u32)(ebx); }
  /* 005555a6 mov dword ptr [esi + 0x94], ebx */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(ebx); }
  /* 005555ac mov dword ptr [esi + 0x98], ebx */ { const u32 m_ = (u32)(esi + 0x98u); M32(m_) = (u32)(ebx); }
  /* 005555b2 cmp dword ptr [esi + 0x58], 0x10 */ { const u32 m_ = (u32)(esi + 0x58u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005555b6 jb 0x5555c4 */ if (CF_) goto L_005555c4;
  /* 005555b8 mov eax, dword ptr [esi + 0x44] */ { const u32 m_ = (u32)(esi + 0x44u); eax = (u32)(M32(m_)); }
  /* 005555bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005555bc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5555c1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5555bcu); RETCHK(0x5555c1u, 0x5555bcu); LOADALL;
  /* 005555c1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005555c4:;
  /* 005555c4 mov dword ptr [esi + 0x58], 0xf */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(0xfu); }
  /* 005555cb mov dword ptr [esi + 0x54], ebx */ { const u32 m_ = (u32)(esi + 0x54u); M32(m_) = (u32)(ebx); }
  /* 005555ce mov byte ptr [esi + 0x44], bl */ { const u32 m_ = (u32)(esi + 0x44u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005555d1 cmp dword ptr [esi + 0x3c], 0x10 */ { const u32 m_ = (u32)(esi + 0x3cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005555d5 jb 0x5555e3 */ if (CF_) goto L_005555e3;
  /* 005555d7 mov ecx, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); ecx = (u32)(M32(m_)); }
  /* 005555da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005555db call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5555e0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5555dbu); RETCHK(0x5555e0u, 0x5555dbu); LOADALL;
  /* 005555e0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005555e3:;
  /* 005555e3 mov dword ptr [esi + 0x3c], 0xf */ { const u32 m_ = (u32)(esi + 0x3cu); M32(m_) = (u32)(0xfu); }
  /* 005555ea mov dword ptr [esi + 0x38], ebx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ebx); }
  /* 005555ed mov byte ptr [esi + 0x28], bl */ { const u32 m_ = (u32)(esi + 0x28u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005555f0 cmp dword ptr [esi + 0x1c], 0x10 */ { const u32 m_ = (u32)(esi + 0x1cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005555f4 jb 0x555602 */ if (CF_) goto L_00555602;
  /* 005555f6 mov edx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edx = (u32)(M32(m_)); }
  /* 005555f9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005555fa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5555ffu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5555fau); RETCHK(0x5555ffu, 0x5555fau); LOADALL;
  /* 005555ff add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555602:;
  /* 00555602 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 00555605 mov dword ptr [esi + 0x1c], 0xf */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(0xfu); }
  /* 0055560c mov byte ptr [esi + 8], bl */ { const u32 m_ = (u32)(esi + 0x8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055560f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555610 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555620(CPU *c) {
  NATIVE_HOOK(0x555620u) REGS; LOADALL;
L_00555620:;
  /* 00555620 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00555621 call 0x5554b0 */ esp -= 4; M32(esp) = 0x555626u; SAVEALL; F_005554b0(c); ABI_CHECK(0x5554b0u, 0x555621u); RETCHK(0x555626u, 0x555621u); LOADALL;
  /* 00555626 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00555628 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0055562d mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0055562f mov byte ptr [esi + 0xbc], al */ { const u32 m_ = (u32)(esi + 0xbcu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00555635 mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 00555638 mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 0055563b mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 0055563e mov dword ptr [esi + 0xc0], eax */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(eax); }
  /* 00555644 mov byte ptr [esi + 0x14c], al */ { const u32 m_ = (u32)(esi + 0x14cu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0055564a mov dword ptr [esi + 0x150], eax */ { const u32 m_ = (u32)(esi + 0x150u); M32(m_) = (u32)(eax); }
  /* 00555650 mov dword ptr [esi + 0x154], eax */ { const u32 m_ = (u32)(esi + 0x154u); M32(m_) = (u32)(eax); }
  /* 00555656 mov dword ptr [esi + 0x158], eax */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(eax); }
  /* 0055565c mov dword ptr [esi + 0x15c], eax */ { const u32 m_ = (u32)(esi + 0x15cu); M32(m_) = (u32)(eax); }
  /* 00555662 mov byte ptr [esi + 0x160], al */ { const u32 m_ = (u32)(esi + 0x160u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00555668 mov dword ptr [esi + 0x164], eax */ { const u32 m_ = (u32)(esi + 0x164u); M32(m_) = (u32)(eax); }
  /* 0055566e mov byte ptr [esi + 0x88], al */ { const u32 m_ = (u32)(esi + 0x88u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00555674 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00555677 mov dword ptr [esi + 0x60], 0x64 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x64u); }
  /* 0055567e mov dword ptr [esi + 0xc4], ecx */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(ecx); }
  /* 00555684 mov dword ptr [esi + 0xc8], ecx */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(ecx); }
  /* 0055568a mov dword ptr [esi + 0xcc], ecx */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(ecx); }
  /* 00555690 mov eax, esi */ { eax = (u32)(esi); }
  /* 00555692 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005556a0(CPU *c) {
  NATIVE_HOOK(0x5556a0u) REGS; LOADALL;
L_005556a0:;
  /* 005556a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005556a1 call 0x5554b0 */ esp -= 4; M32(esp) = 0x5556a6u; SAVEALL; F_005554b0(c); ABI_CHECK(0x5554b0u, 0x5556a1u); RETCHK(0x5556a6u, 0x5556a1u); LOADALL;
  /* 005556a6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005556a8 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 005556aa mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 005556ad mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 005556b0 mov dword ptr [esi + 0x7c], eax */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(eax); }
  /* 005556b3 mov dword ptr [esi + 0xc0], eax */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(eax); }
  /* 005556b9 mov dword ptr [esi + 0xc4], eax */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(eax); }
  /* 005556bf mov byte ptr [esi + 0x88], al */ { const u32 m_ = (u32)(esi + 0x88u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005556c5 mov dword ptr [esi + 0xc8], eax */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(eax); }
  /* 005556cb mov dword ptr [esi + 0xcc], eax */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(eax); }
  /* 005556d1 mov dword ptr [esi + 0xd0], eax */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(eax); }
  /* 005556d7 mov dword ptr [esi + 0x20], 1 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x1u); }
  /* 005556de mov dword ptr [esi + 0x60], 0x64 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x64u); }
  /* 005556e5 mov eax, esi */ { eax = (u32)(esi); }
  /* 005556e7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005556f0(CPU *c) {
  NATIVE_HOOK(0x5556f0u) REGS; LOADALL;
L_005556f0:;
  /* 005556f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005556f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005556f3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005556f9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005556fb push 0x61d6b8 */ { u32 v_ = 0x61d6b8u; esp -= 4; M32(esp) = v_; }
  /* 00555700 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555701 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00555708 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00555709 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055570c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055570d call 0x5554b0 */ esp -= 4; M32(esp) = 0x555712u; SAVEALL; F_005554b0(c); ABI_CHECK(0x5554b0u, 0x55570du); RETCHK(0x555712u, 0x55570du); LOADALL;
  /* 00555712 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00555715 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00555717 mov dword ptr [esi + 0xc0], eax */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(eax); }
  /* 0055571d mov dword ptr [esi + 0xc4], eax */ { const u32 m_ = (u32)(esi + 0xc4u); M32(m_) = (u32)(eax); }
  /* 00555723 mov dword ptr [esi + 0xc8], eax */ { const u32 m_ = (u32)(esi + 0xc8u); M32(m_) = (u32)(eax); }
  /* 00555729 mov dword ptr [esi], eax */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(eax); }
  /* 0055572b mov dword ptr [esi + 0x64], eax */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(eax); }
  /* 0055572e mov dword ptr [esi + 0x5c], eax */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(eax); }
  /* 00555731 mov byte ptr [esi + 0x88], al */ { const u32 m_ = (u32)(esi + 0x88u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00555737 mov dword ptr [esi + 0x20], 1 */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(0x1u); }
  /* 0055573e mov dword ptr [esi + 0x60], 0x64 */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(0x64u); }
  /* 00555745 mov dword ptr [esi + 0x7c], 0xffffffff */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(0xffffffffu); }
  /* 0055574c mov eax, esi */ { eax = (u32)(esi); }
  /* 0055574e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00555755 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00555756 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00555758 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00555759 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00555760(CPU *c) {
  NATIVE_HOOK(0x555760u) REGS; LOADALL;
L_00555760:;
  /* 00555760 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00555761 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00555763 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555764 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00555766 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00555769 je 0x555776 */ if (ZF_) goto L_00555776;
  /* 0055576b cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055576e jne 0x555776 */ if (!ZF_) goto L_00555776;
  /* 00555770 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00555772 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00555774 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00555775 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555776:;
  /* 00555776 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00555778 jg 0x55577c */ if (!(ZF_|LT_)) goto L_0055577c;
  /* 0055577a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0055577c:;
  /* 0055577c fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 0055577f sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555781 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 00555784 fmul dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 0055578a fimul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 0055578d fmul dword ptr [0x656d94] */ { const u32 m_ = (u32)(0x656d94u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 00555793 fild dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); FPUSH((double)(s32)M32(m_)); }
  /* 00555796 fidiv dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ST(0) = FR(ST(0) / (double)(s32)M32(m_)); }
  /* 00555799 fmulp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) * s0_); FPOP(); }
  /* 0055579b call 0x61b154 */ esp -= 4; M32(esp) = 0x5557a0u; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x55579bu); RETCHK(0x5557a0u, 0x55579bu); LOADALL;
  /* 005557a0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005557a2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005557a3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005557b0(CPU *c) {
  NATIVE_HOOK(0x5557b0u) REGS; LOADALL;
L_005557b0:;
  /* 005557b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005557b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005557b3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005557b4 fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 005557b7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 005557ba mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 005557bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005557be fmul dword ptr [0x656d98] */ { const u32 m_ = (u32)(0x656d98u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005557c4 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 005557c7 fimul dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ST(0) = FR(ST(0) * (double)(s32)M32(m_)); }
  /* 005557ca push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005557cb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005557cc mov dl, 1 */ { edx = (edx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 005557ce fmul dword ptr [0x656db0] */ { const u32 m_ = (u32)(0x656db0u); ST(0) = FR(ST(0) * (double)MF32(m_)); }
  /* 005557d4 fstp dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 005557d7 call 0x555760 */ esp -= 4; M32(esp) = 0x5557dcu; SAVEALL; F_00555760(c); ABI_CHECK(0x555760u, 0x5557d7u); RETCHK(0x5557dcu, 0x5557d7u); LOADALL;
  /* 005557dc mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 005557df fild dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)(s32)M32(m_)); }
  /* 005557e2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005557e5 fsubr dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ST(0) = FR((double)MF32(m_) - ST(0)); }
  /* 005557e8 call 0x61b154 */ esp -= 4; M32(esp) = 0x5557edu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x5557e8u); RETCHK(0x5557edu, 0x5557e8u); LOADALL;
  /* 005557ed mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005557ef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005557f0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555800(CPU *c) {
  NATIVE_HOOK(0x555800u) REGS; LOADALL;
L_00555800:;
  /* 00555800 cmp edx, 0x4e20 */ { u32 a_ = edx, b_ = 0x4e20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555806 jl 0x555818 */ if (LT_) goto L_00555818;
  /* 00555808 cmp edx, 0x9c40 */ { u32 a_ = edx, b_ = 0x9c40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055580e jg 0x555818 */ if (!(ZF_|LT_)) goto L_00555818;
  /* 00555810 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555813 jmp 0x558430 */ goto L_00558430;
L_00555818:;
  /* 00555818 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055581a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558430:;
  /* 00558430 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00558433 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00558436 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558438 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00558439 je 0x55844d */ if (ZF_) goto L_0055844d;
  /* 0055843b jmp 0x558440 */ goto L_00558440;
L_00558440:;
  /* 00558440 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00558442 cmp dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558444 je 0x558451 */ if (ZF_) goto L_00558451;
  /* 00558446 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00558449 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055844b jne 0x558440 */ if (!ZF_) goto L_00558440;
L_0055844d:;
  /* 0055844d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055844f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558451:;
  /* 00558451 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00558453 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558454 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555820(CPU *c) {
  NATIVE_HOOK(0x555820u) REGS; LOADALL;
L_00555820:;
  /* 00555820 cmp edx, 0x2710 */ { u32 a_ = edx, b_ = 0x2710u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555826 jl 0x555838 */ if (LT_) goto L_00555838;
  /* 00555828 cmp edx, 0x4e1f */ { u32 a_ = edx, b_ = 0x4e1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055582e jg 0x555838 */ if (!(ZF_|LT_)) goto L_00555838;
  /* 00555830 add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555833 jmp 0x558430 */ goto L_00558430;
L_00555838:;
  /* 00555838 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055583a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558430:;
  /* 00558430 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00558433 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00558436 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558438 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00558439 je 0x55844d */ if (ZF_) goto L_0055844d;
  /* 0055843b jmp 0x558440 */ goto L_00558440;
L_00558440:;
  /* 00558440 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00558442 cmp dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558444 je 0x558451 */ if (ZF_) goto L_00558451;
  /* 00558446 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00558449 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055844b jne 0x558440 */ if (!ZF_) goto L_00558440;
L_0055844d:;
  /* 0055844d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055844f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558451:;
  /* 00558451 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00558453 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558454 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555840(CPU *c) {
  NATIVE_HOOK(0x555840u) REGS; LOADALL;
L_00555840:;
  /* 00555840 cmp edx, 0x1dcd6500 */ { u32 a_ = edx, b_ = 0x1dcd6500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555846 jl 0x555858 */ if (LT_) goto L_00555858;
  /* 00555848 cmp edx, 0x23c345ff */ { u32 a_ = edx, b_ = 0x23c345ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055584e jg 0x555858 */ if (!(ZF_|LT_)) goto L_00555858;
  /* 00555850 add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555853 jmp 0x558430 */ goto L_00558430;
L_00555858:;
  /* 00555858 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055585a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558430:;
  /* 00558430 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00558433 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00558436 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558438 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00558439 je 0x55844d */ if (ZF_) goto L_0055844d;
  /* 0055843b jmp 0x558440 */ goto L_00558440;
L_00558440:;
  /* 00558440 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00558442 cmp dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558444 je 0x558451 */ if (ZF_) goto L_00558451;
  /* 00558446 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00558449 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055844b jne 0x558440 */ if (!ZF_) goto L_00558440;
L_0055844d:;
  /* 0055844d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055844f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558451:;
  /* 00558451 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00558453 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558454 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555860(CPU *c) {
  NATIVE_HOOK(0x555860u) REGS; LOADALL;
L_00555860:;
  /* 00555860 cmp edx, 0x5f5e100 */ { u32 a_ = edx, b_ = 0x5f5e100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555866 jl 0x555870 */ if (LT_) goto L_00555870;
  /* 00555868 cmp edx, 0xbebc1ff */ { u32 a_ = edx, b_ = 0xbebc1ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055586e jle 0x555880 */ if ((ZF_|LT_)) goto L_00555880;
L_00555870:;
  /* 00555870 cmp edx, 0x17d78400 */ { u32 a_ = edx, b_ = 0x17d78400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555876 jl 0x555888 */ if (LT_) goto L_00555888;
  /* 00555878 cmp edx, 0x1dcd64ff */ { u32 a_ = edx, b_ = 0x1dcd64ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055587e jg 0x555888 */ if (!(ZF_|LT_)) goto L_00555888;
L_00555880:;
  /* 00555880 add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555883 jmp 0x558430 */ goto L_00558430;
L_00555888:;
  /* 00555888 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055588a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558430:;
  /* 00558430 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00558433 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00558436 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558438 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00558439 je 0x55844d */ if (ZF_) goto L_0055844d;
  /* 0055843b jmp 0x558440 */ goto L_00558440;
L_00558440:;
  /* 00558440 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00558442 cmp dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558444 je 0x558451 */ if (ZF_) goto L_00558451;
  /* 00558446 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00558449 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055844b jne 0x558440 */ if (!ZF_) goto L_00558440;
L_0055844d:;
  /* 0055844d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055844f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558451:;
  /* 00558451 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00558453 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558454 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555890(CPU *c) {
  NATIVE_HOOK(0x555890u) REGS; LOADALL;
L_00555890:;
  /* 00555890 cmp edx, 0xbebc200 */ { u32 a_ = edx, b_ = 0xbebc200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555896 jl 0x5558a8 */ if (LT_) goto L_005558a8;
  /* 00555898 cmp edx, 0x11e1a2ff */ { u32 a_ = edx, b_ = 0x11e1a2ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055589e jg 0x5558a8 */ if (!(ZF_|LT_)) goto L_005558a8;
  /* 005558a0 add ecx, 0x44 */ { u32 a_ = ecx, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005558a3 jmp 0x558430 */ goto L_00558430;
L_005558a8:;
  /* 005558a8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005558aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558430:;
  /* 00558430 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00558433 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00558436 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558438 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00558439 je 0x55844d */ if (ZF_) goto L_0055844d;
  /* 0055843b jmp 0x558440 */ goto L_00558440;
L_00558440:;
  /* 00558440 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00558442 cmp dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558444 je 0x558451 */ if (ZF_) goto L_00558451;
  /* 00558446 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00558449 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055844b jne 0x558440 */ if (!ZF_) goto L_00558440;
L_0055844d:;
  /* 0055844d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055844f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558451:;
  /* 00558451 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00558453 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558454 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005558b0(CPU *c) {
  NATIVE_HOOK(0x5558b0u) REGS; LOADALL;
L_005558b0:;
  /* 005558b0 cmp edx, 0x27b25a80 */ { u32 a_ = edx, b_ = 0x27b25a80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005558b6 jl 0x5558c8 */ if (LT_) goto L_005558c8;
  /* 005558b8 cmp edx, 0x27c19cbf */ { u32 a_ = edx, b_ = 0x27c19cbfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005558be jg 0x5558c8 */ if (!(ZF_|LT_)) goto L_005558c8;
  /* 005558c0 add ecx, 0x54 */ { u32 a_ = ecx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005558c3 jmp 0x558430 */ goto L_00558430;
L_005558c8:;
  /* 005558c8 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005558ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558430:;
  /* 00558430 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00558433 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00558436 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558438 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00558439 je 0x55844d */ if (ZF_) goto L_0055844d;
  /* 0055843b jmp 0x558440 */ goto L_00558440;
L_00558440:;
  /* 00558440 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00558442 cmp dword ptr [esi], edx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00558444 je 0x558451 */ if (ZF_) goto L_00558451;
  /* 00558446 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00558449 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055844b jne 0x558440 */ if (!ZF_) goto L_00558440;
L_0055844d:;
  /* 0055844d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055844f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558450 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00558451:;
  /* 00558451 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00558453 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00558454 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005558d0(CPU *c) {
  NATIVE_HOOK(0x5558d0u) REGS; LOADALL;
L_005558d0:;
  /* 005558d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005558d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005558d3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005558d6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005558d7 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005558d8 mov edi, edx */ { edi = (u32)(edx); }
  /* 005558da cmp edi, 0x4e20 */ { u32 a_ = edi, b_ = 0x4e20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005558e0 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 005558e7 mov dword ptr [ebp - 8], 0x64 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x64u); }
  /* 005558ee jl 0x55590c */ if (LT_) goto L_0055590c;
  /* 005558f0 cmp edi, 0x9c40 */ { u32 a_ = edi, b_ = 0x9c40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005558f6 jg 0x55590c */ if (!(ZF_|LT_)) goto L_0055590c;
  /* 005558f8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005558f9 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005558fc lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005558ff lea esi, [ebp - 4] */ esi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00555902 call 0x558460 */ esp -= 4; M32(esp) = 0x555907u; SAVEALL; F_00558460(c); ABI_CHECK(0x558460u, 0x555902u); RETCHK(0x555907u, 0x555902u); LOADALL;
  /* 00555907 jmp 0x5559c2 */ goto L_005559c2;
L_0055590c:;
  /* 0055590c cmp edi, 0x2710 */ { u32 a_ = edi, b_ = 0x2710u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555912 jl 0x555930 */ if (LT_) goto L_00555930;
  /* 00555914 cmp edi, 0x4e1f */ { u32 a_ = edi, b_ = 0x4e1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055591a jg 0x555930 */ if (!(ZF_|LT_)) goto L_00555930;
  /* 0055591c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055591d add ecx, 0x14 */ { u32 a_ = ecx, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555920 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00555923 lea esi, [ebp - 4] */ esi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00555926 call 0x558460 */ esp -= 4; M32(esp) = 0x55592bu; SAVEALL; F_00558460(c); ABI_CHECK(0x558460u, 0x555926u); RETCHK(0x55592bu, 0x555926u); LOADALL;
  /* 0055592b jmp 0x5559c2 */ goto L_005559c2;
L_00555930:;
  /* 00555930 cmp edi, 0x1dcd6500 */ { u32 a_ = edi, b_ = 0x1dcd6500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555936 jl 0x555951 */ if (LT_) goto L_00555951;
  /* 00555938 cmp edi, 0x23c345ff */ { u32 a_ = edi, b_ = 0x23c345ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055593e jg 0x555951 */ if (!(ZF_|LT_)) goto L_00555951;
  /* 00555940 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555941 add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555944 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00555947 lea esi, [ebp - 4] */ esi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055594a call 0x558460 */ esp -= 4; M32(esp) = 0x55594fu; SAVEALL; F_00558460(c); ABI_CHECK(0x558460u, 0x55594au); RETCHK(0x55594fu, 0x55594au); LOADALL;
  /* 0055594f jmp 0x5559c2 */ goto L_005559c2;
L_00555951:;
  /* 00555951 cmp edi, 0x5f5e100 */ { u32 a_ = edi, b_ = 0x5f5e100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555957 jl 0x555961 */ if (LT_) goto L_00555961;
  /* 00555959 cmp edi, 0xbebc1ff */ { u32 a_ = edi, b_ = 0xbebc1ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055595f jle 0x555971 */ if ((ZF_|LT_)) goto L_00555971;
L_00555961:;
  /* 00555961 cmp edi, 0x17d78400 */ { u32 a_ = edi, b_ = 0x17d78400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555967 jl 0x555982 */ if (LT_) goto L_00555982;
  /* 00555969 cmp edi, 0x1dcd64ff */ { u32 a_ = edi, b_ = 0x1dcd64ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055596f jg 0x555982 */ if (!(ZF_|LT_)) goto L_00555982;
L_00555971:;
  /* 00555971 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555972 add ecx, 0x34 */ { u32 a_ = ecx, b_ = 0x34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555975 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00555978 lea esi, [ebp - 4] */ esi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055597b call 0x558460 */ esp -= 4; M32(esp) = 0x555980u; SAVEALL; F_00558460(c); ABI_CHECK(0x558460u, 0x55597bu); RETCHK(0x555980u, 0x55597bu); LOADALL;
  /* 00555980 jmp 0x5559c2 */ goto L_005559c2;
L_00555982:;
  /* 00555982 cmp edi, 0xbebc200 */ { u32 a_ = edi, b_ = 0xbebc200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555988 jl 0x5559a3 */ if (LT_) goto L_005559a3;
  /* 0055598a cmp edi, 0x11e1a2ff */ { u32 a_ = edi, b_ = 0x11e1a2ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555990 jg 0x5559a3 */ if (!(ZF_|LT_)) goto L_005559a3;
  /* 00555992 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555993 add ecx, 0x44 */ { u32 a_ = ecx, b_ = 0x44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00555996 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00555999 lea esi, [ebp - 4] */ esi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055599c call 0x558460 */ esp -= 4; M32(esp) = 0x5559a1u; SAVEALL; F_00558460(c); ABI_CHECK(0x558460u, 0x55599cu); RETCHK(0x5559a1u, 0x55599cu); LOADALL;
  /* 005559a1 jmp 0x5559c2 */ goto L_005559c2;
L_005559a3:;
  /* 005559a3 cmp edi, 0x27b25a80 */ { u32 a_ = edi, b_ = 0x27b25a80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005559a9 jl 0x5559cd */ if (LT_) goto L_005559cd;
  /* 005559ab cmp edi, 0x27c19cbf */ { u32 a_ = edi, b_ = 0x27c19cbfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005559b1 jg 0x5559cd */ if (!(ZF_|LT_)) goto L_005559cd;
  /* 005559b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005559b4 add ecx, 0x54 */ { u32 a_ = ecx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 005559b7 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 005559ba lea esi, [ebp - 4] */ esi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005559bd call 0x558460 */ esp -= 4; M32(esp) = 0x5559c2u; SAVEALL; F_00558460(c); ABI_CHECK(0x558460u, 0x5559bdu); RETCHK(0x5559c2u, 0x5559bdu); LOADALL;
L_005559c2:;
  /* 005559c2 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 005559c5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005559c8 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005559cb jne 0x5559d6 */ if (!ZF_) goto L_005559d6;
L_005559cd:;
  /* 005559cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005559ce or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005559d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005559d2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005559d4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005559d5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_005559d6:;
  /* 005559d6 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 005559d9 imul ecx, eax */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)eax; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005559dc mov eax, 0x51eb851f */ { eax = (u32)(0x51eb851fu); }
  /* 005559e1 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 005559e3 sar edx, 5 */ { u32 n_ = (5u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 005559e6 mov eax, edx */ { eax = (u32)(edx); }
  /* 005559e8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005559eb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005559ec add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005559ee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005559ef mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005559f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005559f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555a00(CPU *c) {
  NATIVE_HOOK(0x555a00u) REGS; LOADALL;
L_00555a00:;
  /* 00555a00 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00555a02 call 0x555a60 */ esp -= 4; M32(esp) = 0x555a07u; SAVEALL; F_00555a60(c); ABI_CHECK(0x555a60u, 0x555a02u); RETCHK(0x555a07u, 0x555a02u); LOADALL;
  /* 00555a07 cmp eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a0a je 0x555a42 */ if (ZF_) goto L_00555a42;
  /* 00555a0c cmp eax, 5 */ { u32 a_ = eax, b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a0f ja 0x555a42 */ if (!(CF_|ZF_)) goto L_00555a42;
  /* 00555a11 jmp dword ptr [eax*4 + 0x555a48] */ { const u32 m_ = (u32)(eax * 4u + 0x555a48u); u32 t_ = M32(m_); switch (t_) { case 0x555a18u: goto L_00555a18; case 0x555a1fu: goto L_00555a1f; case 0x555a26u: goto L_00555a26; case 0x555a2du: goto L_00555a2d; case 0x555a34u: goto L_00555a34; case 0x555a3bu: goto L_00555a3b; default: SAVEALL; call_ind(c, t_); return; } }
L_00555a18:;
  /* 00555a18 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00555a1a jmp 0x555840 */ SAVEALL; F_00555840(c); return;
L_00555a1f:;
  /* 00555a1f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00555a21 jmp 0x555800 */ SAVEALL; F_00555800(c); return;
L_00555a26:;
  /* 00555a26 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00555a28 jmp 0x555890 */ SAVEALL; F_00555890(c); return;
L_00555a2d:;
  /* 00555a2d mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00555a2f jmp 0x555820 */ SAVEALL; F_00555820(c); return;
L_00555a34:;
  /* 00555a34 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00555a36 jmp 0x555860 */ SAVEALL; F_00555860(c); return;
L_00555a3b:;
  /* 00555a3b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00555a3d jmp 0x5558b0 */ SAVEALL; F_005558b0(c); return;
L_00555a42:;
  /* 00555a42 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00555a44 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555a60(CPU *c) {
  NATIVE_HOOK(0x555a60u) REGS; LOADALL;
L_00555a60:;
  /* 00555a60 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00555a63 cmp ecx, 0x4e20 */ { u32 a_ = ecx, b_ = 0x4e20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a69 jl 0x555a78 */ if (LT_) goto L_00555a78;
  /* 00555a6b cmp ecx, 0x9c40 */ { u32 a_ = ecx, b_ = 0x9c40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a71 jg 0x555a78 */ if (!(ZF_|LT_)) goto L_00555a78;
  /* 00555a73 mov eax, 1 */ { eax = (u32)(0x1u); }
L_00555a78:;
  /* 00555a78 cmp ecx, 0x2710 */ { u32 a_ = ecx, b_ = 0x2710u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a7e jl 0x555a8d */ if (LT_) goto L_00555a8d;
  /* 00555a80 cmp ecx, 0x4e1f */ { u32 a_ = ecx, b_ = 0x4e1fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a86 jg 0x555a8d */ if (!(ZF_|LT_)) goto L_00555a8d;
  /* 00555a88 mov eax, 3 */ { eax = (u32)(0x3u); }
L_00555a8d:;
  /* 00555a8d cmp ecx, 0x1dcd6500 */ { u32 a_ = ecx, b_ = 0x1dcd6500u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a93 jl 0x555a9f */ if (LT_) goto L_00555a9f;
  /* 00555a95 cmp ecx, 0x23c345ff */ { u32 a_ = ecx, b_ = 0x23c345ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555a9b jg 0x555a9f */ if (!(ZF_|LT_)) goto L_00555a9f;
  /* 00555a9d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00555a9f:;
  /* 00555a9f cmp ecx, 0x5f5e100 */ { u32 a_ = ecx, b_ = 0x5f5e100u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555aa5 jl 0x555ab4 */ if (LT_) goto L_00555ab4;
  /* 00555aa7 cmp ecx, 0xbebc1ff */ { u32 a_ = ecx, b_ = 0xbebc1ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555aad jg 0x555ab4 */ if (!(ZF_|LT_)) goto L_00555ab4;
  /* 00555aaf mov eax, 4 */ { eax = (u32)(0x4u); }
L_00555ab4:;
  /* 00555ab4 cmp ecx, 0x17d78400 */ { u32 a_ = ecx, b_ = 0x17d78400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555aba jl 0x555ac9 */ if (LT_) goto L_00555ac9;
  /* 00555abc cmp ecx, 0x1dcd64ff */ { u32 a_ = ecx, b_ = 0x1dcd64ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555ac2 jg 0x555ac9 */ if (!(ZF_|LT_)) goto L_00555ac9;
  /* 00555ac4 mov eax, 4 */ { eax = (u32)(0x4u); }
L_00555ac9:;
  /* 00555ac9 cmp ecx, 0xbebc200 */ { u32 a_ = ecx, b_ = 0xbebc200u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555acf jl 0x555ade */ if (LT_) goto L_00555ade;
  /* 00555ad1 cmp ecx, 0x11e1a2ff */ { u32 a_ = ecx, b_ = 0x11e1a2ffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555ad7 jg 0x555ade */ if (!(ZF_|LT_)) goto L_00555ade;
  /* 00555ad9 mov eax, 2 */ { eax = (u32)(0x2u); }
L_00555ade:;
  /* 00555ade cmp ecx, 0x27b25a80 */ { u32 a_ = ecx, b_ = 0x27b25a80u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555ae4 jl 0x555af3 */ if (LT_) goto L_00555af3;
  /* 00555ae6 cmp ecx, 0x27c19cbf */ { u32 a_ = ecx, b_ = 0x27c19cbfu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555aec jg 0x555af3 */ if (!(ZF_|LT_)) goto L_00555af3;
  /* 00555aee mov eax, 5 */ { eax = (u32)(0x5u); }
L_00555af3:;
  /* 00555af3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555b00(CPU *c) {
  NATIVE_HOOK(0x555b00u) REGS; LOADALL;
L_00555b00:;
  /* 00555b00 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555b03 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00555b04 mov ebx, edx */ { ebx = (u32)(edx); }
  /* 00555b06 ja 0x555bbf */ if (!(CF_|ZF_)) goto L_00555bbf;
  /* 00555b0c jmp dword ptr [ecx*4 + 0x555bc4] */ { const u32 m_ = (u32)(ecx * 4u + 0x555bc4u); u32 t_ = M32(m_); switch (t_) { case 0x555b13u: goto L_00555b13; case 0x555b25u: goto L_00555b25; case 0x555b37u: goto L_00555b37; case 0x555b49u: goto L_00555b49; case 0x555b5bu: goto L_00555b5b; case 0x555b6du: goto L_00555b6d; case 0x555b7fu: goto L_00555b7f; case 0x555b91u: goto L_00555b91; case 0x555ba9u: goto L_00555ba9; default: SAVEALL; call_ind(c, t_); return; } }
L_00555b13:;
  /* 00555b13 mov ecx, dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); ecx = (u32)(M32(m_)); }
  /* 00555b16 mov eax, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); eax = (u32)(M32(m_)); }
  /* 00555b19 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b1b call 0x5584e0 */ esp -= 4; M32(esp) = 0x555b20u; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b1bu); RETCHK(0x555b20u, 0x555b1bu); LOADALL;
  /* 00555b20 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555b23 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555b24 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555b25:;
  /* 00555b25 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00555b28 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00555b2b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b2c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b2d call 0x5584e0 */ esp -= 4; M32(esp) = 0x555b32u; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b2du); RETCHK(0x555b32u, 0x555b2du); LOADALL;
  /* 00555b32 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555b35 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555b36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555b37:;
  /* 00555b37 mov ecx, dword ptr [eax + 0x4c] */ { const u32 m_ = (u32)(eax + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 00555b3a mov eax, dword ptr [eax + 0x48] */ { const u32 m_ = (u32)(eax + 0x48u); eax = (u32)(M32(m_)); }
  /* 00555b3d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b3f call 0x5584e0 */ esp -= 4; M32(esp) = 0x555b44u; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b3fu); RETCHK(0x555b44u, 0x555b3fu); LOADALL;
  /* 00555b44 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555b47 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555b48 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555b49:;
  /* 00555b49 mov ecx, dword ptr [eax + 0x1c] */ { const u32 m_ = (u32)(eax + 0x1cu); ecx = (u32)(M32(m_)); }
  /* 00555b4c mov eax, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); eax = (u32)(M32(m_)); }
  /* 00555b4f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b50 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b51 call 0x5584e0 */ esp -= 4; M32(esp) = 0x555b56u; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b51u); RETCHK(0x555b56u, 0x555b51u); LOADALL;
  /* 00555b56 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555b59 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555b5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555b5b:;
  /* 00555b5b mov ecx, dword ptr [eax + 0x3c] */ { const u32 m_ = (u32)(eax + 0x3cu); ecx = (u32)(M32(m_)); }
  /* 00555b5e mov eax, dword ptr [eax + 0x38] */ { const u32 m_ = (u32)(eax + 0x38u); eax = (u32)(M32(m_)); }
  /* 00555b61 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b62 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b63 call 0x5584e0 */ esp -= 4; M32(esp) = 0x555b68u; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b63u); RETCHK(0x555b68u, 0x555b63u); LOADALL;
  /* 00555b68 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555b6b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555b6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555b6d:;
  /* 00555b6d mov ecx, dword ptr [eax + 0x5c] */ { const u32 m_ = (u32)(eax + 0x5cu); ecx = (u32)(M32(m_)); }
  /* 00555b70 mov eax, dword ptr [eax + 0x58] */ { const u32 m_ = (u32)(eax + 0x58u); eax = (u32)(M32(m_)); }
  /* 00555b73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b74 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b75 call 0x5584e0 */ esp -= 4; M32(esp) = 0x555b7au; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b75u); RETCHK(0x555b7au, 0x555b75u); LOADALL;
  /* 00555b7a add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555b7d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555b7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555b7f:;
  /* 00555b7f mov ecx, dword ptr [eax + 0x7c] */ { const u32 m_ = (u32)(eax + 0x7cu); ecx = (u32)(M32(m_)); }
  /* 00555b82 mov eax, dword ptr [eax + 0x78] */ { const u32 m_ = (u32)(eax + 0x78u); eax = (u32)(M32(m_)); }
  /* 00555b85 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b87 call 0x5584e0 */ esp -= 4; M32(esp) = 0x555b8cu; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b87u); RETCHK(0x555b8cu, 0x555b87u); LOADALL;
  /* 00555b8c add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555b8f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555b90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555b91:;
  /* 00555b91 mov ecx, dword ptr [eax + 0x8c] */ { const u32 m_ = (u32)(eax + 0x8cu); ecx = (u32)(M32(m_)); }
  /* 00555b97 mov eax, dword ptr [eax + 0x88] */ { const u32 m_ = (u32)(eax + 0x88u); eax = (u32)(M32(m_)); }
  /* 00555b9d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555b9e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555b9f call 0x5584e0 */ esp -= 4; M32(esp) = 0x555ba4u; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555b9fu); RETCHK(0x555ba4u, 0x555b9fu); LOADALL;
  /* 00555ba4 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555ba7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555ba8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00555ba9:;
  /* 00555ba9 mov ecx, dword ptr [eax + 0x9c] */ { const u32 m_ = (u32)(eax + 0x9cu); ecx = (u32)(M32(m_)); }
  /* 00555baf mov eax, dword ptr [eax + 0x98] */ { const u32 m_ = (u32)(eax + 0x98u); eax = (u32)(M32(m_)); }
  /* 00555bb5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555bb6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555bb7 call 0x5584e0 */ esp -= 4; M32(esp) = 0x555bbcu; SAVEALL; F_005584e0(c); ABI_CHECK(0x5584e0u, 0x555bb7u); RETCHK(0x555bbcu, 0x555bb7u); LOADALL;
  /* 00555bbc add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555bbf:;
  /* 00555bbf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555bc0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00555bf0(CPU *c) {
  NATIVE_HOOK(0x555bf0u) REGS; LOADALL;
L_00555bf0:;
  /* 00555bf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00555bf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00555bf3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00555bf5 push 0x623efc */ { u32 v_ = 0x623efcu; esp -= 4; M32(esp) = v_; }
  /* 00555bfa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00555c00 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555c01 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00555c08 sub esp, 0xb0 */ { u32 a_ = esp, b_ = 0xb0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555c0e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00555c11 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00555c12 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00555c13 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00555c14 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00555c16 mov dword ptr [ebp - 0x18], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(edi); }
  /* 00555c19 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 00555c1c mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00555c1f cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555c22 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 00555c27 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00555c2a mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 00555c2d mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 00555c30 mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 00555c33 ja 0x555d93 */ if (!(CF_|ZF_)) goto L_00555d93;
  /* 00555c39 jmp dword ptr [ecx*4 + 0x555e10] */ { const u32 m_ = (u32)(ecx * 4u + 0x555e10u); u32 t_ = M32(m_); switch (t_) { case 0x555c40u: goto L_00555c40; case 0x555c69u: goto L_00555c69; case 0x555c92u: goto L_00555c92; case 0x555cb5u: goto L_00555cb5; case 0x555cd8u: goto L_00555cd8; case 0x555cfbu: goto L_00555cfb; case 0x555d1bu: goto L_00555d1b; case 0x555d3bu: goto L_00555d3b; case 0x555d64u: goto L_00555d64; default: SAVEALL; call_ind(c, t_); return; } }
L_00555c40:;
  /* 00555c40 lea ecx, [eax + 0x24] */ ecx = (u32)((u32)(eax + 0x24u));
  /* 00555c43 lea eax, [ebp - 0xac] */ eax = (u32)((u32)(ebp + 0xffffff54u));
  /* 00555c49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555c4a call 0x558510 */ esp -= 4; M32(esp) = 0x555c4fu; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555c4au); RETCHK(0x555c4fu, 0x555c4au); LOADALL;
  /* 00555c4f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555c52 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555c55 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00555c59 call 0x557a00 */ esp -= 4; M32(esp) = 0x555c5eu; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555c59u); RETCHK(0x555c5eu, 0x555c59u); LOADALL;
  /* 00555c5e lea esi, [ebp - 0xac] */ esi = (u32)((u32)(ebp + 0xffffff54u));
  /* 00555c64 jmp 0x555d8b */ goto L_00555d8b;
L_00555c69:;
  /* 00555c69 lea edx, [ebp - 0x8c] */ edx = (u32)((u32)(ebp + 0xffffff74u));
  /* 00555c6f lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00555c72 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00555c73 call 0x558510 */ esp -= 4; M32(esp) = 0x555c78u; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555c73u); RETCHK(0x555c78u, 0x555c73u); LOADALL;
  /* 00555c78 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555c7b lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555c7e mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00555c82 call 0x557a00 */ esp -= 4; M32(esp) = 0x555c87u; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555c82u); RETCHK(0x555c87u, 0x555c82u); LOADALL;
  /* 00555c87 lea esi, [ebp - 0x8c] */ esi = (u32)((u32)(ebp + 0xffffff74u));
  /* 00555c8d jmp 0x555d8b */ goto L_00555d8b;
L_00555c92:;
  /* 00555c92 lea ecx, [eax + 0x44] */ ecx = (u32)((u32)(eax + 0x44u));
  /* 00555c95 lea eax, [ebp - 0x6c] */ eax = (u32)((u32)(ebp + 0xffffff94u));
  /* 00555c98 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555c99 call 0x558510 */ esp -= 4; M32(esp) = 0x555c9eu; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555c99u); RETCHK(0x555c9eu, 0x555c99u); LOADALL;
  /* 00555c9e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555ca1 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555ca4 mov byte ptr [ebp - 4], 4 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x4u); }
  /* 00555ca8 call 0x557a00 */ esp -= 4; M32(esp) = 0x555cadu; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555ca8u); RETCHK(0x555cadu, 0x555ca8u); LOADALL;
  /* 00555cad lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 00555cb0 jmp 0x555d8b */ goto L_00555d8b;
L_00555cb5:;
  /* 00555cb5 lea edx, [ebp - 0x3c] */ edx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00555cb8 lea ecx, [eax + 0x14] */ ecx = (u32)((u32)(eax + 0x14u));
  /* 00555cbb push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00555cbc call 0x558510 */ esp -= 4; M32(esp) = 0x555cc1u; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555cbcu); RETCHK(0x555cc1u, 0x555cbcu); LOADALL;
  /* 00555cc1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555cc4 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555cc7 mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 00555ccb call 0x557a00 */ esp -= 4; M32(esp) = 0x555cd0u; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555ccbu); RETCHK(0x555cd0u, 0x555ccbu); LOADALL;
  /* 00555cd0 lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00555cd3 jmp 0x555d8b */ goto L_00555d8b;
L_00555cd8:;
  /* 00555cd8 lea ecx, [eax + 0x34] */ ecx = (u32)((u32)(eax + 0x34u));
  /* 00555cdb lea eax, [ebp - 0x4c] */ eax = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00555cde push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555cdf call 0x558510 */ esp -= 4; M32(esp) = 0x555ce4u; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555cdfu); RETCHK(0x555ce4u, 0x555cdfu); LOADALL;
  /* 00555ce4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555ce7 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555cea mov byte ptr [ebp - 4], 6 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x6u); }
  /* 00555cee call 0x557a00 */ esp -= 4; M32(esp) = 0x555cf3u; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555ceeu); RETCHK(0x555cf3u, 0x555ceeu); LOADALL;
  /* 00555cf3 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00555cf6 jmp 0x555d8b */ goto L_00555d8b;
L_00555cfb:;
  /* 00555cfb lea edx, [ebp - 0x5c] */ edx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00555cfe lea ecx, [eax + 0x54] */ ecx = (u32)((u32)(eax + 0x54u));
  /* 00555d01 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00555d02 call 0x558510 */ esp -= 4; M32(esp) = 0x555d07u; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555d02u); RETCHK(0x555d07u, 0x555d02u); LOADALL;
  /* 00555d07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555d0a lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555d0d mov byte ptr [ebp - 4], 7 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x7u); }
  /* 00555d11 call 0x557a00 */ esp -= 4; M32(esp) = 0x555d16u; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555d11u); RETCHK(0x555d16u, 0x555d11u); LOADALL;
  /* 00555d16 lea esi, [ebp - 0x5c] */ esi = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00555d19 jmp 0x555d8b */ goto L_00555d8b;
L_00555d1b:;
  /* 00555d1b lea ecx, [eax + 0x74] */ ecx = (u32)((u32)(eax + 0x74u));
  /* 00555d1e lea eax, [ebp - 0x7c] */ eax = (u32)((u32)(ebp + 0xffffff84u));
  /* 00555d21 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555d22 call 0x558510 */ esp -= 4; M32(esp) = 0x555d27u; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555d22u); RETCHK(0x555d27u, 0x555d22u); LOADALL;
  /* 00555d27 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555d2a lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555d2d mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 00555d31 call 0x557a00 */ esp -= 4; M32(esp) = 0x555d36u; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555d31u); RETCHK(0x555d36u, 0x555d31u); LOADALL;
  /* 00555d36 lea esi, [ebp - 0x7c] */ esi = (u32)((u32)(ebp + 0xffffff84u));
  /* 00555d39 jmp 0x555d8b */ goto L_00555d8b;
L_00555d3b:;
  /* 00555d3b lea edx, [ebp - 0x9c] */ edx = (u32)((u32)(ebp + 0xffffff64u));
  /* 00555d41 lea ecx, [eax + 0x84] */ ecx = (u32)((u32)(eax + 0x84u));
  /* 00555d47 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00555d48 call 0x558510 */ esp -= 4; M32(esp) = 0x555d4du; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555d48u); RETCHK(0x555d4du, 0x555d48u); LOADALL;
  /* 00555d4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555d50 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555d53 mov byte ptr [ebp - 4], 9 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x9u); }
  /* 00555d57 call 0x557a00 */ esp -= 4; M32(esp) = 0x555d5cu; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555d57u); RETCHK(0x555d5cu, 0x555d57u); LOADALL;
  /* 00555d5c lea esi, [ebp - 0x9c] */ esi = (u32)((u32)(ebp + 0xffffff64u));
  /* 00555d62 jmp 0x555d8b */ goto L_00555d8b;
L_00555d64:;
  /* 00555d64 lea ecx, [eax + 0x94] */ ecx = (u32)((u32)(eax + 0x94u));
  /* 00555d6a lea eax, [ebp - 0xbc] */ eax = (u32)((u32)(ebp + 0xffffff44u));
  /* 00555d70 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555d71 call 0x558510 */ esp -= 4; M32(esp) = 0x555d76u; SAVEALL; F_00558510(c); ABI_CHECK(0x558510u, 0x555d71u); RETCHK(0x555d76u, 0x555d71u); LOADALL;
  /* 00555d76 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555d79 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555d7c mov byte ptr [ebp - 4], 0xa */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xau); }
  /* 00555d80 call 0x557a00 */ esp -= 4; M32(esp) = 0x555d85u; SAVEALL; F_00557a00(c); ABI_CHECK(0x557a00u, 0x555d80u); RETCHK(0x555d85u, 0x555d80u); LOADALL;
  /* 00555d85 lea esi, [ebp - 0xbc] */ esi = (u32)((u32)(ebp + 0xffffff44u));
L_00555d8b:;
  /* 00555d8b mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00555d8e call 0x471e50 */ esp -= 4; M32(esp) = 0x555d93u; SAVEALL; F_00471e50(c); ABI_CHECK(0x471e50u, 0x555d8eu); RETCHK(0x555d93u, 0x555d8eu); LOADALL;
L_00555d93:;
  /* 00555d93 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555d96 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00555d98 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 00555d9b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00555d9c lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00555d9f lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00555da2 call 0x51b1a0 */ esp -= 4; M32(esp) = 0x555da7u; SAVEALL; F_0051b1a0(c); ABI_CHECK(0x51b1a0u, 0x555da2u); RETCHK(0x555da7u, 0x555da2u); LOADALL;
  /* 00555da7 mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00555daa call 0x457100 */ esp -= 4; M32(esp) = 0x555dafu; SAVEALL; F_00457100(c); ABI_CHECK(0x457100u, 0x555daau); RETCHK(0x555dafu, 0x555daau); LOADALL;
  /* 00555daf mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00555db2 mov edx, esi */ { edx = (u32)(esi); }
  /* 00555db4 call 0x45bda0 */ esp -= 4; M32(esp) = 0x555db9u; SAVEALL; F_0045bda0(c); ABI_CHECK(0x45bda0u, 0x555db4u); RETCHK(0x555db9u, 0x555db4u); LOADALL;
  /* 00555db9 mov ebx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ebx = (u32)(M32(m_)); }
  /* 00555dbc mov esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); esi = (u32)(M32(m_)); }
  /* 00555dbf cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555dc1 je 0x555dd6 */ if (ZF_) goto L_00555dd6;
L_00555dc3:;
  /* 00555dc3 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00555dc5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00555dc6 call dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x555dc9u; SAVEALL; call_ind(c, t_); RETCHK(0x555dc9u, 0x555dc6u); LOADALL; }
  /* 00555dc9 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00555dcc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00555dcf cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555dd1 jne 0x555dc3 */ if (!ZF_) goto L_00555dc3;
  /* 00555dd3 mov esi, dword ptr [ebp - 0x28] */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); esi = (u32)(M32(m_)); }
L_00555dd6:;
  /* 00555dd6 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555dd8 je 0x555de3 */ if (ZF_) goto L_00555de3;
  /* 00555dda push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00555ddb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x555de0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x555ddbu); RETCHK(0x555de0u, 0x555ddbu); LOADALL;
  /* 00555de0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555de3:;
  /* 00555de3 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00555de6 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00555de8 mov dword ptr [ebp - 0x28], edi */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(edi); }
  /* 00555deb mov dword ptr [ebp - 0x24], edi */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(edi); }
  /* 00555dee mov dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(edi); }
  /* 00555df1 je 0x555dfc */ if (ZF_) goto L_00555dfc;
  /* 00555df3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00555df4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x555df9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x555df4u); RETCHK(0x555df9u, 0x555df4u); LOADALL;
  /* 00555df9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00555dfc:;
  /* 00555dfc mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00555dff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00555e00 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00555e01 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00555e08 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00555e09 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00555e0b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00555e0c ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}
