#include "funcs.h"

void F_00625c70(CPU *c) {
  NATIVE_HOOK(0x625c70u) REGS; LOADALL;
L_00625c70:;
  /* 00625c70 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00625c73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c78(CPU *c) {
  NATIVE_HOOK(0x625c78u) REGS; LOADALL;
L_00625c78:;
  /* 00625c78 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625c7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c80(CPU *c) {
  NATIVE_HOOK(0x625c80u) REGS; LOADALL;
  goto L_00625c80;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625c80:;
  /* 00625c80 mov eax, 0x66d0c8 */ { eax = (u32)(0x66d0c8u); }
  /* 00625c85 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625c90(CPU *c) {
  NATIVE_HOOK(0x625c90u) REGS; LOADALL;
L_00625c90:;
  /* 00625c90 lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00625c96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625c9b(CPU *c) {
  NATIVE_HOOK(0x625c9bu) REGS; LOADALL;
L_00625c9b:;
  /* 00625c9b lea ecx, [ebp - 0x188] */ ecx = (u32)((u32)(ebp + 0xfffffe78u));
  /* 00625ca1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ca6(CPU *c) {
  NATIVE_HOOK(0x625ca6u) REGS; LOADALL;
L_00625ca6:;
  /* 00625ca6 lea ecx, [ebp - 0x150] */ ecx = (u32)((u32)(ebp + 0xfffffeb0u));
  /* 00625cac jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625cb1(CPU *c) {
  NATIVE_HOOK(0x625cb1u) REGS; LOADALL;
L_00625cb1:;
  /* 00625cb1 lea ecx, [ebp - 0x1a4] */ ecx = (u32)((u32)(ebp + 0xfffffe5cu));
  /* 00625cb7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625cbc(CPU *c) {
  NATIVE_HOOK(0x625cbcu) REGS; LOADALL;
L_00625cbc:;
  /* 00625cbc lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00625cc2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625cc7(CPU *c) {
  NATIVE_HOOK(0x625cc7u) REGS; LOADALL;
L_00625cc7:;
  /* 00625cc7 lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00625ccd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625cd2(CPU *c) {
  NATIVE_HOOK(0x625cd2u) REGS; LOADALL;
L_00625cd2:;
  /* 00625cd2 lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00625cd8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625cdd(CPU *c) {
  NATIVE_HOOK(0x625cddu) REGS; LOADALL;
L_00625cdd:;
  /* 00625cdd lea ecx, [ebp - 0x130] */ ecx = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00625ce3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ce8(CPU *c) {
  NATIVE_HOOK(0x625ce8u) REGS; LOADALL;
L_00625ce8:;
  /* 00625ce8 lea ecx, [ebp - 0x16c] */ ecx = (u32)((u32)(ebp + 0xfffffe94u));
  /* 00625cee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625cf3(CPU *c) {
  NATIVE_HOOK(0x625cf3u) REGS; LOADALL;
  goto L_00625cf3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625cf3:;
  /* 00625cf3 mov eax, 0x66d130 */ { eax = (u32)(0x66d130u); }
  /* 00625cf8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625d00(CPU *c) {
  NATIVE_HOOK(0x625d00u) REGS; LOADALL;
L_00625d00:;
  /* 00625d00 lea ecx, [ebp - 0x190] */ ecx = (u32)((u32)(ebp + 0xfffffe70u));
  /* 00625d06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d0b(CPU *c) {
  NATIVE_HOOK(0x625d0bu) REGS; LOADALL;
L_00625d0b:;
  /* 00625d0b lea ecx, [ebp - 0x190] */ ecx = (u32)((u32)(ebp + 0xfffffe70u));
  /* 00625d11 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d16(CPU *c) {
  NATIVE_HOOK(0x625d16u) REGS; LOADALL;
L_00625d16:;
  /* 00625d16 lea ecx, [ebp - 0x190] */ ecx = (u32)((u32)(ebp + 0xfffffe70u));
  /* 00625d1c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d21(CPU *c) {
  NATIVE_HOOK(0x625d21u) REGS; LOADALL;
L_00625d21:;
  /* 00625d21 lea ecx, [ebp - 0x190] */ ecx = (u32)((u32)(ebp + 0xfffffe70u));
  /* 00625d27 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d2c(CPU *c) {
  NATIVE_HOOK(0x625d2cu) REGS; LOADALL;
L_00625d2c:;
  /* 00625d2c lea ecx, [ebp - 0x190] */ ecx = (u32)((u32)(ebp + 0xfffffe70u));
  /* 00625d32 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d37(CPU *c) {
  NATIVE_HOOK(0x625d37u) REGS; LOADALL;
L_00625d37:;
  /* 00625d37 lea ecx, [ebp - 0x190] */ ecx = (u32)((u32)(ebp + 0xfffffe70u));
  /* 00625d3d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d42(CPU *c) {
  NATIVE_HOOK(0x625d42u) REGS; LOADALL;
L_00625d42:;
  /* 00625d42 lea esi, [ebp - 0x6c] */ esi = (u32)((u32)(ebp + 0xffffff94u));
  /* 00625d45 jmp 0x434300 */ SAVEALL; F_00434300(c); return;
}

void F_00625d4a(CPU *c) {
  NATIVE_HOOK(0x625d4au) REGS; LOADALL;
  goto L_00625d4a;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625d4a:;
  /* 00625d4a mov eax, 0x66d184 */ { eax = (u32)(0x66d184u); }
  /* 00625d4f jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625d60(CPU *c) {
  NATIVE_HOOK(0x625d60u) REGS; LOADALL;
L_00625d60:;
  /* 00625d60 mov eax, dword ptr [ebp - 0x1c] */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); eax = (u32)(M32(m_)); }
  /* 00625d63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00625d64 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x625d69u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x625d64u); RETCHK(0x625d69u, 0x625d64u); LOADALL;
  /* 00625d69 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00625d6a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00625d6b(CPU *c) {
  NATIVE_HOOK(0x625d6bu) REGS; LOADALL;
L_00625d6b:;
  /* 00625d6b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625d6e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d73(CPU *c) {
  NATIVE_HOOK(0x625d73u) REGS; LOADALL;
L_00625d73:;
  /* 00625d73 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625d76 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d7b(CPU *c) {
  NATIVE_HOOK(0x625d7bu) REGS; LOADALL;
L_00625d7b:;
  /* 00625d7b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625d7e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d83(CPU *c) {
  NATIVE_HOOK(0x625d83u) REGS; LOADALL;
L_00625d83:;
  /* 00625d83 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625d86 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d8b(CPU *c) {
  NATIVE_HOOK(0x625d8bu) REGS; LOADALL;
L_00625d8b:;
  /* 00625d8b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625d8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d93(CPU *c) {
  NATIVE_HOOK(0x625d93u) REGS; LOADALL;
L_00625d93:;
  /* 00625d93 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625d96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625d9b(CPU *c) {
  NATIVE_HOOK(0x625d9bu) REGS; LOADALL;
L_00625d9b:;
  /* 00625d9b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625d9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625da3(CPU *c) {
  NATIVE_HOOK(0x625da3u) REGS; LOADALL;
L_00625da3:;
  /* 00625da3 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625da6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625dab(CPU *c) {
  NATIVE_HOOK(0x625dabu) REGS; LOADALL;
L_00625dab:;
  /* 00625dab lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625db3(CPU *c) {
  NATIVE_HOOK(0x625db3u) REGS; LOADALL;
L_00625db3:;
  /* 00625db3 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625db6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625dbb(CPU *c) {
  NATIVE_HOOK(0x625dbbu) REGS; LOADALL;
L_00625dbb:;
  /* 00625dbb lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dbe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625dc3(CPU *c) {
  NATIVE_HOOK(0x625dc3u) REGS; LOADALL;
L_00625dc3:;
  /* 00625dc3 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dc6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625dcb(CPU *c) {
  NATIVE_HOOK(0x625dcbu) REGS; LOADALL;
L_00625dcb:;
  /* 00625dcb lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625dd3(CPU *c) {
  NATIVE_HOOK(0x625dd3u) REGS; LOADALL;
L_00625dd3:;
  /* 00625dd3 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dd6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ddb(CPU *c) {
  NATIVE_HOOK(0x625ddbu) REGS; LOADALL;
L_00625ddb:;
  /* 00625ddb lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dde jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625de3(CPU *c) {
  NATIVE_HOOK(0x625de3u) REGS; LOADALL;
L_00625de3:;
  /* 00625de3 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625de6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625deb(CPU *c) {
  NATIVE_HOOK(0x625debu) REGS; LOADALL;
L_00625deb:;
  /* 00625deb lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625df3(CPU *c) {
  NATIVE_HOOK(0x625df3u) REGS; LOADALL;
L_00625df3:;
  /* 00625df3 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625df6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625dfb(CPU *c) {
  NATIVE_HOOK(0x625dfbu) REGS; LOADALL;
L_00625dfb:;
  /* 00625dfb lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625dfe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e03(CPU *c) {
  NATIVE_HOOK(0x625e03u) REGS; LOADALL;
L_00625e03:;
  /* 00625e03 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e0b(CPU *c) {
  NATIVE_HOOK(0x625e0bu) REGS; LOADALL;
L_00625e0b:;
  /* 00625e0b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e13(CPU *c) {
  NATIVE_HOOK(0x625e13u) REGS; LOADALL;
L_00625e13:;
  /* 00625e13 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e1b(CPU *c) {
  NATIVE_HOOK(0x625e1bu) REGS; LOADALL;
L_00625e1b:;
  /* 00625e1b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e23(CPU *c) {
  NATIVE_HOOK(0x625e23u) REGS; LOADALL;
L_00625e23:;
  /* 00625e23 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e26 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e2b(CPU *c) {
  NATIVE_HOOK(0x625e2bu) REGS; LOADALL;
L_00625e2b:;
  /* 00625e2b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e2e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e33(CPU *c) {
  NATIVE_HOOK(0x625e33u) REGS; LOADALL;
L_00625e33:;
  /* 00625e33 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e3b(CPU *c) {
  NATIVE_HOOK(0x625e3bu) REGS; LOADALL;
L_00625e3b:;
  /* 00625e3b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e43(CPU *c) {
  NATIVE_HOOK(0x625e43u) REGS; LOADALL;
L_00625e43:;
  /* 00625e43 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e46 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e4b(CPU *c) {
  NATIVE_HOOK(0x625e4bu) REGS; LOADALL;
L_00625e4b:;
  /* 00625e4b lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00625e4e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e53(CPU *c) {
  NATIVE_HOOK(0x625e53u) REGS; LOADALL;
L_00625e53:;
  /* 00625e53 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00625e56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e5b(CPU *c) {
  NATIVE_HOOK(0x625e5bu) REGS; LOADALL;
  goto L_00625e5b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625e5b:;
  /* 00625e5b mov eax, 0x66d2c8 */ { eax = (u32)(0x66d2c8u); }
  /* 00625e60 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625e70(CPU *c) {
  NATIVE_HOOK(0x625e70u) REGS; LOADALL;
L_00625e70:;
  /* 00625e70 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625e73 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625e78(CPU *c) {
  NATIVE_HOOK(0x625e78u) REGS; LOADALL;
L_00625e78:;
  /* 00625e78 mov eax, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); eax = (u32)(M32(m_)); }
  /* 00625e7b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00625e7c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x625e81u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x625e7cu); RETCHK(0x625e81u, 0x625e7cu); LOADALL;
  /* 00625e81 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00625e82 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00625e83(CPU *c) {
  NATIVE_HOOK(0x625e83u) REGS; LOADALL;
  goto L_00625e83;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625e83:;
  /* 00625e83 mov eax, 0x66d2f4 */ { eax = (u32)(0x66d2f4u); }
  /* 00625e88 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625e90(CPU *c) {
  NATIVE_HOOK(0x625e90u) REGS; LOADALL;
L_00625e90:;
  /* 00625e90 mov eax, dword ptr [ebp - 0x234] */ { const u32 m_ = (u32)(ebp + 0xfffffdccu); eax = (u32)(M32(m_)); }
  /* 00625e96 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00625e97 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x625e9cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x625e97u); RETCHK(0x625e9cu, 0x625e97u); LOADALL;
  /* 00625e9c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00625e9d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00625e9e(CPU *c) {
  NATIVE_HOOK(0x625e9eu) REGS; LOADALL;
L_00625e9e:;
  /* 00625e9e lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625ea4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ea9(CPU *c) {
  NATIVE_HOOK(0x625ea9u) REGS; LOADALL;
L_00625ea9:;
  /* 00625ea9 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625eaf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625eb4(CPU *c) {
  NATIVE_HOOK(0x625eb4u) REGS; LOADALL;
L_00625eb4:;
  /* 00625eb4 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625eba jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ebf(CPU *c) {
  NATIVE_HOOK(0x625ebfu) REGS; LOADALL;
L_00625ebf:;
  /* 00625ebf lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625ec5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625eca(CPU *c) {
  NATIVE_HOOK(0x625ecau) REGS; LOADALL;
L_00625eca:;
  /* 00625eca lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625ed0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ed5(CPU *c) {
  NATIVE_HOOK(0x625ed5u) REGS; LOADALL;
L_00625ed5:;
  /* 00625ed5 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625edb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ee0(CPU *c) {
  NATIVE_HOOK(0x625ee0u) REGS; LOADALL;
L_00625ee0:;
  /* 00625ee0 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625ee6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625eeb(CPU *c) {
  NATIVE_HOOK(0x625eebu) REGS; LOADALL;
L_00625eeb:;
  /* 00625eeb lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625ef1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ef6(CPU *c) {
  NATIVE_HOOK(0x625ef6u) REGS; LOADALL;
L_00625ef6:;
  /* 00625ef6 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625efc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f01(CPU *c) {
  NATIVE_HOOK(0x625f01u) REGS; LOADALL;
L_00625f01:;
  /* 00625f01 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625f07 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f0c(CPU *c) {
  NATIVE_HOOK(0x625f0cu) REGS; LOADALL;
L_00625f0c:;
  /* 00625f0c lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625f12 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f17(CPU *c) {
  NATIVE_HOOK(0x625f17u) REGS; LOADALL;
L_00625f17:;
  /* 00625f17 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625f1d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f22(CPU *c) {
  NATIVE_HOOK(0x625f22u) REGS; LOADALL;
L_00625f22:;
  /* 00625f22 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625f28 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f2d(CPU *c) {
  NATIVE_HOOK(0x625f2du) REGS; LOADALL;
  goto L_00625f2d;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625f2d:;
  /* 00625f2d mov eax, 0x66d380 */ { eax = (u32)(0x66d380u); }
  /* 00625f32 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625f40(CPU *c) {
  NATIVE_HOOK(0x625f40u) REGS; LOADALL;
L_00625f40:;
  /* 00625f40 lea esi, [ebp - 0x530] */ esi = (u32)((u32)(ebp + 0xfffffad0u));
  /* 00625f46 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00625f4b(CPU *c) {
  NATIVE_HOOK(0x625f4bu) REGS; LOADALL;
L_00625f4b:;
  /* 00625f4b lea ecx, [ebp - 0x550] */ ecx = (u32)((u32)(ebp + 0xfffffab0u));
  /* 00625f51 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f56(CPU *c) {
  NATIVE_HOOK(0x625f56u) REGS; LOADALL;
  goto L_00625f56;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625f56:;
  /* 00625f56 mov eax, 0x66d3ac */ { eax = (u32)(0x66d3acu); }
  /* 00625f5b jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625f60(CPU *c) {
  NATIVE_HOOK(0x625f60u) REGS; LOADALL;
L_00625f60:;
  /* 00625f60 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625f63 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f68(CPU *c) {
  NATIVE_HOOK(0x625f68u) REGS; LOADALL;
  goto L_00625f68;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625f68:;
  /* 00625f68 mov eax, 0x66d3f4 */ { eax = (u32)(0x66d3f4u); }
  /* 00625f6d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625f80(CPU *c) {
  NATIVE_HOOK(0x625f80u) REGS; LOADALL;
L_00625f80:;
  /* 00625f80 mov eax, dword ptr [ebp - 0x94] */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); eax = (u32)(M32(m_)); }
  /* 00625f86 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00625f87 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x625f8cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x625f87u); RETCHK(0x625f8cu, 0x625f87u); LOADALL;
  /* 00625f8c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00625f8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00625f8e(CPU *c) {
  NATIVE_HOOK(0x625f8eu) REGS; LOADALL;
L_00625f8e:;
  /* 00625f8e lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625f91 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f96(CPU *c) {
  NATIVE_HOOK(0x625f96u) REGS; LOADALL;
L_00625f96:;
  /* 00625f96 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625f99 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625f9e(CPU *c) {
  NATIVE_HOOK(0x625f9eu) REGS; LOADALL;
L_00625f9e:;
  /* 00625f9e lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fa1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fa6(CPU *c) {
  NATIVE_HOOK(0x625fa6u) REGS; LOADALL;
L_00625fa6:;
  /* 00625fa6 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fa9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fae(CPU *c) {
  NATIVE_HOOK(0x625faeu) REGS; LOADALL;
L_00625fae:;
  /* 00625fae lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fb1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fb6(CPU *c) {
  NATIVE_HOOK(0x625fb6u) REGS; LOADALL;
L_00625fb6:;
  /* 00625fb6 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fb9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fbe(CPU *c) {
  NATIVE_HOOK(0x625fbeu) REGS; LOADALL;
L_00625fbe:;
  /* 00625fbe lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fc1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fc6(CPU *c) {
  NATIVE_HOOK(0x625fc6u) REGS; LOADALL;
L_00625fc6:;
  /* 00625fc6 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fc9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fce(CPU *c) {
  NATIVE_HOOK(0x625fceu) REGS; LOADALL;
L_00625fce:;
  /* 00625fce lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fd1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fd6(CPU *c) {
  NATIVE_HOOK(0x625fd6u) REGS; LOADALL;
L_00625fd6:;
  /* 00625fd6 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fd9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fde(CPU *c) {
  NATIVE_HOOK(0x625fdeu) REGS; LOADALL;
L_00625fde:;
  /* 00625fde lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fe1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fe6(CPU *c) {
  NATIVE_HOOK(0x625fe6u) REGS; LOADALL;
L_00625fe6:;
  /* 00625fe6 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625fe9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625fee(CPU *c) {
  NATIVE_HOOK(0x625feeu) REGS; LOADALL;
L_00625fee:;
  /* 00625fee lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625ff1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ff6(CPU *c) {
  NATIVE_HOOK(0x625ff6u) REGS; LOADALL;
L_00625ff6:;
  /* 00625ff6 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00625ff9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625ffe(CPU *c) {
  NATIVE_HOOK(0x625ffeu) REGS; LOADALL;
L_00625ffe:;
  /* 00625ffe lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626001 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626006(CPU *c) {
  NATIVE_HOOK(0x626006u) REGS; LOADALL;
L_00626006:;
  /* 00626006 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626009 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062600e(CPU *c) {
  NATIVE_HOOK(0x62600eu) REGS; LOADALL;
L_0062600e:;
  /* 0062600e lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626011 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626016(CPU *c) {
  NATIVE_HOOK(0x626016u) REGS; LOADALL;
L_00626016:;
  /* 00626016 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626019 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062601e(CPU *c) {
  NATIVE_HOOK(0x62601eu) REGS; LOADALL;
L_0062601e:;
  /* 0062601e lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00626024 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626029(CPU *c) {
  NATIVE_HOOK(0x626029u) REGS; LOADALL;
  goto L_00626029;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626029:;
  /* 00626029 mov eax, 0x66d508 */ { eax = (u32)(0x66d508u); }
  /* 0062602e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626040(CPU *c) {
  NATIVE_HOOK(0x626040u) REGS; LOADALL;
L_00626040:;
  /* 00626040 lea ecx, [ebp - 0x434] */ ecx = (u32)((u32)(ebp + 0xfffffbccu));
  /* 00626046 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062604b(CPU *c) {
  NATIVE_HOOK(0x62604bu) REGS; LOADALL;
L_0062604b:;
  /* 0062604b lea ecx, [ebp - 0x434] */ ecx = (u32)((u32)(ebp + 0xfffffbccu));
  /* 00626051 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626056(CPU *c) {
  NATIVE_HOOK(0x626056u) REGS; LOADALL;
L_00626056:;
  /* 00626056 lea ecx, [ebp - 0x434] */ ecx = (u32)((u32)(ebp + 0xfffffbccu));
  /* 0062605c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626061(CPU *c) {
  NATIVE_HOOK(0x626061u) REGS; LOADALL;
L_00626061:;
  /* 00626061 lea ecx, [ebp - 0x434] */ ecx = (u32)((u32)(ebp + 0xfffffbccu));
  /* 00626067 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062606c(CPU *c) {
  NATIVE_HOOK(0x62606cu) REGS; LOADALL;
L_0062606c:;
  /* 0062606c lea ecx, [ebp - 0x434] */ ecx = (u32)((u32)(ebp + 0xfffffbccu));
  /* 00626072 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626077(CPU *c) {
  NATIVE_HOOK(0x626077u) REGS; LOADALL;
L_00626077:;
  /* 00626077 lea ecx, [ebp - 0x434] */ ecx = (u32)((u32)(ebp + 0xfffffbccu));
  /* 0062607d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626082(CPU *c) {
  NATIVE_HOOK(0x626082u) REGS; LOADALL;
  goto L_00626082;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626082:;
  /* 00626082 mov eax, 0x66d554 */ { eax = (u32)(0x66d554u); }
  /* 00626087 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626090(CPU *c) {
  NATIVE_HOOK(0x626090u) REGS; LOADALL;
L_00626090:;
  /* 00626090 lea esi, [ebp - 0xa4] */ esi = (u32)((u32)(ebp + 0xffffff5cu));
  /* 00626096 jmp 0x423450 */ SAVEALL; F_00423450(c); return;
}

