#include "funcs.h"

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

void F_00627b9b(CPU *c) {
  NATIVE_HOOK(0x627b9bu) REGS; LOADALL;
L_00627b9b:;
  /* 00627b9b lea ecx, [ebp - 0x7f0] */ ecx = (u32)((u32)(ebp + 0xfffff810u));
  /* 00627ba1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ba6(CPU *c) {
  NATIVE_HOOK(0x627ba6u) REGS; LOADALL;
L_00627ba6:;
  /* 00627ba6 lea ecx, [ebp - 0x4c4] */ ecx = (u32)((u32)(ebp + 0xfffffb3cu));
  /* 00627bac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627bb1(CPU *c) {
  NATIVE_HOOK(0x627bb1u) REGS; LOADALL;
L_00627bb1:;
  /* 00627bb1 lea ecx, [ebp - 0x4fc] */ ecx = (u32)((u32)(ebp + 0xfffffb04u));
  /* 00627bb7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627bbc(CPU *c) {
  NATIVE_HOOK(0x627bbcu) REGS; LOADALL;
L_00627bbc:;
  /* 00627bbc lea ecx, [ebp - 0x534] */ ecx = (u32)((u32)(ebp + 0xfffffaccu));
  /* 00627bc2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627bc7(CPU *c) {
  NATIVE_HOOK(0x627bc7u) REGS; LOADALL;
L_00627bc7:;
  /* 00627bc7 lea ecx, [ebp - 0x56c] */ ecx = (u32)((u32)(ebp + 0xfffffa94u));
  /* 00627bcd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627bd2(CPU *c) {
  NATIVE_HOOK(0x627bd2u) REGS; LOADALL;
L_00627bd2:;
  /* 00627bd2 lea ecx, [ebp - 0x5a4] */ ecx = (u32)((u32)(ebp + 0xfffffa5cu));
  /* 00627bd8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627bdd(CPU *c) {
  NATIVE_HOOK(0x627bddu) REGS; LOADALL;
L_00627bdd:;
  /* 00627bdd lea ecx, [ebp - 0x5dc] */ ecx = (u32)((u32)(ebp + 0xfffffa24u));
  /* 00627be3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627be8(CPU *c) {
  NATIVE_HOOK(0x627be8u) REGS; LOADALL;
L_00627be8:;
  /* 00627be8 lea esi, [ebp - 0x414] */ esi = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627bee jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00627bf3(CPU *c) {
  NATIVE_HOOK(0x627bf3u) REGS; LOADALL;
L_00627bf3:;
  /* 00627bf3 lea esi, [ebp - 0x468] */ esi = (u32)((u32)(ebp + 0xfffffb98u));
  /* 00627bf9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00627bfe(CPU *c) {
  NATIVE_HOOK(0x627bfeu) REGS; LOADALL;
L_00627bfe:;
  /* 00627bfe lea esi, [ebp - 0x478] */ esi = (u32)((u32)(ebp + 0xfffffb88u));
  /* 00627c04 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00627c09(CPU *c) {
  NATIVE_HOOK(0x627c09u) REGS; LOADALL;
L_00627c09:;
  /* 00627c09 lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627c0f jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627c14(CPU *c) {
  NATIVE_HOOK(0x627c14u) REGS; LOADALL;
L_00627c14:;
  /* 00627c14 lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627c1a jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627c1f(CPU *c) {
  NATIVE_HOOK(0x627c1fu) REGS; LOADALL;
L_00627c1f:;
  /* 00627c1f lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627c25 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627c2a(CPU *c) {
  NATIVE_HOOK(0x627c2au) REGS; LOADALL;
L_00627c2a:;
  /* 00627c2a lea ecx, [ebp - 0x438] */ ecx = (u32)((u32)(ebp + 0xfffffbc8u));
  /* 00627c30 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627c35(CPU *c) {
  NATIVE_HOOK(0x627c35u) REGS; LOADALL;
L_00627c35:;
  /* 00627c35 lea ecx, [ebp - 0x614] */ ecx = (u32)((u32)(ebp + 0xfffff9ecu));
  /* 00627c3b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627c40(CPU *c) {
  NATIVE_HOOK(0x627c40u) REGS; LOADALL;
L_00627c40:;
  /* 00627c40 lea ecx, [ebp - 0x64c] */ ecx = (u32)((u32)(ebp + 0xfffff9b4u));
  /* 00627c46 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627c4b(CPU *c) {
  NATIVE_HOOK(0x627c4bu) REGS; LOADALL;
L_00627c4b:;
  /* 00627c4b lea esi, [ebp - 0x8cc] */ esi = (u32)((u32)(ebp + 0xfffff734u));
  /* 00627c51 jmp 0x45c610 */ SAVEALL; F_0045c610(c); return;
}

void F_00627c56(CPU *c) {
  NATIVE_HOOK(0x627c56u) REGS; LOADALL;
L_00627c56:;
  /* 00627c56 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00627c59 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627c5e(CPU *c) {
  NATIVE_HOOK(0x627c5eu) REGS; LOADALL;
L_00627c5e:;
  /* 00627c5e lea ecx, [ebp - 0x684] */ ecx = (u32)((u32)(ebp + 0xfffff97cu));
  /* 00627c64 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627c69(CPU *c) {
  NATIVE_HOOK(0x627c69u) REGS; LOADALL;
L_00627c69:;
  /* 00627c69 lea ecx, [ebp - 0x6bc] */ ecx = (u32)((u32)(ebp + 0xfffff944u));
  /* 00627c6f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627c74(CPU *c) {
  NATIVE_HOOK(0x627c74u) REGS; LOADALL;
L_00627c74:;
  /* 00627c74 lea ecx, [ebp - 0x6f4] */ ecx = (u32)((u32)(ebp + 0xfffff90cu));
  /* 00627c7a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627c7f(CPU *c) {
  NATIVE_HOOK(0x627c7fu) REGS; LOADALL;
L_00627c7f:;
  /* 00627c7f lea ecx, [ebp - 0x72c] */ ecx = (u32)((u32)(ebp + 0xfffff8d4u));
  /* 00627c85 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627c8a(CPU *c) {
  NATIVE_HOOK(0x627c8au) REGS; LOADALL;
L_00627c8a:;
  /* 00627c8a lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627c90 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627c95(CPU *c) {
  NATIVE_HOOK(0x627c95u) REGS; LOADALL;
L_00627c95:;
  /* 00627c95 lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627c9b jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627ca0(CPU *c) {
  NATIVE_HOOK(0x627ca0u) REGS; LOADALL;
L_00627ca0:;
  /* 00627ca0 lea esi, [ebp - 0x468] */ esi = (u32)((u32)(ebp + 0xfffffb98u));
  /* 00627ca6 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00627cab(CPU *c) {
  NATIVE_HOOK(0x627cabu) REGS; LOADALL;
L_00627cab:;
  /* 00627cab lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627cb1 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627cb6(CPU *c) {
  NATIVE_HOOK(0x627cb6u) REGS; LOADALL;
L_00627cb6:;
  /* 00627cb6 lea esi, [ebp - 0xc8] */ esi = (u32)((u32)(ebp + 0xffffff38u));
  /* 00627cbc jmp 0x417430 */ SAVEALL; F_00417430(c); return;
}

void F_00627cc1(CPU *c) {
  NATIVE_HOOK(0x627cc1u) REGS; LOADALL;
L_00627cc1:;
  /* 00627cc1 lea ecx, [ebp - 0x764] */ ecx = (u32)((u32)(ebp + 0xfffff89cu));
  /* 00627cc7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ccc(CPU *c) {
  NATIVE_HOOK(0x627cccu) REGS; LOADALL;
L_00627ccc:;
  /* 00627ccc lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00627ccf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627cd4(CPU *c) {
  NATIVE_HOOK(0x627cd4u) REGS; LOADALL;
L_00627cd4:;
  /* 00627cd4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00627cd7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627cdc(CPU *c) {
  NATIVE_HOOK(0x627cdcu) REGS; LOADALL;
L_00627cdc:;
  /* 00627cdc lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00627cdf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ce4(CPU *c) {
  NATIVE_HOOK(0x627ce4u) REGS; LOADALL;
L_00627ce4:;
  /* 00627ce4 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00627ce7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627cec(CPU *c) {
  NATIVE_HOOK(0x627cecu) REGS; LOADALL;
L_00627cec:;
  /* 00627cec lea esi, [ebp - 0x414] */ esi = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00627cf2 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00627cf7(CPU *c) {
  NATIVE_HOOK(0x627cf7u) REGS; LOADALL;
L_00627cf7:;
  /* 00627cf7 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00627cfa jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627cff(CPU *c) {
  NATIVE_HOOK(0x627cffu) REGS; LOADALL;
  goto L_00627cff;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627cff:;
  /* 00627cff mov eax, 0x66ee78 */ { eax = (u32)(0x66ee78u); }
  /* 00627d04 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627d10(CPU *c) {
  NATIVE_HOOK(0x627d10u) REGS; LOADALL;
L_00627d10:;
  /* 00627d10 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00627d13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d18(CPU *c) {
  NATIVE_HOOK(0x627d18u) REGS; LOADALL;
L_00627d18:;
  /* 00627d18 lea ecx, [ebp - 0x74] */ ecx = (u32)((u32)(ebp + 0xffffff8cu));
  /* 00627d1b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d20(CPU *c) {
  NATIVE_HOOK(0x627d20u) REGS; LOADALL;
  goto L_00627d20;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627d20:;
  /* 00627d20 mov eax, 0x66eed0 */ { eax = (u32)(0x66eed0u); }
  /* 00627d25 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627d30(CPU *c) {
  NATIVE_HOOK(0x627d30u) REGS; LOADALL;
L_00627d30:;
  /* 00627d30 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00627d33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d38(CPU *c) {
  NATIVE_HOOK(0x627d38u) REGS; LOADALL;
L_00627d38:;
  /* 00627d38 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00627d3b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d40(CPU *c) {
  NATIVE_HOOK(0x627d40u) REGS; LOADALL;
L_00627d40:;
  /* 00627d40 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00627d43 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d48(CPU *c) {
  NATIVE_HOOK(0x627d48u) REGS; LOADALL;
  goto L_00627d48;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627d48:;
  /* 00627d48 mov eax, 0x66ef78 */ { eax = (u32)(0x66ef78u); }
  /* 00627d4d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627d60(CPU *c) {
  NATIVE_HOOK(0x627d60u) REGS; LOADALL;
L_00627d60:;
  /* 00627d60 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00627d63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d68(CPU *c) {
  NATIVE_HOOK(0x627d68u) REGS; LOADALL;
L_00627d68:;
  /* 00627d68 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00627d6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d70(CPU *c) {
  NATIVE_HOOK(0x627d70u) REGS; LOADALL;
L_00627d70:;
  /* 00627d70 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00627d73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d78(CPU *c) {
  NATIVE_HOOK(0x627d78u) REGS; LOADALL;
L_00627d78:;
  /* 00627d78 lea ecx, [ebp - 0x1e8] */ ecx = (u32)((u32)(ebp + 0xfffffe18u));
  /* 00627d7e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627d83(CPU *c) {
  NATIVE_HOOK(0x627d83u) REGS; LOADALL;
L_00627d83:;
  /* 00627d83 mov eax, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); eax = (u32)(M32(m_)); }
  /* 00627d89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627d8a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627d8fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627d8au); RETCHK(0x627d8fu, 0x627d8au); LOADALL;
  /* 00627d8f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627d90 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627d91(CPU *c) {
  NATIVE_HOOK(0x627d91u) REGS; LOADALL;
L_00627d91:;
  /* 00627d91 mov eax, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); eax = (u32)(M32(m_)); }
  /* 00627d97 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627d98 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627d9du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627d98u); RETCHK(0x627d9du, 0x627d98u); LOADALL;
  /* 00627d9d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627d9e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627d9f(CPU *c) {
  NATIVE_HOOK(0x627d9fu) REGS; LOADALL;
L_00627d9f:;
  /* 00627d9f mov eax, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); eax = (u32)(M32(m_)); }
  /* 00627da5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627da6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627dabu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627da6u); RETCHK(0x627dabu, 0x627da6u); LOADALL;
  /* 00627dab pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627dac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627dad(CPU *c) {
  NATIVE_HOOK(0x627dadu) REGS; LOADALL;
L_00627dad:;
  /* 00627dad mov eax, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); eax = (u32)(M32(m_)); }
  /* 00627db3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00627db4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x627db9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x627db4u); RETCHK(0x627db9u, 0x627db4u); LOADALL;
  /* 00627db9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00627dba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627dbb(CPU *c) {
  NATIVE_HOOK(0x627dbbu) REGS; LOADALL;
L_00627dbb:;
  /* 00627dbb lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00627dbe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627dc3(CPU *c) {
  NATIVE_HOOK(0x627dc3u) REGS; LOADALL;
L_00627dc3:;
  /* 00627dc3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00627dc6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627dcb(CPU *c) {
  NATIVE_HOOK(0x627dcbu) REGS; LOADALL;
L_00627dcb:;
  /* 00627dcb mov ecx, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); ecx = (u32)(M32(m_)); }
  /* 00627dd1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627dd6(CPU *c) {
  NATIVE_HOOK(0x627dd6u) REGS; LOADALL;
L_00627dd6:;
  /* 00627dd6 mov ecx, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); ecx = (u32)(M32(m_)); }
  /* 00627ddc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627de1(CPU *c) {
  NATIVE_HOOK(0x627de1u) REGS; LOADALL;
L_00627de1:;
  /* 00627de1 mov ecx, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); ecx = (u32)(M32(m_)); }
  /* 00627de7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627dec(CPU *c) {
  NATIVE_HOOK(0x627decu) REGS; LOADALL;
L_00627dec:;
  /* 00627dec mov ecx, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); ecx = (u32)(M32(m_)); }
  /* 00627df2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627df7(CPU *c) {
  NATIVE_HOOK(0x627df7u) REGS; LOADALL;
L_00627df7:;
  /* 00627df7 mov ecx, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); ecx = (u32)(M32(m_)); }
  /* 00627dfd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e02(CPU *c) {
  NATIVE_HOOK(0x627e02u) REGS; LOADALL;
L_00627e02:;
  /* 00627e02 mov ecx, dword ptr [ebp - 0x19c] */ { const u32 m_ = (u32)(ebp + 0xfffffe64u); ecx = (u32)(M32(m_)); }
  /* 00627e08 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e0d(CPU *c) {
  NATIVE_HOOK(0x627e0du) REGS; LOADALL;
L_00627e0d:;
  /* 00627e0d lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00627e10 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e15(CPU *c) {
  NATIVE_HOOK(0x627e15u) REGS; LOADALL;
L_00627e15:;
  /* 00627e15 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00627e18 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e1d(CPU *c) {
  NATIVE_HOOK(0x627e1du) REGS; LOADALL;
L_00627e1d:;
  /* 00627e1d lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00627e20 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e25(CPU *c) {
  NATIVE_HOOK(0x627e25u) REGS; LOADALL;
L_00627e25:;
  /* 00627e25 mov eax, dword ptr [ebp - 0x1a8] */ { const u32 m_ = (u32)(ebp + 0xfffffe58u); eax = (u32)(M32(m_)); }
  /* 00627e2b and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00627e2e je 0x627e46 */ if (ZF_) goto L_00627e46;
  /* 00627e34 and dword ptr [ebp - 0x1a8], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xfffffe58u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00627e3b lea ecx, [ebp - 0x220] */ ecx = (u32)((u32)(ebp + 0xfffffde0u));
  /* 00627e41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
L_00627e46:;
  /* 00627e46 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00627e47(CPU *c) {
  NATIVE_HOOK(0x627e47u) REGS; LOADALL;
L_00627e47:;
  /* 00627e47 lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 00627e4d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e52(CPU *c) {
  NATIVE_HOOK(0x627e52u) REGS; LOADALL;
  goto L_00627e52;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627e52:;
  /* 00627e52 mov eax, 0x66f040 */ { eax = (u32)(0x66f040u); }
  /* 00627e57 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627e60(CPU *c) {
  NATIVE_HOOK(0x627e60u) REGS; LOADALL;
L_00627e60:;
  /* 00627e60 lea ecx, [ebp - 0xf0] */ ecx = (u32)((u32)(ebp + 0xffffff10u));
  /* 00627e66 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e6b(CPU *c) {
  NATIVE_HOOK(0x627e6bu) REGS; LOADALL;
L_00627e6b:;
  /* 00627e6b lea ecx, [ebp - 0x160] */ ecx = (u32)((u32)(ebp + 0xfffffea0u));
  /* 00627e71 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e76(CPU *c) {
  NATIVE_HOOK(0x627e76u) REGS; LOADALL;
L_00627e76:;
  /* 00627e76 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00627e79 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e7e(CPU *c) {
  NATIVE_HOOK(0x627e7eu) REGS; LOADALL;
L_00627e7e:;
  /* 00627e7e lea ecx, [ebp - 0x128] */ ecx = (u32)((u32)(ebp + 0xfffffed8u));
  /* 00627e84 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e89(CPU *c) {
  NATIVE_HOOK(0x627e89u) REGS; LOADALL;
L_00627e89:;
  /* 00627e89 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00627e8f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e94(CPU *c) {
  NATIVE_HOOK(0x627e94u) REGS; LOADALL;
L_00627e94:;
  /* 00627e94 lea ecx, [ebp - 0x17c] */ ecx = (u32)((u32)(ebp + 0xfffffe84u));
  /* 00627e9a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627e9f(CPU *c) {
  NATIVE_HOOK(0x627e9fu) REGS; LOADALL;
L_00627e9f:;
  /* 00627e9f lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00627ea2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ea7(CPU *c) {
  NATIVE_HOOK(0x627ea7u) REGS; LOADALL;
L_00627ea7:;
  /* 00627ea7 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00627eaa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627eaf(CPU *c) {
  NATIVE_HOOK(0x627eafu) REGS; LOADALL;
L_00627eaf:;
  /* 00627eaf lea ecx, [ebp - 0x198] */ ecx = (u32)((u32)(ebp + 0xfffffe68u));
  /* 00627eb5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627eba(CPU *c) {
  NATIVE_HOOK(0x627ebau) REGS; LOADALL;
L_00627eba:;
  /* 00627eba lea ecx, [ebp - 0x1b4] */ ecx = (u32)((u32)(ebp + 0xfffffe4cu));
  /* 00627ec0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ec5(CPU *c) {
  NATIVE_HOOK(0x627ec5u) REGS; LOADALL;
L_00627ec5:;
  /* 00627ec5 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00627ec8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ecd(CPU *c) {
  NATIVE_HOOK(0x627ecdu) REGS; LOADALL;
L_00627ecd:;
  /* 00627ecd lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 00627ed3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ed8(CPU *c) {
  NATIVE_HOOK(0x627ed8u) REGS; LOADALL;
L_00627ed8:;
  /* 00627ed8 lea ecx, [ebp - 0xd4] */ ecx = (u32)((u32)(ebp + 0xffffff2cu));
  /* 00627ede jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ee3(CPU *c) {
  NATIVE_HOOK(0x627ee3u) REGS; LOADALL;
L_00627ee3:;
  /* 00627ee3 lea ecx, [ebp - 0x10c] */ ecx = (u32)((u32)(ebp + 0xfffffef4u));
  /* 00627ee9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627eee(CPU *c) {
  NATIVE_HOOK(0x627eeeu) REGS; LOADALL;
L_00627eee:;
  /* 00627eee lea ecx, [ebp - 0x144] */ ecx = (u32)((u32)(ebp + 0xfffffebcu));
  /* 00627ef4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ef9(CPU *c) {
  NATIVE_HOOK(0x627ef9u) REGS; LOADALL;
  goto L_00627ef9;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627ef9:;
  /* 00627ef9 mov eax, 0x66f0d8 */ { eax = (u32)(0x66f0d8u); }
  /* 00627efe jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627f10(CPU *c) {
  NATIVE_HOOK(0x627f10u) REGS; LOADALL;
  goto L_00627f10;
L_00471890:;
  /* 00471890 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00471891 lea ebx, [esi + 0x1d8] */ ebx = (u32)((u32)(esi + 0x1d8u));
  /* 00471897 call 0x480f00 */ esp -= 4; M32(esp) = 0x47189cu; SAVEALL; F_00480f00(c); ABI_CHECK(0x480f00u, 0x471897u); RETCHK(0x47189cu, 0x471897u); LOADALL;
  /* 0047189c mov eax, dword ptr [esi + 0x1cc] */ { const u32 m_ = (u32)(esi + 0x1ccu); eax = (u32)(M32(m_)); }
  /* 004718a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004718a4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004718a5 je 0x4718b0 */ if (ZF_) goto L_004718b0;
  /* 004718a7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004718a8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4718adu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4718a8u); RETCHK(0x4718adu, 0x4718a8u); LOADALL;
  /* 004718ad add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004718b0:;
  /* 004718b0 mov dword ptr [esi + 0x1cc], 0 */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(0x0u); }
  /* 004718ba mov dword ptr [esi + 0x1d0], 0 */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(0x0u); }
  /* 004718c4 mov dword ptr [esi + 0x1d4], 0 */ { const u32 m_ = (u32)(esi + 0x1d4u); M32(m_) = (u32)(0x0u); }
  /* 004718ce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00627f10:;
  /* 00627f10 lea esi, [ebp - 0x384] */ esi = (u32)((u32)(ebp + 0xfffffc7cu));
  /* 00627f16 jmp 0x471890 */ goto L_00471890;
}

