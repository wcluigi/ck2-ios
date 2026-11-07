#include "funcs.h"

void F_0061fd5b(CPU *c) {
  NATIVE_HOOK(0x61fd5bu) REGS; LOADALL;
L_0061fd5b:;
  /* 0061fd5b lea ecx, [ebp - 0x4cc] */ ecx = (u32)((u32)(ebp + 0xfffffb34u));
  /* 0061fd61 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fd66(CPU *c) {
  NATIVE_HOOK(0x61fd66u) REGS; LOADALL;
  goto L_0061fd66;
L_004b40a0:;
  /* 004b40a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004b40a1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004b40a3 add esi, 0x54 */ { u32 a_ = esi, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004b40a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004b40a8 call 0x4d0df0 */ esp -= 4; M32(esp) = 0x4b40adu; SAVEALL; F_004d0df0(c); ABI_CHECK(0x4d0df0u, 0x4b40a8u); RETCHK(0x4b40adu, 0x4b40a8u); LOADALL;
  /* 004b40ad mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004b40af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004b40b0 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061fd66:;
  /* 0061fd66 lea eax, [ebp - 0x674] */ eax = (u32)((u32)(ebp + 0xfffff98cu));
  /* 0061fd6c jmp 0x4b40a0 */ goto L_004b40a0;
}

void F_0061fd71(CPU *c) {
  NATIVE_HOOK(0x61fd71u) REGS; LOADALL;
L_0061fd71:;
  /* 0061fd71 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061fd74 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fd79(CPU *c) {
  NATIVE_HOOK(0x61fd79u) REGS; LOADALL;
L_0061fd79:;
  /* 0061fd79 lea ecx, [ebp - 0x4b0] */ ecx = (u32)((u32)(ebp + 0xfffffb50u));
  /* 0061fd7f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fd84(CPU *c) {
  NATIVE_HOOK(0x61fd84u) REGS; LOADALL;
  goto L_0061fd84;
L_004b40a0:;
  /* 004b40a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004b40a1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004b40a3 add esi, 0x54 */ { u32 a_ = esi, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004b40a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004b40a8 call 0x4d0df0 */ esp -= 4; M32(esp) = 0x4b40adu; SAVEALL; F_004d0df0(c); ABI_CHECK(0x4d0df0u, 0x4b40a8u); RETCHK(0x4b40adu, 0x4b40a8u); LOADALL;
  /* 004b40ad mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004b40af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004b40b0 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_0061fd84:;
  /* 0061fd84 lea eax, [ebp - 0x5ec] */ eax = (u32)((u32)(ebp + 0xfffffa14u));
  /* 0061fd8a jmp 0x4b40a0 */ goto L_004b40a0;
}

void F_0061fd8f(CPU *c) {
  NATIVE_HOOK(0x61fd8fu) REGS; LOADALL;
L_0061fd8f:;
  /* 0061fd8f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061fd92 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fd97(CPU *c) {
  NATIVE_HOOK(0x61fd97u) REGS; LOADALL;
  goto L_0061fd97;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fd97:;
  /* 0061fd97 mov eax, 0x664be0 */ { eax = (u32)(0x664be0u); }
  /* 0061fd9c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fdb0(CPU *c) {
  NATIVE_HOOK(0x61fdb0u) REGS; LOADALL;
L_0061fdb0:;
  /* 0061fdb0 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0061fdb3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fdb8(CPU *c) {
  NATIVE_HOOK(0x61fdb8u) REGS; LOADALL;
L_0061fdb8:;
  /* 0061fdb8 lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0061fdbb jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061fdc0(CPU *c) {
  NATIVE_HOOK(0x61fdc0u) REGS; LOADALL;
L_0061fdc0:;
  /* 0061fdc0 lea esi, [ebp - 0x78] */ esi = (u32)((u32)(ebp + 0xffffff88u));
  /* 0061fdc3 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061fdc8(CPU *c) {
  NATIVE_HOOK(0x61fdc8u) REGS; LOADALL;
  goto L_0061fdc8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fdc8:;
  /* 0061fdc8 mov eax, 0x664c14 */ { eax = (u32)(0x664c14u); }
  /* 0061fdcd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fde0(CPU *c) {
  NATIVE_HOOK(0x61fde0u) REGS; LOADALL;
L_0061fde0:;
  /* 0061fde0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061fde3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fde8(CPU *c) {
  NATIVE_HOOK(0x61fde8u) REGS; LOADALL;
  goto L_0061fde8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fde8:;
  /* 0061fde8 mov eax, 0x664c5c */ { eax = (u32)(0x664c5cu); }
  /* 0061fded jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fe00(CPU *c) {
  NATIVE_HOOK(0x61fe00u) REGS; LOADALL;
L_0061fe00:;
  /* 0061fe00 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0061fe03 jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061fe08(CPU *c) {
  NATIVE_HOOK(0x61fe08u) REGS; LOADALL;
L_0061fe08:;
  /* 0061fe08 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0061fe0b jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061fe10(CPU *c) {
  NATIVE_HOOK(0x61fe10u) REGS; LOADALL;
L_0061fe10:;
  /* 0061fe10 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061fe13 jmp 0x54e870 */ SAVEALL; F_0054e870(c); return;
}

void F_0061fe18(CPU *c) {
  NATIVE_HOOK(0x61fe18u) REGS; LOADALL;
L_0061fe18:;
  /* 0061fe18 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0061fe1b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fe20(CPU *c) {
  NATIVE_HOOK(0x61fe20u) REGS; LOADALL;
  goto L_0061fe20;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fe20:;
  /* 0061fe20 mov eax, 0x664cbc */ { eax = (u32)(0x664cbcu); }
  /* 0061fe25 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fe30(CPU *c) {
  NATIVE_HOOK(0x61fe30u) REGS; LOADALL;
L_0061fe30:;
  /* 0061fe30 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0061fe33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061fe34 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61fe39u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61fe34u); RETCHK(0x61fe39u, 0x61fe34u); LOADALL;
  /* 0061fe39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061fe3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fe3b(CPU *c) {
  NATIVE_HOOK(0x61fe3bu) REGS; LOADALL;
  goto L_0061fe3b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fe3b:;
  /* 0061fe3b mov eax, 0x664ce0 */ { eax = (u32)(0x664ce0u); }
  /* 0061fe40 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fe50(CPU *c) {
  NATIVE_HOOK(0x61fe50u) REGS; LOADALL;
L_0061fe50:;
  /* 0061fe50 lea esi, [ebp - 0x20] */ esi = (u32)((u32)(ebp + 0xffffffe0u));
  /* 0061fe53 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_0061fe58(CPU *c) {
  NATIVE_HOOK(0x61fe58u) REGS; LOADALL;
  goto L_0061fe58;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fe58:;
  /* 0061fe58 mov eax, 0x664ddc */ { eax = (u32)(0x664ddcu); }
  /* 0061fe5d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fe70(CPU *c) {
  NATIVE_HOOK(0x61fe70u) REGS; LOADALL;
L_0061fe70:;
  /* 0061fe70 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0061fe73 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061fe74 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61fe79u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61fe74u); RETCHK(0x61fe79u, 0x61fe74u); LOADALL;
  /* 0061fe79 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061fe7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fe7b(CPU *c) {
  NATIVE_HOOK(0x61fe7bu) REGS; LOADALL;
L_0061fe7b:;
  /* 0061fe7b lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061fe7e jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_0061fe83(CPU *c) {
  NATIVE_HOOK(0x61fe83u) REGS; LOADALL;
  goto L_0061fe83;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fe83:;
  /* 0061fe83 mov eax, 0x664e08 */ { eax = (u32)(0x664e08u); }
  /* 0061fe88 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fe90(CPU *c) {
  NATIVE_HOOK(0x61fe90u) REGS; LOADALL;
L_0061fe90:;
  /* 0061fe90 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061fe93 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061fe98(CPU *c) {
  NATIVE_HOOK(0x61fe98u) REGS; LOADALL;
L_0061fe98:;
  /* 0061fe98 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0061fe9b jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061fea0(CPU *c) {
  NATIVE_HOOK(0x61fea0u) REGS; LOADALL;
  goto L_0061fea0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fea0:;
  /* 0061fea0 mov eax, 0x664ec4 */ { eax = (u32)(0x664ec4u); }
  /* 0061fea5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061feb0(CPU *c) {
  NATIVE_HOOK(0x61feb0u) REGS; LOADALL;
  goto L_0061feb0;
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
L_0061feb0:;
  /* 0061feb0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061feb3 jmp 0x4b2800 */ goto L_004b2800;
}

void F_0061feb8(CPU *c) {
  NATIVE_HOOK(0x61feb8u) REGS; LOADALL;
  goto L_0061feb8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061feb8:;
  /* 0061feb8 mov eax, 0x664f0c */ { eax = (u32)(0x664f0cu); }
  /* 0061febd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fed0(CPU *c) {
  NATIVE_HOOK(0x61fed0u) REGS; LOADALL;
L_0061fed0:;
  /* 0061fed0 mov eax, dword ptr [0x9bd590] */ { const u32 m_ = (u32)(0x9bd590u); eax = (u32)(M32(m_)); }
  /* 0061fed5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0061fed8 mov dword ptr [0x9bd590], eax */ { const u32 m_ = (u32)(0x9bd590u); M32(m_) = (u32)(eax); }
  /* 0061fedd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061fede(CPU *c) {
  NATIVE_HOOK(0x61fedeu) REGS; LOADALL;
  goto L_0061fede;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061fede:;
  /* 0061fede mov eax, 0x664f30 */ { eax = (u32)(0x664f30u); }
  /* 0061fee3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fef0(CPU *c) {
  NATIVE_HOOK(0x61fef0u) REGS; LOADALL;
L_0061fef0:;
  /* 0061fef0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061fef3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fef8(CPU *c) {
  NATIVE_HOOK(0x61fef8u) REGS; LOADALL;
L_0061fef8:;
  /* 0061fef8 mov eax, dword ptr [ebp - 0x2b8] */ { const u32 m_ = (u32)(ebp + 0xfffffd48u); eax = (u32)(M32(m_)); }
  /* 0061fefe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061feff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x61ff04u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x61feffu); RETCHK(0x61ff04u, 0x61feffu); LOADALL;
  /* 0061ff04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061ff05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ff06(CPU *c) {
  NATIVE_HOOK(0x61ff06u) REGS; LOADALL;
L_0061ff06:;
  /* 0061ff06 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061ff09 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ff0e(CPU *c) {
  NATIVE_HOOK(0x61ff0eu) REGS; LOADALL;
  goto L_0061ff0e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ff0e:;
  /* 0061ff0e mov eax, 0x664f64 */ { eax = (u32)(0x664f64u); }
  /* 0061ff13 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ff20(CPU *c) {
  NATIVE_HOOK(0x61ff20u) REGS; LOADALL;
L_0061ff20:;
  /* 0061ff20 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061ff23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ff28(CPU *c) {
  NATIVE_HOOK(0x61ff28u) REGS; LOADALL;
L_0061ff28:;
  /* 0061ff28 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061ff2b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ff30(CPU *c) {
  NATIVE_HOOK(0x61ff30u) REGS; LOADALL;
  goto L_0061ff30;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ff30:;
  /* 0061ff30 mov eax, 0x6650a4 */ { eax = (u32)(0x6650a4u); }
  /* 0061ff35 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ff40(CPU *c) {
  NATIVE_HOOK(0x61ff40u) REGS; LOADALL;
L_0061ff40:;
  /* 0061ff40 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ff43 jmp 0x505270 */ SAVEALL; F_00505270(c); return;
}

void F_0061ff48(CPU *c) {
  NATIVE_HOOK(0x61ff48u) REGS; LOADALL;
  goto L_0061ff48;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ff48:;
  /* 0061ff48 mov eax, 0x66515c */ { eax = (u32)(0x66515cu); }
  /* 0061ff4d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ff60(CPU *c) {
  NATIVE_HOOK(0x61ff60u) REGS; LOADALL;
L_0061ff60:;
  /* 0061ff60 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061ff63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ff68(CPU *c) {
  NATIVE_HOOK(0x61ff68u) REGS; LOADALL;
L_0061ff68:;
  /* 0061ff68 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061ff6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ff70(CPU *c) {
  NATIVE_HOOK(0x61ff70u) REGS; LOADALL;
L_0061ff70:;
  /* 0061ff70 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061ff73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ff78(CPU *c) {
  NATIVE_HOOK(0x61ff78u) REGS; LOADALL;
  goto L_0061ff78;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ff78:;
  /* 0061ff78 mov eax, 0x6651e0 */ { eax = (u32)(0x6651e0u); }
  /* 0061ff7d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ff90(CPU *c) {
  NATIVE_HOOK(0x61ff90u) REGS; LOADALL;
L_0061ff90:;
  /* 0061ff90 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0061ff93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ff98(CPU *c) {
  NATIVE_HOOK(0x61ff98u) REGS; LOADALL;
L_0061ff98:;
  /* 0061ff98 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061ff9b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ffa0(CPU *c) {
  NATIVE_HOOK(0x61ffa0u) REGS; LOADALL;
  goto L_0061ffa0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ffa0:;
  /* 0061ffa0 mov eax, 0x665254 */ { eax = (u32)(0x665254u); }
  /* 0061ffa5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ffb0(CPU *c) {
  NATIVE_HOOK(0x61ffb0u) REGS; LOADALL;
L_0061ffb0:;
  /* 0061ffb0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ffb3 jmp 0x536920 */ SAVEALL; F_00536920(c); return;
}

void F_0061ffb8(CPU *c) {
  NATIVE_HOOK(0x61ffb8u) REGS; LOADALL;
L_0061ffb8:;
  /* 0061ffb8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ffbb add ecx, 0x1c8 */ { u32 a_ = ecx, b_ = 0x1c8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ffc1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ffc6(CPU *c) {
  NATIVE_HOOK(0x61ffc6u) REGS; LOADALL;
L_0061ffc6:;
  /* 0061ffc6 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061ffc9 add esi, 0x1e4 */ { u32 a_ = esi, b_ = 0x1e4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061ffcf jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_0061ffd4(CPU *c) {
  NATIVE_HOOK(0x61ffd4u) REGS; LOADALL;
L_0061ffd4:;
  /* 0061ffd4 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061ffd7 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0061ffdc(CPU *c) {
  NATIVE_HOOK(0x61ffdcu) REGS; LOADALL;
  goto L_0061ffdc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ffdc:;
  /* 0061ffdc mov eax, 0x6652e0 */ { eax = (u32)(0x6652e0u); }
  /* 0061ffe1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061fff0(CPU *c) {
  NATIVE_HOOK(0x61fff0u) REGS; LOADALL;
L_0061fff0:;
  /* 0061fff0 lea ecx, [ebp + 0x28] */ ecx = (u32)((u32)(ebp + 0x28u));
  /* 0061fff3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061fff8(CPU *c) {
  NATIVE_HOOK(0x61fff8u) REGS; LOADALL;
L_0061fff8:;
  /* 0061fff8 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061fffb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620000(CPU *c) {
  NATIVE_HOOK(0x620000u) REGS; LOADALL;
L_00620000:;
  /* 00620000 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620003 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620008(CPU *c) {
  NATIVE_HOOK(0x620008u) REGS; LOADALL;
L_00620008:;
  /* 00620008 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062000b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620010(CPU *c) {
  NATIVE_HOOK(0x620010u) REGS; LOADALL;
  goto L_00620010;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620010:;
  /* 00620010 mov eax, 0x66550c */ { eax = (u32)(0x66550cu); }
  /* 00620015 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620016(CPU *c) {
  NATIVE_HOOK(0x620016u) REGS; LOADALL;
L_00620016:;
  /* 00620016 adc dh, ch */ { u32 a_ = ((edx >> 8) & 0xffu), b_ = ((ecx >> 8) & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ + b_ + ci_) & 0xffu; u32 co_ = ci_ ? (r_ <= a_) : (r_ < a_); u32 of_ = (((a_ ^ r_) & (b_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); edx = (edx & 0xffff00ffu) | (((u32)(r_) & 0xffu) << 8); }
  /* 00620018 std */ c->df = 1;
  /* 00620019 dec esp */ { u32 a_ = esp; u32 r_ = (a_ - 1u) & 0xffffffffu; esp = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0062001b int3 */ TRAP(0x62001bu, "int3");
}

void F_00620020(CPU *c) {
  NATIVE_HOOK(0x620020u) REGS; LOADALL;
L_00620020:;
  /* 00620020 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00620023 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620028(CPU *c) {
  NATIVE_HOOK(0x620028u) REGS; LOADALL;
L_00620028:;
  /* 00620028 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0062002b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620030(CPU *c) {
  NATIVE_HOOK(0x620030u) REGS; LOADALL;
  goto L_00620030;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620030:;
  /* 00620030 mov eax, 0x665538 */ { eax = (u32)(0x665538u); }
  /* 00620035 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620040(CPU *c) {
  NATIVE_HOOK(0x620040u) REGS; LOADALL;
L_00620040:;
  /* 00620040 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620043 jmp 0x50d8e0 */ SAVEALL; F_0050d8e0(c); return;
}

void F_00620048(CPU *c) {
  NATIVE_HOOK(0x620048u) REGS; LOADALL;
  goto L_00620048;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620048:;
  /* 00620048 mov eax, 0x66555c */ { eax = (u32)(0x66555cu); }
  /* 0062004d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620060(CPU *c) {
  NATIVE_HOOK(0x620060u) REGS; LOADALL;
L_00620060:;
  /* 00620060 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00620063 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620068(CPU *c) {
  NATIVE_HOOK(0x620068u) REGS; LOADALL;
  goto L_00620068;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620068:;
  /* 00620068 mov eax, 0x6655a4 */ { eax = (u32)(0x6655a4u); }
  /* 0062006d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620069(CPU *c) {
  NATIVE_HOOK(0x620069u) REGS; LOADALL;
L_00620069:;
  /* 00620069 movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = M8(esi); esi += st_; edi += st_; }
  /* 0062006a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062006b add cl, ch */ { u32 a_ = (ecx & 0xffu), b_ = ((ecx >> 8) & 0xffu); u32 r_ = (a_ + b_) & 0xffu; SETFC(OP_ADD, a_, b_, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0062006e mov eax, 0xccfffded */ { eax = (u32)(0xccfffdedu); }
  /* 00620073 int3 */ TRAP(0x620073u, "int3");
}

void F_00620080(CPU *c) {
  NATIVE_HOOK(0x620080u) REGS; LOADALL;
L_00620080:;
  /* 00620080 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00620083 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620088(CPU *c) {
  NATIVE_HOOK(0x620088u) REGS; LOADALL;
L_00620088:;
  /* 00620088 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0062008b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620090(CPU *c) {
  NATIVE_HOOK(0x620090u) REGS; LOADALL;
  goto L_00620090;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620090:;
  /* 00620090 mov eax, 0x6655d0 */ { eax = (u32)(0x6655d0u); }
  /* 00620095 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006200a0(CPU *c) {
  NATIVE_HOOK(0x6200a0u) REGS; LOADALL;
L_006200a0:;
  /* 006200a0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006200a3 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_006200a8(CPU *c) {
  NATIVE_HOOK(0x6200a8u) REGS; LOADALL;
L_006200a8:;
  /* 006200a8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006200ab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006200b0(CPU *c) {
  NATIVE_HOOK(0x6200b0u) REGS; LOADALL;
  goto L_006200b0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006200b0:;
  /* 006200b0 mov eax, 0x6655fc */ { eax = (u32)(0x6655fcu); }
  /* 006200b5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006200c0(CPU *c) {
  NATIVE_HOOK(0x6200c0u) REGS; LOADALL;
L_006200c0:;
  /* 006200c0 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 006200c3 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_006200c8(CPU *c) {
  NATIVE_HOOK(0x6200c8u) REGS; LOADALL;
L_006200c8:;
  /* 006200c8 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006200cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006200d0(CPU *c) {
  NATIVE_HOOK(0x6200d0u) REGS; LOADALL;
  goto L_006200d0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006200d0:;
  /* 006200d0 mov eax, 0x665628 */ { eax = (u32)(0x665628u); }
  /* 006200d5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006200e0(CPU *c) {
  NATIVE_HOOK(0x6200e0u) REGS; LOADALL;
L_006200e0:;
  /* 006200e0 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 006200e3 add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 006200e6 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_006200eb(CPU *c) {
  NATIVE_HOOK(0x6200ebu) REGS; LOADALL;
  goto L_006200eb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006200eb:;
  /* 006200eb mov eax, 0x66564c */ { eax = (u32)(0x66564cu); }
  /* 006200f0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620100(CPU *c) {
  NATIVE_HOOK(0x620100u) REGS; LOADALL;
  goto L_00620100;
L_00529840:;
  /* 00529840 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00529841 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00529843 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00529844 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00529845 mov esi, eax */ { esi = (u32)(eax); }
  /* 00529847 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0052984a mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0052984c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0052984d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052984e lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00529851 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00529852 call 0x52b2e0 */ esp -= 4; M32(esp) = 0x529857u; SAVEALL; F_0052b2e0(c); ABI_CHECK(0x52b2e0u, 0x529852u); RETCHK(0x529857u, 0x529852u); LOADALL;
  /* 00529857 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0052985a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0052985b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x529860u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x52985bu); RETCHK(0x529860u, 0x52985bu); LOADALL;
  /* 00529860 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00529863 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00529865 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00529868 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0052986b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0052986c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0052986e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0052986f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620100:;
  /* 00620100 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00620103 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00620106 jmp 0x529840 */ goto L_00529840;
}

void F_0062010b(CPU *c) {
  NATIVE_HOOK(0x62010bu) REGS; LOADALL;
L_0062010b:;
  /* 0062010b lea esi, [ebp - 0xac] */ esi = (u32)((u32)(ebp + 0xffffff54u));
  /* 00620111 jmp 0x529870 */ SAVEALL; F_00529870(c); return;
}

void F_00620116(CPU *c) {
  NATIVE_HOOK(0x620116u) REGS; LOADALL;
  goto L_00620116;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620116:;
  /* 00620116 mov eax, 0x665678 */ { eax = (u32)(0x665678u); }
  /* 0062011b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620120(CPU *c) {
  NATIVE_HOOK(0x620120u) REGS; LOADALL;
L_00620120:;
  /* 00620120 mov eax, dword ptr [ebp + 0x28] */ { const u32 m_ = (u32)(ebp + 0x28u); eax = (u32)(M32(m_)); }
  /* 00620123 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00620124 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x620129u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x620124u); RETCHK(0x620129u, 0x620124u); LOADALL;
  /* 00620129 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062012a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062012b(CPU *c) {
  NATIVE_HOOK(0x62012bu) REGS; LOADALL;
L_0062012b:;
  /* 0062012b lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0062012e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620133(CPU *c) {
  NATIVE_HOOK(0x620133u) REGS; LOADALL;
  goto L_00620133;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620133:;
  /* 00620133 mov eax, 0x665794 */ { eax = (u32)(0x665794u); }
  /* 00620138 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620140(CPU *c) {
  NATIVE_HOOK(0x620140u) REGS; LOADALL;
L_00620140:;
  /* 00620140 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620143 jmp 0x51c810 */ SAVEALL; F_0051c810(c); return;
}

void F_00620148(CPU *c) {
  NATIVE_HOOK(0x620148u) REGS; LOADALL;
  goto L_00620148;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620148:;
  /* 00620148 mov eax, 0x6658cc */ { eax = (u32)(0x6658ccu); }
  /* 0062014d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620160(CPU *c) {
  NATIVE_HOOK(0x620160u) REGS; LOADALL;
L_00620160:;
  /* 00620160 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620163 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_00620168(CPU *c) {
  NATIVE_HOOK(0x620168u) REGS; LOADALL;
  goto L_00620168;
L_00513140:;
  /* 00513140 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00513141 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00513144 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00513146 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513148 je 0x51316d */ if (ZF_) goto L_0051316d;
  /* 0051314a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0051314b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0051314e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00513150 je 0x51315e */ if (ZF_) goto L_0051315e;
L_00513152:;
  /* 00513152 call 0x5577c0 */ esp -= 4; M32(esp) = 0x513157u; SAVEALL; F_005577c0(c); ABI_CHECK(0x5577c0u, 0x513152u); RETCHK(0x513157u, 0x513152u); LOADALL;
  /* 00513157 add esi, 0x20 */ { u32 a_ = esi, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0051315a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0051315c jne 0x513152 */ if (!ZF_) goto L_00513152;
L_0051315e:;
  /* 0051315e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00513161 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00513162 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x513167u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x513162u); RETCHK(0x513167u, 0x513162u); LOADALL;
  /* 00513167 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051316a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0051316c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0051316d:;
  /* 0051316d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00513170 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00513173 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00513176 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00513177 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620168:;
  /* 00620168 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0062016b add ebx, 0x1cc */ { u32 a_ = ebx, b_ = 0x1ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00620171 jmp 0x513140 */ goto L_00513140;
}

void F_00620176(CPU *c) {
  NATIVE_HOOK(0x620176u) REGS; LOADALL;
L_00620176:;
  /* 00620176 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00620179 add esi, 0x1dc */ { u32 a_ = esi, b_ = 0x1dcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0062017f jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00620184(CPU *c) {
  NATIVE_HOOK(0x620184u) REGS; LOADALL;
  goto L_00620184;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620184:;
  /* 00620184 mov eax, 0x665a90 */ { eax = (u32)(0x665a90u); }
  /* 00620189 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620190(CPU *c) {
  NATIVE_HOOK(0x620190u) REGS; LOADALL;
L_00620190:;
  /* 00620190 lea ecx, [ebp - 0x88] */ ecx = (u32)((u32)(ebp + 0xffffff78u));
  /* 00620196 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062019b(CPU *c) {
  NATIVE_HOOK(0x62019bu) REGS; LOADALL;
  goto L_0062019b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062019b:;
  /* 0062019b mov eax, 0x665ab4 */ { eax = (u32)(0x665ab4u); }
  /* 006201a0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006201b0(CPU *c) {
  NATIVE_HOOK(0x6201b0u) REGS; LOADALL;
L_006201b0:;
  /* 006201b0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006201b3 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_006201b8(CPU *c) {
  NATIVE_HOOK(0x6201b8u) REGS; LOADALL;
L_006201b8:;
  /* 006201b8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006201bb add ecx, 0x1fc */ { u32 a_ = ecx, b_ = 0x1fcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006201c1 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_006201c6(CPU *c) {
  NATIVE_HOOK(0x6201c6u) REGS; LOADALL;
L_006201c6:;
  /* 006201c6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006201c9 add ecx, 0x204 */ { u32 a_ = ecx, b_ = 0x204u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006201cf jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_006201d4(CPU *c) {
  NATIVE_HOOK(0x6201d4u) REGS; LOADALL;
L_006201d4:;
  /* 006201d4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006201d7 add ecx, 0x20c */ { u32 a_ = ecx, b_ = 0x20cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006201dd jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_006201e2(CPU *c) {
  NATIVE_HOOK(0x6201e2u) REGS; LOADALL;
L_006201e2:;
  /* 006201e2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006201e5 add ecx, 0x214 */ { u32 a_ = ecx, b_ = 0x214u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006201eb jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_006201f0(CPU *c) {
  NATIVE_HOOK(0x6201f0u) REGS; LOADALL;
L_006201f0:;
  /* 006201f0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006201f3 add ecx, 0x21c */ { u32 a_ = ecx, b_ = 0x21cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006201f9 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_006201fe(CPU *c) {
  NATIVE_HOOK(0x6201feu) REGS; LOADALL;
L_006201fe:;
  /* 006201fe mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620201 add ecx, 0x224 */ { u32 a_ = ecx, b_ = 0x224u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620207 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_0062020c(CPU *c) {
  NATIVE_HOOK(0x62020cu) REGS; LOADALL;
L_0062020c:;
  /* 0062020c mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0062020f add ecx, 0x22c */ { u32 a_ = ecx, b_ = 0x22cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620215 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_0062021a(CPU *c) {
  NATIVE_HOOK(0x62021au) REGS; LOADALL;
L_0062021a:;
  /* 0062021a mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0062021d add ecx, 0x234 */ { u32 a_ = ecx, b_ = 0x234u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620223 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_00620228(CPU *c) {
  NATIVE_HOOK(0x620228u) REGS; LOADALL;
L_00620228:;
  /* 00620228 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0062022b add ecx, 0x23c */ { u32 a_ = ecx, b_ = 0x23cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620231 jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_00620236(CPU *c) {
  NATIVE_HOOK(0x620236u) REGS; LOADALL;
L_00620236:;
  /* 00620236 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620239 add ecx, 0x244 */ { u32 a_ = ecx, b_ = 0x244u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0062023f jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_00620244(CPU *c) {
  NATIVE_HOOK(0x620244u) REGS; LOADALL;
L_00620244:;
  /* 00620244 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620247 add ecx, 0x24c */ { u32 a_ = ecx, b_ = 0x24cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0062024d jmp 0x529300 */ SAVEALL; F_00529300(c); return;
}

void F_00620252(CPU *c) {
  NATIVE_HOOK(0x620252u) REGS; LOADALL;
  goto L_00620252;
L_00511b10:;
  /* 00511b10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00511b11 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00511b14 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00511b16 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511b18 je 0x511b3d */ if (ZF_) goto L_00511b3d;
  /* 00511b1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00511b1b mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00511b1e cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511b20 je 0x511b2e */ if (ZF_) goto L_00511b2e;
L_00511b22:;
  /* 00511b22 call 0x50f600 */ esp -= 4; M32(esp) = 0x511b27u; SAVEALL; F_0050f600(c); ABI_CHECK(0x50f600u, 0x511b22u); RETCHK(0x511b27u, 0x511b22u); LOADALL;
  /* 00511b27 add esi, 0x6c */ { u32 a_ = esi, b_ = 0x6cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00511b2a cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00511b2c jne 0x511b22 */ if (!ZF_) goto L_00511b22;
L_00511b2e:;
  /* 00511b2e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00511b31 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00511b32 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x511b37u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x511b32u); RETCHK(0x511b37u, 0x511b32u); LOADALL;
  /* 00511b37 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00511b3a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00511b3c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_00511b3d:;
  /* 00511b3d mov dword ptr [ebx + 4], eax */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00511b40 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00511b43 mov dword ptr [ebx + 0xc], eax */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00511b46 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00511b47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620252:;
  /* 00620252 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00620255 add ebx, 0x264 */ { u32 a_ = ebx, b_ = 0x264u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0062025b jmp 0x511b10 */ goto L_00511b10;
}

void F_00620260(CPU *c) {
  NATIVE_HOOK(0x620260u) REGS; LOADALL;
L_00620260:;
  /* 00620260 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620263 add ecx, 0x274 */ { u32 a_ = ecx, b_ = 0x274u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620269 jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0062026e(CPU *c) {
  NATIVE_HOOK(0x62026eu) REGS; LOADALL;
L_0062026e:;
  /* 0062026e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620271 add ecx, 0x31c */ { u32 a_ = ecx, b_ = 0x31cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00620277 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062027c(CPU *c) {
  NATIVE_HOOK(0x62027cu) REGS; LOADALL;
  goto L_0062027c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062027c:;
  /* 0062027c mov eax, 0x665b48 */ { eax = (u32)(0x665b48u); }
  /* 00620281 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620290(CPU *c) {
  NATIVE_HOOK(0x620290u) REGS; LOADALL;
L_00620290:;
  /* 00620290 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00620293 jmp 0x50bc50 */ SAVEALL; F_0050bc50(c); return;
}

void F_00620298(CPU *c) {
  NATIVE_HOOK(0x620298u) REGS; LOADALL;
L_00620298:;
  /* 00620298 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0062029b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062029c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6202a1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62029cu); RETCHK(0x6202a1u, 0x62029cu); LOADALL;
  /* 006202a1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006202a2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006202a3(CPU *c) {
  NATIVE_HOOK(0x6202a3u) REGS; LOADALL;
  goto L_006202a3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006202a3:;
  /* 006202a3 mov eax, 0x665b74 */ { eax = (u32)(0x665b74u); }
  /* 006202a8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006202b0(CPU *c) {
  NATIVE_HOOK(0x6202b0u) REGS; LOADALL;
L_006202b0:;
  /* 006202b0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006202b3 jmp 0x509a20 */ SAVEALL; F_00509a20(c); return;
}

void F_006202b8(CPU *c) {
  NATIVE_HOOK(0x6202b8u) REGS; LOADALL;
L_006202b8:;
  /* 006202b8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006202bb add ecx, 0x35c */ { u32 a_ = ecx, b_ = 0x35cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006202c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006202c6(CPU *c) {
  NATIVE_HOOK(0x6202c6u) REGS; LOADALL;
L_006202c6:;
  /* 006202c6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006202c9 add ecx, 0x378 */ { u32 a_ = ecx, b_ = 0x378u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006202cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006202d4(CPU *c) {
  NATIVE_HOOK(0x6202d4u) REGS; LOADALL;
L_006202d4:;
  /* 006202d4 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006202d7 add ecx, 0x394 */ { u32 a_ = ecx, b_ = 0x394u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006202dd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006202e2(CPU *c) {
  NATIVE_HOOK(0x6202e2u) REGS; LOADALL;
L_006202e2:;
  /* 006202e2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006202e5 add ecx, 0x3b0 */ { u32 a_ = ecx, b_ = 0x3b0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006202eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006202f0(CPU *c) {
  NATIVE_HOOK(0x6202f0u) REGS; LOADALL;
L_006202f0:;
  /* 006202f0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 006202f3 add ecx, 0x3cc */ { u32 a_ = ecx, b_ = 0x3ccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 006202f9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006202fe(CPU *c) {
  NATIVE_HOOK(0x6202feu) REGS; LOADALL;
  goto L_006202fe;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006202fe:;
  /* 006202fe mov eax, 0x665da0 */ { eax = (u32)(0x665da0u); }
  /* 00620303 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620310(CPU *c) {
  NATIVE_HOOK(0x620310u) REGS; LOADALL;
L_00620310:;
  /* 00620310 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00620313 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620318(CPU *c) {
  NATIVE_HOOK(0x620318u) REGS; LOADALL;
  goto L_00620318;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620318:;
  /* 00620318 mov eax, 0x665e38 */ { eax = (u32)(0x665e38u); }
  /* 0062031d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620330(CPU *c) {
  NATIVE_HOOK(0x620330u) REGS; LOADALL;
  goto L_00620330;
L_004fc210:;
  /* 004fc210 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fc212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc213 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc218u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc213u); RETCHK(0x4fc218u, 0x4fc213u); LOADALL;
  /* 004fc218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620330:;
  /* 00620330 lea eax, [ebp - 0x378] */ eax = (u32)((u32)(ebp + 0xfffffc88u));
  /* 00620336 jmp 0x4fc210 */ goto L_004fc210;
}

void F_0062033b(CPU *c) {
  NATIVE_HOOK(0x62033bu) REGS; LOADALL;
L_0062033b:;
  /* 0062033b lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062033e jmp 0x4fc300 */ SAVEALL; F_004fc300(c); return;
}

void F_00620343(CPU *c) {
  NATIVE_HOOK(0x620343u) REGS; LOADALL;
L_00620343:;
  /* 00620343 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620346 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062034b(CPU *c) {
  NATIVE_HOOK(0x62034bu) REGS; LOADALL;
L_0062034b:;
  /* 0062034b lea ecx, [ebp - 0x394] */ ecx = (u32)((u32)(ebp + 0xfffffc6cu));
  /* 00620351 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620356(CPU *c) {
  NATIVE_HOOK(0x620356u) REGS; LOADALL;
  goto L_00620356;
L_004fc210:;
  /* 004fc210 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fc212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc213 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc218u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc213u); RETCHK(0x4fc218u, 0x4fc213u); LOADALL;
  /* 004fc218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620356:;
  /* 00620356 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00620359 jmp 0x4fc210 */ goto L_004fc210;
}

void F_0062035e(CPU *c) {
  NATIVE_HOOK(0x62035eu) REGS; LOADALL;
  goto L_0062035e;
L_004fc220:;
  /* 004fc220 mov dword ptr [ecx], 0x64fd04 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x64fd04u); }
  /* 004fc226 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004fc229 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc22a call 0x5b17e0 */ esp -= 4; M32(esp) = 0x4fc22fu; SAVEALL; F_005b17e0(c); ABI_CHECK(0x5b17e0u, 0x4fc22au); RETCHK(0x4fc22fu, 0x4fc22au); LOADALL;
  /* 004fc22f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc230 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062035e:;
  /* 0062035e lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00620361 jmp 0x4fc220 */ goto L_004fc220;
}

void F_00620366(CPU *c) {
  NATIVE_HOOK(0x620366u) REGS; LOADALL;
  goto L_00620366;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00620366:;
  /* 00620366 mov eax, 0x666114 */ { eax = (u32)(0x666114u); }
  /* 0062036b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620370(CPU *c) {
  NATIVE_HOOK(0x620370u) REGS; LOADALL;
  goto L_00620370;
L_004fc210:;
  /* 004fc210 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fc212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc213 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc218u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc213u); RETCHK(0x4fc218u, 0x4fc213u); LOADALL;
  /* 004fc218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620370:;
  /* 00620370 lea eax, [ebp - 0x3dc] */ eax = (u32)((u32)(ebp + 0xfffffc24u));
  /* 00620376 jmp 0x4fc210 */ goto L_004fc210;
}

void F_0062037b(CPU *c) {
  NATIVE_HOOK(0x62037bu) REGS; LOADALL;
L_0062037b:;
  /* 0062037b lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 00620381 jmp 0x4fc300 */ SAVEALL; F_004fc300(c); return;
}

void F_00620386(CPU *c) {
  NATIVE_HOOK(0x620386u) REGS; LOADALL;
L_00620386:;
  /* 00620386 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00620389 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_0062038e(CPU *c) {
  NATIVE_HOOK(0x62038eu) REGS; LOADALL;
L_0062038e:;
  /* 0062038e lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00620391 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620396(CPU *c) {
  NATIVE_HOOK(0x620396u) REGS; LOADALL;
L_00620396:;
  /* 00620396 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620399 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062039e(CPU *c) {
  NATIVE_HOOK(0x62039eu) REGS; LOADALL;
L_0062039e:;
  /* 0062039e lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 006203a1 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_006203a6(CPU *c) {
  NATIVE_HOOK(0x6203a6u) REGS; LOADALL;
  goto L_006203a6;
L_004fc210:;
  /* 004fc210 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fc212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc213 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc218u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc213u); RETCHK(0x4fc218u, 0x4fc213u); LOADALL;
  /* 004fc218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006203a6:;
  /* 006203a6 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 006203a9 jmp 0x4fc210 */ goto L_004fc210;
}

void F_006203ae(CPU *c) {
  NATIVE_HOOK(0x6203aeu) REGS; LOADALL;
L_006203ae:;
  /* 006203ae lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 006203b4 jmp 0x4fc300 */ SAVEALL; F_004fc300(c); return;
}

void F_006203b9(CPU *c) {
  NATIVE_HOOK(0x6203b9u) REGS; LOADALL;
L_006203b9:;
  /* 006203b9 lea esi, [ebp - 0x30] */ esi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 006203bc jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_006203c1(CPU *c) {
  NATIVE_HOOK(0x6203c1u) REGS; LOADALL;
  goto L_006203c1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006203c1:;
  /* 006203c1 mov eax, 0x666178 */ { eax = (u32)(0x666178u); }
  /* 006203c6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006203d0(CPU *c) {
  NATIVE_HOOK(0x6203d0u) REGS; LOADALL;
L_006203d0:;
  /* 006203d0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006203d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006203d8(CPU *c) {
  NATIVE_HOOK(0x6203d8u) REGS; LOADALL;
L_006203d8:;
  /* 006203d8 lea ecx, [ebp - 0x34c] */ ecx = (u32)((u32)(ebp + 0xfffffcb4u));
  /* 006203de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006203e3(CPU *c) {
  NATIVE_HOOK(0x6203e3u) REGS; LOADALL;
  goto L_006203e3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006203e3:;
  /* 006203e3 mov eax, 0x6661a4 */ { eax = (u32)(0x6661a4u); }
  /* 006203e8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006203f0(CPU *c) {
  NATIVE_HOOK(0x6203f0u) REGS; LOADALL;
  goto L_006203f0;
L_004fc210:;
  /* 004fc210 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fc212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc213 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc218u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc213u); RETCHK(0x4fc218u, 0x4fc213u); LOADALL;
  /* 004fc218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_006203f0:;
  /* 006203f0 lea eax, [ebp - 0x374] */ eax = (u32)((u32)(ebp + 0xfffffc8cu));
  /* 006203f6 jmp 0x4fc210 */ goto L_004fc210;
}

void F_006203fb(CPU *c) {
  NATIVE_HOOK(0x6203fbu) REGS; LOADALL;
L_006203fb:;
  /* 006203fb lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 006203fe jmp 0x4fc300 */ SAVEALL; F_004fc300(c); return;
}

void F_00620403(CPU *c) {
  NATIVE_HOOK(0x620403u) REGS; LOADALL;
L_00620403:;
  /* 00620403 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00620406 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062040b(CPU *c) {
  NATIVE_HOOK(0x62040bu) REGS; LOADALL;
L_0062040b:;
  /* 0062040b lea ecx, [ebp - 0x390] */ ecx = (u32)((u32)(ebp + 0xfffffc70u));
  /* 00620411 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620416(CPU *c) {
  NATIVE_HOOK(0x620416u) REGS; LOADALL;
  goto L_00620416;
L_004fc210:;
  /* 004fc210 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 004fc212 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004fc213 call 0x5aca00 */ esp -= 4; M32(esp) = 0x4fc218u; SAVEALL; F_005aca00(c); ABI_CHECK(0x5aca00u, 0x4fc213u); RETCHK(0x4fc218u, 0x4fc213u); LOADALL;
  /* 004fc218 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 004fc219 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00620416:;
  /* 00620416 lea eax, [ebp - 0x374] */ eax = (u32)((u32)(ebp + 0xfffffc8cu));
  /* 0062041c jmp 0x4fc210 */ goto L_004fc210;
}

void F_00620421(CPU *c) {
  NATIVE_HOOK(0x620421u) REGS; LOADALL;
L_00620421:;
  /* 00620421 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00620424 jmp 0x4fc300 */ SAVEALL; F_004fc300(c); return;
}

void F_00620429(CPU *c) {
  NATIVE_HOOK(0x620429u) REGS; LOADALL;
L_00620429:;
  /* 00620429 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062042c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00620431(CPU *c) {
  NATIVE_HOOK(0x620431u) REGS; LOADALL;
L_00620431:;
  /* 00620431 lea ecx, [ebp - 0x390] */ ecx = (u32)((u32)(ebp + 0xfffffc70u));
  /* 00620437 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062043c(CPU *c) {
  NATIVE_HOOK(0x62043cu) REGS; LOADALL;
  goto L_0062043c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062043c:;
  /* 0062043c mov eax, 0x666200 */ { eax = (u32)(0x666200u); }
  /* 00620441 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00620450(CPU *c) {
  NATIVE_HOOK(0x620450u) REGS; LOADALL;
L_00620450:;
  /* 00620450 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 00620453 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
