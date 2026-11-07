#include "funcs.h"

void F_00628fa0(CPU *c) {
  NATIVE_HOOK(0x628fa0u) REGS; LOADALL;
L_00628fa0:;
  /* 00628fa0 mov dword ptr [0x7a7150], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7150u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628faa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628fb0(CPU *c) {
  NATIVE_HOOK(0x628fb0u) REGS; LOADALL;
L_00628fb0:;
  /* 00628fb0 mov dword ptr [0x7a7154], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7154u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628fba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628fc0(CPU *c) {
  NATIVE_HOOK(0x628fc0u) REGS; LOADALL;
L_00628fc0:;
  /* 00628fc0 mov dword ptr [0x7a7158], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7158u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628fca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628fd0(CPU *c) {
  NATIVE_HOOK(0x628fd0u) REGS; LOADALL;
L_00628fd0:;
  /* 00628fd0 mov dword ptr [0x7a715c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a715cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628fda ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628fe0(CPU *c) {
  NATIVE_HOOK(0x628fe0u) REGS; LOADALL;
L_00628fe0:;
  /* 00628fe0 mov dword ptr [0x7a7160], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7160u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00628fea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00628ff0(CPU *c) {
  NATIVE_HOOK(0x628ff0u) REGS; LOADALL;
L_00628ff0:;
  /* 00628ff0 mov dword ptr [0x7a7164], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7164u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00628ffa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629000(CPU *c) {
  NATIVE_HOOK(0x629000u) REGS; LOADALL;
L_00629000:;
  /* 00629000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629003 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629004 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629005 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629008 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062900a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062900d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062900f push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00629011 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629018 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062901b push 0x644ba8 */ { u32 v_ = 0x644ba8u; esp -= 4; M32(esp) = v_; }
  /* 00629020 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629023 call 0x404420 */ esp -= 4; M32(esp) = 0x629028u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629023u); RETCHK(0x629028u, 0x629023u); LOADALL;
  /* 00629028 mov esi, 0x7a7168 */ { esi = (u32)(0x7a7168u); }
  /* 0062902d call 0x4307a0 */ esp -= 4; M32(esp) = 0x629032u; SAVEALL; F_004307a0(c); ABI_CHECK(0x4307a0u, 0x62902du); RETCHK(0x629032u, 0x62902du); LOADALL;
  /* 00629032 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629033 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629035 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629036 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629040(CPU *c) {
  NATIVE_HOOK(0x629040u) REGS; LOADALL;
L_00629040:;
  /* 00629040 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00629042 push 0x64343c */ { u32 v_ = 0x64343cu; esp -= 4; M32(esp) = v_; }
  /* 00629047 mov ecx, 0x68a480 */ { ecx = (u32)(0x68a480u); }
  /* 0062904c call 0x404420 */ esp -= 4; M32(esp) = 0x629051u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62904cu); RETCHK(0x629051u, 0x62904cu); LOADALL;
  /* 00629051 push 0x62c0e0 */ { u32 v_ = 0x62c0e0u; esp -= 4; M32(esp) = v_; }
  /* 00629056 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62905bu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629056u); RETCHK(0x62905bu, 0x629056u); LOADALL;
  /* 0062905b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062905c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629060(CPU *c) {
  NATIVE_HOOK(0x629060u) REGS; LOADALL;
L_00629060:;
  /* 00629060 mov dword ptr [0x7a716c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a716cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062906a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629070(CPU *c) {
  NATIVE_HOOK(0x629070u) REGS; LOADALL;
L_00629070:;
  /* 00629070 mov dword ptr [0x7a7170], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7170u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062907a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629080(CPU *c) {
  NATIVE_HOOK(0x629080u) REGS; LOADALL;
L_00629080:;
  /* 00629080 mov dword ptr [0x7a7174], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7174u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062908a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629090(CPU *c) {
  NATIVE_HOOK(0x629090u) REGS; LOADALL;
L_00629090:;
  /* 00629090 mov dword ptr [0x7a7178], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7178u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062909a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006290a0(CPU *c) {
  NATIVE_HOOK(0x6290a0u) REGS; LOADALL;
L_006290a0:;
  /* 006290a0 mov dword ptr [0x7a717c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a717cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 006290aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006290b0(CPU *c) {
  NATIVE_HOOK(0x6290b0u) REGS; LOADALL;
L_006290b0:;
  /* 006290b0 mov dword ptr [0x7a7180], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7180u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006290ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006290c0(CPU *c) {
  NATIVE_HOOK(0x6290c0u) REGS; LOADALL;
L_006290c0:;
  /* 006290c0 mov dword ptr [0x7a7184], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7184u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006290ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006290d0(CPU *c) {
  NATIVE_HOOK(0x6290d0u) REGS; LOADALL;
L_006290d0:;
  /* 006290d0 mov dword ptr [0x7a7188], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7188u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006290da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006290e0(CPU *c) {
  NATIVE_HOOK(0x6290e0u) REGS; LOADALL;
L_006290e0:;
  /* 006290e0 mov dword ptr [0x7a718c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a718cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 006290ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006290f0(CPU *c) {
  NATIVE_HOOK(0x6290f0u) REGS; LOADALL;
L_006290f0:;
  /* 006290f0 mov dword ptr [0x7a7190], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7190u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006290fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629100(CPU *c) {
  NATIVE_HOOK(0x629100u) REGS; LOADALL;
L_00629100:;
  /* 00629100 mov dword ptr [0x7a7194], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7194u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062910a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629110(CPU *c) {
  NATIVE_HOOK(0x629110u) REGS; LOADALL;
L_00629110:;
  /* 00629110 mov dword ptr [0x7a7198], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7198u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062911a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629120(CPU *c) {
  NATIVE_HOOK(0x629120u) REGS; LOADALL;
L_00629120:;
  /* 00629120 mov dword ptr [0x7a719c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a719cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062912a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629130(CPU *c) {
  NATIVE_HOOK(0x629130u) REGS; LOADALL;
L_00629130:;
  /* 00629130 mov dword ptr [0x7a71a0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71a0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062913a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629140(CPU *c) {
  NATIVE_HOOK(0x629140u) REGS; LOADALL;
L_00629140:;
  /* 00629140 mov dword ptr [0x7a71a4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71a4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062914a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629150(CPU *c) {
  NATIVE_HOOK(0x629150u) REGS; LOADALL;
L_00629150:;
  /* 00629150 mov dword ptr [0x7a71a8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71a8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062915a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629160(CPU *c) {
  NATIVE_HOOK(0x629160u) REGS; LOADALL;
L_00629160:;
  /* 00629160 mov dword ptr [0x7a71ac], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71acu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062916a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629170(CPU *c) {
  NATIVE_HOOK(0x629170u) REGS; LOADALL;
L_00629170:;
  /* 00629170 mov dword ptr [0x7a71b0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71b0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062917a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629180(CPU *c) {
  NATIVE_HOOK(0x629180u) REGS; LOADALL;
L_00629180:;
  /* 00629180 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629181 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629183 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629184 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629185 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629188 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062918a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062918d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062918f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00629191 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629198 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062919b push 0x645468 */ { u32 v_ = 0x645468u; esp -= 4; M32(esp) = v_; }
  /* 006291a0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006291a3 call 0x404420 */ esp -= 4; M32(esp) = 0x6291a8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x6291a3u); RETCHK(0x6291a8u, 0x6291a3u); LOADALL;
  /* 006291a8 mov esi, 0x7a71b4 */ { esi = (u32)(0x7a71b4u); }
  /* 006291ad call 0x434aa0 */ esp -= 4; M32(esp) = 0x6291b2u; SAVEALL; F_00434aa0(c); ABI_CHECK(0x434aa0u, 0x6291adu); RETCHK(0x6291b2u, 0x6291adu); LOADALL;
  /* 006291b2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006291b3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006291b5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006291b6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006291c0(CPU *c) {
  NATIVE_HOOK(0x6291c0u) REGS; LOADALL;
L_006291c0:;
  /* 006291c0 mov dword ptr [0x7a71b8], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71b8u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006291ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006291d0(CPU *c) {
  NATIVE_HOOK(0x6291d0u) REGS; LOADALL;
L_006291d0:;
  /* 006291d0 mov dword ptr [0x7a71bc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71bcu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006291da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006291e0(CPU *c) {
  NATIVE_HOOK(0x6291e0u) REGS; LOADALL;
L_006291e0:;
  /* 006291e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006291e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 006291e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006291e4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006291e5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006291e8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 006291ea mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 006291ed xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006291ef push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 006291f1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 006291f8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 006291fb push 0x645714 */ { u32 v_ = 0x645714u; esp -= 4; M32(esp) = v_; }
  /* 00629200 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629203 call 0x404420 */ esp -= 4; M32(esp) = 0x629208u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629203u); RETCHK(0x629208u, 0x629203u); LOADALL;
  /* 00629208 mov esi, 0x7a71c0 */ { esi = (u32)(0x7a71c0u); }
  /* 0062920d call 0x436f80 */ esp -= 4; M32(esp) = 0x629212u; SAVEALL; F_00436f80(c); ABI_CHECK(0x436f80u, 0x62920du); RETCHK(0x629212u, 0x62920du); LOADALL;
  /* 00629212 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629213 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629215 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629216 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629220(CPU *c) {
  NATIVE_HOOK(0x629220u) REGS; LOADALL;
L_00629220:;
  /* 00629220 mov dword ptr [0x7a71c4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71c4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062922a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629230(CPU *c) {
  NATIVE_HOOK(0x629230u) REGS; LOADALL;
L_00629230:;
  /* 00629230 mov dword ptr [0x7a71c8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71c8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062923a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629240(CPU *c) {
  NATIVE_HOOK(0x629240u) REGS; LOADALL;
L_00629240:;
  /* 00629240 mov dword ptr [0x7a71cc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71ccu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062924a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629250(CPU *c) {
  NATIVE_HOOK(0x629250u) REGS; LOADALL;
L_00629250:;
  /* 00629250 mov dword ptr [0x7a71d0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71d0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062925a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629260(CPU *c) {
  NATIVE_HOOK(0x629260u) REGS; LOADALL;
L_00629260:;
  /* 00629260 push 0x62c120 */ { u32 v_ = 0x62c120u; esp -= 4; M32(esp) = v_; }
  /* 00629265 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62926au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629265u); RETCHK(0x62926au, 0x629265u); LOADALL;
  /* 0062926a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062926b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629270(CPU *c) {
  NATIVE_HOOK(0x629270u) REGS; LOADALL;
L_00629270:;
  /* 00629270 mov dword ptr [0x7a71d4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71d4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062927a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629280(CPU *c) {
  NATIVE_HOOK(0x629280u) REGS; LOADALL;
L_00629280:;
  /* 00629280 mov dword ptr [0x7a71d8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71d8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062928a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629290(CPU *c) {
  NATIVE_HOOK(0x629290u) REGS; LOADALL;
L_00629290:;
  /* 00629290 mov dword ptr [0x7a71dc], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71dcu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062929a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006292a0(CPU *c) {
  NATIVE_HOOK(0x6292a0u) REGS; LOADALL;
L_006292a0:;
  /* 006292a0 mov dword ptr [0x7a71e0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71e0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006292aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006292b0(CPU *c) {
  NATIVE_HOOK(0x6292b0u) REGS; LOADALL;
L_006292b0:;
  /* 006292b0 mov dword ptr [0x7a71e4], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71e4u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006292ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006292c0(CPU *c) {
  NATIVE_HOOK(0x6292c0u) REGS; LOADALL;
L_006292c0:;
  /* 006292c0 mov dword ptr [0x7a71e8], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71e8u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006292ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006292d0(CPU *c) {
  NATIVE_HOOK(0x6292d0u) REGS; LOADALL;
L_006292d0:;
  /* 006292d0 mov dword ptr [0x7a71ec], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71ecu); M32(m_) = (u32)(0x42652ee0u); }
  /* 006292da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006292e0(CPU *c) {
  NATIVE_HOOK(0x6292e0u) REGS; LOADALL;
L_006292e0:;
  /* 006292e0 mov dword ptr [0x7a71f0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71f0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006292ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006292f0(CPU *c) {
  NATIVE_HOOK(0x6292f0u) REGS; LOADALL;
L_006292f0:;
  /* 006292f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006292f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 006292f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006292f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006292f5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006292f8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 006292fa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 006292fd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006292ff push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00629301 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629308 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062930b push 0x646ef0 */ { u32 v_ = 0x646ef0u; esp -= 4; M32(esp) = v_; }
  /* 00629310 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629313 call 0x404420 */ esp -= 4; M32(esp) = 0x629318u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629313u); RETCHK(0x629318u, 0x629313u); LOADALL;
  /* 00629318 mov esi, 0x7a71f4 */ { esi = (u32)(0x7a71f4u); }
  /* 0062931d call 0x44b710 */ esp -= 4; M32(esp) = 0x629322u; SAVEALL; F_0044b710(c); ABI_CHECK(0x44b710u, 0x62931du); RETCHK(0x629322u, 0x62931du); LOADALL;
  /* 00629322 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629323 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629325 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629326 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629330(CPU *c) {
  NATIVE_HOOK(0x629330u) REGS; LOADALL;
L_00629330:;
  /* 00629330 mov dword ptr [0x7a71f8], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a71f8u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062933a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629340(CPU *c) {
  NATIVE_HOOK(0x629340u) REGS; LOADALL;
L_00629340:;
  /* 00629340 mov dword ptr [0x7a71fc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a71fcu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062934a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629350(CPU *c) {
  NATIVE_HOOK(0x629350u) REGS; LOADALL;
L_00629350:;
  /* 00629350 mov dword ptr [0x7a7200], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7200u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062935a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629360(CPU *c) {
  NATIVE_HOOK(0x629360u) REGS; LOADALL;
L_00629360:;
  /* 00629360 mov dword ptr [0x7a7204], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7204u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062936a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629370(CPU *c) {
  NATIVE_HOOK(0x629370u) REGS; LOADALL;
L_00629370:;
  /* 00629370 mov dword ptr [0x7a7208], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7208u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062937a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629380(CPU *c) {
  NATIVE_HOOK(0x629380u) REGS; LOADALL;
L_00629380:;
  /* 00629380 mov dword ptr [0x7a720c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a720cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062938a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629390(CPU *c) {
  NATIVE_HOOK(0x629390u) REGS; LOADALL;
L_00629390:;
  /* 00629390 mov dword ptr [0x7a7210], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7210u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062939a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006293a0(CPU *c) {
  NATIVE_HOOK(0x6293a0u) REGS; LOADALL;
L_006293a0:;
  /* 006293a0 mov dword ptr [0x7a7214], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7214u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006293aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006293b0(CPU *c) {
  NATIVE_HOOK(0x6293b0u) REGS; LOADALL;
L_006293b0:;
  /* 006293b0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006293b1 mov esi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); esi = (u32)(M32(m_)); }
  /* 006293b7 push 0xc4 */ { u32 v_ = 0xc4u; esp -= 4; M32(esp) = v_; }
  /* 006293bc push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 006293c1 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x6293c3u; SAVEALL; call_ind(c, t_); RETCHK(0x6293c3u, 0x6293c1u); LOADALL; }
  /* 006293c3 push 0xc4 */ { u32 v_ = 0xc4u; esp -= 4; M32(esp) = v_; }
  /* 006293c8 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 006293cd mov dword ptr [0x7a721c], eax */ { const u32 m_ = (u32)(0x7a721cu); M32(m_) = (u32)(eax); }
  /* 006293d2 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x6293d4u; SAVEALL; call_ind(c, t_); RETCHK(0x6293d4u, 0x6293d2u); LOADALL; }
  /* 006293d4 push 0xc4 */ { u32 v_ = 0xc4u; esp -= 4; M32(esp) = v_; }
  /* 006293d9 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 006293de mov dword ptr [0x7a7220], eax */ { const u32 m_ = (u32)(0x7a7220u); M32(m_) = (u32)(eax); }
  /* 006293e3 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x6293e5u; SAVEALL; call_ind(c, t_); RETCHK(0x6293e5u, 0x6293e3u); LOADALL; }
  /* 006293e5 mov dword ptr [0x7a7224], eax */ { const u32 m_ = (u32)(0x7a7224u); M32(m_) = (u32)(eax); }
  /* 006293ea pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006293eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006293f0(CPU *c) {
  NATIVE_HOOK(0x6293f0u) REGS; LOADALL;
L_006293f0:;
  /* 006293f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006293f1 mov esi, dword ptr [0x62e21c] */ { const u32 m_ = (u32)(0x62e21cu); esi = (u32)(M32(m_)); }
  /* 006293f7 push 0xc5 */ { u32 v_ = 0xc5u; esp -= 4; M32(esp) = v_; }
  /* 006293fc push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 00629401 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x629403u; SAVEALL; call_ind(c, t_); RETCHK(0x629403u, 0x629401u); LOADALL; }
  /* 00629403 push 0xc6 */ { u32 v_ = 0xc6u; esp -= 4; M32(esp) = v_; }
  /* 00629408 push 0x642760 */ { u32 v_ = 0x642760u; esp -= 4; M32(esp) = v_; }
  /* 0062940d mov dword ptr [0x7a7228], eax */ { const u32 m_ = (u32)(0x7a7228u); M32(m_) = (u32)(eax); }
  /* 00629412 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x629414u; SAVEALL; call_ind(c, t_); RETCHK(0x629414u, 0x629412u); LOADALL; }
  /* 00629414 mov dword ptr [0x7a722c], eax */ { const u32 m_ = (u32)(0x7a722cu); M32(m_) = (u32)(eax); }
  /* 00629419 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0062941a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629420(CPU *c) {
  NATIVE_HOOK(0x629420u) REGS; LOADALL;
L_00629420:;
  /* 00629420 fild dword ptr [0x6856a8] */ { const u32 m_ = (u32)(0x6856a8u); FPUSH((double)(s32)M32(m_)); }
  /* 00629426 fdivr dword ptr [0x656d80] */ { const u32 m_ = (u32)(0x656d80u); ST(0) = FR((double)MF32(m_) / ST(0)); }
  /* 0062942c fstp dword ptr [0x7a7218] */ { const u32 m_ = (u32)(0x7a7218u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00629432 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629440(CPU *c) {
  NATIVE_HOOK(0x629440u) REGS; LOADALL;
L_00629440:;
  /* 00629440 mov dword ptr [0x7a7230], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7230u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062944a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629450(CPU *c) {
  NATIVE_HOOK(0x629450u) REGS; LOADALL;
L_00629450:;
  /* 00629450 mov dword ptr [0x7a7234], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7234u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062945a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629460(CPU *c) {
  NATIVE_HOOK(0x629460u) REGS; LOADALL;
L_00629460:;
  /* 00629460 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00629462 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00629467 mov ecx, 0x68a4b8 */ { ecx = (u32)(0x68a4b8u); }
  /* 0062946c call 0x404420 */ esp -= 4; M32(esp) = 0x629471u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x62946cu); RETCHK(0x629471u, 0x62946cu); LOADALL;
  /* 00629471 push 0x62c180 */ { u32 v_ = 0x62c180u; esp -= 4; M32(esp) = v_; }
  /* 00629476 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62947bu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629476u); RETCHK(0x62947bu, 0x629476u); LOADALL;
  /* 0062947b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062947c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629480(CPU *c) {
  NATIVE_HOOK(0x629480u) REGS; LOADALL;
L_00629480:;
  /* 00629480 mov dword ptr [0x7a7238], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7238u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062948a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629490(CPU *c) {
  NATIVE_HOOK(0x629490u) REGS; LOADALL;
L_00629490:;
  /* 00629490 mov dword ptr [0x7a723c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a723cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062949a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006294a0(CPU *c) {
  NATIVE_HOOK(0x6294a0u) REGS; LOADALL;
L_006294a0:;
  /* 006294a0 mov dword ptr [0x7a7240], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7240u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006294aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006294b0(CPU *c) {
  NATIVE_HOOK(0x6294b0u) REGS; LOADALL;
L_006294b0:;
  /* 006294b0 mov dword ptr [0x7a7244], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7244u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006294ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006294c0(CPU *c) {
  NATIVE_HOOK(0x6294c0u) REGS; LOADALL;
L_006294c0:;
  /* 006294c0 mov dword ptr [0x7a7248], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7248u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006294ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006294d0(CPU *c) {
  NATIVE_HOOK(0x6294d0u) REGS; LOADALL;
L_006294d0:;
  /* 006294d0 mov dword ptr [0x7a724c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a724cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006294da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006294e0(CPU *c) {
  NATIVE_HOOK(0x6294e0u) REGS; LOADALL;
L_006294e0:;
  /* 006294e0 push 0x62c1b0 */ { u32 v_ = 0x62c1b0u; esp -= 4; M32(esp) = v_; }
  /* 006294e5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x6294eau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x6294e5u); RETCHK(0x6294eau, 0x6294e5u); LOADALL;
  /* 006294ea pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006294eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006294f0(CPU *c) {
  NATIVE_HOOK(0x6294f0u) REGS; LOADALL;
L_006294f0:;
  /* 006294f0 push 0x62c1f0 */ { u32 v_ = 0x62c1f0u; esp -= 4; M32(esp) = v_; }
  /* 006294f5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x6294fau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x6294f5u); RETCHK(0x6294fau, 0x6294f5u); LOADALL;
  /* 006294fa pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006294fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629500(CPU *c) {
  NATIVE_HOOK(0x629500u) REGS; LOADALL;
L_00629500:;
  /* 00629500 mov dword ptr [0x7a7270], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7270u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062950a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629510(CPU *c) {
  NATIVE_HOOK(0x629510u) REGS; LOADALL;
L_00629510:;
  /* 00629510 mov dword ptr [0x7a7274], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7274u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062951a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629520(CPU *c) {
  NATIVE_HOOK(0x629520u) REGS; LOADALL;
L_00629520:;
  /* 00629520 mov dword ptr [0x7a7278], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7278u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062952a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629530(CPU *c) {
  NATIVE_HOOK(0x629530u) REGS; LOADALL;
L_00629530:;
  /* 00629530 mov dword ptr [0x7a727c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a727cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062953a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629540(CPU *c) {
  NATIVE_HOOK(0x629540u) REGS; LOADALL;
L_00629540:;
  /* 00629540 push 0x7a7280 */ { u32 v_ = 0x7a7280u; esp -= 4; M32(esp) = v_; }
  /* 00629545 call 0x45c360 */ esp -= 4; M32(esp) = 0x62954au; SAVEALL; F_0045c360(c); ABI_CHECK(0x45c360u, 0x629545u); RETCHK(0x62954au, 0x629545u); LOADALL;
  /* 0062954a push 0x62c230 */ { u32 v_ = 0x62c230u; esp -= 4; M32(esp) = v_; }
  /* 0062954f call 0x5fe916 */ esp -= 4; M32(esp) = 0x629554u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62954fu); RETCHK(0x629554u, 0x62954fu); LOADALL;
  /* 00629554 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629555 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629560(CPU *c) {
  NATIVE_HOOK(0x629560u) REGS; LOADALL;
L_00629560:;
  /* 00629560 mov dword ptr [0x7a72f8], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a72f8u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062956a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629570(CPU *c) {
  NATIVE_HOOK(0x629570u) REGS; LOADALL;
L_00629570:;
  /* 00629570 mov dword ptr [0x7a72fc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a72fcu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062957a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629580(CPU *c) {
  NATIVE_HOOK(0x629580u) REGS; LOADALL;
L_00629580:;
  /* 00629580 mov dword ptr [0x7a7300], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7300u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062958a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629590(CPU *c) {
  NATIVE_HOOK(0x629590u) REGS; LOADALL;
L_00629590:;
  /* 00629590 mov dword ptr [0x7a7304], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7304u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062959a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006295a0(CPU *c) {
  NATIVE_HOOK(0x6295a0u) REGS; LOADALL;
L_006295a0:;
  /* 006295a0 mov dword ptr [0x7a7308], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7308u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006295aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006295b0(CPU *c) {
  NATIVE_HOOK(0x6295b0u) REGS; LOADALL;
L_006295b0:;
  /* 006295b0 mov dword ptr [0x7a730c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a730cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006295ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006295c0(CPU *c) {
  NATIVE_HOOK(0x6295c0u) REGS; LOADALL;
L_006295c0:;
  /* 006295c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006295c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 006295c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006295c4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006295c5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006295c8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 006295ca mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 006295cd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006295cf push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 006295d1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 006295d8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 006295db push 0x648cd4 */ { u32 v_ = 0x648cd4u; esp -= 4; M32(esp) = v_; }
  /* 006295e0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006295e3 call 0x404420 */ esp -= 4; M32(esp) = 0x6295e8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x6295e3u); RETCHK(0x6295e8u, 0x6295e3u); LOADALL;
  /* 006295e8 mov esi, 0x7a7310 */ { esi = (u32)(0x7a7310u); }
  /* 006295ed call 0x461160 */ esp -= 4; M32(esp) = 0x6295f2u; SAVEALL; F_00461160(c); ABI_CHECK(0x461160u, 0x6295edu); RETCHK(0x6295f2u, 0x6295edu); LOADALL;
  /* 006295f2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006295f3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006295f5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006295f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629600(CPU *c) {
  NATIVE_HOOK(0x629600u) REGS; LOADALL;
L_00629600:;
  /* 00629600 mov dword ptr [0x7a7314], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7314u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062960a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629610(CPU *c) {
  NATIVE_HOOK(0x629610u) REGS; LOADALL;
L_00629610:;
  /* 00629610 mov dword ptr [0x7a7318], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7318u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062961a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629620(CPU *c) {
  NATIVE_HOOK(0x629620u) REGS; LOADALL;
L_00629620:;
  /* 00629620 push 0x62c270 */ { u32 v_ = 0x62c270u; esp -= 4; M32(esp) = v_; }
  /* 00629625 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62962au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629625u); RETCHK(0x62962au, 0x629625u); LOADALL;
  /* 0062962a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062962b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629630(CPU *c) {
  NATIVE_HOOK(0x629630u) REGS; LOADALL;
L_00629630:;
  /* 00629630 push 0x62c2c0 */ { u32 v_ = 0x62c2c0u; esp -= 4; M32(esp) = v_; }
  /* 00629635 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62963au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629635u); RETCHK(0x62963au, 0x629635u); LOADALL;
  /* 0062963a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062963b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629640(CPU *c) {
  NATIVE_HOOK(0x629640u) REGS; LOADALL;
L_00629640:;
  /* 00629640 mov dword ptr [0x7a733c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a733cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062964a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629650(CPU *c) {
  NATIVE_HOOK(0x629650u) REGS; LOADALL;
L_00629650:;
  /* 00629650 mov dword ptr [0x7a7340], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7340u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062965a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629660(CPU *c) {
  NATIVE_HOOK(0x629660u) REGS; LOADALL;
L_00629660:;
  /* 00629660 mov dword ptr [0x7a7344], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7344u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062966a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629670(CPU *c) {
  NATIVE_HOOK(0x629670u) REGS; LOADALL;
L_00629670:;
  /* 00629670 mov dword ptr [0x7a7348], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7348u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062967a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629680(CPU *c) {
  NATIVE_HOOK(0x629680u) REGS; LOADALL;
L_00629680:;
  /* 00629680 mov dword ptr [0x7a734c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a734cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062968a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629690(CPU *c) {
  NATIVE_HOOK(0x629690u) REGS; LOADALL;
L_00629690:;
  /* 00629690 mov dword ptr [0x7a7350], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7350u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062969a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006296a0(CPU *c) {
  NATIVE_HOOK(0x6296a0u) REGS; LOADALL;
L_006296a0:;
  /* 006296a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006296a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 006296a3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006296a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006296a5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006296a8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 006296aa mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 006296ad xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006296af push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 006296b1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 006296b8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 006296bb push 0x649434 */ { u32 v_ = 0x649434u; esp -= 4; M32(esp) = v_; }
  /* 006296c0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006296c3 call 0x404420 */ esp -= 4; M32(esp) = 0x6296c8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x6296c3u); RETCHK(0x6296c8u, 0x6296c3u); LOADALL;
  /* 006296c8 mov esi, 0x7a7354 */ { esi = (u32)(0x7a7354u); }
  /* 006296cd call 0x469710 */ esp -= 4; M32(esp) = 0x6296d2u; SAVEALL; F_00469710(c); ABI_CHECK(0x469710u, 0x6296cdu); RETCHK(0x6296d2u, 0x6296cdu); LOADALL;
  /* 006296d2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006296d3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006296d5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006296d6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006296e0(CPU *c) {
  NATIVE_HOOK(0x6296e0u) REGS; LOADALL;
L_006296e0:;
  /* 006296e0 mov dword ptr [0x7a7358], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7358u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006296ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006296f0(CPU *c) {
  NATIVE_HOOK(0x6296f0u) REGS; LOADALL;
L_006296f0:;
  /* 006296f0 mov dword ptr [0x7a735c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a735cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006296fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629700(CPU *c) {
  NATIVE_HOOK(0x629700u) REGS; LOADALL;
L_00629700:;
  /* 00629700 mov dword ptr [0x7a7360], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7360u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062970a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629710(CPU *c) {
  NATIVE_HOOK(0x629710u) REGS; LOADALL;
L_00629710:;
  /* 00629710 mov dword ptr [0x7a7364], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7364u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062971a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629720(CPU *c) {
  NATIVE_HOOK(0x629720u) REGS; LOADALL;
L_00629720:;
  /* 00629720 mov dword ptr [0x7a7368], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7368u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062972a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629730(CPU *c) {
  NATIVE_HOOK(0x629730u) REGS; LOADALL;
L_00629730:;
  /* 00629730 mov dword ptr [0x7a736c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a736cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062973a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629740(CPU *c) {
  NATIVE_HOOK(0x629740u) REGS; LOADALL;
L_00629740:;
  /* 00629740 push 0x7a7370 */ { u32 v_ = 0x7a7370u; esp -= 4; M32(esp) = v_; }
  /* 00629745 call 0x470ee0 */ esp -= 4; M32(esp) = 0x62974au; SAVEALL; F_00470ee0(c); ABI_CHECK(0x470ee0u, 0x629745u); RETCHK(0x62974au, 0x629745u); LOADALL;
  /* 0062974a push 0x62c300 */ { u32 v_ = 0x62c300u; esp -= 4; M32(esp) = v_; }
  /* 0062974f call 0x5fe916 */ esp -= 4; M32(esp) = 0x629754u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62974fu); RETCHK(0x629754u, 0x62974fu); LOADALL;
  /* 00629754 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629755 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629760(CPU *c) {
  NATIVE_HOOK(0x629760u) REGS; LOADALL;
L_00629760:;
  /* 00629760 mov dword ptr [0x7a73a0], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a73a0u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062976a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629770(CPU *c) {
  NATIVE_HOOK(0x629770u) REGS; LOADALL;
L_00629770:;
  /* 00629770 mov dword ptr [0x7a73a4], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a73a4u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062977a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629780(CPU *c) {
  NATIVE_HOOK(0x629780u) REGS; LOADALL;
L_00629780:;
  /* 00629780 push 0x7a73a8 */ { u32 v_ = 0x7a73a8u; esp -= 4; M32(esp) = v_; }
  /* 00629785 call 0x471a50 */ esp -= 4; M32(esp) = 0x62978au; SAVEALL; F_00471a50(c); ABI_CHECK(0x471a50u, 0x629785u); RETCHK(0x62978au, 0x629785u); LOADALL;
  /* 0062978a push 0x62c340 */ { u32 v_ = 0x62c340u; esp -= 4; M32(esp) = v_; }
  /* 0062978f call 0x5fe916 */ esp -= 4; M32(esp) = 0x629794u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x62978fu); RETCHK(0x629794u, 0x62978fu); LOADALL;
  /* 00629794 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629795 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006297a0(CPU *c) {
  NATIVE_HOOK(0x6297a0u) REGS; LOADALL;
L_006297a0:;
  /* 006297a0 mov dword ptr [0x7a7c98], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7c98u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006297aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006297b0(CPU *c) {
  NATIVE_HOOK(0x6297b0u) REGS; LOADALL;
L_006297b0:;
  /* 006297b0 mov dword ptr [0x7a7c9c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7c9cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006297ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006297c0(CPU *c) {
  NATIVE_HOOK(0x6297c0u) REGS; LOADALL;
L_006297c0:;
  /* 006297c0 mov dword ptr [0x7a7ca0], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7ca0u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006297ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006297d0(CPU *c) {
  NATIVE_HOOK(0x6297d0u) REGS; LOADALL;
L_006297d0:;
  /* 006297d0 mov dword ptr [0x7a7ca4], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7ca4u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006297da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006297e0(CPU *c) {
  NATIVE_HOOK(0x6297e0u) REGS; LOADALL;
L_006297e0:;
  /* 006297e0 mov eax, 0x7a7ca8 */ { eax = (u32)(0x7a7ca8u); }
  /* 006297e5 call 0x483060 */ esp -= 4; M32(esp) = 0x6297eau; SAVEALL; F_00483060(c); ABI_CHECK(0x483060u, 0x6297e5u); RETCHK(0x6297eau, 0x6297e5u); LOADALL;
  /* 006297ea push 0x62c350 */ { u32 v_ = 0x62c350u; esp -= 4; M32(esp) = v_; }
  /* 006297ef call 0x5fe916 */ esp -= 4; M32(esp) = 0x6297f4u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x6297efu); RETCHK(0x6297f4u, 0x6297efu); LOADALL;
  /* 006297f4 pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006297f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629800(CPU *c) {
  NATIVE_HOOK(0x629800u) REGS; LOADALL;
L_00629800:;
  /* 00629800 mov dword ptr [0x7a7d20], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d20u); M32(m_) = (u32)(0x42652ee0u); }
  /* 0062980a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629810(CPU *c) {
  NATIVE_HOOK(0x629810u) REGS; LOADALL;
L_00629810:;
  /* 00629810 mov dword ptr [0x7a7d24], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d24u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 0062981a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629820(CPU *c) {
  NATIVE_HOOK(0x629820u) REGS; LOADALL;
L_00629820:;
  /* 00629820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629823 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629824 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629825 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629828 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062982a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062982d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062982f push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00629831 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629838 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062983b push 0x64ae08 */ { u32 v_ = 0x64ae08u; esp -= 4; M32(esp) = v_; }
  /* 00629840 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629843 call 0x404420 */ esp -= 4; M32(esp) = 0x629848u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629843u); RETCHK(0x629848u, 0x629843u); LOADALL;
  /* 00629848 mov esi, 0x7a7d28 */ { esi = (u32)(0x7a7d28u); }
  /* 0062984d call 0x4877f0 */ esp -= 4; M32(esp) = 0x629852u; SAVEALL; F_004877f0(c); ABI_CHECK(0x4877f0u, 0x62984du); RETCHK(0x629852u, 0x62984du); LOADALL;
  /* 00629852 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629853 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629855 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629856 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629860(CPU *c) {
  NATIVE_HOOK(0x629860u) REGS; LOADALL;
L_00629860:;
  /* 00629860 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629861 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629863 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629864 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629865 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629868 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062986a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062986d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062986f push 0xc */ { u32 v_ = 0xcu; esp -= 4; M32(esp) = v_; }
  /* 00629871 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629878 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062987b push 0x64af38 */ { u32 v_ = 0x64af38u; esp -= 4; M32(esp) = v_; }
  /* 00629880 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629883 call 0x404420 */ esp -= 4; M32(esp) = 0x629888u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629883u); RETCHK(0x629888u, 0x629883u); LOADALL;
  /* 00629888 mov esi, 0x7a7d29 */ { esi = (u32)(0x7a7d29u); }
  /* 0062988d call 0x487b10 */ esp -= 4; M32(esp) = 0x629892u; SAVEALL; F_00487b10(c); ABI_CHECK(0x487b10u, 0x62988du); RETCHK(0x629892u, 0x62988du); LOADALL;
  /* 00629892 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629893 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629895 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629896 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006298a0(CPU *c) {
  NATIVE_HOOK(0x6298a0u) REGS; LOADALL;
L_006298a0:;
  /* 006298a0 mov dword ptr [0x7a7d2c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d2cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 006298aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006298b0(CPU *c) {
  NATIVE_HOOK(0x6298b0u) REGS; LOADALL;
L_006298b0:;
  /* 006298b0 mov dword ptr [0x7a7d30], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d30u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006298ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006298c0(CPU *c) {
  NATIVE_HOOK(0x6298c0u) REGS; LOADALL;
L_006298c0:;
  /* 006298c0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 006298c2 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 006298c7 mov ecx, 0x68a4d4 */ { ecx = (u32)(0x68a4d4u); }
  /* 006298cc call 0x404420 */ esp -= 4; M32(esp) = 0x6298d1u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x6298ccu); RETCHK(0x6298d1u, 0x6298ccu); LOADALL;
  /* 006298d1 push 0x62c360 */ { u32 v_ = 0x62c360u; esp -= 4; M32(esp) = v_; }
  /* 006298d6 call 0x5fe916 */ esp -= 4; M32(esp) = 0x6298dbu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x6298d6u); RETCHK(0x6298dbu, 0x6298d6u); LOADALL;
  /* 006298db pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 006298dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006298e0(CPU *c) {
  NATIVE_HOOK(0x6298e0u) REGS; LOADALL;
L_006298e0:;
  /* 006298e0 mov dword ptr [0x7a7d34], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d34u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006298ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006298f0(CPU *c) {
  NATIVE_HOOK(0x6298f0u) REGS; LOADALL;
L_006298f0:;
  /* 006298f0 mov dword ptr [0x7a7d38], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d38u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006298fa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629900(CPU *c) {
  NATIVE_HOOK(0x629900u) REGS; LOADALL;
L_00629900:;
  /* 00629900 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629901 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629903 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629904 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629905 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629908 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062990a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062990d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062990f push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 00629911 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629918 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062991b push 0x64b4cc */ { u32 v_ = 0x64b4ccu; esp -= 4; M32(esp) = v_; }
  /* 00629920 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629923 call 0x404420 */ esp -= 4; M32(esp) = 0x629928u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629923u); RETCHK(0x629928u, 0x629923u); LOADALL;
  /* 00629928 mov esi, 0x7a7d3c */ { esi = (u32)(0x7a7d3cu); }
  /* 0062992d call 0x48e8f0 */ esp -= 4; M32(esp) = 0x629932u; SAVEALL; F_0048e8f0(c); ABI_CHECK(0x48e8f0u, 0x62992du); RETCHK(0x629932u, 0x62992du); LOADALL;
  /* 00629932 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629933 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629935 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629936 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629940(CPU *c) {
  NATIVE_HOOK(0x629940u) REGS; LOADALL;
L_00629940:;
  /* 00629940 push 0x62c390 */ { u32 v_ = 0x62c390u; esp -= 4; M32(esp) = v_; }
  /* 00629945 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62994au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629945u); RETCHK(0x62994au, 0x629945u); LOADALL;
  /* 0062994a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062994b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629950(CPU *c) {
  NATIVE_HOOK(0x629950u) REGS; LOADALL;
L_00629950:;
  /* 00629950 push 0x62c3c0 */ { u32 v_ = 0x62c3c0u; esp -= 4; M32(esp) = v_; }
  /* 00629955 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62995au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629955u); RETCHK(0x62995au, 0x629955u); LOADALL;
  /* 0062995a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062995b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629960(CPU *c) {
  NATIVE_HOOK(0x629960u) REGS; LOADALL;
L_00629960:;
  /* 00629960 push 0x62c3f0 */ { u32 v_ = 0x62c3f0u; esp -= 4; M32(esp) = v_; }
  /* 00629965 call 0x5fe916 */ esp -= 4; M32(esp) = 0x62996au; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629965u); RETCHK(0x62996au, 0x629965u); LOADALL;
  /* 0062996a pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 0062996b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629970(CPU *c) {
  NATIVE_HOOK(0x629970u) REGS; LOADALL;
L_00629970:;
  /* 00629970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629973 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629974 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629975 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629978 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0062997a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 0062997d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0062997f push 0xd */ { u32 v_ = 0xdu; esp -= 4; M32(esp) = v_; }
  /* 00629981 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629988 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0062998b push 0x64ac44 */ { u32 v_ = 0x64ac44u; esp -= 4; M32(esp) = v_; }
  /* 00629990 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629993 call 0x404420 */ esp -= 4; M32(esp) = 0x629998u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629993u); RETCHK(0x629998u, 0x629993u); LOADALL;
  /* 00629998 mov esi, 0x7a7d3d */ { esi = (u32)(0x7a7d3du); }
  /* 0062999d call 0x48ecf0 */ esp -= 4; M32(esp) = 0x6299a2u; SAVEALL; F_0048ecf0(c); ABI_CHECK(0x48ecf0u, 0x62999du); RETCHK(0x6299a2u, 0x62999du); LOADALL;
  /* 006299a2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 006299a3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 006299a5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 006299a6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006299b0(CPU *c) {
  NATIVE_HOOK(0x6299b0u) REGS; LOADALL;
L_006299b0:;
  /* 006299b0 mov dword ptr [0x7a7d40], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d40u); M32(m_) = (u32)(0x42652ee0u); }
  /* 006299ba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006299c0(CPU *c) {
  NATIVE_HOOK(0x6299c0u) REGS; LOADALL;
L_006299c0:;
  /* 006299c0 mov dword ptr [0x7a7d44], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d44u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 006299ca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_006299d0(CPU *c) {
  NATIVE_HOOK(0x6299d0u) REGS; LOADALL;
L_006299d0:;
  /* 006299d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 006299d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 006299d3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 006299d4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 006299d5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 006299d8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 006299da mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 006299dd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 006299df push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 006299e1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 006299e8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 006299eb push 0x64b0f4 */ { u32 v_ = 0x64b0f4u; esp -= 4; M32(esp) = v_; }
  /* 006299f0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 006299f3 call 0x404420 */ esp -= 4; M32(esp) = 0x6299f8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x6299f3u); RETCHK(0x6299f8u, 0x6299f3u); LOADALL;
  /* 006299f8 mov esi, 0x7a7d48 */ { esi = (u32)(0x7a7d48u); }
  /* 006299fd call 0x4912a0 */ esp -= 4; M32(esp) = 0x629a02u; SAVEALL; F_004912a0(c); ABI_CHECK(0x4912a0u, 0x6299fdu); RETCHK(0x629a02u, 0x6299fdu); LOADALL;
  /* 00629a02 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629a03 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629a05 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629a06 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a10(CPU *c) {
  NATIVE_HOOK(0x629a10u) REGS; LOADALL;
L_00629a10:;
  /* 00629a10 mov dword ptr [0x7a7d4c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d4cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629a1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a20(CPU *c) {
  NATIVE_HOOK(0x629a20u) REGS; LOADALL;
L_00629a20:;
  /* 00629a20 mov dword ptr [0x7a7d50], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d50u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629a2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a30(CPU *c) {
  NATIVE_HOOK(0x629a30u) REGS; LOADALL;
L_00629a30:;
  /* 00629a30 mov dword ptr [0x7a7d54], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d54u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629a3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a40(CPU *c) {
  NATIVE_HOOK(0x629a40u) REGS; LOADALL;
L_00629a40:;
  /* 00629a40 mov dword ptr [0x7a7d58], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d58u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629a4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a50(CPU *c) {
  NATIVE_HOOK(0x629a50u) REGS; LOADALL;
L_00629a50:;
  /* 00629a50 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00629a52 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 00629a57 mov ecx, 0x68a544 */ { ecx = (u32)(0x68a544u); }
  /* 00629a5c call 0x404420 */ esp -= 4; M32(esp) = 0x629a61u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629a5cu); RETCHK(0x629a61u, 0x629a5cu); LOADALL;
  /* 00629a61 push 0x62c420 */ { u32 v_ = 0x62c420u; esp -= 4; M32(esp) = v_; }
  /* 00629a66 call 0x5fe916 */ esp -= 4; M32(esp) = 0x629a6bu; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629a66u); RETCHK(0x629a6bu, 0x629a66u); LOADALL;
  /* 00629a6b pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629a6c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a70(CPU *c) {
  NATIVE_HOOK(0x629a70u) REGS; LOADALL;
L_00629a70:;
  /* 00629a70 mov dword ptr [0x7a7d5c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d5cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629a7a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a80(CPU *c) {
  NATIVE_HOOK(0x629a80u) REGS; LOADALL;
L_00629a80:;
  /* 00629a80 mov dword ptr [0x7a7d60], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d60u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629a8a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629a90(CPU *c) {
  NATIVE_HOOK(0x629a90u) REGS; LOADALL;
L_00629a90:;
  /* 00629a90 mov dword ptr [0x7a7d64], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d64u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629a9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629aa0(CPU *c) {
  NATIVE_HOOK(0x629aa0u) REGS; LOADALL;
L_00629aa0:;
  /* 00629aa0 mov dword ptr [0x7a7d68], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d68u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629aaa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ab0(CPU *c) {
  NATIVE_HOOK(0x629ab0u) REGS; LOADALL;
L_00629ab0:;
  /* 00629ab0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629ab1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629ab3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629ab4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629ab5 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629ab8 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00629aba mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 00629abd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00629abf push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00629ac1 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629ac8 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00629acb push 0x64c118 */ { u32 v_ = 0x64c118u; esp -= 4; M32(esp) = v_; }
  /* 00629ad0 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629ad3 call 0x404420 */ esp -= 4; M32(esp) = 0x629ad8u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629ad3u); RETCHK(0x629ad8u, 0x629ad3u); LOADALL;
  /* 00629ad8 mov esi, 0x7a7d6c */ { esi = (u32)(0x7a7d6cu); }
  /* 00629add call 0x49e590 */ esp -= 4; M32(esp) = 0x629ae2u; SAVEALL; F_0049e590(c); ABI_CHECK(0x49e590u, 0x629addu); RETCHK(0x629ae2u, 0x629addu); LOADALL;
  /* 00629ae2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629ae3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629ae5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629ae6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629af0(CPU *c) {
  NATIVE_HOOK(0x629af0u) REGS; LOADALL;
L_00629af0:;
  /* 00629af0 mov dword ptr [0x7a7d70], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d70u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629afa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629b00(CPU *c) {
  NATIVE_HOOK(0x629b00u) REGS; LOADALL;
L_00629b00:;
  /* 00629b00 mov dword ptr [0x7a7d74], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d74u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629b0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629b10(CPU *c) {
  NATIVE_HOOK(0x629b10u) REGS; LOADALL;
L_00629b10:;
  /* 00629b10 mov dword ptr [0x7a7d78], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d78u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629b1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629b20(CPU *c) {
  NATIVE_HOOK(0x629b20u) REGS; LOADALL;
L_00629b20:;
  /* 00629b20 mov dword ptr [0x7a7d7c], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d7cu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629b2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629b30(CPU *c) {
  NATIVE_HOOK(0x629b30u) REGS; LOADALL;
L_00629b30:;
  /* 00629b30 mov dword ptr [0x7a7d80], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d80u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629b3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629b40(CPU *c) {
  NATIVE_HOOK(0x629b40u) REGS; LOADALL;
L_00629b40:;
  /* 00629b40 mov dword ptr [0x7a7d84], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d84u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629b4a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629b50(CPU *c) {
  NATIVE_HOOK(0x629b50u) REGS; LOADALL;
L_00629b50:;
  /* 00629b50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00629b51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00629b53 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00629b54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00629b55 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00629b58 mov ecx, esp */ { ecx = (u32)(esp); }
  /* 00629b5a mov dword ptr [ebp - 4], esp */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esp); }
  /* 00629b5d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00629b5f push 0xe */ { u32 v_ = 0xeu; esp -= 4; M32(esp) = v_; }
  /* 00629b61 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00629b68 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00629b6b push 0x6435f0 */ { u32 v_ = 0x6435f0u; esp -= 4; M32(esp) = v_; }
  /* 00629b70 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00629b73 call 0x404420 */ esp -= 4; M32(esp) = 0x629b78u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x629b73u); RETCHK(0x629b78u, 0x629b73u); LOADALL;
  /* 00629b78 mov esi, 0x7a7d88 */ { esi = (u32)(0x7a7d88u); }
  /* 00629b7d call 0x4a7d60 */ esp -= 4; M32(esp) = 0x629b82u; SAVEALL; F_004a7d60(c); ABI_CHECK(0x4a7d60u, 0x629b7du); RETCHK(0x629b82u, 0x629b7du); LOADALL;
  /* 00629b82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00629b83 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00629b85 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00629b86 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629b90(CPU *c) {
  NATIVE_HOOK(0x629b90u) REGS; LOADALL;
L_00629b90:;
  /* 00629b90 mov dword ptr [0x7a7d8c], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d8cu); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629b9a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629ba0(CPU *c) {
  NATIVE_HOOK(0x629ba0u) REGS; LOADALL;
L_00629ba0:;
  /* 00629ba0 mov dword ptr [0x7a7d90], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d90u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629baa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629bb0(CPU *c) {
  NATIVE_HOOK(0x629bb0u) REGS; LOADALL;
L_00629bb0:;
  /* 00629bb0 mov dword ptr [0x7a7d94], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7d94u); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629bba ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629bc0(CPU *c) {
  NATIVE_HOOK(0x629bc0u) REGS; LOADALL;
L_00629bc0:;
  /* 00629bc0 mov dword ptr [0x7a7d98], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7d98u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629bca ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629bd0(CPU *c) {
  NATIVE_HOOK(0x629bd0u) REGS; LOADALL;
L_00629bd0:;
  /* 00629bd0 push 0x62c450 */ { u32 v_ = 0x62c450u; esp -= 4; M32(esp) = v_; }
  /* 00629bd5 call 0x5fe916 */ esp -= 4; M32(esp) = 0x629bdau; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x629bd5u); RETCHK(0x629bdau, 0x629bd5u); LOADALL;
  /* 00629bda pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 00629bdb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629be0(CPU *c) {
  NATIVE_HOOK(0x629be0u) REGS; LOADALL;
L_00629be0:;
  /* 00629be0 mov dword ptr [0x7a7dac], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7dacu); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629bea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629bf0(CPU *c) {
  NATIVE_HOOK(0x629bf0u) REGS; LOADALL;
L_00629bf0:;
  /* 00629bf0 mov dword ptr [0x7a7db0], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7db0u); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629bfa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629c00(CPU *c) {
  NATIVE_HOOK(0x629c00u) REGS; LOADALL;
L_00629c00:;
  /* 00629c00 mov dword ptr [0x7a7dec], 0x42652ee0 */ { const u32 m_ = (u32)(0x7a7decu); M32(m_) = (u32)(0x42652ee0u); }
  /* 00629c0a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629c10(CPU *c) {
  NATIVE_HOOK(0x629c10u) REGS; LOADALL;
L_00629c10:;
  /* 00629c10 mov dword ptr [0x7a7edc], 0x3c8efa35 */ { const u32 m_ = (u32)(0x7a7edcu); M32(m_) = (u32)(0x3c8efa35u); }
  /* 00629c1a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629c20(CPU *c) {
  NATIVE_HOOK(0x629c20u) REGS; LOADALL;
L_00629c20:;
  /* 00629c20 push 0x42c20000 */ { u32 v_ = 0x42c20000u; esp -= 4; M32(esp) = v_; }
  /* 00629c25 push 0x42d20000 */ { u32 v_ = 0x42d20000u; esp -= 4; M32(esp) = v_; }
  /* 00629c2a push 0x41880000 */ { u32 v_ = 0x41880000u; esp -= 4; M32(esp) = v_; }
  /* 00629c2f push 0x41c80000 */ { u32 v_ = 0x41c80000u; esp -= 4; M32(esp) = v_; }
  /* 00629c34 mov eax, 0x7a7e20 */ { eax = (u32)(0x7a7e20u); }
  /* 00629c39 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629c3eu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629c39u); RETCHK(0x629c3eu, 0x629c39u); LOADALL;
  /* 00629c3e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629c40(CPU *c) {
  NATIVE_HOOK(0x629c40u) REGS; LOADALL;
L_00629c40:;
  /* 00629c40 push 0x42c20000 */ { u32 v_ = 0x42c20000u; esp -= 4; M32(esp) = v_; }
  /* 00629c45 push 0x432e0000 */ { u32 v_ = 0x432e0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c4a push 0x41880000 */ { u32 v_ = 0x41880000u; esp -= 4; M32(esp) = v_; }
  /* 00629c4f push 0x42bc0000 */ { u32 v_ = 0x42bc0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c54 mov eax, 0x7a7e30 */ { eax = (u32)(0x7a7e30u); }
  /* 00629c59 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629c5eu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629c59u); RETCHK(0x629c5eu, 0x629c59u); LOADALL;
  /* 00629c5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00629c60(CPU *c) {
  NATIVE_HOOK(0x629c60u) REGS; LOADALL;
L_00629c60:;
  /* 00629c60 push 0x429a0000 */ { u32 v_ = 0x429a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c65 push 0x431a0000 */ { u32 v_ = 0x431a0000u; esp -= 4; M32(esp) = v_; }
  /* 00629c6a push 0x42140000 */ { u32 v_ = 0x42140000u; esp -= 4; M32(esp) = v_; }
  /* 00629c6f push 0x42e40000 */ { u32 v_ = 0x42e40000u; esp -= 4; M32(esp) = v_; }
  /* 00629c74 mov eax, 0x7a7e68 */ { eax = (u32)(0x7a7e68u); }
  /* 00629c79 call 0x52cec0 */ esp -= 4; M32(esp) = 0x629c7eu; SAVEALL; F_0052cec0(c); ABI_CHECK(0x52cec0u, 0x629c79u); RETCHK(0x629c7eu, 0x629c79u); LOADALL;
  /* 00629c7e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
