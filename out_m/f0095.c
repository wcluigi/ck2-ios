#include "funcs.h"

void F_00628823(CPU *c) {
  NATIVE_HOOK(0x628823u) REGS; LOADALL;
L_00628823:;
  /* 00628823 lea ecx, [ebp - 0x150] */ ecx = (u32)((u32)(ebp + 0xfffffeb0u));
  /* 00628829 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062882e(CPU *c) {
  NATIVE_HOOK(0x62882eu) REGS; LOADALL;
L_0062882e:;
  /* 0062882e mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628831 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628836(CPU *c) {
  NATIVE_HOOK(0x628836u) REGS; LOADALL;
L_00628836:;
  /* 00628836 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628839 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062883e(CPU *c) {
  NATIVE_HOOK(0x62883eu) REGS; LOADALL;
L_0062883e:;
  /* 0062883e mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628841 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628846(CPU *c) {
  NATIVE_HOOK(0x628846u) REGS; LOADALL;
L_00628846:;
  /* 00628846 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628849 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062884e(CPU *c) {
  NATIVE_HOOK(0x62884eu) REGS; LOADALL;
L_0062884e:;
  /* 0062884e mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628851 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628856(CPU *c) {
  NATIVE_HOOK(0x628856u) REGS; LOADALL;
L_00628856:;
  /* 00628856 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628859 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062885e(CPU *c) {
  NATIVE_HOOK(0x62885eu) REGS; LOADALL;
L_0062885e:;
  /* 0062885e lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00628861 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628866(CPU *c) {
  NATIVE_HOOK(0x628866u) REGS; LOADALL;
L_00628866:;
  /* 00628866 lea ecx, [ebp - 0x54] */ ecx = (u32)((u32)(ebp + 0xffffffacu));
  /* 00628869 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062886e(CPU *c) {
  NATIVE_HOOK(0x62886eu) REGS; LOADALL;
L_0062886e:;
  /* 0062886e mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00628871 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628876(CPU *c) {
  NATIVE_HOOK(0x628876u) REGS; LOADALL;
  goto L_00628876;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628876:;
  /* 00628876 mov eax, 0x66fbf0 */ { eax = (u32)(0x66fbf0u); }
  /* 0062887b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628880(CPU *c) {
  NATIVE_HOOK(0x628880u) REGS; LOADALL;
L_00628880:;
  /* 00628880 lea ecx, [ebp - 0x228] */ ecx = (u32)((u32)(ebp + 0xfffffdd8u));
  /* 00628886 jmp 0x4647c0 */ SAVEALL; F_004647c0(c); return;
}

void F_0062888b(CPU *c) {
  NATIVE_HOOK(0x62888bu) REGS; LOADALL;
L_0062888b:;
  /* 0062888b lea ecx, [ebp - 0x238] */ ecx = (u32)((u32)(ebp + 0xfffffdc8u));
  /* 00628891 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00628896(CPU *c) {
  NATIVE_HOOK(0x628896u) REGS; LOADALL;
L_00628896:;
  /* 00628896 lea ecx, [ebp - 0x2a8] */ ecx = (u32)((u32)(ebp + 0xfffffd58u));
  /* 0062889c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006288a1(CPU *c) {
  NATIVE_HOOK(0x6288a1u) REGS; LOADALL;
L_006288a1:;
  /* 006288a1 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 006288a7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006288ac(CPU *c) {
  NATIVE_HOOK(0x6288acu) REGS; LOADALL;
L_006288ac:;
  /* 006288ac lea ecx, [ebp - 0x28c] */ ecx = (u32)((u32)(ebp + 0xfffffd74u));
  /* 006288b2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006288b7(CPU *c) {
  NATIVE_HOOK(0x6288b7u) REGS; LOADALL;
L_006288b7:;
  /* 006288b7 lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 006288bd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006288c2(CPU *c) {
  NATIVE_HOOK(0x6288c2u) REGS; LOADALL;
  goto L_006288c2;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006288c2:;
  /* 006288c2 mov eax, 0x66fc3c */ { eax = (u32)(0x66fc3cu); }
  /* 006288c7 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006288d0(CPU *c) {
  NATIVE_HOOK(0x6288d0u) REGS; LOADALL;
L_006288d0:;
  /* 006288d0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 006288d3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006288d4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x6288d9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x6288d4u); RETCHK(0x6288d9u, 0x6288d4u); LOADALL;
  /* 006288d9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006288da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006288db(CPU *c) {
  NATIVE_HOOK(0x6288dbu) REGS; LOADALL;
  goto L_006288db;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006288db:;
  /* 006288db mov eax, 0x66fc60 */ { eax = (u32)(0x66fc60u); }
  /* 006288e0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006288f0(CPU *c) {
  NATIVE_HOOK(0x6288f0u) REGS; LOADALL;
L_006288f0:;
  /* 006288f0 lea ecx, [ebp - 0x19c] */ ecx = (u32)((u32)(ebp + 0xfffffe64u));
  /* 006288f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006288fb(CPU *c) {
  NATIVE_HOOK(0x6288fbu) REGS; LOADALL;
L_006288fb:;
  /* 006288fb lea ecx, [ebp - 0x84] */ ecx = (u32)((u32)(ebp + 0xffffff7cu));
  /* 00628901 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00628906(CPU *c) {
  NATIVE_HOOK(0x628906u) REGS; LOADALL;
  goto L_00628906;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628906:;
  /* 00628906 mov eax, 0x66fc8c */ { eax = (u32)(0x66fc8cu); }
  /* 0062890b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628910(CPU *c) {
  NATIVE_HOOK(0x628910u) REGS; LOADALL;
L_00628910:;
  /* 00628910 mov eax, dword ptr [ebp - 0x274] */ { const u32 m_ = (u32)(ebp + 0xfffffd8cu); eax = (u32)(M32(m_)); }
  /* 00628916 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628917 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x62891cu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x628917u); RETCHK(0x62891cu, 0x628917u); LOADALL;
  /* 0062891c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062891d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062891e(CPU *c) {
  NATIVE_HOOK(0x62891eu) REGS; LOADALL;
L_0062891e:;
  /* 0062891e mov eax, dword ptr [ebp - 0x274] */ { const u32 m_ = (u32)(ebp + 0xfffffd8cu); eax = (u32)(M32(m_)); }
  /* 00628924 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628925 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x62892au; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x628925u); RETCHK(0x62892au, 0x628925u); LOADALL;
  /* 0062892a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062892b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062892c(CPU *c) {
  NATIVE_HOOK(0x62892cu) REGS; LOADALL;
L_0062892c:;
  /* 0062892c lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062892f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628934(CPU *c) {
  NATIVE_HOOK(0x628934u) REGS; LOADALL;
L_00628934:;
  /* 00628934 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628937 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062893c(CPU *c) {
  NATIVE_HOOK(0x62893cu) REGS; LOADALL;
L_0062893c:;
  /* 0062893c lea esi, [ebp - 0x2a4] */ esi = (u32)((u32)(ebp + 0xfffffd5cu));
  /* 00628942 jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_00628947(CPU *c) {
  NATIVE_HOOK(0x628947u) REGS; LOADALL;
L_00628947:;
  /* 00628947 lea esi, [ebp - 0x2c4] */ esi = (u32)((u32)(ebp + 0xfffffd3cu));
  /* 0062894d jmp 0x5577c0 */ SAVEALL; F_005577c0(c); return;
}

