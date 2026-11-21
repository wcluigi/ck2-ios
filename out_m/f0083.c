#include "funcs.h"

void F_00623c18(CPU *c) {
  NATIVE_HOOK(0x623c18u) REGS; LOADALL;
  goto L_00623c18;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623c18:;
  /* 00623c18 mov eax, 0x66ae08 */ { eax = (u32)(0x66ae08u); }
  /* 00623c1d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623c30(CPU *c) {
  NATIVE_HOOK(0x623c30u) REGS; LOADALL;
L_00623c30:;
  /* 00623c30 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00623c33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c38(CPU *c) {
  NATIVE_HOOK(0x623c38u) REGS; LOADALL;
  goto L_00623c38;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623c38:;
  /* 00623c38 mov eax, 0x66ae2c */ { eax = (u32)(0x66ae2cu); }
  /* 00623c3d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623c50(CPU *c) {
  NATIVE_HOOK(0x623c50u) REGS; LOADALL;
L_00623c50:;
  /* 00623c50 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623c56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c5b(CPU *c) {
  NATIVE_HOOK(0x623c5bu) REGS; LOADALL;
L_00623c5b:;
  /* 00623c5b lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623c61 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c66(CPU *c) {
  NATIVE_HOOK(0x623c66u) REGS; LOADALL;
L_00623c66:;
  /* 00623c66 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623c6c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c71(CPU *c) {
  NATIVE_HOOK(0x623c71u) REGS; LOADALL;
L_00623c71:;
  /* 00623c71 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623c77 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c7c(CPU *c) {
  NATIVE_HOOK(0x623c7cu) REGS; LOADALL;
L_00623c7c:;
  /* 00623c7c lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623c82 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c87(CPU *c) {
  NATIVE_HOOK(0x623c87u) REGS; LOADALL;
L_00623c87:;
  /* 00623c87 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623c8d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c92(CPU *c) {
  NATIVE_HOOK(0x623c92u) REGS; LOADALL;
L_00623c92:;
  /* 00623c92 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623c98 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623c9d(CPU *c) {
  NATIVE_HOOK(0x623c9du) REGS; LOADALL;
L_00623c9d:;
  /* 00623c9d lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623ca3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ca8(CPU *c) {
  NATIVE_HOOK(0x623ca8u) REGS; LOADALL;
L_00623ca8:;
  /* 00623ca8 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623cae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623cb3(CPU *c) {
  NATIVE_HOOK(0x623cb3u) REGS; LOADALL;
L_00623cb3:;
  /* 00623cb3 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623cb9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623cbe(CPU *c) {
  NATIVE_HOOK(0x623cbeu) REGS; LOADALL;
L_00623cbe:;
  /* 00623cbe lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623cc4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623cc9(CPU *c) {
  NATIVE_HOOK(0x623cc9u) REGS; LOADALL;
L_00623cc9:;
  /* 00623cc9 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623ccf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623cd4(CPU *c) {
  NATIVE_HOOK(0x623cd4u) REGS; LOADALL;
L_00623cd4:;
  /* 00623cd4 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623cda jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623cdf(CPU *c) {
  NATIVE_HOOK(0x623cdfu) REGS; LOADALL;
L_00623cdf:;
  /* 00623cdf lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623ce5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623cea(CPU *c) {
  NATIVE_HOOK(0x623ceau) REGS; LOADALL;
L_00623cea:;
  /* 00623cea lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623cf0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623cf5(CPU *c) {
  NATIVE_HOOK(0x623cf5u) REGS; LOADALL;
L_00623cf5:;
  /* 00623cf5 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623cfb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d00(CPU *c) {
  NATIVE_HOOK(0x623d00u) REGS; LOADALL;
L_00623d00:;
  /* 00623d00 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d0b(CPU *c) {
  NATIVE_HOOK(0x623d0bu) REGS; LOADALL;
L_00623d0b:;
  /* 00623d0b lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d11 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d16(CPU *c) {
  NATIVE_HOOK(0x623d16u) REGS; LOADALL;
L_00623d16:;
  /* 00623d16 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d1c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d21(CPU *c) {
  NATIVE_HOOK(0x623d21u) REGS; LOADALL;
L_00623d21:;
  /* 00623d21 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d27 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d2c(CPU *c) {
  NATIVE_HOOK(0x623d2cu) REGS; LOADALL;
L_00623d2c:;
  /* 00623d2c lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d32 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d37(CPU *c) {
  NATIVE_HOOK(0x623d37u) REGS; LOADALL;
L_00623d37:;
  /* 00623d37 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d3d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d42(CPU *c) {
  NATIVE_HOOK(0x623d42u) REGS; LOADALL;
L_00623d42:;
  /* 00623d42 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d48 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d4d(CPU *c) {
  NATIVE_HOOK(0x623d4du) REGS; LOADALL;
L_00623d4d:;
  /* 00623d4d lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d58(CPU *c) {
  NATIVE_HOOK(0x623d58u) REGS; LOADALL;
L_00623d58:;
  /* 00623d58 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d5e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d63(CPU *c) {
  NATIVE_HOOK(0x623d63u) REGS; LOADALL;
L_00623d63:;
  /* 00623d63 lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d69 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d6e(CPU *c) {
  NATIVE_HOOK(0x623d6eu) REGS; LOADALL;
L_00623d6e:;
  /* 00623d6e lea ecx, [ebp - 0x348] */ ecx = (u32)((u32)(ebp + 0xfffffcb8u));
  /* 00623d74 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d79(CPU *c) {
  NATIVE_HOOK(0x623d79u) REGS; LOADALL;
L_00623d79:;
  /* 00623d79 lea ecx, [ebp - 0x36c] */ ecx = (u32)((u32)(ebp + 0xfffffc94u));
  /* 00623d7f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d84(CPU *c) {
  NATIVE_HOOK(0x623d84u) REGS; LOADALL;
L_00623d84:;
  /* 00623d84 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623d87 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623d8c(CPU *c) {
  NATIVE_HOOK(0x623d8cu) REGS; LOADALL;
  goto L_00623d8c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623d8c:;
  /* 00623d8c mov eax, 0x66af30 */ { eax = (u32)(0x66af30u); }
  /* 00623d91 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623da0(CPU *c) {
  NATIVE_HOOK(0x623da0u) REGS; LOADALL;
L_00623da0:;
  /* 00623da0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00623da3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623da8(CPU *c) {
  NATIVE_HOOK(0x623da8u) REGS; LOADALL;
L_00623da8:;
  /* 00623da8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623dab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623db0(CPU *c) {
  NATIVE_HOOK(0x623db0u) REGS; LOADALL;
L_00623db0:;
  /* 00623db0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00623db3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623db8(CPU *c) {
  NATIVE_HOOK(0x623db8u) REGS; LOADALL;
L_00623db8:;
  /* 00623db8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623dbb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623dc0(CPU *c) {
  NATIVE_HOOK(0x623dc0u) REGS; LOADALL;
L_00623dc0:;
  /* 00623dc0 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00623dc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623dc8(CPU *c) {
  NATIVE_HOOK(0x623dc8u) REGS; LOADALL;
  goto L_00623dc8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623dc8:;
  /* 00623dc8 mov eax, 0x66af74 */ { eax = (u32)(0x66af74u); }
  /* 00623dcd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623de0(CPU *c) {
  NATIVE_HOOK(0x623de0u) REGS; LOADALL;
L_00623de0:;
  /* 00623de0 mov eax, dword ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); eax = (u32)(M32(m_)); }
  /* 00623de6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623de7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623decu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623de7u); RETCHK(0x623decu, 0x623de7u); LOADALL;
  /* 00623dec pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623ded ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623dee(CPU *c) {
  NATIVE_HOOK(0x623deeu) REGS; LOADALL;
L_00623dee:;
  /* 00623dee lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623df4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623df9(CPU *c) {
  NATIVE_HOOK(0x623df9u) REGS; LOADALL;
L_00623df9:;
  /* 00623df9 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623dff jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e04(CPU *c) {
  NATIVE_HOOK(0x623e04u) REGS; LOADALL;
L_00623e04:;
  /* 00623e04 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e0a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e0f(CPU *c) {
  NATIVE_HOOK(0x623e0fu) REGS; LOADALL;
L_00623e0f:;
  /* 00623e0f lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e15 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e1a(CPU *c) {
  NATIVE_HOOK(0x623e1au) REGS; LOADALL;
L_00623e1a:;
  /* 00623e1a lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 00623e20 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e25(CPU *c) {
  NATIVE_HOOK(0x623e25u) REGS; LOADALL;
L_00623e25:;
  /* 00623e25 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e2b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e30(CPU *c) {
  NATIVE_HOOK(0x623e30u) REGS; LOADALL;
L_00623e30:;
  /* 00623e30 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e3b(CPU *c) {
  NATIVE_HOOK(0x623e3bu) REGS; LOADALL;
L_00623e3b:;
  /* 00623e3b lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 00623e41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e46(CPU *c) {
  NATIVE_HOOK(0x623e46u) REGS; LOADALL;
L_00623e46:;
  /* 00623e46 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e4c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e51(CPU *c) {
  NATIVE_HOOK(0x623e51u) REGS; LOADALL;
L_00623e51:;
  /* 00623e51 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e57 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e5c(CPU *c) {
  NATIVE_HOOK(0x623e5cu) REGS; LOADALL;
L_00623e5c:;
  /* 00623e5c lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e62 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e67(CPU *c) {
  NATIVE_HOOK(0x623e67u) REGS; LOADALL;
L_00623e67:;
  /* 00623e67 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00623e6d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e72(CPU *c) {
  NATIVE_HOOK(0x623e72u) REGS; LOADALL;
L_00623e72:;
  /* 00623e72 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 00623e78 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623e7d(CPU *c) {
  NATIVE_HOOK(0x623e7du) REGS; LOADALL;
L_00623e7d:;
  /* 00623e7d lea esi, [ebp - 0x5c] */ esi = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00623e80 jmp 0x5699e0 */ SAVEALL; F_005699e0(c); return;
}

