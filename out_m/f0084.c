#include "funcs.h"

void F_006242d3(CPU *c) {
  NATIVE_HOOK(0x6242d3u) REGS; LOADALL;
L_006242d3:;
  /* 006242d3 mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 006242d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006242da call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6242dfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6242dau); RETCHK(0x6242dfu, 0x6242dau); LOADALL;
  /* 006242df pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006242e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006242e1(CPU *c) {
  NATIVE_HOOK(0x6242e1u) REGS; LOADALL;
L_006242e1:;
  /* 006242e1 mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 006242e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006242e8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6242edu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6242e8u); RETCHK(0x6242edu, 0x6242e8u); LOADALL;
  /* 006242ed pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006242ee ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006242ef(CPU *c) {
  NATIVE_HOOK(0x6242efu) REGS; LOADALL;
L_006242ef:;
  /* 006242ef mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 006242f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006242f6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6242fbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6242f6u); RETCHK(0x6242fbu, 0x6242f6u); LOADALL;
  /* 006242fb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006242fc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006242fd(CPU *c) {
  NATIVE_HOOK(0x6242fdu) REGS; LOADALL;
L_006242fd:;
  /* 006242fd mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 00624303 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624304 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624309u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624304u); RETCHK(0x624309u, 0x624304u); LOADALL;
  /* 00624309 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062430a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062430b(CPU *c) {
  NATIVE_HOOK(0x62430bu) REGS; LOADALL;
L_0062430b:;
  /* 0062430b lea ecx, [ebp - 0x120] */ ecx = (u32)((u32)(ebp + 0xfffffee0u));
  /* 00624311 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624316(CPU *c) {
  NATIVE_HOOK(0x624316u) REGS; LOADALL;
  goto L_00624316;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624316:;
  /* 00624316 mov eax, 0x66b578 */ { eax = (u32)(0x66b578u); }
  /* 0062431b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624320(CPU *c) {
  NATIVE_HOOK(0x624320u) REGS; LOADALL;
L_00624320:;
  /* 00624320 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00624323 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624328(CPU *c) {
  NATIVE_HOOK(0x624328u) REGS; LOADALL;
  goto L_00624328;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624328:;
  /* 00624328 mov eax, 0x66b59c */ { eax = (u32)(0x66b59cu); }
  /* 0062432d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624340(CPU *c) {
  NATIVE_HOOK(0x624340u) REGS; LOADALL;
L_00624340:;
  /* 00624340 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00624343 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624348(CPU *c) {
  NATIVE_HOOK(0x624348u) REGS; LOADALL;
  goto L_00624348;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624348:;
  /* 00624348 mov eax, 0x66b5c0 */ { eax = (u32)(0x66b5c0u); }
  /* 0062434d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624360(CPU *c) {
  NATIVE_HOOK(0x624360u) REGS; LOADALL;
L_00624360:;
  /* 00624360 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00624363 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624364 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624369u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624364u); RETCHK(0x624369u, 0x624364u); LOADALL;
  /* 00624369 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062436a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062436b(CPU *c) {
  NATIVE_HOOK(0x62436bu) REGS; LOADALL;
  goto L_0062436b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062436b:;
  /* 0062436b mov eax, 0x66b5e4 */ { eax = (u32)(0x66b5e4u); }
  /* 00624370 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624380(CPU *c) {
  NATIVE_HOOK(0x624380u) REGS; LOADALL;
L_00624380:;
  /* 00624380 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00624383 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624388(CPU *c) {
  NATIVE_HOOK(0x624388u) REGS; LOADALL;
  goto L_00624388;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624388:;
  /* 00624388 mov eax, 0x66b62c */ { eax = (u32)(0x66b62cu); }
  /* 0062438d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006243a0(CPU *c) {
  NATIVE_HOOK(0x6243a0u) REGS; LOADALL;
L_006243a0:;
  /* 006243a0 mov eax, dword ptr [0x9be1a4] */ { const u32 m_ = (u32)(0x9be1a4u); eax = (u32)(M32(m_)); }
  /* 006243a5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006243a8 mov dword ptr [0x9be1a4], eax */ { const u32 m_ = (u32)(0x9be1a4u); M32(m_) = (u32)(eax); }
  /* 006243ad ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006243ae(CPU *c) {
  NATIVE_HOOK(0x6243aeu) REGS; LOADALL;
  goto L_006243ae;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006243ae:;
  /* 006243ae mov eax, 0x66b650 */ { eax = (u32)(0x66b650u); }
  /* 006243b3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006243c0(CPU *c) {
  NATIVE_HOOK(0x6243c0u) REGS; LOADALL;
L_006243c0:;
  /* 006243c0 mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 006243c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006243c8(CPU *c) {
  NATIVE_HOOK(0x6243c8u) REGS; LOADALL;
L_006243c8:;
  /* 006243c8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006243cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006243d0(CPU *c) {
  NATIVE_HOOK(0x6243d0u) REGS; LOADALL;
L_006243d0:;
  /* 006243d0 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 006243d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006243d8(CPU *c) {
  NATIVE_HOOK(0x6243d8u) REGS; LOADALL;
  goto L_006243d8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006243d8:;
  /* 006243d8 mov eax, 0x66b684 */ { eax = (u32)(0x66b684u); }
  /* 006243dd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006243f0(CPU *c) {
  NATIVE_HOOK(0x6243f0u) REGS; LOADALL;
L_006243f0:;
  /* 006243f0 lea ecx, [ebp - 0x140] */ ecx = (u32)((u32)(ebp + 0xfffffec0u));
  /* 006243f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006243fb(CPU *c) {
  NATIVE_HOOK(0x6243fbu) REGS; LOADALL;
L_006243fb:;
  /* 006243fb lea ecx, [ebp - 0x15c] */ ecx = (u32)((u32)(ebp + 0xfffffea4u));
  /* 00624401 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624406(CPU *c) {
  NATIVE_HOOK(0x624406u) REGS; LOADALL;
  goto L_00624406;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624406:;
  /* 00624406 mov eax, 0x66b6b0 */ { eax = (u32)(0x66b6b0u); }
  /* 0062440b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624410(CPU *c) {
  NATIVE_HOOK(0x624410u) REGS; LOADALL;
L_00624410:;
  /* 00624410 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 00624413 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00624418(CPU *c) {
  NATIVE_HOOK(0x624418u) REGS; LOADALL;
L_00624418:;
  /* 00624418 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062441b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624420(CPU *c) {
  NATIVE_HOOK(0x624420u) REGS; LOADALL;
L_00624420:;
  /* 00624420 lea ecx, [ebp - 0x5c] */ ecx = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00624423 jmp 0x401760 */ SAVEALL; F_00401760(c); return;
}

