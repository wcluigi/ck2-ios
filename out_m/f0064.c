#include "funcs.h"

void F_0061b86f(CPU *c) {
  NATIVE_HOOK(0x61b86fu) REGS; LOADALL;
  goto L_0061b86f;
L_0055d740:;
  /* 0055d740 mov dword ptr [ecx], 0x65660c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x65660cu); }
  /* 0055d746 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b86f:;
  /* 0061b86f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b872 add ecx, 0xec */ { u32 a_ = ecx, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b878 jmp 0x55d740 */ goto L_0055d740;
}

void F_0061b87d(CPU *c) {
  NATIVE_HOOK(0x61b87du) REGS; LOADALL;
  goto L_0061b87d;
L_0055d750:;
  /* 0055d750 mov dword ptr [ecx], 0x656674 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656674u); }
  /* 0055d756 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b87d:;
  /* 0061b87d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b880 add ecx, 0x120 */ { u32 a_ = ecx, b_ = 0x120u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b886 jmp 0x55d750 */ goto L_0055d750;
}

void F_0061b88b(CPU *c) {
  NATIVE_HOOK(0x61b88bu) REGS; LOADALL;
  goto L_0061b88b;
L_0055d750:;
  /* 0055d750 mov dword ptr [ecx], 0x656674 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656674u); }
  /* 0055d756 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b88b:;
  /* 0061b88b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b88e add ecx, 0x174 */ { u32 a_ = ecx, b_ = 0x174u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b894 jmp 0x55d750 */ goto L_0055d750;
}

void F_0061b899(CPU *c) {
  NATIVE_HOOK(0x61b899u) REGS; LOADALL;
  goto L_0061b899;
L_0055d750:;
  /* 0055d750 mov dword ptr [ecx], 0x656674 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656674u); }
  /* 0055d756 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b899:;
  /* 0061b899 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b89c add ecx, 0x1c8 */ { u32 a_ = ecx, b_ = 0x1c8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b8a2 jmp 0x55d750 */ goto L_0055d750;
}

void F_0061b8a7(CPU *c) {
  NATIVE_HOOK(0x61b8a7u) REGS; LOADALL;
  goto L_0061b8a7;
L_0055d750:;
  /* 0055d750 mov dword ptr [ecx], 0x656674 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656674u); }
  /* 0055d756 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b8a7:;
  /* 0061b8a7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b8aa add ecx, 0x21c */ { u32 a_ = ecx, b_ = 0x21cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b8b0 jmp 0x55d750 */ goto L_0055d750;
}

void F_0061b8b5(CPU *c) {
  NATIVE_HOOK(0x61b8b5u) REGS; LOADALL;
  goto L_0061b8b5;
L_0055d760:;
  /* 0055d760 mov dword ptr [ecx], 0x656644 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656644u); }
  /* 0055d766 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b8b5:;
  /* 0061b8b5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b8b8 add ecx, 0x270 */ { u32 a_ = ecx, b_ = 0x270u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b8be jmp 0x55d760 */ goto L_0055d760;
}

void F_0061b8c3(CPU *c) {
  NATIVE_HOOK(0x61b8c3u) REGS; LOADALL;
  goto L_0061b8c3;
L_0055d760:;
  /* 0055d760 mov dword ptr [ecx], 0x656644 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656644u); }
  /* 0055d766 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b8c3:;
  /* 0061b8c3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b8c6 add ecx, 0x36c */ { u32 a_ = ecx, b_ = 0x36cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b8cc jmp 0x55d760 */ goto L_0055d760;
}

void F_0061b8d1(CPU *c) {
  NATIVE_HOOK(0x61b8d1u) REGS; LOADALL;
  goto L_0061b8d1;
L_0055d760:;
  /* 0055d760 mov dword ptr [ecx], 0x656644 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656644u); }
  /* 0055d766 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b8d1:;
  /* 0061b8d1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b8d4 add ecx, 0x468 */ { u32 a_ = ecx, b_ = 0x468u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b8da jmp 0x55d760 */ goto L_0055d760;
}

void F_0061b8df(CPU *c) {
  NATIVE_HOOK(0x61b8dfu) REGS; LOADALL;
  goto L_0061b8df;
L_0055d760:;
  /* 0055d760 mov dword ptr [ecx], 0x656644 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656644u); }
  /* 0055d766 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b8df:;
  /* 0061b8df mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b8e2 add ecx, 0x564 */ { u32 a_ = ecx, b_ = 0x564u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b8e8 jmp 0x55d760 */ goto L_0055d760;
}

void F_0061b8ed(CPU *c) {
  NATIVE_HOOK(0x61b8edu) REGS; LOADALL;
  goto L_0061b8ed;
L_0055d760:;
  /* 0055d760 mov dword ptr [ecx], 0x656644 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656644u); }
  /* 0055d766 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b8ed:;
  /* 0061b8ed mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b8f0 add ecx, 0x660 */ { u32 a_ = ecx, b_ = 0x660u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b8f6 jmp 0x55d760 */ goto L_0055d760;
}

void F_0061b8fb(CPU *c) {
  NATIVE_HOOK(0x61b8fbu) REGS; LOADALL;
  goto L_0061b8fb;
L_0055d760:;
  /* 0055d760 mov dword ptr [ecx], 0x656644 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656644u); }
  /* 0055d766 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b8fb:;
  /* 0061b8fb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b8fe add ecx, 0x75c */ { u32 a_ = ecx, b_ = 0x75cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b904 jmp 0x55d760 */ goto L_0055d760;
}

void F_0061b909(CPU *c) {
  NATIVE_HOOK(0x61b909u) REGS; LOADALL;
  goto L_0061b909;
L_0055d760:;
  /* 0055d760 mov dword ptr [ecx], 0x656644 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656644u); }
  /* 0055d766 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b909:;
  /* 0061b909 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b90c add ecx, 0x858 */ { u32 a_ = ecx, b_ = 0x858u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b912 jmp 0x55d760 */ goto L_0055d760;
}

void F_0061b917(CPU *c) {
  NATIVE_HOOK(0x61b917u) REGS; LOADALL;
  goto L_0061b917;
L_0055d770:;
  /* 0055d770 mov dword ptr [ecx], 0x656614 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656614u); }
  /* 0055d776 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b917:;
  /* 0061b917 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b91a add ecx, 0x954 */ { u32 a_ = ecx, b_ = 0x954u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b920 jmp 0x55d770 */ goto L_0055d770;
}

void F_0061b925(CPU *c) {
  NATIVE_HOOK(0x61b925u) REGS; LOADALL;
  goto L_0061b925;
L_0055d770:;
  /* 0055d770 mov dword ptr [ecx], 0x656614 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656614u); }
  /* 0055d776 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b925:;
  /* 0061b925 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b928 add ecx, 0x9d8 */ { u32 a_ = ecx, b_ = 0x9d8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b92e jmp 0x55d770 */ goto L_0055d770;
}

void F_0061b933(CPU *c) {
  NATIVE_HOOK(0x61b933u) REGS; LOADALL;
  goto L_0061b933;
L_0055d770:;
  /* 0055d770 mov dword ptr [ecx], 0x656614 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656614u); }
  /* 0055d776 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b933:;
  /* 0061b933 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b936 add ecx, 0xa5c */ { u32 a_ = ecx, b_ = 0xa5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b93c jmp 0x55d770 */ goto L_0055d770;
}

void F_0061b941(CPU *c) {
  NATIVE_HOOK(0x61b941u) REGS; LOADALL;
  goto L_0061b941;
L_0055d780:;
  /* 0055d780 mov dword ptr [ecx], 0x656670 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656670u); }
  /* 0055d786 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b941:;
  /* 0061b941 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b944 add ecx, 0xb90 */ { u32 a_ = ecx, b_ = 0xb90u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b94a jmp 0x55d780 */ goto L_0055d780;
}

void F_0061b94f(CPU *c) {
  NATIVE_HOOK(0x61b94fu) REGS; LOADALL;
  goto L_0061b94f;
L_0055d790:;
  /* 0055d790 mov dword ptr [ecx], 0x656640 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656640u); }
  /* 0055d796 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b94f:;
  /* 0061b94f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b952 add ecx, 0xbbc */ { u32 a_ = ecx, b_ = 0xbbcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b958 jmp 0x55d790 */ goto L_0055d790;
}

void F_0061b95d(CPU *c) {
  NATIVE_HOOK(0x61b95du) REGS; LOADALL;
  goto L_0061b95d;
L_0055d790:;
  /* 0055d790 mov dword ptr [ecx], 0x656640 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656640u); }
  /* 0055d796 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b95d:;
  /* 0061b95d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b960 add ecx, 0xbf8 */ { u32 a_ = ecx, b_ = 0xbf8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b966 jmp 0x55d790 */ goto L_0055d790;
}

void F_0061b96b(CPU *c) {
  NATIVE_HOOK(0x61b96bu) REGS; LOADALL;
  goto L_0061b96b;
L_0055d7a0:;
  /* 0055d7a0 mov dword ptr [ecx], 0x656610 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656610u); }
  /* 0055d7a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b96b:;
  /* 0061b96b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b96e add ecx, 0xc34 */ { u32 a_ = ecx, b_ = 0xc34u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b974 jmp 0x55d7a0 */ goto L_0055d7a0;
}

void F_0061b979(CPU *c) {
  NATIVE_HOOK(0x61b979u) REGS; LOADALL;
  goto L_0061b979;
L_0055d7a0:;
  /* 0055d7a0 mov dword ptr [ecx], 0x656610 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656610u); }
  /* 0055d7a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b979:;
  /* 0061b979 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b97c add ecx, 0xc50 */ { u32 a_ = ecx, b_ = 0xc50u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b982 jmp 0x55d7a0 */ goto L_0055d7a0;
}

void F_0061b987(CPU *c) {
  NATIVE_HOOK(0x61b987u) REGS; LOADALL;
  goto L_0061b987;
L_0055d7b0:;
  /* 0055d7b0 mov dword ptr [ecx], 0x65663c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x65663cu); }
  /* 0055d7b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b987:;
  /* 0061b987 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b98a add ecx, 0xc74 */ { u32 a_ = ecx, b_ = 0xc74u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b990 jmp 0x55d7b0 */ goto L_0055d7b0;
}

void F_0061b995(CPU *c) {
  NATIVE_HOOK(0x61b995u) REGS; LOADALL;
  goto L_0061b995;
L_0055d7b0:;
  /* 0055d7b0 mov dword ptr [ecx], 0x65663c */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x65663cu); }
  /* 0055d7b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061b995:;
  /* 0061b995 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b998 add ecx, 0xca0 */ { u32 a_ = ecx, b_ = 0xca0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b99e jmp 0x55d7b0 */ goto L_0055d7b0;
}

void F_0061b9a3(CPU *c) {
  NATIVE_HOOK(0x61b9a3u) REGS; LOADALL;
L_0061b9a3:;
  /* 0061b9a3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061b9a6 add ecx, 0xd0c */ { u32 a_ = ecx, b_ = 0xd0cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061b9ac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b9b1(CPU *c) {
  NATIVE_HOOK(0x61b9b1u) REGS; LOADALL;
  goto L_0061b9b1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b9b1:;
  /* 0061b9b1 mov eax, 0x658f08 */ { eax = (u32)(0x658f08u); }
  /* 0061b9b6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b9c0(CPU *c) {
  NATIVE_HOOK(0x61b9c0u) REGS; LOADALL;
L_0061b9c0:;
  /* 0061b9c0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061b9c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b9c8(CPU *c) {
  NATIVE_HOOK(0x61b9c8u) REGS; LOADALL;
L_0061b9c8:;
  /* 0061b9c8 lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 0061b9ce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b9d3(CPU *c) {
  NATIVE_HOOK(0x61b9d3u) REGS; LOADALL;
L_0061b9d3:;
  /* 0061b9d3 lea ecx, [ebp - 0x68] */ ecx = (u32)((u32)(ebp + 0xffffff98u));
  /* 0061b9d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061b9db(CPU *c) {
  NATIVE_HOOK(0x61b9dbu) REGS; LOADALL;
  goto L_0061b9db;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061b9db:;
  /* 0061b9db mov eax, 0x659038 */ { eax = (u32)(0x659038u); }
  /* 0061b9e0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061b9f0(CPU *c) {
  NATIVE_HOOK(0x61b9f0u) REGS; LOADALL;
L_0061b9f0:;
  /* 0061b9f0 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061b9f3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061b9f4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x61b9f9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x61b9f4u); RETCHK(0x61b9f9u, 0x61b9f4u); LOADALL;
  /* 0061b9f9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061b9fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061b9fb(CPU *c) {
  NATIVE_HOOK(0x61b9fbu) REGS; LOADALL;
L_0061b9fb:;
  /* 0061b9fb mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0061b9fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061b9ff call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x61ba04u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x61b9ffu); RETCHK(0x61ba04u, 0x61b9ffu); LOADALL;
  /* 0061ba04 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0061ba05 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061ba06(CPU *c) {
  NATIVE_HOOK(0x61ba06u) REGS; LOADALL;
  goto L_0061ba06;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ba06:;
  /* 0061ba06 mov eax, 0x659088 */ { eax = (u32)(0x659088u); }
  /* 0061ba0b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ba10(CPU *c) {
  NATIVE_HOOK(0x61ba10u) REGS; LOADALL;
L_0061ba10:;
  /* 0061ba10 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ba13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ba18(CPU *c) {
  NATIVE_HOOK(0x61ba18u) REGS; LOADALL;
L_0061ba18:;
  /* 0061ba18 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ba1b add ecx, 0x1c */ { u32 a_ = ecx, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ba1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ba23(CPU *c) {
  NATIVE_HOOK(0x61ba23u) REGS; LOADALL;
L_0061ba23:;
  /* 0061ba23 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ba26 add ecx, 0x38 */ { u32 a_ = ecx, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ba29 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ba2e(CPU *c) {
  NATIVE_HOOK(0x61ba2eu) REGS; LOADALL;
L_0061ba2e:;
  /* 0061ba2e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061ba31 add ecx, 0x54 */ { u32 a_ = ecx, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061ba34 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ba39(CPU *c) {
  NATIVE_HOOK(0x61ba39u) REGS; LOADALL;
  goto L_0061ba39;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ba39:;
  /* 0061ba39 mov eax, 0x6590c4 */ { eax = (u32)(0x6590c4u); }
  /* 0061ba3e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ba50(CPU *c) {
  NATIVE_HOOK(0x61ba50u) REGS; LOADALL;
  goto L_0061ba50;
L_00502310:;
  /* 00502310 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502314 jb 0x502322 */ if (CF_) goto L_00502322;
  /* 00502316 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00502319 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050231a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50231fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50231au); RETCHK(0x50231fu, 0x50231au); LOADALL;
  /* 0050231f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502322:;
  /* 00502322 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00502324 mov dword ptr [esi + 0x18], 7 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x7u); }
  /* 0050232b mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0050232e mov word ptr [esi + 4], ax */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00502332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ba50:;
  /* 0061ba50 lea esi, [ebp - 0x48] */ esi = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061ba53 jmp 0x502310 */ goto L_00502310;
}

void F_0061ba58(CPU *c) {
  NATIVE_HOOK(0x61ba58u) REGS; LOADALL;
  goto L_0061ba58;
L_00502310:;
  /* 00502310 cmp dword ptr [esi + 0x18], 8 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00502314 jb 0x502322 */ if (CF_) goto L_00502322;
  /* 00502316 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00502319 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0050231a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x50231fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x50231au); RETCHK(0x50231fu, 0x50231au); LOADALL;
  /* 0050231f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00502322:;
  /* 00502322 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00502324 mov dword ptr [esi + 0x18], 7 */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0x7u); }
  /* 0050232b mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0050232e mov word ptr [esi + 4], ax */ { const u32 m_ = (u32)(esi + 0x4u); M16(m_) = (u16)((eax & 0xffffu)); }
  /* 00502332 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ba58:;
  /* 0061ba58 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061ba5b jmp 0x502310 */ goto L_00502310;
}

void F_0061ba60(CPU *c) {
  NATIVE_HOOK(0x61ba60u) REGS; LOADALL;
  goto L_0061ba60;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ba60:;
  /* 0061ba60 mov eax, 0x65915c */ { eax = (u32)(0x65915cu); }
  /* 0061ba65 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ba70(CPU *c) {
  NATIVE_HOOK(0x61ba70u) REGS; LOADALL;
  goto L_0061ba70;
L_0051ea80:;
  /* 0051ea80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0051ea81 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0051ea83 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0051ea86 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0051ea88 mov dword ptr [esi], 0x652b00 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x652b00u); }
  /* 0051ea8e je 0x51eaa0 */ if (ZF_) goto L_0051eaa0;
  /* 0051ea90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0051ea91 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x51ea96u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x51ea91u); RETCHK(0x51ea96u, 0x51ea91u); LOADALL;
  /* 0051ea96 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0051ea99 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
L_0051eaa0:;
  /* 0051eaa0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0051eaa1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061ba70:;
  /* 0061ba70 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0061ba73 jmp 0x51ea80 */ goto L_0051ea80;
}

void F_0061ba78(CPU *c) {
  NATIVE_HOOK(0x61ba78u) REGS; LOADALL;
  goto L_0061ba78;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061ba78:;
  /* 0061ba78 mov eax, 0x659180 */ { eax = (u32)(0x659180u); }
  /* 0061ba7d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061ba90(CPU *c) {
  NATIVE_HOOK(0x61ba90u) REGS; LOADALL;
L_0061ba90:;
  /* 0061ba90 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0061ba93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061ba98(CPU *c) {
  NATIVE_HOOK(0x61ba98u) REGS; LOADALL;
L_0061ba98:;
  /* 0061ba98 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0061ba9b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061baa0(CPU *c) {
  NATIVE_HOOK(0x61baa0u) REGS; LOADALL;
L_0061baa0:;
  /* 0061baa0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0061baa3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061baa8(CPU *c) {
  NATIVE_HOOK(0x61baa8u) REGS; LOADALL;
L_0061baa8:;
  /* 0061baa8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061baab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bab0(CPU *c) {
  NATIVE_HOOK(0x61bab0u) REGS; LOADALL;
  goto L_0061bab0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bab0:;
  /* 0061bab0 mov eax, 0x6591bc */ { eax = (u32)(0x6591bcu); }
  /* 0061bab5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bac0(CPU *c) {
  NATIVE_HOOK(0x61bac0u) REGS; LOADALL;
L_0061bac0:;
  /* 0061bac0 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0061bac3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bac8(CPU *c) {
  NATIVE_HOOK(0x61bac8u) REGS; LOADALL;
  goto L_0061bac8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bac8:;
  /* 0061bac8 mov eax, 0x659228 */ { eax = (u32)(0x659228u); }
  /* 0061bacd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bae0(CPU *c) {
  NATIVE_HOOK(0x61bae0u) REGS; LOADALL;
  goto L_0061bae0;
L_004d9460:;
  /* 004d9460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004d9461 mov esi, eax */ { esi = (u32)(eax); }
  /* 004d9463 call 0x529410 */ esp -= 4; M32(esp) = 0x4d9468u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x4d9463u); RETCHK(0x4d9468u, 0x4d9463u); LOADALL;
  /* 004d9468 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004d946b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004d946c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4d9471u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4d946cu); RETCHK(0x4d9471u, 0x4d946cu); LOADALL;
  /* 004d9471 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004d9474 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004d947b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004d947c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061bae0:;
  /* 0061bae0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061bae3 add eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061bae6 jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061baeb(CPU *c) {
  NATIVE_HOOK(0x61baebu) REGS; LOADALL;
  goto L_0061baeb;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061baeb:;
  /* 0061baeb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061baee add esi, 0x18 */ { u32 a_ = esi, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061baf1 jmp 0x519190 */ goto L_00519190;
}

void F_0061baf6(CPU *c) {
  NATIVE_HOOK(0x61baf6u) REGS; LOADALL;
L_0061baf6:;
  /* 0061baf6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061baf9 add ecx, 0x38 */ { u32 a_ = ecx, b_ = 0x38u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bafc jmp 0x5267e0 */ SAVEALL; F_005267e0(c); return;
}

void F_0061bb01(CPU *c) {
  NATIVE_HOOK(0x61bb01u) REGS; LOADALL;
  goto L_0061bb01;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061bb01:;
  /* 0061bb01 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061bb04 add esi, 0xcc */ { u32 a_ = esi, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061bb0a jmp 0x519190 */ goto L_00519190;
}

void F_0061bb0f(CPU *c) {
  NATIVE_HOOK(0x61bb0fu) REGS; LOADALL;
L_0061bb0f:;
  /* 0061bb0f mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bb12 add ecx, 0x10c */ { u32 a_ = ecx, b_ = 0x10cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bb18 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bb1d(CPU *c) {
  NATIVE_HOOK(0x61bb1du) REGS; LOADALL;
L_0061bb1d:;
  /* 0061bb1d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bb20 add ecx, 0x138 */ { u32 a_ = ecx, b_ = 0x138u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bb26 jmp 0x52cd60 */ SAVEALL; F_0052cd60(c); return;
}

void F_0061bb2b(CPU *c) {
  NATIVE_HOOK(0x61bb2bu) REGS; LOADALL;
L_0061bb2b:;
  /* 0061bb2b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0061bb2e add esi, 0x164 */ { u32 a_ = esi, b_ = 0x164u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061bb34 jmp 0x516dd0 */ SAVEALL; F_00516dd0(c); return;
}

void F_0061bb39(CPU *c) {
  NATIVE_HOOK(0x61bb39u) REGS; LOADALL;
  goto L_0061bb39;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bb39:;
  /* 0061bb39 mov eax, 0x6592c4 */ { eax = (u32)(0x6592c4u); }
  /* 0061bb3e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bb50(CPU *c) {
  NATIVE_HOOK(0x61bb50u) REGS; LOADALL;
L_0061bb50:;
  /* 0061bb50 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061bb53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bb58(CPU *c) {
  NATIVE_HOOK(0x61bb58u) REGS; LOADALL;
  goto L_0061bb58;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bb58:;
  /* 0061bb58 mov eax, 0x659330 */ { eax = (u32)(0x659330u); }
  /* 0061bb5d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bb70(CPU *c) {
  NATIVE_HOOK(0x61bb70u) REGS; LOADALL;
L_0061bb70:;
  /* 0061bb70 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bb73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bb78(CPU *c) {
  NATIVE_HOOK(0x61bb78u) REGS; LOADALL;
L_0061bb78:;
  /* 0061bb78 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bb7b add ecx, 0x30 */ { u32 a_ = ecx, b_ = 0x30u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bb7e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bb83(CPU *c) {
  NATIVE_HOOK(0x61bb83u) REGS; LOADALL;
  goto L_0061bb83;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bb83:;
  /* 0061bb83 mov eax, 0x659380 */ { eax = (u32)(0x659380u); }
  /* 0061bb88 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bb90(CPU *c) {
  NATIVE_HOOK(0x61bb90u) REGS; LOADALL;
L_0061bb90:;
  /* 0061bb90 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bb93 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bb96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bb9b(CPU *c) {
  NATIVE_HOOK(0x61bb9bu) REGS; LOADALL;
L_0061bb9b:;
  /* 0061bb9b mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bb9e add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bba1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bba6(CPU *c) {
  NATIVE_HOOK(0x61bba6u) REGS; LOADALL;
  goto L_0061bba6;
L_004d9460:;
  /* 004d9460 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004d9461 mov esi, eax */ { esi = (u32)(eax); }
  /* 004d9463 call 0x529410 */ esp -= 4; M32(esp) = 0x4d9468u; SAVEALL; F_00529410(c); ABI_CHECK(0x529410u, 0x4d9463u); RETCHK(0x4d9468u, 0x4d9463u); LOADALL;
  /* 004d9468 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 004d946b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004d946c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4d9471u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4d946cu); RETCHK(0x4d9471u, 0x4d946cu); LOADALL;
  /* 004d9471 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004d9474 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 004d947b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004d947c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061bba6:;
  /* 0061bba6 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061bba9 add eax, 0x60 */ { u32 a_ = eax, b_ = 0x60u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061bbac jmp 0x4d9460 */ goto L_004d9460;
}

void F_0061bbb1(CPU *c) {
  NATIVE_HOOK(0x61bbb1u) REGS; LOADALL;
  goto L_0061bbb1;
L_00519190:;
  /* 00519190 jmp 0x531490 */ SAVEALL; F_00531490(c); return;
L_0061bbb1:;
  /* 0061bbb1 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 0061bbb4 add esi, 0x70 */ { u32 a_ = esi, b_ = 0x70u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0061bbb7 jmp 0x519190 */ goto L_00519190;
}

void F_0061bbbc(CPU *c) {
  NATIVE_HOOK(0x61bbbcu) REGS; LOADALL;
L_0061bbbc:;
  /* 0061bbbc mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 0061bbbf add eax, 0x90 */ { u32 a_ = eax, b_ = 0x90u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061bbc4 jmp 0x522fb0 */ SAVEALL; F_00522fb0(c); return;
}

void F_0061bbc9(CPU *c) {
  NATIVE_HOOK(0x61bbc9u) REGS; LOADALL;
L_0061bbc9:;
  /* 0061bbc9 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bbcc add ecx, 0xb4 */ { u32 a_ = ecx, b_ = 0xb4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bbd2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bbd7(CPU *c) {
  NATIVE_HOOK(0x61bbd7u) REGS; LOADALL;
L_0061bbd7:;
  /* 0061bbd7 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bbda add ecx, 0xd0 */ { u32 a_ = ecx, b_ = 0xd0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bbe0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bbe5(CPU *c) {
  NATIVE_HOOK(0x61bbe5u) REGS; LOADALL;
L_0061bbe5:;
  /* 0061bbe5 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bbe8 add ecx, 0xec */ { u32 a_ = ecx, b_ = 0xecu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bbee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bbf3(CPU *c) {
  NATIVE_HOOK(0x61bbf3u) REGS; LOADALL;
L_0061bbf3:;
  /* 0061bbf3 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bbf6 add ecx, 0x108 */ { u32 a_ = ecx, b_ = 0x108u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bbfc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bc01(CPU *c) {
  NATIVE_HOOK(0x61bc01u) REGS; LOADALL;
L_0061bc01:;
  /* 0061bc01 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bc04 add ecx, 0x124 */ { u32 a_ = ecx, b_ = 0x124u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bc0a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bc0f(CPU *c) {
  NATIVE_HOOK(0x61bc0fu) REGS; LOADALL;
L_0061bc0f:;
  /* 0061bc0f mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bc12 add ecx, 0x140 */ { u32 a_ = ecx, b_ = 0x140u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bc18 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bc1d(CPU *c) {
  NATIVE_HOOK(0x61bc1du) REGS; LOADALL;
L_0061bc1d:;
  /* 0061bc1d mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0061bc20 add ecx, 0x15c */ { u32 a_ = ecx, b_ = 0x15cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bc26 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bc2b(CPU *c) {
  NATIVE_HOOK(0x61bc2bu) REGS; LOADALL;
  goto L_0061bc2b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bc2b:;
  /* 0061bc2b mov eax, 0x6594b0 */ { eax = (u32)(0x6594b0u); }
  /* 0061bc30 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bc40(CPU *c) {
  NATIVE_HOOK(0x61bc40u) REGS; LOADALL;
L_0061bc40:;
  /* 0061bc40 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061bc43 jmp 0x4b12e0 */ SAVEALL; F_004b12e0(c); return;
}

void F_0061bc48(CPU *c) {
  NATIVE_HOOK(0x61bc48u) REGS; LOADALL;
  goto L_0061bc48;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bc48:;
  /* 0061bc48 mov eax, 0x659588 */ { eax = (u32)(0x659588u); }
  /* 0061bc4d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bc60(CPU *c) {
  NATIVE_HOOK(0x61bc60u) REGS; LOADALL;
  goto L_0061bc60;
L_004b12d0:;
  /* 004b12d0 mov eax, dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004b12d3 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 004b12d6 mov dword ptr [edx + ecx - 8], 0x64e81c */ { const u32 m_ = (u32)(edx + ecx + 0xfffffff8u); M32(m_) = (u32)(0x64e81cu); }
  /* 004b12de ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0061bc60:;
  /* 0061bc60 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0061bc63 sub ecx, 0x5c */ { u32 a_ = ecx, b_ = 0x5cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bc66 jmp 0x4b12d0 */ goto L_004b12d0;
}

void F_0061bc6b(CPU *c) {
  NATIVE_HOOK(0x61bc6bu) REGS; LOADALL;
  goto L_0061bc6b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bc6b:;
  /* 0061bc6b mov eax, 0x6595ac */ { eax = (u32)(0x6595acu); }
  /* 0061bc70 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bc80(CPU *c) {
  NATIVE_HOOK(0x61bc80u) REGS; LOADALL;
L_0061bc80:;
  /* 0061bc80 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bc83 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bc86 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bc8b(CPU *c) {
  NATIVE_HOOK(0x61bc8bu) REGS; LOADALL;
L_0061bc8b:;
  /* 0061bc8b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bc8e add ecx, 0x20 */ { u32 a_ = ecx, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bc91 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bc96(CPU *c) {
  NATIVE_HOOK(0x61bc96u) REGS; LOADALL;
L_0061bc96:;
  /* 0061bc96 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bc99 add ecx, 0x3c */ { u32 a_ = ecx, b_ = 0x3cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bc9c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bca1(CPU *c) {
  NATIVE_HOOK(0x61bca1u) REGS; LOADALL;
  goto L_0061bca1;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bca1:;
  /* 0061bca1 mov eax, 0x6595e0 */ { eax = (u32)(0x6595e0u); }
  /* 0061bca6 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bcb0(CPU *c) {
  NATIVE_HOOK(0x61bcb0u) REGS; LOADALL;
L_0061bcb0:;
  /* 0061bcb0 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bcb3 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bcb6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bcbb(CPU *c) {
  NATIVE_HOOK(0x61bcbbu) REGS; LOADALL;
L_0061bcbb:;
  /* 0061bcbb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bcbe add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bcc1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bcc6(CPU *c) {
  NATIVE_HOOK(0x61bcc6u) REGS; LOADALL;
L_0061bcc6:;
  /* 0061bcc6 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bcc9 add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bccc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bcd1(CPU *c) {
  NATIVE_HOOK(0x61bcd1u) REGS; LOADALL;
L_0061bcd1:;
  /* 0061bcd1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bcd4 add ecx, 0x5c */ { u32 a_ = ecx, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bcd7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bcdc(CPU *c) {
  NATIVE_HOOK(0x61bcdcu) REGS; LOADALL;
L_0061bcdc:;
  /* 0061bcdc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bcdf add ecx, 0x78 */ { u32 a_ = ecx, b_ = 0x78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bce2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bce7(CPU *c) {
  NATIVE_HOOK(0x61bce7u) REGS; LOADALL;
L_0061bce7:;
  /* 0061bce7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bcea add ecx, 0x94 */ { u32 a_ = ecx, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bcf0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bcf5(CPU *c) {
  NATIVE_HOOK(0x61bcf5u) REGS; LOADALL;
L_0061bcf5:;
  /* 0061bcf5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bcf8 add ecx, 0xb0 */ { u32 a_ = ecx, b_ = 0xb0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bcfe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd03(CPU *c) {
  NATIVE_HOOK(0x61bd03u) REGS; LOADALL;
L_0061bd03:;
  /* 0061bd03 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bd06 add ecx, 0xcc */ { u32 a_ = ecx, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bd0c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd11(CPU *c) {
  NATIVE_HOOK(0x61bd11u) REGS; LOADALL;
L_0061bd11:;
  /* 0061bd11 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bd14 add ecx, 0xe8 */ { u32 a_ = ecx, b_ = 0xe8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bd1a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd1f(CPU *c) {
  NATIVE_HOOK(0x61bd1fu) REGS; LOADALL;
  goto L_0061bd1f;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bd1f:;
  /* 0061bd1f mov eax, 0x659648 */ { eax = (u32)(0x659648u); }
  /* 0061bd24 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bd30(CPU *c) {
  NATIVE_HOOK(0x61bd30u) REGS; LOADALL;
L_0061bd30:;
  /* 0061bd30 lea ecx, [ebp + 0x10c] */ ecx = (u32)((u32)(ebp + 0x10cu));
  /* 0061bd36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd3b(CPU *c) {
  NATIVE_HOOK(0x61bd3bu) REGS; LOADALL;
L_0061bd3b:;
  /* 0061bd3b lea ecx, [ebp + 0xf0] */ ecx = (u32)((u32)(ebp + 0xf0u));
  /* 0061bd41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd46(CPU *c) {
  NATIVE_HOOK(0x61bd46u) REGS; LOADALL;
L_0061bd46:;
  /* 0061bd46 lea ecx, [ebp + 0xd4] */ ecx = (u32)((u32)(ebp + 0xd4u));
  /* 0061bd4c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd51(CPU *c) {
  NATIVE_HOOK(0x61bd51u) REGS; LOADALL;
L_0061bd51:;
  /* 0061bd51 lea ecx, [ebp + 0xb8] */ ecx = (u32)((u32)(ebp + 0xb8u));
  /* 0061bd57 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd5c(CPU *c) {
  NATIVE_HOOK(0x61bd5cu) REGS; LOADALL;
L_0061bd5c:;
  /* 0061bd5c lea ecx, [ebp + 0x9c] */ ecx = (u32)((u32)(ebp + 0x9cu));
  /* 0061bd62 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd67(CPU *c) {
  NATIVE_HOOK(0x61bd67u) REGS; LOADALL;
L_0061bd67:;
  /* 0061bd67 lea ecx, [ebp + 0x80] */ ecx = (u32)((u32)(ebp + 0x80u));
  /* 0061bd6d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd72(CPU *c) {
  NATIVE_HOOK(0x61bd72u) REGS; LOADALL;
L_0061bd72:;
  /* 0061bd72 lea ecx, [ebp + 0x64] */ ecx = (u32)((u32)(ebp + 0x64u));
  /* 0061bd75 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd7a(CPU *c) {
  NATIVE_HOOK(0x61bd7au) REGS; LOADALL;
L_0061bd7a:;
  /* 0061bd7a lea ecx, [ebp + 0x48] */ ecx = (u32)((u32)(ebp + 0x48u));
  /* 0061bd7d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd82(CPU *c) {
  NATIVE_HOOK(0x61bd82u) REGS; LOADALL;
L_0061bd82:;
  /* 0061bd82 lea ecx, [ebp + 0x2c] */ ecx = (u32)((u32)(ebp + 0x2cu));
  /* 0061bd85 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd8a(CPU *c) {
  NATIVE_HOOK(0x61bd8au) REGS; LOADALL;
L_0061bd8a:;
  /* 0061bd8a lea ecx, [ebp + 0x10] */ ecx = (u32)((u32)(ebp + 0x10u));
  /* 0061bd8d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd92(CPU *c) {
  NATIVE_HOOK(0x61bd92u) REGS; LOADALL;
L_0061bd92:;
  /* 0061bd92 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bd95 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bd98 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bd9d(CPU *c) {
  NATIVE_HOOK(0x61bd9du) REGS; LOADALL;
L_0061bd9d:;
  /* 0061bd9d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bda0 add ecx, 0x24 */ { u32 a_ = ecx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bda3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bda8(CPU *c) {
  NATIVE_HOOK(0x61bda8u) REGS; LOADALL;
L_0061bda8:;
  /* 0061bda8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bdab add ecx, 0x40 */ { u32 a_ = ecx, b_ = 0x40u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bdae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bdb3(CPU *c) {
  NATIVE_HOOK(0x61bdb3u) REGS; LOADALL;
L_0061bdb3:;
  /* 0061bdb3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bdb6 add ecx, 0x5c */ { u32 a_ = ecx, b_ = 0x5cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bdb9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bdbe(CPU *c) {
  NATIVE_HOOK(0x61bdbeu) REGS; LOADALL;
L_0061bdbe:;
  /* 0061bdbe mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bdc1 add ecx, 0x78 */ { u32 a_ = ecx, b_ = 0x78u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bdc4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bdc9(CPU *c) {
  NATIVE_HOOK(0x61bdc9u) REGS; LOADALL;
L_0061bdc9:;
  /* 0061bdc9 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bdcc add ecx, 0x94 */ { u32 a_ = ecx, b_ = 0x94u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bdd2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bdd7(CPU *c) {
  NATIVE_HOOK(0x61bdd7u) REGS; LOADALL;
L_0061bdd7:;
  /* 0061bdd7 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bdda add ecx, 0xb0 */ { u32 a_ = ecx, b_ = 0xb0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bde0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bde5(CPU *c) {
  NATIVE_HOOK(0x61bde5u) REGS; LOADALL;
L_0061bde5:;
  /* 0061bde5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bde8 add ecx, 0xcc */ { u32 a_ = ecx, b_ = 0xccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bdee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bdf3(CPU *c) {
  NATIVE_HOOK(0x61bdf3u) REGS; LOADALL;
L_0061bdf3:;
  /* 0061bdf3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0061bdf6 add ecx, 0xe8 */ { u32 a_ = ecx, b_ = 0xe8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0061bdfc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be01(CPU *c) {
  NATIVE_HOOK(0x61be01u) REGS; LOADALL;
  goto L_0061be01;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061be01:;
  /* 0061be01 mov eax, 0x659700 */ { eax = (u32)(0x659700u); }
  /* 0061be06 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061be10(CPU *c) {
  NATIVE_HOOK(0x61be10u) REGS; LOADALL;
L_0061be10:;
  /* 0061be10 lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 0061be13 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061be18(CPU *c) {
  NATIVE_HOOK(0x61be18u) REGS; LOADALL;
L_0061be18:;
  /* 0061be18 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061be1b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be20(CPU *c) {
  NATIVE_HOOK(0x61be20u) REGS; LOADALL;
  goto L_0061be20;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061be20:;
  /* 0061be20 mov eax, 0x65972c */ { eax = (u32)(0x65972cu); }
  /* 0061be25 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061be30(CPU *c) {
  NATIVE_HOOK(0x61be30u) REGS; LOADALL;
L_0061be30:;
  /* 0061be30 lea ecx, [ebp + 0x14] */ ecx = (u32)((u32)(ebp + 0x14u));
  /* 0061be33 jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061be38(CPU *c) {
  NATIVE_HOOK(0x61be38u) REGS; LOADALL;
L_0061be38:;
  /* 0061be38 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061be3b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be40(CPU *c) {
  NATIVE_HOOK(0x61be40u) REGS; LOADALL;
L_0061be40:;
  /* 0061be40 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061be43 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be48(CPU *c) {
  NATIVE_HOOK(0x61be48u) REGS; LOADALL;
L_0061be48:;
  /* 0061be48 lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0061be4b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be50(CPU *c) {
  NATIVE_HOOK(0x61be50u) REGS; LOADALL;
  goto L_0061be50;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061be50:;
  /* 0061be50 mov eax, 0x659768 */ { eax = (u32)(0x659768u); }
  /* 0061be55 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061be60(CPU *c) {
  NATIVE_HOOK(0x61be60u) REGS; LOADALL;
L_0061be60:;
  /* 0061be60 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061be63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be68(CPU *c) {
  NATIVE_HOOK(0x61be68u) REGS; LOADALL;
L_0061be68:;
  /* 0061be68 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061be6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be70(CPU *c) {
  NATIVE_HOOK(0x61be70u) REGS; LOADALL;
L_0061be70:;
  /* 0061be70 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0061be73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061be78(CPU *c) {
  NATIVE_HOOK(0x61be78u) REGS; LOADALL;
  goto L_0061be78;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061be78:;
  /* 0061be78 mov eax, 0x65979c */ { eax = (u32)(0x65979cu); }
  /* 0061be7d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061be90(CPU *c) {
  NATIVE_HOOK(0x61be90u) REGS; LOADALL;
L_0061be90:;
  /* 0061be90 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0061be93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061be94 call 0x4b16d0 */ esp -= 4; M32(esp) = 0x61be99u; SAVEALL; F_004b16d0(c); ABI_CHECK(0x4b16d0u, 0x61be94u); RETCHK(0x61be99u, 0x61be94u); LOADALL;
  /* 0061be99 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0061be9a(CPU *c) {
  NATIVE_HOOK(0x61be9au) REGS; LOADALL;
L_0061be9a:;
  /* 0061be9a lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0061be9d jmp 0x4b0ef0 */ SAVEALL; F_004b0ef0(c); return;
}

void F_0061bea2(CPU *c) {
  NATIVE_HOOK(0x61bea2u) REGS; LOADALL;
  goto L_0061bea2;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bea2:;
  /* 0061bea2 mov eax, 0x6597fc */ { eax = (u32)(0x6597fcu); }
  /* 0061bea7 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061beb0(CPU *c) {
  NATIVE_HOOK(0x61beb0u) REGS; LOADALL;
L_0061beb0:;
  /* 0061beb0 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0061beb3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061beb8(CPU *c) {
  NATIVE_HOOK(0x61beb8u) REGS; LOADALL;
L_0061beb8:;
  /* 0061beb8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061bebb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bec0(CPU *c) {
  NATIVE_HOOK(0x61bec0u) REGS; LOADALL;
  goto L_0061bec0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bec0:;
  /* 0061bec0 mov eax, 0x659828 */ { eax = (u32)(0x659828u); }
  /* 0061bec5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bed0(CPU *c) {
  NATIVE_HOOK(0x61bed0u) REGS; LOADALL;
L_0061bed0:;
  /* 0061bed0 lea ecx, [ebp - 0x34] */ ecx = (u32)((u32)(ebp + 0xffffffccu));
  /* 0061bed3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bed8(CPU *c) {
  NATIVE_HOOK(0x61bed8u) REGS; LOADALL;
  goto L_0061bed8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bed8:;
  /* 0061bed8 mov eax, 0x65984c */ { eax = (u32)(0x65984cu); }
  /* 0061bedd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bef0(CPU *c) {
  NATIVE_HOOK(0x61bef0u) REGS; LOADALL;
L_0061bef0:;
  /* 0061bef0 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0061bef3 jmp 0x601eb4 */ SAVEALL; F_00601eb4(c); return;
}

void F_0061bef8(CPU *c) {
  NATIVE_HOOK(0x61bef8u) REGS; LOADALL;
  goto L_0061bef8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bef8:;
  /* 0061bef8 mov eax, 0x659870 */ { eax = (u32)(0x659870u); }
  /* 0061befd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bf10(CPU *c) {
  NATIVE_HOOK(0x61bf10u) REGS; LOADALL;
L_0061bf10:;
  /* 0061bf10 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf18(CPU *c) {
  NATIVE_HOOK(0x61bf18u) REGS; LOADALL;
L_0061bf18:;
  /* 0061bf18 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf1b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf20(CPU *c) {
  NATIVE_HOOK(0x61bf20u) REGS; LOADALL;
L_0061bf20:;
  /* 0061bf20 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf28(CPU *c) {
  NATIVE_HOOK(0x61bf28u) REGS; LOADALL;
L_0061bf28:;
  /* 0061bf28 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf2b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf30(CPU *c) {
  NATIVE_HOOK(0x61bf30u) REGS; LOADALL;
L_0061bf30:;
  /* 0061bf30 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf38(CPU *c) {
  NATIVE_HOOK(0x61bf38u) REGS; LOADALL;
L_0061bf38:;
  /* 0061bf38 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf3b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf40(CPU *c) {
  NATIVE_HOOK(0x61bf40u) REGS; LOADALL;
L_0061bf40:;
  /* 0061bf40 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf43 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf48(CPU *c) {
  NATIVE_HOOK(0x61bf48u) REGS; LOADALL;
L_0061bf48:;
  /* 0061bf48 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf4b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf50(CPU *c) {
  NATIVE_HOOK(0x61bf50u) REGS; LOADALL;
L_0061bf50:;
  /* 0061bf50 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf58(CPU *c) {
  NATIVE_HOOK(0x61bf58u) REGS; LOADALL;
L_0061bf58:;
  /* 0061bf58 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf5b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf60(CPU *c) {
  NATIVE_HOOK(0x61bf60u) REGS; LOADALL;
L_0061bf60:;
  /* 0061bf60 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf68(CPU *c) {
  NATIVE_HOOK(0x61bf68u) REGS; LOADALL;
L_0061bf68:;
  /* 0061bf68 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf70(CPU *c) {
  NATIVE_HOOK(0x61bf70u) REGS; LOADALL;
L_0061bf70:;
  /* 0061bf70 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0061bf73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf78(CPU *c) {
  NATIVE_HOOK(0x61bf78u) REGS; LOADALL;
L_0061bf78:;
  /* 0061bf78 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0061bf7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0061bf80(CPU *c) {
  NATIVE_HOOK(0x61bf80u) REGS; LOADALL;
  goto L_0061bf80;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0061bf80:;
  /* 0061bf80 mov eax, 0x659900 */ { eax = (u32)(0x659900u); }
  /* 0061bf85 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_0061bf90(CPU *c) {
  NATIVE_HOOK(0x61bf90u) REGS; LOADALL;
L_0061bf90:;
  /* 0061bf90 push 0x43ee60 */ { u32 v_ = 0x43ee60u; esp -= 4; M32(esp) = v_; }
  /* 0061bf95 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0061bf97 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 0061bf99 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0061bf9c add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0061bf9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0061bfa0 call 0x5fe890 */ esp -= 4; M32(esp) = 0x61bfa5u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x61bfa0u); RETCHK(0x61bfa5u, 0x61bfa0u); LOADALL;
  /* 0061bfa5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