void F_00623e85(CPU *c) {
  NATIVE_HOOK(0x623e85u) REGS; LOADALL;
  goto L_00623e85;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623e85:;
  /* 00623e85 mov eax, 0x66b008 */ { eax = (u32)(0x66b008u); }
  /* 00623e8a jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623e90(CPU *c) {
  NATIVE_HOOK(0x623e90u) REGS; LOADALL;
L_00623e90:;
  /* 00623e90 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00623e93 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623e98(CPU *c) {
  NATIVE_HOOK(0x623e98u) REGS; LOADALL;
L_00623e98:;
  /* 00623e98 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623e9b jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ea0(CPU *c) {
  NATIVE_HOOK(0x623ea0u) REGS; LOADALL;
L_00623ea0:;
  /* 00623ea0 lea esi, [ebp - 0xac] */ esi = (u32)((u32)(ebp + 0xffffff54u));
  /* 00623ea6 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623eab(CPU *c) {
  NATIVE_HOOK(0x623eabu) REGS; LOADALL;
L_00623eab:;
  /* 00623eab lea esi, [ebp - 0x8c] */ esi = (u32)((u32)(ebp + 0xffffff74u));
  /* 00623eb1 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623eb6(CPU *c) {
  NATIVE_HOOK(0x623eb6u) REGS; LOADALL;
L_00623eb6:;
  /* 00623eb6 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 00623eb9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ebe(CPU *c) {
  NATIVE_HOOK(0x623ebeu) REGS; LOADALL;
L_00623ebe:;
  /* 00623ebe lea esi, [ebp - 0x3c] */ esi = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00623ec1 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ec6(CPU *c) {
  NATIVE_HOOK(0x623ec6u) REGS; LOADALL;
L_00623ec6:;
  /* 00623ec6 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00623ec9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ece(CPU *c) {
  NATIVE_HOOK(0x623eceu) REGS; LOADALL;
L_00623ece:;
  /* 00623ece lea esi, [ebp - 0x5c] */ esi = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00623ed1 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ed6(CPU *c) {
  NATIVE_HOOK(0x623ed6u) REGS; LOADALL;
L_00623ed6:;
  /* 00623ed6 lea esi, [ebp - 0x7c] */ esi = (u32)((u32)(ebp + 0xffffff84u));
  /* 00623ed9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ede(CPU *c) {
  NATIVE_HOOK(0x623edeu) REGS; LOADALL;
L_00623ede:;
  /* 00623ede lea esi, [ebp - 0x9c] */ esi = (u32)((u32)(ebp + 0xffffff64u));
  /* 00623ee4 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ee9(CPU *c) {
  NATIVE_HOOK(0x623ee9u) REGS; LOADALL;
L_00623ee9:;
  /* 00623ee9 lea esi, [ebp - 0xbc] */ esi = (u32)((u32)(ebp + 0xffffff44u));
  /* 00623eef jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623ef4(CPU *c) {
  NATIVE_HOOK(0x623ef4u) REGS; LOADALL;
L_00623ef4:;
  /* 00623ef4 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00623ef7 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00623efc(CPU *c) {
  NATIVE_HOOK(0x623efcu) REGS; LOADALL;
  goto L_00623efc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623efc:;
  /* 00623efc mov eax, 0x66b088 */ { eax = (u32)(0x66b088u); }
  /* 00623f01 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623f10(CPU *c) {
  NATIVE_HOOK(0x623f10u) REGS; LOADALL;
L_00623f10:;
  /* 00623f10 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00623f13 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623f14 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623f19u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623f14u); RETCHK(0x623f19u, 0x623f14u); LOADALL;
  /* 00623f19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623f1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623f1b(CPU *c) {
  NATIVE_HOOK(0x623f1bu) REGS; LOADALL;
L_00623f1b:;
  /* 00623f1b lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00623f1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623f23(CPU *c) {
  NATIVE_HOOK(0x623f23u) REGS; LOADALL;
  goto L_00623f23;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623f23:;
  /* 00623f23 mov eax, 0x66b0e0 */ { eax = (u32)(0x66b0e0u); }
  /* 00623f28 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623f30(CPU *c) {
  NATIVE_HOOK(0x623f30u) REGS; LOADALL;
L_00623f30:;
  /* 00623f30 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00623f33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623f34 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623f39u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623f34u); RETCHK(0x623f39u, 0x623f34u); LOADALL;
  /* 00623f39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623f3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623f3b(CPU *c) {
  NATIVE_HOOK(0x623f3bu) REGS; LOADALL;
L_00623f3b:;
  /* 00623f3b lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00623f3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623f43(CPU *c) {
  NATIVE_HOOK(0x623f43u) REGS; LOADALL;
  goto L_00623f43;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00623f43:;
  /* 00623f43 mov eax, 0x66b10c */ { eax = (u32)(0x66b10cu); }
  /* 00623f48 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00623f50(CPU *c) {
  NATIVE_HOOK(0x623f50u) REGS; LOADALL;
L_00623f50:;
  /* 00623f50 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623f53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623f54 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623f59u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623f54u); RETCHK(0x623f59u, 0x623f54u); LOADALL;
  /* 00623f59 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623f5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623f5b(CPU *c) {
  NATIVE_HOOK(0x623f5bu) REGS; LOADALL;
L_00623f5b:;
  /* 00623f5b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00623f5e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623f63(CPU *c) {
  NATIVE_HOOK(0x623f63u) REGS; LOADALL;
L_00623f63:;
  /* 00623f63 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623f66 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623f67 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623f6cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623f67u); RETCHK(0x623f6cu, 0x623f67u); LOADALL;
  /* 00623f6c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623f6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623f6e(CPU *c) {
  NATIVE_HOOK(0x623f6eu) REGS; LOADALL;
L_00623f6e:;
  /* 00623f6e lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623f71 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623f76(CPU *c) {
  NATIVE_HOOK(0x623f76u) REGS; LOADALL;
L_00623f76:;
  /* 00623f76 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623f79 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623f7a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623f7fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623f7au); RETCHK(0x623f7fu, 0x623f7au); LOADALL;
  /* 00623f7f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623f80 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623f81(CPU *c) {
  NATIVE_HOOK(0x623f81u) REGS; LOADALL;
L_00623f81:;
  /* 00623f81 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623f84 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623f89(CPU *c) {
  NATIVE_HOOK(0x623f89u) REGS; LOADALL;
L_00623f89:;
  /* 00623f89 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623f8c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623f8d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623f92u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623f8du); RETCHK(0x623f92u, 0x623f8du); LOADALL;
  /* 00623f92 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623f93 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623f94(CPU *c) {
  NATIVE_HOOK(0x623f94u) REGS; LOADALL;
L_00623f94:;
  /* 00623f94 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623f97 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623f9c(CPU *c) {
  NATIVE_HOOK(0x623f9cu) REGS; LOADALL;
L_00623f9c:;
  /* 00623f9c mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623f9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623fa0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623fa5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623fa0u); RETCHK(0x623fa5u, 0x623fa0u); LOADALL;
  /* 00623fa5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623fa6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623fa7(CPU *c) {
  NATIVE_HOOK(0x623fa7u) REGS; LOADALL;
L_00623fa7:;
  /* 00623fa7 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623faa jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623faf(CPU *c) {
  NATIVE_HOOK(0x623fafu) REGS; LOADALL;
L_00623faf:;
  /* 00623faf mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623fb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623fb3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623fb8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623fb3u); RETCHK(0x623fb8u, 0x623fb3u); LOADALL;
  /* 00623fb8 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623fb9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623fba(CPU *c) {
  NATIVE_HOOK(0x623fbau) REGS; LOADALL;
L_00623fba:;
  /* 00623fba lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623fbd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623fc2(CPU *c) {
  NATIVE_HOOK(0x623fc2u) REGS; LOADALL;
L_00623fc2:;
  /* 00623fc2 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623fc5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623fc6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623fcbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623fc6u); RETCHK(0x623fcbu, 0x623fc6u); LOADALL;
  /* 00623fcb pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623fcc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623fcd(CPU *c) {
  NATIVE_HOOK(0x623fcdu) REGS; LOADALL;
L_00623fcd:;
  /* 00623fcd lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623fd0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623fd5(CPU *c) {
  NATIVE_HOOK(0x623fd5u) REGS; LOADALL;
L_00623fd5:;
  /* 00623fd5 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623fd8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623fd9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623fdeu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623fd9u); RETCHK(0x623fdeu, 0x623fd9u); LOADALL;
  /* 00623fde pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623fdf ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623fe0(CPU *c) {
  NATIVE_HOOK(0x623fe0u) REGS; LOADALL;
L_00623fe0:;
  /* 00623fe0 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623fe3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623fe4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x623fe9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623fe4u); RETCHK(0x623fe9u, 0x623fe4u); LOADALL;
  /* 00623fe9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00623fea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00623feb(CPU *c) {
  NATIVE_HOOK(0x623febu) REGS; LOADALL;
L_00623feb:;
  /* 00623feb lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623fee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ff3(CPU *c) {
  NATIVE_HOOK(0x623ff3u) REGS; LOADALL;
L_00623ff3:;
  /* 00623ff3 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00623ff6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00623ffb(CPU *c) {
  NATIVE_HOOK(0x623ffbu) REGS; LOADALL;
L_00623ffb:;
  /* 00623ffb mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00623ffe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00623fff call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624004u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x623fffu); RETCHK(0x624004u, 0x623fffu); LOADALL;
  /* 00624004 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624005 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624006(CPU *c) {
  NATIVE_HOOK(0x624006u) REGS; LOADALL;
L_00624006:;
  /* 00624006 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00624009 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062400e(CPU *c) {
  NATIVE_HOOK(0x62400eu) REGS; LOADALL;
L_0062400e:;
  /* 0062400e mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00624011 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624012 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624017u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624012u); RETCHK(0x624017u, 0x624012u); LOADALL;
  /* 00624017 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624018 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624019(CPU *c) {
  NATIVE_HOOK(0x624019u) REGS; LOADALL;
L_00624019:;
  /* 00624019 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062401c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624021(CPU *c) {
  NATIVE_HOOK(0x624021u) REGS; LOADALL;
L_00624021:;
  /* 00624021 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00624024 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624025 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62402au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624025u); RETCHK(0x62402au, 0x624025u); LOADALL;
  /* 0062402a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062402b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062402c(CPU *c) {
  NATIVE_HOOK(0x62402cu) REGS; LOADALL;
L_0062402c:;
  /* 0062402c lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062402f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624034(CPU *c) {
  NATIVE_HOOK(0x624034u) REGS; LOADALL;
L_00624034:;
  /* 00624034 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00624037 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624038 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62403du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624038u); RETCHK(0x62403du, 0x624038u); LOADALL;
  /* 0062403d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062403e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062403f(CPU *c) {
  NATIVE_HOOK(0x62403fu) REGS; LOADALL;
L_0062403f:;
  /* 0062403f lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00624042 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624047(CPU *c) {
  NATIVE_HOOK(0x624047u) REGS; LOADALL;
L_00624047:;
  /* 00624047 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0062404a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062404b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624050u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62404bu); RETCHK(0x624050u, 0x62404bu); LOADALL;
  /* 00624050 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624051 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624052(CPU *c) {
  NATIVE_HOOK(0x624052u) REGS; LOADALL;
L_00624052:;
  /* 00624052 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00624055 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062405a(CPU *c) {
  NATIVE_HOOK(0x62405au) REGS; LOADALL;
L_0062405a:;
  /* 0062405a mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 0062405d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062405e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624063u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62405eu); RETCHK(0x624063u, 0x62405eu); LOADALL;
  /* 00624063 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624064 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624065(CPU *c) {
  NATIVE_HOOK(0x624065u) REGS; LOADALL;
L_00624065:;
  /* 00624065 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00624068 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062406d(CPU *c) {
  NATIVE_HOOK(0x62406du) REGS; LOADALL;
L_0062406d:;
  /* 0062406d mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00624070 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624071 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624076u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624071u); RETCHK(0x624076u, 0x624071u); LOADALL;
  /* 00624076 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624077 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624078(CPU *c) {
  NATIVE_HOOK(0x624078u) REGS; LOADALL;
L_00624078:;
  /* 00624078 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062407b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624080(CPU *c) {
  NATIVE_HOOK(0x624080u) REGS; LOADALL;
L_00624080:;
  /* 00624080 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00624083 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624084 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624089u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624084u); RETCHK(0x624089u, 0x624084u); LOADALL;
  /* 00624089 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062408a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062408b(CPU *c) {
  NATIVE_HOOK(0x62408bu) REGS; LOADALL;
L_0062408b:;
  /* 0062408b lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062408e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624093(CPU *c) {
  NATIVE_HOOK(0x624093u) REGS; LOADALL;
  goto L_00624093;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624093:;
  /* 00624093 mov eax, 0x66b238 */ { eax = (u32)(0x66b238u); }
  /* 00624098 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006240a0(CPU *c) {
  NATIVE_HOOK(0x6240a0u) REGS; LOADALL;
L_006240a0:;
  /* 006240a0 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 006240a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006240a8(CPU *c) {
  NATIVE_HOOK(0x6240a8u) REGS; LOADALL;
  goto L_006240a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006240a8:;
  /* 006240a8 mov eax, 0x66b2ac */ { eax = (u32)(0x66b2acu); }
  /* 006240ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006240c0(CPU *c) {
  NATIVE_HOOK(0x6240c0u) REGS; LOADALL;
L_006240c0:;
  /* 006240c0 mov eax, dword ptr [0x9be170] */ { const u32 m_ = (u32)(0x9be170u); eax = (u32)(M32(m_)); }
  /* 006240c5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006240c8 mov dword ptr [0x9be170], eax */ { const u32 m_ = (u32)(0x9be170u); M32(m_) = (u32)(eax); }
  /* 006240cd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006240ce(CPU *c) {
  NATIVE_HOOK(0x6240ceu) REGS; LOADALL;
  goto L_006240ce;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006240ce:;
  /* 006240ce mov eax, 0x66b370 */ { eax = (u32)(0x66b370u); }
  /* 006240d3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006240e0(CPU *c) {
  NATIVE_HOOK(0x6240e0u) REGS; LOADALL;
L_006240e0:;
  /* 006240e0 mov eax, dword ptr [0x9be184] */ { const u32 m_ = (u32)(0x9be184u); eax = (u32)(M32(m_)); }
  /* 006240e5 and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006240e8 mov dword ptr [0x9be184], eax */ { const u32 m_ = (u32)(0x9be184u); M32(m_) = (u32)(eax); }
  /* 006240ed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006240ee(CPU *c) {
  NATIVE_HOOK(0x6240eeu) REGS; LOADALL;
  goto L_006240ee;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006240ee:;
  /* 006240ee mov eax, 0x66b394 */ { eax = (u32)(0x66b394u); }
  /* 006240f3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624100(CPU *c) {
  NATIVE_HOOK(0x624100u) REGS; LOADALL;
L_00624100:;
  /* 00624100 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00624103 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624104 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624109u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624104u); RETCHK(0x624109u, 0x624104u); LOADALL;
  /* 00624109 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062410a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062410b(CPU *c) {
  NATIVE_HOOK(0x62410bu) REGS; LOADALL;
L_0062410b:;
  /* 0062410b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0062410e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624113(CPU *c) {
  NATIVE_HOOK(0x624113u) REGS; LOADALL;
L_00624113:;
  /* 00624113 mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 00624116 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624117 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62411cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624117u); RETCHK(0x62411cu, 0x624117u); LOADALL;
  /* 0062411c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062411d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062411e(CPU *c) {
  NATIVE_HOOK(0x62411eu) REGS; LOADALL;
L_0062411e:;
  /* 0062411e lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00624121 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624126(CPU *c) {
  NATIVE_HOOK(0x624126u) REGS; LOADALL;
  goto L_00624126;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624126:;
  /* 00624126 mov eax, 0x66b3d0 */ { eax = (u32)(0x66b3d0u); }
  /* 0062412b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624130(CPU *c) {
  NATIVE_HOOK(0x624130u) REGS; LOADALL;
L_00624130:;
  /* 00624130 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00624133 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624138(CPU *c) {
  NATIVE_HOOK(0x624138u) REGS; LOADALL;
L_00624138:;
  /* 00624138 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 0062413b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624140(CPU *c) {
  NATIVE_HOOK(0x624140u) REGS; LOADALL;
  goto L_00624140;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624140:;
  /* 00624140 mov eax, 0x66b3fc */ { eax = (u32)(0x66b3fcu); }
  /* 00624145 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624150(CPU *c) {
  NATIVE_HOOK(0x624150u) REGS; LOADALL;
L_00624150:;
  /* 00624150 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624153 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624158(CPU *c) {
  NATIVE_HOOK(0x624158u) REGS; LOADALL;
  goto L_00624158;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624158:;
  /* 00624158 mov eax, 0x66b420 */ { eax = (u32)(0x66b420u); }
  /* 0062415d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624170(CPU *c) {
  NATIVE_HOOK(0x624170u) REGS; LOADALL;
L_00624170:;
  /* 00624170 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00624173 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624178(CPU *c) {
  NATIVE_HOOK(0x624178u) REGS; LOADALL;
  goto L_00624178;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624178:;
  /* 00624178 mov eax, 0x66b444 */ { eax = (u32)(0x66b444u); }
  /* 0062417d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624190(CPU *c) {
  NATIVE_HOOK(0x624190u) REGS; LOADALL;
L_00624190:;
  /* 00624190 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 00624193 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00624198(CPU *c) {
  NATIVE_HOOK(0x624198u) REGS; LOADALL;
L_00624198:;
  /* 00624198 lea esi, [ebp - 0x90] */ esi = (u32)((u32)(ebp + 0xffffff70u));
  /* 0062419e jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_006241a3(CPU *c) {
  NATIVE_HOOK(0x6241a3u) REGS; LOADALL;
L_006241a3:;
  /* 006241a3 lea esi, [ebp - 0xb4] */ esi = (u32)((u32)(ebp + 0xffffff4cu));
  /* 006241a9 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_006241ae(CPU *c) {
  NATIVE_HOOK(0x6241aeu) REGS; LOADALL;
L_006241ae:;
  /* 006241ae lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006241b1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006241b6(CPU *c) {
  NATIVE_HOOK(0x6241b6u) REGS; LOADALL;
L_006241b6:;
  /* 006241b6 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006241b9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006241be(CPU *c) {
  NATIVE_HOOK(0x6241beu) REGS; LOADALL;
L_006241be:;
  /* 006241be lea ecx, [ebp - 0xe4] */ ecx = (u32)((u32)(ebp + 0xffffff1cu));
  /* 006241c4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006241c9(CPU *c) {
  NATIVE_HOOK(0x6241c9u) REGS; LOADALL;
L_006241c9:;
  /* 006241c9 lea ecx, [ebp - 0x100] */ ecx = (u32)((u32)(ebp + 0xffffff00u));
  /* 006241cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006241d4(CPU *c) {
  NATIVE_HOOK(0x6241d4u) REGS; LOADALL;
L_006241d4:;
  /* 006241d4 lea ecx, [ebp - 0x11c] */ ecx = (u32)((u32)(ebp + 0xfffffee4u));
  /* 006241da jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006241df(CPU *c) {
  NATIVE_HOOK(0x6241dfu) REGS; LOADALL;
L_006241df:;
  /* 006241df mov eax, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); eax = (u32)(M32(m_)); }
  /* 006241e5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006241e6 mov ecx, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ecx = (u32)(M32(m_)); }
  /* 006241e9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006241ea call 0x459c10 */ esp -= 4; M32(esp) = 0x6241efu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x6241eau); RETCHK(0x6241efu, 0x6241eau); LOADALL;
  /* 006241ef add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006241f2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006241f3(CPU *c) {
  NATIVE_HOOK(0x6241f3u) REGS; LOADALL;
L_006241f3:;
  /* 006241f3 mov eax, dword ptr [ebp - 0xa4] */ { const u32 m_ = (u32)(ebp + 0xffffff5cu); eax = (u32)(M32(m_)); }
  /* 006241f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006241fa mov ecx, dword ptr [ebp - 0x5c] */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); ecx = (u32)(M32(m_)); }
  /* 006241fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006241fe call 0x459c10 */ esp -= 4; M32(esp) = 0x624203u; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x6241feu); RETCHK(0x624203u, 0x6241feu); LOADALL;
  /* 00624203 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00624206 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624207(CPU *c) {
  NATIVE_HOOK(0x624207u) REGS; LOADALL;
  goto L_00624207;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624207:;
  /* 00624207 mov eax, 0x66b4b0 */ { eax = (u32)(0x66b4b0u); }
  /* 0062420c jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624220(CPU *c) {
  NATIVE_HOOK(0x624220u) REGS; LOADALL;
L_00624220:;
  /* 00624220 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00624223 jmp 0x401760 */ SAVEALL; F_00401760(c); return;
}