void F_00627f1b(CPU *c) {
  NATIVE_HOOK(0x627f1bu) REGS; LOADALL;
L_00627f1b:;
  /* 00627f1b lea ecx, [ebp - 0x3ac] */ ecx = (u32)((u32)(ebp + 0xfffffc54u));
  /* 00627f21 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f26(CPU *c) {
  NATIVE_HOOK(0x627f26u) REGS; LOADALL;
  goto L_00627f26;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627f26:;
  /* 00627f26 mov eax, 0x66f104 */ { eax = (u32)(0x66f104u); }
  /* 00627f2b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627f30(CPU *c) {
  NATIVE_HOOK(0x627f30u) REGS; LOADALL;
L_00627f30:;
  /* 00627f30 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00627f33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f38(CPU *c) {
  NATIVE_HOOK(0x627f38u) REGS; LOADALL;
L_00627f38:;
  /* 00627f38 lea ecx, [ebp - 0x1c8] */ ecx = (u32)((u32)(ebp + 0xfffffe38u));
  /* 00627f3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f43(CPU *c) {
  NATIVE_HOOK(0x627f43u) REGS; LOADALL;
L_00627f43:;
  /* 00627f43 lea ecx, [ebp - 0x1c8] */ ecx = (u32)((u32)(ebp + 0xfffffe38u));
  /* 00627f49 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f4e(CPU *c) {
  NATIVE_HOOK(0x627f4eu) REGS; LOADALL;
L_00627f4e:;
  /* 00627f4e lea ecx, [ebp - 0x1c8] */ ecx = (u32)((u32)(ebp + 0xfffffe38u));
  /* 00627f54 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f59(CPU *c) {
  NATIVE_HOOK(0x627f59u) REGS; LOADALL;
L_00627f59:;
  /* 00627f59 lea ecx, [ebp - 0x1c8] */ ecx = (u32)((u32)(ebp + 0xfffffe38u));
  /* 00627f5f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f64(CPU *c) {
  NATIVE_HOOK(0x627f64u) REGS; LOADALL;
L_00627f64:;
  /* 00627f64 lea ecx, [ebp - 0x1c8] */ ecx = (u32)((u32)(ebp + 0xfffffe38u));
  /* 00627f6a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f6f(CPU *c) {
  NATIVE_HOOK(0x627f6fu) REGS; LOADALL;
L_00627f6f:;
  /* 00627f6f lea ecx, [ebp - 0x1c8] */ ecx = (u32)((u32)(ebp + 0xfffffe38u));
  /* 00627f75 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f7a(CPU *c) {
  NATIVE_HOOK(0x627f7au) REGS; LOADALL;
L_00627f7a:;
  /* 00627f7a lea ecx, [ebp - 0x1e4] */ ecx = (u32)((u32)(ebp + 0xfffffe1cu));
  /* 00627f80 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f85(CPU *c) {
  NATIVE_HOOK(0x627f85u) REGS; LOADALL;
L_00627f85:;
  /* 00627f85 lea ecx, [ebp - 0x1e4] */ ecx = (u32)((u32)(ebp + 0xfffffe1cu));
  /* 00627f8b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627f90(CPU *c) {
  NATIVE_HOOK(0x627f90u) REGS; LOADALL;
L_00627f90:;
  /* 00627f90 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00627f93 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00627f98(CPU *c) {
  NATIVE_HOOK(0x627f98u) REGS; LOADALL;
  goto L_00627f98;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627f98:;
  /* 00627f98 mov eax, 0x66f1d0 */ { eax = (u32)(0x66f1d0u); }
  /* 00627f9d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627fb0(CPU *c) {
  NATIVE_HOOK(0x627fb0u) REGS; LOADALL;
L_00627fb0:;
  /* 00627fb0 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00627fb3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627fb8(CPU *c) {
  NATIVE_HOOK(0x627fb8u) REGS; LOADALL;
L_00627fb8:;
  /* 00627fb8 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00627fbb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627fc0(CPU *c) {
  NATIVE_HOOK(0x627fc0u) REGS; LOADALL;
L_00627fc0:;
  /* 00627fc0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00627fc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627fc8(CPU *c) {
  NATIVE_HOOK(0x627fc8u) REGS; LOADALL;
  goto L_00627fc8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00627fc8:;
  /* 00627fc8 mov eax, 0x66f2b8 */ { eax = (u32)(0x66f2b8u); }
  /* 00627fcd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00627fe0(CPU *c) {
  NATIVE_HOOK(0x627fe0u) REGS; LOADALL;
L_00627fe0:;
  /* 00627fe0 lea ecx, [ebp - 0x2ac] */ ecx = (u32)((u32)(ebp + 0xfffffd54u));
  /* 00627fe6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627feb(CPU *c) {
  NATIVE_HOOK(0x627febu) REGS; LOADALL;
L_00627feb:;
  /* 00627feb lea ecx, [ebp - 0x2cc] */ ecx = (u32)((u32)(ebp + 0xfffffd34u));
  /* 00627ff1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ff6(CPU *c) {
  NATIVE_HOOK(0x627ff6u) REGS; LOADALL;
L_00627ff6:;
  /* 00627ff6 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00627ff9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00627ffe(CPU *c) {
  NATIVE_HOOK(0x627ffeu) REGS; LOADALL;
L_00627ffe:;
  /* 00627ffe mov eax, dword ptr [ebp - 0x26c] */ { const u32 m_ = (u32)(ebp + 0xfffffd94u); eax = (u32)(M32(m_)); }
  /* 00628004 and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00628007 je 0x62801f */ if (ZF_) goto L_0062801f;
  /* 0062800d and dword ptr [ebp - 0x26c], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xfffffd94u); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00628014 lea ecx, [ebp - 0x2cc] */ ecx = (u32)((u32)(ebp + 0xfffffd34u));
  /* 0062801a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
L_0062801f:;
  /* 0062801f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628020(CPU *c) {
  NATIVE_HOOK(0x628020u) REGS; LOADALL;
L_00628020:;
  /* 00628020 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628023 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628028(CPU *c) {
  NATIVE_HOOK(0x628028u) REGS; LOADALL;
L_00628028:;
  /* 00628028 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062802b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628030(CPU *c) {
  NATIVE_HOOK(0x628030u) REGS; LOADALL;
L_00628030:;
  /* 00628030 lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 00628036 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062803b(CPU *c) {
  NATIVE_HOOK(0x62803bu) REGS; LOADALL;
L_0062803b:;
  /* 0062803b lea ecx, [ebp - 0x2ac] */ ecx = (u32)((u32)(ebp + 0xfffffd54u));
  /* 00628041 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628046(CPU *c) {
  NATIVE_HOOK(0x628046u) REGS; LOADALL;
L_00628046:;
  /* 00628046 lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 0062804c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628051(CPU *c) {
  NATIVE_HOOK(0x628051u) REGS; LOADALL;
  goto L_00628051;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628051:;
  /* 00628051 mov eax, 0x66f338 */ { eax = (u32)(0x66f338u); }
  /* 00628056 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628060(CPU *c) {
  NATIVE_HOOK(0x628060u) REGS; LOADALL;
L_00628060:;
  /* 00628060 lea ecx, [ebp - 0x43c] */ ecx = (u32)((u32)(ebp + 0xfffffbc4u));
  /* 00628066 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062806b(CPU *c) {
  NATIVE_HOOK(0x62806bu) REGS; LOADALL;
L_0062806b:;
  /* 0062806b lea ecx, [ebp - 0x458] */ ecx = (u32)((u32)(ebp + 0xfffffba8u));
  /* 00628071 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628076(CPU *c) {
  NATIVE_HOOK(0x628076u) REGS; LOADALL;
L_00628076:;
  /* 00628076 lea ecx, [ebp - 0x474] */ ecx = (u32)((u32)(ebp + 0xfffffb8cu));
  /* 0062807c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628081(CPU *c) {
  NATIVE_HOOK(0x628081u) REGS; LOADALL;
  goto L_00628081;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628081:;
  /* 00628081 mov eax, 0x66f36c */ { eax = (u32)(0x66f36cu); }
  /* 00628086 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628090(CPU *c) {
  NATIVE_HOOK(0x628090u) REGS; LOADALL;
L_00628090:;
  /* 00628090 lea ecx, [ebp - 0x140] */ ecx = (u32)((u32)(ebp + 0xfffffec0u));
  /* 00628096 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062809b(CPU *c) {
  NATIVE_HOOK(0x62809bu) REGS; LOADALL;
L_0062809b:;
  /* 0062809b lea ecx, [ebp - 0x140] */ ecx = (u32)((u32)(ebp + 0xfffffec0u));
  /* 006280a1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006280a6(CPU *c) {
  NATIVE_HOOK(0x6280a6u) REGS; LOADALL;
L_006280a6:;
  /* 006280a6 lea ecx, [ebp - 0x140] */ ecx = (u32)((u32)(ebp + 0xfffffec0u));
  /* 006280ac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006280b1(CPU *c) {
  NATIVE_HOOK(0x6280b1u) REGS; LOADALL;
L_006280b1:;
  /* 006280b1 lea ecx, [ebp - 0x140] */ ecx = (u32)((u32)(ebp + 0xfffffec0u));
  /* 006280b7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006280bc(CPU *c) {
  NATIVE_HOOK(0x6280bcu) REGS; LOADALL;
L_006280bc:;
  /* 006280bc lea ecx, [ebp - 0x16c] */ ecx = (u32)((u32)(ebp + 0xfffffe94u));
  /* 006280c2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006280c7(CPU *c) {
  NATIVE_HOOK(0x6280c7u) REGS; LOADALL;
  goto L_006280c7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006280c7:;
  /* 006280c7 mov eax, 0x66f3b0 */ { eax = (u32)(0x66f3b0u); }
  /* 006280cc jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006280e0(CPU *c) {
  NATIVE_HOOK(0x6280e0u) REGS; LOADALL;
L_006280e0:;
  /* 006280e0 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 006280e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006280e8(CPU *c) {
  NATIVE_HOOK(0x6280e8u) REGS; LOADALL;
L_006280e8:;
  /* 006280e8 lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 006280eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006280f0(CPU *c) {
  NATIVE_HOOK(0x6280f0u) REGS; LOADALL;
  goto L_006280f0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006280f0:;
  /* 006280f0 mov eax, 0x66f3dc */ { eax = (u32)(0x66f3dcu); }
  /* 006280f5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628100(CPU *c) {
  NATIVE_HOOK(0x628100u) REGS; LOADALL;
L_00628100:;
  /* 00628100 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00628103 jmp 0x45bfb0 */ SAVEALL; F_0045bfb0(c); return;
}

