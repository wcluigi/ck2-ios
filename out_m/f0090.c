#include "funcs.h"

void F_006267a6(CPU *c) {
  NATIVE_HOOK(0x6267a6u) REGS; LOADALL;
L_006267a6:;
  /* 006267a6 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006267a9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006267ae(CPU *c) {
  NATIVE_HOOK(0x6267aeu) REGS; LOADALL;
L_006267ae:;
  /* 006267ae lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 006267b1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006267b6(CPU *c) {
  NATIVE_HOOK(0x6267b6u) REGS; LOADALL;
L_006267b6:;
  /* 006267b6 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
  /* 006267bc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006267c1(CPU *c) {
  NATIVE_HOOK(0x6267c1u) REGS; LOADALL;
L_006267c1:;
  /* 006267c1 lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 006267c7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006267cc(CPU *c) {
  NATIVE_HOOK(0x6267ccu) REGS; LOADALL;
L_006267cc:;
  /* 006267cc lea ecx, [ebp - 0x108] */ ecx = (u32)((u32)(ebp + 0xfffffef8u));
  /* 006267d2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006267d7(CPU *c) {
  NATIVE_HOOK(0x6267d7u) REGS; LOADALL;
  goto L_006267d7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006267d7:;
  /* 006267d7 mov eax, 0x66dce8 */ { eax = (u32)(0x66dce8u); }
  /* 006267dc jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006267f0(CPU *c) {
  NATIVE_HOOK(0x6267f0u) REGS; LOADALL;
L_006267f0:;
  /* 006267f0 lea ecx, [ebp + 0x24] */ ecx = (u32)((u32)(ebp + 0x24u));
  /* 006267f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006267f8(CPU *c) {
  NATIVE_HOOK(0x6267f8u) REGS; LOADALL;
L_006267f8:;
  /* 006267f8 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 006267fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626800(CPU *c) {
  NATIVE_HOOK(0x626800u) REGS; LOADALL;
L_00626800:;
  /* 00626800 lea ecx, [ebp - 0xfc] */ ecx = (u32)((u32)(ebp + 0xffffff04u));
  /* 00626806 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062680b(CPU *c) {
  NATIVE_HOOK(0x62680bu) REGS; LOADALL;
L_0062680b:;
  /* 0062680b lea ecx, [ebp - 0x118] */ ecx = (u32)((u32)(ebp + 0xfffffee8u));
  /* 00626811 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626816(CPU *c) {
  NATIVE_HOOK(0x626816u) REGS; LOADALL;
L_00626816:;
  /* 00626816 mov eax, dword ptr [ebp - 0xdc] */ { const u32 m_ = (u32)(ebp + 0xffffff24u); eax = (u32)(M32(m_)); }
  /* 0062681c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062681d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626822u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62681du); RETCHK(0x626822u, 0x62681du); LOADALL;
  /* 00626822 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626823 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626824(CPU *c) {
  NATIVE_HOOK(0x626824u) REGS; LOADALL;
  goto L_00626824;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626824:;
  /* 00626824 mov eax, 0x66dd2c */ { eax = (u32)(0x66dd2cu); }
  /* 00626829 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626830(CPU *c) {
  NATIVE_HOOK(0x626830u) REGS; LOADALL;
L_00626830:;
  /* 00626830 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00626833 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626838(CPU *c) {
  NATIVE_HOOK(0x626838u) REGS; LOADALL;
  goto L_00626838;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626838:;
  /* 00626838 mov eax, 0x66dd50 */ { eax = (u32)(0x66dd50u); }
  /* 0062683d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626850(CPU *c) {
  NATIVE_HOOK(0x626850u) REGS; LOADALL;
L_00626850:;
  /* 00626850 mov eax, dword ptr [ebp - 0x634] */ { const u32 m_ = (u32)(ebp + 0xfffff9ccu); eax = (u32)(M32(m_)); }
  /* 00626856 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626857 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62685cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626857u); RETCHK(0x62685cu, 0x626857u); LOADALL;
  /* 0062685c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062685d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062685e(CPU *c) {
  NATIVE_HOOK(0x62685eu) REGS; LOADALL;
  goto L_0062685e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062685e:;
  /* 0062685e mov eax, 0x66dd98 */ { eax = (u32)(0x66dd98u); }
  /* 00626863 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626870(CPU *c) {
  NATIVE_HOOK(0x626870u) REGS; LOADALL;
L_00626870:;
  /* 00626870 lea esi, [ebp - 0x5c] */ esi = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00626873 jmp 0x5699e0 */ SAVEALL; F_005699e0(c); return;
}

void F_00626878(CPU *c) {
  NATIVE_HOOK(0x626878u) REGS; LOADALL;
  goto L_00626878;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626878:;
  /* 00626878 mov eax, 0x66dde0 */ { eax = (u32)(0x66dde0u); }
  /* 0062687d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626890(CPU *c) {
  NATIVE_HOOK(0x626890u) REGS; LOADALL;
  goto L_00626890;
L_0055d9a0:;
  /* 0055d9a0 mov dword ptr [ecx], 0x656678 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656678u); }
  /* 0055d9a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00626890:;
  /* 00626890 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00626893 jmp 0x55d9a0 */ goto L_0055d9a0;
}

