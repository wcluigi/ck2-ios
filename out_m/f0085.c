#include "funcs.h"

void F_006248e0(CPU *c) {
  NATIVE_HOOK(0x6248e0u) REGS; LOADALL;
L_006248e0:;
  /* 006248e0 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006248e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248e8(CPU *c) {
  NATIVE_HOOK(0x6248e8u) REGS; LOADALL;
L_006248e8:;
  /* 006248e8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006248eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248f0(CPU *c) {
  NATIVE_HOOK(0x6248f0u) REGS; LOADALL;
L_006248f0:;
  /* 006248f0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006248f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006248f8(CPU *c) {
  NATIVE_HOOK(0x6248f8u) REGS; LOADALL;
L_006248f8:;
  /* 006248f8 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 006248fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624900(CPU *c) {
  NATIVE_HOOK(0x624900u) REGS; LOADALL;
L_00624900:;
  /* 00624900 lea ecx, [ebp - 0x9c] */ ecx = (u32)((u32)(ebp + 0xffffff64u));
  /* 00624906 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062490b(CPU *c) {
  NATIVE_HOOK(0x62490bu) REGS; LOADALL;
L_0062490b:;
  /* 0062490b lea ecx, [ebp - 0xb8] */ ecx = (u32)((u32)(ebp + 0xffffff48u));
  /* 00624911 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624916(CPU *c) {
  NATIVE_HOOK(0x624916u) REGS; LOADALL;
  goto L_00624916;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624916:;
  /* 00624916 mov eax, 0x66bc78 */ { eax = (u32)(0x66bc78u); }
  /* 0062491b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624920(CPU *c) {
  NATIVE_HOOK(0x624920u) REGS; LOADALL;
L_00624920:;
  /* 00624920 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624923 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624928(CPU *c) {
  NATIVE_HOOK(0x624928u) REGS; LOADALL;
L_00624928:;
  /* 00624928 lea ecx, [ebp - 0x13c] */ ecx = (u32)((u32)(ebp + 0xfffffec4u));
  /* 0062492e jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00624933(CPU *c) {
  NATIVE_HOOK(0x624933u) REGS; LOADALL;
  goto L_00624933;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624933:;
  /* 00624933 mov eax, 0x66bcc8 */ { eax = (u32)(0x66bcc8u); }
  /* 00624938 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624940(CPU *c) {
  NATIVE_HOOK(0x624940u) REGS; LOADALL;
L_00624940:;
  /* 00624940 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00624946 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062494b(CPU *c) {
  NATIVE_HOOK(0x62494bu) REGS; LOADALL;
  goto L_0062494b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062494b:;
  /* 0062494b mov eax, 0x66bd10 */ { eax = (u32)(0x66bd10u); }
  /* 00624950 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624960(CPU *c) {
  NATIVE_HOOK(0x624960u) REGS; LOADALL;
L_00624960:;
  /* 00624960 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00624963 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624968(CPU *c) {
  NATIVE_HOOK(0x624968u) REGS; LOADALL;
L_00624968:;
  /* 00624968 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0062496b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624970(CPU *c) {
  NATIVE_HOOK(0x624970u) REGS; LOADALL;
  goto L_00624970;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624970:;
  /* 00624970 mov eax, 0x66bdcc */ { eax = (u32)(0x66bdccu); }
  /* 00624975 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624980(CPU *c) {
  NATIVE_HOOK(0x624980u) REGS; LOADALL;
L_00624980:;
  /* 00624980 lea ecx, [ebp - 0x1c] */ ecx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00624983 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00624988(CPU *c) {
  NATIVE_HOOK(0x624988u) REGS; LOADALL;
  goto L_00624988;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624988:;
  /* 00624988 mov eax, 0x66bea4 */ { eax = (u32)(0x66bea4u); }
  /* 0062498d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006249a0(CPU *c) {
  NATIVE_HOOK(0x6249a0u) REGS; LOADALL;
L_006249a0:;
  /* 006249a0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 006249a3 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_006249a8(CPU *c) {
  NATIVE_HOOK(0x6249a8u) REGS; LOADALL;
  goto L_006249a8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006249a8:;
  /* 006249a8 mov eax, 0x66bec8 */ { eax = (u32)(0x66bec8u); }
  /* 006249ad jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006249c0(CPU *c) {
  NATIVE_HOOK(0x6249c0u) REGS; LOADALL;
L_006249c0:;
  /* 006249c0 lea ecx, [ebp - 0x1824] */ ecx = (u32)((u32)(ebp + 0xffffe7dcu));
  /* 006249c6 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_006249cb(CPU *c) {
  NATIVE_HOOK(0x6249cbu) REGS; LOADALL;
  goto L_006249cb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006249cb:;
  /* 006249cb mov eax, 0x66beec */ { eax = (u32)(0x66beecu); }
  /* 006249d0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006249e0(CPU *c) {
  NATIVE_HOOK(0x6249e0u) REGS; LOADALL;
L_006249e0:;
  /* 006249e0 lea ecx, [ebp - 0x148] */ ecx = (u32)((u32)(ebp + 0xfffffeb8u));
  /* 006249e6 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_006249eb(CPU *c) {
  NATIVE_HOOK(0x6249ebu) REGS; LOADALL;
L_006249eb:;
  /* 006249eb lea esi, [ebp - 0x134] */ esi = (u32)((u32)(ebp + 0xfffffeccu));
  /* 006249f1 jmp 0x47d260 */ SAVEALL; F_0047d260(c); return;
}

void F_006249f6(CPU *c) {
  NATIVE_HOOK(0x6249f6u) REGS; LOADALL;
  goto L_006249f6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006249f6:;
  /* 006249f6 mov eax, 0x66bf18 */ { eax = (u32)(0x66bf18u); }
  /* 006249fb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624a00(CPU *c) {
  NATIVE_HOOK(0x624a00u) REGS; LOADALL;
L_00624a00:;
  /* 00624a00 lea ecx, [ebp - 0x280] */ ecx = (u32)((u32)(ebp + 0xfffffd80u));
  /* 00624a06 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00624a0b(CPU *c) {
  NATIVE_HOOK(0x624a0bu) REGS; LOADALL;
L_00624a0b:;
  /* 00624a0b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624a0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a13(CPU *c) {
  NATIVE_HOOK(0x624a13u) REGS; LOADALL;
  goto L_00624a13;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624a13:;
  /* 00624a13 mov eax, 0x66bf44 */ { eax = (u32)(0x66bf44u); }
  /* 00624a18 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624a20(CPU *c) {
  NATIVE_HOOK(0x624a20u) REGS; LOADALL;
L_00624a20:;
  /* 00624a20 lea ecx, [ebp - 0x20] */ ecx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00624a23 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00624a28(CPU *c) {
  NATIVE_HOOK(0x624a28u) REGS; LOADALL;
  goto L_00624a28;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624a28:;
  /* 00624a28 mov eax, 0x66bf8c */ { eax = (u32)(0x66bf8cu); }
  /* 00624a2d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624a40(CPU *c) {
  NATIVE_HOOK(0x624a40u) REGS; LOADALL;
L_00624a40:;
  /* 00624a40 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624a43 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a48(CPU *c) {
  NATIVE_HOOK(0x624a48u) REGS; LOADALL;
L_00624a48:;
  /* 00624a48 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624a4b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a50(CPU *c) {
  NATIVE_HOOK(0x624a50u) REGS; LOADALL;
L_00624a50:;
  /* 00624a50 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624a53 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a58(CPU *c) {
  NATIVE_HOOK(0x624a58u) REGS; LOADALL;
L_00624a58:;
  /* 00624a58 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624a5b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a60(CPU *c) {
  NATIVE_HOOK(0x624a60u) REGS; LOADALL;
L_00624a60:;
  /* 00624a60 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624a63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a68(CPU *c) {
  NATIVE_HOOK(0x624a68u) REGS; LOADALL;
  goto L_00624a68;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624a68:;
  /* 00624a68 mov eax, 0x66bfd0 */ { eax = (u32)(0x66bfd0u); }
  /* 00624a6d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624a80(CPU *c) {
  NATIVE_HOOK(0x624a80u) REGS; LOADALL;
  goto L_00624a80;
L_00480950:;
  /* 00480950 jmp 0x480f00 */ SAVEALL; F_00480f00(c); return;
L_00624a80:;
  /* 00624a80 lea ebx, [ebp - 0x7c] */ ebx = (u32)((u32)(ebp + 0xffffff84u));
  /* 00624a83 jmp 0x480950 */ goto L_00480950;
}

void F_00624a88(CPU *c) {
  NATIVE_HOOK(0x624a88u) REGS; LOADALL;
L_00624a88:;
  /* 00624a88 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00624a8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a93(CPU *c) {
  NATIVE_HOOK(0x624a93u) REGS; LOADALL;
L_00624a93:;
  /* 00624a93 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00624a99 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624a9e(CPU *c) {
  NATIVE_HOOK(0x624a9eu) REGS; LOADALL;
L_00624a9e:;
  /* 00624a9e lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624aa1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624aa6(CPU *c) {
  NATIVE_HOOK(0x624aa6u) REGS; LOADALL;
L_00624aa6:;
  /* 00624aa6 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00624aac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ab1(CPU *c) {
  NATIVE_HOOK(0x624ab1u) REGS; LOADALL;
L_00624ab1:;
  /* 00624ab1 lea ecx, [ebp - 0x98] */ ecx = (u32)((u32)(ebp + 0xffffff68u));
  /* 00624ab7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624abc(CPU *c) {
  NATIVE_HOOK(0x624abcu) REGS; LOADALL;
  goto L_00624abc;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624abc:;
  /* 00624abc mov eax, 0x66c01c */ { eax = (u32)(0x66c01cu); }
  /* 00624ac1 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624ad0(CPU *c) {
  NATIVE_HOOK(0x624ad0u) REGS; LOADALL;
L_00624ad0:;
  /* 00624ad0 lea ecx, [ebp - 0x13c] */ ecx = (u32)((u32)(ebp + 0xfffffec4u));
  /* 00624ad6 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00624adb(CPU *c) {
  NATIVE_HOOK(0x624adbu) REGS; LOADALL;
  goto L_00624adb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624adb:;
  /* 00624adb mov eax, 0x66c040 */ { eax = (u32)(0x66c040u); }
  /* 00624ae0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624af0(CPU *c) {
  NATIVE_HOOK(0x624af0u) REGS; LOADALL;
L_00624af0:;
  /* 00624af0 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00624af3 jmp 0x568110 */ SAVEALL; F_00568110(c); return;
}

void F_00624af8(CPU *c) {
  NATIVE_HOOK(0x624af8u) REGS; LOADALL;
L_00624af8:;
  /* 00624af8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624afb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b00(CPU *c) {
  NATIVE_HOOK(0x624b00u) REGS; LOADALL;
  goto L_00624b00;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624b00:;
  /* 00624b00 mov eax, 0x66c06c */ { eax = (u32)(0x66c06cu); }
  /* 00624b05 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624b10(CPU *c) {
  NATIVE_HOOK(0x624b10u) REGS; LOADALL;
L_00624b10:;
  /* 00624b10 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624b13 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00624b18(CPU *c) {
  NATIVE_HOOK(0x624b18u) REGS; LOADALL;
L_00624b18:;
  /* 00624b18 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624b1b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b20(CPU *c) {
  NATIVE_HOOK(0x624b20u) REGS; LOADALL;
  goto L_00624b20;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624b20:;
  /* 00624b20 mov eax, 0x66c098 */ { eax = (u32)(0x66c098u); }
  /* 00624b25 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624b30(CPU *c) {
  NATIVE_HOOK(0x624b30u) REGS; LOADALL;
L_00624b30:;
  /* 00624b30 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624b36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b3b(CPU *c) {
  NATIVE_HOOK(0x624b3bu) REGS; LOADALL;
  goto L_00624b3b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624b3b:;
  /* 00624b3b mov eax, 0x66c0bc */ { eax = (u32)(0x66c0bcu); }
  /* 00624b40 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624b50(CPU *c) {
  NATIVE_HOOK(0x624b50u) REGS; LOADALL;
L_00624b50:;
  /* 00624b50 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624b56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b5b(CPU *c) {
  NATIVE_HOOK(0x624b5bu) REGS; LOADALL;
L_00624b5b:;
  /* 00624b5b lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624b61 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b66(CPU *c) {
  NATIVE_HOOK(0x624b66u) REGS; LOADALL;
L_00624b66:;
  /* 00624b66 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624b6c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b71(CPU *c) {
  NATIVE_HOOK(0x624b71u) REGS; LOADALL;
L_00624b71:;
  /* 00624b71 lea ecx, [ebp - 0x448] */ ecx = (u32)((u32)(ebp + 0xfffffbb8u));
  /* 00624b77 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b7c(CPU *c) {
  NATIVE_HOOK(0x624b7cu) REGS; LOADALL;
  goto L_00624b7c;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624b7c:;
  /* 00624b7c mov eax, 0x66c0f8 */ { eax = (u32)(0x66c0f8u); }
  /* 00624b81 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624b90(CPU *c) {
  NATIVE_HOOK(0x624b90u) REGS; LOADALL;
L_00624b90:;
  /* 00624b90 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624b93 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624b98(CPU *c) {
  NATIVE_HOOK(0x624b98u) REGS; LOADALL;
L_00624b98:;
  /* 00624b98 lea ecx, [ebp - 0xa8] */ ecx = (u32)((u32)(ebp + 0xffffff58u));
  /* 00624b9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ba3(CPU *c) {
  NATIVE_HOOK(0x624ba3u) REGS; LOADALL;
L_00624ba3:;
  /* 00624ba3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624ba6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624bab(CPU *c) {
  NATIVE_HOOK(0x624babu) REGS; LOADALL;
L_00624bab:;
  /* 00624bab mov eax, dword ptr [ebp - 0x6c] */ { const u32 m_ = (u32)(ebp + 0xffffff94u); eax = (u32)(M32(m_)); }
  /* 00624bae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624baf call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624bb4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624bafu); RETCHK(0x624bb4u, 0x624bafu); LOADALL;
  /* 00624bb4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624bb5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624bb6(CPU *c) {
  NATIVE_HOOK(0x624bb6u) REGS; LOADALL;
L_00624bb6:;
  /* 00624bb6 lea ecx, [ebp - 0x8c] */ ecx = (u32)((u32)(ebp + 0xffffff74u));
  /* 00624bbc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624bc1(CPU *c) {
  NATIVE_HOOK(0x624bc1u) REGS; LOADALL;
L_00624bc1:;
  /* 00624bc1 lea ecx, [ebp - 0xc4] */ ecx = (u32)((u32)(ebp + 0xffffff3cu));
  /* 00624bc7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624bcc(CPU *c) {
  NATIVE_HOOK(0x624bccu) REGS; LOADALL;
L_00624bcc:;
  /* 00624bcc lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624bcf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624bd4(CPU *c) {
  NATIVE_HOOK(0x624bd4u) REGS; LOADALL;
  goto L_00624bd4;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624bd4:;
  /* 00624bd4 mov eax, 0x66c14c */ { eax = (u32)(0x66c14cu); }
  /* 00624bd9 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624be0(CPU *c) {
  NATIVE_HOOK(0x624be0u) REGS; LOADALL;
L_00624be0:;
  /* 00624be0 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624be3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624be8(CPU *c) {
  NATIVE_HOOK(0x624be8u) REGS; LOADALL;
L_00624be8:;
  /* 00624be8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624beb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624bf0(CPU *c) {
  NATIVE_HOOK(0x624bf0u) REGS; LOADALL;
L_00624bf0:;
  /* 00624bf0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624bf3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624bf8(CPU *c) {
  NATIVE_HOOK(0x624bf8u) REGS; LOADALL;
L_00624bf8:;
  /* 00624bf8 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00624bfb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c00(CPU *c) {
  NATIVE_HOOK(0x624c00u) REGS; LOADALL;
  goto L_00624c00;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624c00:;
  /* 00624c00 mov eax, 0x66c188 */ { eax = (u32)(0x66c188u); }
  /* 00624c05 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624c10(CPU *c) {
  NATIVE_HOOK(0x624c10u) REGS; LOADALL;
L_00624c10:;
  /* 00624c10 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00624c13 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00624c18(CPU *c) {
  NATIVE_HOOK(0x624c18u) REGS; LOADALL;
  goto L_00624c18;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624c18:;
  /* 00624c18 mov eax, 0x66c1ac */ { eax = (u32)(0x66c1acu); }
  /* 00624c1d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624c30(CPU *c) {
  NATIVE_HOOK(0x624c30u) REGS; LOADALL;
L_00624c30:;
  /* 00624c30 mov eax, dword ptr [ebp - 0x430] */ { const u32 m_ = (u32)(ebp + 0xfffffbd0u); eax = (u32)(M32(m_)); }
  /* 00624c36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00624c37 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x624c3cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x624c37u); RETCHK(0x624c3cu, 0x624c37u); LOADALL;
  /* 00624c3c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00624c3d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00624c3e(CPU *c) {
  NATIVE_HOOK(0x624c3eu) REGS; LOADALL;
L_00624c3e:;
  /* 00624c3e lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c44 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c49(CPU *c) {
  NATIVE_HOOK(0x624c49u) REGS; LOADALL;
L_00624c49:;
  /* 00624c49 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c4f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c54(CPU *c) {
  NATIVE_HOOK(0x624c54u) REGS; LOADALL;
L_00624c54:;
  /* 00624c54 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c5a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c5f(CPU *c) {
  NATIVE_HOOK(0x624c5fu) REGS; LOADALL;
L_00624c5f:;
  /* 00624c5f lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c65 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c6a(CPU *c) {
  NATIVE_HOOK(0x624c6au) REGS; LOADALL;
L_00624c6a:;
  /* 00624c6a lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c70 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c75(CPU *c) {
  NATIVE_HOOK(0x624c75u) REGS; LOADALL;
L_00624c75:;
  /* 00624c75 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c80(CPU *c) {
  NATIVE_HOOK(0x624c80u) REGS; LOADALL;
L_00624c80:;
  /* 00624c80 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c86 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c8b(CPU *c) {
  NATIVE_HOOK(0x624c8bu) REGS; LOADALL;
L_00624c8b:;
  /* 00624c8b lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c91 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624c96(CPU *c) {
  NATIVE_HOOK(0x624c96u) REGS; LOADALL;
L_00624c96:;
  /* 00624c96 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624c9c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ca1(CPU *c) {
  NATIVE_HOOK(0x624ca1u) REGS; LOADALL;
L_00624ca1:;
  /* 00624ca1 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624ca7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624cac(CPU *c) {
  NATIVE_HOOK(0x624cacu) REGS; LOADALL;
L_00624cac:;
  /* 00624cac lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624cb2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624cb7(CPU *c) {
  NATIVE_HOOK(0x624cb7u) REGS; LOADALL;
L_00624cb7:;
  /* 00624cb7 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624cbd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624cc2(CPU *c) {
  NATIVE_HOOK(0x624cc2u) REGS; LOADALL;
L_00624cc2:;
  /* 00624cc2 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624cc8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ccd(CPU *c) {
  NATIVE_HOOK(0x624ccdu) REGS; LOADALL;
L_00624ccd:;
  /* 00624ccd lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624cd3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624cd8(CPU *c) {
  NATIVE_HOOK(0x624cd8u) REGS; LOADALL;
L_00624cd8:;
  /* 00624cd8 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624cde jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ce3(CPU *c) {
  NATIVE_HOOK(0x624ce3u) REGS; LOADALL;
L_00624ce3:;
  /* 00624ce3 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624ce9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624cee(CPU *c) {
  NATIVE_HOOK(0x624ceeu) REGS; LOADALL;
L_00624cee:;
  /* 00624cee lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624cf4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624cf9(CPU *c) {
  NATIVE_HOOK(0x624cf9u) REGS; LOADALL;
L_00624cf9:;
  /* 00624cf9 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624cff jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d04(CPU *c) {
  NATIVE_HOOK(0x624d04u) REGS; LOADALL;
L_00624d04:;
  /* 00624d04 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d0a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d0f(CPU *c) {
  NATIVE_HOOK(0x624d0fu) REGS; LOADALL;
L_00624d0f:;
  /* 00624d0f lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d15 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d1a(CPU *c) {
  NATIVE_HOOK(0x624d1au) REGS; LOADALL;
L_00624d1a:;
  /* 00624d1a lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d20 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d25(CPU *c) {
  NATIVE_HOOK(0x624d25u) REGS; LOADALL;
L_00624d25:;
  /* 00624d25 lea ecx, [ebp - 0x44c] */ ecx = (u32)((u32)(ebp + 0xfffffbb4u));
  /* 00624d2b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d30(CPU *c) {
  NATIVE_HOOK(0x624d30u) REGS; LOADALL;
L_00624d30:;
  /* 00624d30 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d3b(CPU *c) {
  NATIVE_HOOK(0x624d3bu) REGS; LOADALL;
L_00624d3b:;
  /* 00624d3b lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d41 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d46(CPU *c) {
  NATIVE_HOOK(0x624d46u) REGS; LOADALL;
L_00624d46:;
  /* 00624d46 lea ecx, [ebp - 0x44c] */ ecx = (u32)((u32)(ebp + 0xfffffbb4u));
  /* 00624d4c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d51(CPU *c) {
  NATIVE_HOOK(0x624d51u) REGS; LOADALL;
L_00624d51:;
  /* 00624d51 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d57 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d5c(CPU *c) {
  NATIVE_HOOK(0x624d5cu) REGS; LOADALL;
L_00624d5c:;
  /* 00624d5c lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d62 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d67(CPU *c) {
  NATIVE_HOOK(0x624d67u) REGS; LOADALL;
L_00624d67:;
  /* 00624d67 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d6d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d72(CPU *c) {
  NATIVE_HOOK(0x624d72u) REGS; LOADALL;
L_00624d72:;
  /* 00624d72 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d78 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d7d(CPU *c) {
  NATIVE_HOOK(0x624d7du) REGS; LOADALL;
L_00624d7d:;
  /* 00624d7d lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d83 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d88(CPU *c) {
  NATIVE_HOOK(0x624d88u) REGS; LOADALL;
L_00624d88:;
  /* 00624d88 lea ecx, [ebp - 0x44c] */ ecx = (u32)((u32)(ebp + 0xfffffbb4u));
  /* 00624d8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d93(CPU *c) {
  NATIVE_HOOK(0x624d93u) REGS; LOADALL;
L_00624d93:;
  /* 00624d93 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624d99 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624d9e(CPU *c) {
  NATIVE_HOOK(0x624d9eu) REGS; LOADALL;
L_00624d9e:;
  /* 00624d9e lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624da4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624da9(CPU *c) {
  NATIVE_HOOK(0x624da9u) REGS; LOADALL;
L_00624da9:;
  /* 00624da9 lea ecx, [ebp - 0x42c] */ ecx = (u32)((u32)(ebp + 0xfffffbd4u));
  /* 00624daf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624db4(CPU *c) {
  NATIVE_HOOK(0x624db4u) REGS; LOADALL;
L_00624db4:;
  /* 00624db4 lea ecx, [ebp - 0x468] */ ecx = (u32)((u32)(ebp + 0xfffffb98u));
  /* 00624dba jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624dbf(CPU *c) {
  NATIVE_HOOK(0x624dbfu) REGS; LOADALL;
  goto L_00624dbf;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624dbf:;
  /* 00624dbf mov eax, 0x66c310 */ { eax = (u32)(0x66c310u); }
  /* 00624dc4 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624dd0(CPU *c) {
  NATIVE_HOOK(0x624dd0u) REGS; LOADALL;
L_00624dd0:;
  /* 00624dd0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624dd3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624dd8(CPU *c) {
  NATIVE_HOOK(0x624dd8u) REGS; LOADALL;
L_00624dd8:;
  /* 00624dd8 lea ecx, [ebp - 0x270] */ ecx = (u32)((u32)(ebp + 0xfffffd90u));
  /* 00624dde jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624de3(CPU *c) {
  NATIVE_HOOK(0x624de3u) REGS; LOADALL;
L_00624de3:;
  /* 00624de3 lea ecx, [ebp - 0x28c] */ ecx = (u32)((u32)(ebp + 0xfffffd74u));
  /* 00624de9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624dee(CPU *c) {
  NATIVE_HOOK(0x624deeu) REGS; LOADALL;
L_00624dee:;
  /* 00624dee lea ecx, [ebp - 0x2a8] */ ecx = (u32)((u32)(ebp + 0xfffffd58u));
  /* 00624df4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624df9(CPU *c) {
  NATIVE_HOOK(0x624df9u) REGS; LOADALL;
L_00624df9:;
  /* 00624df9 lea ecx, [ebp - 0x254] */ ecx = (u32)((u32)(ebp + 0xfffffdacu));
  /* 00624dff jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e04(CPU *c) {
  NATIVE_HOOK(0x624e04u) REGS; LOADALL;
  goto L_00624e04;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624e04:;
  /* 00624e04 mov eax, 0x66c354 */ { eax = (u32)(0x66c354u); }
  /* 00624e09 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624e10(CPU *c) {
  NATIVE_HOOK(0x624e10u) REGS; LOADALL;
L_00624e10:;
  /* 00624e10 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00624e13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e18(CPU *c) {
  NATIVE_HOOK(0x624e18u) REGS; LOADALL;
L_00624e18:;
  /* 00624e18 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00624e1b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e20(CPU *c) {
  NATIVE_HOOK(0x624e20u) REGS; LOADALL;
L_00624e20:;
  /* 00624e20 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00624e23 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e28(CPU *c) {
  NATIVE_HOOK(0x624e28u) REGS; LOADALL;
L_00624e28:;
  /* 00624e28 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 00624e2b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e30(CPU *c) {
  NATIVE_HOOK(0x624e30u) REGS; LOADALL;
L_00624e30:;
  /* 00624e30 lea ecx, [ebp - 0x3c] */ ecx = (u32)((u32)(ebp + 0xffffffc4u));
  /* 00624e33 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e38(CPU *c) {
  NATIVE_HOOK(0x624e38u) REGS; LOADALL;
  goto L_00624e38;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624e38:;
  /* 00624e38 mov eax, 0x66c398 */ { eax = (u32)(0x66c398u); }
  /* 00624e3d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624e50(CPU *c) {
  NATIVE_HOOK(0x624e50u) REGS; LOADALL;
L_00624e50:;
  /* 00624e50 lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624e56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e5b(CPU *c) {
  NATIVE_HOOK(0x624e5bu) REGS; LOADALL;
L_00624e5b:;
  /* 00624e5b lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624e61 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e66(CPU *c) {
  NATIVE_HOOK(0x624e66u) REGS; LOADALL;
L_00624e66:;
  /* 00624e66 lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624e6c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e71(CPU *c) {
  NATIVE_HOOK(0x624e71u) REGS; LOADALL;
L_00624e71:;
  /* 00624e71 lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624e77 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e7c(CPU *c) {
  NATIVE_HOOK(0x624e7cu) REGS; LOADALL;
L_00624e7c:;
  /* 00624e7c lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624e82 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e87(CPU *c) {
  NATIVE_HOOK(0x624e87u) REGS; LOADALL;
L_00624e87:;
  /* 00624e87 lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624e8d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e92(CPU *c) {
  NATIVE_HOOK(0x624e92u) REGS; LOADALL;
L_00624e92:;
  /* 00624e92 lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624e98 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624e9d(CPU *c) {
  NATIVE_HOOK(0x624e9du) REGS; LOADALL;
L_00624e9d:;
  /* 00624e9d lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00624ea3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ea8(CPU *c) {
  NATIVE_HOOK(0x624ea8u) REGS; LOADALL;
L_00624ea8:;
  /* 00624ea8 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624eab jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624eb0(CPU *c) {
  NATIVE_HOOK(0x624eb0u) REGS; LOADALL;
  goto L_00624eb0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624eb0:;
  /* 00624eb0 mov eax, 0x66c400 */ { eax = (u32)(0x66c400u); }
  /* 00624eb5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624ec0(CPU *c) {
  NATIVE_HOOK(0x624ec0u) REGS; LOADALL;
L_00624ec0:;
  /* 00624ec0 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624ec3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ec8(CPU *c) {
  NATIVE_HOOK(0x624ec8u) REGS; LOADALL;
L_00624ec8:;
  /* 00624ec8 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624ecb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ed0(CPU *c) {
  NATIVE_HOOK(0x624ed0u) REGS; LOADALL;
L_00624ed0:;
  /* 00624ed0 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624ed3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ed8(CPU *c) {
  NATIVE_HOOK(0x624ed8u) REGS; LOADALL;
L_00624ed8:;
  /* 00624ed8 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624edb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ee0(CPU *c) {
  NATIVE_HOOK(0x624ee0u) REGS; LOADALL;
L_00624ee0:;
  /* 00624ee0 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624ee3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ee8(CPU *c) {
  NATIVE_HOOK(0x624ee8u) REGS; LOADALL;
L_00624ee8:;
  /* 00624ee8 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624eeb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ef0(CPU *c) {
  NATIVE_HOOK(0x624ef0u) REGS; LOADALL;
L_00624ef0:;
  /* 00624ef0 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624ef3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ef8(CPU *c) {
  NATIVE_HOOK(0x624ef8u) REGS; LOADALL;
L_00624ef8:;
  /* 00624ef8 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624efb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624f00(CPU *c) {
  NATIVE_HOOK(0x624f00u) REGS; LOADALL;
L_00624f00:;
  /* 00624f00 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624f03 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624f08(CPU *c) {
  NATIVE_HOOK(0x624f08u) REGS; LOADALL;
L_00624f08:;
  /* 00624f08 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624f0b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624f10(CPU *c) {
  NATIVE_HOOK(0x624f10u) REGS; LOADALL;
L_00624f10:;
  /* 00624f10 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00624f13 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624f18(CPU *c) {
  NATIVE_HOOK(0x624f18u) REGS; LOADALL;
L_00624f18:;
  /* 00624f18 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00624f1b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624f20(CPU *c) {
  NATIVE_HOOK(0x624f20u) REGS; LOADALL;
  goto L_00624f20;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624f20:;
  /* 00624f20 mov eax, 0x66c480 */ { eax = (u32)(0x66c480u); }
  /* 00624f25 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624f30(CPU *c) {
  NATIVE_HOOK(0x624f30u) REGS; LOADALL;
L_00624f30:;
  /* 00624f30 lea ecx, [ebp - 0x12c] */ ecx = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00624f36 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00624f3b(CPU *c) {
  NATIVE_HOOK(0x624f3bu) REGS; LOADALL;
  goto L_00624f3b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624f3b:;
  /* 00624f3b mov eax, 0x66c4a4 */ { eax = (u32)(0x66c4a4u); }
  /* 00624f40 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624f50(CPU *c) {
  NATIVE_HOOK(0x624f50u) REGS; LOADALL;
L_00624f50:;
  /* 00624f50 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 00624f53 jmp 0x40db70 */ SAVEALL; F_0040db70(c); return;
}

void F_00624f58(CPU *c) {
  NATIVE_HOOK(0x624f58u) REGS; LOADALL;
L_00624f58:;
  /* 00624f58 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00624f5b jmp 0x4647c0 */ SAVEALL; F_004647c0(c); return;
}

void F_00624f60(CPU *c) {
  NATIVE_HOOK(0x624f60u) REGS; LOADALL;
  goto L_00624f60;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624f60:;
  /* 00624f60 mov eax, 0x66c4d0 */ { eax = (u32)(0x66c4d0u); }
  /* 00624f65 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624f70(CPU *c) {
  NATIVE_HOOK(0x624f70u) REGS; LOADALL;
L_00624f70:;
  /* 00624f70 lea esi, [ebp - 0x2c] */ esi = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624f73 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}
