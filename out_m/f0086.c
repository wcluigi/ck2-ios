#include "funcs.h"

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

void F_00624f78(CPU *c) {
  NATIVE_HOOK(0x624f78u) REGS; LOADALL;
L_00624f78:;
  /* 00624f78 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00624f7b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624f80(CPU *c) {
  NATIVE_HOOK(0x624f80u) REGS; LOADALL;
L_00624f80:;
  /* 00624f80 lea esi, [ebp - 0x1c] */ esi = (u32)((u32)(ebp + 0xffffffe4u));
  /* 00624f83 jmp 0x45c6a0 */ SAVEALL; F_0045c6a0(c); return;
}

void F_00624f88(CPU *c) {
  NATIVE_HOOK(0x624f88u) REGS; LOADALL;
  goto L_00624f88;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624f88:;
  /* 00624f88 mov eax, 0x66c530 */ { eax = (u32)(0x66c530u); }
  /* 00624f8d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624fa0(CPU *c) {
  NATIVE_HOOK(0x624fa0u) REGS; LOADALL;
L_00624fa0:;
  /* 00624fa0 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00624fa3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624fa8(CPU *c) {
  NATIVE_HOOK(0x624fa8u) REGS; LOADALL;
L_00624fa8:;
  /* 00624fa8 lea ecx, [ebp - 0x248] */ ecx = (u32)((u32)(ebp + 0xfffffdb8u));
  /* 00624fae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624fb3(CPU *c) {
  NATIVE_HOOK(0x624fb3u) REGS; LOADALL;
L_00624fb3:;
  /* 00624fb3 lea ecx, [ebp - 0x264] */ ecx = (u32)((u32)(ebp + 0xfffffd9cu));
  /* 00624fb9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624fbe(CPU *c) {
  NATIVE_HOOK(0x624fbeu) REGS; LOADALL;
  goto L_00624fbe;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00624fbe:;
  /* 00624fbe mov eax, 0x66c564 */ { eax = (u32)(0x66c564u); }
  /* 00624fc3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00624fd0(CPU *c) {
  NATIVE_HOOK(0x624fd0u) REGS; LOADALL;
L_00624fd0:;
  /* 00624fd0 lea ecx, [ebp - 0x2a0] */ ecx = (u32)((u32)(ebp + 0xfffffd60u));
  /* 00624fd6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624fdb(CPU *c) {
  NATIVE_HOOK(0x624fdbu) REGS; LOADALL;
L_00624fdb:;
  /* 00624fdb lea ecx, [ebp - 0x2a0] */ ecx = (u32)((u32)(ebp + 0xfffffd60u));
  /* 00624fe1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624fe6(CPU *c) {
  NATIVE_HOOK(0x624fe6u) REGS; LOADALL;
L_00624fe6:;
  /* 00624fe6 lea ecx, [ebp - 0x2a0] */ ecx = (u32)((u32)(ebp + 0xfffffd60u));
  /* 00624fec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ff1(CPU *c) {
  NATIVE_HOOK(0x624ff1u) REGS; LOADALL;
L_00624ff1:;
  /* 00624ff1 lea ecx, [ebp - 0x2a0] */ ecx = (u32)((u32)(ebp + 0xfffffd60u));
  /* 00624ff7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00624ffc(CPU *c) {
  NATIVE_HOOK(0x624ffcu) REGS; LOADALL;
L_00624ffc:;
  /* 00624ffc lea ecx, [ebp - 0x2a0] */ ecx = (u32)((u32)(ebp + 0xfffffd60u));
  /* 00625002 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625007(CPU *c) {
  NATIVE_HOOK(0x625007u) REGS; LOADALL;
L_00625007:;
  /* 00625007 lea ecx, [ebp - 0x2a0] */ ecx = (u32)((u32)(ebp + 0xfffffd60u));
  /* 0062500d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625012(CPU *c) {
  NATIVE_HOOK(0x625012u) REGS; LOADALL;
L_00625012:;
  /* 00625012 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00625015 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062501a(CPU *c) {
  NATIVE_HOOK(0x62501au) REGS; LOADALL;
L_0062501a:;
  /* 0062501a lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0062501d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625022(CPU *c) {
  NATIVE_HOOK(0x625022u) REGS; LOADALL;
L_00625022:;
  /* 00625022 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00625025 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062502a(CPU *c) {
  NATIVE_HOOK(0x62502au) REGS; LOADALL;
L_0062502a:;
  /* 0062502a lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 0062502d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625032(CPU *c) {
  NATIVE_HOOK(0x625032u) REGS; LOADALL;
L_00625032:;
  /* 00625032 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00625035 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062503a(CPU *c) {
  NATIVE_HOOK(0x62503au) REGS; LOADALL;
L_0062503a:;
  /* 0062503a lea ecx, [ebp - 0x41c] */ ecx = (u32)((u32)(ebp + 0xfffffbe4u));
  /* 00625040 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625045(CPU *c) {
  NATIVE_HOOK(0x625045u) REGS; LOADALL;
L_00625045:;
  /* 00625045 lea ecx, [ebp - 0x550] */ ecx = (u32)((u32)(ebp + 0xfffffab0u));
  /* 0062504b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625050(CPU *c) {
  NATIVE_HOOK(0x625050u) REGS; LOADALL;
L_00625050:;
  /* 00625050 lea ecx, [ebp - 0x454] */ ecx = (u32)((u32)(ebp + 0xfffffbacu));
  /* 00625056 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062505b(CPU *c) {
  NATIVE_HOOK(0x62505bu) REGS; LOADALL;
L_0062505b:;
  /* 0062505b lea ecx, [ebp - 0x72c] */ ecx = (u32)((u32)(ebp + 0xfffff8d4u));
  /* 00625061 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625066(CPU *c) {
  NATIVE_HOOK(0x625066u) REGS; LOADALL;
L_00625066:;
  /* 00625066 lea ecx, [ebp - 0x48c] */ ecx = (u32)((u32)(ebp + 0xfffffb74u));
  /* 0062506c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625071(CPU *c) {
  NATIVE_HOOK(0x625071u) REGS; LOADALL;
L_00625071:;
  /* 00625071 lea ecx, [ebp - 0x518] */ ecx = (u32)((u32)(ebp + 0xfffffae8u));
  /* 00625077 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062507c(CPU *c) {
  NATIVE_HOOK(0x62507cu) REGS; LOADALL;
L_0062507c:;
  /* 0062507c lea ecx, [ebp - 0x320] */ ecx = (u32)((u32)(ebp + 0xfffffce0u));
  /* 00625082 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625087(CPU *c) {
  NATIVE_HOOK(0x625087u) REGS; LOADALL;
L_00625087:;
  /* 00625087 lea ecx, [ebp - 0x6d8] */ ecx = (u32)((u32)(ebp + 0xfffff928u));
  /* 0062508d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625092(CPU *c) {
  NATIVE_HOOK(0x625092u) REGS; LOADALL;
L_00625092:;
  /* 00625092 lea ecx, [ebp - 0x4c4] */ ecx = (u32)((u32)(ebp + 0xfffffb3cu));
  /* 00625098 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062509d(CPU *c) {
  NATIVE_HOOK(0x62509du) REGS; LOADALL;
L_0062509d:;
  /* 0062509d lea ecx, [ebp - 0x4e0] */ ecx = (u32)((u32)(ebp + 0xfffffb20u));
  /* 006250a3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250a8(CPU *c) {
  NATIVE_HOOK(0x6250a8u) REGS; LOADALL;
L_006250a8:;
  /* 006250a8 lea ecx, [ebp - 0x400] */ ecx = (u32)((u32)(ebp + 0xfffffc00u));
  /* 006250ae jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250b3(CPU *c) {
  NATIVE_HOOK(0x6250b3u) REGS; LOADALL;
L_006250b3:;
  /* 006250b3 lea ecx, [ebp - 0x668] */ ecx = (u32)((u32)(ebp + 0xfffff998u));
  /* 006250b9 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250be(CPU *c) {
  NATIVE_HOOK(0x6250beu) REGS; LOADALL;
L_006250be:;
  /* 006250be lea ecx, [ebp - 0x358] */ ecx = (u32)((u32)(ebp + 0xfffffca8u));
  /* 006250c4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250c9(CPU *c) {
  NATIVE_HOOK(0x6250c9u) REGS; LOADALL;
L_006250c9:;
  /* 006250c9 lea ecx, [ebp - 0x588] */ ecx = (u32)((u32)(ebp + 0xfffffa78u));
  /* 006250cf jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250d4(CPU *c) {
  NATIVE_HOOK(0x6250d4u) REGS; LOADALL;
L_006250d4:;
  /* 006250d4 lea ecx, [ebp - 0x470] */ ecx = (u32)((u32)(ebp + 0xfffffb90u));
  /* 006250da jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250df(CPU *c) {
  NATIVE_HOOK(0x6250dfu) REGS; LOADALL;
L_006250df:;
  /* 006250df lea ecx, [ebp - 0x748] */ ecx = (u32)((u32)(ebp + 0xfffff8b8u));
  /* 006250e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250ea(CPU *c) {
  NATIVE_HOOK(0x6250eau) REGS; LOADALL;
L_006250ea:;
  /* 006250ea lea ecx, [ebp - 0x390] */ ecx = (u32)((u32)(ebp + 0xfffffc70u));
  /* 006250f0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006250f5(CPU *c) {
  NATIVE_HOOK(0x6250f5u) REGS; LOADALL;
L_006250f5:;
  /* 006250f5 lea ecx, [ebp - 0x5c0] */ ecx = (u32)((u32)(ebp + 0xfffffa40u));
  /* 006250fb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625100(CPU *c) {
  NATIVE_HOOK(0x625100u) REGS; LOADALL;
L_00625100:;
  /* 00625100 lea ecx, [ebp - 0x438] */ ecx = (u32)((u32)(ebp + 0xfffffbc8u));
  /* 00625106 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062510b(CPU *c) {
  NATIVE_HOOK(0x62510bu) REGS; LOADALL;
L_0062510b:;
  /* 0062510b lea ecx, [ebp - 0x6a0] */ ecx = (u32)((u32)(ebp + 0xfffff960u));
  /* 00625111 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625116(CPU *c) {
  NATIVE_HOOK(0x625116u) REGS; LOADALL;
L_00625116:;
  /* 00625116 lea ecx, [ebp - 0x5f8] */ ecx = (u32)((u32)(ebp + 0xfffffa08u));
  /* 0062511c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625121(CPU *c) {
  NATIVE_HOOK(0x625121u) REGS; LOADALL;
L_00625121:;
  /* 00625121 lea ecx, [ebp - 0x710] */ ecx = (u32)((u32)(ebp + 0xfffff8f0u));
  /* 00625127 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062512c(CPU *c) {
  NATIVE_HOOK(0x62512cu) REGS; LOADALL;
L_0062512c:;
  /* 0062512c lea ecx, [ebp - 0x630] */ ecx = (u32)((u32)(ebp + 0xfffff9d0u));
  /* 00625132 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625137(CPU *c) {
  NATIVE_HOOK(0x625137u) REGS; LOADALL;
L_00625137:;
  /* 00625137 lea ecx, [ebp - 0x4fc] */ ecx = (u32)((u32)(ebp + 0xfffffb04u));
  /* 0062513d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625142(CPU *c) {
  NATIVE_HOOK(0x625142u) REGS; LOADALL;
L_00625142:;
  /* 00625142 lea ecx, [ebp - 0x534] */ ecx = (u32)((u32)(ebp + 0xfffffaccu));
  /* 00625148 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062514d(CPU *c) {
  NATIVE_HOOK(0x62514du) REGS; LOADALL;
L_0062514d:;
  /* 0062514d lea ecx, [ebp - 0x56c] */ ecx = (u32)((u32)(ebp + 0xfffffa94u));
  /* 00625153 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625158(CPU *c) {
  NATIVE_HOOK(0x625158u) REGS; LOADALL;
L_00625158:;
  /* 00625158 lea ecx, [ebp - 0x5a4] */ ecx = (u32)((u32)(ebp + 0xfffffa5cu));
  /* 0062515e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625163(CPU *c) {
  NATIVE_HOOK(0x625163u) REGS; LOADALL;
L_00625163:;
  /* 00625163 lea ecx, [ebp - 0x5dc] */ ecx = (u32)((u32)(ebp + 0xfffffa24u));
  /* 00625169 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062516e(CPU *c) {
  NATIVE_HOOK(0x62516eu) REGS; LOADALL;
L_0062516e:;
  /* 0062516e lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 00625171 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625176(CPU *c) {
  NATIVE_HOOK(0x625176u) REGS; LOADALL;
L_00625176:;
  /* 00625176 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625179 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062517e(CPU *c) {
  NATIVE_HOOK(0x62517eu) REGS; LOADALL;
L_0062517e:;
  /* 0062517e lea ecx, [ebp - 0x764] */ ecx = (u32)((u32)(ebp + 0xfffff89cu));
  /* 00625184 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625189(CPU *c) {
  NATIVE_HOOK(0x625189u) REGS; LOADALL;
L_00625189:;
  /* 00625189 lea ecx, [ebp - 0x3c8] */ ecx = (u32)((u32)(ebp + 0xfffffc38u));
  /* 0062518f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625194(CPU *c) {
  NATIVE_HOOK(0x625194u) REGS; LOADALL;
L_00625194:;
  /* 00625194 lea ecx, [ebp - 0x4a8] */ ecx = (u32)((u32)(ebp + 0xfffffb58u));
  /* 0062519a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062519f(CPU *c) {
  NATIVE_HOOK(0x62519fu) REGS; LOADALL;
L_0062519f:;
  /* 0062519f lea ecx, [ebp - 0x304] */ ecx = (u32)((u32)(ebp + 0xfffffcfcu));
  /* 006251a5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251aa(CPU *c) {
  NATIVE_HOOK(0x6251aau) REGS; LOADALL;
L_006251aa:;
  /* 006251aa lea ecx, [ebp - 0x33c] */ ecx = (u32)((u32)(ebp + 0xfffffcc4u));
  /* 006251b0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251b5(CPU *c) {
  NATIVE_HOOK(0x6251b5u) REGS; LOADALL;
L_006251b5:;
  /* 006251b5 lea ecx, [ebp - 0x374] */ ecx = (u32)((u32)(ebp + 0xfffffc8cu));
  /* 006251bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251c0(CPU *c) {
  NATIVE_HOOK(0x6251c0u) REGS; LOADALL;
L_006251c0:;
  /* 006251c0 lea ecx, [ebp - 0x3ac] */ ecx = (u32)((u32)(ebp + 0xfffffc54u));
  /* 006251c6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251cb(CPU *c) {
  NATIVE_HOOK(0x6251cbu) REGS; LOADALL;
L_006251cb:;
  /* 006251cb lea ecx, [ebp - 0x3e4] */ ecx = (u32)((u32)(ebp + 0xfffffc1cu));
  /* 006251d1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251d6(CPU *c) {
  NATIVE_HOOK(0x6251d6u) REGS; LOADALL;
L_006251d6:;
  /* 006251d6 lea ecx, [ebp - 0x614] */ ecx = (u32)((u32)(ebp + 0xfffff9ecu));
  /* 006251dc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251e1(CPU *c) {
  NATIVE_HOOK(0x6251e1u) REGS; LOADALL;
L_006251e1:;
  /* 006251e1 lea ecx, [ebp - 0x2e8] */ ecx = (u32)((u32)(ebp + 0xfffffd18u));
  /* 006251e7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251ec(CPU *c) {
  NATIVE_HOOK(0x6251ecu) REGS; LOADALL;
L_006251ec:;
  /* 006251ec lea ecx, [ebp - 0x64c] */ ecx = (u32)((u32)(ebp + 0xfffff9b4u));
  /* 006251f2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006251f7(CPU *c) {
  NATIVE_HOOK(0x6251f7u) REGS; LOADALL;
L_006251f7:;
  /* 006251f7 lea ecx, [ebp - 0x2c4] */ ecx = (u32)((u32)(ebp + 0xfffffd3cu));
  /* 006251fd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625202(CPU *c) {
  NATIVE_HOOK(0x625202u) REGS; LOADALL;
L_00625202:;
  /* 00625202 lea ecx, [ebp - 0x684] */ ecx = (u32)((u32)(ebp + 0xfffff97cu));
  /* 00625208 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062520d(CPU *c) {
  NATIVE_HOOK(0x62520du) REGS; LOADALL;
L_0062520d:;
  /* 0062520d lea ecx, [ebp - 0x6bc] */ ecx = (u32)((u32)(ebp + 0xfffff944u));
  /* 00625213 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625218(CPU *c) {
  NATIVE_HOOK(0x625218u) REGS; LOADALL;
L_00625218:;
  /* 00625218 lea ecx, [ebp - 0x6f4] */ ecx = (u32)((u32)(ebp + 0xfffff90cu));
  /* 0062521e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625223(CPU *c) {
  NATIVE_HOOK(0x625223u) REGS; LOADALL;
L_00625223:;
  /* 00625223 lea ecx, [ebp - 0x2c4] */ ecx = (u32)((u32)(ebp + 0xfffffd3cu));
  /* 00625229 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062522e(CPU *c) {
  NATIVE_HOOK(0x62522eu) REGS; LOADALL;
L_0062522e:;
  /* 0062522e lea ecx, [ebp - 0x2c4] */ ecx = (u32)((u32)(ebp + 0xfffffd3cu));
  /* 00625234 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625239(CPU *c) {
  NATIVE_HOOK(0x625239u) REGS; LOADALL;
  goto L_00625239;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625239:;
  /* 00625239 mov eax, 0x66c780 */ { eax = (u32)(0x66c780u); }
  /* 0062523e jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625250(CPU *c) {
  NATIVE_HOOK(0x625250u) REGS; LOADALL;
L_00625250:;
  /* 00625250 mov eax, dword ptr [ebp - 0x294] */ { const u32 m_ = (u32)(ebp + 0xfffffd6cu); eax = (u32)(M32(m_)); }
  /* 00625256 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00625257 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62525cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x625257u); RETCHK(0x62525cu, 0x625257u); LOADALL;
  /* 0062525c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062525d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062525e(CPU *c) {
  NATIVE_HOOK(0x62525eu) REGS; LOADALL;
L_0062525e:;
  /* 0062525e lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 00625264 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625269(CPU *c) {
  NATIVE_HOOK(0x625269u) REGS; LOADALL;
L_00625269:;
  /* 00625269 lea ecx, [ebp - 0x2b4] */ ecx = (u32)((u32)(ebp + 0xfffffd4cu));
  /* 0062526f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625274(CPU *c) {
  NATIVE_HOOK(0x625274u) REGS; LOADALL;
L_00625274:;
  /* 00625274 lea ecx, [ebp - 0x2b4] */ ecx = (u32)((u32)(ebp + 0xfffffd4cu));
  /* 0062527a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062527f(CPU *c) {
  NATIVE_HOOK(0x62527fu) REGS; LOADALL;
L_0062527f:;
  /* 0062527f lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 00625285 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062528a(CPU *c) {
  NATIVE_HOOK(0x62528au) REGS; LOADALL;
L_0062528a:;
  /* 0062528a lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 00625290 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625295(CPU *c) {
  NATIVE_HOOK(0x625295u) REGS; LOADALL;
L_00625295:;
  /* 00625295 lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 0062529b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252a0(CPU *c) {
  NATIVE_HOOK(0x6252a0u) REGS; LOADALL;
L_006252a0:;
  /* 006252a0 lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 006252a6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252ab(CPU *c) {
  NATIVE_HOOK(0x6252abu) REGS; LOADALL;
L_006252ab:;
  /* 006252ab lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 006252b1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252b6(CPU *c) {
  NATIVE_HOOK(0x6252b6u) REGS; LOADALL;
L_006252b6:;
  /* 006252b6 lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 006252bc jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252c1(CPU *c) {
  NATIVE_HOOK(0x6252c1u) REGS; LOADALL;
L_006252c1:;
  /* 006252c1 lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 006252c7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252cc(CPU *c) {
  NATIVE_HOOK(0x6252ccu) REGS; LOADALL;
L_006252cc:;
  /* 006252cc lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 006252d2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252d7(CPU *c) {
  NATIVE_HOOK(0x6252d7u) REGS; LOADALL;
L_006252d7:;
  /* 006252d7 lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 006252dd jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252e2(CPU *c) {
  NATIVE_HOOK(0x6252e2u) REGS; LOADALL;
L_006252e2:;
  /* 006252e2 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006252e5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252ea(CPU *c) {
  NATIVE_HOOK(0x6252eau) REGS; LOADALL;
L_006252ea:;
  /* 006252ea lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 006252f0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252f5(CPU *c) {
  NATIVE_HOOK(0x6252f5u) REGS; LOADALL;
L_006252f5:;
  /* 006252f5 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006252f8 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006252fd(CPU *c) {
  NATIVE_HOOK(0x6252fdu) REGS; LOADALL;
L_006252fd:;
  /* 006252fd lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625300 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625305(CPU *c) {
  NATIVE_HOOK(0x625305u) REGS; LOADALL;
  goto L_00625305;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625305:;
  /* 00625305 mov eax, 0x66c848 */ { eax = (u32)(0x66c848u); }
  /* 0062530a jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625310(CPU *c) {
  NATIVE_HOOK(0x625310u) REGS; LOADALL;
L_00625310:;
  /* 00625310 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625316 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062531b(CPU *c) {
  NATIVE_HOOK(0x62531bu) REGS; LOADALL;
L_0062531b:;
  /* 0062531b lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625321 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625326(CPU *c) {
  NATIVE_HOOK(0x625326u) REGS; LOADALL;
L_00625326:;
  /* 00625326 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0062532c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625331(CPU *c) {
  NATIVE_HOOK(0x625331u) REGS; LOADALL;
L_00625331:;
  /* 00625331 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625337 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062533c(CPU *c) {
  NATIVE_HOOK(0x62533cu) REGS; LOADALL;
L_0062533c:;
  /* 0062533c lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625342 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625347(CPU *c) {
  NATIVE_HOOK(0x625347u) REGS; LOADALL;
L_00625347:;
  /* 00625347 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 0062534d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625352(CPU *c) {
  NATIVE_HOOK(0x625352u) REGS; LOADALL;
L_00625352:;
  /* 00625352 lea ecx, [ebp - 0x22c] */ ecx = (u32)((u32)(ebp + 0xfffffdd4u));
  /* 00625358 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062535d(CPU *c) {
  NATIVE_HOOK(0x62535du) REGS; LOADALL;
L_0062535d:;
  /* 0062535d lea ecx, [ebp - 0x24c] */ ecx = (u32)((u32)(ebp + 0xfffffdb4u));
  /* 00625363 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625368(CPU *c) {
  NATIVE_HOOK(0x625368u) REGS; LOADALL;
  goto L_00625368;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625368:;
  /* 00625368 mov eax, 0x66c8a8 */ { eax = (u32)(0x66c8a8u); }
  /* 0062536d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625380(CPU *c) {
  NATIVE_HOOK(0x625380u) REGS; LOADALL;
L_00625380:;
  /* 00625380 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 00625383 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625388(CPU *c) {
  NATIVE_HOOK(0x625388u) REGS; LOADALL;
L_00625388:;
  /* 00625388 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 0062538b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625390(CPU *c) {
  NATIVE_HOOK(0x625390u) REGS; LOADALL;
L_00625390:;
  /* 00625390 mov eax, dword ptr [ebp - 0x280] */ { const u32 m_ = (u32)(ebp + 0xfffffd80u); eax = (u32)(M32(m_)); }
  /* 00625396 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00625397 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x62539cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x625397u); RETCHK(0x62539cu, 0x625397u); LOADALL;
  /* 0062539c pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062539d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0062539e(CPU *c) {
  NATIVE_HOOK(0x62539eu) REGS; LOADALL;
  goto L_0062539e;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_0062539e:;
  /* 0062539e mov eax, 0x66c8dc */ { eax = (u32)(0x66c8dcu); }
  /* 006253a3 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006253b0(CPU *c) {
  NATIVE_HOOK(0x6253b0u) REGS; LOADALL;
L_006253b0:;
  /* 006253b0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006253b3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006253b8(CPU *c) {
  NATIVE_HOOK(0x6253b8u) REGS; LOADALL;
L_006253b8:;
  /* 006253b8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006253bb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006253c0(CPU *c) {
  NATIVE_HOOK(0x6253c0u) REGS; LOADALL;
L_006253c0:;
  /* 006253c0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006253c3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006253c8(CPU *c) {
  NATIVE_HOOK(0x6253c8u) REGS; LOADALL;
L_006253c8:;
  /* 006253c8 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006253cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006253d0(CPU *c) {
  NATIVE_HOOK(0x6253d0u) REGS; LOADALL;
L_006253d0:;
  /* 006253d0 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 006253d3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006253d8(CPU *c) {
  NATIVE_HOOK(0x6253d8u) REGS; LOADALL;
L_006253d8:;
  /* 006253d8 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 006253db jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006253e0(CPU *c) {
  NATIVE_HOOK(0x6253e0u) REGS; LOADALL;
  goto L_006253e0;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006253e0:;
  /* 006253e0 mov eax, 0x66c928 */ { eax = (u32)(0x66c928u); }
  /* 006253e5 jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006253f0(CPU *c) {
  NATIVE_HOOK(0x6253f0u) REGS; LOADALL;
L_006253f0:;
  /* 006253f0 lea esi, [ebp - 0x54] */ esi = (u32)((u32)(ebp + 0xffffffacu));
  /* 006253f3 jmp 0x44c990 */ SAVEALL; F_0044c990(c); return;
}

