#include "funcs.h"

void F_00621e32(CPU *c) {
  NATIVE_HOOK(0x621e32u) REGS; LOADALL;
L_00621e32:;
  /* 00621e32 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00621e35 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621e3a(CPU *c) {
  NATIVE_HOOK(0x621e3au) REGS; LOADALL;
  goto L_00621e3a;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621e3a:;
  /* 00621e3a mov eax, 0x668b10 */ { eax = (u32)(0x668b10u); }
  /* 00621e3f jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621e50(CPU *c) {
  NATIVE_HOOK(0x621e50u) REGS; LOADALL;
  goto L_00621e50;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621e50:;
  /* 00621e50 mov eax, 0x668b60 */ { eax = (u32)(0x668b60u); }
  /* 00621e55 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621e60(CPU *c) {
  NATIVE_HOOK(0x621e60u) REGS; LOADALL;
L_00621e60:;
  /* 00621e60 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00621e63 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621e64 mov ecx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ecx = (u32)(M32(m_)); }
  /* 00621e67 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00621e68 call 0x459c10 */ esp -= 4; M32(esp) = 0x621e6du; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x621e68u); RETCHK(0x621e6du, 0x621e68u); LOADALL;
  /* 00621e6d add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00621e70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621e71(CPU *c) {
  NATIVE_HOOK(0x621e71u) REGS; LOADALL;
  goto L_00621e71;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621e71:;
  /* 00621e71 mov eax, 0x668bb8 */ { eax = (u32)(0x668bb8u); }
  /* 00621e76 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621e80(CPU *c) {
  NATIVE_HOOK(0x621e80u) REGS; LOADALL;
L_00621e80:;
  /* 00621e80 lea esi, [ebp - 0x130] */ esi = (u32)((u32)(ebp + 0xfffffed0u));
  /* 00621e86 jmp 0x471e80 */ SAVEALL; F_00471e80(c); return;
}

void F_00621e8b(CPU *c) {
  NATIVE_HOOK(0x621e8bu) REGS; LOADALL;
  goto L_00621e8b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621e8b:;
  /* 00621e8b mov eax, 0x668c44 */ { eax = (u32)(0x668c44u); }
  /* 00621e90 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621ea0(CPU *c) {
  NATIVE_HOOK(0x621ea0u) REGS; LOADALL;
L_00621ea0:;
  /* 00621ea0 lea esi, [ebp - 0x138] */ esi = (u32)((u32)(ebp + 0xfffffec8u));
  /* 00621ea6 jmp 0x47d260 */ SAVEALL; F_0047d260(c); return;
}

void F_00621eab(CPU *c) {
  NATIVE_HOOK(0x621eabu) REGS; LOADALL;
  goto L_00621eab;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621eab:;
  /* 00621eab mov eax, 0x668cd0 */ { eax = (u32)(0x668cd0u); }
  /* 00621eb0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621ec0(CPU *c) {
  NATIVE_HOOK(0x621ec0u) REGS; LOADALL;
L_00621ec0:;
  /* 00621ec0 lea esi, [ebp - 0x12c] */ esi = (u32)((u32)(ebp + 0xfffffed4u));
  /* 00621ec6 jmp 0x471e80 */ SAVEALL; F_00471e80(c); return;
}