void F_00628952(CPU *c) {
  NATIVE_HOOK(0x628952u) REGS; LOADALL;
  goto L_00628952;
L_004b40a0:;
  /* 004b40a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004b40a1 mov esi, eax */ { esi = (u32)(eax); }
  /* 004b40a3 add esi, 0x54 */ { u32 a_ = esi, b_ = 0x54u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004b40a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004b40a8 call 0x4d0df0 */ esp -= 4; M32(esp) = 0x4b40adu; SAVEALL; F_004d0df0(c); ABI_CHECK(0x4d0df0u, 0x4b40a8u); RETCHK(0x4b40adu, 0x4b40a8u); LOADALL;
  /* 004b40ad mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004b40af pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004b40b0 jmp 0x4b12c0 */ SAVEALL; F_004b12c0(c); return;
L_00628952:;
  /* 00628952 lea eax, [ebp - 0x34c] */ eax = (u32)((u32)(ebp + 0xfffffcb4u));
  /* 00628958 jmp 0x4b40a0 */ goto L_004b40a0;
}

void F_0062895d(CPU *c) {
  NATIVE_HOOK(0x62895du) REGS; LOADALL;
L_0062895d:;
  /* 0062895d lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628960 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628965(CPU *c) {
  NATIVE_HOOK(0x628965u) REGS; LOADALL;
L_00628965:;
  /* 00628965 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628968 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062896d(CPU *c) {
  NATIVE_HOOK(0x62896du) REGS; LOADALL;
  goto L_0062896d;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062896d:;
  /* 0062896d mov eax, 0x66fcf8 */ { eax = (u32)(0x66fcf8u); }
  /* 00628972 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628980(CPU *c) {
  NATIVE_HOOK(0x628980u) REGS; LOADALL;
L_00628980:;
  /* 00628980 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 00628986 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_0062898b(CPU *c) {
  NATIVE_HOOK(0x62898bu) REGS; LOADALL;
L_0062898b:;
  /* 0062898b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062898e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628993(CPU *c) {
  NATIVE_HOOK(0x628993u) REGS; LOADALL;
L_00628993:;
  /* 00628993 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00628996 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_0062899b(CPU *c) {
  NATIVE_HOOK(0x62899bu) REGS; LOADALL;
  goto L_0062899b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062899b:;
  /* 0062899b mov eax, 0x66fd2c */ { eax = (u32)(0x66fd2cu); }
  /* 006289a0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006289b0(CPU *c) {
  NATIVE_HOOK(0x6289b0u) REGS; LOADALL;
L_006289b0:;
  /* 006289b0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006289b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006289b8(CPU *c) {
  NATIVE_HOOK(0x6289b8u) REGS; LOADALL;
L_006289b8:;
  /* 006289b8 mov eax, dword ptr [ebp - 0x68] */ { const u32 m_ = (u32)(ebp + 0xffffff98u); eax = (u32)(M32(m_)); }
  /* 006289bb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006289bc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6289c1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6289bcu); RETCHK(0x6289c1u, 0x6289bcu); LOADALL;
  /* 006289c1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006289c2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006289c3(CPU *c) {
  NATIVE_HOOK(0x6289c3u) REGS; LOADALL;
L_006289c3:;
  /* 006289c3 lea ecx, [ebp - 0x88] */ ecx = (u32)((u32)(ebp + 0xffffff78u));
  /* 006289c9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006289ce(CPU *c) {
  NATIVE_HOOK(0x6289ceu) REGS; LOADALL;
L_006289ce:;
  /* 006289ce lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006289d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006289d6(CPU *c) {
  NATIVE_HOOK(0x6289d6u) REGS; LOADALL;
L_006289d6:;
  /* 006289d6 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006289d9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006289de(CPU *c) {
  NATIVE_HOOK(0x6289deu) REGS; LOADALL;
  goto L_006289de;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006289de:;
  /* 006289de mov eax, 0x66fd70 */ { eax = (u32)(0x66fd70u); }
  /* 006289e3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006289f0(CPU *c) {
  NATIVE_HOOK(0x6289f0u) REGS; LOADALL;
L_006289f0:;
  /* 006289f0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006289f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006289f8(CPU *c) {
  NATIVE_HOOK(0x6289f8u) REGS; LOADALL;
L_006289f8:;
  /* 006289f8 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006289fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a00(CPU *c) {
  NATIVE_HOOK(0x628a00u) REGS; LOADALL;
L_00628a00:;
  /* 00628a00 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00628a03 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a08(CPU *c) {
  NATIVE_HOOK(0x628a08u) REGS; LOADALL;
L_00628a08:;
  /* 00628a08 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 00628a0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a13(CPU *c) {
  NATIVE_HOOK(0x628a13u) REGS; LOADALL;
L_00628a13:;
  /* 00628a13 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628a16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a1b(CPU *c) {
  NATIVE_HOOK(0x628a1bu) REGS; LOADALL;
  goto L_00628a1b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628a1b:;
  /* 00628a1b mov eax, 0x66fdb4 */ { eax = (u32)(0x66fdb4u); }
  /* 00628a20 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628a30(CPU *c) {
  NATIVE_HOOK(0x628a30u) REGS; LOADALL;
L_00628a30:;
  /* 00628a30 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628a33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a38(CPU *c) {
  NATIVE_HOOK(0x628a38u) REGS; LOADALL;
L_00628a38:;
  /* 00628a38 lea ecx, [ebp - 0x354] */ ecx = (u32)((u32)(ebp + 0xfffffcacu));
  /* 00628a3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a43(CPU *c) {
  NATIVE_HOOK(0x628a43u) REGS; LOADALL;
L_00628a43:;
  /* 00628a43 lea ecx, [ebp - 0x3e0] */ ecx = (u32)((u32)(ebp + 0xfffffc20u));
  /* 00628a49 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a4e(CPU *c) {
  NATIVE_HOOK(0x628a4eu) REGS; LOADALL;
L_00628a4e:;
  /* 00628a4e lea ecx, [ebp - 0x31c] */ ecx = (u32)((u32)(ebp + 0xfffffce4u));
  /* 00628a54 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a59(CPU *c) {
  NATIVE_HOOK(0x628a59u) REGS; LOADALL;
L_00628a59:;
  /* 00628a59 lea ecx, [ebp - 0x370] */ ecx = (u32)((u32)(ebp + 0xfffffc90u));
  /* 00628a5f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a64(CPU *c) {
  NATIVE_HOOK(0x628a64u) REGS; LOADALL;
L_00628a64:;
  /* 00628a64 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00628a67 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a6c(CPU *c) {
  NATIVE_HOOK(0x628a6cu) REGS; LOADALL;
L_00628a6c:;
  /* 00628a6c lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628a6f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a74(CPU *c) {
  NATIVE_HOOK(0x628a74u) REGS; LOADALL;
L_00628a74:;
  /* 00628a74 lea ecx, [ebp - 0x3a8] */ ecx = (u32)((u32)(ebp + 0xfffffc58u));
  /* 00628a7a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a7f(CPU *c) {
  NATIVE_HOOK(0x628a7fu) REGS; LOADALL;
L_00628a7f:;
  /* 00628a7f lea ecx, [ebp - 0x38c] */ ecx = (u32)((u32)(ebp + 0xfffffc74u));
  /* 00628a85 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a8a(CPU *c) {
  NATIVE_HOOK(0x628a8au) REGS; LOADALL;
L_00628a8a:;
  /* 00628a8a lea ecx, [ebp - 0x3fc] */ ecx = (u32)((u32)(ebp + 0xfffffc04u));
  /* 00628a90 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628a95(CPU *c) {
  NATIVE_HOOK(0x628a95u) REGS; LOADALL;
L_00628a95:;
  /* 00628a95 mov eax, dword ptr [ebp - 0x26c] */ { const u32 m_ = (u32)(ebp + 0xfffffd94u); eax = (u32)(M32(m_)); }
  /* 00628a9b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628a9c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628aa1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628a9cu); RETCHK(0x628aa1u, 0x628a9cu); LOADALL;
  /* 00628aa1 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628aa2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628aa3(CPU *c) {
  NATIVE_HOOK(0x628aa3u) REGS; LOADALL;
L_00628aa3:;
  /* 00628aa3 mov eax, dword ptr [ebp - 0x26c] */ { const u32 m_ = (u32)(ebp + 0xfffffd94u); eax = (u32)(M32(m_)); }
  /* 00628aa9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628aaa call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628aafu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628aaau); RETCHK(0x628aafu, 0x628aaau); LOADALL;
  /* 00628aaf pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628ab0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ab1(CPU *c) {
  NATIVE_HOOK(0x628ab1u) REGS; LOADALL;
L_00628ab1:;
  /* 00628ab1 mov eax, dword ptr [ebp - 0x26c] */ { const u32 m_ = (u32)(ebp + 0xfffffd94u); eax = (u32)(M32(m_)); }
  /* 00628ab7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628ab8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628abdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628ab8u); RETCHK(0x628abdu, 0x628ab8u); LOADALL;
  /* 00628abd pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628abe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628abf(CPU *c) {
  NATIVE_HOOK(0x628abfu) REGS; LOADALL;
L_00628abf:;
  /* 00628abf lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628ac2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628ac7(CPU *c) {
  NATIVE_HOOK(0x628ac7u) REGS; LOADALL;
L_00628ac7:;
  /* 00628ac7 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00628aca jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628acf(CPU *c) {
  NATIVE_HOOK(0x628acfu) REGS; LOADALL;
L_00628acf:;
  /* 00628acf lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628ad2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628ad7(CPU *c) {
  NATIVE_HOOK(0x628ad7u) REGS; LOADALL;
L_00628ad7:;
  /* 00628ad7 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628ada jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628adf(CPU *c) {
  NATIVE_HOOK(0x628adfu) REGS; LOADALL;
L_00628adf:;
  /* 00628adf lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00628ae2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628ae7(CPU *c) {
  NATIVE_HOOK(0x628ae7u) REGS; LOADALL;
L_00628ae7:;
  /* 00628ae7 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628aea jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628aef(CPU *c) {
  NATIVE_HOOK(0x628aefu) REGS; LOADALL;
L_00628aef:;
  /* 00628aef lea ecx, [ebp - 0x2c8] */ ecx = (u32)((u32)(ebp + 0xfffffd38u));
  /* 00628af5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628afa(CPU *c) {
  NATIVE_HOOK(0x628afau) REGS; LOADALL;
L_00628afa:;
  /* 00628afa lea esi, [ebp - 0x58] */ esi = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00628afd jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00628b02(CPU *c) {
  NATIVE_HOOK(0x628b02u) REGS; LOADALL;
L_00628b02:;
  /* 00628b02 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628b05 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b0a(CPU *c) {
  NATIVE_HOOK(0x628b0au) REGS; LOADALL;
L_00628b0a:;
  /* 00628b0a lea ecx, [ebp - 0x3c4] */ ecx = (u32)((u32)(ebp + 0xfffffc3cu));
  /* 00628b10 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b15(CPU *c) {
  NATIVE_HOOK(0x628b15u) REGS; LOADALL;
L_00628b15:;
  /* 00628b15 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628b18 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b1d(CPU *c) {
  NATIVE_HOOK(0x628b1du) REGS; LOADALL;
L_00628b1d:;
  /* 00628b1d lea ecx, [ebp - 0x300] */ ecx = (u32)((u32)(ebp + 0xfffffd00u));
  /* 00628b23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b28(CPU *c) {
  NATIVE_HOOK(0x628b28u) REGS; LOADALL;
L_00628b28:;
  /* 00628b28 lea ecx, [ebp - 0x124] */ ecx = (u32)((u32)(ebp + 0xfffffedcu));
  /* 00628b2e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b33(CPU *c) {
  NATIVE_HOOK(0x628b33u) REGS; LOADALL;
L_00628b33:;
  /* 00628b33 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 00628b39 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b3e(CPU *c) {
  NATIVE_HOOK(0x628b3eu) REGS; LOADALL;
L_00628b3e:;
  /* 00628b3e lea ecx, [ebp - 0xe4] */ ecx = (u32)((u32)(ebp + 0xffffff1cu));
  /* 00628b44 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b49(CPU *c) {
  NATIVE_HOOK(0x628b49u) REGS; LOADALL;
L_00628b49:;
  /* 00628b49 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 00628b4f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b54(CPU *c) {
  NATIVE_HOOK(0x628b54u) REGS; LOADALL;
L_00628b54:;
  /* 00628b54 lea ecx, [ebp - 0xa4] */ ecx = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00628b5a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b5f(CPU *c) {
  NATIVE_HOOK(0x628b5fu) REGS; LOADALL;
L_00628b5f:;
  /* 00628b5f push 0x43ee60 */ { u32 v_ = 0x43ee60u; esp -= 4; M32(esp) = v_; }
  /* 00628b64 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00628b66 push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 00628b68 lea eax, [ebp - 0x124] */ eax = (u32)((u32)(ebp + 0xfffffedcu));
  /* 00628b6e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628b6f call 0x5fe890 */ esp -= 4; M32(esp) = 0x628b74u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x628b6fu); RETCHK(0x628b74u, 0x628b6fu); LOADALL;
  /* 00628b74 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628b75(CPU *c) {
  NATIVE_HOOK(0x628b75u) REGS; LOADALL;
L_00628b75:;
  /* 00628b75 lea ecx, [ebp - 0x338] */ ecx = (u32)((u32)(ebp + 0xfffffcc8u));
  /* 00628b7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b80(CPU *c) {
  NATIVE_HOOK(0x628b80u) REGS; LOADALL;
L_00628b80:;
  /* 00628b80 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628b83 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b88(CPU *c) {
  NATIVE_HOOK(0x628b88u) REGS; LOADALL;
L_00628b88:;
  /* 00628b88 lea ecx, [ebp - 0x2e4] */ ecx = (u32)((u32)(ebp + 0xfffffd1cu));
  /* 00628b8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b93(CPU *c) {
  NATIVE_HOOK(0x628b93u) REGS; LOADALL;
L_00628b93:;
  /* 00628b93 lea ecx, [ebp - 0x488] */ ecx = (u32)((u32)(ebp + 0xfffffb78u));
  /* 00628b99 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628b9e(CPU *c) {
  NATIVE_HOOK(0x628b9eu) REGS; LOADALL;
L_00628b9e:;
  /* 00628b9e lea ecx, [ebp - 0x46c] */ ecx = (u32)((u32)(ebp + 0xfffffb94u));
  /* 00628ba4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628ba9(CPU *c) {
  NATIVE_HOOK(0x628ba9u) REGS; LOADALL;
  goto L_00628ba9;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628ba9:;
  /* 00628ba9 mov eax, 0x66ff30 */ { eax = (u32)(0x66ff30u); }
  /* 00628bae jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628bc0(CPU *c) {
  NATIVE_HOOK(0x628bc0u) REGS; LOADALL;
L_00628bc0:;
  /* 00628bc0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628bc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628bc8(CPU *c) {
  NATIVE_HOOK(0x628bc8u) REGS; LOADALL;
L_00628bc8:;
  /* 00628bc8 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 00628bcb and eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00628bce je 0x628be3 */ if (ZF_) goto L_00628be3;
  /* 00628bd4 and dword ptr [ebp - 0x64], 0xfffffffe */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00628bd8 lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00628bde jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
L_00628be3:;
  /* 00628be3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628be4(CPU *c) {
  NATIVE_HOOK(0x628be4u) REGS; LOADALL;
L_00628be4:;
  /* 00628be4 mov eax, dword ptr [ebp - 0x64] */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); eax = (u32)(M32(m_)); }
  /* 00628be7 and eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00628bea je 0x628bfc */ if (ZF_) goto L_00628bfc;
  /* 00628bf0 and dword ptr [ebp - 0x64], 0xfffffffd */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); u32 a_ = M32(m_), b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 00628bf4 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00628bf7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