void F_00626898(CPU *c) {
  NATIVE_HOOK(0x626898u) REGS; LOADALL;
  goto L_00626898;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626898:;
  /* 00626898 mov eax, 0x66de04 */ { eax = (u32)(0x66de04u); }
  /* 0062689d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006268b0(CPU *c) {
  NATIVE_HOOK(0x6268b0u) REGS; LOADALL;
  goto L_006268b0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006268b0:;
  /* 006268b0 mov eax, 0x66de54 */ { eax = (u32)(0x66de54u); }
  /* 006268b5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006268c0(CPU *c) {
  NATIVE_HOOK(0x6268c0u) REGS; LOADALL;
L_006268c0:;
  /* 006268c0 lea ecx, [ebp - 0x5bc] */ ecx = (u32)((u32)(ebp + 0xfffffa44u));
  /* 006268c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006268cb(CPU *c) {
  NATIVE_HOOK(0x6268cbu) REGS; LOADALL;
L_006268cb:;
  /* 006268cb lea ecx, [ebp - 0x5a0] */ ecx = (u32)((u32)(ebp + 0xfffffa60u));
  /* 006268d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006268d6(CPU *c) {
  NATIVE_HOOK(0x6268d6u) REGS; LOADALL;
L_006268d6:;
  /* 006268d6 lea ecx, [ebp - 0x5d8] */ ecx = (u32)((u32)(ebp + 0xfffffa28u));
  /* 006268dc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006268e1(CPU *c) {
  NATIVE_HOOK(0x6268e1u) REGS; LOADALL;
L_006268e1:;
  /* 006268e1 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006268e4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006268e9(CPU *c) {
  NATIVE_HOOK(0x6268e9u) REGS; LOADALL;
L_006268e9:;
  /* 006268e9 mov eax, dword ptr [ebp - 0x570] */ { const u32 m_ = (u32)(ebp + 0xfffffa90u); eax = (u32)(M32(m_)); }
  /* 006268ef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006268f0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6268f5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6268f0u); RETCHK(0x6268f5u, 0x6268f0u); LOADALL;
  /* 006268f5 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006268f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006268f7(CPU *c) {
  NATIVE_HOOK(0x6268f7u) REGS; LOADALL;
L_006268f7:;
  /* 006268f7 mov eax, dword ptr [ebp - 0x578] */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); eax = (u32)(M32(m_)); }
  /* 006268fd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006268fe call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626903u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6268feu); RETCHK(0x626903u, 0x6268feu); LOADALL;
  /* 00626903 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626904 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626905(CPU *c) {
  NATIVE_HOOK(0x626905u) REGS; LOADALL;
L_00626905:;
  /* 00626905 mov eax, dword ptr [ebp - 0x578] */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); eax = (u32)(M32(m_)); }
  /* 0062690b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062690c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626911u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62690cu); RETCHK(0x626911u, 0x62690cu); LOADALL;
  /* 00626911 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626912 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626913(CPU *c) {
  NATIVE_HOOK(0x626913u) REGS; LOADALL;
L_00626913:;
  /* 00626913 mov eax, dword ptr [ebp - 0x578] */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); eax = (u32)(M32(m_)); }
  /* 00626919 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0062691a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62691fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x62691au); RETCHK(0x62691fu, 0x62691au); LOADALL;
  /* 0062691f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626920 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626921(CPU *c) {
  NATIVE_HOOK(0x626921u) REGS; LOADALL;
L_00626921:;
  /* 00626921 mov eax, dword ptr [ebp - 0x578] */ { const u32 m_ = (u32)(ebp + 0xfffffa88u); eax = (u32)(M32(m_)); }
  /* 00626927 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626928 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62692du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626928u); RETCHK(0x62692du, 0x626928u); LOADALL;
  /* 0062692d pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062692e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062692f(CPU *c) {
  NATIVE_HOOK(0x62692fu) REGS; LOADALL;
L_0062692f:;
  /* 0062692f mov eax, dword ptr [ebp - 0x584] */ { const u32 m_ = (u32)(ebp + 0xfffffa7cu); eax = (u32)(M32(m_)); }
  /* 00626935 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626936 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62693bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626936u); RETCHK(0x62693bu, 0x626936u); LOADALL;
  /* 0062693b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062693c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062693d(CPU *c) {
  NATIVE_HOOK(0x62693du) REGS; LOADALL;
  goto L_0062693d;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062693d:;
  /* 0062693d mov eax, 0x66dec0 */ { eax = (u32)(0x66dec0u); }
  /* 00626942 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626950(CPU *c) {
  NATIVE_HOOK(0x626950u) REGS; LOADALL;
L_00626950:;
  /* 00626950 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00626953 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626958(CPU *c) {
  NATIVE_HOOK(0x626958u) REGS; LOADALL;
L_00626958:;
  /* 00626958 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062695b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626960(CPU *c) {
  NATIVE_HOOK(0x626960u) REGS; LOADALL;
L_00626960:;
  /* 00626960 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00626963 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626968(CPU *c) {
  NATIVE_HOOK(0x626968u) REGS; LOADALL;
L_00626968:;
  /* 00626968 lea ecx, [ebp - 0x2dc] */ ecx = (u32)((u32)(ebp + 0xfffffd24u));
  /* 0062696e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626973(CPU *c) {
  NATIVE_HOOK(0x626973u) REGS; LOADALL;
L_00626973:;
  /* 00626973 lea ecx, [ebp - 0x2dc] */ ecx = (u32)((u32)(ebp + 0xfffffd24u));
  /* 00626979 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062697e(CPU *c) {
  NATIVE_HOOK(0x62697eu) REGS; LOADALL;
L_0062697e:;
  /* 0062697e lea ecx, [ebp - 0x2dc] */ ecx = (u32)((u32)(ebp + 0xfffffd24u));
  /* 00626984 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626989(CPU *c) {
  NATIVE_HOOK(0x626989u) REGS; LOADALL;
L_00626989:;
  /* 00626989 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062698c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626991(CPU *c) {
  NATIVE_HOOK(0x626991u) REGS; LOADALL;
L_00626991:;
  /* 00626991 lea ecx, [ebp - 0x2dc] */ ecx = (u32)((u32)(ebp + 0xfffffd24u));
  /* 00626997 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062699c(CPU *c) {
  NATIVE_HOOK(0x62699cu) REGS; LOADALL;
L_0062699c:;
  /* 0062699c lea ecx, [ebp - 0x2dc] */ ecx = (u32)((u32)(ebp + 0xfffffd24u));
  /* 006269a2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006269a7(CPU *c) {
  NATIVE_HOOK(0x6269a7u) REGS; LOADALL;
  goto L_006269a7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006269a7:;
  /* 006269a7 mov eax, 0x66df28 */ { eax = (u32)(0x66df28u); }
  /* 006269ac jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006269c0(CPU *c) {
  NATIVE_HOOK(0x6269c0u) REGS; LOADALL;
L_006269c0:;
  /* 006269c0 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 006269c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006269cb(CPU *c) {
  NATIVE_HOOK(0x6269cbu) REGS; LOADALL;
L_006269cb:;
  /* 006269cb lea ecx, [ebp - 0xe4] */ ecx = (u32)((u32)(ebp + 0xffffff1cu));
  /* 006269d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006269d6(CPU *c) {
  NATIVE_HOOK(0x6269d6u) REGS; LOADALL;
L_006269d6:;
  /* 006269d6 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006269d9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006269de(CPU *c) {
  NATIVE_HOOK(0x6269deu) REGS; LOADALL;
L_006269de:;
  /* 006269de lea ecx, [ebp - 0xc8] */ ecx = (u32)((u32)(ebp + 0xffffff38u));
  /* 006269e4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006269e9(CPU *c) {
  NATIVE_HOOK(0x6269e9u) REGS; LOADALL;
L_006269e9:;
  /* 006269e9 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006269ef jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006269f4(CPU *c) {
  NATIVE_HOOK(0x6269f4u) REGS; LOADALL;
L_006269f4:;
  /* 006269f4 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006269f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006269fc(CPU *c) {
  NATIVE_HOOK(0x6269fcu) REGS; LOADALL;
  goto L_006269fc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006269fc:;
  /* 006269fc mov eax, 0x66df98 */ { eax = (u32)(0x66df98u); }
  /* 00626a01 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626a10(CPU *c) {
  NATIVE_HOOK(0x626a10u) REGS; LOADALL;
L_00626a10:;
  /* 00626a10 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00626a13 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626a14 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626a19u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626a14u); RETCHK(0x626a19u, 0x626a14u); LOADALL;
  /* 00626a19 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626a1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626a1b(CPU *c) {
  NATIVE_HOOK(0x626a1bu) REGS; LOADALL;
L_00626a1b:;
  /* 00626a1b lea ecx, [ebp - 0x40] */ ecx = (u32)((u32)(ebp + 0xffffffc0u));
  /* 00626a1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626a23(CPU *c) {
  NATIVE_HOOK(0x626a23u) REGS; LOADALL;
  goto L_00626a23;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626a23:;
  /* 00626a23 mov eax, 0x66dfe8 */ { eax = (u32)(0x66dfe8u); }
  /* 00626a28 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626a30(CPU *c) {
  NATIVE_HOOK(0x626a30u) REGS; LOADALL;
L_00626a30:;
  /* 00626a30 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00626a33 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626a34 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626a39u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626a34u); RETCHK(0x626a39u, 0x626a34u); LOADALL;
  /* 00626a39 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626a3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626a3b(CPU *c) {
  NATIVE_HOOK(0x626a3bu) REGS; LOADALL;
L_00626a3b:;
  /* 00626a3b lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626a3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626a43(CPU *c) {
  NATIVE_HOOK(0x626a43u) REGS; LOADALL;
L_00626a43:;
  /* 00626a43 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00626a46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626a47 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626a4cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626a47u); RETCHK(0x626a4cu, 0x626a47u); LOADALL;
  /* 00626a4c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626a4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626a4e(CPU *c) {
  NATIVE_HOOK(0x626a4eu) REGS; LOADALL;
L_00626a4e:;
  /* 00626a4e lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626a51 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626a56(CPU *c) {
  NATIVE_HOOK(0x626a56u) REGS; LOADALL;
L_00626a56:;
  /* 00626a56 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00626a59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626a5a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626a5fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626a5au); RETCHK(0x626a5fu, 0x626a5au); LOADALL;
  /* 00626a5f pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626a60 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626a61(CPU *c) {
  NATIVE_HOOK(0x626a61u) REGS; LOADALL;
L_00626a61:;
  /* 00626a61 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626a64 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626a69(CPU *c) {
  NATIVE_HOOK(0x626a69u) REGS; LOADALL;
L_00626a69:;
  /* 00626a69 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00626a6c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626a6d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626a72u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626a6du); RETCHK(0x626a72u, 0x626a6du); LOADALL;
  /* 00626a72 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626a73 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626a74(CPU *c) {
  NATIVE_HOOK(0x626a74u) REGS; LOADALL;
L_00626a74:;
  /* 00626a74 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626a77 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626a7c(CPU *c) {
  NATIVE_HOOK(0x626a7cu) REGS; LOADALL;
L_00626a7c:;
  /* 00626a7c lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 00626a82 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626a87(CPU *c) {
  NATIVE_HOOK(0x626a87u) REGS; LOADALL;
L_00626a87:;
  /* 00626a87 mov eax, dword ptr [ebp + 0x1c] */ { const u32 m_ = (u32)(ebp + 0x1cu); eax = (u32)(M32(m_)); }
  /* 00626a8a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626a8b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626a90u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626a8bu); RETCHK(0x626a90u, 0x626a8bu); LOADALL;
  /* 00626a90 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626a91 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626a92(CPU *c) {
  NATIVE_HOOK(0x626a92u) REGS; LOADALL;
  goto L_00626a92;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626a92:;
  /* 00626a92 mov eax, 0x66e0c0 */ { eax = (u32)(0x66e0c0u); }
  /* 00626a97 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626aa0(CPU *c) {
  NATIVE_HOOK(0x626aa0u) REGS; LOADALL;
L_00626aa0:;
  /* 00626aa0 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00626aa3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626aa8(CPU *c) {
  NATIVE_HOOK(0x626aa8u) REGS; LOADALL;
L_00626aa8:;
  /* 00626aa8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00626aab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ab0(CPU *c) {
  NATIVE_HOOK(0x626ab0u) REGS; LOADALL;
L_00626ab0:;
  /* 00626ab0 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00626ab3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ab8(CPU *c) {
  NATIVE_HOOK(0x626ab8u) REGS; LOADALL;
L_00626ab8:;
  /* 00626ab8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00626abb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ac0(CPU *c) {
  NATIVE_HOOK(0x626ac0u) REGS; LOADALL;
L_00626ac0:;
  /* 00626ac0 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00626ac3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ac8(CPU *c) {
  NATIVE_HOOK(0x626ac8u) REGS; LOADALL;
L_00626ac8:;
  /* 00626ac8 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00626acb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ad0(CPU *c) {
  NATIVE_HOOK(0x626ad0u) REGS; LOADALL;
  goto L_00626ad0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626ad0:;
  /* 00626ad0 mov eax, 0x66e10c */ { eax = (u32)(0x66e10cu); }
  /* 00626ad5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626ae0(CPU *c) {
  NATIVE_HOOK(0x626ae0u) REGS; LOADALL;
L_00626ae0:;
  /* 00626ae0 mov eax, dword ptr [ebp - 0xe48] */ { const u32 m_ = (u32)(ebp + 0xfffff1b8u); eax = (u32)(M32(m_)); }
  /* 00626ae6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00626ae7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x626aecu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x626ae7u); RETCHK(0x626aecu, 0x626ae7u); LOADALL;
  /* 00626aec pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00626aed ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00626aee(CPU *c) {
  NATIVE_HOOK(0x626aeeu) REGS; LOADALL;
L_00626aee:;
  /* 00626aee lea ecx, [ebp - 0xf78] */ ecx = (u32)((u32)(ebp + 0xfffff088u));
  /* 00626af4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626af9(CPU *c) {
  NATIVE_HOOK(0x626af9u) REGS; LOADALL;
L_00626af9:;
  /* 00626af9 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00626afc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b01(CPU *c) {
  NATIVE_HOOK(0x626b01u) REGS; LOADALL;
L_00626b01:;
  /* 00626b01 lea ecx, [ebp - 0xed8] */ ecx = (u32)((u32)(ebp + 0xfffff128u));
  /* 00626b07 jmp 0x41b9e0 */ SAVEALL; F_0041b9e0(c); return;
}