void F_0062609b(CPU *c) {
  NATIVE_HOOK(0x62609bu) REGS; LOADALL;
L_0062609b:;
  /* 0062609b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062609e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006260a3(CPU *c) {
  NATIVE_HOOK(0x6260a3u) REGS; LOADALL;
  goto L_006260a3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006260a3:;
  /* 006260a3 mov eax, 0x66d580 */ { eax = (u32)(0x66d580u); }
  /* 006260a8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006260b0(CPU *c) {
  NATIVE_HOOK(0x6260b0u) REGS; LOADALL;
L_006260b0:;
  /* 006260b0 mov eax, dword ptr [ebp - 0x250] */ { const u32 m_ = (u32)(ebp + 0xfffffdb0u); eax = (u32)(M32(m_)); }
  /* 006260b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 006260b7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x6260bcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x6260b7u); RETCHK(0x6260bcu, 0x6260b7u); LOADALL;
  /* 006260bc pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006260bd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006260be(CPU *c) {
  NATIVE_HOOK(0x6260beu) REGS; LOADALL;
L_006260be:;
  /* 006260be lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006260c4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006260c9(CPU *c) {
  NATIVE_HOOK(0x6260c9u) REGS; LOADALL;
L_006260c9:;
  /* 006260c9 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006260cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006260d4(CPU *c) {
  NATIVE_HOOK(0x6260d4u) REGS; LOADALL;
L_006260d4:;
  /* 006260d4 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006260da jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006260df(CPU *c) {
  NATIVE_HOOK(0x6260dfu) REGS; LOADALL;
L_006260df:;
  /* 006260df lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006260e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006260ea(CPU *c) {
  NATIVE_HOOK(0x6260eau) REGS; LOADALL;
L_006260ea:;
  /* 006260ea lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006260f0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006260f5(CPU *c) {
  NATIVE_HOOK(0x6260f5u) REGS; LOADALL;
L_006260f5:;
  /* 006260f5 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 006260fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626100(CPU *c) {
  NATIVE_HOOK(0x626100u) REGS; LOADALL;
L_00626100:;
  /* 00626100 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00626106 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062610b(CPU *c) {
  NATIVE_HOOK(0x62610bu) REGS; LOADALL;
L_0062610b:;
  /* 0062610b lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00626111 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626116(CPU *c) {
  NATIVE_HOOK(0x626116u) REGS; LOADALL;
L_00626116:;
  /* 00626116 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0062611c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626121(CPU *c) {
  NATIVE_HOOK(0x626121u) REGS; LOADALL;
L_00626121:;
  /* 00626121 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00626127 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062612c(CPU *c) {
  NATIVE_HOOK(0x62612cu) REGS; LOADALL;
L_0062612c:;
  /* 0062612c lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00626132 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626137(CPU *c) {
  NATIVE_HOOK(0x626137u) REGS; LOADALL;
L_00626137:;
  /* 00626137 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0062613d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626142(CPU *c) {
  NATIVE_HOOK(0x626142u) REGS; LOADALL;
L_00626142:;
  /* 00626142 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00626148 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062614d(CPU *c) {
  NATIVE_HOOK(0x62614du) REGS; LOADALL;
L_0062614d:;
  /* 0062614d lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00626153 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626158(CPU *c) {
  NATIVE_HOOK(0x626158u) REGS; LOADALL;
L_00626158:;
  /* 00626158 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0062615e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626163(CPU *c) {
  NATIVE_HOOK(0x626163u) REGS; LOADALL;
L_00626163:;
  /* 00626163 lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00626169 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062616e(CPU *c) {
  NATIVE_HOOK(0x62616eu) REGS; LOADALL;
  goto L_0062616e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062616e:;
  /* 0062616e mov eax, 0x66d628 */ { eax = (u32)(0x66d628u); }
  /* 00626173 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626180(CPU *c) {
  NATIVE_HOOK(0x626180u) REGS; LOADALL;
L_00626180:;
  /* 00626180 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626183 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626188(CPU *c) {
  NATIVE_HOOK(0x626188u) REGS; LOADALL;
L_00626188:;
  /* 00626188 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062618b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626190(CPU *c) {
  NATIVE_HOOK(0x626190u) REGS; LOADALL;
L_00626190:;
  /* 00626190 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 00626193 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626198(CPU *c) {
  NATIVE_HOOK(0x626198u) REGS; LOADALL;
L_00626198:;
  /* 00626198 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 0062619b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261a0(CPU *c) {
  NATIVE_HOOK(0x6261a0u) REGS; LOADALL;
L_006261a0:;
  /* 006261a0 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 006261a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261ab(CPU *c) {
  NATIVE_HOOK(0x6261abu) REGS; LOADALL;
L_006261ab:;
  /* 006261ab lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 006261ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261b3(CPU *c) {
  NATIVE_HOOK(0x6261b3u) REGS; LOADALL;
L_006261b3:;
  /* 006261b3 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 006261b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261bb(CPU *c) {
  NATIVE_HOOK(0x6261bbu) REGS; LOADALL;
L_006261bb:;
  /* 006261bb lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 006261be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261c3(CPU *c) {
  NATIVE_HOOK(0x6261c3u) REGS; LOADALL;
L_006261c3:;
  /* 006261c3 lea ecx, [ebp - 0x70] */ ecx = (u32)((u32)(ebp + 0xffffff90u));
  /* 006261c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261cb(CPU *c) {
  NATIVE_HOOK(0x6261cbu) REGS; LOADALL;
L_006261cb:;
  /* 006261cb lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 006261d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261d6(CPU *c) {
  NATIVE_HOOK(0x6261d6u) REGS; LOADALL;
  goto L_006261d6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006261d6:;
  /* 006261d6 mov eax, 0x66d698 */ { eax = (u32)(0x66d698u); }
  /* 006261db jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006261e0(CPU *c) {
  NATIVE_HOOK(0x6261e0u) REGS; LOADALL;
L_006261e0:;
  /* 006261e0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006261e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261e8(CPU *c) {
  NATIVE_HOOK(0x6261e8u) REGS; LOADALL;
L_006261e8:;
  /* 006261e8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006261eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261f0(CPU *c) {
  NATIVE_HOOK(0x6261f0u) REGS; LOADALL;
L_006261f0:;
  /* 006261f0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006261f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006261f8(CPU *c) {
  NATIVE_HOOK(0x6261f8u) REGS; LOADALL;
L_006261f8:;
  /* 006261f8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006261fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626200(CPU *c) {
  NATIVE_HOOK(0x626200u) REGS; LOADALL;
L_00626200:;
  /* 00626200 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00626203 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626208(CPU *c) {
  NATIVE_HOOK(0x626208u) REGS; LOADALL;
L_00626208:;
  /* 00626208 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0062620b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626210(CPU *c) {
  NATIVE_HOOK(0x626210u) REGS; LOADALL;
L_00626210:;
  /* 00626210 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00626213 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626218(CPU *c) {
  NATIVE_HOOK(0x626218u) REGS; LOADALL;
  goto L_00626218;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626218:;
  /* 00626218 mov eax, 0x66d6ec */ { eax = (u32)(0x66d6ecu); }
  /* 0062621d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626230(CPU *c) {
  NATIVE_HOOK(0x626230u) REGS; LOADALL;
L_00626230:;
  /* 00626230 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00626233 jmp 0x471e50 */ SAVEALL; F_00471e50(c); return;
}

void F_00626238(CPU *c) {
  NATIVE_HOOK(0x626238u) REGS; LOADALL;
  goto L_00626238;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00626238:;
  /* 00626238 mov eax, 0x66d734 */ { eax = (u32)(0x66d734u); }
  /* 0062623d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00626250(CPU *c) {
  NATIVE_HOOK(0x626250u) REGS; LOADALL;
L_00626250:;
  /* 00626250 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00626253 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626258(CPU *c) {
  NATIVE_HOOK(0x626258u) REGS; LOADALL;
L_00626258:;
  /* 00626258 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062625b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626260(CPU *c) {
  NATIVE_HOOK(0x626260u) REGS; LOADALL;
L_00626260:;
  /* 00626260 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00626263 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00626262(CPU *c) {
  NATIVE_HOOK(0x626262u) REGS; LOADALL;
L_00626262:;
  /* 00626262 pushfd */ { u32 e_ = EFLAGS_; esp -= 4; M32(esp) = e_; }
  /* 00626263 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