L_00628bfc:;
  /* 00628bfc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628bfd(CPU *c) {
  NATIVE_HOOK(0x628bfdu) REGS; LOADALL;
L_00628bfd:;
  /* 00628bfd lea esi, [ebp - 0x5c] */ esi = (u32)((u32)(ebp + 0xffffffa4u));
  /* 00628c00 jmp 0x40b640 */ SAVEALL; F_0040b640(c); return;
}

void F_00628c05(CPU *c) {
  NATIVE_HOOK(0x628c05u) REGS; LOADALL;
L_00628c05:;
  /* 00628c05 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 00628c08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00628c09 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x628c0eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x628c09u); RETCHK(0x628c0eu, 0x628c09u); LOADALL;
  /* 00628c0e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628c0f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628c10(CPU *c) {
  NATIVE_HOOK(0x628c10u) REGS; LOADALL;
  goto L_00628c10;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628c10:;
  /* 00628c10 mov eax, 0x66ffe0 */ { eax = (u32)(0x66ffe0u); }
  /* 00628c15 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628c20(CPU *c) {
  NATIVE_HOOK(0x628c20u) REGS; LOADALL;
L_00628c20:;
  /* 00628c20 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628c23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c28(CPU *c) {
  NATIVE_HOOK(0x628c28u) REGS; LOADALL;
L_00628c28:;
  /* 00628c28 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628c2b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c30(CPU *c) {
  NATIVE_HOOK(0x628c30u) REGS; LOADALL;
L_00628c30:;
  /* 00628c30 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00628c33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c38(CPU *c) {
  NATIVE_HOOK(0x628c38u) REGS; LOADALL;
L_00628c38:;
  /* 00628c38 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00628c3b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c40(CPU *c) {
  NATIVE_HOOK(0x628c40u) REGS; LOADALL;
  goto L_00628c40;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628c40:;
  /* 00628c40 mov eax, 0x67001c */ { eax = (u32)(0x67001cu); }
  /* 00628c45 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628c50(CPU *c) {
  NATIVE_HOOK(0x628c50u) REGS; LOADALL;
L_00628c50:;
  /* 00628c50 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628c53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c58(CPU *c) {
  NATIVE_HOOK(0x628c58u) REGS; LOADALL;
L_00628c58:;
  /* 00628c58 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628c5b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c60(CPU *c) {
  NATIVE_HOOK(0x628c60u) REGS; LOADALL;
L_00628c60:;
  /* 00628c60 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628c63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c68(CPU *c) {
  NATIVE_HOOK(0x628c68u) REGS; LOADALL;
L_00628c68:;
  /* 00628c68 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628c6b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c70(CPU *c) {
  NATIVE_HOOK(0x628c70u) REGS; LOADALL;
L_00628c70:;
  /* 00628c70 lea ecx, [ebp - 0x3c0] */ ecx = (u32)((u32)(ebp + 0xfffffc40u));
  /* 00628c76 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c7b(CPU *c) {
  NATIVE_HOOK(0x628c7bu) REGS; LOADALL;
L_00628c7b:;
  /* 00628c7b lea ecx, [ebp - 0x484] */ ecx = (u32)((u32)(ebp + 0xfffffb7cu));
  /* 00628c81 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c86(CPU *c) {
  NATIVE_HOOK(0x628c86u) REGS; LOADALL;
L_00628c86:;
  /* 00628c86 lea ecx, [ebp - 0x4a0] */ ecx = (u32)((u32)(ebp + 0xfffffb60u));
  /* 00628c8c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c91(CPU *c) {
  NATIVE_HOOK(0x628c91u) REGS; LOADALL;
L_00628c91:;
  /* 00628c91 lea ecx, [ebp - 0x4bc] */ ecx = (u32)((u32)(ebp + 0xfffffb44u));
  /* 00628c97 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628c9c(CPU *c) {
  NATIVE_HOOK(0x628c9cu) REGS; LOADALL;
L_00628c9c:;
  /* 00628c9c lea ecx, [ebp - 0x500] */ ecx = (u32)((u32)(ebp + 0xfffffb00u));
  /* 00628ca2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628ca7(CPU *c) {
  NATIVE_HOOK(0x628ca7u) REGS; LOADALL;
L_00628ca7:;
  /* 00628ca7 lea ecx, [ebp - 0x3f8] */ ecx = (u32)((u32)(ebp + 0xfffffc08u));
  /* 00628cad jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628cb2(CPU *c) {
  NATIVE_HOOK(0x628cb2u) REGS; LOADALL;
L_00628cb2:;
  /* 00628cb2 lea ecx, [ebp - 0x44c] */ ecx = (u32)((u32)(ebp + 0xfffffbb4u));
  /* 00628cb8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628cbd(CPU *c) {
  NATIVE_HOOK(0x628cbdu) REGS; LOADALL;
L_00628cbd:;
  /* 00628cbd lea ecx, [ebp - 0x468] */ ecx = (u32)((u32)(ebp + 0xfffffb98u));
  /* 00628cc3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628cc8(CPU *c) {
  NATIVE_HOOK(0x628cc8u) REGS; LOADALL;
L_00628cc8:;
  /* 00628cc8 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628ccb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628cd0(CPU *c) {
  NATIVE_HOOK(0x628cd0u) REGS; LOADALL;
L_00628cd0:;
  /* 00628cd0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628cd3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628cd8(CPU *c) {
  NATIVE_HOOK(0x628cd8u) REGS; LOADALL;
L_00628cd8:;
  /* 00628cd8 mov eax, dword ptr [0x9be36c] */ { const u32 m_ = (u32)(0x9be36cu); eax = (u32)(M32(m_)); }
  /* 00628cdd and eax, 0xfffffffe */ { u32 a_ = eax, b_ = 0xfffffffeu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00628ce0 mov dword ptr [0x9be36c], eax */ { const u32 m_ = (u32)(0x9be36cu); M32(m_) = (u32)(eax); }
  /* 00628ce5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ce6(CPU *c) {
  NATIVE_HOOK(0x628ce6u) REGS; LOADALL;
L_00628ce6:;
  /* 00628ce6 lea ecx, [ebp - 0x430] */ ecx = (u32)((u32)(ebp + 0xfffffbd0u));
  /* 00628cec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628cf1(CPU *c) {
  NATIVE_HOOK(0x628cf1u) REGS; LOADALL;
L_00628cf1:;
  /* 00628cf1 mov eax, dword ptr [0x9be36c] */ { const u32 m_ = (u32)(0x9be36cu); eax = (u32)(M32(m_)); }
  /* 00628cf6 and eax, 0xfffffffd */ { u32 a_ = eax, b_ = 0xfffffffdu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00628cf9 mov dword ptr [0x9be36c], eax */ { const u32 m_ = (u32)(0x9be36cu); M32(m_) = (u32)(eax); }
  /* 00628cfe ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628cff(CPU *c) {
  NATIVE_HOOK(0x628cffu) REGS; LOADALL;
L_00628cff:;
  /* 00628cff lea ecx, [ebp - 0x3dc] */ ecx = (u32)((u32)(ebp + 0xfffffc24u));
  /* 00628d05 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628d0a(CPU *c) {
  NATIVE_HOOK(0x628d0au) REGS; LOADALL;
L_00628d0a:;
  /* 00628d0a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628d0d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628d12(CPU *c) {
  NATIVE_HOOK(0x628d12u) REGS; LOADALL;
L_00628d12:;
  /* 00628d12 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00628d15 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628d1a(CPU *c) {
  NATIVE_HOOK(0x628d1au) REGS; LOADALL;
L_00628d1a:;
  /* 00628d1a lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00628d1d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628d22(CPU *c) {
  NATIVE_HOOK(0x628d22u) REGS; LOADALL;
L_00628d22:;
  /* 00628d22 lea ecx, [ebp - 0x414] */ ecx = (u32)((u32)(ebp + 0xfffffbecu));
  /* 00628d28 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00628d2d(CPU *c) {
  NATIVE_HOOK(0x628d2du) REGS; LOADALL;
  goto L_00628d2d;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00628d2d:;
  /* 00628d2d mov eax, 0x670120 */ { eax = (u32)(0x670120u); }
  /* 00628d32 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00628d40(CPU *c) {
  NATIVE_HOOK(0x628d40u) REGS; LOADALL;
L_00628d40:;
  /* 00628d40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00628d41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00628d43 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00628d44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00628d45 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00628d48 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00628d4a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 00628d4d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00628d4f push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 00628d51 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00628d58 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00628d5b push 0x642754 */ { u32 v_ = 0x642754u; esp -= 4; M32(esp) = v_; }
  /* 00628d60 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00628d63 call 0x404420 */ esp -= 4; M32(esp) = 0x628d68u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x628d63u); RETCHK(0x628d68u, 0x628d63u); LOADALL;
  /* 00628d68 mov esi, 0x7a70e8 */ { esi = (u32)(0x7a70e8u); }
  /* 00628d6d call 0x405af0 */ esp -= 4; M32(esp) = 0x628d72u; SAVEALL; F_00405af0(c); ABI_CHECK(0x405af0u, 0x628d6du); RETCHK(0x628d72u, 0x628d6du); LOADALL;
  /* 00628d72 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00628d73 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00628d75 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00628d76 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628d80(CPU *c) {
  NATIVE_HOOK(0x628d80u) REGS; LOADALL;
L_00628d80:;
  /* 00628d80 mov dword ptr [0x7a70ec], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a70ecu); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628d8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628d90(CPU *c) {
  NATIVE_HOOK(0x628d90u) REGS; LOADALL;
L_00628d90:;
  /* 00628d90 mov dword ptr [0x7a70f0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a70f0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628d9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628da0(CPU *c) {
  NATIVE_HOOK(0x628da0u) REGS; LOADALL;
L_00628da0:;
  /* 00628da0 mov dword ptr [0x7a70f4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a70f4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628daa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628db0(CPU *c) {
  NATIVE_HOOK(0x628db0u) REGS; LOADALL;
L_00628db0:;
  /* 00628db0 mov dword ptr [0x7a70f8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a70f8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628dba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628dc0(CPU *c) {
  NATIVE_HOOK(0x628dc0u) REGS; LOADALL;
L_00628dc0:;
  /* 00628dc0 push 0x62bf90 */ { u32 v_ = 0x62bf90u; esp -= 4; M32(esp) = v_; }
  /* 00628dc5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x628dcau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x628dc5u); RETCHK(0x628dcau, 0x628dc5u); LOADALL;
  /* 00628dca pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628dcb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628dd0(CPU *c) {
  NATIVE_HOOK(0x628dd0u) REGS; LOADALL;
L_00628dd0:;
  /* 00628dd0 push 0x62bfc0 */ { u32 v_ = 0x62bfc0u; esp -= 4; M32(esp) = v_; }
  /* 00628dd5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x628ddau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x628dd5u); RETCHK(0x628ddau, 0x628dd5u); LOADALL;
  /* 00628dda pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628ddb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628de0(CPU *c) {
  NATIVE_HOOK(0x628de0u) REGS; LOADALL;
L_00628de0:;
  /* 00628de0 push 0x62bff0 */ { u32 v_ = 0x62bff0u; esp -= 4; M32(esp) = v_; }
  /* 00628de5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x628deau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x628de5u); RETCHK(0x628deau, 0x628de5u); LOADALL;
  /* 00628dea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628deb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628df0(CPU *c) {
  NATIVE_HOOK(0x628df0u) REGS; LOADALL;
L_00628df0:;
  /* 00628df0 push 0x62c020 */ { u32 v_ = 0x62c020u; esp -= 4; M32(esp) = v_; }
  /* 00628df5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x628dfau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x628df5u); RETCHK(0x628dfau, 0x628df5u); LOADALL;
  /* 00628dfa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628dfb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628e00(CPU *c) {
  NATIVE_HOOK(0x628e00u) REGS; LOADALL;
L_00628e00:;
  /* 00628e00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00628e01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00628e03 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00628e04 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00628e05 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00628e08 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00628e0a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 00628e0d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00628e0f push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00628e11 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00628e18 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00628e1b push 0x642b40 */ { u32 v_ = 0x642b40u; esp -= 4; M32(esp) = v_; }
  /* 00628e20 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00628e23 call 0x404420 */ esp -= 4; M32(esp) = 0x628e28u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x628e23u); RETCHK(0x628e28u, 0x628e23u); LOADALL;
  /* 00628e28 mov esi, 0x7a70fc */ { esi = (u32)(0x7a70fcu); }
  /* 00628e2d call 0x40abf0 */ esp -= 4; M32(esp) = 0x628e32u; SAVEALL; F_0040abf0(c); ABI_CHECK(0x40abf0u, 0x628e2du); RETCHK(0x628e32u, 0x628e2du); LOADALL;
  /* 00628e32 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00628e33 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00628e35 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00628e36 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628e40(CPU *c) {
  NATIVE_HOOK(0x628e40u) REGS; LOADALL;
L_00628e40:;
  /* 00628e40 mov dword ptr [0x7a7100], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7100u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628e4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628e50(CPU *c) {
  NATIVE_HOOK(0x628e50u) REGS; LOADALL;
L_00628e50:;
  /* 00628e50 mov dword ptr [0x7a7104], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7104u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628e5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628e60(CPU *c) {
  NATIVE_HOOK(0x628e60u) REGS; LOADALL;
L_00628e60:;
  /* 00628e60 mov dword ptr [0x7a7108], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7108u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628e6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628e70(CPU *c) {
  NATIVE_HOOK(0x628e70u) REGS; LOADALL;
L_00628e70:;
  /* 00628e70 mov dword ptr [0x7a710c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a710cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628e7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628e80(CPU *c) {
  NATIVE_HOOK(0x628e80u) REGS; LOADALL;
L_00628e80:;
  /* 00628e80 push 0x62c060 */ { u32 v_ = 0x62c060u; esp -= 4; M32(esp) = v_; }
  /* 00628e85 call 0x5fe916 */ esp -= 4; M32(esp) = 0x628e8au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x628e85u); RETCHK(0x628e8au, 0x628e85u); LOADALL;
  /* 00628e8a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628e8b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628e90(CPU *c) {
  NATIVE_HOOK(0x628e90u) REGS; LOADALL;
L_00628e90:;
  /* 00628e90 push 0x62c090 */ { u32 v_ = 0x62c090u; esp -= 4; M32(esp) = v_; }
  /* 00628e95 call 0x5fe916 */ esp -= 4; M32(esp) = 0x628e9au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x628e95u); RETCHK(0x628e9au, 0x628e95u); LOADALL;
  /* 00628e9a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00628e9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ea0(CPU *c) {
  NATIVE_HOOK(0x628ea0u) REGS; LOADALL;
L_00628ea0:;
  /* 00628ea0 mov dword ptr [0x7a7110], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7110u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628eaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628eb0(CPU *c) {
  NATIVE_HOOK(0x628eb0u) REGS; LOADALL;
L_00628eb0:;
  /* 00628eb0 mov dword ptr [0x7a7114], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7114u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628eba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ec0(CPU *c) {
  NATIVE_HOOK(0x628ec0u) REGS; LOADALL;
L_00628ec0:;
  /* 00628ec0 mov dword ptr [0x7a7118], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7118u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628eca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ed0(CPU *c) {
  NATIVE_HOOK(0x628ed0u) REGS; LOADALL;
L_00628ed0:;
  /* 00628ed0 mov dword ptr [0x7a711c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a711cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628eda ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ee0(CPU *c) {
  NATIVE_HOOK(0x628ee0u) REGS; LOADALL;
L_00628ee0:;
  /* 00628ee0 mov dword ptr [0x7a7120], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7120u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628eea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ef0(CPU *c) {
  NATIVE_HOOK(0x628ef0u) REGS; LOADALL;
L_00628ef0:;
  /* 00628ef0 mov dword ptr [0x7a7124], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7124u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628efa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f00(CPU *c) {
  NATIVE_HOOK(0x628f00u) REGS; LOADALL;
L_00628f00:;
  /* 00628f00 mov dword ptr [0x7a7128], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7128u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628f0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f10(CPU *c) {
  NATIVE_HOOK(0x628f10u) REGS; LOADALL;
L_00628f10:;
  /* 00628f10 mov dword ptr [0x7a712c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a712cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628f1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f20(CPU *c) {
  NATIVE_HOOK(0x628f20u) REGS; LOADALL;
L_00628f20:;
  /* 00628f20 mov dword ptr [0x7a7130], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7130u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628f2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f30(CPU *c) {
  NATIVE_HOOK(0x628f30u) REGS; LOADALL;
L_00628f30:;
  /* 00628f30 mov dword ptr [0x7a7134], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7134u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628f3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f40(CPU *c) {
  NATIVE_HOOK(0x628f40u) REGS; LOADALL;
L_00628f40:;
  /* 00628f40 mov dword ptr [0x7a7138], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7138u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628f4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f50(CPU *c) {
  NATIVE_HOOK(0x628f50u) REGS; LOADALL;
L_00628f50:;
  /* 00628f50 mov dword ptr [0x7a713c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a713cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628f5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f60(CPU *c) {
  NATIVE_HOOK(0x628f60u) REGS; LOADALL;
L_00628f60:;
  /* 00628f60 mov dword ptr [0x7a7140], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7140u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628f6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628f70(CPU *c) {
  NATIVE_HOOK(0x628f70u) REGS; LOADALL;
L_00628f70:;
  /* 00628f70 mov dword ptr [0x7a7144], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7144u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628f7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