void F_00626b0c(CPU *c) {
  NATIVE_HOOK(0x626b0cu) REGS; LOADALL;
L_00626b0c:;
  /* 00626b0c mov ecx, dword ptr [ebp - 0xe48] */ { const u32 m_ = (u32)(ebp + 0xfffff1b8u); ecx = (u32)(M32(m_)); }
  /* 00626b12 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b17(CPU *c) {
  NATIVE_HOOK(0x626b17u) REGS; LOADALL;
L_00626b17:;
  /* 00626b17 lea ecx, [ebp - 0xf5c] */ ecx = (u32)((u32)(ebp + 0xfffff0a4u));
  /* 00626b1d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b22(CPU *c) {
  NATIVE_HOOK(0x626b22u) REGS; LOADALL;
L_00626b22:;
  /* 00626b22 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00626b25 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b2a(CPU *c) {
  NATIVE_HOOK(0x626b2au) REGS; LOADALL;
L_00626b2a:;
  /* 00626b2a lea ecx, [ebp - 0x11b8] */ ecx = (u32)((u32)(ebp + 0xffffee48u));
  /* 00626b30 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b35(CPU *c) {
  NATIVE_HOOK(0x626b35u) REGS; LOADALL;
L_00626b35:;
  /* 00626b35 lea ecx, [ebp - 0x11f0] */ ecx = (u32)((u32)(ebp + 0xffffee10u));
  /* 00626b3b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b40(CPU *c) {
  NATIVE_HOOK(0x626b40u) REGS; LOADALL;
L_00626b40:;
  /* 00626b40 lea ecx, [ebp - 0x1228] */ ecx = (u32)((u32)(ebp + 0xffffedd8u));
  /* 00626b46 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b4b(CPU *c) {
  NATIVE_HOOK(0x626b4bu) REGS; LOADALL;
L_00626b4b:;
  /* 00626b4b lea ecx, [ebp - 0x1260] */ ecx = (u32)((u32)(ebp + 0xffffeda0u));
  /* 00626b51 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b56(CPU *c) {
  NATIVE_HOOK(0x626b56u) REGS; LOADALL;
L_00626b56:;
  /* 00626b56 lea ecx, [ebp - 0x1298] */ ecx = (u32)((u32)(ebp + 0xffffed68u));
  /* 00626b5c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b61(CPU *c) {
  NATIVE_HOOK(0x626b61u) REGS; LOADALL;
L_00626b61:;
  /* 00626b61 lea ecx, [ebp - 0x12d0] */ ecx = (u32)((u32)(ebp + 0xffffed30u));
  /* 00626b67 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b6c(CPU *c) {
  NATIVE_HOOK(0x626b6cu) REGS; LOADALL;
L_00626b6c:;
  /* 00626b6c lea ecx, [ebp - 0x1308] */ ecx = (u32)((u32)(ebp + 0xffffecf8u));
  /* 00626b72 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b77(CPU *c) {
  NATIVE_HOOK(0x626b77u) REGS; LOADALL;
L_00626b77:;
  /* 00626b77 lea ecx, [ebp - 0x1340] */ ecx = (u32)((u32)(ebp + 0xffffecc0u));
  /* 00626b7d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b82(CPU *c) {
  NATIVE_HOOK(0x626b82u) REGS; LOADALL;
L_00626b82:;
  /* 00626b82 lea ecx, [ebp - 0x1378] */ ecx = (u32)((u32)(ebp + 0xffffec88u));
  /* 00626b88 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b8d(CPU *c) {
  NATIVE_HOOK(0x626b8du) REGS; LOADALL;
L_00626b8d:;
  /* 00626b8d lea ecx, [ebp - 0x13b0] */ ecx = (u32)((u32)(ebp + 0xffffec50u));
  /* 00626b93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626b98(CPU *c) {
  NATIVE_HOOK(0x626b98u) REGS; LOADALL;
L_00626b98:;
  /* 00626b98 lea ecx, [ebp - 0x13e8] */ ecx = (u32)((u32)(ebp + 0xffffec18u));
  /* 00626b9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ba3(CPU *c) {
  NATIVE_HOOK(0x626ba3u) REGS; LOADALL;
L_00626ba3:;
  /* 00626ba3 lea ecx, [ebp - 0xf24] */ ecx = (u32)((u32)(ebp + 0xfffff0dcu));
  /* 00626ba9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bae(CPU *c) {
  NATIVE_HOOK(0x626baeu) REGS; LOADALL;
L_00626bae:;
  /* 00626bae lea ecx, [ebp - 0xf40] */ ecx = (u32)((u32)(ebp + 0xfffff0c0u));
  /* 00626bb4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bb9(CPU *c) {
  NATIVE_HOOK(0x626bb9u) REGS; LOADALL;
L_00626bb9:;
  /* 00626bb9 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00626bbc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bc1(CPU *c) {
  NATIVE_HOOK(0x626bc1u) REGS; LOADALL;
L_00626bc1:;
  /* 00626bc1 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00626bc4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bc9(CPU *c) {
  NATIVE_HOOK(0x626bc9u) REGS; LOADALL;
L_00626bc9:;
  /* 00626bc9 lea ecx, [ebp - 0x1420] */ ecx = (u32)((u32)(ebp + 0xffffebe0u));
  /* 00626bcf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bd4(CPU *c) {
  NATIVE_HOOK(0x626bd4u) REGS; LOADALL;
L_00626bd4:;
  /* 00626bd4 lea ecx, [ebp - 0xfa4] */ ecx = (u32)((u32)(ebp + 0xfffff05cu));
  /* 00626bda jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bdf(CPU *c) {
  NATIVE_HOOK(0x626bdfu) REGS; LOADALL;
L_00626bdf:;
  /* 00626bdf lea ecx, [ebp - 0x1484] */ ecx = (u32)((u32)(ebp + 0xffffeb7cu));
  /* 00626be5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bea(CPU *c) {
  NATIVE_HOOK(0x626beau) REGS; LOADALL;
L_00626bea:;
  /* 00626bea lea ecx, [ebp - 0x14bc] */ ecx = (u32)((u32)(ebp + 0xffffeb44u));
  /* 00626bf0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626bf5(CPU *c) {
  NATIVE_HOOK(0x626bf5u) REGS; LOADALL;
L_00626bf5:;
  /* 00626bf5 lea ecx, [ebp - 0x14f4] */ ecx = (u32)((u32)(ebp + 0xffffeb0cu));
  /* 00626bfb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c00(CPU *c) {
  NATIVE_HOOK(0x626c00u) REGS; LOADALL;
L_00626c00:;
  /* 00626c00 lea ecx, [ebp - 0xfdc] */ ecx = (u32)((u32)(ebp + 0xfffff024u));
  /* 00626c06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c0b(CPU *c) {
  NATIVE_HOOK(0x626c0bu) REGS; LOADALL;
L_00626c0b:;
  /* 00626c0b lea ecx, [ebp - 0x127c] */ ecx = (u32)((u32)(ebp + 0xffffed84u));
  /* 00626c11 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c16(CPU *c) {
  NATIVE_HOOK(0x626c16u) REGS; LOADALL;
L_00626c16:;
  /* 00626c16 lea ecx, [ebp - 0x1014] */ ecx = (u32)((u32)(ebp + 0xffffefecu));
  /* 00626c1c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c21(CPU *c) {
  NATIVE_HOOK(0x626c21u) REGS; LOADALL;
L_00626c21:;
  /* 00626c21 lea ecx, [ebp - 0x13cc] */ ecx = (u32)((u32)(ebp + 0xffffec34u));
  /* 00626c27 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c2c(CPU *c) {
  NATIVE_HOOK(0x626c2cu) REGS; LOADALL;
L_00626c2c:;
  /* 00626c2c lea ecx, [ebp - 0x104c] */ ecx = (u32)((u32)(ebp + 0xffffefb4u));
  /* 00626c32 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c37(CPU *c) {
  NATIVE_HOOK(0x626c37u) REGS; LOADALL;
L_00626c37:;
  /* 00626c37 lea ecx, [ebp - 0x12b4] */ ecx = (u32)((u32)(ebp + 0xffffed4cu));
  /* 00626c3d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c42(CPU *c) {
  NATIVE_HOOK(0x626c42u) REGS; LOADALL;
L_00626c42:;
  /* 00626c42 lea ecx, [ebp - 0x1084] */ ecx = (u32)((u32)(ebp + 0xffffef7cu));
  /* 00626c48 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c4d(CPU *c) {
  NATIVE_HOOK(0x626c4du) REGS; LOADALL;
L_00626c4d:;
  /* 00626c4d lea ecx, [ebp - 0x1468] */ ecx = (u32)((u32)(ebp + 0xffffeb98u));
  /* 00626c53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c58(CPU *c) {
  NATIVE_HOOK(0x626c58u) REGS; LOADALL;
L_00626c58:;
  /* 00626c58 lea ecx, [ebp - 0x10bc] */ ecx = (u32)((u32)(ebp + 0xffffef44u));
  /* 00626c5e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c63(CPU *c) {
  NATIVE_HOOK(0x626c63u) REGS; LOADALL;
L_00626c63:;
  /* 00626c63 lea ecx, [ebp - 0x12ec] */ ecx = (u32)((u32)(ebp + 0xffffed14u));
  /* 00626c69 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c6e(CPU *c) {
  NATIVE_HOOK(0x626c6eu) REGS; LOADALL;
L_00626c6e:;
  /* 00626c6e lea ecx, [ebp - 0x10f4] */ ecx = (u32)((u32)(ebp + 0xffffef0cu));
  /* 00626c74 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c79(CPU *c) {
  NATIVE_HOOK(0x626c79u) REGS; LOADALL;
L_00626c79:;
  /* 00626c79 lea ecx, [ebp - 0x1404] */ ecx = (u32)((u32)(ebp + 0xffffebfcu));
  /* 00626c7f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c84(CPU *c) {
  NATIVE_HOOK(0x626c84u) REGS; LOADALL;
L_00626c84:;
  /* 00626c84 lea ecx, [ebp - 0x112c] */ ecx = (u32)((u32)(ebp + 0xffffeed4u));
  /* 00626c8a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c8f(CPU *c) {
  NATIVE_HOOK(0x626c8fu) REGS; LOADALL;
L_00626c8f:;
  /* 00626c8f lea ecx, [ebp - 0x1324] */ ecx = (u32)((u32)(ebp + 0xffffecdcu));
  /* 00626c95 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626c9a(CPU *c) {
  NATIVE_HOOK(0x626c9au) REGS; LOADALL;
L_00626c9a:;
  /* 00626c9a lea ecx, [ebp - 0x1164] */ ecx = (u32)((u32)(ebp + 0xffffee9cu));
  /* 00626ca0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ca5(CPU *c) {
  NATIVE_HOOK(0x626ca5u) REGS; LOADALL;
L_00626ca5:;
  /* 00626ca5 lea ecx, [ebp - 0x14d8] */ ecx = (u32)((u32)(ebp + 0xffffeb28u));
  /* 00626cab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626cb0(CPU *c) {
  NATIVE_HOOK(0x626cb0u) REGS; LOADALL;
L_00626cb0:;
  /* 00626cb0 lea ecx, [ebp - 0x119c] */ ecx = (u32)((u32)(ebp + 0xffffee64u));
  /* 00626cb6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626cbb(CPU *c) {
  NATIVE_HOOK(0x626cbbu) REGS; LOADALL;
L_00626cbb:;
  /* 00626cbb lea ecx, [ebp - 0x135c] */ ecx = (u32)((u32)(ebp + 0xffffeca4u));
  /* 00626cc1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626cc6(CPU *c) {
  NATIVE_HOOK(0x626cc6u) REGS; LOADALL;
L_00626cc6:;
  /* 00626cc6 lea ecx, [ebp - 0x11d4] */ ecx = (u32)((u32)(ebp + 0xffffee2cu));
  /* 00626ccc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626cd1(CPU *c) {
  NATIVE_HOOK(0x626cd1u) REGS; LOADALL;
L_00626cd1:;
  /* 00626cd1 lea ecx, [ebp - 0x143c] */ ecx = (u32)((u32)(ebp + 0xffffebc4u));
  /* 00626cd7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626cdc(CPU *c) {
  NATIVE_HOOK(0x626cdcu) REGS; LOADALL;
L_00626cdc:;
  /* 00626cdc lea ecx, [ebp - 0x120c] */ ecx = (u32)((u32)(ebp + 0xffffedf4u));
  /* 00626ce2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626ce7(CPU *c) {
  NATIVE_HOOK(0x626ce7u) REGS; LOADALL;
L_00626ce7:;
  /* 00626ce7 lea ecx, [ebp - 0x1394] */ ecx = (u32)((u32)(ebp + 0xffffec6cu));
  /* 00626ced jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626cf2(CPU *c) {
  NATIVE_HOOK(0x626cf2u) REGS; LOADALL;
L_00626cf2:;
  /* 00626cf2 lea ecx, [ebp - 0x1244] */ ecx = (u32)((u32)(ebp + 0xffffedbcu));
  /* 00626cf8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626cfd(CPU *c) {
  NATIVE_HOOK(0x626cfdu) REGS; LOADALL;
L_00626cfd:;
  /* 00626cfd lea ecx, [ebp - 0x14a0] */ ecx = (u32)((u32)(ebp + 0xffffeb60u));
  /* 00626d03 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d08(CPU *c) {
  NATIVE_HOOK(0x626d08u) REGS; LOADALL;
L_00626d08:;
  /* 00626d08 lea ecx, [ebp - 0xfc0] */ ecx = (u32)((u32)(ebp + 0xfffff040u));
  /* 00626d0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d13(CPU *c) {
  NATIVE_HOOK(0x626d13u) REGS; LOADALL;
L_00626d13:;
  /* 00626d13 lea ecx, [ebp - 0xff8] */ ecx = (u32)((u32)(ebp + 0xfffff008u));
  /* 00626d19 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d1e(CPU *c) {
  NATIVE_HOOK(0x626d1eu) REGS; LOADALL;
L_00626d1e:;
  /* 00626d1e lea ecx, [ebp - 0x1030] */ ecx = (u32)((u32)(ebp + 0xffffefd0u));
  /* 00626d24 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d29(CPU *c) {
  NATIVE_HOOK(0x626d29u) REGS; LOADALL;
L_00626d29:;
  /* 00626d29 lea ecx, [ebp - 0x1068] */ ecx = (u32)((u32)(ebp + 0xffffef98u));
  /* 00626d2f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d34(CPU *c) {
  NATIVE_HOOK(0x626d34u) REGS; LOADALL;
L_00626d34:;
  /* 00626d34 lea ecx, [ebp - 0x10a0] */ ecx = (u32)((u32)(ebp + 0xffffef60u));
  /* 00626d3a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d3f(CPU *c) {
  NATIVE_HOOK(0x626d3fu) REGS; LOADALL;
L_00626d3f:;
  /* 00626d3f lea ecx, [ebp - 0x10d8] */ ecx = (u32)((u32)(ebp + 0xffffef28u));
  /* 00626d45 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d4a(CPU *c) {
  NATIVE_HOOK(0x626d4au) REGS; LOADALL;
L_00626d4a:;
  /* 00626d4a lea ecx, [ebp - 0x1110] */ ecx = (u32)((u32)(ebp + 0xffffeef0u));
  /* 00626d50 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d55(CPU *c) {
  NATIVE_HOOK(0x626d55u) REGS; LOADALL;
L_00626d55:;
  /* 00626d55 lea ecx, [ebp - 0x1148] */ ecx = (u32)((u32)(ebp + 0xffffeeb8u));
  /* 00626d5b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d60(CPU *c) {
  NATIVE_HOOK(0x626d60u) REGS; LOADALL;
L_00626d60:;
  /* 00626d60 lea ecx, [ebp - 0x1180] */ ecx = (u32)((u32)(ebp + 0xffffee80u));
  /* 00626d66 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d6b(CPU *c) {
  NATIVE_HOOK(0x626d6bu) REGS; LOADALL;
L_00626d6b:;
  /* 00626d6b lea ecx, [ebp - 0x2f50] */ ecx = (u32)((u32)(ebp + 0xffffd0b0u));
  /* 00626d71 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d76(CPU *c) {
  NATIVE_HOOK(0x626d76u) REGS; LOADALL;
L_00626d76:;
  /* 00626d76 lea ecx, [ebp - 0x2f88] */ ecx = (u32)((u32)(ebp + 0xffffd078u));
  /* 00626d7c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d81(CPU *c) {
  NATIVE_HOOK(0x626d81u) REGS; LOADALL;
L_00626d81:;
  /* 00626d81 lea ecx, [ebp - 0x2fc0] */ ecx = (u32)((u32)(ebp + 0xffffd040u));
  /* 00626d87 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d8c(CPU *c) {
  NATIVE_HOOK(0x626d8cu) REGS; LOADALL;
L_00626d8c:;
  /* 00626d8c lea ecx, [ebp - 0x2ff8] */ ecx = (u32)((u32)(ebp + 0xffffd008u));
  /* 00626d92 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626d97(CPU *c) {
  NATIVE_HOOK(0x626d97u) REGS; LOADALL;
L_00626d97:;
  /* 00626d97 lea ecx, [ebp - 0x3030] */ ecx = (u32)((u32)(ebp + 0xffffcfd0u));
  /* 00626d9d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626da2(CPU *c) {
  NATIVE_HOOK(0x626da2u) REGS; LOADALL;
L_00626da2:;
  /* 00626da2 lea ecx, [ebp - 0x3068] */ ecx = (u32)((u32)(ebp + 0xffffcf98u));
  /* 00626da8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626dad(CPU *c) {
  NATIVE_HOOK(0x626dadu) REGS; LOADALL;
L_00626dad:;
  /* 00626dad lea ecx, [ebp - 0x30a0] */ ecx = (u32)((u32)(ebp + 0xffffcf60u));
  /* 00626db3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626db8(CPU *c) {
  NATIVE_HOOK(0x626db8u) REGS; LOADALL;
L_00626db8:;
  /* 00626db8 lea ecx, [ebp - 0x30d8] */ ecx = (u32)((u32)(ebp + 0xffffcf28u));
  /* 00626dbe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626dc3(CPU *c) {
  NATIVE_HOOK(0x626dc3u) REGS; LOADALL;
L_00626dc3:;
  /* 00626dc3 lea ecx, [ebp - 0x1db4] */ ecx = (u32)((u32)(ebp + 0xffffe24cu));
  /* 00626dc9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626dce(CPU *c) {
  NATIVE_HOOK(0x626dceu) REGS; LOADALL;
L_00626dce:;
  /* 00626dce lea ecx, [ebp - 0x1548] */ ecx = (u32)((u32)(ebp + 0xffffeab8u));
  /* 00626dd4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626dd9(CPU *c) {
  NATIVE_HOOK(0x626dd9u) REGS; LOADALL;
L_00626dd9:;
  /* 00626dd9 lea ecx, [ebp - 0x2364] */ ecx = (u32)((u32)(ebp + 0xffffdc9cu));
  /* 00626ddf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626de4(CPU *c) {
  NATIVE_HOOK(0x626de4u) REGS; LOADALL;
L_00626de4:;
  /* 00626de4 lea ecx, [ebp - 0x1580] */ ecx = (u32)((u32)(ebp + 0xffffea80u));
  /* 00626dea jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626def(CPU *c) {
  NATIVE_HOOK(0x626defu) REGS; LOADALL;
L_00626def:;
  /* 00626def lea ecx, [ebp - 0x2a2c] */ ecx = (u32)((u32)(ebp + 0xffffd5d4u));
  /* 00626df5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626dfa(CPU *c) {
  NATIVE_HOOK(0x626dfau) REGS; LOADALL;
L_00626dfa:;
  /* 00626dfa lea ecx, [ebp - 0x15b8] */ ecx = (u32)((u32)(ebp + 0xffffea48u));
  /* 00626e00 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626e05(CPU *c) {
  NATIVE_HOOK(0x626e05u) REGS; LOADALL;
L_00626e05:;
  /* 00626e05 lea ecx, [ebp - 0x239c] */ ecx = (u32)((u32)(ebp + 0xffffdc64u));
  /* 00626e0b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626e10(CPU *c) {
  NATIVE_HOOK(0x626e10u) REGS; LOADALL;
L_00626e10:;
  /* 00626e10 lea ecx, [ebp - 0x15f0] */ ecx = (u32)((u32)(ebp + 0xffffea10u));
  /* 00626e16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626e1b(CPU *c) {
  NATIVE_HOOK(0x626e1bu) REGS; LOADALL;
L_00626e1b:;
  /* 00626e1b lea ecx, [ebp - 0x2f34] */ ecx = (u32)((u32)(ebp + 0xffffd0ccu));
  /* 00626e21 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626e26(CPU *c) {
  NATIVE_HOOK(0x626e26u) REGS; LOADALL;
L_00626e26:;
  /* 00626e26 lea ecx, [ebp - 0x1628] */ ecx = (u32)((u32)(ebp + 0xffffe9d8u));
  /* 00626e2c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626e31(CPU *c) {
  NATIVE_HOOK(0x626e31u) REGS; LOADALL;
L_00626e31:;
  /* 00626e31 lea ecx, [ebp - 0x23d4] */ ecx = (u32)((u32)(ebp + 0xffffdc2cu));
  /* 00626e37 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626e3c(CPU *c) {
  NATIVE_HOOK(0x626e3cu) REGS; LOADALL;
L_00626e3c:;
  /* 00626e3c lea ecx, [ebp - 0x1660] */ ecx = (u32)((u32)(ebp + 0xffffe9a0u));
  /* 00626e42 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