void F_00624228(CPU *c) {
  NATIVE_HOOK(0x624228u) REGS; LOADALL;
L_00624228:;
  /* 00624228 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0062422b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624230(CPU *c) {
  NATIVE_HOOK(0x624230u) REGS; LOADALL;
L_00624230:;
  /* 00624230 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00624233 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624238(CPU *c) {
  NATIVE_HOOK(0x624238u) REGS; LOADALL;
  goto L_00624238;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624238:;
  /* 00624238 mov eax, 0x66b4e4 */ { eax = (u32)(0x66b4e4u); }
  /* 0062423d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624250(CPU *c) {
  NATIVE_HOOK(0x624250u) REGS; LOADALL;
L_00624250:;
  /* 00624250 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624253 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624258(CPU *c) {
  NATIVE_HOOK(0x624258u) REGS; LOADALL;
L_00624258:;
  /* 00624258 mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 0062425e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062425f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624264u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62425fu); RETCHK(0x624264u, 0x62425fu); LOADALL;
  /* 00624264 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624265 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624266(CPU *c) {
  NATIVE_HOOK(0x624266u) REGS; LOADALL;
L_00624266:;
  /* 00624266 mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 0062426c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062426d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624272u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62426du); RETCHK(0x624272u, 0x62426du); LOADALL;
  /* 00624272 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624273 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624274(CPU *c) {
  NATIVE_HOOK(0x624274u) REGS; LOADALL;
L_00624274:;
  /* 00624274 mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 0062427a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062427b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624280u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62427bu); RETCHK(0x624280u, 0x62427bu); LOADALL;
  /* 00624280 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624281 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624282(CPU *c) {
  NATIVE_HOOK(0x624282u) REGS; LOADALL;
L_00624282:;
  /* 00624282 mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 00624288 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624289 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62428eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624289u); RETCHK(0x62428eu, 0x624289u); LOADALL;
  /* 0062428e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062428f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624290(CPU *c) {
  NATIVE_HOOK(0x624290u) REGS; LOADALL;
L_00624290:;
  /* 00624290 mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 00624296 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624297 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62429cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624297u); RETCHK(0x62429cu, 0x624297u); LOADALL;
  /* 0062429c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062429d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062429e(CPU *c) {
  NATIVE_HOOK(0x62429eu) REGS; LOADALL;
L_0062429e:;
  /* 0062429e mov eax, dword ptr [ebp - 0x100] */ { const u32 m_ = (u32)(ebp + 0xffffff00u); eax = (u32)(M32(m_)); }
  /* 006242a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006242a5 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6242aau; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6242a5u); RETCHK(0x6242aau, 0x6242a5u); LOADALL;
  /* 006242aa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006242ab ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006242ac(CPU *c) {
  NATIVE_HOOK(0x6242acu) REGS; LOADALL;
L_006242ac:;
  /* 006242ac lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 006242b2 jmp 0x541cb0 */ SAVEALL; F_00541cb0(c); return;
}