void F_00624428(CPU *c) {
  NATIVE_HOOK(0x624428u) REGS; LOADALL;
L_00624428:;
  /* 00624428 mov eax, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); eax = (u32)(M32(m_)); }
  /* 0062442b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062442c mov ecx, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); ecx = (u32)(M32(m_)); }
  /* 0062442f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00624430 call 0x459c10 */ esp -= 4; M32(esp) = 0x624435u; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x624430u); RETCHK(0x624435u, 0x624430u); LOADALL;
  /* 00624435 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00624438 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624439(CPU *c) {
  NATIVE_HOOK(0x624439u) REGS; LOADALL;
  goto L_00624439;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624439:;
  /* 00624439 mov eax, 0x66b6ec */ { eax = (u32)(0x66b6ecu); }
  /* 0062443e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624450(CPU *c) {
  NATIVE_HOOK(0x624450u) REGS; LOADALL;
L_00624450:;
  /* 00624450 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624453 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624458(CPU *c) {
  NATIVE_HOOK(0x624458u) REGS; LOADALL;
L_00624458:;
  /* 00624458 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062445b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624460(CPU *c) {
  NATIVE_HOOK(0x624460u) REGS; LOADALL;
L_00624460:;
  /* 00624460 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624463 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624468(CPU *c) {
  NATIVE_HOOK(0x624468u) REGS; LOADALL;
L_00624468:;
  /* 00624468 lea ecx, [ebp - 0xa0] */ ecx = (u32)((u32)(ebp + 0xffffff60u));
  /* 0062446e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624473(CPU *c) {
  NATIVE_HOOK(0x624473u) REGS; LOADALL;
L_00624473:;
  /* 00624473 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624476 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062447b(CPU *c) {
  NATIVE_HOOK(0x62447bu) REGS; LOADALL;
L_0062447b:;
  /* 0062447b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062447e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624483(CPU *c) {
  NATIVE_HOOK(0x624483u) REGS; LOADALL;
L_00624483:;
  /* 00624483 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624486 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062448b(CPU *c) {
  NATIVE_HOOK(0x62448bu) REGS; LOADALL;
L_0062448b:;
  /* 0062448b lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062448e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624493(CPU *c) {
  NATIVE_HOOK(0x624493u) REGS; LOADALL;
L_00624493:;
  /* 00624493 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624496 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062449b(CPU *c) {
  NATIVE_HOOK(0x62449bu) REGS; LOADALL;
  goto L_0062449b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062449b:;
  /* 0062449b mov eax, 0x66b750 */ { eax = (u32)(0x66b750u); }
  /* 006244a0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006244b0(CPU *c) {
  NATIVE_HOOK(0x6244b0u) REGS; LOADALL;
L_006244b0:;
  /* 006244b0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006244b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006244b8(CPU *c) {
  NATIVE_HOOK(0x6244b8u) REGS; LOADALL;
L_006244b8:;
  /* 006244b8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006244bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006244c0(CPU *c) {
  NATIVE_HOOK(0x6244c0u) REGS; LOADALL;
L_006244c0:;
  /* 006244c0 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 006244c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006244c8(CPU *c) {
  NATIVE_HOOK(0x6244c8u) REGS; LOADALL;
  goto L_006244c8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006244c8:;
  /* 006244c8 mov eax, 0x66b784 */ { eax = (u32)(0x66b784u); }
  /* 006244cd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006244e0(CPU *c) {
  NATIVE_HOOK(0x6244e0u) REGS; LOADALL;
L_006244e0:;
  /* 006244e0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006244e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006244e8(CPU *c) {
  NATIVE_HOOK(0x6244e8u) REGS; LOADALL;
L_006244e8:;
  /* 006244e8 lea ecx, [ebp - 0x15c] */ ecx = (u32)((u32)(ebp + 0xfffffea4u));
  /* 006244ee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006244f3(CPU *c) {
  NATIVE_HOOK(0x6244f3u) REGS; LOADALL;
  goto L_006244f3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006244f3:;
  /* 006244f3 mov eax, 0x66b7b0 */ { eax = (u32)(0x66b7b0u); }
  /* 006244f8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624500(CPU *c) {
  NATIVE_HOOK(0x624500u) REGS; LOADALL;
L_00624500:;
  /* 00624500 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624503 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624508(CPU *c) {
  NATIVE_HOOK(0x624508u) REGS; LOADALL;
L_00624508:;
  /* 00624508 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062450b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624510(CPU *c) {
  NATIVE_HOOK(0x624510u) REGS; LOADALL;
L_00624510:;
  /* 00624510 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624513 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624518(CPU *c) {
  NATIVE_HOOK(0x624518u) REGS; LOADALL;
L_00624518:;
  /* 00624518 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062451b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624520(CPU *c) {
  NATIVE_HOOK(0x624520u) REGS; LOADALL;
L_00624520:;
  /* 00624520 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624523 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624528(CPU *c) {
  NATIVE_HOOK(0x624528u) REGS; LOADALL;
L_00624528:;
  /* 00624528 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062452b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624530(CPU *c) {
  NATIVE_HOOK(0x624530u) REGS; LOADALL;
L_00624530:;
  /* 00624530 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624533 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624538(CPU *c) {
  NATIVE_HOOK(0x624538u) REGS; LOADALL;
L_00624538:;
  /* 00624538 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062453b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624540(CPU *c) {
  NATIVE_HOOK(0x624540u) REGS; LOADALL;
L_00624540:;
  /* 00624540 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624543 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624548(CPU *c) {
  NATIVE_HOOK(0x624548u) REGS; LOADALL;
L_00624548:;
  /* 00624548 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062454b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624550(CPU *c) {
  NATIVE_HOOK(0x624550u) REGS; LOADALL;
L_00624550:;
  /* 00624550 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624553 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624558(CPU *c) {
  NATIVE_HOOK(0x624558u) REGS; LOADALL;
L_00624558:;
  /* 00624558 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062455b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624560(CPU *c) {
  NATIVE_HOOK(0x624560u) REGS; LOADALL;
L_00624560:;
  /* 00624560 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624563 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624568(CPU *c) {
  NATIVE_HOOK(0x624568u) REGS; LOADALL;
L_00624568:;
  /* 00624568 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062456b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624570(CPU *c) {
  NATIVE_HOOK(0x624570u) REGS; LOADALL;
L_00624570:;
  /* 00624570 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624573 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624578(CPU *c) {
  NATIVE_HOOK(0x624578u) REGS; LOADALL;
L_00624578:;
  /* 00624578 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062457b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624580(CPU *c) {
  NATIVE_HOOK(0x624580u) REGS; LOADALL;
L_00624580:;
  /* 00624580 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624583 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624588(CPU *c) {
  NATIVE_HOOK(0x624588u) REGS; LOADALL;
L_00624588:;
  /* 00624588 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062458b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624590(CPU *c) {
  NATIVE_HOOK(0x624590u) REGS; LOADALL;
L_00624590:;
  /* 00624590 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624593 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624598(CPU *c) {
  NATIVE_HOOK(0x624598u) REGS; LOADALL;
L_00624598:;
  /* 00624598 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062459b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245a0(CPU *c) {
  NATIVE_HOOK(0x6245a0u) REGS; LOADALL;
L_006245a0:;
  /* 006245a0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006245a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245a8(CPU *c) {
  NATIVE_HOOK(0x6245a8u) REGS; LOADALL;
L_006245a8:;
  /* 006245a8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245ab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245b0(CPU *c) {
  NATIVE_HOOK(0x6245b0u) REGS; LOADALL;
L_006245b0:;
  /* 006245b0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245b8(CPU *c) {
  NATIVE_HOOK(0x6245b8u) REGS; LOADALL;
L_006245b8:;
  /* 006245b8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245c0(CPU *c) {
  NATIVE_HOOK(0x6245c0u) REGS; LOADALL;
L_006245c0:;
  /* 006245c0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245c8(CPU *c) {
  NATIVE_HOOK(0x6245c8u) REGS; LOADALL;
L_006245c8:;
  /* 006245c8 lea ecx, [ebp - 0x180] */ ecx = (u32)((u32)(ebp + 0xfffffe80u));
  /* 006245ce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245d3(CPU *c) {
  NATIVE_HOOK(0x6245d3u) REGS; LOADALL;
  goto L_006245d3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006245d3:;
  /* 006245d3 mov eax, 0x66b8a0 */ { eax = (u32)(0x66b8a0u); }
  /* 006245d8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006245e0(CPU *c) {
  NATIVE_HOOK(0x6245e0u) REGS; LOADALL;
L_006245e0:;
  /* 006245e0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245e8(CPU *c) {
  NATIVE_HOOK(0x6245e8u) REGS; LOADALL;
L_006245e8:;
  /* 006245e8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245f0(CPU *c) {
  NATIVE_HOOK(0x6245f0u) REGS; LOADALL;
L_006245f0:;
  /* 006245f0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006245f8(CPU *c) {
  NATIVE_HOOK(0x6245f8u) REGS; LOADALL;
L_006245f8:;
  /* 006245f8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006245fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624600(CPU *c) {
  NATIVE_HOOK(0x624600u) REGS; LOADALL;
L_00624600:;
  /* 00624600 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624603 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624608(CPU *c) {
  NATIVE_HOOK(0x624608u) REGS; LOADALL;
L_00624608:;
  /* 00624608 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062460b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624610(CPU *c) {
  NATIVE_HOOK(0x624610u) REGS; LOADALL;
L_00624610:;
  /* 00624610 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624613 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624618(CPU *c) {
  NATIVE_HOOK(0x624618u) REGS; LOADALL;
L_00624618:;
  /* 00624618 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0062461b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624620(CPU *c) {
  NATIVE_HOOK(0x624620u) REGS; LOADALL;
L_00624620:;
  /* 00624620 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00624623 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624628(CPU *c) {
  NATIVE_HOOK(0x624628u) REGS; LOADALL;
L_00624628:;
  /* 00624628 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062462b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624630(CPU *c) {
  NATIVE_HOOK(0x624630u) REGS; LOADALL;
  goto L_00624630;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624630:;
  /* 00624630 mov eax, 0x66b910 */ { eax = (u32)(0x66b910u); }
  /* 00624635 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624640(CPU *c) {
  NATIVE_HOOK(0x624640u) REGS; LOADALL;
L_00624640:;
  /* 00624640 lea ecx, [ebp - 0x43c] */ ecx = (u32)((u32)(ebp + 0xfffffbc4u));
  /* 00624646 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062464b(CPU *c) {
  NATIVE_HOOK(0x62464bu) REGS; LOADALL;
L_0062464b:;
  /* 0062464b lea ecx, [ebp - 0x458] */ ecx = (u32)((u32)(ebp + 0xfffffba8u));
  /* 00624651 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624656(CPU *c) {
  NATIVE_HOOK(0x624656u) REGS; LOADALL;
L_00624656:;
  /* 00624656 lea ecx, [ebp - 0x490] */ ecx = (u32)((u32)(ebp + 0xfffffb70u));
  /* 0062465c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624661(CPU *c) {
  NATIVE_HOOK(0x624661u) REGS; LOADALL;
L_00624661:;
  /* 00624661 lea ecx, [ebp - 0x2b4] */ ecx = (u32)((u32)(ebp + 0xfffffd4cu));
  /* 00624667 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062466c(CPU *c) {
  NATIVE_HOOK(0x62466cu) REGS; LOADALL;
L_0062466c:;
  /* 0062466c lea ecx, [ebp - 0x474] */ ecx = (u32)((u32)(ebp + 0xfffffb8cu));
  /* 00624672 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624677(CPU *c) {
  NATIVE_HOOK(0x624677u) REGS; LOADALL;
L_00624677:;
  /* 00624677 lea ecx, [ebp - 0x2ec] */ ecx = (u32)((u32)(ebp + 0xfffffd14u));
  /* 0062467d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624682(CPU *c) {
  NATIVE_HOOK(0x624682u) REGS; LOADALL;
L_00624682:;
  /* 00624682 lea ecx, [ebp - 0x3cc] */ ecx = (u32)((u32)(ebp + 0xfffffc34u));
  /* 00624688 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062468d(CPU *c) {
  NATIVE_HOOK(0x62468du) REGS; LOADALL;
L_0062468d:;
  /* 0062468d lea ecx, [ebp - 0x324] */ ecx = (u32)((u32)(ebp + 0xfffffcdcu));
  /* 00624693 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624698(CPU *c) {
  NATIVE_HOOK(0x624698u) REGS; LOADALL;
L_00624698:;
  /* 00624698 lea ecx, [ebp - 0x27c] */ ecx = (u32)((u32)(ebp + 0xfffffd84u));
  /* 0062469e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246a3(CPU *c) {
  NATIVE_HOOK(0x6246a3u) REGS; LOADALL;
L_006246a3:;
  /* 006246a3 lea ecx, [ebp - 0x35c] */ ecx = (u32)((u32)(ebp + 0xfffffca4u));
  /* 006246a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246ae(CPU *c) {
  NATIVE_HOOK(0x6246aeu) REGS; LOADALL;
L_006246ae:;
  /* 006246ae lea ecx, [ebp - 0x404] */ ecx = (u32)((u32)(ebp + 0xfffffbfcu));
  /* 006246b4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246b9(CPU *c) {
  NATIVE_HOOK(0x6246b9u) REGS; LOADALL;
L_006246b9:;
  /* 006246b9 lea ecx, [ebp - 0x394] */ ecx = (u32)((u32)(ebp + 0xfffffc6cu));
  /* 006246bf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246c4(CPU *c) {
  NATIVE_HOOK(0x6246c4u) REGS; LOADALL;
L_006246c4:;
  /* 006246c4 lea ecx, [ebp - 0x298] */ ecx = (u32)((u32)(ebp + 0xfffffd68u));
  /* 006246ca jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246cf(CPU *c) {
  NATIVE_HOOK(0x6246cfu) REGS; LOADALL;
L_006246cf:;
  /* 006246cf lea ecx, [ebp - 0x2d0] */ ecx = (u32)((u32)(ebp + 0xfffffd30u));
  /* 006246d5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246da(CPU *c) {
  NATIVE_HOOK(0x6246dau) REGS; LOADALL;
L_006246da:;
  /* 006246da lea ecx, [ebp - 0x308] */ ecx = (u32)((u32)(ebp + 0xfffffcf8u));
  /* 006246e0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246e5(CPU *c) {
  NATIVE_HOOK(0x6246e5u) REGS; LOADALL;
L_006246e5:;
  /* 006246e5 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006246e8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246ed(CPU *c) {
  NATIVE_HOOK(0x6246edu) REGS; LOADALL;
L_006246ed:;
  /* 006246ed lea ecx, [ebp - 0x340] */ ecx = (u32)((u32)(ebp + 0xfffffcc0u));
  /* 006246f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006246f8(CPU *c) {
  NATIVE_HOOK(0x6246f8u) REGS; LOADALL;
L_006246f8:;
  /* 006246f8 lea ecx, [ebp - 0x378] */ ecx = (u32)((u32)(ebp + 0xfffffc88u));
  /* 006246fe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624703(CPU *c) {
  NATIVE_HOOK(0x624703u) REGS; LOADALL;
L_00624703:;
  /* 00624703 lea ecx, [ebp - 0x3b0] */ ecx = (u32)((u32)(ebp + 0xfffffc50u));
  /* 00624709 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062470e(CPU *c) {
  NATIVE_HOOK(0x62470eu) REGS; LOADALL;
L_0062470e:;
  /* 0062470e lea ecx, [ebp - 0x3e8] */ ecx = (u32)((u32)(ebp + 0xfffffc18u));
  /* 00624714 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624719(CPU *c) {
  NATIVE_HOOK(0x624719u) REGS; LOADALL;
L_00624719:;
  /* 00624719 lea ecx, [ebp - 0x420] */ ecx = (u32)((u32)(ebp + 0xfffffbe0u));
  /* 0062471f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624724(CPU *c) {
  NATIVE_HOOK(0x624724u) REGS; LOADALL;
  goto L_00624724;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624724:;
  /* 00624724 mov eax, 0x66b9d8 */ { eax = (u32)(0x66b9d8u); }
  /* 00624729 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624730(CPU *c) {
  NATIVE_HOOK(0x624730u) REGS; LOADALL;
L_00624730:;
  /* 00624730 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624733 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624738(CPU *c) {
  NATIVE_HOOK(0x624738u) REGS; LOADALL;
L_00624738:;
  /* 00624738 mov eax, dword ptr [ebp - 0x144] */ { const u32 m_ = (u32)(ebp + 0xfffffebcu); eax = (u32)(M32(m_)); }
  /* 0062473e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062473f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624744u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62473fu); RETCHK(0x624744u, 0x62473fu); LOADALL;
  /* 00624744 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624745 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624746(CPU *c) {
  NATIVE_HOOK(0x624746u) REGS; LOADALL;
  goto L_00624746;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624746:;
  /* 00624746 mov eax, 0x66ba04 */ { eax = (u32)(0x66ba04u); }
  /* 0062474b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624750(CPU *c) {
  NATIVE_HOOK(0x624750u) REGS; LOADALL;
L_00624750:;
  /* 00624750 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624753 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624758(CPU *c) {
  NATIVE_HOOK(0x624758u) REGS; LOADALL;
L_00624758:;
  /* 00624758 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062475b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624760(CPU *c) {
  NATIVE_HOOK(0x624760u) REGS; LOADALL;
L_00624760:;
  /* 00624760 lea ecx, [ebp - 0x7c] */ ecx = (u32)((u32)(ebp + 0xffffff84u));
  /* 00624763 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624768(CPU *c) {
  NATIVE_HOOK(0x624768u) REGS; LOADALL;
L_00624768:;
  /* 00624768 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
  /* 0062476e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624773(CPU *c) {
  NATIVE_HOOK(0x624773u) REGS; LOADALL;
  goto L_00624773;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624773:;
  /* 00624773 mov eax, 0x66baac */ { eax = (u32)(0x66baacu); }
  /* 00624778 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624780(CPU *c) {
  NATIVE_HOOK(0x624780u) REGS; LOADALL;
L_00624780:;
  /* 00624780 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624783 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624788(CPU *c) {
  NATIVE_HOOK(0x624788u) REGS; LOADALL;
L_00624788:;
  /* 00624788 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062478b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624790(CPU *c) {
  NATIVE_HOOK(0x624790u) REGS; LOADALL;
L_00624790:;
  /* 00624790 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624793 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624798(CPU *c) {
  NATIVE_HOOK(0x624798u) REGS; LOADALL;
L_00624798:;
  /* 00624798 mov ecx, dword ptr [ebp - 0x284] */ { const u32 m_ = (u32)(ebp + 0xfffffd7cu); ecx = (u32)(M32(m_)); }
  /* 0062479e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247a3(CPU *c) {
  NATIVE_HOOK(0x6247a3u) REGS; LOADALL;
L_006247a3:;
  /* 006247a3 mov ecx, dword ptr [ebp - 0x288] */ { const u32 m_ = (u32)(ebp + 0xfffffd78u); ecx = (u32)(M32(m_)); }
  /* 006247a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247ae(CPU *c) {
  NATIVE_HOOK(0x6247aeu) REGS; LOADALL;
L_006247ae:;
  /* 006247ae lea ecx, [ebp - 0x2f8] */ ecx = (u32)((u32)(ebp + 0xfffffd08u));
  /* 006247b4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247b9(CPU *c) {
  NATIVE_HOOK(0x6247b9u) REGS; LOADALL;
L_006247b9:;
  /* 006247b9 lea ecx, [ebp - 0x2a4] */ ecx = (u32)((u32)(ebp + 0xfffffd5cu));
  /* 006247bf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247c4(CPU *c) {
  NATIVE_HOOK(0x6247c4u) REGS; LOADALL;
L_006247c4:;
  /* 006247c4 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006247c7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247cc(CPU *c) {
  NATIVE_HOOK(0x6247ccu) REGS; LOADALL;
L_006247cc:;
  /* 006247cc lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006247cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247d4(CPU *c) {
  NATIVE_HOOK(0x6247d4u) REGS; LOADALL;
L_006247d4:;
  /* 006247d4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006247d7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247dc(CPU *c) {
  NATIVE_HOOK(0x6247dcu) REGS; LOADALL;
L_006247dc:;
  /* 006247dc lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006247df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247e4(CPU *c) {
  NATIVE_HOOK(0x6247e4u) REGS; LOADALL;
L_006247e4:;
  /* 006247e4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006247e7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247ec(CPU *c) {
  NATIVE_HOOK(0x6247ecu) REGS; LOADALL;
L_006247ec:;
  /* 006247ec mov ecx, dword ptr [ebp - 0x288] */ { const u32 m_ = (u32)(ebp + 0xfffffd78u); ecx = (u32)(M32(m_)); }
  /* 006247f2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006247f7(CPU *c) {
  NATIVE_HOOK(0x6247f7u) REGS; LOADALL;
L_006247f7:;
  /* 006247f7 mov ecx, dword ptr [ebp - 0x288] */ { const u32 m_ = (u32)(ebp + 0xfffffd78u); ecx = (u32)(M32(m_)); }
  /* 006247fd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624802(CPU *c) {
  NATIVE_HOOK(0x624802u) REGS; LOADALL;
L_00624802:;
  /* 00624802 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00624805 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062480a(CPU *c) {
  NATIVE_HOOK(0x62480au) REGS; LOADALL;
L_0062480a:;
  /* 0062480a lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062480d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624812(CPU *c) {
  NATIVE_HOOK(0x624812u) REGS; LOADALL;
L_00624812:;
  /* 00624812 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00624815 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062481a(CPU *c) {
  NATIVE_HOOK(0x62481au) REGS; LOADALL;
L_0062481a:;
  /* 0062481a lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0062481d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624822(CPU *c) {
  NATIVE_HOOK(0x624822u) REGS; LOADALL;
L_00624822:;
  /* 00624822 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624825 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062482a(CPU *c) {
  NATIVE_HOOK(0x62482au) REGS; LOADALL;
L_0062482a:;
  /* 0062482a lea ecx, [ebp - 0x2dc] */ ecx = (u32)((u32)(ebp + 0xfffffd24u));
  /* 00624830 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624835(CPU *c) {
  NATIVE_HOOK(0x624835u) REGS; LOADALL;
L_00624835:;
  /* 00624835 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624838 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062483d(CPU *c) {
  NATIVE_HOOK(0x62483du) REGS; LOADALL;
L_0062483d:;
  /* 0062483d lea ecx, [ebp - 0x2c0] */ ecx = (u32)((u32)(ebp + 0xfffffd40u));
  /* 00624843 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624848(CPU *c) {
  NATIVE_HOOK(0x624848u) REGS; LOADALL;
  goto L_00624848;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624848:;
  /* 00624848 mov eax, 0x66bb78 */ { eax = (u32)(0x66bb78u); }
  /* 0062484d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624860(CPU *c) {
  NATIVE_HOOK(0x624860u) REGS; LOADALL;
L_00624860:;
  /* 00624860 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624863 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624868(CPU *c) {
  NATIVE_HOOK(0x624868u) REGS; LOADALL;
L_00624868:;
  /* 00624868 mov ecx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ecx = (u32)(M32(m_)); }
  /* 0062486b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624870(CPU *c) {
  NATIVE_HOOK(0x624870u) REGS; LOADALL;
  goto L_00624870;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624870:;
  /* 00624870 mov eax, 0x66bbc8 */ { eax = (u32)(0x66bbc8u); }
  /* 00624875 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624880(CPU *c) {
  NATIVE_HOOK(0x624880u) REGS; LOADALL;
L_00624880:;
  /* 00624880 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624883 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624888(CPU *c) {
  NATIVE_HOOK(0x624888u) REGS; LOADALL;
L_00624888:;
  /* 00624888 mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 0062488b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062488c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624891u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62488cu); RETCHK(0x624891u, 0x62488cu); LOADALL;
  /* 00624891 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624892 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624893(CPU *c) {
  NATIVE_HOOK(0x624893u) REGS; LOADALL;
L_00624893:;
  /* 00624893 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624896 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062489b(CPU *c) {
  NATIVE_HOOK(0x62489bu) REGS; LOADALL;
L_0062489b:;
  /* 0062489b lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 006248a1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248a6(CPU *c) {
  NATIVE_HOOK(0x6248a6u) REGS; LOADALL;
L_006248a6:;
  /* 006248a6 lea ecx, [ebp - 0xa0] */ ecx = (u32)((u32)(ebp + 0xffffff60u));
  /* 006248ac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248b1(CPU *c) {
  NATIVE_HOOK(0x6248b1u) REGS; LOADALL;
L_006248b1:;
  /* 006248b1 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006248b4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248b9(CPU *c) {
  NATIVE_HOOK(0x6248b9u) REGS; LOADALL;
L_006248b9:;
  /* 006248b9 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006248bc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248c1(CPU *c) {
  NATIVE_HOOK(0x6248c1u) REGS; LOADALL;
  goto L_006248c1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006248c1:;
  /* 006248c1 mov eax, 0x66bc1c */ { eax = (u32)(0x66bc1cu); }
  /* 006248c6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006248d0(CPU *c) {
  NATIVE_HOOK(0x6248d0u) REGS; LOADALL;
L_006248d0:;
  /* 006248d0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006248d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248d8(CPU *c) {
  NATIVE_HOOK(0x6248d8u) REGS; LOADALL;
L_006248d8:;
  /* 006248d8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006248db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248e0(CPU *c) {
  NATIVE_HOOK(0x6248e0u) REGS; LOADALL;
L_006248e0:;
  /* 006248e0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006248e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