void F_006253f8(CPU *c) {
  NATIVE_HOOK(0x6253f8u) REGS; LOADALL;
  goto L_006253f8;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006253f8:;
  /* 006253f8 mov eax, 0x66c94c */ { eax = (u32)(0x66c94cu); }
  /* 006253fd jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625410(CPU *c) {
  NATIVE_HOOK(0x625410u) REGS; LOADALL;
L_00625410:;
  /* 00625410 lea esi, [ebp - 0x4c] */ esi = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00625413 jmp 0x4a6600 */ SAVEALL; F_004a6600(c); return;
}

void F_00625418(CPU *c) {
  NATIVE_HOOK(0x625418u) REGS; LOADALL;
  goto L_00625418;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625418:;
  /* 00625418 mov eax, 0x66c970 */ { eax = (u32)(0x66c970u); }
  /* 0062541d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625430(CPU *c) {
  NATIVE_HOOK(0x625430u) REGS; LOADALL;
L_00625430:;
  /* 00625430 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00625433 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625438(CPU *c) {
  NATIVE_HOOK(0x625438u) REGS; LOADALL;
L_00625438:;
  /* 00625438 lea ecx, [ebp - 0x44] */ ecx = (u32)((u32)(ebp + 0xffffffbcu));
  /* 0062543b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625440(CPU *c) {
  NATIVE_HOOK(0x625440u) REGS; LOADALL;
L_00625440:;
  /* 00625440 lea ecx, [ebp - 0x60] */ ecx = (u32)((u32)(ebp + 0xffffffa0u));
  /* 00625443 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625448(CPU *c) {
  NATIVE_HOOK(0x625448u) REGS; LOADALL;
  goto L_00625448;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_00625448:;
  /* 00625448 mov eax, 0x66c9a4 */ { eax = (u32)(0x66c9a4u); }
  /* 0062544d jmp 0x5fee2a */ goto L_005fee2a;
}