void F_00621ecb(CPU *c) {
  NATIVE_HOOK(0x621ecbu) REGS; LOADALL;
  goto L_00621ecb;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621ecb:;
  /* 00621ecb mov eax, 0x668d3c */ { eax = (u32)(0x668d3cu); }
  /* 00621ed0 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621ee0(CPU *c) {
  NATIVE_HOOK(0x621ee0u) REGS; LOADALL;
L_00621ee0:;
  /* 00621ee0 mov eax, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); eax = (u32)(M32(m_)); }
  /* 00621ee3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621ee4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621ee9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621ee4u); RETCHK(0x621ee9u, 0x621ee4u); LOADALL;
  /* 00621ee9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00621eea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621eeb(CPU *c) {
  NATIVE_HOOK(0x621eebu) REGS; LOADALL;
L_00621eeb:;
  /* 00621eeb lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621eee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621ef3(CPU *c) {
  NATIVE_HOOK(0x621ef3u) REGS; LOADALL;
L_00621ef3:;
  /* 00621ef3 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621ef6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621efb(CPU *c) {
  NATIVE_HOOK(0x621efbu) REGS; LOADALL;
L_00621efb:;
  /* 00621efb lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621efe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f03(CPU *c) {
  NATIVE_HOOK(0x621f03u) REGS; LOADALL;
L_00621f03:;
  /* 00621f03 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f06 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f0b(CPU *c) {
  NATIVE_HOOK(0x621f0bu) REGS; LOADALL;
L_00621f0b:;
  /* 00621f0b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f0e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f13(CPU *c) {
  NATIVE_HOOK(0x621f13u) REGS; LOADALL;
L_00621f13:;
  /* 00621f13 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f16 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f1b(CPU *c) {
  NATIVE_HOOK(0x621f1bu) REGS; LOADALL;
L_00621f1b:;
  /* 00621f1b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f1e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f23(CPU *c) {
  NATIVE_HOOK(0x621f23u) REGS; LOADALL;
L_00621f23:;
  /* 00621f23 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f26 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f2b(CPU *c) {
  NATIVE_HOOK(0x621f2bu) REGS; LOADALL;
L_00621f2b:;
  /* 00621f2b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f2e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f33(CPU *c) {
  NATIVE_HOOK(0x621f33u) REGS; LOADALL;
L_00621f33:;
  /* 00621f33 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f36 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f3b(CPU *c) {
  NATIVE_HOOK(0x621f3bu) REGS; LOADALL;
L_00621f3b:;
  /* 00621f3b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f3e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f43(CPU *c) {
  NATIVE_HOOK(0x621f43u) REGS; LOADALL;
L_00621f43:;
  /* 00621f43 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f46 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f4b(CPU *c) {
  NATIVE_HOOK(0x621f4bu) REGS; LOADALL;
L_00621f4b:;
  /* 00621f4b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f4e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f53(CPU *c) {
  NATIVE_HOOK(0x621f53u) REGS; LOADALL;
L_00621f53:;
  /* 00621f53 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f56 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f5b(CPU *c) {
  NATIVE_HOOK(0x621f5bu) REGS; LOADALL;
L_00621f5b:;
  /* 00621f5b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00621f5e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f63(CPU *c) {
  NATIVE_HOOK(0x621f63u) REGS; LOADALL;
L_00621f63:;
  /* 00621f63 lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 00621f69 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f6e(CPU *c) {
  NATIVE_HOOK(0x621f6eu) REGS; LOADALL;
  goto L_00621f6e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621f6e:;
  /* 00621f6e mov eax, 0x668e08 */ { eax = (u32)(0x668e08u); }
  /* 00621f73 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621f80(CPU *c) {
  NATIVE_HOOK(0x621f80u) REGS; LOADALL;
L_00621f80:;
  /* 00621f80 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00621f83 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621f84 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621f89u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621f84u); RETCHK(0x621f89u, 0x621f84u); LOADALL;
  /* 00621f89 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00621f8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621f8b(CPU *c) {
  NATIVE_HOOK(0x621f8bu) REGS; LOADALL;
L_00621f8b:;
  /* 00621f8b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621f8e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f93(CPU *c) {
  NATIVE_HOOK(0x621f93u) REGS; LOADALL;
L_00621f93:;
  /* 00621f93 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621f96 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621f9b(CPU *c) {
  NATIVE_HOOK(0x621f9bu) REGS; LOADALL;
L_00621f9b:;
  /* 00621f9b lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621f9e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fa3(CPU *c) {
  NATIVE_HOOK(0x621fa3u) REGS; LOADALL;
L_00621fa3:;
  /* 00621fa3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621fa6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fab(CPU *c) {
  NATIVE_HOOK(0x621fabu) REGS; LOADALL;
L_00621fab:;
  /* 00621fab lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621fae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fb3(CPU *c) {
  NATIVE_HOOK(0x621fb3u) REGS; LOADALL;
L_00621fb3:;
  /* 00621fb3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621fb6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fbb(CPU *c) {
  NATIVE_HOOK(0x621fbbu) REGS; LOADALL;
L_00621fbb:;
  /* 00621fbb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621fbe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fc3(CPU *c) {
  NATIVE_HOOK(0x621fc3u) REGS; LOADALL;
L_00621fc3:;
  /* 00621fc3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621fc6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fcb(CPU *c) {
  NATIVE_HOOK(0x621fcbu) REGS; LOADALL;
L_00621fcb:;
  /* 00621fcb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621fce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fd3(CPU *c) {
  NATIVE_HOOK(0x621fd3u) REGS; LOADALL;
L_00621fd3:;
  /* 00621fd3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00621fd6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fdb(CPU *c) {
  NATIVE_HOOK(0x621fdbu) REGS; LOADALL;
L_00621fdb:;
  /* 00621fdb lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00621fde jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00621fe3(CPU *c) {
  NATIVE_HOOK(0x621fe3u) REGS; LOADALL;
  goto L_00621fe3;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00621fe3:;
  /* 00621fe3 mov eax, 0x668e88 */ { eax = (u32)(0x668e88u); }
  /* 00621fe8 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00621ff0(CPU *c) {
  NATIVE_HOOK(0x621ff0u) REGS; LOADALL;
L_00621ff0:;
  /* 00621ff0 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00621ff3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00621ff4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x621ff9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x621ff4u); RETCHK(0x621ff9u, 0x621ff4u); LOADALL;
  /* 00621ff9 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00621ffa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00621ffb(CPU *c) {
  NATIVE_HOOK(0x621ffbu) REGS; LOADALL;
L_00621ffb:;
  /* 00621ffb lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00621ffe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622003(CPU *c) {
  NATIVE_HOOK(0x622003u) REGS; LOADALL;
L_00622003:;
  /* 00622003 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00622006 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062200b(CPU *c) {
  NATIVE_HOOK(0x62200bu) REGS; LOADALL;
  goto L_0062200b;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062200b:;
  /* 0062200b mov eax, 0x668ebc */ { eax = (u32)(0x668ebcu); }
  /* 00622010 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622020(CPU *c) {
  NATIVE_HOOK(0x622020u) REGS; LOADALL;
L_00622020:;
  /* 00622020 mov eax, dword ptr [ebp - 0x78] */ { const u32 m_ = (u32)(ebp + 0xffffff88u); eax = (u32)(M32(m_)); }
  /* 00622023 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622024 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622029u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622024u); RETCHK(0x622029u, 0x622024u); LOADALL;
  /* 00622029 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062202a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062202b(CPU *c) {
  NATIVE_HOOK(0x62202bu) REGS; LOADALL;
L_0062202b:;
  /* 0062202b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062202e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622033(CPU *c) {
  NATIVE_HOOK(0x622033u) REGS; LOADALL;
L_00622033:;
  /* 00622033 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00622036 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062203b(CPU *c) {
  NATIVE_HOOK(0x62203bu) REGS; LOADALL;
L_0062203b:;
  /* 0062203b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062203e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622043(CPU *c) {
  NATIVE_HOOK(0x622043u) REGS; LOADALL;
L_00622043:;
  /* 00622043 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00622046 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062204b(CPU *c) {
  NATIVE_HOOK(0x62204bu) REGS; LOADALL;
L_0062204b:;
  /* 0062204b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062204e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622053(CPU *c) {
  NATIVE_HOOK(0x622053u) REGS; LOADALL;
L_00622053:;
  /* 00622053 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00622056 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062205b(CPU *c) {
  NATIVE_HOOK(0x62205bu) REGS; LOADALL;
L_0062205b:;
  /* 0062205b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062205e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622063(CPU *c) {
  NATIVE_HOOK(0x622063u) REGS; LOADALL;
L_00622063:;
  /* 00622063 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00622066 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062206b(CPU *c) {
  NATIVE_HOOK(0x62206bu) REGS; LOADALL;
L_0062206b:;
  /* 0062206b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062206e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622073(CPU *c) {
  NATIVE_HOOK(0x622073u) REGS; LOADALL;
L_00622073:;
  /* 00622073 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00622076 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062207b(CPU *c) {
  NATIVE_HOOK(0x62207bu) REGS; LOADALL;
L_0062207b:;
  /* 0062207b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062207e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622083(CPU *c) {
  NATIVE_HOOK(0x622083u) REGS; LOADALL;
L_00622083:;
  /* 00622083 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00622086 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062208b(CPU *c) {
  NATIVE_HOOK(0x62208bu) REGS; LOADALL;
L_0062208b:;
  /* 0062208b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062208e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622093(CPU *c) {
  NATIVE_HOOK(0x622093u) REGS; LOADALL;
L_00622093:;
  /* 00622093 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 00622096 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062209b(CPU *c) {
  NATIVE_HOOK(0x62209bu) REGS; LOADALL;
L_0062209b:;
  /* 0062209b lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 0062209e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220a3(CPU *c) {
  NATIVE_HOOK(0x6220a3u) REGS; LOADALL;
L_006220a3:;
  /* 006220a3 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 006220a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220ab(CPU *c) {
  NATIVE_HOOK(0x6220abu) REGS; LOADALL;
L_006220ab:;
  /* 006220ab lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 006220ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220b3(CPU *c) {
  NATIVE_HOOK(0x6220b3u) REGS; LOADALL;
L_006220b3:;
  /* 006220b3 lea ecx, [ebp - 0x6c] */ ecx = (u32)((u32)(ebp + 0xffffff94u));
  /* 006220b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220bb(CPU *c) {
  NATIVE_HOOK(0x6220bbu) REGS; LOADALL;
L_006220bb:;
  /* 006220bb lea ecx, [ebp - 0x94] */ ecx = (u32)((u32)(ebp + 0xffffff6cu));
  /* 006220c1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220c6(CPU *c) {
  NATIVE_HOOK(0x6220c6u) REGS; LOADALL;
  goto L_006220c6;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006220c6:;
  /* 006220c6 mov eax, 0x668f78 */ { eax = (u32)(0x668f78u); }
  /* 006220cb jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006220d0(CPU *c) {
  NATIVE_HOOK(0x6220d0u) REGS; LOADALL;
L_006220d0:;
  /* 006220d0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006220d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220d8(CPU *c) {
  NATIVE_HOOK(0x6220d8u) REGS; LOADALL;
L_006220d8:;
  /* 006220d8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006220db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220e0(CPU *c) {
  NATIVE_HOOK(0x6220e0u) REGS; LOADALL;
L_006220e0:;
  /* 006220e0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006220e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220e8(CPU *c) {
  NATIVE_HOOK(0x6220e8u) REGS; LOADALL;
L_006220e8:;
  /* 006220e8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006220eb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220f0(CPU *c) {
  NATIVE_HOOK(0x6220f0u) REGS; LOADALL;
L_006220f0:;
  /* 006220f0 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006220f3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006220f8(CPU *c) {
  NATIVE_HOOK(0x6220f8u) REGS; LOADALL;
L_006220f8:;
  /* 006220f8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006220fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622100(CPU *c) {
  NATIVE_HOOK(0x622100u) REGS; LOADALL;
L_00622100:;
  /* 00622100 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00622103 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622108(CPU *c) {
  NATIVE_HOOK(0x622108u) REGS; LOADALL;
L_00622108:;
  /* 00622108 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0062210b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622110(CPU *c) {
  NATIVE_HOOK(0x622110u) REGS; LOADALL;
  goto L_00622110;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622110:;
  /* 00622110 mov eax, 0x668fd8 */ { eax = (u32)(0x668fd8u); }
  /* 00622115 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622120(CPU *c) {
  NATIVE_HOOK(0x622120u) REGS; LOADALL;
L_00622120:;
  /* 00622120 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00622123 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622128(CPU *c) {
  NATIVE_HOOK(0x622128u) REGS; LOADALL;
L_00622128:;
  /* 00622128 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0062212b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622130(CPU *c) {
  NATIVE_HOOK(0x622130u) REGS; LOADALL;
L_00622130:;
  /* 00622130 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00622133 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622138(CPU *c) {
  NATIVE_HOOK(0x622138u) REGS; LOADALL;
L_00622138:;
  /* 00622138 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0062213b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622140(CPU *c) {
  NATIVE_HOOK(0x622140u) REGS; LOADALL;
L_00622140:;
  /* 00622140 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00622143 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622148(CPU *c) {
  NATIVE_HOOK(0x622148u) REGS; LOADALL;
L_00622148:;
  /* 00622148 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0062214b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622150(CPU *c) {
  NATIVE_HOOK(0x622150u) REGS; LOADALL;
L_00622150:;
  /* 00622150 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00622153 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622158(CPU *c) {
  NATIVE_HOOK(0x622158u) REGS; LOADALL;
L_00622158:;
  /* 00622158 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0062215b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622160(CPU *c) {
  NATIVE_HOOK(0x622160u) REGS; LOADALL;
  goto L_00622160;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622160:;
  /* 00622160 mov eax, 0x669038 */ { eax = (u32)(0x669038u); }
  /* 00622165 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622170(CPU *c) {
  NATIVE_HOOK(0x622170u) REGS; LOADALL;
L_00622170:;
  /* 00622170 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00622173 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622174 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622179u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622174u); RETCHK(0x622179u, 0x622174u); LOADALL;
  /* 00622179 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062217a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062217b(CPU *c) {
  NATIVE_HOOK(0x62217bu) REGS; LOADALL;
L_0062217b:;
  /* 0062217b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062217e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622183(CPU *c) {
  NATIVE_HOOK(0x622183u) REGS; LOADALL;
L_00622183:;
  /* 00622183 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00622186 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062218b(CPU *c) {
  NATIVE_HOOK(0x62218bu) REGS; LOADALL;
L_0062218b:;
  /* 0062218b lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062218e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622193(CPU *c) {
  NATIVE_HOOK(0x622193u) REGS; LOADALL;
L_00622193:;
  /* 00622193 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00622196 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062219b(CPU *c) {
  NATIVE_HOOK(0x62219bu) REGS; LOADALL;
L_0062219b:;
  /* 0062219b lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0062219e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221a3(CPU *c) {
  NATIVE_HOOK(0x6221a3u) REGS; LOADALL;
L_006221a3:;
  /* 006221a3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221ab(CPU *c) {
  NATIVE_HOOK(0x6221abu) REGS; LOADALL;
L_006221ab:;
  /* 006221ab lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221b3(CPU *c) {
  NATIVE_HOOK(0x6221b3u) REGS; LOADALL;
L_006221b3:;
  /* 006221b3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221bb(CPU *c) {
  NATIVE_HOOK(0x6221bbu) REGS; LOADALL;
L_006221bb:;
  /* 006221bb lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221c3(CPU *c) {
  NATIVE_HOOK(0x6221c3u) REGS; LOADALL;
L_006221c3:;
  /* 006221c3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221cb(CPU *c) {
  NATIVE_HOOK(0x6221cbu) REGS; LOADALL;
L_006221cb:;
  /* 006221cb lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221ce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221d3(CPU *c) {
  NATIVE_HOOK(0x6221d3u) REGS; LOADALL;
L_006221d3:;
  /* 006221d3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221db(CPU *c) {
  NATIVE_HOOK(0x6221dbu) REGS; LOADALL;
L_006221db:;
  /* 006221db lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221e3(CPU *c) {
  NATIVE_HOOK(0x6221e3u) REGS; LOADALL;
L_006221e3:;
  /* 006221e3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221eb(CPU *c) {
  NATIVE_HOOK(0x6221ebu) REGS; LOADALL;
L_006221eb:;
  /* 006221eb lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221ee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221f3(CPU *c) {
  NATIVE_HOOK(0x6221f3u) REGS; LOADALL;
L_006221f3:;
  /* 006221f3 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006221f6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006221fb(CPU *c) {
  NATIVE_HOOK(0x6221fbu) REGS; LOADALL;
L_006221fb:;
  /* 006221fb lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006221fe jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622203(CPU *c) {
  NATIVE_HOOK(0x622203u) REGS; LOADALL;
  goto L_00622203;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00622203:;
  /* 00622203 mov eax, 0x6690e8 */ { eax = (u32)(0x6690e8u); }
  /* 00622208 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622210(CPU *c) {
  NATIVE_HOOK(0x622210u) REGS; LOADALL;
L_00622210:;
  /* 00622210 mov eax, dword ptr [ebp - 0xb4] */ { const u32 m_ = (u32)(ebp + 0xffffff4cu); eax = (u32)(M32(m_)); }
  /* 00622216 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622217 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62221cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622217u); RETCHK(0x62221cu, 0x622217u); LOADALL;
  /* 0062221c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062221d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062221e(CPU *c) {
  NATIVE_HOOK(0x62221eu) REGS; LOADALL;
L_0062221e:;
  /* 0062221e lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 00622224 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622229(CPU *c) {
  NATIVE_HOOK(0x622229u) REGS; LOADALL;
L_00622229:;
  /* 00622229 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0062222f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622234(CPU *c) {
  NATIVE_HOOK(0x622234u) REGS; LOADALL;
L_00622234:;
  /* 00622234 lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 0062223a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062223f(CPU *c) {
  NATIVE_HOOK(0x62223fu) REGS; LOADALL;
L_0062223f:;
  /* 0062223f lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00622245 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062224a(CPU *c) {
  NATIVE_HOOK(0x62224au) REGS; LOADALL;
L_0062224a:;
  /* 0062224a lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00622250 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622255(CPU *c) {
  NATIVE_HOOK(0x622255u) REGS; LOADALL;
L_00622255:;
  /* 00622255 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0062225b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622260(CPU *c) {
  NATIVE_HOOK(0x622260u) REGS; LOADALL;
L_00622260:;
  /* 00622260 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00622266 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062226b(CPU *c) {
  NATIVE_HOOK(0x62226bu) REGS; LOADALL;
L_0062226b:;
  /* 0062226b lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00622271 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622276(CPU *c) {
  NATIVE_HOOK(0x622276u) REGS; LOADALL;
L_00622276:;
  /* 00622276 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 0062227c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622281(CPU *c) {
  NATIVE_HOOK(0x622281u) REGS; LOADALL;
L_00622281:;
  /* 00622281 lea ecx, [ebp - 0xb0] */ ecx = (u32)((u32)(ebp + 0xffffff50u));
  /* 00622287 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062228c(CPU *c) {
  NATIVE_HOOK(0x62228cu) REGS; LOADALL;
L_0062228c:;
  /* 0062228c lea ecx, [ebp - 0xd0] */ ecx = (u32)((u32)(ebp + 0xffffff30u));
  /* 00622292 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622297(CPU *c) {
  NATIVE_HOOK(0x622297u) REGS; LOADALL;
L_00622297:;
  /* 00622297 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0062229d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222a2(CPU *c) {
  NATIVE_HOOK(0x6222a2u) REGS; LOADALL;
L_006222a2:;
  /* 006222a2 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222a8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222ad(CPU *c) {
  NATIVE_HOOK(0x6222adu) REGS; LOADALL;
L_006222ad:;
  /* 006222ad lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222b8(CPU *c) {
  NATIVE_HOOK(0x6222b8u) REGS; LOADALL;
L_006222b8:;
  /* 006222b8 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222c3(CPU *c) {
  NATIVE_HOOK(0x6222c3u) REGS; LOADALL;
L_006222c3:;
  /* 006222c3 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222c9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222ce(CPU *c) {
  NATIVE_HOOK(0x6222ceu) REGS; LOADALL;
L_006222ce:;
  /* 006222ce lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222d4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222d9(CPU *c) {
  NATIVE_HOOK(0x6222d9u) REGS; LOADALL;
L_006222d9:;
  /* 006222d9 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222df jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222e4(CPU *c) {
  NATIVE_HOOK(0x6222e4u) REGS; LOADALL;
L_006222e4:;
  /* 006222e4 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222ea jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222ef(CPU *c) {
  NATIVE_HOOK(0x6222efu) REGS; LOADALL;
L_006222ef:;
  /* 006222ef lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 006222f5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006222fa(CPU *c) {
  NATIVE_HOOK(0x6222fau) REGS; LOADALL;
L_006222fa:;
  /* 006222fa lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622300 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622305(CPU *c) {
  NATIVE_HOOK(0x622305u) REGS; LOADALL;
L_00622305:;
  /* 00622305 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0062230b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622310(CPU *c) {
  NATIVE_HOOK(0x622310u) REGS; LOADALL;
L_00622310:;
  /* 00622310 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622316 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062231b(CPU *c) {
  NATIVE_HOOK(0x62231bu) REGS; LOADALL;
L_0062231b:;
  /* 0062231b lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622321 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622326(CPU *c) {
  NATIVE_HOOK(0x622326u) REGS; LOADALL;
L_00622326:;
  /* 00622326 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0062232c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622331(CPU *c) {
  NATIVE_HOOK(0x622331u) REGS; LOADALL;
L_00622331:;
  /* 00622331 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622337 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062233c(CPU *c) {
  NATIVE_HOOK(0x62233cu) REGS; LOADALL;
L_0062233c:;
  /* 0062233c lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622342 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622347(CPU *c) {
  NATIVE_HOOK(0x622347u) REGS; LOADALL;
L_00622347:;
  /* 00622347 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0062234d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622352(CPU *c) {
  NATIVE_HOOK(0x622352u) REGS; LOADALL;
L_00622352:;
  /* 00622352 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622358 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062235d(CPU *c) {
  NATIVE_HOOK(0x62235du) REGS; LOADALL;
L_0062235d:;
  /* 0062235d lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 00622363 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622368(CPU *c) {
  NATIVE_HOOK(0x622368u) REGS; LOADALL;
L_00622368:;
  /* 00622368 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0062236e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00622373(CPU *c) {
  NATIVE_HOOK(0x622373u) REGS; LOADALL;
L_00622373:;
  /* 00622373 lea ecx, [ebp - 0xec] */ ecx = (u32)((u32)(ebp + 0xffffff14u));
  /* 00622379 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062237e(CPU *c) {
  NATIVE_HOOK(0x62237eu) REGS; LOADALL;
  goto L_0062237e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062237e:;
  /* 0062237e mov eax, 0x669210 */ { eax = (u32)(0x669210u); }
  /* 00622383 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00622390(CPU *c) {
  NATIVE_HOOK(0x622390u) REGS; LOADALL;
L_00622390:;
  /* 00622390 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00622393 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00622394 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x622399u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x622394u); RETCHK(0x622399u, 0x622394u); LOADALL;
  /* 00622399 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062239a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062239b(CPU *c) {
  NATIVE_HOOK(0x62239bu) REGS; LOADALL;
L_0062239b:;
  /* 0062239b lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0062239e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223a3(CPU *c) {
  NATIVE_HOOK(0x6223a3u) REGS; LOADALL;
L_006223a3:;
  /* 006223a3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223ab(CPU *c) {
  NATIVE_HOOK(0x6223abu) REGS; LOADALL;
L_006223ab:;
  /* 006223ab lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 006223ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223b3(CPU *c) {
  NATIVE_HOOK(0x6223b3u) REGS; LOADALL;
L_006223b3:;
  /* 006223b3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223b6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223bb(CPU *c) {
  NATIVE_HOOK(0x6223bbu) REGS; LOADALL;
L_006223bb:;
  /* 006223bb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223be jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223c3(CPU *c) {
  NATIVE_HOOK(0x6223c3u) REGS; LOADALL;
L_006223c3:;
  /* 006223c3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223cb(CPU *c) {
  NATIVE_HOOK(0x6223cbu) REGS; LOADALL;
L_006223cb:;
  /* 006223cb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223ce jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223d3(CPU *c) {
  NATIVE_HOOK(0x6223d3u) REGS; LOADALL;
L_006223d3:;
  /* 006223d3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223db(CPU *c) {
  NATIVE_HOOK(0x6223dbu) REGS; LOADALL;
L_006223db:;
  /* 006223db lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223de jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223e3(CPU *c) {
  NATIVE_HOOK(0x6223e3u) REGS; LOADALL;
L_006223e3:;
  /* 006223e3 lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223e6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006223eb(CPU *c) {
  NATIVE_HOOK(0x6223ebu) REGS; LOADALL;
L_006223eb:;
  /* 006223eb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 006223ee jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