void F_00628108(CPU *c) {
  NATIVE_HOOK(0x628108u) REGS; LOADALL;
  goto L_00628108;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628108:;
  /* 00628108 mov eax, 0x66f400 */ { eax = (u32)(0x66f400u); }
  /* 0062810d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628120(CPU *c) {
  NATIVE_HOOK(0x628120u) REGS; LOADALL;
L_00628120:;
  /* 00628120 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628123 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628128(CPU *c) {
  NATIVE_HOOK(0x628128u) REGS; LOADALL;
L_00628128:;
  /* 00628128 lea ecx, [ebp - 0x300] */ ecx = (u32)((u32)(ebp + 0xfffffd00u));
  /* 0062812e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628133(CPU *c) {
  NATIVE_HOOK(0x628133u) REGS; LOADALL;
L_00628133:;
  /* 00628133 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628136 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062813b(CPU *c) {
  NATIVE_HOOK(0x62813bu) REGS; LOADALL;
L_0062813b:;
  /* 0062813b lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062813e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628143(CPU *c) {
  NATIVE_HOOK(0x628143u) REGS; LOADALL;
L_00628143:;
  /* 00628143 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00628146 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062814b(CPU *c) {
  NATIVE_HOOK(0x62814bu) REGS; LOADALL;
L_0062814b:;
  /* 0062814b lea ecx, [ebp - 0x2c8] */ ecx = (u32)((u32)(ebp + 0xfffffd38u));
  /* 00628151 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628156(CPU *c) {
  NATIVE_HOOK(0x628156u) REGS; LOADALL;
L_00628156:;
  /* 00628156 lea ecx, [ebp - 0x2e4] */ ecx = (u32)((u32)(ebp + 0xfffffd1cu));
  /* 0062815c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628161(CPU *c) {
  NATIVE_HOOK(0x628161u) REGS; LOADALL;
L_00628161:;
  /* 00628161 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00628164 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628169(CPU *c) {
  NATIVE_HOOK(0x628169u) REGS; LOADALL;
L_00628169:;
  /* 00628169 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062816c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628171(CPU *c) {
  NATIVE_HOOK(0x628171u) REGS; LOADALL;
  goto L_00628171;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628171:;
  /* 00628171 mov eax, 0x66f468 */ { eax = (u32)(0x66f468u); }
  /* 00628176 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628180(CPU *c) {
  NATIVE_HOOK(0x628180u) REGS; LOADALL;
L_00628180:;
  /* 00628180 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628183 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628188(CPU *c) {
  NATIVE_HOOK(0x628188u) REGS; LOADALL;
L_00628188:;
  /* 00628188 lea ecx, [ebp - 0x548] */ ecx = (u32)((u32)(ebp + 0xfffffab8u));
  /* 0062818e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628193(CPU *c) {
  NATIVE_HOOK(0x628193u) REGS; LOADALL;
  goto L_00628193;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628193:;
  /* 00628193 mov eax, 0x66f494 */ { eax = (u32)(0x66f494u); }
  /* 00628198 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006281a0(CPU *c) {
  NATIVE_HOOK(0x6281a0u) REGS; LOADALL;
L_006281a0:;
  /* 006281a0 lea ecx, [ebp - 0x3b8] */ ecx = (u32)((u32)(ebp + 0xfffffc48u));
  /* 006281a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006281ab(CPU *c) {
  NATIVE_HOOK(0x6281abu) REGS; LOADALL;
L_006281ab:;
  /* 006281ab lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006281ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006281b3(CPU *c) {
  NATIVE_HOOK(0x6281b3u) REGS; LOADALL;
L_006281b3:;
  /* 006281b3 lea ecx, [ebp - 0x3f0] */ ecx = (u32)((u32)(ebp + 0xfffffc10u));
  /* 006281b9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006281be(CPU *c) {
  NATIVE_HOOK(0x6281beu) REGS; LOADALL;
L_006281be:;
  /* 006281be lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006281c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006281c6(CPU *c) {
  NATIVE_HOOK(0x6281c6u) REGS; LOADALL;
L_006281c6:;
  /* 006281c6 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 006281c9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006281ce(CPU *c) {
  NATIVE_HOOK(0x6281ceu) REGS; LOADALL;
L_006281ce:;
  /* 006281ce lea ecx, [ebp - 0x3d4] */ ecx = (u32)((u32)(ebp + 0xfffffc2cu));
  /* 006281d4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006281d9(CPU *c) {
  NATIVE_HOOK(0x6281d9u) REGS; LOADALL;
L_006281d9:;
  /* 006281d9 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 006281dc jmp 0x4647c0 */ SAVEALL; F_004647c0(c); return;
}

void F_006281e1(CPU *c) {
  NATIVE_HOOK(0x6281e1u) REGS; LOADALL;
  goto L_006281e1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006281e1:;
  /* 006281e1 mov eax, 0x66f4e8 */ { eax = (u32)(0x66f4e8u); }
  /* 006281e6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006281f0(CPU *c) {
  NATIVE_HOOK(0x6281f0u) REGS; LOADALL;
L_006281f0:;
  /* 006281f0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006281f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006281f8(CPU *c) {
  NATIVE_HOOK(0x6281f8u) REGS; LOADALL;
L_006281f8:;
  /* 006281f8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006281fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628200(CPU *c) {
  NATIVE_HOOK(0x628200u) REGS; LOADALL;
L_00628200:;
  /* 00628200 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628203 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