void F_00625460(CPU *c) {
  NATIVE_HOOK(0x625460u) REGS; LOADALL;
L_00625460:;
  /* 00625460 lea ecx, [ebp - 0x2c] */ ecx = (u32)((u32)(ebp + 0xffffffd4u));
  /* 00625463 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625468(CPU *c) {
  NATIVE_HOOK(0x625468u) REGS; LOADALL;
L_00625468:;
  /* 00625468 lea ecx, [ebp - 0x434] */ ecx = (u32)((u32)(ebp + 0xfffffbccu));
  /* 0062546e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625473(CPU *c) {
  NATIVE_HOOK(0x625473u) REGS; LOADALL;
L_00625473:;
  /* 00625473 lea ecx, [ebp - 0x418] */ ecx = (u32)((u32)(ebp + 0xfffffbe8u));
  /* 00625479 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062547e(CPU *c) {
  NATIVE_HOOK(0x62547eu) REGS; LOADALL;
L_0062547e:;
  /* 0062547e lea ecx, [ebp - 0x450] */ ecx = (u32)((u32)(ebp + 0xfffffbb0u));
  /* 00625484 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625489(CPU *c) {
  NATIVE_HOOK(0x625489u) REGS; LOADALL;
L_00625489:;
  /* 00625489 lea ecx, [ebp - 0x2e4] */ ecx = (u32)((u32)(ebp + 0xfffffd1cu));
  /* 0062548f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625494(CPU *c) {
  NATIVE_HOOK(0x625494u) REGS; LOADALL;
L_00625494:;
  /* 00625494 lea ecx, [ebp - 0x194] */ ecx = (u32)((u32)(ebp + 0xfffffe6cu));
  /* 0062549a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062549f(CPU *c) {
  NATIVE_HOOK(0x62549fu) REGS; LOADALL;
L_0062549f:;
  /* 0062549f lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006254a2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254a7(CPU *c) {
  NATIVE_HOOK(0x6254a7u) REGS; LOADALL;
L_006254a7:;
  /* 006254a7 lea ecx, [ebp - 0x3fc] */ ecx = (u32)((u32)(ebp + 0xfffffc04u));
  /* 006254ad jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254b2(CPU *c) {
  NATIVE_HOOK(0x6254b2u) REGS; LOADALL;
L_006254b2:;
  /* 006254b2 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006254b5 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254ba(CPU *c) {
  NATIVE_HOOK(0x6254bau) REGS; LOADALL;
L_006254ba:;
  /* 006254ba lea ecx, [ebp - 0x1cc] */ ecx = (u32)((u32)(ebp + 0xfffffe34u));
  /* 006254c0 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254c5(CPU *c) {
  NATIVE_HOOK(0x6254c5u) REGS; LOADALL;
L_006254c5:;
  /* 006254c5 lea ecx, [ebp - 0x31c] */ ecx = (u32)((u32)(ebp + 0xfffffce4u));
  /* 006254cb jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254d0(CPU *c) {
  NATIVE_HOOK(0x6254d0u) REGS; LOADALL;
L_006254d0:;
  /* 006254d0 lea ecx, [ebp - 0x204] */ ecx = (u32)((u32)(ebp + 0xfffffdfcu));
  /* 006254d6 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254db(CPU *c) {
  NATIVE_HOOK(0x6254dbu) REGS; LOADALL;
L_006254db:;
  /* 006254db lea ecx, [ebp - 0x3c4] */ ecx = (u32)((u32)(ebp + 0xfffffc3cu));
  /* 006254e1 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254e6(CPU *c) {
  NATIVE_HOOK(0x6254e6u) REGS; LOADALL;
L_006254e6:;
  /* 006254e6 lea ecx, [ebp - 0x23c] */ ecx = (u32)((u32)(ebp + 0xfffffdc4u));
  /* 006254ec jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254f1(CPU *c) {
  NATIVE_HOOK(0x6254f1u) REGS; LOADALL;
L_006254f1:;
  /* 006254f1 lea ecx, [ebp - 0x354] */ ecx = (u32)((u32)(ebp + 0xfffffcacu));
  /* 006254f7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006254fc(CPU *c) {
  NATIVE_HOOK(0x6254fcu) REGS; LOADALL;
L_006254fc:;
  /* 006254fc lea ecx, [ebp - 0x274] */ ecx = (u32)((u32)(ebp + 0xfffffd8cu));
  /* 00625502 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625507(CPU *c) {
  NATIVE_HOOK(0x625507u) REGS; LOADALL;
L_00625507:;
  /* 00625507 lea ecx, [ebp - 0x140] */ ecx = (u32)((u32)(ebp + 0xfffffec0u));
  /* 0062550d jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625512(CPU *c) {
  NATIVE_HOOK(0x625512u) REGS; LOADALL;
L_00625512:;
  /* 00625512 lea ecx, [ebp - 0x2ac] */ ecx = (u32)((u32)(ebp + 0xfffffd54u));
  /* 00625518 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062551d(CPU *c) {
  NATIVE_HOOK(0x62551du) REGS; LOADALL;
L_0062551d:;
  /* 0062551d lea ecx, [ebp - 0x38c] */ ecx = (u32)((u32)(ebp + 0xfffffc74u));
  /* 00625523 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625528(CPU *c) {
  NATIVE_HOOK(0x625528u) REGS; LOADALL;
L_00625528:;
  /* 00625528 lea ecx, [ebp - 0x15c] */ ecx = (u32)((u32)(ebp + 0xfffffea4u));
  /* 0062552e jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625533(CPU *c) {
  NATIVE_HOOK(0x625533u) REGS; LOADALL;
L_00625533:;
  /* 00625533 lea ecx, [ebp - 0x178] */ ecx = (u32)((u32)(ebp + 0xfffffe88u));
  /* 00625539 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062553e(CPU *c) {
  NATIVE_HOOK(0x62553eu) REGS; LOADALL;
L_0062553e:;
  /* 0062553e lea ecx, [ebp - 0x1b0] */ ecx = (u32)((u32)(ebp + 0xfffffe50u));
  /* 00625544 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625549(CPU *c) {
  NATIVE_HOOK(0x625549u) REGS; LOADALL;
L_00625549:;
  /* 00625549 lea ecx, [ebp - 0x1e8] */ ecx = (u32)((u32)(ebp + 0xfffffe18u));
  /* 0062554f jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625554(CPU *c) {
  NATIVE_HOOK(0x625554u) REGS; LOADALL;
L_00625554:;
  /* 00625554 lea ecx, [ebp - 0x220] */ ecx = (u32)((u32)(ebp + 0xfffffde0u));
  /* 0062555a jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062555f(CPU *c) {
  NATIVE_HOOK(0x62555fu) REGS; LOADALL;
L_0062555f:;
  /* 0062555f lea ecx, [ebp - 0x258] */ ecx = (u32)((u32)(ebp + 0xfffffda8u));
  /* 00625565 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062556a(CPU *c) {
  NATIVE_HOOK(0x62556au) REGS; LOADALL;
L_0062556a:;
  /* 0062556a lea ecx, [ebp - 0x290] */ ecx = (u32)((u32)(ebp + 0xfffffd70u));
  /* 00625570 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625575(CPU *c) {
  NATIVE_HOOK(0x625575u) REGS; LOADALL;
L_00625575:;
  /* 00625575 lea ecx, [ebp - 0x2c8] */ ecx = (u32)((u32)(ebp + 0xfffffd38u));
  /* 0062557b jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625580(CPU *c) {
  NATIVE_HOOK(0x625580u) REGS; LOADALL;
L_00625580:;
  /* 00625580 lea ecx, [ebp - 0x300] */ ecx = (u32)((u32)(ebp + 0xfffffd00u));
  /* 00625586 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_0062558b(CPU *c) {
  NATIVE_HOOK(0x62558bu) REGS; LOADALL;
L_0062558b:;
  /* 0062558b lea ecx, [ebp - 0x338] */ ecx = (u32)((u32)(ebp + 0xfffffcc8u));
  /* 00625591 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_00625596(CPU *c) {
  NATIVE_HOOK(0x625596u) REGS; LOADALL;
L_00625596:;
  /* 00625596 lea ecx, [ebp - 0x370] */ ecx = (u32)((u32)(ebp + 0xfffffc90u));
  /* 0062559c jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006255a1(CPU *c) {
  NATIVE_HOOK(0x6255a1u) REGS; LOADALL;
L_006255a1:;
  /* 006255a1 lea ecx, [ebp - 0x48] */ ecx = (u32)((u32)(ebp + 0xffffffb8u));
  /* 006255a4 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006255a9(CPU *c) {
  NATIVE_HOOK(0x6255a9u) REGS; LOADALL;
L_006255a9:;
  /* 006255a9 lea ecx, [ebp - 0x3a8] */ ecx = (u32)((u32)(ebp + 0xfffffc58u));
  /* 006255af jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006255b4(CPU *c) {
  NATIVE_HOOK(0x6255b4u) REGS; LOADALL;
L_006255b4:;
  /* 006255b4 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 006255b7 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006255bc(CPU *c) {
  NATIVE_HOOK(0x6255bcu) REGS; LOADALL;
L_006255bc:;
  /* 006255bc lea ecx, [ebp - 0x3e0] */ ecx = (u32)((u32)(ebp + 0xfffffc20u));
  /* 006255c2 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}

void F_006255c7(CPU *c) {
  NATIVE_HOOK(0x6255c7u) REGS; LOADALL;
  goto L_006255c7;
L_005fee2a:;
  /* 005fee2a jmp dword ptr [0x62e290] */ { const u32 m_ = (u32)(0x62e290u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
L_006255c7:;
  /* 006255c7 mov eax, 0x66cad0 */ { eax = (u32)(0x66cad0u); }
  /* 006255cc jmp 0x5fee2a */ goto L_005fee2a;
}

void F_006255e0(CPU *c) {
  NATIVE_HOOK(0x6255e0u) REGS; LOADALL;
L_006255e0:;
  /* 006255e0 lea ecx, [ebp - 0x80] */ ecx = (u32)((u32)(ebp + 0xffffff80u));
  /* 006255e3 jmp 0x43ee60 */ SAVEALL; F_0043ee60(c); return;
}
