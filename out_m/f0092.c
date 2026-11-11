#include "funcs.h"

void F_006274d8(CPU *c) {
  NATIVE_HOOK(0x6274d8u) REGS; LOADALL;
L_006274d8:;
  /* 006274d8 lea ecx, [ebp - 0x1b4c] */ ecx = (u32)((u32)(ebp + 0xffffe4b4u));
  /* 006274de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006274e3(CPU *c) {
  NATIVE_HOOK(0x6274e3u) REGS; LOADALL;
L_006274e3:;
  /* 006274e3 lea ecx, [ebp - 0x1b84] */ ecx = (u32)((u32)(ebp + 0xffffe47cu));
  /* 006274e9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006274ee(CPU *c) {
  NATIVE_HOOK(0x6274eeu) REGS; LOADALL;
L_006274ee:;
  /* 006274ee lea ecx, [ebp - 0x1bbc] */ ecx = (u32)((u32)(ebp + 0xffffe444u));
  /* 006274f4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006274f9(CPU *c) {
  NATIVE_HOOK(0x6274f9u) REGS; LOADALL;
L_006274f9:;
  /* 006274f9 lea ecx, [ebp - 0x1bf4] */ ecx = (u32)((u32)(ebp + 0xffffe40cu));
  /* 006274ff jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627504(CPU *c) {
  NATIVE_HOOK(0x627504u) REGS; LOADALL;
L_00627504:;
  /* 00627504 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 0062750a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062750b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627510u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62750bu); RETCHK(0x627510u, 0x62750bu); LOADALL;
  /* 00627510 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627511 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627512(CPU *c) {
  NATIVE_HOOK(0x627512u) REGS; LOADALL;
L_00627512:;
  /* 00627512 lea ecx, [ebp - 0x1c2c] */ ecx = (u32)((u32)(ebp + 0xffffe3d4u));
  /* 00627518 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062751d(CPU *c) {
  NATIVE_HOOK(0x62751du) REGS; LOADALL;
L_0062751d:;
  /* 0062751d mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 00627523 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627524 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627529u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627524u); RETCHK(0x627529u, 0x627524u); LOADALL;
  /* 00627529 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062752a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062752b(CPU *c) {
  NATIVE_HOOK(0x62752bu) REGS; LOADALL;
L_0062752b:;
  /* 0062752b lea ecx, [ebp - 0x1c64] */ ecx = (u32)((u32)(ebp + 0xffffe39cu));
  /* 00627531 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627536(CPU *c) {
  NATIVE_HOOK(0x627536u) REGS; LOADALL;
L_00627536:;
  /* 00627536 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 0062753c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062753d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627542u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62753du); RETCHK(0x627542u, 0x62753du); LOADALL;
  /* 00627542 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627543 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627544(CPU *c) {
  NATIVE_HOOK(0x627544u) REGS; LOADALL;
L_00627544:;
  /* 00627544 lea ecx, [ebp - 0x1c9c] */ ecx = (u32)((u32)(ebp + 0xffffe364u));
  /* 0062754a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062754f(CPU *c) {
  NATIVE_HOOK(0x62754fu) REGS; LOADALL;
L_0062754f:;
  /* 0062754f mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 00627555 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627556 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62755bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627556u); RETCHK(0x62755bu, 0x627556u); LOADALL;
  /* 0062755b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062755c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062755d(CPU *c) {
  NATIVE_HOOK(0x62755du) REGS; LOADALL;
L_0062755d:;
  /* 0062755d lea ecx, [ebp - 0x1cd4] */ ecx = (u32)((u32)(ebp + 0xffffe32cu));
  /* 00627563 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627568(CPU *c) {
  NATIVE_HOOK(0x627568u) REGS; LOADALL;
L_00627568:;
  /* 00627568 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 0062756e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062756f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627574u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62756fu); RETCHK(0x627574u, 0x62756fu); LOADALL;
  /* 00627574 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627575 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627573(CPU *c) {
  NATIVE_HOOK(0x627573u) REGS; LOADALL;
L_00627573:;
  /* 00627573 call ptr [ecx - 0x3d] */ { const u32 m_ = (u32)(ecx + 0xffffffc3u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x627576u; SAVEALL; call_ind(c, t_); RETCHK(0x627576u, 0x627573u); LOADALL; }
  /* 00627576 lea ecx, [ebp - 0x1d0c] */ ecx = (u32)((u32)(ebp + 0xffffe2f4u));
  /* 0062757c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627576(CPU *c) {
  NATIVE_HOOK(0x627576u) REGS; LOADALL;
L_00627576:;
  /* 00627576 lea ecx, [ebp - 0x1d0c] */ ecx = (u32)((u32)(ebp + 0xffffe2f4u));
  /* 0062757c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627581(CPU *c) {
  NATIVE_HOOK(0x627581u) REGS; LOADALL;
L_00627581:;
  /* 00627581 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 00627587 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627588 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62758du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627588u); RETCHK(0x62758du, 0x627588u); LOADALL;
  /* 0062758d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062758e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062758f(CPU *c) {
  NATIVE_HOOK(0x62758fu) REGS; LOADALL;
L_0062758f:;
  /* 0062758f lea ecx, [ebp - 0x1d44] */ ecx = (u32)((u32)(ebp + 0xffffe2bcu));
  /* 00627595 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062759a(CPU *c) {
  NATIVE_HOOK(0x62759au) REGS; LOADALL;
L_0062759a:;
  /* 0062759a mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 006275a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006275a1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6275a6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6275a1u); RETCHK(0x6275a6u, 0x6275a1u); LOADALL;
  /* 006275a6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006275a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006275a8(CPU *c) {
  NATIVE_HOOK(0x6275a8u) REGS; LOADALL;
L_006275a8:;
  /* 006275a8 lea ecx, [ebp - 0x1d7c] */ ecx = (u32)((u32)(ebp + 0xffffe284u));
  /* 006275ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006275b3(CPU *c) {
  NATIVE_HOOK(0x6275b3u) REGS; LOADALL;
L_006275b3:;
  /* 006275b3 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 006275b9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006275ba call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6275bfu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6275bau); RETCHK(0x6275bfu, 0x6275bau); LOADALL;
  /* 006275bf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006275c0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006275c1(CPU *c) {
  NATIVE_HOOK(0x6275c1u) REGS; LOADALL;
L_006275c1:;
  /* 006275c1 lea ecx, [ebp - 0x1e40] */ ecx = (u32)((u32)(ebp + 0xffffe1c0u));
  /* 006275c7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006275cc(CPU *c) {
  NATIVE_HOOK(0x6275ccu) REGS; LOADALL;
L_006275cc:;
  /* 006275cc mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 006275d2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006275d3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6275d8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6275d3u); RETCHK(0x6275d8u, 0x6275d3u); LOADALL;
  /* 006275d8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006275d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006275da(CPU *c) {
  NATIVE_HOOK(0x6275dau) REGS; LOADALL;
L_006275da:;
  /* 006275da lea ecx, [ebp - 0x1e78] */ ecx = (u32)((u32)(ebp + 0xffffe188u));
  /* 006275e0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006275e5(CPU *c) {
  NATIVE_HOOK(0x6275e5u) REGS; LOADALL;
L_006275e5:;
  /* 006275e5 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 006275eb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006275ec call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6275f1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6275ecu); RETCHK(0x6275f1u, 0x6275ecu); LOADALL;
  /* 006275f1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006275f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006275f3(CPU *c) {
  NATIVE_HOOK(0x6275f3u) REGS; LOADALL;
L_006275f3:;
  /* 006275f3 lea ecx, [ebp - 0x1eb0] */ ecx = (u32)((u32)(ebp + 0xffffe150u));
  /* 006275f9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006275fe(CPU *c) {
  NATIVE_HOOK(0x6275feu) REGS; LOADALL;
L_006275fe:;
  /* 006275fe mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 00627604 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627605 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62760au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627605u); RETCHK(0x62760au, 0x627605u); LOADALL;
  /* 0062760a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062760b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062760c(CPU *c) {
  NATIVE_HOOK(0x62760cu) REGS; LOADALL;
L_0062760c:;
  /* 0062760c lea ecx, [ebp - 0x1ee8] */ ecx = (u32)((u32)(ebp + 0xffffe118u));
  /* 00627612 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627617(CPU *c) {
  NATIVE_HOOK(0x627617u) REGS; LOADALL;
L_00627617:;
  /* 00627617 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 0062761d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062761e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627623u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62761eu); RETCHK(0x627623u, 0x62761eu); LOADALL;
  /* 00627623 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627624 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627625(CPU *c) {
  NATIVE_HOOK(0x627625u) REGS; LOADALL;
L_00627625:;
  /* 00627625 lea ecx, [ebp - 0x1f20] */ ecx = (u32)((u32)(ebp + 0xffffe0e0u));
  /* 0062762b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627630(CPU *c) {
  NATIVE_HOOK(0x627630u) REGS; LOADALL;
L_00627630:;
  /* 00627630 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 00627636 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627637 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62763cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627637u); RETCHK(0x62763cu, 0x627637u); LOADALL;
  /* 0062763c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062763d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062763e(CPU *c) {
  NATIVE_HOOK(0x62763eu) REGS; LOADALL;
L_0062763e:;
  /* 0062763e lea ecx, [ebp - 0x1f58] */ ecx = (u32)((u32)(ebp + 0xffffe0a8u));
  /* 00627644 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627649(CPU *c) {
  NATIVE_HOOK(0x627649u) REGS; LOADALL;
L_00627649:;
  /* 00627649 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 0062764f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627650 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627655u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627650u); RETCHK(0x627655u, 0x627650u); LOADALL;
  /* 00627655 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627656 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627657(CPU *c) {
  NATIVE_HOOK(0x627657u) REGS; LOADALL;
L_00627657:;
  /* 00627657 lea ecx, [ebp - 0x1f90] */ ecx = (u32)((u32)(ebp + 0xffffe070u));
  /* 0062765d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627662(CPU *c) {
  NATIVE_HOOK(0x627662u) REGS; LOADALL;
L_00627662:;
  /* 00627662 mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 00627668 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627669 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62766eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627669u); RETCHK(0x62766eu, 0x627669u); LOADALL;
  /* 0062766e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062766f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627670(CPU *c) {
  NATIVE_HOOK(0x627670u) REGS; LOADALL;
L_00627670:;
  /* 00627670 lea ecx, [ebp - 0x1fc8] */ ecx = (u32)((u32)(ebp + 0xffffe038u));
  /* 00627676 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062767b(CPU *c) {
  NATIVE_HOOK(0x62767bu) REGS; LOADALL;
L_0062767b:;
  /* 0062767b mov eax, dword ptr [ebp - 0xe14] */ { const u32 m_ = (u32)(ebp + 0xfffff1ecu); eax = (u32)(M32(m_)); }
  /* 00627681 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627682 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627687u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627682u); RETCHK(0x627687u, 0x627682u); LOADALL;
  /* 00627687 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627688 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627689(CPU *c) {
  NATIVE_HOOK(0x627689u) REGS; LOADALL;
L_00627689:;
  /* 00627689 lea ecx, [ebp - 0x2000] */ ecx = (u32)((u32)(ebp + 0xffffe000u));
  /* 0062768f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627694(CPU *c) {
  NATIVE_HOOK(0x627694u) REGS; LOADALL;
L_00627694:;
  /* 00627694 lea ecx, [ebp - 0x2038] */ ecx = (u32)((u32)(ebp + 0xffffdfc8u));
  /* 0062769a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062769f(CPU *c) {
  NATIVE_HOOK(0x62769fu) REGS; LOADALL;
L_0062769f:;
  /* 0062769f mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 006276a5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006276a6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6276abu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6276a6u); RETCHK(0x6276abu, 0x6276a6u); LOADALL;
  /* 006276ab pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006276ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006276ad(CPU *c) {
  NATIVE_HOOK(0x6276adu) REGS; LOADALL;
L_006276ad:;
  /* 006276ad lea ecx, [ebp - 0x2070] */ ecx = (u32)((u32)(ebp + 0xffffdf90u));
  /* 006276b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006276b8(CPU *c) {
  NATIVE_HOOK(0x6276b8u) REGS; LOADALL;
L_006276b8:;
  /* 006276b8 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 006276be push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006276bf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6276c4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6276bfu); RETCHK(0x6276c4u, 0x6276bfu); LOADALL;
  /* 006276c4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006276c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006276c6(CPU *c) {
  NATIVE_HOOK(0x6276c6u) REGS; LOADALL;
L_006276c6:;
  /* 006276c6 lea ecx, [ebp - 0x20a8] */ ecx = (u32)((u32)(ebp + 0xffffdf58u));
  /* 006276cc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006276d1(CPU *c) {
  NATIVE_HOOK(0x6276d1u) REGS; LOADALL;
L_006276d1:;
  /* 006276d1 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 006276d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006276d8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6276ddu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6276d8u); RETCHK(0x6276ddu, 0x6276d8u); LOADALL;
  /* 006276dd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006276de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006276df(CPU *c) {
  NATIVE_HOOK(0x6276dfu) REGS; LOADALL;
L_006276df:;
  /* 006276df lea ecx, [ebp - 0x20e0] */ ecx = (u32)((u32)(ebp + 0xffffdf20u));
  /* 006276e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006276ea(CPU *c) {
  NATIVE_HOOK(0x6276eau) REGS; LOADALL;
L_006276ea:;
  /* 006276ea mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 006276f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006276f1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6276f6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6276f1u); RETCHK(0x6276f6u, 0x6276f1u); LOADALL;
  /* 006276f6 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006276f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006276f8(CPU *c) {
  NATIVE_HOOK(0x6276f8u) REGS; LOADALL;
L_006276f8:;
  /* 006276f8 lea ecx, [ebp - 0x2118] */ ecx = (u32)((u32)(ebp + 0xffffdee8u));
  /* 006276fe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627703(CPU *c) {
  NATIVE_HOOK(0x627703u) REGS; LOADALL;
L_00627703:;
  /* 00627703 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 00627709 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062770a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62770fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62770au); RETCHK(0x62770fu, 0x62770au); LOADALL;
  /* 0062770f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627710 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627711(CPU *c) {
  NATIVE_HOOK(0x627711u) REGS; LOADALL;
L_00627711:;
  /* 00627711 lea ecx, [ebp - 0x2150] */ ecx = (u32)((u32)(ebp + 0xffffdeb0u));
  /* 00627717 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062771c(CPU *c) {
  NATIVE_HOOK(0x62771cu) REGS; LOADALL;
L_0062771c:;
  /* 0062771c mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 00627722 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627723 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627728u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627723u); RETCHK(0x627728u, 0x627723u); LOADALL;
  /* 00627728 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627729 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062772a(CPU *c) {
  NATIVE_HOOK(0x62772au) REGS; LOADALL;
L_0062772a:;
  /* 0062772a lea ecx, [ebp - 0x2188] */ ecx = (u32)((u32)(ebp + 0xffffde78u));
  /* 00627730 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627735(CPU *c) {
  NATIVE_HOOK(0x627735u) REGS; LOADALL;
L_00627735:;
  /* 00627735 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 0062773b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062773c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627741u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62773cu); RETCHK(0x627741u, 0x62773cu); LOADALL;
  /* 00627741 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627742 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627743(CPU *c) {
  NATIVE_HOOK(0x627743u) REGS; LOADALL;
L_00627743:;
  /* 00627743 lea ecx, [ebp - 0x21c0] */ ecx = (u32)((u32)(ebp + 0xffffde40u));
  /* 00627749 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062774e(CPU *c) {
  NATIVE_HOOK(0x62774eu) REGS; LOADALL;
L_0062774e:;
  /* 0062774e mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 00627754 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627755 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62775au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627755u); RETCHK(0x62775au, 0x627755u); LOADALL;
  /* 0062775a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062775b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062775c(CPU *c) {
  NATIVE_HOOK(0x62775cu) REGS; LOADALL;
L_0062775c:;
  /* 0062775c lea ecx, [ebp - 0x21f8] */ ecx = (u32)((u32)(ebp + 0xffffde08u));
  /* 00627762 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627767(CPU *c) {
  NATIVE_HOOK(0x627767u) REGS; LOADALL;
L_00627767:;
  /* 00627767 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 0062776d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062776e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627773u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62776eu); RETCHK(0x627773u, 0x62776eu); LOADALL;
  /* 00627773 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627774 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627775(CPU *c) {
  NATIVE_HOOK(0x627775u) REGS; LOADALL;
L_00627775:;
  /* 00627775 lea ecx, [ebp - 0x2230] */ ecx = (u32)((u32)(ebp + 0xffffddd0u));
  /* 0062777b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627780(CPU *c) {
  NATIVE_HOOK(0x627780u) REGS; LOADALL;
L_00627780:;
  /* 00627780 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 00627786 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627787 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62778cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627787u); RETCHK(0x62778cu, 0x627787u); LOADALL;
  /* 0062778c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062778d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062778e(CPU *c) {
  NATIVE_HOOK(0x62778eu) REGS; LOADALL;
L_0062778e:;
  /* 0062778e lea ecx, [ebp - 0x2268] */ ecx = (u32)((u32)(ebp + 0xffffdd98u));
  /* 00627794 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627799(CPU *c) {
  NATIVE_HOOK(0x627799u) REGS; LOADALL;
L_00627799:;
  /* 00627799 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 0062779f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006277a0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6277a5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6277a0u); RETCHK(0x6277a5u, 0x6277a0u); LOADALL;
  /* 006277a5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006277a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006277a7(CPU *c) {
  NATIVE_HOOK(0x6277a7u) REGS; LOADALL;
L_006277a7:;
  /* 006277a7 lea ecx, [ebp - 0x22a0] */ ecx = (u32)((u32)(ebp + 0xffffdd60u));
  /* 006277ad jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006277b2(CPU *c) {
  NATIVE_HOOK(0x6277b2u) REGS; LOADALL;
L_006277b2:;
  /* 006277b2 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 006277b8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006277b9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6277beu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6277b9u); RETCHK(0x6277beu, 0x6277b9u); LOADALL;
  /* 006277be pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006277bf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006277c0(CPU *c) {
  NATIVE_HOOK(0x6277c0u) REGS; LOADALL;
L_006277c0:;
  /* 006277c0 lea ecx, [ebp - 0x22d8] */ ecx = (u32)((u32)(ebp + 0xffffdd28u));
  /* 006277c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006277cb(CPU *c) {
  NATIVE_HOOK(0x6277cbu) REGS; LOADALL;
L_006277cb:;
  /* 006277cb mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 006277d1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006277d2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6277d7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6277d2u); RETCHK(0x6277d7u, 0x6277d2u); LOADALL;
  /* 006277d7 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006277d8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006277d9(CPU *c) {
  NATIVE_HOOK(0x6277d9u) REGS; LOADALL;
L_006277d9:;
  /* 006277d9 lea ecx, [ebp - 0x2310] */ ecx = (u32)((u32)(ebp + 0xffffdcf0u));
  /* 006277df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006277e4(CPU *c) {
  NATIVE_HOOK(0x6277e4u) REGS; LOADALL;
L_006277e4:;
  /* 006277e4 mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 006277ea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006277eb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6277f0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6277ebu); RETCHK(0x6277f0u, 0x6277ebu); LOADALL;
  /* 006277f0 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006277f1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006277f2(CPU *c) {
  NATIVE_HOOK(0x6277f2u) REGS; LOADALL;
L_006277f2:;
  /* 006277f2 lea ecx, [ebp - 0x2348] */ ecx = (u32)((u32)(ebp + 0xffffdcb8u));
  /* 006277f8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006277fd(CPU *c) {
  NATIVE_HOOK(0x6277fdu) REGS; LOADALL;
L_006277fd:;
  /* 006277fd mov eax, dword ptr [ebp - 0xe18] */ { const u32 m_ = (u32)(ebp + 0xfffff1e8u); eax = (u32)(M32(m_)); }
  /* 00627803 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627804 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627809u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627804u); RETCHK(0x627809u, 0x627804u); LOADALL;
  /* 00627809 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062780a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062780b(CPU *c) {
  NATIVE_HOOK(0x62780bu) REGS; LOADALL;
L_0062780b:;
  /* 0062780b lea ecx, [ebp - 0x2380] */ ecx = (u32)((u32)(ebp + 0xffffdc80u));
  /* 00627811 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627816(CPU *c) {
  NATIVE_HOOK(0x627816u) REGS; LOADALL;
L_00627816:;
  /* 00627816 lea ecx, [ebp - 0x23b8] */ ecx = (u32)((u32)(ebp + 0xffffdc48u));
  /* 0062781c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627821(CPU *c) {
  NATIVE_HOOK(0x627821u) REGS; LOADALL;
L_00627821:;
  /* 00627821 lea ecx, [ebp - 0x23f0] */ ecx = (u32)((u32)(ebp + 0xffffdc10u));
  /* 00627827 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062782c(CPU *c) {
  NATIVE_HOOK(0x62782cu) REGS; LOADALL;
L_0062782c:;
  /* 0062782c lea ecx, [ebp - 0x2428] */ ecx = (u32)((u32)(ebp + 0xffffdbd8u));
  /* 00627832 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627837(CPU *c) {
  NATIVE_HOOK(0x627837u) REGS; LOADALL;
L_00627837:;
  /* 00627837 lea ecx, [ebp - 0x2460] */ ecx = (u32)((u32)(ebp + 0xffffdba0u));
  /* 0062783d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627842(CPU *c) {
  NATIVE_HOOK(0x627842u) REGS; LOADALL;
L_00627842:;
  /* 00627842 lea ecx, [ebp - 0x2498] */ ecx = (u32)((u32)(ebp + 0xffffdb68u));
  /* 00627848 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062784d(CPU *c) {
  NATIVE_HOOK(0x62784du) REGS; LOADALL;
L_0062784d:;
  /* 0062784d lea ecx, [ebp - 0x24d0] */ ecx = (u32)((u32)(ebp + 0xffffdb30u));
  /* 00627853 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627858(CPU *c) {
  NATIVE_HOOK(0x627858u) REGS; LOADALL;
L_00627858:;
  /* 00627858 lea ecx, [ebp - 0x2508] */ ecx = (u32)((u32)(ebp + 0xffffdaf8u));
  /* 0062785e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627863(CPU *c) {
  NATIVE_HOOK(0x627863u) REGS; LOADALL;
L_00627863:;
  /* 00627863 lea ecx, [ebp - 0x2540] */ ecx = (u32)((u32)(ebp + 0xffffdac0u));
  /* 00627869 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062786e(CPU *c) {
  NATIVE_HOOK(0x62786eu) REGS; LOADALL;
L_0062786e:;
  /* 0062786e lea ecx, [ebp - 0x2578] */ ecx = (u32)((u32)(ebp + 0xffffda88u));
  /* 00627874 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627879(CPU *c) {
  NATIVE_HOOK(0x627879u) REGS; LOADALL;
L_00627879:;
  /* 00627879 lea ecx, [ebp - 0x25b0] */ ecx = (u32)((u32)(ebp + 0xffffda50u));
  /* 0062787f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627884(CPU *c) {
  NATIVE_HOOK(0x627884u) REGS; LOADALL;
L_00627884:;
  /* 00627884 lea ecx, [ebp - 0x25e8] */ ecx = (u32)((u32)(ebp + 0xffffda18u));
  /* 0062788a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062788f(CPU *c) {
  NATIVE_HOOK(0x62788fu) REGS; LOADALL;
L_0062788f:;
  /* 0062788f lea ecx, [ebp - 0x2620] */ ecx = (u32)((u32)(ebp + 0xffffd9e0u));
  /* 00627895 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062789a(CPU *c) {
  NATIVE_HOOK(0x62789au) REGS; LOADALL;
L_0062789a:;
  /* 0062789a lea ecx, [ebp - 0x2658] */ ecx = (u32)((u32)(ebp + 0xffffd9a8u));
  /* 006278a0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278a5(CPU *c) {
  NATIVE_HOOK(0x6278a5u) REGS; LOADALL;
L_006278a5:;
  /* 006278a5 lea ecx, [ebp - 0x2690] */ ecx = (u32)((u32)(ebp + 0xffffd970u));
  /* 006278ab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278b0(CPU *c) {
  NATIVE_HOOK(0x6278b0u) REGS; LOADALL;
L_006278b0:;
  /* 006278b0 lea ecx, [ebp - 0x26c8] */ ecx = (u32)((u32)(ebp + 0xffffd938u));
  /* 006278b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278bb(CPU *c) {
  NATIVE_HOOK(0x6278bbu) REGS; LOADALL;
L_006278bb:;
  /* 006278bb lea ecx, [ebp - 0x2700] */ ecx = (u32)((u32)(ebp + 0xffffd900u));
  /* 006278c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278c6(CPU *c) {
  NATIVE_HOOK(0x6278c6u) REGS; LOADALL;
L_006278c6:;
  /* 006278c6 lea ecx, [ebp - 0x2738] */ ecx = (u32)((u32)(ebp + 0xffffd8c8u));
  /* 006278cc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278d1(CPU *c) {
  NATIVE_HOOK(0x6278d1u) REGS; LOADALL;
L_006278d1:;
  /* 006278d1 lea ecx, [ebp - 0x2770] */ ecx = (u32)((u32)(ebp + 0xffffd890u));
  /* 006278d7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278dc(CPU *c) {
  NATIVE_HOOK(0x6278dcu) REGS; LOADALL;
L_006278dc:;
  /* 006278dc lea ecx, [ebp - 0x27a8] */ ecx = (u32)((u32)(ebp + 0xffffd858u));
  /* 006278e2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278e7(CPU *c) {
  NATIVE_HOOK(0x6278e7u) REGS; LOADALL;
L_006278e7:;
  /* 006278e7 lea ecx, [ebp - 0x27e0] */ ecx = (u32)((u32)(ebp + 0xffffd820u));
  /* 006278ed jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278f2(CPU *c) {
  NATIVE_HOOK(0x6278f2u) REGS; LOADALL;
L_006278f2:;
  /* 006278f2 lea ecx, [ebp - 0x2818] */ ecx = (u32)((u32)(ebp + 0xffffd7e8u));
  /* 006278f8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006278fd(CPU *c) {
  NATIVE_HOOK(0x6278fdu) REGS; LOADALL;
L_006278fd:;
  /* 006278fd lea ecx, [ebp - 0x2850] */ ecx = (u32)((u32)(ebp + 0xffffd7b0u));
  /* 00627903 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627908(CPU *c) {
  NATIVE_HOOK(0x627908u) REGS; LOADALL;
L_00627908:;
  /* 00627908 lea ecx, [ebp - 0x2888] */ ecx = (u32)((u32)(ebp + 0xffffd778u));
  /* 0062790e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627913(CPU *c) {
  NATIVE_HOOK(0x627913u) REGS; LOADALL;
L_00627913:;
  /* 00627913 lea ecx, [ebp - 0x28c0] */ ecx = (u32)((u32)(ebp + 0xffffd740u));
  /* 00627919 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062791e(CPU *c) {
  NATIVE_HOOK(0x62791eu) REGS; LOADALL;
L_0062791e:;
  /* 0062791e lea ecx, [ebp - 0x28f8] */ ecx = (u32)((u32)(ebp + 0xffffd708u));
  /* 00627924 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627929(CPU *c) {
  NATIVE_HOOK(0x627929u) REGS; LOADALL;
L_00627929:;
  /* 00627929 lea ecx, [ebp - 0x2930] */ ecx = (u32)((u32)(ebp + 0xffffd6d0u));
  /* 0062792f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627934(CPU *c) {
  NATIVE_HOOK(0x627934u) REGS; LOADALL;
L_00627934:;
  /* 00627934 lea ecx, [ebp - 0x2968] */ ecx = (u32)((u32)(ebp + 0xffffd698u));
  /* 0062793a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062793f(CPU *c) {
  NATIVE_HOOK(0x62793fu) REGS; LOADALL;
L_0062793f:;
  /* 0062793f lea ecx, [ebp - 0x29a0] */ ecx = (u32)((u32)(ebp + 0xffffd660u));
  /* 00627945 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062794a(CPU *c) {
  NATIVE_HOOK(0x62794au) REGS; LOADALL;
L_0062794a:;
  /* 0062794a lea ecx, [ebp - 0x29d8] */ ecx = (u32)((u32)(ebp + 0xffffd628u));
  /* 00627950 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627955(CPU *c) {
  NATIVE_HOOK(0x627955u) REGS; LOADALL;
L_00627955:;
  /* 00627955 lea ecx, [ebp - 0x2a10] */ ecx = (u32)((u32)(ebp + 0xffffd5f0u));
  /* 0062795b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627960(CPU *c) {
  NATIVE_HOOK(0x627960u) REGS; LOADALL;
L_00627960:;
  /* 00627960 lea ecx, [ebp - 0x2a48] */ ecx = (u32)((u32)(ebp + 0xffffd5b8u));
  /* 00627966 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062796b(CPU *c) {
  NATIVE_HOOK(0x62796bu) REGS; LOADALL;
L_0062796b:;
  /* 0062796b lea ecx, [ebp - 0x2a80] */ ecx = (u32)((u32)(ebp + 0xffffd580u));
  /* 00627971 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627976(CPU *c) {
  NATIVE_HOOK(0x627976u) REGS; LOADALL;
L_00627976:;
  /* 00627976 lea ecx, [ebp - 0x2ab8] */ ecx = (u32)((u32)(ebp + 0xffffd548u));
  /* 0062797c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627981(CPU *c) {
  NATIVE_HOOK(0x627981u) REGS; LOADALL;
L_00627981:;
  /* 00627981 lea ecx, [ebp - 0x2af0] */ ecx = (u32)((u32)(ebp + 0xffffd510u));
  /* 00627987 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062798c(CPU *c) {
  NATIVE_HOOK(0x62798cu) REGS; LOADALL;
L_0062798c:;
  /* 0062798c lea ecx, [ebp - 0x2b28] */ ecx = (u32)((u32)(ebp + 0xffffd4d8u));
  /* 00627992 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627997(CPU *c) {
  NATIVE_HOOK(0x627997u) REGS; LOADALL;
L_00627997:;
  /* 00627997 lea ecx, [ebp - 0x2b60] */ ecx = (u32)((u32)(ebp + 0xffffd4a0u));
  /* 0062799d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279a2(CPU *c) {
  NATIVE_HOOK(0x6279a2u) REGS; LOADALL;
L_006279a2:;
  /* 006279a2 lea ecx, [ebp - 0x2b98] */ ecx = (u32)((u32)(ebp + 0xffffd468u));
  /* 006279a8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279ad(CPU *c) {
  NATIVE_HOOK(0x6279adu) REGS; LOADALL;
L_006279ad:;
  /* 006279ad lea ecx, [ebp - 0x2bd0] */ ecx = (u32)((u32)(ebp + 0xffffd430u));
  /* 006279b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279b8(CPU *c) {
  NATIVE_HOOK(0x6279b8u) REGS; LOADALL;
L_006279b8:;
  /* 006279b8 lea ecx, [ebp - 0x2c08] */ ecx = (u32)((u32)(ebp + 0xffffd3f8u));
  /* 006279be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279c3(CPU *c) {
  NATIVE_HOOK(0x6279c3u) REGS; LOADALL;
L_006279c3:;
  /* 006279c3 lea ecx, [ebp - 0x2c40] */ ecx = (u32)((u32)(ebp + 0xffffd3c0u));
  /* 006279c9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279ce(CPU *c) {
  NATIVE_HOOK(0x6279ceu) REGS; LOADALL;
L_006279ce:;
  /* 006279ce lea ecx, [ebp - 0x2c78] */ ecx = (u32)((u32)(ebp + 0xffffd388u));
  /* 006279d4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279d9(CPU *c) {
  NATIVE_HOOK(0x6279d9u) REGS; LOADALL;
L_006279d9:;
  /* 006279d9 lea ecx, [ebp - 0x2cb0] */ ecx = (u32)((u32)(ebp + 0xffffd350u));
  /* 006279df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279e4(CPU *c) {
  NATIVE_HOOK(0x6279e4u) REGS; LOADALL;
L_006279e4:;
  /* 006279e4 lea ecx, [ebp - 0x2ce8] */ ecx = (u32)((u32)(ebp + 0xffffd318u));
  /* 006279ea jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279ef(CPU *c) {
  NATIVE_HOOK(0x6279efu) REGS; LOADALL;
L_006279ef:;
  /* 006279ef lea ecx, [ebp - 0x2d20] */ ecx = (u32)((u32)(ebp + 0xffffd2e0u));
  /* 006279f5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006279fa(CPU *c) {
  NATIVE_HOOK(0x6279fau) REGS; LOADALL;
L_006279fa:;
  /* 006279fa lea ecx, [ebp - 0x2d58] */ ecx = (u32)((u32)(ebp + 0xffffd2a8u));
  /* 00627a00 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a05(CPU *c) {
  NATIVE_HOOK(0x627a05u) REGS; LOADALL;
L_00627a05:;
  /* 00627a05 lea ecx, [ebp - 0x2d90] */ ecx = (u32)((u32)(ebp + 0xffffd270u));
  /* 00627a0b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a10(CPU *c) {
  NATIVE_HOOK(0x627a10u) REGS; LOADALL;
L_00627a10:;
  /* 00627a10 lea ecx, [ebp - 0x2dc8] */ ecx = (u32)((u32)(ebp + 0xffffd238u));
  /* 00627a16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a1b(CPU *c) {
  NATIVE_HOOK(0x627a1bu) REGS; LOADALL;
L_00627a1b:;
  /* 00627a1b lea ecx, [ebp - 0x2e00] */ ecx = (u32)((u32)(ebp + 0xffffd200u));
  /* 00627a21 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a26(CPU *c) {
  NATIVE_HOOK(0x627a26u) REGS; LOADALL;
L_00627a26:;
  /* 00627a26 lea ecx, [ebp - 0x2e38] */ ecx = (u32)((u32)(ebp + 0xffffd1c8u));
  /* 00627a2c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a31(CPU *c) {
  NATIVE_HOOK(0x627a31u) REGS; LOADALL;
L_00627a31:;
  /* 00627a31 lea ecx, [ebp - 0x2e70] */ ecx = (u32)((u32)(ebp + 0xffffd190u));
  /* 00627a37 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a3c(CPU *c) {
  NATIVE_HOOK(0x627a3cu) REGS; LOADALL;
L_00627a3c:;
  /* 00627a3c lea ecx, [ebp - 0x2ea8] */ ecx = (u32)((u32)(ebp + 0xffffd158u));
  /* 00627a42 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a47(CPU *c) {
  NATIVE_HOOK(0x627a47u) REGS; LOADALL;
L_00627a47:;
  /* 00627a47 lea ecx, [ebp - 0x2ee0] */ ecx = (u32)((u32)(ebp + 0xffffd120u));
  /* 00627a4d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a52(CPU *c) {
  NATIVE_HOOK(0x627a52u) REGS; LOADALL;
L_00627a52:;
  /* 00627a52 lea ecx, [ebp - 0x2f18] */ ecx = (u32)((u32)(ebp + 0xffffd0e8u));
  /* 00627a58 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a5d(CPU *c) {
  NATIVE_HOOK(0x627a5du) REGS; LOADALL;
  goto L_00627a5d;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627a5d:;
  /* 00627a5d mov eax, 0x66ec68 */ { eax = (u32)(0x66ec68u); }
  /* 00627a62 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627a70(CPU *c) {
  NATIVE_HOOK(0x627a70u) REGS; LOADALL;
L_00627a70:;
  /* 00627a70 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00627a73 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00627a78(CPU *c) {
  NATIVE_HOOK(0x627a78u) REGS; LOADALL;
L_00627a78:;
  /* 00627a78 lea ecx, [ebp - 0x518] */ ecx = (u32)((u32)(ebp + 0xfffffae8u));
  /* 00627a7e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a83(CPU *c) {
  NATIVE_HOOK(0x627a83u) REGS; LOADALL;
L_00627a83:;
  /* 00627a83 lea ecx, [ebp - 0x828] */ ecx = (u32)((u32)(ebp + 0xfffff7d8u));
  /* 00627a89 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a8e(CPU *c) {
  NATIVE_HOOK(0x627a8eu) REGS; LOADALL;
L_00627a8e:;
  /* 00627a8e lea ecx, [ebp - 0x860] */ ecx = (u32)((u32)(ebp + 0xfffff7a0u));
  /* 00627a94 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627a99(CPU *c) {
  NATIVE_HOOK(0x627a99u) REGS; LOADALL;
L_00627a99:;
  /* 00627a99 lea ecx, [ebp - 0x80c] */ ecx = (u32)((u32)(ebp + 0xfffff7f4u));
  /* 00627a9f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627aa4(CPU *c) {
  NATIVE_HOOK(0x627aa4u) REGS; LOADALL;
L_00627aa4:;
  /* 00627aa4 lea ecx, [ebp - 0x4e0] */ ecx = (u32)((u32)(ebp + 0xfffffb20u));
  /* 00627aaa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627aaf(CPU *c) {
  NATIVE_HOOK(0x627aafu) REGS; LOADALL;
L_00627aaf:;
  /* 00627aaf mov ecx, dword ptr [ebp - 0x3f8] */ { const u32 m_ = (u32)(ebp + 0xfffffc08u); ecx = (u32)(M32(m_)); }
  /* 00627ab5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627aba(CPU *c) {
  NATIVE_HOOK(0x627abau) REGS; LOADALL;
L_00627aba:;
  /* 00627aba lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00627abd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ac2(CPU *c) {
  NATIVE_HOOK(0x627ac2u) REGS; LOADALL;
L_00627ac2:;
  /* 00627ac2 lea ecx, [ebp - 0x87c] */ ecx = (u32)((u32)(ebp + 0xfffff784u));
  /* 00627ac8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627acd(CPU *c) {
  NATIVE_HOOK(0x627acdu) REGS; LOADALL;
L_00627acd:;
  /* 00627acd lea ecx, [ebp - 0x6d8] */ ecx = (u32)((u32)(ebp + 0xfffff928u));
  /* 00627ad3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ad8(CPU *c) {
  NATIVE_HOOK(0x627ad8u) REGS; LOADALL;
L_00627ad8:;
  /* 00627ad8 lea ecx, [ebp - 0x4a8] */ ecx = (u32)((u32)(ebp + 0xfffffb58u));
  /* 00627ade jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ae3(CPU *c) {
  NATIVE_HOOK(0x627ae3u) REGS; LOADALL;
L_00627ae3:;
  /* 00627ae3 lea ecx, [ebp - 0x7d4] */ ecx = (u32)((u32)(ebp + 0xfffff82cu));
  /* 00627ae9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627aee(CPU *c) {
  NATIVE_HOOK(0x627aeeu) REGS; LOADALL;
L_00627aee:;
  /* 00627aee lea ecx, [ebp - 0x550] */ ecx = (u32)((u32)(ebp + 0xfffffab0u));
  /* 00627af4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627af9(CPU *c) {
  NATIVE_HOOK(0x627af9u) REGS; LOADALL;
L_00627af9:;
  /* 00627af9 lea ecx, [ebp - 0x710] */ ecx = (u32)((u32)(ebp + 0xfffff8f0u));
  /* 00627aff jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b04(CPU *c) {
  NATIVE_HOOK(0x627b04u) REGS; LOADALL;
L_00627b04:;
  /* 00627b04 lea ecx, [ebp - 0x588] */ ecx = (u32)((u32)(ebp + 0xfffffa78u));
  /* 00627b0a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b0f(CPU *c) {
  NATIVE_HOOK(0x627b0fu) REGS; LOADALL;
L_00627b0f:;
  /* 00627b0f lea ecx, [ebp - 0x844] */ ecx = (u32)((u32)(ebp + 0xfffff7bcu));
  /* 00627b15 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b1a(CPU *c) {
  NATIVE_HOOK(0x627b1au) REGS; LOADALL;
L_00627b1a:;
  /* 00627b1a lea ecx, [ebp - 0x5c0] */ ecx = (u32)((u32)(ebp + 0xfffffa40u));
  /* 00627b20 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b25(CPU *c) {
  NATIVE_HOOK(0x627b25u) REGS; LOADALL;
L_00627b25:;
  /* 00627b25 lea ecx, [ebp - 0x748] */ ecx = (u32)((u32)(ebp + 0xfffff8b8u));
  /* 00627b2b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b30(CPU *c) {
  NATIVE_HOOK(0x627b30u) REGS; LOADALL;
L_00627b30:;
  /* 00627b30 lea ecx, [ebp - 0x5f8] */ ecx = (u32)((u32)(ebp + 0xfffffa08u));
  /* 00627b36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b3b(CPU *c) {
  NATIVE_HOOK(0x627b3bu) REGS; LOADALL;
L_00627b3b:;
  /* 00627b3b lea ecx, [ebp - 0x79c] */ ecx = (u32)((u32)(ebp + 0xfffff864u));
  /* 00627b41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b46(CPU *c) {
  NATIVE_HOOK(0x627b46u) REGS; LOADALL;
L_00627b46:;
  /* 00627b46 lea ecx, [ebp - 0x630] */ ecx = (u32)((u32)(ebp + 0xfffff9d0u));
  /* 00627b4c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b51(CPU *c) {
  NATIVE_HOOK(0x627b51u) REGS; LOADALL;
L_00627b51:;
  /* 00627b51 mov ecx, dword ptr [ebp - 0x484] */ { const u32 m_ = (u32)(ebp + 0xfffffb7cu); ecx = (u32)(M32(m_)); }
  /* 00627b57 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b5c(CPU *c) {
  NATIVE_HOOK(0x627b5cu) REGS; LOADALL;
L_00627b5c:;
  /* 00627b5c lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00627b5f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b64(CPU *c) {
  NATIVE_HOOK(0x627b64u) REGS; LOADALL;
L_00627b64:;
  /* 00627b64 lea ecx, [ebp - 0x898] */ ecx = (u32)((u32)(ebp + 0xfffff768u));
  /* 00627b6a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b6f(CPU *c) {
  NATIVE_HOOK(0x627b6fu) REGS; LOADALL;
L_00627b6f:;
  /* 00627b6f lea ecx, [ebp - 0x780] */ ecx = (u32)((u32)(ebp + 0xfffff880u));
  /* 00627b75 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b7a(CPU *c) {
  NATIVE_HOOK(0x627b7au) REGS; LOADALL;
L_00627b7a:;
  /* 00627b7a lea ecx, [ebp - 0x668] */ ecx = (u32)((u32)(ebp + 0xfffff998u));
  /* 00627b80 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b85(CPU *c) {
  NATIVE_HOOK(0x627b85u) REGS; LOADALL;
L_00627b85:;
  /* 00627b85 lea ecx, [ebp - 0x7b8] */ ecx = (u32)((u32)(ebp + 0xfffff848u));
  /* 00627b8b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627b90(CPU *c) {
  NATIVE_HOOK(0x627b90u) REGS; LOADALL;
L_00627b90:;
  /* 00627b90 lea ecx, [ebp - 0x6a0] */ ecx = (u32)((u32)(ebp + 0xfffff960u));
  /* 00627b96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
