#include "funcs.h"

void F_0055cf30(CPU *c) {
  NATIVE_HOOK(0x55cf30u) REGS; LOADALL;
L_0055cf30:;
  /* 0055cf30 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055cf31 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055cf33 mov dword ptr [esi], 0x656648 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656648u); }
  /* 0055cf39 cmp dword ptr [esi + 0xd24], 0x10 */ { const u32 m_ = (u32)(esi + 0xd24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055cf40 jb 0x55cf51 */ if (CF_) goto L_0055cf51;
  /* 0055cf42 mov eax, dword ptr [esi + 0xd10] */ { const u32 m_ = (u32)(esi + 0xd10u); eax = (u32)(M32(m_)); }
  /* 0055cf48 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055cf49 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55cf4eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55cf49u); RETCHK(0x55cf4eu, 0x55cf49u); LOADALL;
  /* 0055cf4e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055cf51:;
  /* 0055cf51 mov dword ptr [esi + 0xd24], 0xf */ { const u32 m_ = (u32)(esi + 0xd24u); M32(m_) = (u32)(0xfu); }
  /* 0055cf5b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055cf5d mov dword ptr [esi + 0xd20], eax */ { const u32 m_ = (u32)(esi + 0xd20u); M32(m_) = (u32)(eax); }
  /* 0055cf63 mov byte ptr [esi + 0xd10], al */ { const u32 m_ = (u32)(esi + 0xd10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0055cf69 mov eax, 0x65663c */ { eax = (u32)(0x65663cu); }
  /* 0055cf6e mov dword ptr [esi + 0xca0], eax */ { const u32 m_ = (u32)(esi + 0xca0u); M32(m_) = (u32)(eax); }
  /* 0055cf74 mov dword ptr [esi + 0xc74], eax */ { const u32 m_ = (u32)(esi + 0xc74u); M32(m_) = (u32)(eax); }
  /* 0055cf7a mov eax, 0x656610 */ { eax = (u32)(0x656610u); }
  /* 0055cf7f mov dword ptr [esi + 0xc50], eax */ { const u32 m_ = (u32)(esi + 0xc50u); M32(m_) = (u32)(eax); }
  /* 0055cf85 mov dword ptr [esi + 0xc34], eax */ { const u32 m_ = (u32)(esi + 0xc34u); M32(m_) = (u32)(eax); }
  /* 0055cf8b mov eax, 0x656640 */ { eax = (u32)(0x656640u); }
  /* 0055cf90 mov dword ptr [esi + 0xbf8], eax */ { const u32 m_ = (u32)(esi + 0xbf8u); M32(m_) = (u32)(eax); }
  /* 0055cf96 mov dword ptr [esi + 0xbbc], eax */ { const u32 m_ = (u32)(esi + 0xbbcu); M32(m_) = (u32)(eax); }
  /* 0055cf9c mov eax, 0x656614 */ { eax = (u32)(0x656614u); }
  /* 0055cfa1 mov dword ptr [esi + 0xa5c], eax */ { const u32 m_ = (u32)(esi + 0xa5cu); M32(m_) = (u32)(eax); }
  /* 0055cfa7 mov dword ptr [esi + 0x9d8], eax */ { const u32 m_ = (u32)(esi + 0x9d8u); M32(m_) = (u32)(eax); }
  /* 0055cfad mov dword ptr [esi + 0x954], eax */ { const u32 m_ = (u32)(esi + 0x954u); M32(m_) = (u32)(eax); }
  /* 0055cfb3 mov eax, 0x656644 */ { eax = (u32)(0x656644u); }
  /* 0055cfb8 mov dword ptr [esi + 0x858], eax */ { const u32 m_ = (u32)(esi + 0x858u); M32(m_) = (u32)(eax); }
  /* 0055cfbe mov dword ptr [esi + 0x75c], eax */ { const u32 m_ = (u32)(esi + 0x75cu); M32(m_) = (u32)(eax); }
  /* 0055cfc4 mov dword ptr [esi + 0x660], eax */ { const u32 m_ = (u32)(esi + 0x660u); M32(m_) = (u32)(eax); }
  /* 0055cfca mov dword ptr [esi + 0x564], eax */ { const u32 m_ = (u32)(esi + 0x564u); M32(m_) = (u32)(eax); }
  /* 0055cfd0 mov dword ptr [esi + 0x468], eax */ { const u32 m_ = (u32)(esi + 0x468u); M32(m_) = (u32)(eax); }
  /* 0055cfd6 mov dword ptr [esi + 0x36c], eax */ { const u32 m_ = (u32)(esi + 0x36cu); M32(m_) = (u32)(eax); }
  /* 0055cfdc mov dword ptr [esi + 0x270], eax */ { const u32 m_ = (u32)(esi + 0x270u); M32(m_) = (u32)(eax); }
  /* 0055cfe2 mov eax, 0x656674 */ { eax = (u32)(0x656674u); }
  /* 0055cfe7 mov dword ptr [esi + 0x21c], eax */ { const u32 m_ = (u32)(esi + 0x21cu); M32(m_) = (u32)(eax); }
  /* 0055cfed mov dword ptr [esi + 0x1c8], eax */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(eax); }
  /* 0055cff3 mov dword ptr [esi + 0x174], eax */ { const u32 m_ = (u32)(esi + 0x174u); M32(m_) = (u32)(eax); }
  /* 0055cff9 mov dword ptr [esi + 0x120], eax */ { const u32 m_ = (u32)(esi + 0x120u); M32(m_) = (u32)(eax); }
  /* 0055cfff mov eax, 0x65660c */ { eax = (u32)(0x65660cu); }
  /* 0055d004 mov dword ptr [esi + 0xb90], 0x656670 */ { const u32 m_ = (u32)(esi + 0xb90u); M32(m_) = (u32)(0x656670u); }
  /* 0055d00e mov dword ptr [esi + 0xec], eax */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(eax); }
  /* 0055d014 mov dword ptr [esi + 0xb8], eax */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(eax); }
  /* 0055d01a mov dword ptr [esi + 0x84], eax */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(eax); }
  /* 0055d020 mov dword ptr [esi + 0x68], 0x656638 */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(0x656638u); }
  /* 0055d027 mov dword ptr [esi], 0x656618 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656618u); }
  /* 0055d02d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d02e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055d030(CPU *c) {
  NATIVE_HOOK(0x55d030u) REGS; LOADALL;
L_0055d030:;
  /* 0055d030 mov ax, 0x1f9 */ { eax = (eax & 0xffff0000u) | ((u32)(0x1f9u) & 0xffffu); }
  /* 0055d034 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055d040(CPU *c) {
  NATIVE_HOOK(0x55d040u) REGS; LOADALL;
L_0055d040:;
  /* 0055d040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d043 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d044 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d046 call 0x55cf30 */ esp -= 4; M32(esp) = 0x55d04bu; SAVEALL; F_0055cf30(c); ABI_CHECK(0x55cf30u, 0x55d046u); RETCHK(0x55d04bu, 0x55d046u); LOADALL;
  /* 0055d04b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d04f je 0x55d05a */ if (ZF_) goto L_0055d05a;
  /* 0055d051 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d052 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d057u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d052u); RETCHK(0x55d057u, 0x55d052u); LOADALL;
  /* 0055d057 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d05a:;
  /* 0055d05a mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d05c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d05d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d05e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d070(CPU *c) {
  NATIVE_HOOK(0x55d070u) REGS; LOADALL;
L_0055d070:;
  /* 0055d070 lea eax, [ecx + 0x18] */ eax = (u32)((u32)(ecx + 0x18u));
  /* 0055d073 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055d080(CPU *c) {
  NATIVE_HOOK(0x55d080u) REGS; LOADALL;
L_0055d080:;
  /* 0055d080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d083 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055d089 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055d08b push 0x61b9b1 */ { u32 v_ = 0x61b9b1u; esp -= 4; M32(esp) = v_; }
  /* 0055d090 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055d091 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055d098 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d099 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055d09c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d09e mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 0055d0a1 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055d0a4 mov dword ptr [esi], 0x656648 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656648u); }
  /* 0055d0aa mov dword ptr [esi + 0x68], 0x656638 */ { const u32 m_ = (u32)(esi + 0x68u); M32(m_) = (u32)(0x656638u); }
  /* 0055d0b1 mov dword ptr [esi + 0x70], 3 */ { const u32 m_ = (u32)(esi + 0x70u); M32(m_) = (u32)(0x3u); }
  /* 0055d0b8 mov dword ptr [esi + 0x6c], eax */ { const u32 m_ = (u32)(esi + 0x6cu); M32(m_) = (u32)(eax); }
  /* 0055d0bb mov edx, 0x65660c */ { edx = (u32)(0x65660cu); }
  /* 0055d0c0 mov ecx, 0xa */ { ecx = (u32)(0xau); }
  /* 0055d0c5 mov dword ptr [esi + 0x84], edx */ { const u32 m_ = (u32)(esi + 0x84u); M32(m_) = (u32)(edx); }
  /* 0055d0cb mov dword ptr [esi + 0x8c], ecx */ { const u32 m_ = (u32)(esi + 0x8cu); M32(m_) = (u32)(ecx); }
  /* 0055d0d1 mov dword ptr [esi + 0x88], eax */ { const u32 m_ = (u32)(esi + 0x88u); M32(m_) = (u32)(eax); }
  /* 0055d0d7 mov dword ptr [esi + 0xb8], edx */ { const u32 m_ = (u32)(esi + 0xb8u); M32(m_) = (u32)(edx); }
  /* 0055d0dd mov dword ptr [esi + 0xc0], ecx */ { const u32 m_ = (u32)(esi + 0xc0u); M32(m_) = (u32)(ecx); }
  /* 0055d0e3 mov dword ptr [esi + 0xbc], eax */ { const u32 m_ = (u32)(esi + 0xbcu); M32(m_) = (u32)(eax); }
  /* 0055d0e9 mov dword ptr [esi + 0xec], edx */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(edx); }
  /* 0055d0ef mov dword ptr [esi + 0xf4], ecx */ { const u32 m_ = (u32)(esi + 0xf4u); M32(m_) = (u32)(ecx); }
  /* 0055d0f5 mov dword ptr [esi + 0xf0], eax */ { const u32 m_ = (u32)(esi + 0xf0u); M32(m_) = (u32)(eax); }
  /* 0055d0fb mov edx, 0x656674 */ { edx = (u32)(0x656674u); }
  /* 0055d100 mov ecx, 0x12 */ { ecx = (u32)(0x12u); }
  /* 0055d105 mov dword ptr [esi + 0x120], edx */ { const u32 m_ = (u32)(esi + 0x120u); M32(m_) = (u32)(edx); }
  /* 0055d10b mov dword ptr [esi + 0x128], ecx */ { const u32 m_ = (u32)(esi + 0x128u); M32(m_) = (u32)(ecx); }
  /* 0055d111 mov dword ptr [esi + 0x124], eax */ { const u32 m_ = (u32)(esi + 0x124u); M32(m_) = (u32)(eax); }
  /* 0055d117 mov dword ptr [esi + 0x174], edx */ { const u32 m_ = (u32)(esi + 0x174u); M32(m_) = (u32)(edx); }
  /* 0055d11d mov dword ptr [esi + 0x17c], ecx */ { const u32 m_ = (u32)(esi + 0x17cu); M32(m_) = (u32)(ecx); }
  /* 0055d123 mov dword ptr [esi + 0x178], eax */ { const u32 m_ = (u32)(esi + 0x178u); M32(m_) = (u32)(eax); }
  /* 0055d129 mov dword ptr [esi + 0x1c8], edx */ { const u32 m_ = (u32)(esi + 0x1c8u); M32(m_) = (u32)(edx); }
  /* 0055d12f mov dword ptr [esi + 0x1d0], ecx */ { const u32 m_ = (u32)(esi + 0x1d0u); M32(m_) = (u32)(ecx); }
  /* 0055d135 mov dword ptr [esi + 0x1cc], eax */ { const u32 m_ = (u32)(esi + 0x1ccu); M32(m_) = (u32)(eax); }
  /* 0055d13b mov dword ptr [esi + 0x21c], edx */ { const u32 m_ = (u32)(esi + 0x21cu); M32(m_) = (u32)(edx); }
  /* 0055d141 mov dword ptr [esi + 0x224], ecx */ { const u32 m_ = (u32)(esi + 0x224u); M32(m_) = (u32)(ecx); }
  /* 0055d147 mov dword ptr [esi + 0x220], eax */ { const u32 m_ = (u32)(esi + 0x220u); M32(m_) = (u32)(eax); }
  /* 0055d14d mov edx, 0x656644 */ { edx = (u32)(0x656644u); }
  /* 0055d152 mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d157 mov dword ptr [esi + 0x270], edx */ { const u32 m_ = (u32)(esi + 0x270u); M32(m_) = (u32)(edx); }
  /* 0055d15d mov dword ptr [esi + 0x278], ecx */ { const u32 m_ = (u32)(esi + 0x278u); M32(m_) = (u32)(ecx); }
  /* 0055d163 mov dword ptr [esi + 0x274], eax */ { const u32 m_ = (u32)(esi + 0x274u); M32(m_) = (u32)(eax); }
  /* 0055d169 mov dword ptr [esi + 0x36c], edx */ { const u32 m_ = (u32)(esi + 0x36cu); M32(m_) = (u32)(edx); }
  /* 0055d16f mov dword ptr [esi + 0x374], ecx */ { const u32 m_ = (u32)(esi + 0x374u); M32(m_) = (u32)(ecx); }
  /* 0055d175 mov dword ptr [esi + 0x370], eax */ { const u32 m_ = (u32)(esi + 0x370u); M32(m_) = (u32)(eax); }
  /* 0055d17b mov dword ptr [esi + 0x468], edx */ { const u32 m_ = (u32)(esi + 0x468u); M32(m_) = (u32)(edx); }
  /* 0055d181 mov dword ptr [esi + 0x470], ecx */ { const u32 m_ = (u32)(esi + 0x470u); M32(m_) = (u32)(ecx); }
  /* 0055d187 mov dword ptr [esi + 0x46c], eax */ { const u32 m_ = (u32)(esi + 0x46cu); M32(m_) = (u32)(eax); }
  /* 0055d18d mov dword ptr [esi + 0x564], edx */ { const u32 m_ = (u32)(esi + 0x564u); M32(m_) = (u32)(edx); }
  /* 0055d193 mov dword ptr [esi + 0x56c], ecx */ { const u32 m_ = (u32)(esi + 0x56cu); M32(m_) = (u32)(ecx); }
  /* 0055d199 mov dword ptr [esi + 0x568], eax */ { const u32 m_ = (u32)(esi + 0x568u); M32(m_) = (u32)(eax); }
  /* 0055d19f mov dword ptr [esi + 0x660], edx */ { const u32 m_ = (u32)(esi + 0x660u); M32(m_) = (u32)(edx); }
  /* 0055d1a5 mov dword ptr [esi + 0x668], ecx */ { const u32 m_ = (u32)(esi + 0x668u); M32(m_) = (u32)(ecx); }
  /* 0055d1ab mov dword ptr [esi + 0x664], eax */ { const u32 m_ = (u32)(esi + 0x664u); M32(m_) = (u32)(eax); }
  /* 0055d1b1 mov dword ptr [esi + 0x75c], edx */ { const u32 m_ = (u32)(esi + 0x75cu); M32(m_) = (u32)(edx); }
  /* 0055d1b7 mov dword ptr [esi + 0x764], ecx */ { const u32 m_ = (u32)(esi + 0x764u); M32(m_) = (u32)(ecx); }
  /* 0055d1bd mov dword ptr [esi + 0x760], eax */ { const u32 m_ = (u32)(esi + 0x760u); M32(m_) = (u32)(eax); }
  /* 0055d1c3 mov dword ptr [esi + 0x858], edx */ { const u32 m_ = (u32)(esi + 0x858u); M32(m_) = (u32)(edx); }
  /* 0055d1c9 mov dword ptr [esi + 0x860], ecx */ { const u32 m_ = (u32)(esi + 0x860u); M32(m_) = (u32)(ecx); }
  /* 0055d1cf mov dword ptr [esi + 0x85c], eax */ { const u32 m_ = (u32)(esi + 0x85cu); M32(m_) = (u32)(eax); }
  /* 0055d1d5 mov edx, 0x656614 */ { edx = (u32)(0x656614u); }
  /* 0055d1da mov dword ptr [esi + 0x954], edx */ { const u32 m_ = (u32)(esi + 0x954u); M32(m_) = (u32)(edx); }
  /* 0055d1e0 mov ecx, 0x1e */ { ecx = (u32)(0x1eu); }
  /* 0055d1e5 mov dword ptr [esi + 0x95c], ecx */ { const u32 m_ = (u32)(esi + 0x95cu); M32(m_) = (u32)(ecx); }
  /* 0055d1eb mov dword ptr [esi + 0x958], eax */ { const u32 m_ = (u32)(esi + 0x958u); M32(m_) = (u32)(eax); }
  /* 0055d1f1 mov dword ptr [esi + 0x9d8], edx */ { const u32 m_ = (u32)(esi + 0x9d8u); M32(m_) = (u32)(edx); }
  /* 0055d1f7 mov dword ptr [esi + 0x9e0], ecx */ { const u32 m_ = (u32)(esi + 0x9e0u); M32(m_) = (u32)(ecx); }
  /* 0055d1fd mov dword ptr [esi + 0x9dc], eax */ { const u32 m_ = (u32)(esi + 0x9dcu); M32(m_) = (u32)(eax); }
  /* 0055d203 mov dword ptr [esi + 0xa5c], edx */ { const u32 m_ = (u32)(esi + 0xa5cu); M32(m_) = (u32)(edx); }
  /* 0055d209 mov dword ptr [esi + 0xa64], ecx */ { const u32 m_ = (u32)(esi + 0xa64u); M32(m_) = (u32)(ecx); }
  /* 0055d20f mov dword ptr [esi + 0xa60], eax */ { const u32 m_ = (u32)(esi + 0xa60u); M32(m_) = (u32)(eax); }
  /* 0055d215 mov dword ptr [esi + 0xb90], 0x656670 */ { const u32 m_ = (u32)(esi + 0xb90u); M32(m_) = (u32)(0x656670u); }
  /* 0055d21f mov dword ptr [esi + 0xb98], 6 */ { const u32 m_ = (u32)(esi + 0xb98u); M32(m_) = (u32)(0x6u); }
  /* 0055d229 mov dword ptr [esi + 0xb94], eax */ { const u32 m_ = (u32)(esi + 0xb94u); M32(m_) = (u32)(eax); }
  /* 0055d22f mov edx, 0x656640 */ { edx = (u32)(0x656640u); }
  /* 0055d234 mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 0055d239 mov dword ptr [esi + 0xbbc], edx */ { const u32 m_ = (u32)(esi + 0xbbcu); M32(m_) = (u32)(edx); }
  /* 0055d23f mov dword ptr [esi + 0xbc4], ecx */ { const u32 m_ = (u32)(esi + 0xbc4u); M32(m_) = (u32)(ecx); }
  /* 0055d245 mov dword ptr [esi + 0xbc0], eax */ { const u32 m_ = (u32)(esi + 0xbc0u); M32(m_) = (u32)(eax); }
  /* 0055d24b mov dword ptr [esi + 0xbf8], edx */ { const u32 m_ = (u32)(esi + 0xbf8u); M32(m_) = (u32)(edx); }
  /* 0055d251 mov dword ptr [esi + 0xc00], ecx */ { const u32 m_ = (u32)(esi + 0xc00u); M32(m_) = (u32)(ecx); }
  /* 0055d257 mov dword ptr [esi + 0xbfc], eax */ { const u32 m_ = (u32)(esi + 0xbfcu); M32(m_) = (u32)(eax); }
  /* 0055d25d mov edx, 0x656610 */ { edx = (u32)(0x656610u); }
  /* 0055d262 mov ecx, 4 */ { ecx = (u32)(0x4u); }
  /* 0055d267 mov dword ptr [esi + 0xc34], edx */ { const u32 m_ = (u32)(esi + 0xc34u); M32(m_) = (u32)(edx); }
  /* 0055d26d mov dword ptr [esi + 0xc3c], ecx */ { const u32 m_ = (u32)(esi + 0xc3cu); M32(m_) = (u32)(ecx); }
  /* 0055d273 mov dword ptr [esi + 0xc38], eax */ { const u32 m_ = (u32)(esi + 0xc38u); M32(m_) = (u32)(eax); }
  /* 0055d279 mov dword ptr [esi + 0xc50], edx */ { const u32 m_ = (u32)(esi + 0xc50u); M32(m_) = (u32)(edx); }
  /* 0055d27f mov dword ptr [esi + 0xc58], ecx */ { const u32 m_ = (u32)(esi + 0xc58u); M32(m_) = (u32)(ecx); }
  /* 0055d285 mov dword ptr [esi + 0xc54], eax */ { const u32 m_ = (u32)(esi + 0xc54u); M32(m_) = (u32)(eax); }
  /* 0055d28b mov edx, 0x65663c */ { edx = (u32)(0x65663cu); }
  /* 0055d290 mov ecx, 8 */ { ecx = (u32)(0x8u); }
  /* 0055d295 mov dword ptr [esi + 0xc74], edx */ { const u32 m_ = (u32)(esi + 0xc74u); M32(m_) = (u32)(edx); }
  /* 0055d29b mov dword ptr [esi + 0xc7c], ecx */ { const u32 m_ = (u32)(esi + 0xc7cu); M32(m_) = (u32)(ecx); }
  /* 0055d2a1 mov dword ptr [esi + 0xc78], eax */ { const u32 m_ = (u32)(esi + 0xc78u); M32(m_) = (u32)(eax); }
  /* 0055d2a7 mov dword ptr [esi + 0xca0], edx */ { const u32 m_ = (u32)(esi + 0xca0u); M32(m_) = (u32)(edx); }
  /* 0055d2ad mov dword ptr [esi + 0xca8], ecx */ { const u32 m_ = (u32)(esi + 0xca8u); M32(m_) = (u32)(ecx); }
  /* 0055d2b3 mov dword ptr [esi + 0xca4], eax */ { const u32 m_ = (u32)(esi + 0xca4u); M32(m_) = (u32)(eax); }
  /* 0055d2b9 mov dword ptr [esi + 0xd24], 0xf */ { const u32 m_ = (u32)(esi + 0xd24u); M32(m_) = (u32)(0xfu); }
  /* 0055d2c3 mov dword ptr [esi + 0xd20], eax */ { const u32 m_ = (u32)(esi + 0xd20u); M32(m_) = (u32)(eax); }
  /* 0055d2c9 mov byte ptr [esi + 0xd10], al */ { const u32 m_ = (u32)(esi + 0xd10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0055d2cf mov byte ptr [ebp - 4], 0x1a */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1au); }
  /* 0055d2d3 call 0x55d2f0 */ esp -= 4; M32(esp) = 0x55d2d8u; SAVEALL; F_0055d2f0(c); ABI_CHECK(0x55d2f0u, 0x55d2d3u); RETCHK(0x55d2d8u, 0x55d2d3u); LOADALL;
  /* 0055d2d8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055d2db mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d2dd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055d2e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d2e5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055d2e7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d2e8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d2f0(CPU *c) {
  NATIVE_HOOK(0x55d2f0u) REGS; LOADALL;
L_0055d2f0:;
  /* 0055d2f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d2f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d2f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055d2f4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055d2f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055d2f6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d2f8 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0055d2fa xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055d2fc mov dword ptr [esi + 0x58], ebx */ { const u32 m_ = (u32)(esi + 0x58u); M32(m_) = (u32)(ebx); }
  /* 0055d2ff mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 0055d302 mov dword ptr [esi + 0x60], ebx */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(ebx); }
  /* 0055d305 mov dword ptr [esi + 0x64], ebx */ { const u32 m_ = (u32)(esi + 0x64u); M32(m_) = (u32)(ebx); }
  /* 0055d308 lea ecx, [esi + 0x74] */ ecx = (u32)((u32)(esi + 0x74u));
  /* 0055d30b mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0055d30d mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055d310 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055d313 mov dword ptr [esi + 0x80], ebx */ { const u32 m_ = (u32)(esi + 0x80u); M32(m_) = (u32)(ebx); }
  /* 0055d319 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055d31b lea eax, [esi + 0x90] */ eax = (u32)((u32)(esi + 0x90u));
  /* 0055d321 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0055d323 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0055d326 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0055d329 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 0055d32c mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 0055d32f mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 0055d332 mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 0055d335 mov dword ptr [eax + 0x1c], edx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edx); }
  /* 0055d338 mov dword ptr [eax + 0x20], edx */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(edx); }
  /* 0055d33b mov dword ptr [eax + 0x24], edx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(edx); }
  /* 0055d33e lea edx, [esi + 0xc4] */ edx = (u32)((u32)(esi + 0xc4u));
  /* 0055d344 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0055d346 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0055d349 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0055d34c mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0055d34f mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0055d352 mov dword ptr [edx + 0x14], ecx */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0055d355 mov dword ptr [edx + 0x18], ecx */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0055d358 mov dword ptr [edx + 0x1c], ecx */ { const u32 m_ = (u32)(edx + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0055d35b mov dword ptr [edx + 0x20], ecx */ { const u32 m_ = (u32)(edx + 0x20u); M32(m_) = (u32)(ecx); }
  /* 0055d35e mov dword ptr [edx + 0x24], ecx */ { const u32 m_ = (u32)(edx + 0x24u); M32(m_) = (u32)(ecx); }
  /* 0055d361 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d363 lea ecx, [esi + 0xf8] */ ecx = (u32)((u32)(esi + 0xf8u));
  /* 0055d369 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0055d36b mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055d36e mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055d371 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0055d374 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 0055d377 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0055d37a mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 0055d37d mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0055d380 mov dword ptr [ecx + 0x20], eax */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(eax); }
  /* 0055d383 mov dword ptr [ecx + 0x24], eax */ { const u32 m_ = (u32)(ecx + 0x24u); M32(m_) = (u32)(eax); }
  /* 0055d386 mov ecx, 0x12 */ { ecx = (u32)(0x12u); }
  /* 0055d38b lea edi, [esi + 0x12c] */ edi = (u32)((u32)(esi + 0x12cu));
  /* 0055d391 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d393 mov ecx, 0x12 */ { ecx = (u32)(0x12u); }
  /* 0055d398 lea edi, [esi + 0x180] */ edi = (u32)((u32)(esi + 0x180u));
  /* 0055d39e rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3a0 mov ecx, 0x12 */ { ecx = (u32)(0x12u); }
  /* 0055d3a5 lea edi, [esi + 0x1d4] */ edi = (u32)((u32)(esi + 0x1d4u));
  /* 0055d3ab rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3ad mov ecx, 0x12 */ { ecx = (u32)(0x12u); }
  /* 0055d3b2 lea edi, [esi + 0x228] */ edi = (u32)((u32)(esi + 0x228u));
  /* 0055d3b8 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3ba mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d3bf lea edi, [esi + 0x27c] */ edi = (u32)((u32)(esi + 0x27cu));
  /* 0055d3c5 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3c7 mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d3cc lea edi, [esi + 0x378] */ edi = (u32)((u32)(esi + 0x378u));
  /* 0055d3d2 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3d4 mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d3d9 lea edi, [esi + 0x474] */ edi = (u32)((u32)(esi + 0x474u));
  /* 0055d3df rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3e1 mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d3e6 lea edi, [esi + 0x570] */ edi = (u32)((u32)(esi + 0x570u));
  /* 0055d3ec rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3ee mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d3f3 lea edi, [esi + 0x66c] */ edi = (u32)((u32)(esi + 0x66cu));
  /* 0055d3f9 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d3fb mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d400 lea edi, [esi + 0x768] */ edi = (u32)((u32)(esi + 0x768u));
  /* 0055d406 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d408 mov ecx, 0x3c */ { ecx = (u32)(0x3cu); }
  /* 0055d40d lea edi, [esi + 0x864] */ edi = (u32)((u32)(esi + 0x864u));
  /* 0055d413 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d415 mov ecx, 0x1e */ { ecx = (u32)(0x1eu); }
  /* 0055d41a lea edi, [esi + 0x960] */ edi = (u32)((u32)(esi + 0x960u));
  /* 0055d420 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d422 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0055d424 mov ecx, 0x1e */ { ecx = (u32)(0x1eu); }
  /* 0055d429 lea edi, [esi + 0x9e4] */ edi = (u32)((u32)(esi + 0x9e4u));
  /* 0055d42f rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d431 mov ecx, 0x1e */ { ecx = (u32)(0x1eu); }
  /* 0055d436 lea edi, [esi + 0xa68] */ edi = (u32)((u32)(esi + 0xa68u));
  /* 0055d43c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d43e mov dword ptr [esi + 0xae0], ebx */ { const u32 m_ = (u32)(esi + 0xae0u); M32(m_) = (u32)(ebx); }
  /* 0055d444 mov dword ptr [esi + 0xae4], ebx */ { const u32 m_ = (u32)(esi + 0xae4u); M32(m_) = (u32)(ebx); }
  /* 0055d44a mov dword ptr [esi + 0xae8], ebx */ { const u32 m_ = (u32)(esi + 0xae8u); M32(m_) = (u32)(ebx); }
  /* 0055d450 mov dword ptr [esi + 0xaec], ebx */ { const u32 m_ = (u32)(esi + 0xaecu); M32(m_) = (u32)(ebx); }
  /* 0055d456 mov dword ptr [esi + 0xaf0], ebx */ { const u32 m_ = (u32)(esi + 0xaf0u); M32(m_) = (u32)(ebx); }
  /* 0055d45c mov dword ptr [esi + 0xaf4], ebx */ { const u32 m_ = (u32)(esi + 0xaf4u); M32(m_) = (u32)(ebx); }
  /* 0055d462 mov dword ptr [esi + 0xaf8], ebx */ { const u32 m_ = (u32)(esi + 0xaf8u); M32(m_) = (u32)(ebx); }
  /* 0055d468 mov dword ptr [esi + 0xafc], ebx */ { const u32 m_ = (u32)(esi + 0xafcu); M32(m_) = (u32)(ebx); }
  /* 0055d46e mov dword ptr [esi + 0xb00], ebx */ { const u32 m_ = (u32)(esi + 0xb00u); M32(m_) = (u32)(ebx); }
  /* 0055d474 mov dword ptr [esi + 0xb04], ebx */ { const u32 m_ = (u32)(esi + 0xb04u); M32(m_) = (u32)(ebx); }
  /* 0055d47a mov dword ptr [esi + 0xb08], ebx */ { const u32 m_ = (u32)(esi + 0xb08u); M32(m_) = (u32)(ebx); }
  /* 0055d480 mov dword ptr [esi + 0xb0c], ebx */ { const u32 m_ = (u32)(esi + 0xb0cu); M32(m_) = (u32)(ebx); }
  /* 0055d486 mov dword ptr [esi + 0xb10], ebx */ { const u32 m_ = (u32)(esi + 0xb10u); M32(m_) = (u32)(ebx); }
  /* 0055d48c mov dword ptr [esi + 0xb14], ebx */ { const u32 m_ = (u32)(esi + 0xb14u); M32(m_) = (u32)(ebx); }
  /* 0055d492 mov dword ptr [esi + 0xb18], ebx */ { const u32 m_ = (u32)(esi + 0xb18u); M32(m_) = (u32)(ebx); }
  /* 0055d498 mov dword ptr [esi + 0xb1c], ebx */ { const u32 m_ = (u32)(esi + 0xb1cu); M32(m_) = (u32)(ebx); }
  /* 0055d49e mov dword ptr [esi + 0xb20], ebx */ { const u32 m_ = (u32)(esi + 0xb20u); M32(m_) = (u32)(ebx); }
  /* 0055d4a4 mov dword ptr [esi + 0xb24], ebx */ { const u32 m_ = (u32)(esi + 0xb24u); M32(m_) = (u32)(ebx); }
  /* 0055d4aa mov dword ptr [esi + 0xb28], ebx */ { const u32 m_ = (u32)(esi + 0xb28u); M32(m_) = (u32)(ebx); }
  /* 0055d4b0 mov dword ptr [esi + 0xb2c], ebx */ { const u32 m_ = (u32)(esi + 0xb2cu); M32(m_) = (u32)(ebx); }
  /* 0055d4b6 mov dword ptr [esi + 0xb30], ebx */ { const u32 m_ = (u32)(esi + 0xb30u); M32(m_) = (u32)(ebx); }
  /* 0055d4bc mov dword ptr [esi + 0xb34], ebx */ { const u32 m_ = (u32)(esi + 0xb34u); M32(m_) = (u32)(ebx); }
  /* 0055d4c2 mov dword ptr [esi + 0xb38], ebx */ { const u32 m_ = (u32)(esi + 0xb38u); M32(m_) = (u32)(ebx); }
  /* 0055d4c8 mov dword ptr [esi + 0xb3c], ebx */ { const u32 m_ = (u32)(esi + 0xb3cu); M32(m_) = (u32)(ebx); }
  /* 0055d4ce mov dword ptr [esi + 0xb40], ebx */ { const u32 m_ = (u32)(esi + 0xb40u); M32(m_) = (u32)(ebx); }
  /* 0055d4d4 mov dword ptr [esi + 0xb44], ebx */ { const u32 m_ = (u32)(esi + 0xb44u); M32(m_) = (u32)(ebx); }
  /* 0055d4da mov dword ptr [esi + 0xb48], ebx */ { const u32 m_ = (u32)(esi + 0xb48u); M32(m_) = (u32)(ebx); }
  /* 0055d4e0 mov dword ptr [esi + 0xb4c], ebx */ { const u32 m_ = (u32)(esi + 0xb4cu); M32(m_) = (u32)(ebx); }
  /* 0055d4e6 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055d4e8 lea eax, [esi + 0xb50] */ eax = (u32)((u32)(esi + 0xb50u));
  /* 0055d4ee mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0055d4f0 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0055d4f3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0055d4f6 mov dword ptr [esi + 0xb5c], ebx */ { const u32 m_ = (u32)(esi + 0xb5cu); M32(m_) = (u32)(ebx); }
  /* 0055d4fc mov word ptr [esi + 0xb60], bx */ { const u32 m_ = (u32)(esi + 0xb60u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0055d503 mov dword ptr [esi + 0xb64], ebx */ { const u32 m_ = (u32)(esi + 0xb64u); M32(m_) = (u32)(ebx); }
  /* 0055d509 mov dword ptr [esi + 0xb68], ebx */ { const u32 m_ = (u32)(esi + 0xb68u); M32(m_) = (u32)(ebx); }
  /* 0055d50f mov dword ptr [esi + 0xb6c], ebx */ { const u32 m_ = (u32)(esi + 0xb6cu); M32(m_) = (u32)(ebx); }
  /* 0055d515 mov dword ptr [esi + 0xb70], ebx */ { const u32 m_ = (u32)(esi + 0xb70u); M32(m_) = (u32)(ebx); }
  /* 0055d51b mov dword ptr [esi + 0xb74], ebx */ { const u32 m_ = (u32)(esi + 0xb74u); M32(m_) = (u32)(ebx); }
  /* 0055d521 mov dword ptr [esi + 0xb78], ebx */ { const u32 m_ = (u32)(esi + 0xb78u); M32(m_) = (u32)(ebx); }
  /* 0055d527 mov dword ptr [esi + 0xb7c], ebx */ { const u32 m_ = (u32)(esi + 0xb7cu); M32(m_) = (u32)(ebx); }
  /* 0055d52d mov dword ptr [esi + 0xb80], ebx */ { const u32 m_ = (u32)(esi + 0xb80u); M32(m_) = (u32)(ebx); }
  /* 0055d533 mov word ptr [esi + 0xb84], bx */ { const u32 m_ = (u32)(esi + 0xb84u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0055d53a mov dword ptr [esi + 0xb88], ebx */ { const u32 m_ = (u32)(esi + 0xb88u); M32(m_) = (u32)(ebx); }
  /* 0055d540 mov dword ptr [esi + 0xb8c], ebx */ { const u32 m_ = (u32)(esi + 0xb8cu); M32(m_) = (u32)(ebx); }
  /* 0055d546 lea edx, [esi + 0xb9c] */ edx = (u32)((u32)(esi + 0xb9cu));
  /* 0055d54c mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0055d54e mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0055d551 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0055d554 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0055d557 mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0055d55a mov dword ptr [edx + 0x14], ecx */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0055d55d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d55f mov dword ptr [esi + 0xbb4], ebx */ { const u32 m_ = (u32)(esi + 0xbb4u); M32(m_) = (u32)(ebx); }
  /* 0055d565 mov dword ptr [esi + 0xbb8], ebx */ { const u32 m_ = (u32)(esi + 0xbb8u); M32(m_) = (u32)(ebx); }
  /* 0055d56b mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 0055d570 lea edi, [esi + 0xbc8] */ edi = (u32)((u32)(esi + 0xbc8u));
  /* 0055d576 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d578 mov ecx, 0xc */ { ecx = (u32)(0xcu); }
  /* 0055d57d lea edi, [esi + 0xc04] */ edi = (u32)((u32)(esi + 0xc04u));
  /* 0055d583 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d585 lea ecx, [esi + 0xc40] */ ecx = (u32)((u32)(esi + 0xc40u));
  /* 0055d58b mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0055d58d mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055d590 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055d593 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0055d596 lea eax, [esi + 0xc5c] */ eax = (u32)((u32)(esi + 0xc5cu));
  /* 0055d59c xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0055d59e mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0055d5a0 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0055d5a3 mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 0055d5a6 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 0055d5a9 mov dword ptr [esi + 0xc6c], ebx */ { const u32 m_ = (u32)(esi + 0xc6cu); M32(m_) = (u32)(ebx); }
  /* 0055d5af mov dword ptr [esi + 0xc70], ebx */ { const u32 m_ = (u32)(esi + 0xc70u); M32(m_) = (u32)(ebx); }
  /* 0055d5b5 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055d5b7 lea edx, [esi + 0xc80] */ edx = (u32)((u32)(esi + 0xc80u));
  /* 0055d5bd mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 0055d5bf mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0055d5c2 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0055d5c5 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0055d5c8 mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0055d5cb mov dword ptr [edx + 0x14], ecx */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0055d5ce mov dword ptr [edx + 0x18], ecx */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(ecx); }
  /* 0055d5d1 mov dword ptr [edx + 0x1c], ecx */ { const u32 m_ = (u32)(edx + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 0055d5d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d5d6 lea ecx, [esi + 0xcac] */ ecx = (u32)((u32)(esi + 0xcacu));
  /* 0055d5dc mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0055d5de mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055d5e1 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055d5e4 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 0055d5e7 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 0055d5ea mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0055d5ed mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 0055d5f0 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0055d5f3 lea edi, [esi + 0xd0c] */ edi = (u32)((u32)(esi + 0xd0cu));
  /* 0055d5f9 mov word ptr [esi + 0xccc], bx */ { const u32 m_ = (u32)(esi + 0xcccu); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 0055d600 mov dword ptr [esi + 0xcd0], ebx */ { const u32 m_ = (u32)(esi + 0xcd0u); M32(m_) = (u32)(ebx); }
  /* 0055d606 mov dword ptr [esi + 0xcd4], ebx */ { const u32 m_ = (u32)(esi + 0xcd4u); M32(m_) = (u32)(ebx); }
  /* 0055d60c mov dword ptr [esi + 0xcd8], ebx */ { const u32 m_ = (u32)(esi + 0xcd8u); M32(m_) = (u32)(ebx); }
  /* 0055d612 mov dword ptr [esi + 0xcdc], ebx */ { const u32 m_ = (u32)(esi + 0xcdcu); M32(m_) = (u32)(ebx); }
  /* 0055d618 mov dword ptr [esi + 0xce0], ebx */ { const u32 m_ = (u32)(esi + 0xce0u); M32(m_) = (u32)(ebx); }
  /* 0055d61e mov dword ptr [esi + 0xce4], ebx */ { const u32 m_ = (u32)(esi + 0xce4u); M32(m_) = (u32)(ebx); }
  /* 0055d624 mov dword ptr [esi + 0xce8], ebx */ { const u32 m_ = (u32)(esi + 0xce8u); M32(m_) = (u32)(ebx); }
  /* 0055d62a mov dword ptr [esi + 0xcec], ebx */ { const u32 m_ = (u32)(esi + 0xcecu); M32(m_) = (u32)(ebx); }
  /* 0055d630 mov dword ptr [esi + 0xcf0], ebx */ { const u32 m_ = (u32)(esi + 0xcf0u); M32(m_) = (u32)(ebx); }
  /* 0055d636 mov dword ptr [esi + 0xcf4], ebx */ { const u32 m_ = (u32)(esi + 0xcf4u); M32(m_) = (u32)(ebx); }
  /* 0055d63c mov dword ptr [esi + 0xcf8], ebx */ { const u32 m_ = (u32)(esi + 0xcf8u); M32(m_) = (u32)(ebx); }
  /* 0055d642 mov dword ptr [esi + 0xcfc], ebx */ { const u32 m_ = (u32)(esi + 0xcfcu); M32(m_) = (u32)(ebx); }
  /* 0055d648 mov dword ptr [esi + 0xd00], ebx */ { const u32 m_ = (u32)(esi + 0xd00u); M32(m_) = (u32)(ebx); }
  /* 0055d64e mov dword ptr [esi + 0xd04], ebx */ { const u32 m_ = (u32)(esi + 0xd04u); M32(m_) = (u32)(ebx); }
  /* 0055d654 mov dword ptr [esi + 0xd08], ebx */ { const u32 m_ = (u32)(esi + 0xd08u); M32(m_) = (u32)(ebx); }
  /* 0055d65a mov eax, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); eax = (u32)(M32(m_)); }
  /* 0055d65d cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055d660 jb 0x55d667 */ if (CF_) goto L_0055d667;
  /* 0055d662 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055d665 jmp 0x55d66a */ goto L_0055d66a;
L_0055d667:;
  /* 0055d667 lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
L_0055d66a:;
  /* 0055d66a mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 0055d66d add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055d66f cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055d672 jb 0x55d679 */ if (CF_) goto L_0055d679;
  /* 0055d674 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055d677 jmp 0x55d67c */ goto L_0055d67c;
L_0055d679:;
  /* 0055d679 lea eax, [edi + 4] */ eax = (u32)((u32)(edi + 0x4u));
L_0055d67c:;
  /* 0055d67c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055d67d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055d67e lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055d681 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055d682 call 0x40cdc0 */ esp -= 4; M32(esp) = 0x55d687u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x55d682u); RETCHK(0x55d687u, 0x55d682u); LOADALL;
  /* 0055d687 mov edx, esi */ { edx = (u32)(esi); }
  /* 0055d689 mov byte ptr [esi + 0xd28], bl */ { const u32 m_ = (u32)(esi + 0xd28u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055d68f mov byte ptr [esi + 0xd29], bl */ { const u32 m_ = (u32)(esi + 0xd29u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055d695 mov dword ptr [esi + 0xd30], 2 */ { const u32 m_ = (u32)(esi + 0xd30u); M32(m_) = (u32)(0x2u); }
  /* 0055d69f mov dword ptr [esi + 0xd34], ebx */ { const u32 m_ = (u32)(esi + 0xd34u); M32(m_) = (u32)(ebx); }
  /* 0055d6a5 mov dword ptr [esi + 0xd38], 0x3c23d70a */ { const u32 m_ = (u32)(esi + 0xd38u); M32(m_) = (u32)(0x3c23d70au); }
  /* 0055d6af mov dword ptr [esi + 0xd3c], ebx */ { const u32 m_ = (u32)(esi + 0xd3cu); M32(m_) = (u32)(ebx); }
  /* 0055d6b5 mov dword ptr [esi + 0xd40], 0x2710 */ { const u32 m_ = (u32)(esi + 0xd40u); M32(m_) = (u32)(0x2710u); }
  /* 0055d6bf mov dword ptr [esi + 0xd44], ebx */ { const u32 m_ = (u32)(esi + 0xd44u); M32(m_) = (u32)(ebx); }
  /* 0055d6c5 call 0x55d6f0 */ esp -= 4; M32(esp) = 0x55d6cau; SAVEALL; F_0055d6f0(c); ABI_CHECK(0x55d6f0u, 0x55d6c5u); RETCHK(0x55d6cau, 0x55d6c5u); LOADALL;
  /* 0055d6ca call 0x55d710 */ esp -= 4; M32(esp) = 0x55d6cfu; SAVEALL; F_0055d710(c); ABI_CHECK(0x55d710u, 0x55d6cau); RETCHK(0x55d6cfu, 0x55d6cau); LOADALL;
  /* 0055d6cf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055d6d0 mov byte ptr [esi + 0xf48], bl */ { const u32 m_ = (u32)(esi + 0xf48u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055d6d6 mov byte ptr [esi + 0xd48], bl */ { const u32 m_ = (u32)(esi + 0xd48u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055d6dc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055d6dd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055d6df pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d6e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055d6f0(CPU *c) {
  NATIVE_HOOK(0x55d6f0u) REGS; LOADALL;
L_0055d6f0:;
  /* 0055d6f0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055d6f1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d6f3 mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 0055d6f8 lea edi, [edx + 0xe48] */ edi = (u32)((u32)(edx + 0xe48u));
  /* 0055d6fe rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d700 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0055d702 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0055d703 mov byte ptr [edx + 0xf47], 0 */ { const u32 m_ = (u32)(edx + 0xf47u); M8(m_) = (u8)(0x0u); }
  /* 0055d70a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055d70b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055d710(CPU *c) {
  NATIVE_HOOK(0x55d710u) REGS; LOADALL;
L_0055d710:;
  /* 0055d710 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055d711 mov edi, edx */ { edi = (u32)(edx); }
  /* 0055d713 add edi, 0xd49 */ { u32 a_ = edi, b_ = 0xd49u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055d719 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d71b mov ecx, 0x3f */ { ecx = (u32)(0x3fu); }
  /* 0055d720 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0055d722 stosw word ptr es:[edi], ax */ { u32 st_ = c->df ? (u32)-2 : 2u; M16(edi) = (u16)(eax & 0xffffu); edi += st_; }
  /* 0055d724 stosb byte ptr es:[edi], al */ { u32 st_ = c->df ? (u32)-1 : 1u; M8(edi) = (u8)(eax & 0xffu); edi += st_; }
  /* 0055d725 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055d726 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055d7c0(CPU *c) {
  NATIVE_HOOK(0x55d7c0u) REGS; LOADALL;
L_0055d7c0:;
  /* 0055d7c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d7c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d7c3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d7c7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d7c8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d7ca mov dword ptr [esi], 0x656638 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656638u); }
  /* 0055d7d0 je 0x55d7db */ if (ZF_) goto L_0055d7db;
  /* 0055d7d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d7d3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d7d8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d7d3u); RETCHK(0x55d7d8u, 0x55d7d3u); LOADALL;
  /* 0055d7d8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d7db:;
  /* 0055d7db mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d7dd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d7de pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d7df ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d7f0(CPU *c) {
  NATIVE_HOOK(0x55d7f0u) REGS; LOADALL;
L_0055d7f0:;
  /* 0055d7f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d7f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d7f3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d7f7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d7f8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d7fa mov dword ptr [esi], 0x65660c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65660cu); }
  /* 0055d800 je 0x55d80b */ if (ZF_) goto L_0055d80b;
  /* 0055d802 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d803 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d808u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d803u); RETCHK(0x55d808u, 0x55d803u); LOADALL;
  /* 0055d808 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d80b:;
  /* 0055d80b mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d80d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d80e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d80f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d820(CPU *c) {
  NATIVE_HOOK(0x55d820u) REGS; LOADALL;
L_0055d820:;
  /* 0055d820 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d821 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d823 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d827 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d828 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d82a mov dword ptr [esi], 0x656674 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656674u); }
  /* 0055d830 je 0x55d83b */ if (ZF_) goto L_0055d83b;
  /* 0055d832 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d833 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d838u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d833u); RETCHK(0x55d838u, 0x55d833u); LOADALL;
  /* 0055d838 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d83b:;
  /* 0055d83b mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d83d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d83e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d83f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d850(CPU *c) {
  NATIVE_HOOK(0x55d850u) REGS; LOADALL;
L_0055d850:;
  /* 0055d850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d853 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d857 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d858 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d85a mov dword ptr [esi], 0x656644 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656644u); }
  /* 0055d860 je 0x55d86b */ if (ZF_) goto L_0055d86b;
  /* 0055d862 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d863 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d868u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d863u); RETCHK(0x55d868u, 0x55d863u); LOADALL;
  /* 0055d868 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d86b:;
  /* 0055d86b mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d86d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d86e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d86f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d880(CPU *c) {
  NATIVE_HOOK(0x55d880u) REGS; LOADALL;
L_0055d880:;
  /* 0055d880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d883 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d887 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d888 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d88a mov dword ptr [esi], 0x656614 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656614u); }
  /* 0055d890 je 0x55d89b */ if (ZF_) goto L_0055d89b;
  /* 0055d892 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d893 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d898u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d893u); RETCHK(0x55d898u, 0x55d893u); LOADALL;
  /* 0055d898 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d89b:;
  /* 0055d89b mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d89d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d89e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d89f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d8b0(CPU *c) {
  NATIVE_HOOK(0x55d8b0u) REGS; LOADALL;
L_0055d8b0:;
  /* 0055d8b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d8b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d8b3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d8b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d8b8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d8ba mov dword ptr [esi], 0x656670 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656670u); }
  /* 0055d8c0 je 0x55d8cb */ if (ZF_) goto L_0055d8cb;
  /* 0055d8c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d8c3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d8c8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d8c3u); RETCHK(0x55d8c8u, 0x55d8c3u); LOADALL;
  /* 0055d8c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d8cb:;
  /* 0055d8cb mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d8cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d8ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d8cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d8e0(CPU *c) {
  NATIVE_HOOK(0x55d8e0u) REGS; LOADALL;
L_0055d8e0:;
  /* 0055d8e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d8e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d8e3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d8e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d8e8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d8ea mov dword ptr [esi], 0x656640 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656640u); }
  /* 0055d8f0 je 0x55d8fb */ if (ZF_) goto L_0055d8fb;
  /* 0055d8f2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d8f3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d8f8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d8f3u); RETCHK(0x55d8f8u, 0x55d8f3u); LOADALL;
  /* 0055d8f8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d8fb:;
  /* 0055d8fb mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d8fd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d8fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d8ff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d910(CPU *c) {
  NATIVE_HOOK(0x55d910u) REGS; LOADALL;
L_0055d910:;
  /* 0055d910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d913 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d917 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d918 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d91a mov dword ptr [esi], 0x656610 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656610u); }
  /* 0055d920 je 0x55d92b */ if (ZF_) goto L_0055d92b;
  /* 0055d922 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d923 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d928u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d923u); RETCHK(0x55d928u, 0x55d923u); LOADALL;
  /* 0055d928 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d92b:;
  /* 0055d92b mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d92d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d92e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d92f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d940(CPU *c) {
  NATIVE_HOOK(0x55d940u) REGS; LOADALL;
L_0055d940:;
  /* 0055d940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d943 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d947 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d948 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d94a mov dword ptr [esi], 0x65663c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65663cu); }
  /* 0055d950 je 0x55d95b */ if (ZF_) goto L_0055d95b;
  /* 0055d952 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d953 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d958u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d953u); RETCHK(0x55d958u, 0x55d953u); LOADALL;
  /* 0055d958 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d95b:;
  /* 0055d95b mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d95d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d95e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d95f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d970(CPU *c) {
  NATIVE_HOOK(0x55d970u) REGS; LOADALL;
L_0055d970:;
  /* 0055d970 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d971 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d973 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d977 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d978 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d97a mov dword ptr [esi], 0x6566b4 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6566b4u); }
  /* 0055d980 je 0x55d98b */ if (ZF_) goto L_0055d98b;
  /* 0055d982 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d983 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d988u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d983u); RETCHK(0x55d988u, 0x55d983u); LOADALL;
  /* 0055d988 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d98b:;
  /* 0055d98b mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d98d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d98e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d98f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d9b0(CPU *c) {
  NATIVE_HOOK(0x55d9b0u) REGS; LOADALL;
L_0055d9b0:;
  /* 0055d9b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055d9b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055d9b3 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055d9b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d9b8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055d9ba mov dword ptr [esi], 0x656678 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656678u); }
  /* 0055d9c0 je 0x55d9cb */ if (ZF_) goto L_0055d9cb;
  /* 0055d9c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055d9c3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55d9c8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55d9c3u); RETCHK(0x55d9c8u, 0x55d9c3u); LOADALL;
  /* 0055d9c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055d9cb:;
  /* 0055d9cb mov eax, esi */ { eax = (u32)(esi); }
  /* 0055d9cd pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055d9ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055d9cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055d9e0(CPU *c) {
  NATIVE_HOOK(0x55d9e0u) REGS; LOADALL;
L_0055d9e0:;
  /* 0055d9e0 lea edx, [esi + 0x14] */ edx = (u32)((u32)(esi + 0x14u));
  /* 0055d9e3 mov dword ptr [esi], 0x6566ec */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6566ecu); }
  /* 0055d9e9 call 0x5664f0 */ esp -= 4; M32(esp) = 0x55d9eeu; SAVEALL; F_005664f0(c); ABI_CHECK(0x5664f0u, 0x55d9e9u); RETCHK(0x55d9eeu, 0x55d9e9u); LOADALL;
  /* 0055d9ee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055d9f0 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055d9f3 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055d9f6 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 0055d9f9 call 0x567ba0 */ esp -= 4; M32(esp) = 0x55d9feu; SAVEALL; F_00567ba0(c); ABI_CHECK(0x567ba0u, 0x55d9f9u); RETCHK(0x55d9feu, 0x55d9f9u); LOADALL;
  /* 0055d9fe mov eax, esi */ { eax = (u32)(esi); }
  /* 0055da00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055da10(CPU *c) {
  NATIVE_HOOK(0x55da10u) REGS; LOADALL;
L_0055da10:;
  /* 0055da10 mov byte ptr [0x7a67b0], 1 */ { const u32 m_ = (u32)(0x7a67b0u); M8(m_) = (u8)(0x1u); }
  /* 0055da17 call 0x601668 */ esp -= 4; M32(esp) = 0x55da1cu; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x55da17u); RETCHK(0x55da1cu, 0x55da17u); LOADALL;
  /* 0055da1c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055da1e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055da20 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0055da22 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0055da24 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0055da26 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055da27 call dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55da2du; SAVEALL; call_ind(c, t_); RETCHK(0x55da2du, 0x55da27u); LOADALL; }
  /* 0055da2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055da30(CPU *c) {
  NATIVE_HOOK(0x55da30u) REGS; LOADALL;
L_0055da30:;
  /* 0055da30 mov byte ptr [0x7a67b0], 0 */ { const u32 m_ = (u32)(0x7a67b0u); M8(m_) = (u8)(0x0u); }
  /* 0055da37 call 0x601668 */ esp -= 4; M32(esp) = 0x55da3cu; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x55da37u); RETCHK(0x55da3cu, 0x55da37u); LOADALL;
  /* 0055da3c mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055da3e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055da40 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0055da42 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0055da44 push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0055da46 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055da47 call dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55da4du; SAVEALL; call_ind(c, t_); RETCHK(0x55da4du, 0x55da47u); LOADALL; }
  /* 0055da4d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055da50(CPU *c) {
  NATIVE_HOOK(0x55da50u) REGS; LOADALL;
L_0055da50:;
  /* 0055da50 mov al, byte ptr [0x7a67b0] */ { const u32 m_ = (u32)(0x7a67b0u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055da55 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055da60(CPU *c) {
  NATIVE_HOOK(0x55da60u) REGS; LOADALL;
L_0055da60:;
  /* 0055da60 mov byte ptr [0x7a67b0], 0 */ { const u32 m_ = (u32)(0x7a67b0u); M8(m_) = (u8)(0x0u); }
  /* 0055da67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055da70(CPU *c) {
  NATIVE_HOOK(0x55da70u) REGS; LOADALL;
L_0055da70:;
  /* 0055da70 mov edx, 0x7a66b0 */ { edx = (u32)(0x7a66b0u); }
  /* 0055da75 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
L_0055da77:;
  /* 0055da77 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055da79 mov byte ptr [edx + eax], cl */ { const u32 m_ = (u32)(edx + eax); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 0055da7c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055da7d test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055da7f jne 0x55da77 */ if (!ZF_) goto L_0055da77;
  /* 0055da81 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055da90(CPU *c) {
  NATIVE_HOOK(0x55da90u) REGS; LOADALL;
L_0055da90:;
  /* 0055da90 call 0x601668 */ esp -= 4; M32(esp) = 0x55da95u; SAVEALL; F_00601668(c); ABI_CHECK(0x601668u, 0x55da90u); RETCHK(0x55da95u, 0x55da90u); LOADALL;
  /* 0055da95 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055da97 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055da99 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0055da9b push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0055da9d push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 0055da9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055daa0 call dword ptr [ecx + 0x80] */ { const u32 m_ = (u32)(ecx + 0x80u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55daa6u; SAVEALL; call_ind(c, t_); RETCHK(0x55daa6u, 0x55daa0u); LOADALL; }
  /* 0055daa6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055dac0(CPU *c) {
  NATIVE_HOOK(0x55dac0u) REGS; LOADALL;
L_0055dac0:;
  /* 0055dac0 mov dword ptr [eax], 0x65667c */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x65667cu); }
  /* 0055dac6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055dad0(CPU *c) {
  NATIVE_HOOK(0x55dad0u) REGS; LOADALL;
L_0055dad0:;
  /* 0055dad0 mov dword ptr [eax], 0x6566b4 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6566b4u); }
  /* 0055dad6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055dae0(CPU *c) {
  NATIVE_HOOK(0x55dae0u) REGS; LOADALL;
L_0055dae0:;
  /* 0055dae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055dae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055dae3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055dae4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055dae6 mov eax, esi */ { eax = (u32)(esi); }
  /* 0055dae8 call 0x55dad0 */ esp -= 4; M32(esp) = 0x55daedu; SAVEALL; F_0055dad0(c); ABI_CHECK(0x55dad0u, 0x55dae8u); RETCHK(0x55daedu, 0x55dae8u); LOADALL;
  /* 0055daed test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055daf1 je 0x55dafc */ if (ZF_) goto L_0055dafc;
  /* 0055daf3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055daf4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55daf9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55daf4u); RETCHK(0x55daf9u, 0x55daf4u); LOADALL;
  /* 0055daf9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055dafc:;
  /* 0055dafc mov eax, esi */ { eax = (u32)(esi); }
  /* 0055dafe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055daff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055db00 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055db10(CPU *c) {
  NATIVE_HOOK(0x55db10u) REGS; LOADALL;
L_0055db10:;
  /* 0055db10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055db11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055db13 sub esp, 0x104 */ { u32 a_ = esp, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055db19 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055db1e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055db21 mov al, byte ptr [0x9b8880] */ { const u32 m_ = (u32)(0x9b8880u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055db26 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055db28 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055db29 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055db2b jne 0x55db96 */ if (!ZF_) goto L_0055db96;
  /* 0055db2d mov al, byte ptr [0x9b918d] */ { const u32 m_ = (u32)(0x9b918du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055db32 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055db34 jne 0x55db8a */ if (!ZF_) goto L_0055db8a;
  /* 0055db36 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055db38 call 0x4019a0 */ esp -= 4; M32(esp) = 0x55db3du; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x55db38u); RETCHK(0x55db3du, 0x55db38u); LOADALL;
  /* 0055db3d mov cl, byte ptr [eax + 0xc19] */ { const u32 m_ = (u32)(eax + 0xc19u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055db43 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055db46 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055db48 je 0x55db74 */ if (ZF_) goto L_0055db74;
  /* 0055db4a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055db4c call 0x4019a0 */ esp -= 4; M32(esp) = 0x55db51u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x55db4cu); RETCHK(0x55db51u, 0x55db4cu); LOADALL;
  /* 0055db51 mov eax, dword ptr [eax + 0xb20] */ { const u32 m_ = (u32)(eax + 0xb20u); eax = (u32)(M32(m_)); }
  /* 0055db57 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055db58 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055db5e push 0x65678c */ { u32 v_ = 0x65678cu; esp -= 4; M32(esp) = v_; }
  /* 0055db63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055db64 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x55db69u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x55db64u); RETCHK(0x55db69u, 0x55db64u); LOADALL;
  /* 0055db69 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055db6c lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055db72 jmp 0x55db79 */ goto L_0055db79;
L_0055db74:;
  /* 0055db74 mov eax, 0x656764 */ { eax = (u32)(0x656764u); }
L_0055db79:;
  /* 0055db79 call 0x55da70 */ esp -= 4; M32(esp) = 0x55db7eu; SAVEALL; F_0055da70(c); ABI_CHECK(0x55da70u, 0x55db79u); RETCHK(0x55db7eu, 0x55db79u); LOADALL;
  /* 0055db7e call 0x55da90 */ esp -= 4; M32(esp) = 0x55db83u; SAVEALL; F_0055da90(c); ABI_CHECK(0x55da90u, 0x55db7eu); RETCHK(0x55db83u, 0x55db7eu); LOADALL;
  /* 0055db83 mov byte ptr [0x9b918d], 1 */ { const u32 m_ = (u32)(0x9b918du); M8(m_) = (u8)(0x1u); }
L_0055db8a:;
  /* 0055db8a mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055db8d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055db8f push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 0055db91 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055db93 call dword ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55db96u; SAVEALL; call_ind(c, t_); RETCHK(0x55db96u, 0x55db93u); LOADALL; }
L_0055db96:;
  /* 0055db96 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055db99 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055db9a call 0x61af31 */ esp -= 4; M32(esp) = 0x55db9fu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55db9au); RETCHK(0x55db9fu, 0x55db9au); LOADALL;
  /* 0055db9f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055dba1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055dba2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055dbb0(CPU *c) {
  NATIVE_HOOK(0x55dbb0u) REGS; LOADALL;
L_0055dbb0:;
  /* 0055dbb0 jmp 0x62d640 */ goto L_0062d640;
L_0055f740:;
  /* 0055f740 mov ecx, dword ptr [eax + 0x44] */ { const u32 m_ = (u32)(eax + 0x44u); ecx = (u32)(M32(m_)); }
  /* 0055f743 mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 0055f748 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f74a jb 0x55f751 */ if (CF_) goto L_0055f751;
  /* 0055f74c mov ecx, dword ptr [eax + 0x30] */ { const u32 m_ = (u32)(eax + 0x30u); ecx = (u32)(M32(m_)); }
  /* 0055f74f jmp 0x55f754 */ goto L_0055f754;
L_0055f751:;
  /* 0055f751 lea ecx, [eax + 0x30] */ ecx = (u32)((u32)(eax + 0x30u));
L_0055f754:;
  /* 0055f754 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f755 cmp dword ptr [eax + 0x108], edx */ { const u32 m_ = (u32)(eax + 0x108u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f75b jb 0x55f777 */ if (CF_) goto L_0055f777;
  /* 0055f75d mov eax, dword ptr [eax + 0xf4] */ { const u32 m_ = (u32)(eax + 0xf4u); eax = (u32)(M32(m_)); }
  /* 0055f763 mov esi, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); esi = (u32)(M32(m_)); }
  /* 0055f769 push 0x640c78 */ { u32 v_ = 0x640c78u; esp -= 4; M32(esp) = v_; }
  /* 0055f76e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f76f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f770 call 0x5658f0 */ esp -= 4; M32(esp) = 0x55f775u; SAVEALL; F_005658f0(c); ABI_CHECK(0x5658f0u, 0x55f770u); RETCHK(0x55f775u, 0x55f770u); LOADALL;
  /* 0055f775 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f776 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055f777:;
  /* 0055f777 mov esi, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); esi = (u32)(M32(m_)); }
  /* 0055f77d push 0x640c78 */ { u32 v_ = 0x640c78u; esp -= 4; M32(esp) = v_; }
  /* 0055f782 add eax, 0xf4 */ { u32 a_ = eax, b_ = 0xf4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f787 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f788 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f789 call 0x5658f0 */ esp -= 4; M32(esp) = 0x55f78eu; SAVEALL; F_005658f0(c); ABI_CHECK(0x5658f0u, 0x55f789u); RETCHK(0x55f78eu, 0x55f789u); LOADALL;
  /* 0055f78e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f78f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0062d640:;
  /* 0062d640 mov byte ptr [0x9b8880], 0 */ { const u32 m_ = (u32)(0x9b8880u); M8(m_) = (u8)(0x0u); }
  /* 0062d647 mov eax, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); eax = (u32)(M32(m_)); }
  /* 0062d64a jmp 0x55f740 */ goto L_0055f740;
}

void F_0055dbc0(CPU *c) {
  NATIVE_HOOK(0x55dbc0u) REGS; LOADALL;
L_0055dbc0:;
  /* 0055dbc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055dbc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055dbc3 sub esp, 0x104 */ { u32 a_ = esp, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055dbc9 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055dbce push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055dbcf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055dbd0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055dbd1 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055dbd4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055dbd5 push 0x656744 */ { u32 v_ = 0x656744u; esp -= 4; M32(esp) = v_; }
  /* 0055dbda mov esi, 0x7a85f4 */ { esi = (u32)(0x7a85f4u); }
  /* 0055dbdf mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055dbe2 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055dbe4 call 0x541010 */ esp -= 4; M32(esp) = 0x55dbe9u; SAVEALL; F_00541010(c); ABI_CHECK(0x541010u, 0x55dbe4u); RETCHK(0x55dbe9u, 0x55dbe4u); LOADALL;
  /* 0055dbe9 mov al, byte ptr [0x9b918c] */ { const u32 m_ = (u32)(0x9b918cu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055dbee add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055dbf1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055dbf3 jne 0x55dc5a */ if (!ZF_) goto L_0055dc5a;
  /* 0055dbf5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055dbf7 call 0x4019a0 */ esp -= 4; M32(esp) = 0x55dbfcu; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x55dbf7u); RETCHK(0x55dbfcu, 0x55dbf7u); LOADALL;
  /* 0055dbfc mov cl, byte ptr [eax + 0xc19] */ { const u32 m_ = (u32)(eax + 0xc19u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055dc02 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055dc05 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055dc07 je 0x55dc2e */ if (ZF_) goto L_0055dc2e;
  /* 0055dc09 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055dc0b call 0x4019a0 */ esp -= 4; M32(esp) = 0x55dc10u; SAVEALL; F_004019a0(c); ABI_CHECK(0x4019a0u, 0x55dc0bu); RETCHK(0x55dc10u, 0x55dc0bu); LOADALL;
  /* 0055dc10 mov eax, dword ptr [eax + 0xb20] */ { const u32 m_ = (u32)(eax + 0xb20u); eax = (u32)(M32(m_)); }
  /* 0055dc16 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dc17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055dc18 lea ecx, [ebp - 0x104] */ ecx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055dc1e push 0x656718 */ { u32 v_ = 0x656718u; esp -= 4; M32(esp) = v_; }
  /* 0055dc23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055dc24 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x55dc29u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x55dc24u); RETCHK(0x55dc29u, 0x55dc24u); LOADALL;
  /* 0055dc29 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055dc2c jmp 0x55dc43 */ goto L_0055dc43;
L_0055dc2e:;
  /* 0055dc2e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055dc2f lea edx, [ebp - 0x104] */ edx = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055dc35 push 0x656744 */ { u32 v_ = 0x656744u; esp -= 4; M32(esp) = v_; }
  /* 0055dc3a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055dc3b call 0x5fe9aa */ esp -= 4; M32(esp) = 0x55dc40u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x55dc3bu); RETCHK(0x55dc40u, 0x55dc3bu); LOADALL;
  /* 0055dc40 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055dc43:;
  /* 0055dc43 lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055dc49 call 0x55da70 */ esp -= 4; M32(esp) = 0x55dc4eu; SAVEALL; F_0055da70(c); ABI_CHECK(0x55da70u, 0x55dc49u); RETCHK(0x55dc4eu, 0x55dc49u); LOADALL;
  /* 0055dc4e call 0x55da90 */ esp -= 4; M32(esp) = 0x55dc53u; SAVEALL; F_0055da90(c); ABI_CHECK(0x55da90u, 0x55dc4eu); RETCHK(0x55dc53u, 0x55dc4eu); LOADALL;
  /* 0055dc53 mov byte ptr [0x9b918c], 1 */ { const u32 m_ = (u32)(0x9b918cu); M8(m_) = (u8)(0x1u); }
L_0055dc5a:;
  /* 0055dc5a mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055dc5d mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055dc5f push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0055dc61 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055dc63 call dword ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55dc66u; SAVEALL; call_ind(c, t_); RETCHK(0x55dc66u, 0x55dc63u); LOADALL; }
  /* 0055dc66 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055dc69 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055dc6a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055dc6b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055dc6c call 0x61af31 */ esp -= 4; M32(esp) = 0x55dc71u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55dc6cu); RETCHK(0x55dc71u, 0x55dc6cu); LOADALL;
  /* 0055dc71 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055dc73 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055dc74 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055dc80(CPU *c) {
  NATIVE_HOOK(0x55dc80u) REGS; LOADALL;
L_0055dc80:;
  /* 0055dc80 cmp dword ptr [esi], 0x17 */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = 0x17u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055dc83 je 0x55dc98 */ if (ZF_) goto L_0055dc98;
  /* 0055dc85 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055dc88 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 0055dc8b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055dc8c mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0055dc92 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dc93 call 0x55f880 */ esp -= 4; M32(esp) = 0x55dc98u; SAVEALL; F_0055f880(c); ABI_CHECK(0x55f880u, 0x55dc93u); RETCHK(0x55dc98u, 0x55dc93u); LOADALL;
L_0055dc98:;
  /* 0055dc98 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055dc9b mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0055dc9d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055dc9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dca0 call dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55dca3u; SAVEALL; call_ind(c, t_); RETCHK(0x55dca3u, 0x55dca0u); LOADALL; }
  /* 0055dca3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055dcb0(CPU *c) {
  NATIVE_HOOK(0x55dcb0u) REGS; LOADALL;
L_0055dcb0:;
  /* 0055dcb0 cmp dword ptr [ebx], 0 */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055dcb3 jne 0x55dd72 */ if (!ZF_) goto L_0055dd72;
  /* 0055dcb9 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055dcbc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055dcbe jle 0x55dd7d */ if ((ZF_|LT_)) goto L_0055dd7d;
  /* 0055dcc4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055dcc5 mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055dcc8 mov eax, dword ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0055dcce mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055dcd1 add esi, 0x148 */ { u32 a_ = esi, b_ = 0x148u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055dcd7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055dcd8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055dcda call 0x55fba0 */ esp -= 4; M32(esp) = 0x55dcdfu; SAVEALL; F_0055fba0(c); ABI_CHECK(0x55fba0u, 0x55dcdau); RETCHK(0x55dcdfu, 0x55dcdau); LOADALL;
  /* 0055dcdf mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055dce2 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055dce5 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055dce8 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0055dcef mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055dcf1 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055dcf4 mov dword ptr [esi + 8], esi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0055dcf7 mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055dcfa mov edx, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); edx = (u32)(M32(m_)); }
  /* 0055dd00 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055dd03 add esi, 0x154 */ { u32 a_ = esi, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055dd09 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dd0a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055dd0c call 0x55fdf0 */ esp -= 4; M32(esp) = 0x55dd11u; SAVEALL; F_0055fdf0(c); ABI_CHECK(0x55fdf0u, 0x55dd0cu); RETCHK(0x55dd11u, 0x55dd0cu); LOADALL;
  /* 0055dd11 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055dd14 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055dd17 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055dd1a mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0055dd21 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055dd23 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055dd26 mov dword ptr [esi + 8], esi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0055dd29 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055dd2c lea ecx, [ebx + 8] */ ecx = (u32)((u32)(ebx + 0x8u));
  /* 0055dd2f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055dd30 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0055dd36 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dd37 call 0x55f880 */ esp -= 4; M32(esp) = 0x55dd3cu; SAVEALL; F_0055f880(c); ABI_CHECK(0x55f880u, 0x55dd37u); RETCHK(0x55dd3cu, 0x55dd37u); LOADALL;
  /* 0055dd3c mov cl, byte ptr [ebx + 0x2ac7c] */ { const u32 m_ = (u32)(ebx + 0x2ac7cu); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055dd42 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0055dd44 cmp cl, al */ { u32 a_ = (ecx & 0xffu), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055dd46 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055dd47 jne 0x55dd4e */ if (!ZF_) goto L_0055dd4e;
  /* 0055dd49 mov byte ptr [0x7a6bef], al */ { const u32 m_ = (u32)(0x7a6befu); M8(m_) = (u8)((eax & 0xffu)); }
L_0055dd4e:;
  /* 0055dd4e cmp byte ptr [ebx + 0x2ac7d], al */ { const u32 m_ = (u32)(ebx + 0x2ac7du); u32 a_ = M8(m_), b_ = (eax & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055dd54 jne 0x55dd5b */ if (!ZF_) goto L_0055dd5b;
  /* 0055dd56 mov byte ptr [0x7a6bf0], al */ { const u32 m_ = (u32)(0x7a6bf0u); M8(m_) = (u8)((eax & 0xffu)); }
L_0055dd5b:;
  /* 0055dd5b lea edx, [ebx + 0x26c7c] */ edx = (u32)((u32)(ebx + 0x26c7cu));
  /* 0055dd61 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055dd62 call 0x550390 */ esp -= 4; M32(esp) = 0x55dd67u; SAVEALL; F_00550390(c); ABI_CHECK(0x550390u, 0x55dd62u); RETCHK(0x55dd67u, 0x55dd62u); LOADALL;
  /* 0055dd67 mov edx, dword ptr [ebx + 0x26c78] */ { const u32 m_ = (u32)(ebx + 0x26c78u); edx = (u32)(M32(m_)); }
  /* 0055dd6d call 0x541bc0 */ esp -= 4; M32(esp) = 0x55dd72u; SAVEALL; F_00541bc0(c); ABI_CHECK(0x541bc0u, 0x55dd6du); RETCHK(0x55dd72u, 0x55dd6du); LOADALL;
L_0055dd72:;
  /* 0055dd72 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055dd75 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0055dd77 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055dd79 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055dd7a call dword ptr [eax + 0x2c] */ { const u32 m_ = (u32)(eax + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55dd7du; SAVEALL; call_ind(c, t_); RETCHK(0x55dd7du, 0x55dd7au); LOADALL; }
L_0055dd7d:;
  /* 0055dd7d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055dd80(CPU *c) {
  NATIVE_HOOK(0x55dd80u) REGS; LOADALL;
L_0055dd80:;
  /* 0055dd80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055dd81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055dd83 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055dd84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055dd85 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055dd88 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0055dd8a xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055dd8c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055dd8e jle 0x55ddc1 */ if ((ZF_|LT_)) goto L_0055ddc1;
  /* 0055dd90 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055dd93 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_0055dd94:;
  /* 0055dd94 movzx eax, word ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M16(m_)); }
  /* 0055dd98 movzx dx, byte ptr [esi - 1] */ { const u32 m_ = (u32)(esi + 0xffffffffu); edx = (edx & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0055dd9d mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0055dd9f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dda0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055dda2 mov ax, word ptr [esi - 4] */ { const u32 m_ = (u32)(esi + 0xfffffffcu); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0055dda6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055dda7 mov edi, 0x9b883c */ { edi = (u32)(0x9b883cu); }
  /* 0055ddac push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ddad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ddae call 0x564b70 */ esp -= 4; M32(esp) = 0x55ddb3u; SAVEALL; F_00564b70(c); ABI_CHECK(0x564b70u, 0x55ddaeu); RETCHK(0x55ddb3u, 0x55ddaeu); LOADALL;
  /* 0055ddb3 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055ddb6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055ddb8 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ddb9 add esi, 0xc */ { u32 a_ = esi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055ddbc cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ddbe jl 0x55dd94 */ if (LT_) goto L_0055dd94;
  /* 0055ddc0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0055ddc1:;
  /* 0055ddc1 mov eax, dword ptr [0x9b8854] */ { const u32 m_ = (u32)(0x9b8854u); eax = (u32)(M32(m_)); }
  /* 0055ddc6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055ddc8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055ddc9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055ddca je 0x55ddce */ if (ZF_) goto L_0055ddce;
  /* 0055ddcc call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x55ddceu; SAVEALL; call_ind(c, t_); RETCHK(0x55ddceu, 0x55ddccu); LOADALL; }
L_0055ddce:;
  /* 0055ddce mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055ddd1 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055ddd4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055ddd6 call dword ptr [eax + 0x34] */ { const u32 m_ = (u32)(eax + 0x34u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55ddd9u; SAVEALL; call_ind(c, t_); RETCHK(0x55ddd9u, 0x55ddd6u); LOADALL; }
  /* 0055ddd9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055ddda ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0055dde0(CPU *c) {
  NATIVE_HOOK(0x55dde0u) REGS; LOADALL;
L_0055dde0:;
  /* 0055dde0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 0055dde2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055dde4 jne 0x55de24 */ if (!ZF_) goto L_0055de24;
  /* 0055dde6 lea edx, [esi + 4] */ edx = (u32)((u32)(esi + 0x4u));
  /* 0055dde9 mov eax, edx */ { eax = (u32)(edx); }
  /* 0055ddeb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055ddec lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 0055ddef nop */ ;
L_0055ddf0:;
  /* 0055ddf0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ddf2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ddf3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ddf5 jne 0x55ddf0 */ if (!ZF_) goto L_0055ddf0;
  /* 0055ddf7 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055ddfa sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ddfc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ddfd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ddfe add ecx, 0x160 */ { u32 a_ = ecx, b_ = 0x160u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055de04 call 0x404420 */ esp -= 4; M32(esp) = 0x55de09u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55de04u); RETCHK(0x55de09u, 0x55de04u); LOADALL;
  /* 0055de09 movzx eax, word ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); eax = (u32)(M16(m_)); }
  /* 0055de0d mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055de10 mov dword ptr [ecx + 0x17c], eax */ { const u32 m_ = (u32)(ecx + 0x17cu); M32(m_) = (u32)(eax); }
  /* 0055de16 mov edx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); edx = (u32)(M32(m_)); }
  /* 0055de1c mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 0055de1e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055de1f jmp 0x563b10 */ SAVEALL; F_00563b10(c); return;
L_0055de24:;
  /* 0055de24 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055de27 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055de29 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055de2a call dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55de2du; SAVEALL; call_ind(c, t_); RETCHK(0x55de2du, 0x55de2au); LOADALL; }
  /* 0055de2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055de30(CPU *c) {
  NATIVE_HOOK(0x55de30u) REGS; LOADALL;
L_0055de30:;
  /* 0055de30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055de31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055de33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055de35 push 0x626898 */ { u32 v_ = 0x626898u; esp -= 4; M32(esp) = v_; }
  /* 0055de3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055de40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055de41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055de48 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055de4b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055de4e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055de4f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055de50 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055de52 cmp byte ptr [edi], 7 */ { const u32 m_ = (u32)(edi); u32 a_ = M8(m_), b_ = 0x7u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055de55 jne 0x55de9a */ if (!ZF_) goto L_0055de9a;
  /* 0055de57 call 0x518bb0 */ esp -= 4; M32(esp) = 0x55de5cu; SAVEALL; F_00518bb0(c); ABI_CHECK(0x518bb0u, 0x55de57u); RETCHK(0x55de5cu, 0x55de57u); LOADALL;
  /* 0055de5c mov esi, dword ptr [eax + 0x150] */ { const u32 m_ = (u32)(eax + 0x150u); esi = (u32)(M32(m_)); }
  /* 0055de62 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055de64 je 0x55deb5 */ if (ZF_) goto L_0055deb5;
  /* 0055de66 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055de69 add edi, 0x103 */ { u32 a_ = edi, b_ = 0x103u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055de6f mov ecx, esp */ { ecx = (u32)(esp); }
  /* 0055de71 mov dword ptr [ebp + 8], esp */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esp); }
  /* 0055de74 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055de75 call 0x403060 */ esp -= 4; M32(esp) = 0x55de7au; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x55de75u); RETCHK(0x55de7au, 0x55de75u); LOADALL;
  /* 0055de7a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055de7c call 0x538490 */ esp -= 4; M32(esp) = 0x55de81u; SAVEALL; F_00538490(c); ABI_CHECK(0x538490u, 0x55de7cu); RETCHK(0x55de81u, 0x55de7cu); LOADALL;
  /* 0055de81 mov eax, esi */ { eax = (u32)(esi); }
  /* 0055de83 call 0x5385c0 */ esp -= 4; M32(esp) = 0x55de88u; SAVEALL; F_005385c0(c); ABI_CHECK(0x5385c0u, 0x55de83u); RETCHK(0x55de88u, 0x55de83u); LOADALL;
  /* 0055de88 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055de8b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055de92 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055de93 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055de94 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055de96 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055de97 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055de9a:;
  /* 0055de9a mov dword ptr [ebp - 0x44], 0x656678 */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(0x656678u); }
  /* 0055dea1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0055dea8 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055deab test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055dead je 0x55deb5 */ if (ZF_) goto L_0055deb5;
  /* 0055deaf mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055deb1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055deb2 call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55deb5u; SAVEALL; call_ind(c, t_); RETCHK(0x55deb5u, 0x55deb2u); LOADALL; }
L_0055deb5:;
  /* 0055deb5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055deb8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055deb9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055dec0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055dec1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055dec3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055dec4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055ded0(CPU *c) {
  NATIVE_HOOK(0x55ded0u) REGS; LOADALL;
L_0055ded0:;
  /* 0055ded0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055ded1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055ded3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055ded6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055ded7 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0055ded9 cmp dword ptr [ebx], 0xd */ { const u32 m_ = (u32)(ebx); u32 a_ = M32(m_), b_ = 0xdu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055dedc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055dedd mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055dedf jne 0x55df04 */ if (!ZF_) goto L_0055df04;
  /* 0055dee1 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055dee4 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 0055dee6 lea edx, [ebp - 8] */ edx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0055dee9 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055deea mov dword ptr [ebp - 8], 0x30000001 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x30000001u); }
  /* 0055def1 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 0055def8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055defa push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055defc call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55defeu; SAVEALL; call_ind(c, t_); RETCHK(0x55defeu, 0x55defcu); LOADALL; }
  /* 0055defe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055deff pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055df00 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055df02 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055df03 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055df04:;
  /* 0055df04 lea eax, [ebx + 0x26d00] */ eax = (u32)((u32)(ebx + 0x26d00u));
  /* 0055df0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055df0b call 0x550390 */ esp -= 4; M32(esp) = 0x55df10u; SAVEALL; F_00550390(c); ABI_CHECK(0x550390u, 0x55df0bu); RETCHK(0x55df10u, 0x55df0bu); LOADALL;
  /* 0055df10 mov edx, dword ptr [ebx + 0x26cfc] */ { const u32 m_ = (u32)(ebx + 0x26cfcu); edx = (u32)(M32(m_)); }
  /* 0055df16 call 0x541bc0 */ esp -= 4; M32(esp) = 0x55df1bu; SAVEALL; F_00541bc0(c); ABI_CHECK(0x541bc0u, 0x55df16u); RETCHK(0x55df1bu, 0x55df16u); LOADALL;
  /* 0055df1b mov eax, dword ptr [ebx + 0x88] */ { const u32 m_ = (u32)(ebx + 0x88u); eax = (u32)(M32(m_)); }
  /* 0055df21 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055df23 jne 0x55df3b */ if (!ZF_) goto L_0055df3b;
  /* 0055df25 mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 0055df28 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0055df2a add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0055df2d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055df2e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055df30 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0055df32 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55df35u; SAVEALL; call_ind(c, t_); RETCHK(0x55df35u, 0x55df32u); LOADALL; }
  /* 0055df35 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055df36 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055df37 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055df39 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055df3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055df3b:;
  /* 0055df3b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055df3c mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055df3f mov eax, dword ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0055df45 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055df48 add esi, 0x148 */ { u32 a_ = esi, b_ = 0x148u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055df4e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055df4f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055df51 call 0x55fba0 */ esp -= 4; M32(esp) = 0x55df56u; SAVEALL; F_0055fba0(c); ABI_CHECK(0x55fba0u, 0x55df51u); RETCHK(0x55df56u, 0x55df51u); LOADALL;
  /* 0055df56 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055df59 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055df5c mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055df5f mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0055df66 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055df68 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055df6b mov dword ptr [esi + 8], esi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0055df6e mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055df71 mov edx, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); edx = (u32)(M32(m_)); }
  /* 0055df77 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055df7a add esi, 0x154 */ { u32 a_ = esi, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055df80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055df81 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055df83 call 0x55fdf0 */ esp -= 4; M32(esp) = 0x55df88u; SAVEALL; F_0055fdf0(c); ABI_CHECK(0x55fdf0u, 0x55df83u); RETCHK(0x55df88u, 0x55df83u); LOADALL;
  /* 0055df88 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055df8b mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055df8e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055df91 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0055df98 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055df9a mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055df9d mov dword ptr [esi + 8], esi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0055dfa0 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055dfa3 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0055dfa9 add ebx, 0x8c */ { u32 a_ = ebx, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0055dfaf push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055dfb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dfb1 call 0x55f880 */ esp -= 4; M32(esp) = 0x55dfb6u; SAVEALL; F_0055f880(c); ABI_CHECK(0x55f880u, 0x55dfb1u); RETCHK(0x55dfb6u, 0x55dfb1u); LOADALL;
  /* 0055dfb6 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055dfb9 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055dfbc mov eax, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); eax = (u32)(M32(m_)); }
  /* 0055dfc2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055dfc4 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055dfc6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dfc7 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55dfcau; SAVEALL; call_ind(c, t_); RETCHK(0x55dfcau, 0x55dfc7u); LOADALL; }
  /* 0055dfca pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055dfcb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055dfcc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055dfcd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055dfcf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055dfd0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055dfe0(CPU *c) {
  NATIVE_HOOK(0x55dfe0u) REGS; LOADALL;
L_0055dfe0:;
  /* 0055dfe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055dfe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055dfe3 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055dfe6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055dfe8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055dfe9 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055dfec add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055dfef push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055dff0 lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
  /* 0055dff3 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055dff5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055dff6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055dff7 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55dff9u; SAVEALL; call_ind(c, t_); RETCHK(0x55dff9u, 0x55dff7u); LOADALL; }
  /* 0055dff9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055dffa pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055dffb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e000(CPU *c) {
  NATIVE_HOOK(0x55e000u) REGS; LOADALL;
L_0055e000:;
  /* 0055e000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e003 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e006 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055e008 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e009 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055e00c add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055e00f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e010 lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
  /* 0055e013 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055e015 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e016 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e017 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e01au; SAVEALL; call_ind(c, t_); RETCHK(0x55e01au, 0x55e017u); LOADALL; }
  /* 0055e01a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e01b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e01c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e020(CPU *c) {
  NATIVE_HOOK(0x55e020u) REGS; LOADALL;
L_0055e020:;
  /* 0055e020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e023 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e026 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055e028 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e029 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055e02c add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055e02f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e030 lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
  /* 0055e033 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055e035 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e036 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e037 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e03au; SAVEALL; call_ind(c, t_); RETCHK(0x55e03au, 0x55e037u); LOADALL; }
  /* 0055e03a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e03b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e03c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e040(CPU *c) {
  NATIVE_HOOK(0x55e040u) REGS; LOADALL;
L_0055e040:;
  /* 0055e040 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e041 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e043 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e046 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055e048 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e049 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055e04c add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055e04f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e050 lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
  /* 0055e053 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055e055 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e056 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e057 call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e05au; SAVEALL; call_ind(c, t_); RETCHK(0x55e05au, 0x55e057u); LOADALL; }
  /* 0055e05a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e05b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e05c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e060(CPU *c) {
  NATIVE_HOOK(0x55e060u) REGS; LOADALL;
L_0055e060:;
  /* 0055e060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e063 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e066 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055e068 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e069 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055e06c add esi, -4 */ { u32 a_ = esi, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055e06f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e070 lea esi, [eax + 4] */ esi = (u32)((u32)(eax + 0x4u));
  /* 0055e073 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055e075 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e076 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e077 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e07au; SAVEALL; call_ind(c, t_); RETCHK(0x55e07au, 0x55e077u); LOADALL; }
  /* 0055e07a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e07b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e07c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e080(CPU *c) {
  NATIVE_HOOK(0x55e080u) REGS; LOADALL;
L_0055e080:;
  /* 0055e080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e083 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055e085 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0055e08a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055e090 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e091 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055e098 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e099 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e09a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e09b mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0055e09e mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0055e0a0 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055e0a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055e0a4 jle 0x55e116 */ if ((ZF_|LT_)) goto L_0055e116;
  /* 0055e0a6 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055e0a9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e0aa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_0055e0b0:;
  /* 0055e0b0 push 0xf4c */ { u32 v_ = 0xf4cu; esp -= 4; M32(esp) = v_; }
  /* 0055e0b5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x55e0bau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x55e0b5u); RETCHK(0x55e0bau, 0x55e0b5u); LOADALL;
  /* 0055e0ba add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e0bd mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0055e0c0 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0055e0c2 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e0c4 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0055e0c7 je 0x55e0d1 */ if (ZF_) goto L_0055e0d1;
  /* 0055e0c9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e0ca call 0x55d080 */ esp -= 4; M32(esp) = 0x55e0cfu; SAVEALL; F_0055d080(c); ABI_CHECK(0x55d080u, 0x55e0cau); RETCHK(0x55e0cfu, 0x55e0cau); LOADALL;
  /* 0055e0cf mov esi, eax */ { esi = (u32)(eax); }
L_0055e0d1:;
  /* 0055e0d1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055e0d4 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0055e0db mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055e0de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e0df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e0e0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055e0e2 call 0x55f880 */ esp -= 4; M32(esp) = 0x55e0e7u; SAVEALL; F_0055f880(c); ABI_CHECK(0x55f880u, 0x55e0e2u); RETCHK(0x55e0e7u, 0x55e0e2u); LOADALL;
  /* 0055e0e7 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055e0e9 je 0x55e0f9 */ if (ZF_) goto L_0055e0f9;
  /* 0055e0eb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055e0ee mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055e0f1 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055e0f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e0f4 call dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e0f7u; SAVEALL; call_ind(c, t_); RETCHK(0x55e0f7u, 0x55e0f4u); LOADALL; }
  /* 0055e0f7 jmp 0x55e105 */ goto L_0055e105;
L_0055e0f9:;
  /* 0055e0f9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055e0fb je 0x55e105 */ if (ZF_) goto L_0055e105;
  /* 0055e0fd mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0055e0ff push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0055e101 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055e103 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e105u; SAVEALL; call_ind(c, t_); RETCHK(0x55e105u, 0x55e103u); LOADALL; }
L_0055e105:;
  /* 0055e105 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055e108 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055e10a inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055e10b add edi, 0xced0 */ { u32 a_ = edi, b_ = 0xced0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055e111 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e113 jl 0x55e0b0 */ if (LT_) goto L_0055e0b0;
  /* 0055e115 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0055e116:;
  /* 0055e116 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055e119 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e11a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e11b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055e122 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e124 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e125 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0055e130(CPU *c) {
  NATIVE_HOOK(0x55e130u) REGS; LOADALL;
L_0055e130:;
  /* 0055e130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e133 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e134 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e135 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055e138 cmp dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e13b mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0055e142 jle 0x55e189 */ if ((ZF_|LT_)) goto L_0055e189;
  /* 0055e144 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055e147 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_0055e148:;
  /* 0055e148 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0055e14a mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055e14d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e14e call 0x55ead0 */ esp -= 4; M32(esp) = 0x55e153u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x55e14eu); RETCHK(0x55e153u, 0x55e14eu); LOADALL;
  /* 0055e153 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055e155 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055e157 je 0x55e175 */ if (ZF_) goto L_0055e175;
  /* 0055e159 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055e15c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055e15e push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e15f call dword ptr [edx + 0xc] */ { const u32 m_ = (u32)(edx + 0xcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e162u; SAVEALL; call_ind(c, t_); RETCHK(0x55e162u, 0x55e15fu); LOADALL; }
  /* 0055e162 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0055e164 mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055e167 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e168 call 0x55e9e0 */ esp -= 4; M32(esp) = 0x55e16du; SAVEALL; F_0055e9e0(c); ABI_CHECK(0x55e9e0u, 0x55e168u); RETCHK(0x55e16du, 0x55e168u); LOADALL;
  /* 0055e16d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 0055e16f push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0055e171 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055e173 call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e175u; SAVEALL; call_ind(c, t_); RETCHK(0x55e175u, 0x55e173u); LOADALL; }
L_0055e175:;
  /* 0055e175 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055e178 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e17b mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055e17d inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055e17e add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055e181 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e183 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055e186 jl 0x55e148 */ if (LT_) goto L_0055e148;
  /* 0055e188 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0055e189:;
  /* 0055e189 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e18a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e18c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e18d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e190(CPU *c) {
  NATIVE_HOOK(0x55e190u) REGS; LOADALL;
L_0055e190:;
  /* 0055e190 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e191 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e193 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055e196 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055e199 mov ecx, dword ptr [ecx + 0x180] */ { const u32 m_ = (u32)(ecx + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0055e19f mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055e1a2 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055e1a4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e1a5 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e1a8u; SAVEALL; call_ind(c, t_); RETCHK(0x55e1a8u, 0x55e1a5u); LOADALL; }
  /* 0055e1a8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e1a9 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e1b0(CPU *c) {
  NATIVE_HOOK(0x55e1b0u) REGS; LOADALL;
L_0055e1b0:;
  /* 0055e1b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e1b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e1b3 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0055e1b5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e1b8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e1b9 mov esi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055e1bc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e1bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e1be call 0x55ead0 */ esp -= 4; M32(esp) = 0x55e1c3u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x55e1beu); RETCHK(0x55e1c3u, 0x55e1beu); LOADALL;
  /* 0055e1c3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0055e1c5 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055e1c7 je 0x55e1ea */ if (ZF_) goto L_0055e1ea;
  /* 0055e1c9 mov edx, edi */ { edx = (u32)(edi); }
  /* 0055e1cb call 0x55d710 */ esp -= 4; M32(esp) = 0x55e1d0u; SAVEALL; F_0055d710(c); ABI_CHECK(0x55d710u, 0x55e1cbu); RETCHK(0x55e1d0u, 0x55e1cbu); LOADALL;
  /* 0055e1d0 lea esi, [ebx + 4] */ esi = (u32)((u32)(ebx + 0x4u));
  /* 0055e1d3 call 0x55ce00 */ esp -= 4; M32(esp) = 0x55e1d8u; SAVEALL; F_0055ce00(c); ABI_CHECK(0x55ce00u, 0x55e1d3u); RETCHK(0x55e1d8u, 0x55e1d3u); LOADALL;
  /* 0055e1d8 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055e1db mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055e1de mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055e1e0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e1e1 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e1e3u; SAVEALL; call_ind(c, t_); RETCHK(0x55e1e3u, 0x55e1e1u); LOADALL; }
  /* 0055e1e3 mov edx, edi */ { edx = (u32)(edi); }
  /* 0055e1e5 call 0x55d6f0 */ esp -= 4; M32(esp) = 0x55e1eau; SAVEALL; F_0055d6f0(c); ABI_CHECK(0x55d6f0u, 0x55e1e5u); RETCHK(0x55e1eau, 0x55e1e5u); LOADALL;
L_0055e1ea:;
  /* 0055e1ea pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e1eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e1ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e1ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e1f0(CPU *c) {
  NATIVE_HOOK(0x55e1f0u) REGS; LOADALL;
L_0055e1f0:;
  /* 0055e1f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e1f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e1f3 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e1f6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055e1f9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e1fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e1fb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e1fc movzx edi, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edi = (u32)(M16(m_)); }
  /* 0055e200 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055e202 lea esi, [eax + 8] */ esi = (u32)((u32)(eax + 0x8u));
  /* 0055e205 sub edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055e208 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 0055e20b mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0055e20e call 0x565630 */ esp -= 4; M32(esp) = 0x55e213u; SAVEALL; F_00565630(c); ABI_CHECK(0x565630u, 0x55e20eu); RETCHK(0x55e213u, 0x55e20eu); LOADALL;
  /* 0055e213 call 0x550390 */ esp -= 4; M32(esp) = 0x55e218u; SAVEALL; F_00550390(c); ABI_CHECK(0x550390u, 0x55e213u); RETCHK(0x55e218u, 0x55e213u); LOADALL;
  /* 0055e218 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055e21b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e21c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055e21f mov ax, word ptr [eax + 6] */ { const u32 m_ = (u32)(eax + 0x6u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0055e223 mov esi, edi */ { esi = (u32)(edi); }
  /* 0055e225 call 0x541c20 */ esp -= 4; M32(esp) = 0x55e22au; SAVEALL; F_00541c20(c); ABI_CHECK(0x541c20u, 0x55e225u); RETCHK(0x55e22au, 0x55e225u); LOADALL;
  /* 0055e22a test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055e22c je 0x55e40f */ if (ZF_) goto L_0055e40f;
  /* 0055e232 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055e234 jle 0x55e27b */ if ((ZF_|LT_)) goto L_0055e27b;
  /* 0055e236 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e239 mov ax, word ptr [ecx + 6] */ { const u32 m_ = (u32)(ecx + 0x6u); eax = (eax & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0055e23d cmp ax, 0x3e8 */ { u32 a_ = (eax & 0xffffu), b_ = 0x3e8u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055e241 je 0x55e27b */ if (ZF_) goto L_0055e27b;
  /* 0055e243 cmp ax, 0x3e9 */ { u32 a_ = (eax & 0xffffu), b_ = 0x3e9u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055e247 je 0x55e27b */ if (ZF_) goto L_0055e27b;
  /* 0055e249 cmp ax, 0x3ea */ { u32 a_ = (eax & 0xffffu), b_ = 0x3eau; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055e24d je 0x55e27b */ if (ZF_) goto L_0055e27b;
  /* 0055e24f cmp ax, 0x3eb */ { u32 a_ = (eax & 0xffffu), b_ = 0x3ebu; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055e253 je 0x55e27b */ if (ZF_) goto L_0055e27b;
  /* 0055e255 cmp ax, 0x3ec */ { u32 a_ = (eax & 0xffffu), b_ = 0x3ecu; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055e259 je 0x55e27b */ if (ZF_) goto L_0055e27b;
  /* 0055e25b mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055e25e lea edx, [ebx + 0x10024] */ edx = (u32)((u32)(ebx + 0x10024u));
  /* 0055e264 movzx eax, ax */ { eax = (u32)((eax & 0xffffu)); }
  /* 0055e267 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055e268 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e269 lea esi, [ebx + 0x14] */ esi = (u32)((u32)(ebx + 0x14u));
  /* 0055e26c mov edx, edi */ { edx = (u32)(edi); }
  /* 0055e26e call 0x566560 */ esp -= 4; M32(esp) = 0x55e273u; SAVEALL; F_00566560(c); ABI_CHECK(0x566560u, 0x55e26eu); RETCHK(0x55e273u, 0x55e26eu); LOADALL;
  /* 0055e273 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055e275 jl 0x55e40f */ if (LT_) goto L_0055e40f;
L_0055e27b:;
  /* 0055e27b mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055e27e movzx eax, word ptr [ecx + 6] */ { const u32 m_ = (u32)(ecx + 0x6u); eax = (u32)(M16(m_)); }
  /* 0055e282 cmp eax, 0x6f */ { u32 a_ = eax, b_ = 0x6fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e285 jg 0x55e35f */ if (!(ZF_|LT_)) goto L_0055e35f;
  /* 0055e28b je 0x55e348 */ if (ZF_) goto L_0055e348;
  /* 0055e291 sub eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055e294 cmp eax, 0x6c */ { u32 a_ = eax, b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e297 ja 0x55e40f */ if (!(CF_|ZF_)) goto L_0055e40f;
  /* 0055e29d movzx edx, byte ptr [eax + 0x55e438] */ { const u32 m_ = (u32)(eax + 0x55e438u); edx = (u32)(M8(m_)); }
  /* 0055e2a4 jmp dword ptr [edx*4 + 0x55e418] */ { const u32 m_ = (u32)(edx * 4u + 0x55e418u); u32 t_ = M32(m_); switch (t_) { case 0x55e2abu: goto L_0055e2ab; case 0x55e2c1u: goto L_0055e2c1; case 0x55e2d7u: goto L_0055e2d7; case 0x55e2eeu: goto L_0055e2ee; case 0x55e304u: goto L_0055e304; case 0x55e31au: goto L_0055e31a; case 0x55e330u: goto L_0055e330; case 0x55e40fu: goto L_0055e40f; default: SAVEALL; call_ind(c, t_); return; } }
L_0055e2ab:;
  /* 0055e2ab lea eax, [ebx + 0x10024] */ eax = (u32)((u32)(ebx + 0x10024u));
  /* 0055e2b1 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055e2b3 call 0x55ded0 */ esp -= 4; M32(esp) = 0x55e2b8u; SAVEALL; F_0055ded0(c); ABI_CHECK(0x55ded0u, 0x55e2b3u); RETCHK(0x55e2b8u, 0x55e2b3u); LOADALL;
  /* 0055e2b8 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e2b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e2ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e2bb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e2bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e2be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e2c1:;
  /* 0055e2c1 lea esi, [ebx + 0x10024] */ esi = (u32)((u32)(ebx + 0x10024u));
  /* 0055e2c7 mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0055e2c9 call 0x55dc80 */ esp -= 4; M32(esp) = 0x55e2ceu; SAVEALL; F_0055dc80(c); ABI_CHECK(0x55dc80u, 0x55e2c9u); RETCHK(0x55e2ceu, 0x55e2c9u); LOADALL;
  /* 0055e2ce pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e2cf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e2d0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e2d1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e2d3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e2d4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e2d7:;
  /* 0055e2d7 mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 0055e2da add ebx, 0x10024 */ { u32 a_ = ebx, b_ = 0x10024u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0055e2e0 call 0x55dcb0 */ esp -= 4; M32(esp) = 0x55e2e5u; SAVEALL; F_0055dcb0(c); ABI_CHECK(0x55dcb0u, 0x55e2e0u); RETCHK(0x55e2e5u, 0x55e2e0u); LOADALL;
  /* 0055e2e5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e2e6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e2e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e2e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e2ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e2eb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e2ee:;
  /* 0055e2ee lea eax, [ebx + 0x10024] */ eax = (u32)((u32)(ebx + 0x10024u));
  /* 0055e2f4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e2f5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e2f6 call 0x55dd80 */ esp -= 4; M32(esp) = 0x55e2fbu; SAVEALL; F_0055dd80(c); ABI_CHECK(0x55dd80u, 0x55e2f6u); RETCHK(0x55e2fbu, 0x55e2f6u); LOADALL;
  /* 0055e2fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e2fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e2fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e2fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e300 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e301 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e304:;
  /* 0055e304 lea esi, [ebx + 0x10024] */ esi = (u32)((u32)(ebx + 0x10024u));
  /* 0055e30a mov edi, ebx */ { edi = (u32)(ebx); }
  /* 0055e30c call 0x55dde0 */ esp -= 4; M32(esp) = 0x55e311u; SAVEALL; F_0055dde0(c); ABI_CHECK(0x55dde0u, 0x55e30cu); RETCHK(0x55e311u, 0x55e30cu); LOADALL;
  /* 0055e311 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e312 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e313 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e314 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e316 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e317 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e31a:;
  /* 0055e31a lea ecx, [ebx + 0x10024] */ ecx = (u32)((u32)(ebx + 0x10024u));
  /* 0055e320 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e321 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e322 call 0x55e080 */ esp -= 4; M32(esp) = 0x55e327u; SAVEALL; F_0055e080(c); ABI_CHECK(0x55e080u, 0x55e322u); RETCHK(0x55e327u, 0x55e322u); LOADALL;
  /* 0055e327 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e328 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e329 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e32a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e32c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e32d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e330:;
  /* 0055e330 mov edx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edx = (u32)(M32(m_)); }
  /* 0055e333 add ebx, 0x10024 */ { u32 a_ = ebx, b_ = 0x10024u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0055e339 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055e33a call 0x55e1b0 */ esp -= 4; M32(esp) = 0x55e33fu; SAVEALL; F_0055e1b0(c); ABI_CHECK(0x55e1b0u, 0x55e33au); RETCHK(0x55e33fu, 0x55e33au); LOADALL;
  /* 0055e33f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e340 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e341 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e342 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e344 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e345 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e348:;
  /* 0055e348 lea eax, [ebx + 0x10024] */ eax = (u32)((u32)(ebx + 0x10024u));
  /* 0055e34e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e34f mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0055e351 call 0x55e190 */ esp -= 4; M32(esp) = 0x55e356u; SAVEALL; F_0055e190(c); ABI_CHECK(0x55e190u, 0x55e351u); RETCHK(0x55e356u, 0x55e351u); LOADALL;
  /* 0055e356 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e357 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e358 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e359 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e35b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e35c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e35f:;
  /* 0055e35f cmp eax, 0x3e9 */ { u32 a_ = eax, b_ = 0x3e9u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e364 jg 0x55e3cf */ if (!(ZF_|LT_)) goto L_0055e3cf;
  /* 0055e366 je 0x55e3bb */ if (ZF_) goto L_0055e3bb;
  /* 0055e368 cmp eax, 0x70 */ { u32 a_ = eax, b_ = 0x70u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e36b je 0x55e3a6 */ if (ZF_) goto L_0055e3a6;
  /* 0055e36d cmp eax, 0x7a */ { u32 a_ = eax, b_ = 0x7au; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e370 je 0x55e391 */ if (ZF_) goto L_0055e391;
  /* 0055e372 cmp eax, 0x3e8 */ { u32 a_ = eax, b_ = 0x3e8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e377 jne 0x55e40f */ if (!ZF_) goto L_0055e40f;
  /* 0055e37d mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055e380 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e381 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055e383 call 0x55dfe0 */ esp -= 4; M32(esp) = 0x55e388u; SAVEALL; F_0055dfe0(c); ABI_CHECK(0x55dfe0u, 0x55e383u); RETCHK(0x55e388u, 0x55e383u); LOADALL;
  /* 0055e388 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e389 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e38a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e38b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e38d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e38e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e391:;
  /* 0055e391 lea ecx, [ebx + 0x10024] */ ecx = (u32)((u32)(ebx + 0x10024u));
  /* 0055e397 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e398 call 0x55de30 */ esp -= 4; M32(esp) = 0x55e39du; SAVEALL; F_0055de30(c); ABI_CHECK(0x55de30u, 0x55e398u); RETCHK(0x55e39du, 0x55e398u); LOADALL;
  /* 0055e39d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e39e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e39f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e3a0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e3a2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e3a3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e3a6:;
  /* 0055e3a6 lea ecx, [ebx + 0x10024] */ ecx = (u32)((u32)(ebx + 0x10024u));
  /* 0055e3ac push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e3ad call 0x55e130 */ esp -= 4; M32(esp) = 0x55e3b2u; SAVEALL; F_0055e130(c); ABI_CHECK(0x55e130u, 0x55e3adu); RETCHK(0x55e3b2u, 0x55e3adu); LOADALL;
  /* 0055e3b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e3b3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e3b4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e3b5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e3b7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e3b8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e3bb:;
  /* 0055e3bb mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055e3be push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e3bf mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055e3c1 call 0x55e000 */ esp -= 4; M32(esp) = 0x55e3c6u; SAVEALL; F_0055e000(c); ABI_CHECK(0x55e000u, 0x55e3c1u); RETCHK(0x55e3c6u, 0x55e3c1u); LOADALL;
  /* 0055e3c6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e3c7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e3c8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e3c9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e3cb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e3cc ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e3cf:;
  /* 0055e3cf sub eax, 0x3ea */ { u32 a_ = eax, b_ = 0x3eau; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055e3d4 je 0x55e404 */ if (ZF_) goto L_0055e404;
  /* 0055e3d6 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0055e3d7 je 0x55e3f0 */ if (ZF_) goto L_0055e3f0;
  /* 0055e3d9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0055e3da jne 0x55e40f */ if (!ZF_) goto L_0055e40f;
  /* 0055e3dc mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055e3df push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e3e0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055e3e2 call 0x55e060 */ esp -= 4; M32(esp) = 0x55e3e7u; SAVEALL; F_0055e060(c); ABI_CHECK(0x55e060u, 0x55e3e2u); RETCHK(0x55e3e7u, 0x55e3e2u); LOADALL;
  /* 0055e3e7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e3e8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e3e9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e3ea mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e3ec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e3ed ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e3f0:;
  /* 0055e3f0 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055e3f3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e3f4 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055e3f6 call 0x55e040 */ esp -= 4; M32(esp) = 0x55e3fbu; SAVEALL; F_0055e040(c); ABI_CHECK(0x55e040u, 0x55e3f6u); RETCHK(0x55e3fbu, 0x55e3f6u); LOADALL;
  /* 0055e3fb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e3fc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e3fd pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e3fe mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e400 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e401 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055e404:;
  /* 0055e404 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055e407 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e408 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055e40a call 0x55e020 */ esp -= 4; M32(esp) = 0x55e40fu; SAVEALL; F_0055e020(c); ABI_CHECK(0x55e020u, 0x55e40au); RETCHK(0x55e40fu, 0x55e40au); LOADALL;
L_0055e40f:;
  /* 0055e40f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e410 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e411 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e412 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e414 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e415 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e4b0(CPU *c) {
  NATIVE_HOOK(0x55e4b0u) REGS; LOADALL;
L_0055e4b0:;
  /* 0055e4b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e4b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e4b3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055e4b5 push 0x620eec */ { u32 v_ = 0x620eecu; esp -= 4; M32(esp) = v_; }
  /* 0055e4ba mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055e4c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e4c1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055e4c8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e4c9 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e4ca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e4cb mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055e4ce push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e4cf xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055e4d1 mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 0055e4d6 mov dword ptr [esi + 0x18], edi */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(edi); }
  /* 0055e4d9 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0055e4dc mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e4df mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0055e4e2 mov dword ptr [esi + 0x44], edi */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(edi); }
  /* 0055e4e5 mov dword ptr [esi + 0x40], ebx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ebx); }
  /* 0055e4e8 mov byte ptr [esi + 0x30], bl */ { const u32 m_ = (u32)(esi + 0x30u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e4eb mov dword ptr [esi + 0x60], edi */ { const u32 m_ = (u32)(esi + 0x60u); M32(m_) = (u32)(edi); }
  /* 0055e4ee mov dword ptr [esi + 0x5c], ebx */ { const u32 m_ = (u32)(esi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 0055e4f1 mov byte ptr [esi + 0x4c], bl */ { const u32 m_ = (u32)(esi + 0x4cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e4f4 mov dword ptr [esi + 0x7c], edi */ { const u32 m_ = (u32)(esi + 0x7cu); M32(m_) = (u32)(edi); }
  /* 0055e4f7 mov dword ptr [esi + 0x78], ebx */ { const u32 m_ = (u32)(esi + 0x78u); M32(m_) = (u32)(ebx); }
  /* 0055e4fa mov byte ptr [esi + 0x68], bl */ { const u32 m_ = (u32)(esi + 0x68u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e4fd mov dword ptr [esi + 0x98], edi */ { const u32 m_ = (u32)(esi + 0x98u); M32(m_) = (u32)(edi); }
  /* 0055e503 mov dword ptr [esi + 0x94], ebx */ { const u32 m_ = (u32)(esi + 0x94u); M32(m_) = (u32)(ebx); }
  /* 0055e509 mov byte ptr [esi + 0x84], bl */ { const u32 m_ = (u32)(esi + 0x84u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e50f mov dword ptr [esi + 0xb4], edi */ { const u32 m_ = (u32)(esi + 0xb4u); M32(m_) = (u32)(edi); }
  /* 0055e515 mov dword ptr [esi + 0xb0], ebx */ { const u32 m_ = (u32)(esi + 0xb0u); M32(m_) = (u32)(ebx); }
  /* 0055e51b mov byte ptr [esi + 0xa0], bl */ { const u32 m_ = (u32)(esi + 0xa0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e521 mov dword ptr [esi + 0xd0], edi */ { const u32 m_ = (u32)(esi + 0xd0u); M32(m_) = (u32)(edi); }
  /* 0055e527 mov dword ptr [esi + 0xcc], ebx */ { const u32 m_ = (u32)(esi + 0xccu); M32(m_) = (u32)(ebx); }
  /* 0055e52d mov byte ptr [esi + 0xbc], bl */ { const u32 m_ = (u32)(esi + 0xbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e533 mov dword ptr [esi + 0xec], edi */ { const u32 m_ = (u32)(esi + 0xecu); M32(m_) = (u32)(edi); }
  /* 0055e539 mov dword ptr [esi + 0xe8], ebx */ { const u32 m_ = (u32)(esi + 0xe8u); M32(m_) = (u32)(ebx); }
  /* 0055e53f mov byte ptr [esi + 0xd8], bl */ { const u32 m_ = (u32)(esi + 0xd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e545 mov dword ptr [esi + 0x108], edi */ { const u32 m_ = (u32)(esi + 0x108u); M32(m_) = (u32)(edi); }
  /* 0055e54b mov dword ptr [esi + 0x104], ebx */ { const u32 m_ = (u32)(esi + 0x104u); M32(m_) = (u32)(ebx); }
  /* 0055e551 mov byte ptr [esi + 0xf4], bl */ { const u32 m_ = (u32)(esi + 0xf4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e557 mov dword ptr [esi + 0x124], edi */ { const u32 m_ = (u32)(esi + 0x124u); M32(m_) = (u32)(edi); }
  /* 0055e55d mov dword ptr [esi + 0x120], ebx */ { const u32 m_ = (u32)(esi + 0x120u); M32(m_) = (u32)(ebx); }
  /* 0055e563 mov byte ptr [esi + 0x110], bl */ { const u32 m_ = (u32)(esi + 0x110u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e569 mov dword ptr [esi + 0x12c], ebx */ { const u32 m_ = (u32)(esi + 0x12cu); M32(m_) = (u32)(ebx); }
  /* 0055e56f mov dword ptr [esi + 0x130], ebx */ { const u32 m_ = (u32)(esi + 0x130u); M32(m_) = (u32)(ebx); }
  /* 0055e575 mov dword ptr [esi + 0x134], ebx */ { const u32 m_ = (u32)(esi + 0x134u); M32(m_) = (u32)(ebx); }
  /* 0055e57b mov dword ptr [esi + 0x13c], ebx */ { const u32 m_ = (u32)(esi + 0x13cu); M32(m_) = (u32)(ebx); }
  /* 0055e581 mov dword ptr [esi + 0x140], ebx */ { const u32 m_ = (u32)(esi + 0x140u); M32(m_) = (u32)(ebx); }
  /* 0055e587 mov dword ptr [esi + 0x144], ebx */ { const u32 m_ = (u32)(esi + 0x144u); M32(m_) = (u32)(ebx); }
  /* 0055e58d mov byte ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xbu); }
  /* 0055e591 call 0x53d4e0 */ esp -= 4; M32(esp) = 0x55e596u; SAVEALL; F_0053d4e0(c); ABI_CHECK(0x53d4e0u, 0x55e591u); RETCHK(0x55e596u, 0x55e591u); LOADALL;
  /* 0055e596 mov dword ptr [esi + 0x14c], eax */ { const u32 m_ = (u32)(esi + 0x14cu); M32(m_) = (u32)(eax); }
  /* 0055e59c mov byte ptr [eax + 0x15], 1 */ { const u32 m_ = (u32)(eax + 0x15u); M8(m_) = (u8)(0x1u); }
  /* 0055e5a0 mov eax, dword ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0055e5a6 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055e5a9 mov eax, dword ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0055e5af mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055e5b1 mov eax, dword ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0055e5b7 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055e5ba mov dword ptr [esi + 0x150], ebx */ { const u32 m_ = (u32)(esi + 0x150u); M32(m_) = (u32)(ebx); }
  /* 0055e5c0 mov byte ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xcu); }
  /* 0055e5c4 call 0x5442e0 */ esp -= 4; M32(esp) = 0x55e5c9u; SAVEALL; F_005442e0(c); ABI_CHECK(0x5442e0u, 0x55e5c4u); RETCHK(0x55e5c9u, 0x55e5c4u); LOADALL;
  /* 0055e5c9 mov dword ptr [esi + 0x158], eax */ { const u32 m_ = (u32)(esi + 0x158u); M32(m_) = (u32)(eax); }
  /* 0055e5cf mov byte ptr [eax + 0x2d], 1 */ { const u32 m_ = (u32)(eax + 0x2du); M8(m_) = (u8)(0x1u); }
  /* 0055e5d3 mov eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); eax = (u32)(M32(m_)); }
  /* 0055e5d9 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055e5dc mov eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); eax = (u32)(M32(m_)); }
  /* 0055e5e2 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055e5e4 mov eax, dword ptr [esi + 0x158] */ { const u32 m_ = (u32)(esi + 0x158u); eax = (u32)(M32(m_)); }
  /* 0055e5ea mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055e5ed mov dword ptr [esi + 0x15c], ebx */ { const u32 m_ = (u32)(esi + 0x15cu); M32(m_) = (u32)(ebx); }
  /* 0055e5f3 mov dword ptr [esi + 0x178], edi */ { const u32 m_ = (u32)(esi + 0x178u); M32(m_) = (u32)(edi); }
  /* 0055e5f9 mov dword ptr [esi + 0x174], ebx */ { const u32 m_ = (u32)(esi + 0x174u); M32(m_) = (u32)(ebx); }
  /* 0055e5ff mov byte ptr [esi + 0x164], bl */ { const u32 m_ = (u32)(esi + 0x164u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e605 mov edi, 0x9b8868 */ { edi = (u32)(0x9b8868u); }
  /* 0055e60a mov byte ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xeu); }
  /* 0055e60e call 0x566300 */ esp -= 4; M32(esp) = 0x55e613u; SAVEALL; F_00566300(c); ABI_CHECK(0x566300u, 0x55e60eu); RETCHK(0x55e613u, 0x55e60eu); LOADALL;
  /* 0055e613 mov eax, dword ptr [0x9b8870] */ { const u32 m_ = (u32)(0x9b8870u); eax = (u32)(M32(m_)); }
  /* 0055e618 mov dword ptr [0x9b8818], esi */ { const u32 m_ = (u32)(0x9b8818u); M32(m_) = (u32)(esi); }
  /* 0055e61e mov dword ptr [0x7a87dc], esi */ { const u32 m_ = (u32)(0x7a87dcu); M32(m_) = (u32)(esi); }
  /* 0055e624 mov dword ptr [eax + 0x8048], 0x7a87d0 */ { const u32 m_ = (u32)(eax + 0x8048u); M32(m_) = (u32)(0x7a87d0u); }
  /* 0055e62e mov ecx, dword ptr [0x9b886c] */ { const u32 m_ = (u32)(0x9b886cu); ecx = (u32)(M32(m_)); }
  /* 0055e634 push 0xf4c */ { u32 v_ = 0xf4cu; esp -= 4; M32(esp) = v_; }
  /* 0055e639 mov dword ptr [ecx + 0x8048], 0x9b8814 */ { const u32 m_ = (u32)(ecx + 0x8048u); M32(m_) = (u32)(0x9b8814u); }
  /* 0055e643 call 0x5fe934 */ esp -= 4; M32(esp) = 0x55e648u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x55e643u); RETCHK(0x55e648u, 0x55e643u); LOADALL;
  /* 0055e648 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e64b mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0055e64e cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e650 mov byte ptr [ebp - 4], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xfu); }
  /* 0055e654 je 0x55e65e */ if (ZF_) goto L_0055e65e;
  /* 0055e656 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e657 call 0x55d080 */ esp -= 4; M32(esp) = 0x55e65cu; SAVEALL; F_0055d080(c); ABI_CHECK(0x55d080u, 0x55e657u); RETCHK(0x55e65cu, 0x55e657u); LOADALL;
  /* 0055e65c jmp 0x55e660 */ goto L_0055e660;
L_0055e65e:;
  /* 0055e65e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_0055e660:;
  /* 0055e660 mov byte ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xeu); }
  /* 0055e664 mov dword ptr [esi + 0x180], eax */ { const u32 m_ = (u32)(esi + 0x180u); M32(m_) = (u32)(eax); }
  /* 0055e66a mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0055e66c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055e66e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055e670 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e673u; SAVEALL; call_ind(c, t_); RETCHK(0x55e673u, 0x55e670u); LOADALL; }
  /* 0055e673 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055e676 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e677 mov byte ptr [esi + 0x188], 1 */ { const u32 m_ = (u32)(esi + 0x188u); M8(m_) = (u8)(0x1u); }
  /* 0055e67e mov eax, esi */ { eax = (u32)(esi); }
  /* 0055e680 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e681 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e682 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055e689 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e68b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e68c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e6f0(CPU *c) {
  NATIVE_HOOK(0x55e6f0u) REGS; LOADALL;
L_0055e6f0:;
  /* 0055e6f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e6f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e6f3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055e6f5 push 0x620e11 */ { u32 v_ = 0x620e11u; esp -= 4; M32(esp) = v_; }
  /* 0055e6fa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055e700 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e701 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055e708 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e709 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e70a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e70b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055e70e mov dword ptr [ebp - 4], 0xe */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xeu); }
  /* 0055e715 mov ecx, dword ptr [edi + 0x180] */ { const u32 m_ = (u32)(edi + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0055e71b xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055e71d cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e71f je 0x55e727 */ if (ZF_) goto L_0055e727;
  /* 0055e721 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055e723 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 0055e725 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55e727u; SAVEALL; call_ind(c, t_); RETCHK(0x55e727u, 0x55e725u); LOADALL; }
L_0055e727:;
  /* 0055e727 mov ecx, dword ptr [0x9b8870] */ { const u32 m_ = (u32)(0x9b8870u); ecx = (u32)(M32(m_)); }
  /* 0055e72d mov dword ptr [ecx + 0x8048], ebx */ { const u32 m_ = (u32)(ecx + 0x8048u); M32(m_) = (u32)(ebx); }
  /* 0055e733 mov edx, dword ptr [0x9b886c] */ { const u32 m_ = (u32)(0x9b886cu); edx = (u32)(M32(m_)); }
  /* 0055e739 mov dword ptr [edx + 0x8048], ebx */ { const u32 m_ = (u32)(edx + 0x8048u); M32(m_) = (u32)(ebx); }
  /* 0055e73f cmp dword ptr [edi + 0x178], 0x10 */ { const u32 m_ = (u32)(edi + 0x178u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e746 jb 0x55e757 */ if (CF_) goto L_0055e757;
  /* 0055e748 mov eax, dword ptr [edi + 0x164] */ { const u32 m_ = (u32)(edi + 0x164u); eax = (u32)(M32(m_)); }
  /* 0055e74e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e74f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e754u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e74fu); RETCHK(0x55e754u, 0x55e74fu); LOADALL;
  /* 0055e754 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e757:;
  /* 0055e757 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055e758 mov dword ptr [edi + 0x178], 0xf */ { const u32 m_ = (u32)(edi + 0x178u); M32(m_) = (u32)(0xfu); }
  /* 0055e762 mov dword ptr [edi + 0x174], ebx */ { const u32 m_ = (u32)(edi + 0x174u); M32(m_) = (u32)(ebx); }
  /* 0055e768 mov byte ptr [edi + 0x164], bl */ { const u32 m_ = (u32)(edi + 0x164u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e76e mov byte ptr [ebp - 4], 0xc */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xcu); }
  /* 0055e772 mov eax, dword ptr [edi + 0x158] */ { const u32 m_ = (u32)(edi + 0x158u); eax = (u32)(M32(m_)); }
  /* 0055e778 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055e77a lea esi, [edi + 0x154] */ esi = (u32)((u32)(edi + 0x154u));
  /* 0055e780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e781 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e782 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0055e785 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e786 call 0x55fd70 */ esp -= 4; M32(esp) = 0x55e78bu; SAVEALL; F_0055fd70(c); ABI_CHECK(0x55fd70u, 0x55e786u); RETCHK(0x55e78bu, 0x55e786u); LOADALL;
  /* 0055e78b mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055e78e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e78f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e794u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e78fu); RETCHK(0x55e794u, 0x55e78fu); LOADALL;
  /* 0055e794 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0055e797 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0055e79a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e79d mov byte ptr [ebp - 4], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0xbu); }
  /* 0055e7a1 mov eax, dword ptr [edi + 0x14c] */ { const u32 m_ = (u32)(edi + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0055e7a7 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055e7a9 lea esi, [edi + 0x148] */ esi = (u32)((u32)(edi + 0x148u));
  /* 0055e7af push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e7b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e7b1 lea ecx, [ebp - 0x10] */ ecx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0055e7b4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e7b5 call 0x55fac0 */ esp -= 4; M32(esp) = 0x55e7bau; SAVEALL; F_0055fac0(c); ABI_CHECK(0x55fac0u, 0x55e7b5u); RETCHK(0x55e7bau, 0x55e7b5u); LOADALL;
  /* 0055e7ba mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055e7bd push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055e7be call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e7c3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e7beu); RETCHK(0x55e7c3u, 0x55e7beu); LOADALL;
  /* 0055e7c3 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0055e7c6 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0055e7c9 mov eax, dword ptr [edi + 0x13c] */ { const u32 m_ = (u32)(edi + 0x13cu); eax = (u32)(M32(m_)); }
  /* 0055e7cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e7d2 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e7d4 je 0x55e7df */ if (ZF_) goto L_0055e7df;
  /* 0055e7d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e7d7 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e7dcu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e7d7u); RETCHK(0x55e7dcu, 0x55e7d7u); LOADALL;
  /* 0055e7dc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e7df:;
  /* 0055e7df mov dword ptr [edi + 0x13c], ebx */ { const u32 m_ = (u32)(edi + 0x13cu); M32(m_) = (u32)(ebx); }
  /* 0055e7e5 mov dword ptr [edi + 0x140], ebx */ { const u32 m_ = (u32)(edi + 0x140u); M32(m_) = (u32)(ebx); }
  /* 0055e7eb mov dword ptr [edi + 0x144], ebx */ { const u32 m_ = (u32)(edi + 0x144u); M32(m_) = (u32)(ebx); }
  /* 0055e7f1 mov eax, dword ptr [edi + 0x12c] */ { const u32 m_ = (u32)(edi + 0x12cu); eax = (u32)(M32(m_)); }
  /* 0055e7f7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e7f9 je 0x55e804 */ if (ZF_) goto L_0055e804;
  /* 0055e7fb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e7fc call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e801u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e7fcu); RETCHK(0x55e801u, 0x55e7fcu); LOADALL;
  /* 0055e801 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e804:;
  /* 0055e804 mov dword ptr [edi + 0x12c], ebx */ { const u32 m_ = (u32)(edi + 0x12cu); M32(m_) = (u32)(ebx); }
  /* 0055e80a mov dword ptr [edi + 0x130], ebx */ { const u32 m_ = (u32)(edi + 0x130u); M32(m_) = (u32)(ebx); }
  /* 0055e810 mov dword ptr [edi + 0x134], ebx */ { const u32 m_ = (u32)(edi + 0x134u); M32(m_) = (u32)(ebx); }
  /* 0055e816 mov eax, dword ptr [edi + 0x124] */ { const u32 m_ = (u32)(edi + 0x124u); eax = (u32)(M32(m_)); }
  /* 0055e81c mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0055e821 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e823 jb 0x55e834 */ if (CF_) goto L_0055e834;
  /* 0055e825 mov eax, dword ptr [edi + 0x110] */ { const u32 m_ = (u32)(edi + 0x110u); eax = (u32)(M32(m_)); }
  /* 0055e82b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e82c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e831u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e82cu); RETCHK(0x55e831u, 0x55e82cu); LOADALL;
  /* 0055e831 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e834:;
  /* 0055e834 mov dword ptr [edi + 0x124], 0xf */ { const u32 m_ = (u32)(edi + 0x124u); M32(m_) = (u32)(0xfu); }
  /* 0055e83e mov dword ptr [edi + 0x120], ebx */ { const u32 m_ = (u32)(edi + 0x120u); M32(m_) = (u32)(ebx); }
  /* 0055e844 mov byte ptr [edi + 0x110], bl */ { const u32 m_ = (u32)(edi + 0x110u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e84a cmp dword ptr [edi + 0x108], esi */ { const u32 m_ = (u32)(edi + 0x108u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e850 jb 0x55e861 */ if (CF_) goto L_0055e861;
  /* 0055e852 mov ecx, dword ptr [edi + 0xf4] */ { const u32 m_ = (u32)(edi + 0xf4u); ecx = (u32)(M32(m_)); }
  /* 0055e858 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e859 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e85eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e859u); RETCHK(0x55e85eu, 0x55e859u); LOADALL;
  /* 0055e85e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e861:;
  /* 0055e861 mov dword ptr [edi + 0x108], 0xf */ { const u32 m_ = (u32)(edi + 0x108u); M32(m_) = (u32)(0xfu); }
  /* 0055e86b mov dword ptr [edi + 0x104], ebx */ { const u32 m_ = (u32)(edi + 0x104u); M32(m_) = (u32)(ebx); }
  /* 0055e871 mov byte ptr [edi + 0xf4], bl */ { const u32 m_ = (u32)(edi + 0xf4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e877 cmp dword ptr [edi + 0xec], esi */ { const u32 m_ = (u32)(edi + 0xecu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e87d jb 0x55e88e */ if (CF_) goto L_0055e88e;
  /* 0055e87f mov edx, dword ptr [edi + 0xd8] */ { const u32 m_ = (u32)(edi + 0xd8u); edx = (u32)(M32(m_)); }
  /* 0055e885 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055e886 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e88bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e886u); RETCHK(0x55e88bu, 0x55e886u); LOADALL;
  /* 0055e88b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e88e:;
  /* 0055e88e mov dword ptr [edi + 0xec], 0xf */ { const u32 m_ = (u32)(edi + 0xecu); M32(m_) = (u32)(0xfu); }
  /* 0055e898 mov dword ptr [edi + 0xe8], ebx */ { const u32 m_ = (u32)(edi + 0xe8u); M32(m_) = (u32)(ebx); }
  /* 0055e89e mov byte ptr [edi + 0xd8], bl */ { const u32 m_ = (u32)(edi + 0xd8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e8a4 cmp dword ptr [edi + 0xd0], esi */ { const u32 m_ = (u32)(edi + 0xd0u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e8aa jb 0x55e8bb */ if (CF_) goto L_0055e8bb;
  /* 0055e8ac mov eax, dword ptr [edi + 0xbc] */ { const u32 m_ = (u32)(edi + 0xbcu); eax = (u32)(M32(m_)); }
  /* 0055e8b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e8b3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e8b8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e8b3u); RETCHK(0x55e8b8u, 0x55e8b3u); LOADALL;
  /* 0055e8b8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e8bb:;
  /* 0055e8bb mov dword ptr [edi + 0xd0], 0xf */ { const u32 m_ = (u32)(edi + 0xd0u); M32(m_) = (u32)(0xfu); }
  /* 0055e8c5 mov dword ptr [edi + 0xcc], ebx */ { const u32 m_ = (u32)(edi + 0xccu); M32(m_) = (u32)(ebx); }
  /* 0055e8cb mov byte ptr [edi + 0xbc], bl */ { const u32 m_ = (u32)(edi + 0xbcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e8d1 cmp dword ptr [edi + 0xb4], esi */ { const u32 m_ = (u32)(edi + 0xb4u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e8d7 jb 0x55e8e8 */ if (CF_) goto L_0055e8e8;
  /* 0055e8d9 mov ecx, dword ptr [edi + 0xa0] */ { const u32 m_ = (u32)(edi + 0xa0u); ecx = (u32)(M32(m_)); }
  /* 0055e8df push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e8e0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e8e5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e8e0u); RETCHK(0x55e8e5u, 0x55e8e0u); LOADALL;
  /* 0055e8e5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e8e8:;
  /* 0055e8e8 mov dword ptr [edi + 0xb4], 0xf */ { const u32 m_ = (u32)(edi + 0xb4u); M32(m_) = (u32)(0xfu); }
  /* 0055e8f2 mov dword ptr [edi + 0xb0], ebx */ { const u32 m_ = (u32)(edi + 0xb0u); M32(m_) = (u32)(ebx); }
  /* 0055e8f8 mov byte ptr [edi + 0xa0], bl */ { const u32 m_ = (u32)(edi + 0xa0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e8fe cmp dword ptr [edi + 0x98], esi */ { const u32 m_ = (u32)(edi + 0x98u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e904 jb 0x55e915 */ if (CF_) goto L_0055e915;
  /* 0055e906 mov edx, dword ptr [edi + 0x84] */ { const u32 m_ = (u32)(edi + 0x84u); edx = (u32)(M32(m_)); }
  /* 0055e90c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055e90d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e912u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e90du); RETCHK(0x55e912u, 0x55e90du); LOADALL;
  /* 0055e912 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e915:;
  /* 0055e915 mov dword ptr [edi + 0x98], 0xf */ { const u32 m_ = (u32)(edi + 0x98u); M32(m_) = (u32)(0xfu); }
  /* 0055e91f mov dword ptr [edi + 0x94], ebx */ { const u32 m_ = (u32)(edi + 0x94u); M32(m_) = (u32)(ebx); }
  /* 0055e925 mov byte ptr [edi + 0x84], bl */ { const u32 m_ = (u32)(edi + 0x84u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e92b cmp dword ptr [edi + 0x7c], esi */ { const u32 m_ = (u32)(edi + 0x7cu); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e92e jb 0x55e93c */ if (CF_) goto L_0055e93c;
  /* 0055e930 mov eax, dword ptr [edi + 0x68] */ { const u32 m_ = (u32)(edi + 0x68u); eax = (u32)(M32(m_)); }
  /* 0055e933 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e934 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e939u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e934u); RETCHK(0x55e939u, 0x55e934u); LOADALL;
  /* 0055e939 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e93c:;
  /* 0055e93c mov dword ptr [edi + 0x7c], 0xf */ { const u32 m_ = (u32)(edi + 0x7cu); M32(m_) = (u32)(0xfu); }
  /* 0055e943 mov dword ptr [edi + 0x78], ebx */ { const u32 m_ = (u32)(edi + 0x78u); M32(m_) = (u32)(ebx); }
  /* 0055e946 mov byte ptr [edi + 0x68], bl */ { const u32 m_ = (u32)(edi + 0x68u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e949 cmp dword ptr [edi + 0x60], esi */ { const u32 m_ = (u32)(edi + 0x60u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e94c jb 0x55e95a */ if (CF_) goto L_0055e95a;
  /* 0055e94e mov ecx, dword ptr [edi + 0x4c] */ { const u32 m_ = (u32)(edi + 0x4cu); ecx = (u32)(M32(m_)); }
  /* 0055e951 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055e952 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e957u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e952u); RETCHK(0x55e957u, 0x55e952u); LOADALL;
  /* 0055e957 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e95a:;
  /* 0055e95a mov dword ptr [edi + 0x60], 0xf */ { const u32 m_ = (u32)(edi + 0x60u); M32(m_) = (u32)(0xfu); }
  /* 0055e961 mov dword ptr [edi + 0x5c], ebx */ { const u32 m_ = (u32)(edi + 0x5cu); M32(m_) = (u32)(ebx); }
  /* 0055e964 mov byte ptr [edi + 0x4c], bl */ { const u32 m_ = (u32)(edi + 0x4cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e967 cmp dword ptr [edi + 0x44], esi */ { const u32 m_ = (u32)(edi + 0x44u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e96a jb 0x55e978 */ if (CF_) goto L_0055e978;
  /* 0055e96c mov edx, dword ptr [edi + 0x30] */ { const u32 m_ = (u32)(edi + 0x30u); edx = (u32)(M32(m_)); }
  /* 0055e96f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055e970 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e975u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e970u); RETCHK(0x55e975u, 0x55e970u); LOADALL;
  /* 0055e975 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e978:;
  /* 0055e978 mov dword ptr [edi + 0x44], 0xf */ { const u32 m_ = (u32)(edi + 0x44u); M32(m_) = (u32)(0xfu); }
  /* 0055e97f mov dword ptr [edi + 0x40], ebx */ { const u32 m_ = (u32)(edi + 0x40u); M32(m_) = (u32)(ebx); }
  /* 0055e982 mov byte ptr [edi + 0x30], bl */ { const u32 m_ = (u32)(edi + 0x30u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e985 cmp dword ptr [edi + 0x18], esi */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055e988 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055e989 jb 0x55e997 */ if (CF_) goto L_0055e997;
  /* 0055e98b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055e98e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e98f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55e994u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55e98fu); RETCHK(0x55e994u, 0x55e98fu); LOADALL;
  /* 0055e994 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055e997:;
  /* 0055e997 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055e99a mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 0055e99d mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0055e9a4 mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055e9a7 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055e9a8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055e9a9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055e9b0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055e9b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055e9b3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055e9c0(CPU *c) {
  NATIVE_HOOK(0x55e9c0u) REGS; LOADALL;
L_0055e9c0:;
  /* 0055e9c0 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055e9c5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e9c6 call 0x565730 */ esp -= 4; M32(esp) = 0x55e9cbu; SAVEALL; F_00565730(c); ABI_CHECK(0x565730u, 0x55e9c6u); RETCHK(0x55e9cbu, 0x55e9c6u); LOADALL;
  /* 0055e9cb mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055e9d0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055e9e0(CPU *c) {
  NATIVE_HOOK(0x55e9e0u) REGS; LOADALL;
L_0055e9e0:;
  /* 0055e9e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055e9e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055e9e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055e9e5 push 0x620068 */ { u32 v_ = 0x620068u; esp -= 4; M32(esp) = v_; }
  /* 0055e9ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055e9f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055e9f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055e9f8 sub esp, 0x24 */ { u32 a_ = esp, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055e9fb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055e9fc push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055e9fd mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055e9ff lea ecx, [edi + 0x148] */ ecx = (u32)((u32)(edi + 0x148u));
  /* 0055ea05 lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 0055ea08 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0055ea0b mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0055ea0e call 0x552e40 */ esp -= 4; M32(esp) = 0x55ea13u; SAVEALL; F_00552e40(c); ABI_CHECK(0x552e40u, 0x55ea0eu); RETCHK(0x55ea13u, 0x55ea0eu); LOADALL;
  /* 0055ea13 mov ecx, dword ptr [edi + 0x14c] */ { const u32 m_ = (u32)(edi + 0x14cu); ecx = (u32)(M32(m_)); }
  /* 0055ea19 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0055ea1c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ea1e jne 0x55ea37 */ if (!ZF_) goto L_0055ea37;
  /* 0055ea20 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055ea21 mov eax, 0xc369 */ { eax = (u32)(0xc369u); }
  /* 0055ea26 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055ea27 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055ea2a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055ea31 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055ea33 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055ea34 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055ea37:;
  /* 0055ea37 mov ecx, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055ea3a mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055ea3c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055ea3d call dword ptr [eax + 0x20] */ { const u32 m_ = (u32)(eax + 0x20u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55ea40u; SAVEALL; call_ind(c, t_); RETCHK(0x55ea40u, 0x55ea3du); LOADALL; }
  /* 0055ea40 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055ea42 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055ea44 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0055ea4b mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0055ea4e mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055ea51 lea esi, [ecx + 1] */ esi = (u32)((u32)(ecx + 0x1u));
L_0055ea54:;
  /* 0055ea54 mov dl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ea56 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ea57 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ea59 jne 0x55ea54 */ if (!ZF_) goto L_0055ea54;
  /* 0055ea5b sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055ea5d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ea5e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ea5f lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055ea62 call 0x404420 */ esp -= 4; M32(esp) = 0x55ea67u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ea62u); RETCHK(0x55ea67u, 0x55ea62u); LOADALL;
  /* 0055ea67 add edi, 0x154 */ { u32 a_ = edi, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055ea6d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055ea6e lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055ea71 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0055ea74 call 0x55fa70 */ esp -= 4; M32(esp) = 0x55ea79u; SAVEALL; F_0055fa70(c); ABI_CHECK(0x55fa70u, 0x55ea74u); RETCHK(0x55ea79u, 0x55ea74u); LOADALL;
  /* 0055ea79 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 0055ea80 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ea84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055ea85 jb 0x55ea93 */ if (CF_) goto L_0055ea93;
  /* 0055ea87 mov ecx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); ecx = (u32)(M32(m_)); }
  /* 0055ea8a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ea8b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55ea90u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55ea8bu); RETCHK(0x55ea90u, 0x55ea8bu); LOADALL;
  /* 0055ea90 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055ea93:;
  /* 0055ea93 mov edx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); edx = (u32)(M32(m_)); }
  /* 0055ea96 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ea97 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0055ea9a mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0055eaa1 mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0055eaa4 mov byte ptr [ebp - 0x2c], bl */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055eaa7 call 0x55fa20 */ esp -= 4; M32(esp) = 0x55eaacu; SAVEALL; F_0055fa20(c); ABI_CHECK(0x55fa20u, 0x55eaa7u); RETCHK(0x55eaacu, 0x55eaa7u); LOADALL;
  /* 0055eaac mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055eaaf pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055eab0 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055eab5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055eab6 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055eabd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055eabf pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055eac0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055ead0(CPU *c) {
  NATIVE_HOOK(0x55ead0u) REGS; LOADALL;
L_0055ead0:;
  /* 0055ead0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055ead1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055ead3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ead4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055ead5 lea ecx, [esi + 0x148] */ ecx = (u32)((u32)(esi + 0x148u));
  /* 0055eadb lea ebx, [ebp + 8] */ ebx = (u32)((u32)(ebp + 0x8u));
  /* 0055eade lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055eae1 call 0x552e40 */ esp -= 4; M32(esp) = 0x55eae6u; SAVEALL; F_00552e40(c); ABI_CHECK(0x552e40u, 0x55eae1u); RETCHK(0x55eae6u, 0x55eae1u); LOADALL;
  /* 0055eae6 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0055eae9 cmp eax, dword ptr [esi + 0x14c] */ { const u32 m_ = (u32)(esi + 0x14cu); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055eaef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055eaf0 je 0x55eafb */ if (ZF_) goto L_0055eafb;
  /* 0055eaf2 mov eax, dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); eax = (u32)(M32(m_)); }
  /* 0055eaf5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055eaf7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055eaf8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055eafb:;
  /* 0055eafb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055eafd mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055eaff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055eb00 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055eb10(CPU *c) {
  NATIVE_HOOK(0x55eb10u) REGS; LOADALL;
L_0055eb10:;
  /* 0055eb10 mov dword ptr [0x7a87d4], eax */ { const u32 m_ = (u32)(0x7a87d4u); M32(m_) = (u32)(eax); }
  /* 0055eb15 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 0055eb18 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055eb1d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055eb20(CPU *c) {
  NATIVE_HOOK(0x55eb20u) REGS; LOADALL;
L_0055eb20:;
  /* 0055eb20 mov dword ptr [0x7a87d8], eax */ { const u32 m_ = (u32)(0x7a87d8u); M32(m_) = (u32)(eax); }
  /* 0055eb25 mov dword ptr [ecx + 0x20], eax */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(eax); }
  /* 0055eb28 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055eb2a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055eb30(CPU *c) {
  NATIVE_HOOK(0x55eb30u) REGS; LOADALL;
L_0055eb30:;
  /* 0055eb30 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0055eb36 mov al, byte ptr [ecx + 0xf47] */ { const u32 m_ = (u32)(ecx + 0xf47u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055eb3c test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055eb3e je 0x55eb45 */ if (ZF_) goto L_0055eb45;
  /* 0055eb40 call 0x55f380 */ esp -= 4; M32(esp) = 0x55eb45u; SAVEALL; F_0055f380(c); ABI_CHECK(0x55f380u, 0x55eb40u); RETCHK(0x55eb45u, 0x55eb40u); LOADALL;
L_0055eb45:;
  /* 0055eb45 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055eb47 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055eb50(CPU *c) {
  NATIVE_HOOK(0x55eb50u) REGS; LOADALL;
L_0055eb50:;
  /* 0055eb50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055eb51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055eb53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055eb55 push 0x61fe20 */ { u32 v_ = 0x61fe20u; esp -= 4; M32(esp) = v_; }
  /* 0055eb5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055eb60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055eb61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055eb68 sub esp, 0x40 */ { u32 a_ = esp, b_ = 0x40u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055eb6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055eb6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055eb6d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055eb6e mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055eb70 mov esi, edx */ { esi = (u32)(edx); }
  /* 0055eb72 call 0x55da10 */ esp -= 4; M32(esp) = 0x55eb77u; SAVEALL; F_0055da10(c); ABI_CHECK(0x55da10u, 0x55eb72u); RETCHK(0x55eb77u, 0x55eb72u); LOADALL;
  /* 0055eb77 mov al, byte ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055eb7d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055eb7f cmp al, bl */ { u32 a_ = (eax & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055eb81 jne 0x55eb9b */ if (!ZF_) goto L_0055eb9b;
  /* 0055eb83 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055eb84 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055eb85 mov eax, 0xc374 */ { eax = (u32)(0xc374u); }
  /* 0055eb8a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055eb8b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055eb8e mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055eb95 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055eb97 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055eb98 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0055eb9b:;
  /* 0055eb9b mov eax, edi */ { eax = (u32)(edi); }
  /* 0055eb9d lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0055eba0:;
  /* 0055eba0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055eba2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055eba3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055eba5 jne 0x55eba0 */ if (!ZF_) goto L_0055eba0;
  /* 0055eba7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055eba9 mov ecx, 0x6555a4 */ { ecx = (u32)(0x6555a4u); }
  /* 0055ebae mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0055ebb1 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0055ebb4 mov dword ptr [ebp - 0x14], edi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(edi); }
  /* 0055ebb7 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0055ebba mov dword ptr [ebp - 0x24], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ecx); }
  /* 0055ebbd mov dword ptr [ebp - 0x1c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(ebx); }
  /* 0055ebc0 mov dword ptr [ebp - 0x20], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(ebx); }
  /* 0055ebc3 mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 0055ebc6 mov dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ebx); }
  /* 0055ebc9 mov dword ptr [ebp - 0x2c], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(ebx); }
  /* 0055ebcc lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0055ebcf mov dl, 0x23 */ { edx = (edx & 0xffffff00u) | ((u32)(0x23u) & 0xffu); }
  /* 0055ebd1 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0055ebd4 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0055ebd8 call 0x54e880 */ esp -= 4; M32(esp) = 0x55ebddu; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x55ebd8u); RETCHK(0x55ebddu, 0x55ebd8u); LOADALL;
  /* 0055ebdd lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0055ebe0 mov dl, 0x23 */ { edx = (edx & 0xffffff00u) | ((u32)(0x23u) & 0xffu); }
  /* 0055ebe2 lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0055ebe5 call 0x54e880 */ esp -= 4; M32(esp) = 0x55ebeau; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x55ebe5u); RETCHK(0x55ebeau, 0x55ebe5u); LOADALL;
  /* 0055ebea lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 0055ebed mov dl, 0x23 */ { edx = (edx & 0xffffff00u) | ((u32)(0x23u) & 0xffu); }
  /* 0055ebef lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0055ebf2 call 0x54e880 */ esp -= 4; M32(esp) = 0x55ebf7u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x55ebf2u); RETCHK(0x55ebf7u, 0x55ebf2u); LOADALL;
  /* 0055ebf7 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055ebfa mov dl, 0x23 */ { edx = (edx & 0xffffff00u) | ((u32)(0x23u) & 0xffu); }
  /* 0055ebfc lea ecx, [ebp - 0x18] */ ecx = (u32)((u32)(ebp + 0xffffffe8u));
  /* 0055ebff call 0x54e880 */ esp -= 4; M32(esp) = 0x55ec04u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x55ebffu); RETCHK(0x55ec04u, 0x55ebffu); LOADALL;
  /* 0055ec04 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055ec07 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055ec09 mov dword ptr [esi + 0x28], 1 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x1u); }
  /* 0055ec10 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_0055ec13:;
  /* 0055ec13 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ec15 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ec16 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ec18 jne 0x55ec13 */ if (!ZF_) goto L_0055ec13;
  /* 0055ec1a sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ec1c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ec1d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ec1e lea ecx, [esi + 0x2c] */ ecx = (u32)((u32)(esi + 0x2cu));
  /* 0055ec21 call 0x404420 */ esp -= 4; M32(esp) = 0x55ec26u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ec21u); RETCHK(0x55ec26u, 0x55ec21u); LOADALL;
  /* 0055ec26 mov edx, dword ptr [ebp - 0x20] */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); edx = (u32)(M32(m_)); }
  /* 0055ec29 mov eax, edx */ { eax = (u32)(edx); }
  /* 0055ec2b lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 0055ec2e mov edi, edi */ { edi = (u32)(edi); }
L_0055ec30:;
  /* 0055ec30 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ec32 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ec33 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ec35 jne 0x55ec30 */ if (!ZF_) goto L_0055ec30;
  /* 0055ec37 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ec39 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ec3a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ec3b lea ecx, [esi + 0x48] */ ecx = (u32)((u32)(esi + 0x48u));
  /* 0055ec3e call 0x404420 */ esp -= 4; M32(esp) = 0x55ec43u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ec3eu); RETCHK(0x55ec43u, 0x55ec3eu); LOADALL;
  /* 0055ec43 cmp dword ptr [ebp - 0x28], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ec46 jbe 0x55ec63 */ if ((CF_|ZF_)) goto L_0055ec63;
  /* 0055ec48 mov edx, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); edx = (u32)(M32(m_)); }
  /* 0055ec4b mov eax, edx */ { eax = (u32)(edx); }
  /* 0055ec4d lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_0055ec50:;
  /* 0055ec50 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ec52 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ec53 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ec55 jne 0x55ec50 */ if (!ZF_) goto L_0055ec50;
  /* 0055ec57 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ec59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ec5a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ec5b lea ecx, [esi + 0x64] */ ecx = (u32)((u32)(esi + 0x64u));
  /* 0055ec5e call 0x404420 */ esp -= 4; M32(esp) = 0x55ec63u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ec5eu); RETCHK(0x55ec63u, 0x55ec5eu); LOADALL;
L_0055ec63:;
  /* 0055ec63 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055ec68 lea edi, [esi + 0x160] */ edi = (u32)((u32)(esi + 0x160u));
  /* 0055ec6e mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0055ec71 mov edx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); edx = (u32)(M32(m_)); }
  /* 0055ec74 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ec77 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0055ec7a jb 0x55ec80 */ if (CF_) goto L_0055ec80;
  /* 0055ec7c mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0055ec7e jmp 0x55ec82 */ goto L_0055ec82;
L_0055ec80:;
  /* 0055ec80 mov esi, ecx */ { esi = (u32)(ecx); }
L_0055ec82:;
  /* 0055ec82 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0055ec85 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ec87 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ec8a jb 0x55ec8e */ if (CF_) goto L_0055ec8e;
  /* 0055ec8c mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_0055ec8e:;
  /* 0055ec8e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ec8f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ec90 lea ecx, [ebp + 0xc] */ ecx = (u32)((u32)(ebp + 0xcu));
  /* 0055ec93 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ec94 call 0x40cdc0 */ esp -= 4; M32(esp) = 0x55ec99u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x55ec94u); RETCHK(0x55ec99u, 0x55ec94u); LOADALL;
  /* 0055ec99 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055ec9c mov eax, esi */ { eax = (u32)(esi); }
  /* 0055ec9e mov dword ptr [ebp - 0x34], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(0xfu); }
  /* 0055eca5 mov dword ptr [ebp - 0x38], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ebx); }
  /* 0055eca8 mov byte ptr [ebp - 0x48], bl */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055ecab lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0055ecae mov edi, edi */ { edi = (u32)(edi); }
L_0055ecb0:;
  /* 0055ecb0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ecb2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ecb3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ecb5 jne 0x55ecb0 */ if (!ZF_) goto L_0055ecb0;
  /* 0055ecb7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ecb9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ecba push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055ecbb lea ecx, [ebp - 0x4c] */ ecx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0055ecbe call 0x404420 */ esp -= 4; M32(esp) = 0x55ecc3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ecbeu); RETCHK(0x55ecc3u, 0x55ecbeu); LOADALL;
  /* 0055ecc3 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 0055ecc6 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0055ecca mov eax, dword ptr [0x9b8878] */ { const u32 m_ = (u32)(0x9b8878u); eax = (u32)(M32(m_)); }
  /* 0055eccf push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ecd0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ecd1 call 0x5659b0 */ esp -= 4; M32(esp) = 0x55ecd6u; SAVEALL; F_005659b0(c); ABI_CHECK(0x5659b0u, 0x55ecd1u); RETCHK(0x55ecd6u, 0x55ecd1u); LOADALL;
  /* 0055ecd6 cmp dword ptr [ebp - 0x34], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffccu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ecda jb 0x55ece8 */ if (CF_) goto L_0055ece8;
  /* 0055ecdc mov ecx, dword ptr [ebp - 0x48] */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); ecx = (u32)(M32(m_)); }
  /* 0055ecdf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ece0 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55ece5u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55ece0u); RETCHK(0x55ece5u, 0x55ece0u); LOADALL;
  /* 0055ece5 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055ece8:;
  /* 0055ece8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055eceb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055ecec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055eced mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055ecf2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055ecf3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055ecfa mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055ecfc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055ecfd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0055ed00(CPU *c) {
  NATIVE_HOOK(0x55ed00u) REGS; LOADALL;
L_0055ed00:;
  /* 0055ed00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055ed01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055ed03 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055ed05 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0055ed0a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055ed10 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ed11 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055ed18 sub esp, 0x1c */ { u32 a_ = esp, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055ed1b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055ed1c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055ed1d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055ed20 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055ed21 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055ed23 mov edi, edx */ { edi = (u32)(edx); }
  /* 0055ed25 call 0x55da10 */ esp -= 4; M32(esp) = 0x55ed2au; SAVEALL; F_0055da10(c); ABI_CHECK(0x55da10u, 0x55ed25u); RETCHK(0x55ed2au, 0x55ed25u); LOADALL;
  /* 0055ed2a mov al, byte ptr [esi + 0x188] */ { const u32 m_ = (u32)(esi + 0x188u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ed30 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ed32 jne 0x55ed4c */ if (!ZF_) goto L_0055ed4c;
  /* 0055ed34 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055ed35 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055ed36 mov eax, 0xc374 */ { eax = (u32)(0xc374u); }
  /* 0055ed3b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055ed3c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055ed3f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055ed46 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055ed48 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055ed49 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0055ed4c:;
  /* 0055ed4c mov eax, edi */ { eax = (u32)(edi); }
  /* 0055ed4e mov dword ptr [esi + 0x28], 8 */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(0x8u); }
  /* 0055ed55 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0055ed58:;
  /* 0055ed58 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ed5a inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ed5b test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ed5d jne 0x55ed58 */ if (!ZF_) goto L_0055ed58;
  /* 0055ed5f sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ed61 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ed62 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055ed63 lea ecx, [esi + 0x9c] */ ecx = (u32)((u32)(esi + 0x9cu));
  /* 0055ed69 call 0x404420 */ esp -= 4; M32(esp) = 0x55ed6eu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ed69u); RETCHK(0x55ed6eu, 0x55ed69u); LOADALL;
  /* 0055ed6e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0055ed70 lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_0055ed73:;
  /* 0055ed73 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ed75 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ed76 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ed78 jne 0x55ed73 */ if (!ZF_) goto L_0055ed73;
  /* 0055ed7a sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ed7c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ed7d push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055ed7e lea ecx, [esi + 0xb8] */ ecx = (u32)((u32)(esi + 0xb8u));
  /* 0055ed84 call 0x404420 */ esp -= 4; M32(esp) = 0x55ed89u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ed84u); RETCHK(0x55ed89u, 0x55ed84u); LOADALL;
  /* 0055ed89 mov edi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edi = (u32)(M32(m_)); }
  /* 0055ed8c mov eax, edi */ { eax = (u32)(edi); }
  /* 0055ed8e lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
L_0055ed91:;
  /* 0055ed91 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ed93 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055ed94 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ed96 jne 0x55ed91 */ if (!ZF_) goto L_0055ed91;
  /* 0055ed98 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ed9a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ed9b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055ed9c lea ecx, [esi + 0xd4] */ ecx = (u32)((u32)(esi + 0xd4u));
  /* 0055eda2 call 0x404420 */ esp -= 4; M32(esp) = 0x55eda7u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55eda2u); RETCHK(0x55eda7u, 0x55eda2u); LOADALL;
  /* 0055eda7 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055edac xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055edae lea edi, [esi + 0x160] */ edi = (u32)((u32)(esi + 0x160u));
  /* 0055edb4 mov dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ebx); }
  /* 0055edb7 mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0055edba cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055edbd lea edx, [edi + 4] */ edx = (u32)((u32)(edi + 0x4u));
  /* 0055edc0 jb 0x55edc6 */ if (CF_) goto L_0055edc6;
  /* 0055edc2 mov esi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); esi = (u32)(M32(m_)); }
  /* 0055edc4 jmp 0x55edc8 */ goto L_0055edc8;
L_0055edc6:;
  /* 0055edc6 mov esi, edx */ { esi = (u32)(edx); }
L_0055edc8:;
  /* 0055edc8 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0055edcb add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055edcd cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055edd0 jb 0x55edd4 */ if (CF_) goto L_0055edd4;
  /* 0055edd2 mov edx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edx = (u32)(M32(m_)); }
L_0055edd4:;
  /* 0055edd4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055edd5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055edd6 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 0055edd9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055edda call 0x40cdc0 */ esp -= 4; M32(esp) = 0x55eddfu; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x55eddau); RETCHK(0x55eddfu, 0x55eddau); LOADALL;
  /* 0055eddf mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055ede2 mov eax, esi */ { eax = (u32)(esi); }
  /* 0055ede4 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0055edeb mov dword ptr [ebp - 0x14], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ebx); }
  /* 0055edee mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0055edf2 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0055edf5:;
  /* 0055edf5 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055edf7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055edf8 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055edfa jne 0x55edf5 */ if (!ZF_) goto L_0055edf5;
  /* 0055edfc sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055edfe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055edff push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055ee00 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0055ee03 call 0x404420 */ esp -= 4; M32(esp) = 0x55ee08u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55ee03u); RETCHK(0x55ee08u, 0x55ee03u); LOADALL;
  /* 0055ee08 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0055ee0b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0055ee0e mov eax, dword ptr [0x9b8878] */ { const u32 m_ = (u32)(0x9b8878u); eax = (u32)(M32(m_)); }
  /* 0055ee13 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ee14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ee15 call 0x5659b0 */ esp -= 4; M32(esp) = 0x55ee1au; SAVEALL; F_005659b0(c); ABI_CHECK(0x5659b0u, 0x55ee15u); RETCHK(0x55ee1au, 0x55ee15u); LOADALL;
  /* 0055ee1a cmp dword ptr [ebp - 0x10], 0x10 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ee1e jb 0x55ee2c */ if (CF_) goto L_0055ee2c;
  /* 0055ee20 mov ecx, dword ptr [ebp - 0x24] */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); ecx = (u32)(M32(m_)); }
  /* 0055ee23 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ee24 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55ee29u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55ee24u); RETCHK(0x55ee29u, 0x55ee24u); LOADALL;
  /* 0055ee29 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055ee2c:;
  /* 0055ee2c mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055ee2f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055ee30 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055ee31 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055ee36 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055ee37 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055ee3e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055ee40 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055ee41 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0055ee50(CPU *c) {
  NATIVE_HOOK(0x55ee50u) REGS; LOADALL;
L_0055ee50:;
  /* 0055ee50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055ee51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055ee53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055ee55 push 0x61fde8 */ { u32 v_ = 0x61fde8u; esp -= 4; M32(esp) = v_; }
  /* 0055ee5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055ee60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ee61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055ee68 sub esp, 0x58 */ { u32 a_ = esp, b_ = 0x58u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055ee6b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055ee70 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0055ee73 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055ee76 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055ee77 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055ee79 mov cx, word ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0055ee7d test cx, cx */ { u32 a_ = (ecx & 0xffffu), b_ = (ecx & 0xffffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 2); }
  /* 0055ee80 jne 0x55ef6e */ if (!ZF_) goto L_0055ef6e;
  /* 0055ee86 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055ee87 lea esi, [eax + 0xc] */ esi = (u32)((u32)(eax + 0xcu));
  /* 0055ee8a movzx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M16(m_)); }
  /* 0055ee8d sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055ee90 cmp eax, 0x20 */ { u32 a_ = eax, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ee93 jae 0x55ef54 */ if (!CF_) goto L_0055ef54;
  /* 0055ee99 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055ee9b mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0055ee9d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055ee9e shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0055eea1 lea edi, [ebp - 0x30] */ edi = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055eea4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0055eea6 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0055eea8 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055eeab rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0055eead mov byte ptr [ebp + eax - 0x30], 0 */ { const u32 m_ = (u32)(ebp + eax + 0xffffffd0u); M8(m_) = (u8)(0x0u); }
  /* 0055eeb2 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055eeb5 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055eeb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055eeb8 call 0x5fe9c2 */ esp -= 4; M32(esp) = 0x55eebdu; SAVEALL; F_005fe9c2(c); ABI_CHECK(0x5fe9c2u, 0x55eeb8u); RETCHK(0x55eebdu, 0x55eeb8u); LOADALL;
  /* 0055eebd mov esi, eax */ { esi = (u32)(eax); }
  /* 0055eebf add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055eec2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055eec4 je 0x55ef53 */ if (ZF_) goto L_0055ef53;
  /* 0055eeca mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055eecd lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055eed0 add ecx, 0x160 */ { u32 a_ = ecx, b_ = 0x160u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055eed6 lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 0055eed9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0055eee0:;
  /* 0055eee0 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055eee2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055eee3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055eee5 jne 0x55eee0 */ if (!ZF_) goto L_0055eee0;
  /* 0055eee7 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055eee9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055eeea lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055eeed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055eeee call 0x404420 */ esp -= 4; M32(esp) = 0x55eef3u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55eeeeu); RETCHK(0x55eef3u, 0x55eeeeu); LOADALL;
  /* 0055eef3 mov ecx, dword ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); ecx = (u32)(M32(m_)); }
  /* 0055eef6 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 0055eef9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055eefa mov byte ptr [esi], 0x3a */ { const u32 m_ = (u32)(esi); M8(m_) = (u8)(0x3au); }
  /* 0055eefd mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055ef00 push 0x643534 */ { u32 v_ = 0x643534u; esp -= 4; M32(esp) = v_; }
  /* 0055ef05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ef06 mov dword ptr [edx + 0x17c], ecx */ { const u32 m_ = (u32)(edx + 0x17cu); M32(m_) = (u32)(ecx); }
  /* 0055ef0c call 0x5fe9aa */ esp -= 4; M32(esp) = 0x55ef11u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x55ef0cu); RETCHK(0x55ef11u, 0x55ef0cu); LOADALL;
  /* 0055ef11 mov eax, dword ptr [0x9b8878] */ { const u32 m_ = (u32)(0x9b8878u); eax = (u32)(M32(m_)); }
  /* 0055ef16 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055ef19 call 0x5659a0 */ esp -= 4; M32(esp) = 0x55ef1eu; SAVEALL; F_005659a0(c); ABI_CHECK(0x5659a0u, 0x55ef19u); RETCHK(0x55ef1eu, 0x55ef19u); LOADALL;
  /* 0055ef1e lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055ef21 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ef22 lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0055ef25 call 0x403060 */ esp -= 4; M32(esp) = 0x55ef2au; SAVEALL; F_00403060(c); ABI_CHECK(0x403060u, 0x55ef25u); RETCHK(0x55ef2au, 0x55ef25u); LOADALL;
  /* 0055ef2a lea ecx, [ebp - 0x64] */ ecx = (u32)((u32)(ebp + 0xffffff9cu));
  /* 0055ef2d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0055ef34 mov edx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); edx = (u32)(M32(m_)); }
  /* 0055ef3a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055ef3b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ef3c call 0x565660 */ esp -= 4; M32(esp) = 0x55ef41u; SAVEALL; F_00565660(c); ABI_CHECK(0x565660u, 0x55ef3cu); RETCHK(0x55ef41u, 0x55ef3cu); LOADALL;
  /* 0055ef41 cmp dword ptr [ebp - 0x4c], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ef45 jb 0x55ef53 */ if (CF_) goto L_0055ef53;
  /* 0055ef47 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 0055ef4a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ef4b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55ef50u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55ef4bu); RETCHK(0x55ef50u, 0x55ef4bu); LOADALL;
  /* 0055ef50 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055ef53:;
  /* 0055ef53 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0055ef54:;
  /* 0055ef54 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0055ef55:;
  /* 0055ef55 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055ef58 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055ef5f mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0055ef62 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055ef63 call 0x61af31 */ esp -= 4; M32(esp) = 0x55ef68u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55ef63u); RETCHK(0x55ef68u, 0x55ef63u); LOADALL;
  /* 0055ef68 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055ef6a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055ef6b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055ef6e:;
  /* 0055ef6e cmp cx, 1 */ { u32 a_ = (ecx & 0xffffu), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055ef72 jne 0x55ef8e */ if (!ZF_) goto L_0055ef8e;
  /* 0055ef74 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055ef77 lea eax, [ebp - 0x48] */ eax = (u32)((u32)(ebp + 0xffffffb8u));
  /* 0055ef7a mov word ptr [ebp - 0x46], 0x6201 */ { const u32 m_ = (u32)(ebp + 0xffffffbau); M16(m_) = (u16)(0x6201u); }
  /* 0055ef80 mov word ptr [ebp - 0x44], 0xc */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M16(m_) = (u16)(0xcu); }
  /* 0055ef86 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055ef88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055ef89 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55ef8cu; SAVEALL; call_ind(c, t_); RETCHK(0x55ef8cu, 0x55ef89u); LOADALL; }
  /* 0055ef8c jmp 0x55ef55 */ goto L_0055ef55;
L_0055ef8e:;
  /* 0055ef8e cmp cx, 2 */ { u32 a_ = (ecx & 0xffffu), b_ = 0x2u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055ef92 jne 0x55ef55 */ if (!ZF_) goto L_0055ef55;
  /* 0055ef94 mov ecx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055ef97 lea eax, [ebp - 0x3c] */ eax = (u32)((u32)(ebp + 0xffffffc4u));
  /* 0055ef9a mov word ptr [ebp - 0x3a], 0x6201 */ { const u32 m_ = (u32)(ebp + 0xffffffc6u); M16(m_) = (u16)(0x6201u); }
  /* 0055efa0 mov word ptr [ebp - 0x38], 0xd */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M16(m_) = (u16)(0xdu); }
  /* 0055efa6 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055efa8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055efa9 call dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55efacu; SAVEALL; call_ind(c, t_); RETCHK(0x55efacu, 0x55efa9u); LOADALL; }
  /* 0055efac jmp 0x55ef55 */ goto L_0055ef55;
}

void F_0055efb0(CPU *c) {
  NATIVE_HOOK(0x55efb0u) REGS; LOADALL;
L_0055efb0:;
  /* 0055efb0 mov ecx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055efb3 jmp 0x55f600 */ goto L_0055f600;
L_0055f600:;
  /* 0055f600 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f601 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f603 sub esp, 0x114 */ { u32 a_ = esp, b_ = 0x114u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f609 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055f60e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f60f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f610 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f611 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055f613 mov esi, dword ptr [edi + 0x40] */ { const u32 m_ = (u32)(edi + 0x40u); esi = (u32)(M32(m_)); }
  /* 0055f616 lea ebx, [edi + 0x2c] */ ebx = (u32)((u32)(edi + 0x2cu));
  /* 0055f619 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055f61c cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f620 mov byte ptr [ebp - 0x114], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M8(m_) = (u8)(0x1u); }
  /* 0055f627 jb 0x55f62e */ if (CF_) goto L_0055f62e;
  /* 0055f629 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055f62c jmp 0x55f631 */ goto L_0055f631;
L_0055f62e:;
  /* 0055f62e lea edx, [ebx + 4] */ edx = (u32)((u32)(ebx + 0x4u));
L_0055f631:;
  /* 0055f631 call 0x55f5e0 */ esp -= 4; M32(esp) = 0x55f636u; SAVEALL; F_0055f5e0(c); ABI_CHECK(0x55f5e0u, 0x55f631u); RETCHK(0x55f636u, 0x55f631u); LOADALL;
  /* 0055f636 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f638 je 0x55f641 */ if (ZF_) goto L_0055f641;
  /* 0055f63a mov byte ptr [ebp - 0x114], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); M8(m_) = (u8)(0x0u); }
L_0055f641:;
  /* 0055f641 mov eax, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); eax = (u32)(M32(m_)); }
  /* 0055f644 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f647 jne 0x55f676 */ if (!ZF_) goto L_0055f676;
  /* 0055f649 mov ecx, dword ptr [ebp - 0x114] */ { const u32 m_ = (u32)(ebp + 0xfffffeecu); ecx = (u32)(M32(m_)); }
  /* 0055f64f xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0055f651 mov dx, word ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edx = (edx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0055f655 lea eax, [edi + 0x48] */ eax = (u32)((u32)(edi + 0x48u));
  /* 0055f658 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f659 mov eax, dword ptr [0x9b8878] */ { const u32 m_ = (u32)(0x9b8878u); eax = (u32)(M32(m_)); }
  /* 0055f65e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f65f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f660 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f661 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f662 call 0x565ab0 */ esp -= 4; M32(esp) = 0x55f667u; SAVEALL; F_00565ab0(c); ABI_CHECK(0x565ab0u, 0x55f662u); RETCHK(0x55f667u, 0x55f662u); LOADALL;
  /* 0055f667 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055f668 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f669 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055f66a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055f66d call 0x61af31 */ esp -= 4; M32(esp) = 0x55f672u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55f66du); RETCHK(0x55f672u, 0x55f66du); LOADALL;
  /* 0055f672 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f674 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f675 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055f676:;
  /* 0055f676 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f679 jne 0x55f72f */ if (!ZF_) goto L_0055f72f;
  /* 0055f67f mov eax, dword ptr [edi + 0xec] */ { const u32 m_ = (u32)(edi + 0xecu); eax = (u32)(M32(m_)); }
  /* 0055f685 mov esi, 0x10 */ { esi = (u32)(0x10u); }
  /* 0055f68a cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f68c jb 0x55f696 */ if (CF_) goto L_0055f696;
  /* 0055f68e mov eax, dword ptr [edi + 0xd8] */ { const u32 m_ = (u32)(edi + 0xd8u); eax = (u32)(M32(m_)); }
  /* 0055f694 jmp 0x55f69c */ goto L_0055f69c;
L_0055f696:;
  /* 0055f696 lea eax, [edi + 0xd8] */ eax = (u32)((u32)(edi + 0xd8u));
L_0055f69c:;
  /* 0055f69c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f69d call 0x5fe92e */ esp -= 4; M32(esp) = 0x55f6a2u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x55f69du); RETCHK(0x55f6a2u, 0x55f69du); LOADALL;
  /* 0055f6a2 mov dword ptr [ebp - 0x10c], eax */ { const u32 m_ = (u32)(ebp + 0xfffffef4u); M32(m_) = (u32)(eax); }
  /* 0055f6a8 mov eax, dword ptr [edi + 0xd0] */ { const u32 m_ = (u32)(edi + 0xd0u); eax = (u32)(M32(m_)); }
  /* 0055f6ae add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f6b1 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f6b3 jb 0x55f6bd */ if (CF_) goto L_0055f6bd;
  /* 0055f6b5 mov eax, dword ptr [edi + 0xbc] */ { const u32 m_ = (u32)(edi + 0xbcu); eax = (u32)(M32(m_)); }
  /* 0055f6bb jmp 0x55f6c3 */ goto L_0055f6c3;
L_0055f6bd:;
  /* 0055f6bd lea eax, [edi + 0xbc] */ eax = (u32)((u32)(edi + 0xbcu));
L_0055f6c3:;
  /* 0055f6c3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f6c4 call 0x5fe92e */ esp -= 4; M32(esp) = 0x55f6c9u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x55f6c4u); RETCHK(0x55f6c9u, 0x55f6c4u); LOADALL;
  /* 0055f6c9 mov cx, word ptr [edi + 0xb0] */ { const u32 m_ = (u32)(edi + 0xb0u); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0055f6d0 mov dword ptr [ebp - 0x110], eax */ { const u32 m_ = (u32)(ebp + 0xfffffef0u); M32(m_) = (u32)(eax); }
  /* 0055f6d6 mov eax, dword ptr [edi + 0xb4] */ { const u32 m_ = (u32)(edi + 0xb4u); eax = (u32)(M32(m_)); }
  /* 0055f6dc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f6df cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f6e1 mov word ptr [ebp - 0x108], cx */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); M16(m_) = (u16)((ecx & 0xffffu)); }
  /* 0055f6e8 jb 0x55f6f2 */ if (CF_) goto L_0055f6f2;
  /* 0055f6ea mov edi, dword ptr [edi + 0xa0] */ { const u32 m_ = (u32)(edi + 0xa0u); edi = (u32)(M32(m_)); }
  /* 0055f6f0 jmp 0x55f6f8 */ goto L_0055f6f8;
L_0055f6f2:;
  /* 0055f6f2 add edi, 0xa0 */ { u32 a_ = edi, b_ = 0xa0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0055f6f8:;
  /* 0055f6f8 push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 0055f6fd lea edx, [ebp - 0x106] */ edx = (u32)((u32)(ebp + 0xfffffefau));
  /* 0055f703 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f704 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f705 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x55f70au; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x55f705u); RETCHK(0x55f70au, 0x55f705u); LOADALL;
  /* 0055f70a movzx eax, word ptr [ebp - 0x108] */ { const u32 m_ = (u32)(ebp + 0xfffffef8u); eax = (u32)(M16(m_)); }
  /* 0055f711 mov edx, dword ptr [0x9b8878] */ { const u32 m_ = (u32)(0x9b8878u); edx = (u32)(M32(m_)); }
  /* 0055f717 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f71a lea ecx, [ebp - 0x110] */ ecx = (u32)((u32)(ebp + 0xfffffef0u));
  /* 0055f720 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f721 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f722 mov byte ptr [ebp + eax - 0x106], 0 */ { const u32 m_ = (u32)(ebp + eax + 0xfffffefau); M8(m_) = (u8)(0x0u); }
  /* 0055f72a call 0x565c60 */ esp -= 4; M32(esp) = 0x55f72fu; SAVEALL; F_00565c60(c); ABI_CHECK(0x565c60u, 0x55f72au); RETCHK(0x55f72fu, 0x55f72au); LOADALL;
L_0055f72f:;
  /* 0055f72f mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055f732 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055f733 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f734 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055f735 call 0x61af31 */ esp -= 4; M32(esp) = 0x55f73au; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55f735u); RETCHK(0x55f73au, 0x55f735u); LOADALL;
  /* 0055f73a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f73c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f73d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055efc0(CPU *c) {
  NATIVE_HOOK(0x55efc0u) REGS; LOADALL;
L_0055efc0:;
  /* 0055efc0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055efc1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055efc3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055efc6 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055efc9 lea edx, [ebp - 0xc] */ edx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0055efcc mov word ptr [ebp - 0xa], 0x6201 */ { const u32 m_ = (u32)(ebp + 0xfffffff6u); M16(m_) = (u16)(0x6201u); }
  /* 0055efd2 mov word ptr [ebp - 8], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M16(m_) = (u16)(0xbu); }
  /* 0055efd8 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055efda push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055efdb call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55efdeu; SAVEALL; call_ind(c, t_); RETCHK(0x55efdeu, 0x55efdbu); LOADALL; }
  /* 0055efde mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055efe0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055efe1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055eff0(CPU *c) {
  NATIVE_HOOK(0x55eff0u) REGS; LOADALL;
L_0055eff0:;
  /* 0055eff0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055eff1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055eff3 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055eff6 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055eff9 lea edx, [ebp - 0xc] */ edx = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0055effc mov word ptr [ebp - 0xa], 0x6201 */ { const u32 m_ = (u32)(ebp + 0xfffffff6u); M16(m_) = (u16)(0x6201u); }
  /* 0055f002 mov word ptr [ebp - 8], 0xb */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M16(m_) = (u16)(0xbu); }
  /* 0055f008 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055f00a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f00b call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f00eu; SAVEALL; call_ind(c, t_); RETCHK(0x55f00eu, 0x55f00bu); LOADALL; }
  /* 0055f00e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f010 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f011 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f020(CPU *c) {
  NATIVE_HOOK(0x55f020u) REGS; LOADALL;
L_0055f020:;
  /* 0055f020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f023 sub esp, 0x104 */ { u32 a_ = esp, b_ = 0x104u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f029 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055f02e mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055f031 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f034 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f035 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f036 lea esi, [eax + 0xc] */ esi = (u32)((u32)(eax + 0xcu));
  /* 0055f039 movzx eax, word ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M16(m_)); }
  /* 0055f03c sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f03f shr eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0055f042 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055f044 jle 0x55f071 */ if ((ZF_|LT_)) goto L_0055f071;
  /* 0055f046 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0055f048 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f049 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0055f050:;
  /* 0055f050 movzx ax, byte ptr [esi + 3] */ { const u32 m_ = (u32)(esi + 0x3u); eax = (eax & 0xffff0000u) | ((u32)(M8(m_)) & 0xffffu); }
  /* 0055f055 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055f057 mov cx, word ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (ecx & 0xffff0000u) | ((u32)(M16(m_)) & 0xffffu); }
  /* 0055f05a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055f05c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055f05e mov edi, 0x9b883c */ { edi = (u32)(0x9b883cu); }
  /* 0055f063 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f064 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f065 call 0x564b70 */ esp -= 4; M32(esp) = 0x55f06au; SAVEALL; F_00564b70(c); ABI_CHECK(0x564b70u, 0x55f065u); RETCHK(0x55f06au, 0x55f065u); LOADALL;
  /* 0055f06a add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055f06d dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0055f06e jne 0x55f050 */ if (!ZF_) goto L_0055f050;
  /* 0055f070 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0055f071:;
  /* 0055f071 mov eax, dword ptr [0x9b8854] */ { const u32 m_ = (u32)(0x9b8854u); eax = (u32)(M32(m_)); }
  /* 0055f076 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055f078 je 0x55f07c */ if (ZF_) goto L_0055f07c;
  /* 0055f07a call eax */ { u32 t_ = eax; esp -= 4; M32(esp) = 0x55f07cu; SAVEALL; call_ind(c, t_); RETCHK(0x55f07cu, 0x55f07au); LOADALL; }
L_0055f07c:;
  /* 0055f07c mov ebx, 0x9b883c */ { ebx = (u32)(0x9b883cu); }
  /* 0055f081 call 0x564bc0 */ esp -= 4; M32(esp) = 0x55f086u; SAVEALL; F_00564bc0(c); ABI_CHECK(0x564bc0u, 0x55f081u); RETCHK(0x55f086u, 0x55f081u); LOADALL;
  /* 0055f086 mov esi, eax */ { esi = (u32)(eax); }
  /* 0055f088 movzx edx, si */ { edx = (u32)((esi & 0xffffu)); }
  /* 0055f08b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f08c lea eax, [ebp - 0x104] */ eax = (u32)((u32)(ebp + 0xfffffefcu));
  /* 0055f092 push 0x656704 */ { u32 v_ = 0x656704u; esp -= 4; M32(esp) = v_; }
  /* 0055f097 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f098 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x55f09du; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x55f098u); RETCHK(0x55f09du, 0x55f098u); LOADALL;
  /* 0055f09d mov ecx, dword ptr [0x9b8878] */ { const u32 m_ = (u32)(0x9b8878u); ecx = (u32)(M32(m_)); }
  /* 0055f0a3 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f0a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f0a7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f0a8 call 0x565e10 */ esp -= 4; M32(esp) = 0x55f0adu; SAVEALL; F_00565e10(c); ABI_CHECK(0x565e10u, 0x55f0a8u); RETCHK(0x55f0adu, 0x55f0a8u); LOADALL;
  /* 0055f0ad mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055f0b0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f0b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055f0b2 call 0x61af31 */ esp -= 4; M32(esp) = 0x55f0b7u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55f0b2u); RETCHK(0x55f0b7u, 0x55f0b2u); LOADALL;
  /* 0055f0b7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f0b9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f0ba ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f0c0(CPU *c) {
  NATIVE_HOOK(0x55f0c0u) REGS; LOADALL;
L_0055f0c0:;
  /* 0055f0c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f0c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f0c3 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055f0c6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055f0c8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f0c9 jmp dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0055f0d0(CPU *c) {
  NATIVE_HOOK(0x55f0d0u) REGS; LOADALL;
L_0055f0d0:;
  /* 0055f0d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f0d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f0d3 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055f0d6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055f0d8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f0d9 jmp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0055f0e0(CPU *c) {
  NATIVE_HOOK(0x55f0e0u) REGS; LOADALL;
L_0055f0e0:;
  /* 0055f0e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f0e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f0e3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f0e4 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0055f0e7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f0e8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055f0ea mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055f0ed mov byte ptr [eax + 0x188], 1 */ { const u32 m_ = (u32)(eax + 0x188u); M8(m_) = (u8)(0x1u); }
  /* 0055f0f4 cmp word ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055f0f9 jne 0x55f101 */ if (!ZF_) goto L_0055f101;
  /* 0055f0fb push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f0fc call 0x55f110 */ esp -= 4; M32(esp) = 0x55f101u; SAVEALL; F_0055f110(c); ABI_CHECK(0x55f110u, 0x55f0fcu); RETCHK(0x55f101u, 0x55f0fcu); LOADALL;
L_0055f101:;
  /* 0055f101 mov ecx, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055f104 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055f106 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f107 call dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f10au; SAVEALL; call_ind(c, t_); RETCHK(0x55f10au, 0x55f107u); LOADALL; }
  /* 0055f10a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f10b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055f10c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f10d ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f110(CPU *c) {
  NATIVE_HOOK(0x55f110u) REGS; LOADALL;
L_0055f110:;
  /* 0055f110 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f111 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f113 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055f115 push 0x61c461 */ { u32 v_ = 0x61c461u; esp -= 4; M32(esp) = v_; }
  /* 0055f11a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055f120 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f121 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055f128 sub esp, 0x4a8 */ { u32 a_ = esp, b_ = 0x4a8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f12e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055f133 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0055f136 movzx eax, word ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M16(m_)); }
  /* 0055f139 sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f13c cmp eax, 0x400 */ { u32 a_ = eax, b_ = 0x400u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f141 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f142 lea esi, [ebx + 0xc] */ esi = (u32)((u32)(ebx + 0xcu));
  /* 0055f145 jb 0x55f152 */ if (CF_) goto L_0055f152;
  /* 0055f147 mov word ptr [ebx + 4], 6 */ { const u32 m_ = (u32)(ebx + 0x4u); M16(m_) = (u16)(0x6u); }
  /* 0055f14d jmp 0x55f284 */ goto L_0055f284;
L_0055f152:;
  /* 0055f152 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0055f154 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0055f156 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0055f159 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f15a mov byte ptr [ebp + eax - 0x490], 0 */ { const u32 m_ = (u32)(ebp + eax + 0xfffffb70u); M8(m_) = (u8)(0x0u); }
  /* 0055f162 lea edi, [ebp - 0x490] */ edi = (u32)((u32)(ebp + 0xfffffb70u));
  /* 0055f168 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0055f16a mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0055f16c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055f16f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0055f171 mov dword ptr [ebp - 0x494], eax */ { const u32 m_ = (u32)(ebp + 0xfffffb6cu); M32(m_) = (u32)(eax); }
  /* 0055f177 mov ecx, 0x6555a4 */ { ecx = (u32)(0x6555a4u); }
  /* 0055f17c lea eax, [ebp - 0x490] */ eax = (u32)((u32)(ebp + 0xfffffb70u));
  /* 0055f182 mov dword ptr [ebp - 0x49c], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffb64u); M32(m_) = (u32)(ecx); }
  /* 0055f188 mov dword ptr [ebp - 0x498], eax */ { const u32 m_ = (u32)(ebp + 0xfffffb68u); M32(m_) = (u32)(eax); }
  /* 0055f18e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0055f190 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055f193 mov dword ptr [ebp - 0x4b4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffb4cu); M32(m_) = (u32)(ecx); }
  /* 0055f199 mov dword ptr [ebp - 0x4ac], eax */ { const u32 m_ = (u32)(ebp + 0xfffffb54u); M32(m_) = (u32)(eax); }
  /* 0055f19f mov dword ptr [ebp - 0x4b0], eax */ { const u32 m_ = (u32)(ebp + 0xfffffb50u); M32(m_) = (u32)(eax); }
  /* 0055f1a5 mov dword ptr [ebp - 0x4a8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffb58u); M32(m_) = (u32)(ecx); }
  /* 0055f1ab mov dword ptr [ebp - 0x4a0], eax */ { const u32 m_ = (u32)(ebp + 0xfffffb60u); M32(m_) = (u32)(eax); }
  /* 0055f1b1 mov dword ptr [ebp - 0x4a4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffb5cu); M32(m_) = (u32)(eax); }
  /* 0055f1b7 lea eax, [ebp - 0x4b4] */ eax = (u32)((u32)(ebp + 0xfffffb4cu));
  /* 0055f1bd xor dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0055f1bf lea ecx, [ebp - 0x49c] */ ecx = (u32)((u32)(ebp + 0xfffffb64u));
  /* 0055f1c5 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0055f1c9 call 0x54e880 */ esp -= 4; M32(esp) = 0x55f1ceu; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x55f1c9u); RETCHK(0x55f1ceu, 0x55f1c9u); LOADALL;
  /* 0055f1ce lea eax, [ebp - 0x4a8] */ eax = (u32)((u32)(ebp + 0xfffffb58u));
  /* 0055f1d4 xor dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); edx = (edx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0055f1d6 lea ecx, [ebp - 0x49c] */ ecx = (u32)((u32)(ebp + 0xfffffb64u));
  /* 0055f1dc call 0x54e880 */ esp -= 4; M32(esp) = 0x55f1e1u; SAVEALL; F_0054e880(c); ABI_CHECK(0x54e880u, 0x55f1dcu); RETCHK(0x55f1e1u, 0x55f1dcu); LOADALL;
  /* 0055f1e1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f1e3 jne 0x55f1f0 */ if (!ZF_) goto L_0055f1f0;
  /* 0055f1e5 mov word ptr [ebx + 4], 6 */ { const u32 m_ = (u32)(ebx + 0x4u); M16(m_) = (u16)(0x6u); }
  /* 0055f1eb jmp 0x55f283 */ goto L_0055f283;
L_0055f1f0:;
  /* 0055f1f0 mov edx, dword ptr [ebp - 0x4b0] */ { const u32 m_ = (u32)(ebp + 0xfffffb50u); edx = (u32)(M32(m_)); }
  /* 0055f1f6 mov eax, edx */ { eax = (u32)(edx); }
  /* 0055f1f8 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0055f1fb jmp 0x55f200 */ goto L_0055f200;
L_0055f200:;
  /* 0055f200 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f202 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f203 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f205 jne 0x55f200 */ if (!ZF_) goto L_0055f200;
  /* 0055f207 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055f20a mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055f20d sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f20f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f210 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f211 add ecx, 0x2c */ { u32 a_ = ecx, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055f214 call 0x404420 */ esp -= 4; M32(esp) = 0x55f219u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f214u); RETCHK(0x55f219u, 0x55f214u); LOADALL;
  /* 0055f219 mov ecx, dword ptr [ebp - 0x4a4] */ { const u32 m_ = (u32)(ebp + 0xfffffb5cu); ecx = (u32)(M32(m_)); }
  /* 0055f21f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055f221 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0055f224:;
  /* 0055f224 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f226 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f227 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f229 jne 0x55f224 */ if (!ZF_) goto L_0055f224;
  /* 0055f22b sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f22d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f22e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f22f mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055f232 add ecx, 0x80 */ { u32 a_ = ecx, b_ = 0x80u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055f238 call 0x404420 */ esp -= 4; M32(esp) = 0x55f23du; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f238u); RETCHK(0x55f23du, 0x55f238u); LOADALL;
  /* 0055f23d mov eax, dword ptr [ebp - 0x498] */ { const u32 m_ = (u32)(ebp + 0xfffffb68u); eax = (u32)(M32(m_)); }
  /* 0055f243 mov edx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055f246 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055f248 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 0055f24a lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0055f250 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f251 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f252 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f253 call 0x5feb90 */ esp -= 4; M32(esp) = 0x55f258u; SAVEALL; F_005feb90(c); ABI_CHECK(0x5feb90u, 0x55f253u); RETCHK(0x55f258u, 0x55f253u); LOADALL;
  /* 0055f258 lea eax, [ebp - 0x90] */ eax = (u32)((u32)(ebp + 0xffffff70u));
  /* 0055f25e add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f261 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0055f264:;
  /* 0055f264 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f266 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f267 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f269 jne 0x55f264 */ if (!ZF_) goto L_0055f264;
  /* 0055f26b sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f26d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f26e lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0055f274 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f275 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055f278 add ecx, 0xf0 */ { u32 a_ = ecx, b_ = 0xf0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055f27e call 0x404420 */ esp -= 4; M32(esp) = 0x55f283u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f27eu); RETCHK(0x55f283u, 0x55f27eu); LOADALL;
L_0055f283:;
  /* 0055f283 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0055f284:;
  /* 0055f284 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055f287 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055f28e mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0055f291 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f292 call 0x61af31 */ esp -= 4; M32(esp) = 0x55f297u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55f292u); RETCHK(0x55f297u, 0x55f292u); LOADALL;
  /* 0055f297 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f299 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f29a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f2a0(CPU *c) {
  NATIVE_HOOK(0x55f2a0u) REGS; LOADALL;
L_0055f2a0:;
  /* 0055f2a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f2a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f2a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f2a4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f2a5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055f2a8 mov ebx, 1 */ { ebx = (u32)(0x1u); }
  /* 0055f2ad cmp word ptr [esi + 4], bx */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M16(m_), b_ = (ebx & 0xffffu); u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055f2b1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f2b2 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055f2b4 jne 0x55f2c9 */ if (!ZF_) goto L_0055f2c9;
  /* 0055f2b6 movzx eax, word ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M16(m_)); }
  /* 0055f2b9 sub eax, 0xc */ { u32 a_ = eax, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f2bc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f2bd lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 0055f2c0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f2c1 mov ecx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055f2c4 call 0x404420 */ esp -= 4; M32(esp) = 0x55f2c9u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f2c4u); RETCHK(0x55f2c9u, 0x55f2c4u); LOADALL;
L_0055f2c9:;
  /* 0055f2c9 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055f2cc mov byte ptr [edx + 0x188], bl */ { const u32 m_ = (u32)(edx + 0x188u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055f2d2 cmp word ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); u32 a_ = M16(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055f2d7 jne 0x55f2e1 */ if (!ZF_) goto L_0055f2e1;
  /* 0055f2d9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f2da mov ebx, esi */ { ebx = (u32)(esi); }
  /* 0055f2dc call 0x55f110 */ esp -= 4; M32(esp) = 0x55f2e1u; SAVEALL; F_0055f110(c); ABI_CHECK(0x55f110u, 0x55f2dcu); RETCHK(0x55f2e1u, 0x55f2dcu); LOADALL;
L_0055f2e1:;
  /* 0055f2e1 mov ecx, dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055f2e4 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055f2e6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f2e7 call dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f2eau; SAVEALL; call_ind(c, t_); RETCHK(0x55f2eau, 0x55f2e7u); LOADALL; }
  /* 0055f2ea pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055f2eb pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f2ec pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055f2ed pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f2ee ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f300(CPU *c) {
  NATIVE_HOOK(0x55f300u) REGS; LOADALL;
L_0055f300:;
  /* 0055f300 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f301 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f303 mov ecx, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055f306 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055f308 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f309 jmp dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_0055f310(CPU *c) {
  NATIVE_HOOK(0x55f310u) REGS; LOADALL;
L_0055f310:;
  /* 0055f310 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f311 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f313 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f314 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f315 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f316 mov edi, eax */ { edi = (u32)(eax); }
  /* 0055f318 mov esi, dword ptr [edi + 0x178] */ { const u32 m_ = (u32)(edi + 0x178u); esi = (u32)(M32(m_)); }
  /* 0055f31e add edi, 0x160 */ { u32 a_ = edi, b_ = 0x160u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0055f324 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f327 lea ecx, [edi + 4] */ ecx = (u32)((u32)(edi + 0x4u));
  /* 0055f32a jb 0x55f330 */ if (CF_) goto L_0055f330;
  /* 0055f32c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055f32e jmp 0x55f332 */ goto L_0055f332;
L_0055f330:;
  /* 0055f330 mov edx, ecx */ { edx = (u32)(ecx); }
L_0055f332:;
  /* 0055f332 mov eax, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0055f335 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f337 cmp esi, 0x10 */ { u32 a_ = esi, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f33a jb 0x55f33e */ if (CF_) goto L_0055f33e;
  /* 0055f33c mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_0055f33e:;
  /* 0055f33e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f33f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f340 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055f343 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f344 call 0x40cdc0 */ esp -= 4; M32(esp) = 0x55f349u; SAVEALL; F_0040cdc0(c); ABI_CHECK(0x40cdc0u, 0x55f344u); RETCHK(0x55f349u, 0x55f344u); LOADALL;
  /* 0055f349 mov eax, 0x9b8868 */ { eax = (u32)(0x9b8868u); }
  /* 0055f34e call 0x5663c0 */ esp -= 4; M32(esp) = 0x55f353u; SAVEALL; F_005663c0(c); ABI_CHECK(0x5663c0u, 0x55f34eu); RETCHK(0x55f353u, 0x55f34eu); LOADALL;
  /* 0055f353 mov eax, dword ptr [0x9b8878] */ { const u32 m_ = (u32)(0x9b8878u); eax = (u32)(M32(m_)); }
  /* 0055f358 call 0x5659a0 */ esp -= 4; M32(esp) = 0x55f35du; SAVEALL; F_005659a0(c); ABI_CHECK(0x5659a0u, 0x55f358u); RETCHK(0x55f35du, 0x55f358u); LOADALL;
  /* 0055f35d mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 0055f363 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055f365 call 0x563b10 */ esp -= 4; M32(esp) = 0x55f36au; SAVEALL; F_00563b10(c); ABI_CHECK(0x563b10u, 0x55f365u); RETCHK(0x55f36au, 0x55f365u); LOADALL;
  /* 0055f36a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055f36b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f36c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f36e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f36f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055f370(CPU *c) {
  NATIVE_HOOK(0x55f370u) REGS; LOADALL;
L_0055f370:;
  /* 0055f370 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f375 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055f377 jmp 0x563b10 */ SAVEALL; F_00563b10(c); return;
}

void F_0055f380(CPU *c) {
  NATIVE_HOOK(0x55f380u) REGS; LOADALL;
L_0055f380:;
  /* 0055f380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f383 mov eax, 0xce4c */ { eax = (u32)(0xce4cu); }
  /* 0055f388 call 0x5fede0 */ esp -= 4; M32(esp) = 0x55f38du; SAVEALL; F_005fede0(c); ABI_CHECK(0x5fede0u, 0x55f388u); RETCHK(0x55f38du, 0x55f388u); LOADALL;
  /* 0055f38d mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055f392 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f393 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f394 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0055f397 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055f399 mov eax, dword ptr [edi] */ { const u32 m_ = (u32)(edi); eax = (u32)(M32(m_)); }
  /* 0055f39b call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f39eu; SAVEALL; call_ind(c, t_); RETCHK(0x55f39eu, 0x55f39bu); LOADALL; }
  /* 0055f39e lea ebx, [ebp - 0xce48] */ ebx = (u32)((u32)(ebp + 0xffff31b8u));
  /* 0055f3a4 mov dword ptr [ebp - 0xce4c], eax */ { const u32 m_ = (u32)(ebp + 0xffff31b4u); M32(m_) = (u32)(eax); }
  /* 0055f3aa call 0x55c1d0 */ esp -= 4; M32(esp) = 0x55f3afu; SAVEALL; F_0055c1d0(c); ABI_CHECK(0x55c1d0u, 0x55f3aau); RETCHK(0x55f3afu, 0x55f3aau); LOADALL;
  /* 0055f3af mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 0055f3b5 push 0x65 */ { u32 v_ = 0x65u; esp -= 4; M32(esp) = v_; }
  /* 0055f3b7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f3b8 mov edx, 0xce48 */ { edx = (u32)(0xce48u); }
  /* 0055f3bd lea eax, [ebp - 0xce4c] */ eax = (u32)((u32)(ebp + 0xffff31b4u));
  /* 0055f3c3 call 0x565810 */ esp -= 4; M32(esp) = 0x55f3c8u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x55f3c3u); RETCHK(0x55f3c8u, 0x55f3c3u); LOADALL;
  /* 0055f3c8 mov edx, edi */ { edx = (u32)(edi); }
  /* 0055f3ca call 0x55d6f0 */ esp -= 4; M32(esp) = 0x55f3cfu; SAVEALL; F_0055d6f0(c); ABI_CHECK(0x55d6f0u, 0x55f3cau); RETCHK(0x55f3cfu, 0x55f3cau); LOADALL;
  /* 0055f3cf mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0055f3d2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055f3d3 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055f3d4 call 0x61af31 */ esp -= 4; M32(esp) = 0x55f3d9u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55f3d4u); RETCHK(0x55f3d9u, 0x55f3d4u); LOADALL;
  /* 0055f3d9 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f3db pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f3dc ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055f3e0(CPU *c) {
  NATIVE_HOOK(0x55f3e0u) REGS; LOADALL;
L_0055f3e0:;
  /* 0055f3e0 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f3e5 jmp 0x5657f0 */ goto L_005657f0;
L_005657f0:;
  /* 005657f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005657f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005657f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005657f4 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 005657f6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005657f7 mov edx, 4 */ { edx = (u32)(0x4u); }
  /* 005657fc lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 005657ff mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00565806 call 0x565810 */ esp -= 4; M32(esp) = 0x56580bu; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x565806u); RETCHK(0x56580bu, 0x565806u); LOADALL;
  /* 0056580b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056580d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056580e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055f3f0(CPU *c) {
  NATIVE_HOOK(0x55f3f0u) REGS; LOADALL;
L_0055f3f0:;
  /* 0055f3f0 jmp 0x9de940 */ goto L_009de940;
L_0055f3f6:;
  /* 0055f3f6 lea eax, [ebp - 8] */ eax = (u32)((u32)(ebp + 0xfffffff8u));
  /* 0055f3f9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f3fa lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055f3fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f3fe mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055f401 mov eax, 0x9b883c */ { eax = (u32)(0x9b883cu); }
  /* 0055f406 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0055f40d mov dword ptr [ebp - 8], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x0u); }
  /* 0055f414 call 0x564c70 */ esp -= 4; M32(esp) = 0x55f419u; SAVEALL; F_00564c70(c); ABI_CHECK(0x564c70u, 0x55f414u); RETCHK(0x55f419u, 0x55f414u); LOADALL;
  /* 0055f419 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055f41b jne 0x55f42d */ if (!ZF_) goto L_0055f42d;
  /* 0055f41d mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 0055f420 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055f422 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0055f424 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f427u; SAVEALL; call_ind(c, t_); RETCHK(0x55f427u, 0x55f424u); LOADALL; }
  /* 0055f427 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f429 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f42a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0055f42d:;
  /* 0055f42d mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f432 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 0055f434 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f435 call 0x563b10 */ esp -= 4; M32(esp) = 0x55f43au; SAVEALL; F_00563b10(c); ABI_CHECK(0x563b10u, 0x55f435u); RETCHK(0x55f43au, 0x55f435u); LOADALL;
  /* 0055f43a mov edx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 0055f43d mov eax, edx */ { eax = (u32)(edx); }
  /* 0055f43f lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_0055f442:;
  /* 0055f442 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f444 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f445 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f447 jne 0x55f442 */ if (!ZF_) goto L_0055f442;
  /* 0055f449 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f44b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f44c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f44d lea ecx, [esi + 0x160] */ ecx = (u32)((u32)(esi + 0x160u));
  /* 0055f453 call 0x404420 */ esp -= 4; M32(esp) = 0x55f458u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f453u); RETCHK(0x55f458u, 0x55f453u); LOADALL;
  /* 0055f458 mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 0055f45b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f45c mov dword ptr [esi + 0x17c], ecx */ { const u32 m_ = (u32)(esi + 0x17cu); M32(m_) = (u32)(ecx); }
  /* 0055f462 call 0x55f790 */ esp -= 4; M32(esp) = 0x55f467u; SAVEALL; F_0055f790(c); ABI_CHECK(0x55f790u, 0x55f462u); RETCHK(0x55f467u, 0x55f462u); LOADALL;
  /* 0055f467 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055f468 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f46a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f46b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_0062d520:;
  /* 0062d520 movzx eax, word ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M16(m_)); }
  /* 0062d525 mov dword ptr [0x9c1008], eax */ { const u32 m_ = (u32)(0x9c1008u); M32(m_) = (u32)(eax); }
  /* 0062d52a push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0062d52b mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0062d52d sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0062d530 jmp 0x55f3f6 */ goto L_0055f3f6;
L_009de940:;
  /* 009de940 movzx eax, word ptr [esp + 4] */ { const u32 m_ = (u32)(esp + 0x4u); eax = (u32)(M16(m_)); }
  /* 009de945 cmp eax, 0x1f6 */ { u32 a_ = eax, b_ = 0x1f6u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de94a jne 0x9de9c0 */ if (!ZF_) goto L_009de9c0;
  /* 009de94c cmp byte ptr [0x9c08f0], 0 */ { const u32 m_ = (u32)(0x9c08f0u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009de953 jne 0x9de9c0 */ if (!ZF_) goto L_009de9c0;
  /* 009de955 mov eax, dword ptr [esp] */ { const u32 m_ = (u32)(esp); eax = (u32)(M32(m_)); }
  /* 009de958 cmp eax, 0x4adb19 */ { u32 a_ = eax, b_ = 0x4adb19u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de95d je 0x9de9a1 */ if (ZF_) goto L_009de9a1;
  /* 009de95f cmp eax, 0x4ae74f */ { u32 a_ = eax, b_ = 0x4ae74fu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de964 je 0x9de9a1 */ if (ZF_) goto L_009de9a1;
  /* 009de966 cmp eax, 0x4aeb68 */ { u32 a_ = eax, b_ = 0x4aeb68u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 009de96b je 0x9de96f */ if (ZF_) goto L_009de96f;
  /* 009de96d jmp 0x9de9c0 */ goto L_009de9c0;
L_009de96f:;
  /* 009de96f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 009de970 mov ecx, dword ptr [ebp - 0x238] */ { const u32 m_ = (u32)(ebp + 0xfffffdc8u); ecx = (u32)(M32(m_)); }
  /* 009de976 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 009de978 cmp word ptr [ecx + edi], 0x1f6 */ { const u32 m_ = (u32)(ecx + edi); u32 a_ = M16(m_), b_ = 0x1f6u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de97e jne 0x9de99e */ if (!ZF_) goto L_009de99e;
  /* 009de980 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 009de982 je 0x9de98d */ if (ZF_) goto L_009de98d;
  /* 009de984 cmp word ptr [ecx + edi - 0x24], 0x1f5 */ { const u32 m_ = (u32)(ecx + edi + 0xffffffdcu); u32 a_ = M16(m_), b_ = 0x1f5u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de98b je 0x9de99b */ if (ZF_) goto L_009de99b;
L_009de98d:;
  /* 009de98d cmp word ptr [ecx + edi + 0x24], 0x1f5 */ { const u32 m_ = (u32)(ecx + edi + 0x24u); u32 a_ = M16(m_), b_ = 0x1f5u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de994 jne 0x9de99e */ if (!ZF_) goto L_009de99e;
  /* 009de996 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 009de999 jmp 0x9de99e */ goto L_009de99e;
L_009de99b:;
  /* 009de99b sub edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
L_009de99e:;
  /* 009de99e pop ecx */ { u32 v_ = M32(esp); esp += 4; ecx = (u32)(v_); }
  /* 009de99f jmp 0x9de9c0 */ goto L_009de9c0;
L_009de9a1:;
  /* 009de9a1 cmp word ptr [edi], 0x1f6 */ { const u32 m_ = (u32)(edi); u32 a_ = M16(m_), b_ = 0x1f6u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de9a6 jne 0x9de9c0 */ if (!ZF_) goto L_009de9c0;
  /* 009de9a8 cmp word ptr [edi - 0x24], 0x1f5 */ { const u32 m_ = (u32)(edi + 0xffffffdcu); u32 a_ = M16(m_), b_ = 0x1f5u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de9ae je 0x9de9bd */ if (ZF_) goto L_009de9bd;
  /* 009de9b0 cmp word ptr [edi + 0x24], 0x1f5 */ { const u32 m_ = (u32)(edi + 0x24u); u32 a_ = M16(m_), b_ = 0x1f5u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 009de9b6 jne 0x9de9c0 */ if (!ZF_) goto L_009de9c0;
  /* 009de9b8 add edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 009de9bb jmp 0x9de9c0 */ goto L_009de9c0;
L_009de9bd:;
  /* 009de9bd sub edi, 0x24 */ { u32 a_ = edi, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
L_009de9c0:;
  /* 009de9c0 jmp 0x62d520 */ goto L_0062d520;
}

void F_0055f470(CPU *c) {
  NATIVE_HOOK(0x55f470u) REGS; LOADALL;
L_0055f470:;
  /* 0055f470 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f471 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f473 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f478 push 0x79 */ { u32 v_ = 0x79u; esp -= 4; M32(esp) = v_; }
  /* 0055f47a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f47b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f47e mov edx, 0x181 */ { edx = (u32)(0x181u); }
  /* 0055f483 call 0x565810 */ esp -= 4; M32(esp) = 0x55f488u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x55f483u); RETCHK(0x55f488u, 0x55f483u); LOADALL;
  /* 0055f488 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055f48d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f48e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f4a0(CPU *c) {
  NATIVE_HOOK(0x55f4a0u) REGS; LOADALL;
L_0055f4a0:;
  /* 0055f4a0 mov dword ptr [0x9b8824], eax */ { const u32 m_ = (u32)(0x9b8824u); M32(m_) = (u32)(eax); }
  /* 0055f4a5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055f4b0(CPU *c) {
  NATIVE_HOOK(0x55f4b0u) REGS; LOADALL;
L_0055f4b0:;
  /* 0055f4b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f4b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f4b3 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f4b8 push 0x3e8 */ { u32 v_ = 0x3e8u; esp -= 4; M32(esp) = v_; }
  /* 0055f4bd movsx edx, dx */ { edx = (u32)((u32)sxt((edx & 0xffffu), 2) & 0xffffffffu); }
  /* 0055f4c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f4c1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f4c4 call 0x565810 */ esp -= 4; M32(esp) = 0x55f4c9u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x55f4c4u); RETCHK(0x55f4c9u, 0x55f4c4u); LOADALL;
  /* 0055f4c9 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055f4ce pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f4cf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f4e0(CPU *c) {
  NATIVE_HOOK(0x55f4e0u) REGS; LOADALL;
L_0055f4e0:;
  /* 0055f4e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f4e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f4e3 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f4e8 push 0x3e9 */ { u32 v_ = 0x3e9u; esp -= 4; M32(esp) = v_; }
  /* 0055f4ed movsx edx, dx */ { edx = (u32)((u32)sxt((edx & 0xffffu), 2) & 0xffffffffu); }
  /* 0055f4f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f4f1 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f4f4 call 0x565810 */ esp -= 4; M32(esp) = 0x55f4f9u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x55f4f4u); RETCHK(0x55f4f9u, 0x55f4f4u); LOADALL;
  /* 0055f4f9 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055f4fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f4ff ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f510(CPU *c) {
  NATIVE_HOOK(0x55f510u) REGS; LOADALL;
L_0055f510:;
  /* 0055f510 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f511 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f513 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f518 push 0x3ea */ { u32 v_ = 0x3eau; esp -= 4; M32(esp) = v_; }
  /* 0055f51d movsx edx, dx */ { edx = (u32)((u32)sxt((edx & 0xffffu), 2) & 0xffffffffu); }
  /* 0055f520 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f521 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f524 call 0x565810 */ esp -= 4; M32(esp) = 0x55f529u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x55f524u); RETCHK(0x55f529u, 0x55f524u); LOADALL;
  /* 0055f529 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055f52e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f52f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f540(CPU *c) {
  NATIVE_HOOK(0x55f540u) REGS; LOADALL;
L_0055f540:;
  /* 0055f540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f543 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f548 push 0x3eb */ { u32 v_ = 0x3ebu; esp -= 4; M32(esp) = v_; }
  /* 0055f54d movsx edx, dx */ { edx = (u32)((u32)sxt((edx & 0xffffu), 2) & 0xffffffffu); }
  /* 0055f550 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f551 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f554 call 0x565810 */ esp -= 4; M32(esp) = 0x55f559u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x55f554u); RETCHK(0x55f559u, 0x55f554u); LOADALL;
  /* 0055f559 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055f55e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f55f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f570(CPU *c) {
  NATIVE_HOOK(0x55f570u) REGS; LOADALL;
L_0055f570:;
  /* 0055f570 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f571 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f573 mov eax, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); eax = (u32)(M32(m_)); }
  /* 0055f578 push 0x3ec */ { u32 v_ = 0x3ecu; esp -= 4; M32(esp) = v_; }
  /* 0055f57d movsx edx, dx */ { edx = (u32)((u32)sxt((edx & 0xffffu), 2) & 0xffffffffu); }
  /* 0055f580 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f581 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f584 call 0x565810 */ esp -= 4; M32(esp) = 0x55f589u; SAVEALL; F_00565810(c); ABI_CHECK(0x565810u, 0x55f584u); RETCHK(0x55f589u, 0x55f584u); LOADALL;
  /* 0055f589 mov eax, 0xc351 */ { eax = (u32)(0xc351u); }
  /* 0055f58e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f58f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f5a0(CPU *c) {
  NATIVE_HOOK(0x55f5a0u) REGS; LOADALL;
L_0055f5a0:;
  /* 0055f5a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f5a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f5a3 cmp word ptr [ebp + 0xc], 0x21 */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = M16(m_), b_ = 0x21u; u32 r_ = (a_ - b_) & 0xffffu; SETFC(OP_SUB, a_, b_, r_, 2); }
  /* 0055f5a8 jle 0x55f5b0 */ if ((ZF_|LT_)) goto L_0055f5b0;
  /* 0055f5aa xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0055f5ac pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f5ad ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0055f5b0:;
  /* 0055f5b0 mov eax, esi */ { eax = (u32)(esi); }
  /* 0055f5b2 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0055f5b5:;
  /* 0055f5b5 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f5b7 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f5b8 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f5ba jne 0x55f5b5 */ if (!ZF_) goto L_0055f5b5;
  /* 0055f5bc mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055f5bf sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f5c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f5c2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f5c3 add ecx, 0x10c */ { u32 a_ = ecx, b_ = 0x10cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055f5c9 call 0x404420 */ esp -= 4; M32(esp) = 0x55f5ceu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f5c9u); RETCHK(0x55f5ceu, 0x55f5c9u); LOADALL;
  /* 0055f5ce mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0055f5d0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f5d1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0055f5e0(CPU *c) {
  NATIVE_HOOK(0x55f5e0u) REGS; LOADALL;
L_0055f5e0:;
  /* 0055f5e0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0055f5e2 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0055f5e4 jle 0x55f5f6 */ if ((ZF_|LT_)) goto L_0055f5f6;
L_0055f5e6:;
  /* 0055f5e6 mov al, byte ptr [ecx + edx] */ { const u32 m_ = (u32)(ecx + edx); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f5e9 cmp al, 0x39 */ { u32 a_ = (eax & 0xffu), b_ = 0x39u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055f5eb jg 0x55f5f9 */ if (!(ZF_|LT_)) goto L_0055f5f9;
  /* 0055f5ed cmp al, 0x30 */ { u32 a_ = (eax & 0xffu), b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055f5ef jl 0x55f5f9 */ if (LT_) goto L_0055f5f9;
  /* 0055f5f1 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f5f2 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f5f4 jl 0x55f5e6 */ if (LT_) goto L_0055f5e6;
L_0055f5f6:;
  /* 0055f5f6 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0055f5f8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0055f5f9:;
  /* 0055f5f9 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0055f5fb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055f790(CPU *c) {
  NATIVE_HOOK(0x55f790u) REGS; LOADALL;
L_0055f790:;
  /* 0055f790 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f791 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f793 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055f795 push 0x62290b */ { u32 v_ = 0x62290bu; esp -= 4; M32(esp) = v_; }
  /* 0055f79a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055f7a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f7a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055f7a8 sub esp, 0xa0 */ { u32 a_ = esp, b_ = 0xa0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f7ae mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 0055f7b3 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0055f7b6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f7b9 cmp dword ptr [eax + 0x178], 0x10 */ { const u32 m_ = (u32)(eax + 0x178u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f7c0 jb 0x55f7ca */ if (CF_) goto L_0055f7ca;
  /* 0055f7c2 mov ecx, dword ptr [eax + 0x164] */ { const u32 m_ = (u32)(eax + 0x164u); ecx = (u32)(M32(m_)); }
  /* 0055f7c8 jmp 0x55f7d0 */ goto L_0055f7d0;
L_0055f7ca:;
  /* 0055f7ca lea ecx, [eax + 0x164] */ ecx = (u32)((u32)(eax + 0x164u));
L_0055f7d0:;
  /* 0055f7d0 mov eax, dword ptr [eax + 0x17c] */ { const u32 m_ = (u32)(eax + 0x17cu); eax = (u32)(M32(m_)); }
  /* 0055f7d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f7d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f7d8 lea ecx, [ebp - 0x90] */ ecx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0055f7de push 0x6566fc */ { u32 v_ = 0x6566fcu; esp -= 4; M32(esp) = v_; }
  /* 0055f7e3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f7e4 call 0x5fe9aa */ esp -= 4; M32(esp) = 0x55f7e9u; SAVEALL; F_005fe9aa(c); ABI_CHECK(0x5fe9aau, 0x55f7e4u); RETCHK(0x55f7e9u, 0x55f7e4u); LOADALL;
  /* 0055f7e9 lea eax, [ebp - 0x90] */ eax = (u32)((u32)(ebp + 0xffffff70u));
  /* 0055f7ef add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f7f2 mov dword ptr [ebp - 0x94], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); M32(m_) = (u32)(0xfu); }
  /* 0055f7fc mov dword ptr [ebp - 0x98], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff68u); M32(m_) = (u32)(0x0u); }
  /* 0055f806 mov byte ptr [ebp - 0xa8], 0 */ { const u32 m_ = (u32)(ebp + 0xffffff58u); M8(m_) = (u8)(0x0u); }
  /* 0055f80d lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_0055f810:;
  /* 0055f810 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f812 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f813 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055f815 jne 0x55f810 */ if (!ZF_) goto L_0055f810;
  /* 0055f817 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f819 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f81a lea edx, [ebp - 0x90] */ edx = (u32)((u32)(ebp + 0xffffff70u));
  /* 0055f820 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f821 lea ecx, [ebp - 0xac] */ ecx = (u32)((u32)(ebp + 0xffffff54u));
  /* 0055f827 call 0x404420 */ esp -= 4; M32(esp) = 0x55f82cu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f827u); RETCHK(0x55f82cu, 0x55f827u); LOADALL;
  /* 0055f82c lea eax, [ebp - 0xac] */ eax = (u32)((u32)(ebp + 0xffffff54u));
  /* 0055f832 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0055f839 mov ecx, dword ptr [0x9b887c] */ { const u32 m_ = (u32)(0x9b887cu); ecx = (u32)(M32(m_)); }
  /* 0055f83f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f840 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f841 call 0x565660 */ esp -= 4; M32(esp) = 0x55f846u; SAVEALL; F_00565660(c); ABI_CHECK(0x565660u, 0x55f841u); RETCHK(0x55f846u, 0x55f841u); LOADALL;
  /* 0055f846 cmp dword ptr [ebp - 0x94], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffff6cu); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f84d jb 0x55f85e */ if (CF_) goto L_0055f85e;
  /* 0055f84f mov edx, dword ptr [ebp - 0xa8] */ { const u32 m_ = (u32)(ebp + 0xffffff58u); edx = (u32)(M32(m_)); }
  /* 0055f855 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f856 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55f85bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55f856u); RETCHK(0x55f85bu, 0x55f856u); LOADALL;
  /* 0055f85b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055f85e:;
  /* 0055f85e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055f861 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055f868 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0055f86b call 0x61af31 */ esp -= 4; M32(esp) = 0x55f870u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x55f86bu); RETCHK(0x55f870u, 0x55f86bu); LOADALL;
  /* 0055f870 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f872 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f873 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055f880(CPU *c) {
  NATIVE_HOOK(0x55f880u) REGS; LOADALL;
L_0055f880:;
  /* 0055f880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055f881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055f883 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055f885 push 0x61fdc8 */ { u32 v_ = 0x61fdc8u; esp -= 4; M32(esp) = v_; }
  /* 0055f88a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055f890 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f891 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055f898 sub esp, 0x6c */ { u32 a_ = esp, b_ = 0x6cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055f89b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f89c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f89d mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0055f8a0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055f8a1 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0055f8a3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055f8a6 add ecx, 0x148 */ { u32 a_ = ecx, b_ = 0x148u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0055f8ac lea ebx, [esi + 0x88] */ ebx = (u32)((u32)(esi + 0x88u));
  /* 0055f8b2 lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 0055f8b5 mov dword ptr [ebp - 0x18], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(ecx); }
  /* 0055f8b8 call 0x552e40 */ esp -= 4; M32(esp) = 0x55f8bdu; SAVEALL; F_00552e40(c); ABI_CHECK(0x552e40u, 0x55f8b8u); RETCHK(0x55f8bdu, 0x55f8b8u); LOADALL;
  /* 0055f8bd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055f8c0 mov eax, dword ptr [eax + 0x14c] */ { const u32 m_ = (u32)(eax + 0x14cu); eax = (u32)(M32(m_)); }
  /* 0055f8c6 cmp dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f8c9 je 0x55f8e0 */ if (ZF_) goto L_0055f8e0;
  /* 0055f8cb pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055f8cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055f8cd xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0055f8cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055f8d0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055f8d3 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055f8da mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055f8dc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055f8dd ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0055f8e0:;
  /* 0055f8e0 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0055f8e2 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0055f8e4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f8e5 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0055f8e7 call dword ptr [edx + 0x1c] */ { const u32 m_ = (u32)(edx + 0x1cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f8eau; SAVEALL; call_ind(c, t_); RETCHK(0x55f8eau, 0x55f8e7u); LOADALL; }
  /* 0055f8ea mov eax, dword ptr [esi + 0x84] */ { const u32 m_ = (u32)(esi + 0x84u); eax = (u32)(M32(m_)); }
  /* 0055f8f0 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0055f8f2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f8f3 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0055f8f5 call dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f8f8u; SAVEALL; call_ind(c, t_); RETCHK(0x55f8f8u, 0x55f8f5u); LOADALL; }
  /* 0055f8f8 mov edx, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edx = (u32)(M32(m_)); }
  /* 0055f8fa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055f8fb mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0055f8fd call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x55f900u; SAVEALL; call_ind(c, t_); RETCHK(0x55f900u, 0x55f8fdu); LOADALL; }
  /* 0055f900 add esi, 0x8c */ { u32 a_ = esi, b_ = 0x8cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0055f906 call 0x55ce00 */ esp -= 4; M32(esp) = 0x55f90bu; SAVEALL; F_0055ce00(c); ABI_CHECK(0x55ce00u, 0x55f906u); RETCHK(0x55f90bu, 0x55f906u); LOADALL;
  /* 0055f90b mov edx, edi */ { edx = (u32)(edi); }
  /* 0055f90d call 0x55d6f0 */ esp -= 4; M32(esp) = 0x55f912u; SAVEALL; F_0055d6f0(c); ABI_CHECK(0x55d6f0u, 0x55f90du); RETCHK(0x55f912u, 0x55f90du); LOADALL;
  /* 0055f912 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0055f914 lea ecx, [ebp - 0x14] */ ecx = (u32)((u32)(ebp + 0xffffffecu));
  /* 0055f917 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 0055f91a mov eax, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); eax = (u32)(M32(m_)); }
  /* 0055f91d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f91e lea ebx, [ebp - 0x1c] */ ebx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0055f921 mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 0055f924 call 0x552da0 */ esp -= 4; M32(esp) = 0x55f929u; SAVEALL; F_00552da0(c); ABI_CHECK(0x552da0u, 0x55f924u); RETCHK(0x55f929u, 0x55f924u); LOADALL;
  /* 0055f929 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0055f92c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055f92e mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055f930 mov dword ptr [ebp - 0x20], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(0xfu); }
  /* 0055f937 mov dword ptr [ebp - 0x24], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M32(m_) = (u32)(ebx); }
  /* 0055f93a mov byte ptr [ebp - 0x34], bl */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055f93d lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
L_0055f940:;
  /* 0055f940 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055f942 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055f943 cmp dl, bl */ { u32 a_ = (edx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055f945 jne 0x55f940 */ if (!ZF_) goto L_0055f940;
  /* 0055f947 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0055f949 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f94a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f94b lea ecx, [ebp - 0x38] */ ecx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0055f94e call 0x404420 */ esp -= 4; M32(esp) = 0x55f953u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55f94eu); RETCHK(0x55f953u, 0x55f94eu); LOADALL;
  /* 0055f953 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055f955 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0055f958 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f959 lea edx, [ebp - 0x38] */ edx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 0055f95c mov esi, 0xf */ { esi = (u32)(0xfu); }
  /* 0055f961 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f962 lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0055f965 mov dword ptr [ebp - 0x40], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esi); }
  /* 0055f968 mov dword ptr [ebp - 0x44], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ebx); }
  /* 0055f96b mov byte ptr [ebp - 0x54], bl */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055f96e call 0x404140 */ esp -= 4; M32(esp) = 0x55f973u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x55f96eu); RETCHK(0x55f973u, 0x55f96eu); LOADALL;
  /* 0055f973 mov dword ptr [ebp - 0x3c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(edi); }
  /* 0055f976 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055f978 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0055f97c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055f97d lea eax, [ebp - 0x58] */ eax = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0055f980 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f981 lea ecx, [ebp - 0x78] */ ecx = (u32)((u32)(ebp + 0xffffff88u));
  /* 0055f984 mov dword ptr [ebp - 0x60], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(esi); }
  /* 0055f987 mov dword ptr [ebp - 0x64], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ebx); }
  /* 0055f98a mov byte ptr [ebp - 0x74], bl */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055f98d call 0x404140 */ esp -= 4; M32(esp) = 0x55f992u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x55f98du); RETCHK(0x55f992u, 0x55f98du); LOADALL;
  /* 0055f992 mov ecx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); ecx = (u32)(M32(m_)); }
  /* 0055f995 mov dword ptr [ebp - 0x5c], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffa4u); M32(m_) = (u32)(ecx); }
  /* 0055f998 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055f99b add edx, 0x154 */ { u32 a_ = edx, b_ = 0x154u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0055f9a1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f9a2 lea eax, [ebp - 0x78] */ eax = (u32)((u32)(ebp + 0xffffff88u));
  /* 0055f9a5 lea ebx, [ebp - 0x1c] */ ebx = (u32)((u32)(ebp + 0xffffffe4u));
  /* 0055f9a8 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0055f9ac call 0x44b9a0 */ esp -= 4; M32(esp) = 0x55f9b1u; SAVEALL; F_0044b9a0(c); ABI_CHECK(0x44b9a0u, 0x55f9acu); RETCHK(0x55f9b1u, 0x55f9acu); LOADALL;
  /* 0055f9b1 mov eax, dword ptr [ebp - 0x60] */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); eax = (u32)(M32(m_)); }
  /* 0055f9b4 mov edi, 0x10 */ { edi = (u32)(0x10u); }
  /* 0055f9b9 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f9bb jb 0x55f9c9 */ if (CF_) goto L_0055f9c9;
  /* 0055f9bd mov eax, dword ptr [ebp - 0x74] */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); eax = (u32)(M32(m_)); }
  /* 0055f9c0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055f9c1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55f9c6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55f9c1u); RETCHK(0x55f9c6u, 0x55f9c1u); LOADALL;
  /* 0055f9c6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055f9c9:;
  /* 0055f9c9 mov eax, dword ptr [ebp - 0x40] */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); eax = (u32)(M32(m_)); }
  /* 0055f9cc xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0055f9ce cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f9d0 mov dword ptr [ebp - 0x60], esi */ { const u32 m_ = (u32)(ebp + 0xffffffa0u); M32(m_) = (u32)(esi); }
  /* 0055f9d3 mov dword ptr [ebp - 0x64], ebx */ { const u32 m_ = (u32)(ebp + 0xffffff9cu); M32(m_) = (u32)(ebx); }
  /* 0055f9d6 mov byte ptr [ebp - 0x74], bl */ { const u32 m_ = (u32)(ebp + 0xffffff8cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055f9d9 jb 0x55f9e7 */ if (CF_) goto L_0055f9e7;
  /* 0055f9db mov ecx, dword ptr [ebp - 0x54] */ { const u32 m_ = (u32)(ebp + 0xffffffacu); ecx = (u32)(M32(m_)); }
  /* 0055f9de push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055f9df call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55f9e4u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55f9dfu); RETCHK(0x55f9e4u, 0x55f9dfu); LOADALL;
  /* 0055f9e4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055f9e7:;
  /* 0055f9e7 cmp dword ptr [ebp - 0x20], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055f9ea mov dword ptr [ebp - 0x40], esi */ { const u32 m_ = (u32)(ebp + 0xffffffc0u); M32(m_) = (u32)(esi); }
  /* 0055f9ed mov dword ptr [ebp - 0x44], ebx */ { const u32 m_ = (u32)(ebp + 0xffffffbcu); M32(m_) = (u32)(ebx); }
  /* 0055f9f0 mov byte ptr [ebp - 0x54], bl */ { const u32 m_ = (u32)(ebp + 0xffffffacu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055f9f3 jb 0x55fa01 */ if (CF_) goto L_0055fa01;
  /* 0055f9f5 mov edx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edx = (u32)(M32(m_)); }
  /* 0055f9f8 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055f9f9 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55f9feu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55f9f9u); RETCHK(0x55f9feu, 0x55f9f9u); LOADALL;
  /* 0055f9fe add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0055fa01:;
  /* 0055fa01 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055fa04 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055fa05 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055fa06 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0055fa08 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fa09 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055fa10 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055fa12 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fa13 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_0055fa20(CPU *c) {
  NATIVE_HOOK(0x55fa20u) REGS; LOADALL;
L_0055fa20:;
  /* 0055fa20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fa21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fa23 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055fa26 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055fa29 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fa2a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fa2b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fa2c lea eax, [ebp - 0xc] */ eax = (u32)((u32)(ebp + 0xfffffff4u));
  /* 0055fa2f call 0x55fb40 */ esp -= 4; M32(esp) = 0x55fa34u; SAVEALL; F_0055fb40(c); ABI_CHECK(0x55fb40u, 0x55fa2fu); RETCHK(0x55fa34u, 0x55fa2fu); LOADALL;
  /* 0055fa34 mov esi, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); esi = (u32)(M32(m_)); }
  /* 0055fa37 mov ebx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ebx = (u32)(M32(m_)); }
  /* 0055fa3a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0055fa3c cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fa3e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0055fa41 je 0x55fa51 */ if (ZF_) goto L_0055fa51;
L_0055fa43:;
  /* 0055fa43 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055fa46 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055fa47 call 0x53d420 */ esp -= 4; M32(esp) = 0x55fa4cu; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x55fa47u); RETCHK(0x55fa4cu, 0x55fa47u); LOADALL;
  /* 0055fa4c cmp dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fa4f jne 0x55fa43 */ if (!ZF_) goto L_0055fa43;
L_0055fa51:;
  /* 0055fa51 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fa52 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fa53 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055fa56 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0055fa59 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fa5a call 0x55fac0 */ esp -= 4; M32(esp) = 0x55fa5fu; SAVEALL; F_0055fac0(c); ABI_CHECK(0x55fac0u, 0x55fa5au); RETCHK(0x55fa5fu, 0x55fa5au); LOADALL;
  /* 0055fa5f mov eax, edi */ { eax = (u32)(edi); }
  /* 0055fa61 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055fa62 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055fa63 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fa64 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055fa66 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fa67 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055fa70(CPU *c) {
  NATIVE_HOOK(0x55fa70u) REGS; LOADALL;
L_0055fa70:;
  /* 0055fa70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fa71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fa73 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055fa74 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fa75 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fa76 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055fa79 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fa7a mov edi, eax */ { edi = (u32)(eax); }
  /* 0055fa7c mov eax, esi */ { eax = (u32)(esi); }
  /* 0055fa7e call 0x5601b0 */ esp -= 4; M32(esp) = 0x55fa83u; SAVEALL; F_005601b0(c); ABI_CHECK(0x5601b0u, 0x55fa7eu); RETCHK(0x55fa83u, 0x55fa7eu); LOADALL;
  /* 0055fa83 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0055fa85 mov eax, esi */ { eax = (u32)(esi); }
  /* 0055fa87 call 0x560130 */ esp -= 4; M32(esp) = 0x55fa8cu; SAVEALL; F_00560130(c); ABI_CHECK(0x560130u, 0x55fa87u); RETCHK(0x55fa8cu, 0x55fa87u); LOADALL;
  /* 0055fa8c mov esi, eax */ { esi = (u32)(eax); }
  /* 0055fa8e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 0055fa90 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fa92 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0055fa95 je 0x55faa5 */ if (ZF_) goto L_0055faa5;
L_0055fa97:;
  /* 0055fa97 lea edx, [ebp - 4] */ edx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 0055fa9a inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055fa9b call 0x41b980 */ esp -= 4; M32(esp) = 0x55faa0u; SAVEALL; F_0041b980(c); ABI_CHECK(0x41b980u, 0x55fa9bu); RETCHK(0x55faa0u, 0x55fa9bu); LOADALL;
  /* 0055faa0 cmp dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055faa3 jne 0x55fa97 */ if (!ZF_) goto L_0055fa97;
L_0055faa5:;
  /* 0055faa5 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055faa6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055faa7 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055faaa lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0055faad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055faae call 0x55fd70 */ esp -= 4; M32(esp) = 0x55fab3u; SAVEALL; F_0055fd70(c); ABI_CHECK(0x55fd70u, 0x55faaeu); RETCHK(0x55fab3u, 0x55faaeu); LOADALL;
  /* 0055fab3 mov eax, edi */ { eax = (u32)(edi); }
  /* 0055fab5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055fab6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055fab7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fab8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055faba pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fabb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055fac0(CPU *c) {
  NATIVE_HOOK(0x55fac0u) REGS; LOADALL;
L_0055fac0:;
  /* 0055fac0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fac1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fac3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fac6 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055fac9 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055facb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055facc mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0055facf jne 0x55fb07 */ if (!ZF_) goto L_0055fb07;
  /* 0055fad1 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fad3 jne 0x55fb07 */ if (!ZF_) goto L_0055fb07;
  /* 0055fad5 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fad8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fad9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055fadb call 0x55fba0 */ esp -= 4; M32(esp) = 0x55fae0u; SAVEALL; F_0055fba0(c); ABI_CHECK(0x55fba0u, 0x55fadbu); RETCHK(0x55fae0u, 0x55fadbu); LOADALL;
  /* 0055fae0 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fae3 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055fae6 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fae9 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0055faf0 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055faf2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055faf5 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055faf8 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fafb mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055fafd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055fb00 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0055fb02 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fb03 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fb04 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0055fb07:;
  /* 0055fb07 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fb09 je 0x55fb2d */ if (ZF_) goto L_0055fb2d;
  /* 0055fb0b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fb0c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0055fb10:;
  /* 0055fb10 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0055fb13 mov edi, eax */ { edi = (u32)(eax); }
  /* 0055fb15 call 0x53d420 */ esp -= 4; M32(esp) = 0x55fb1au; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x55fb15u); RETCHK(0x55fb1au, 0x55fb15u); LOADALL;
  /* 0055fb1a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fb1b lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0055fb1e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fb1f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fb20 call 0x55fe30 */ esp -= 4; M32(esp) = 0x55fb25u; SAVEALL; F_0055fe30(c); ABI_CHECK(0x55fe30u, 0x55fb20u); RETCHK(0x55fb25u, 0x55fb20u); LOADALL;
  /* 0055fb25 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055fb28 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fb2a jne 0x55fb10 */ if (!ZF_) goto L_0055fb10;
  /* 0055fb2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0055fb2d:;
  /* 0055fb2d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055fb30 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0055fb32 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055fb34 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fb35 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fb36 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0055fb40(CPU *c) {
  NATIVE_HOOK(0x55fb40u) REGS; LOADALL;
L_0055fb40:;
  /* 0055fb40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fb41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fb42 mov esi, edx */ { esi = (u32)(edx); }
  /* 0055fb44 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055fb47 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055fb49 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fb4c cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055fb50 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fb51 jne 0x55fb69 */ if (!ZF_) goto L_0055fb69;
  /* 0055fb53 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
L_0055fb55:;
  /* 0055fb55 cmp edi, dword ptr [ecx + 0xc] */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fb58 jge 0x55fb60 */ if (!LT_) goto L_0055fb60;
  /* 0055fb5a mov edx, ecx */ { edx = (u32)(ecx); }
  /* 0055fb5c mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 0055fb5e jmp 0x55fb63 */ goto L_0055fb63;
L_0055fb60:;
  /* 0055fb60 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
L_0055fb63:;
  /* 0055fb63 cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055fb67 je 0x55fb55 */ if (ZF_) goto L_0055fb55;
L_0055fb69:;
  /* 0055fb69 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055fb6c mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fb6f cmp byte ptr [ecx + 0x15], 0 */ { const u32 m_ = (u32)(ecx + 0x15u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055fb73 jne 0x55fb8c */ if (!ZF_) goto L_0055fb8c;
  /* 0055fb75 mov edi, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edi = (u32)(M32(m_)); }
L_0055fb77:;
  /* 0055fb77 cmp dword ptr [ecx + 0xc], edi */ { const u32 m_ = (u32)(ecx + 0xcu); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fb7a jge 0x55fb81 */ if (!LT_) goto L_0055fb81;
  /* 0055fb7c mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055fb7f jmp 0x55fb85 */ goto L_0055fb85;
L_0055fb81:;
  /* 0055fb81 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055fb83 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
L_0055fb85:;
  /* 0055fb85 mov bl, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fb88 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fb8a je 0x55fb77 */ if (ZF_) goto L_0055fb77;
L_0055fb8c:;
  /* 0055fb8c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055fb8d mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0055fb8f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055fb90 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0055fb93 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fb94 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_0055fba0(CPU *c) {
  NATIVE_HOOK(0x55fba0u) REGS; LOADALL;
L_0055fba0:;
  /* 0055fba0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fba1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fba3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fba4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fba5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fba6 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055fba9 mov al, byte ptr [edi + 0x15] */ { const u32 m_ = (u32)(edi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fbac test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fbae mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055fbb0 mov esi, edi */ { esi = (u32)(edi); }
  /* 0055fbb2 jne 0x55fbd3 */ if (!ZF_) goto L_0055fbd3;
L_0055fbb4:;
  /* 0055fbb4 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055fbb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fbb8 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055fbba call 0x55fba0 */ esp -= 4; M32(esp) = 0x55fbbfu; SAVEALL; F_0055fba0(c); ABI_CHECK(0x55fba0u, 0x55fbbau); RETCHK(0x55fbbfu, 0x55fbbau); LOADALL;
  /* 0055fbbf mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 0055fbc1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fbc2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55fbc7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55fbc2u); RETCHK(0x55fbc7u, 0x55fbc2u); LOADALL;
  /* 0055fbc7 mov al, byte ptr [esi + 0x15] */ { const u32 m_ = (u32)(esi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fbca add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055fbcd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fbcf mov edi, esi */ { edi = (u32)(esi); }
  /* 0055fbd1 je 0x55fbb4 */ if (ZF_) goto L_0055fbb4;
L_0055fbd3:;
  /* 0055fbd3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055fbd4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055fbd5 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fbd6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fbd7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055fbe0(CPU *c) {
  NATIVE_HOOK(0x55fbe0u) REGS; LOADALL;
L_0055fbe0:;
  /* 0055fbe0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fbe1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fbe3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055fbe5 push 0x623c38 */ { u32 v_ = 0x623c38u; esp -= 4; M32(esp) = v_; }
  /* 0055fbea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055fbf0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fbf1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055fbf8 sub esp, 0x44 */ { u32 a_ = esp, b_ = 0x44u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055fbfb cmp dword ptr [edi + 8], 0x1ffffffe */ { const u32 m_ = (u32)(edi + 0x8u); u32 a_ = M32(m_), b_ = 0x1ffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fc02 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fc03 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fc04 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055fc06 jb 0x55fc4b */ if (CF_) goto L_0055fc4b;
  /* 0055fc08 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 0055fc0a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0055fc0c push 0x642714 */ { u32 v_ = 0x642714u; esp -= 4; M32(esp) = v_; }
  /* 0055fc11 lea ecx, [ebp - 0x28] */ ecx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0055fc14 mov dword ptr [ebp - 0x10], 0xf */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0xfu); }
  /* 0055fc1b mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 0055fc1e mov byte ptr [ebp - 0x24], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffdcu); M8(m_) = (u8)(0x0u); }
  /* 0055fc22 call 0x404420 */ esp -= 4; M32(esp) = 0x55fc27u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55fc22u); RETCHK(0x55fc27u, 0x55fc22u); LOADALL;
  /* 0055fc27 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 0055fc2a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fc2b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0055fc2e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0055fc31 call 0x4040e0 */ esp -= 4; M32(esp) = 0x55fc36u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x55fc31u); RETCHK(0x55fc36u, 0x55fc31u); LOADALL;
  /* 0055fc36 push 0x657ab8 */ { u32 v_ = 0x657ab8u; esp -= 4; M32(esp) = v_; }
  /* 0055fc3b lea ecx, [ebp - 0x50] */ ecx = (u32)((u32)(ebp + 0xffffffb0u));
  /* 0055fc3e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055fc3f mov dword ptr [ebp - 0x50], 0x63cf80 */ { const u32 m_ = (u32)(ebp + 0xffffffb0u); M32(m_) = (u32)(0x63cf80u); }
  /* 0055fc46 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0055fc4b:;
  /* 0055fc4b mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fc4e mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 0055fc51 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0055fc53 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fc54 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fc55 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fc56 call 0x5600f0 */ esp -= 4; M32(esp) = 0x55fc5bu; SAVEALL; F_005600f0(c); ABI_CHECK(0x5600f0u, 0x55fc56u); RETCHK(0x55fc5bu, 0x55fc56u); LOADALL;
  /* 0055fc5b mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055fc5e mov esi, eax */ { esi = (u32)(eax); }
  /* 0055fc60 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fc63 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0055fc64 cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fc66 mov dword ptr [ebp + 0x10], esi */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(esi); }
  /* 0055fc69 mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 0055fc6c jne 0x55fc7b */ if (!ZF_) goto L_0055fc7b;
  /* 0055fc6e mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 0055fc71 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055fc74 mov dword ptr [edx], esi */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(esi); }
  /* 0055fc76 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fc79 jmp 0x55fc9a */ goto L_0055fc9a;
L_0055fc7b:;
  /* 0055fc7b mov al, byte ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fc7e test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fc80 je 0x55fc8f */ if (ZF_) goto L_0055fc8f;
  /* 0055fc82 mov dword ptr [ebx], esi */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(esi); }
  /* 0055fc84 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fc87 cmp ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fc89 jne 0x55fc9d */ if (!ZF_) goto L_0055fc9d;
  /* 0055fc8b mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0055fc8d jmp 0x55fc9d */ goto L_0055fc9d;
L_0055fc8f:;
  /* 0055fc8f mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 0055fc92 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fc95 cmp ebx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fc98 jne 0x55fc9d */ if (!ZF_) goto L_0055fc9d;
L_0055fc9a:;
  /* 0055fc9a mov dword ptr [eax + 8], esi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(esi); }
L_0055fc9d:;
  /* 0055fc9d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fca0 mov dl, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fca3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fca5 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0055fca8 jne 0x55fd4f */ if (!ZF_) goto L_0055fd4f;
  /* 0055fcae mov edi, edi */ { edi = (u32)(edi); }
L_0055fcb0:;
  /* 0055fcb0 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055fcb2 mov ebx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ebx = (u32)(M32(m_)); }
  /* 0055fcb5 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 0055fcb7 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fcb9 jne 0x55fd0b */ if (!ZF_) goto L_0055fd0b;
  /* 0055fcbb mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055fcbe mov bl, byte ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fcc1 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fcc3 jne 0x55fcdf */ if (!ZF_) goto L_0055fcdf;
L_0055fcc5:;
  /* 0055fcc5 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 0055fcc7 mov byte ptr [ecx + 0x14], 1 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x1u); }
  /* 0055fccb mov byte ptr [edx + 0x14], 1 */ { const u32 m_ = (u32)(edx + 0x14u); M8(m_) = (u8)(0x1u); }
  /* 0055fccf mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0055fcd1 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fcd4 mov byte ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 0055fcd8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0055fcda mov esi, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055fcdd jmp 0x55fd3b */ goto L_0055fd3b;
L_0055fcdf:;
  /* 0055fcdf cmp esi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fce2 jne 0x55fcec */ if (!ZF_) goto L_0055fcec;
  /* 0055fce4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fce5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055fce7 call 0x5644f0 */ esp -= 4; M32(esp) = 0x55fcecu; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x55fce7u); RETCHK(0x55fcecu, 0x55fce7u); LOADALL;
L_0055fcec:;
  /* 0055fcec mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fcef mov byte ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)(0x1u); }
  /* 0055fcf3 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fcf6 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055fcf9 mov byte ptr [edx + 0x14], 0 */ { const u32 m_ = (u32)(edx + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 0055fcfd mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fd00 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fd03 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fd04 call 0x53d480 */ esp -= 4; M32(esp) = 0x55fd09u; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x55fd04u); RETCHK(0x55fd09u, 0x55fd04u); LOADALL;
  /* 0055fd09 jmp 0x55fd3b */ goto L_0055fd3b;
L_0055fd0b:;
  /* 0055fd0b mov bl, byte ptr [edx + 0x14] */ { const u32 m_ = (u32)(edx + 0x14u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fd0e test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fd10 je 0x55fcc5 */ if (ZF_) goto L_0055fcc5;
  /* 0055fd12 cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fd14 jne 0x55fd1e */ if (!ZF_) goto L_0055fd1e;
  /* 0055fd16 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fd17 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055fd19 call 0x53d480 */ esp -= 4; M32(esp) = 0x55fd1eu; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x55fd19u); RETCHK(0x55fd1eu, 0x55fd19u); LOADALL;
L_0055fd1e:;
  /* 0055fd1e mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fd21 mov byte ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)(0x1u); }
  /* 0055fd25 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fd28 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055fd2b mov byte ptr [edx + 0x14], 0 */ { const u32 m_ = (u32)(edx + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 0055fd2f mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fd32 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fd35 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fd36 call 0x5644f0 */ esp -= 4; M32(esp) = 0x55fd3bu; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x55fd36u); RETCHK(0x55fd3bu, 0x55fd36u); LOADALL;
L_0055fd3b:;
  /* 0055fd3b mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fd3e mov dl, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fd41 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fd43 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 0055fd46 je 0x55fcb0 */ if (ZF_) goto L_0055fcb0;
  /* 0055fd4c mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
L_0055fd4f:;
  /* 0055fd4f mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0055fd52 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fd55 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0055fd58 mov byte ptr [eax + 0x14], 1 */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)(0x1u); }
  /* 0055fd5c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055fd5f mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0055fd61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055fd62 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fd63 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0055fd6a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0055fd6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fd6d ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0055fd70(CPU *c) {
  NATIVE_HOOK(0x55fd70u) REGS; LOADALL;
L_0055fd70:;
  /* 0055fd70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fd71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fd73 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fd76 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055fd79 cmp eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fd7b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fd7c mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 0055fd7f jne 0x55fdb7 */ if (!ZF_) goto L_0055fdb7;
  /* 0055fd81 cmp ebx, ecx */ { u32 a_ = ebx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fd83 jne 0x55fdb7 */ if (!ZF_) goto L_0055fdb7;
  /* 0055fd85 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fd88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fd89 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055fd8b call 0x55fdf0 */ esp -= 4; M32(esp) = 0x55fd90u; SAVEALL; F_0055fdf0(c); ABI_CHECK(0x55fdf0u, 0x55fd8bu); RETCHK(0x55fd90u, 0x55fd8bu); LOADALL;
  /* 0055fd90 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fd93 mov dword ptr [eax + 4], eax */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055fd96 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fd99 mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 0055fda0 mov dword ptr [eax], eax */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(eax); }
  /* 0055fda2 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fda5 mov dword ptr [eax + 8], eax */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055fda8 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fdab mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0055fdad mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055fdb0 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 0055fdb2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fdb3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fdb4 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_0055fdb7:;
  /* 0055fdb7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fdb9 je 0x55fddd */ if (ZF_) goto L_0055fddd;
  /* 0055fdbb push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fdbc lea esp, [esp] */ esp = (u32)((u32)(esp));
L_0055fdc0:;
  /* 0055fdc0 lea edx, [ebp + 0xc] */ edx = (u32)((u32)(ebp + 0xcu));
  /* 0055fdc3 mov edi, eax */ { edi = (u32)(eax); }
  /* 0055fdc5 call 0x41b980 */ esp -= 4; M32(esp) = 0x55fdcau; SAVEALL; F_0041b980(c); ABI_CHECK(0x41b980u, 0x55fdc5u); RETCHK(0x55fdcau, 0x55fdc5u); LOADALL;
  /* 0055fdca push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fdcb lea eax, [ebp + 0x10] */ eax = (u32)((u32)(ebp + 0x10u));
  /* 0055fdce push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fdcf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fdd0 call 0x543ff0 */ esp -= 4; M32(esp) = 0x55fdd5u; SAVEALL; F_00543ff0(c); ABI_CHECK(0x543ff0u, 0x55fdd0u); RETCHK(0x55fdd5u, 0x55fdd0u); LOADALL;
  /* 0055fdd5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0055fdd8 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fdda jne 0x55fdc0 */ if (!ZF_) goto L_0055fdc0;
  /* 0055fddc pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0055fddd:;
  /* 0055fddd mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055fde0 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0055fde2 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0055fde4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fde5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fde6 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_0055fdf0(CPU *c) {
  NATIVE_HOOK(0x55fdf0u) REGS; LOADALL;
L_0055fdf0:;
  /* 0055fdf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fdf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fdf3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fdf4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fdf5 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0055fdf8 mov al, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fdfb test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fdfd push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fdfe mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0055fe00 mov edi, esi */ { edi = (u32)(esi); }
  /* 0055fe02 jne 0x55fe28 */ if (!ZF_) goto L_0055fe28;
L_0055fe04:;
  /* 0055fe04 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055fe07 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fe08 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0055fe0a call 0x55fdf0 */ esp -= 4; M32(esp) = 0x55fe0fu; SAVEALL; F_0055fdf0(c); ABI_CHECK(0x55fdf0u, 0x55fe0au); RETCHK(0x55fe0fu, 0x55fe0au); LOADALL;
  /* 0055fe0f mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 0055fe11 call 0x44bc10 */ esp -= 4; M32(esp) = 0x55fe16u; SAVEALL; F_0044bc10(c); ABI_CHECK(0x44bc10u, 0x55fe11u); RETCHK(0x55fe16u, 0x55fe11u); LOADALL;
  /* 0055fe16 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fe17 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x55fe1cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x55fe17u); RETCHK(0x55fe1cu, 0x55fe17u); LOADALL;
  /* 0055fe1c mov al, byte ptr [edi + 0x2d] */ { const u32 m_ = (u32)(edi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fe1f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055fe22 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fe24 mov esi, edi */ { esi = (u32)(edi); }
  /* 0055fe26 je 0x55fe04 */ if (ZF_) goto L_0055fe04;
L_0055fe28:;
  /* 0055fe28 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0055fe29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0055fe2a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0055fe2b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0055fe2c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_0055fe30(CPU *c) {
  NATIVE_HOOK(0x55fe30u) REGS; LOADALL;
L_0055fe30:;
  /* 0055fe30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 0055fe31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 0055fe33 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0055fe35 push 0x620068 */ { u32 v_ = 0x620068u; esp -= 4; M32(esp) = v_; }
  /* 0055fe3a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 0055fe40 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fe41 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0055fe48 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0055fe4b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0055fe4e mov cl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fe51 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fe53 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0055fe54 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0055fe55 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0055fe56 je 0x55fe9b */ if (ZF_) goto L_0055fe9b;
  /* 0055fe58 push 0x1b */ { u32 v_ = 0x1bu; esp -= 4; M32(esp) = v_; }
  /* 0055fe5a xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0055fe5c push 0x6426f8 */ { u32 v_ = 0x6426f8u; esp -= 4; M32(esp) = v_; }
  /* 0055fe61 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055fe64 mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 0055fe6b mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 0055fe6e mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 0055fe72 call 0x404420 */ esp -= 4; M32(esp) = 0x55fe77u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x55fe72u); RETCHK(0x55fe77u, 0x55fe72u); LOADALL;
  /* 0055fe77 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0055fe7a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0055fe7b lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0055fe7e mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0055fe81 call 0x4040e0 */ esp -= 4; M32(esp) = 0x55fe86u; SAVEALL; F_004040e0(c); ABI_CHECK(0x4040e0u, 0x55fe81u); RETCHK(0x55fe86u, 0x55fe81u); LOADALL;
  /* 0055fe86 push 0x657b2c */ { u32 v_ = 0x657b2cu; esp -= 4; M32(esp) = v_; }
  /* 0055fe8b lea ecx, [ebp - 0x58] */ ecx = (u32)((u32)(ebp + 0xffffffa8u));
  /* 0055fe8e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0055fe8f mov dword ptr [ebp - 0x58], 0x63cf8c */ { const u32 m_ = (u32)(ebp + 0xffffffa8u); M32(m_) = (u32)(0x63cf8cu); }
  /* 0055fe96 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
L_0055fe9b:;
  /* 0055fe9b mov ebx, eax */ { ebx = (u32)(eax); }
  /* 0055fe9d lea edx, [ebp + 0x10] */ edx = (u32)((u32)(ebp + 0x10u));
  /* 0055fea0 mov dword ptr [ebp - 0x10], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ebx); }
  /* 0055fea3 call 0x53d420 */ esp -= 4; M32(esp) = 0x55fea8u; SAVEALL; F_0053d420(c); ABI_CHECK(0x53d420u, 0x55fea3u); RETCHK(0x55fea8u, 0x55fea3u); LOADALL;
  /* 0055fea8 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0055feaa mov cl, byte ptr [eax + 0x15] */ { const u32 m_ = (u32)(eax + 0x15u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fead test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055feaf je 0x55feb6 */ if (ZF_) goto L_0055feb6;
  /* 0055feb1 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055feb4 jmp 0x55fece */ goto L_0055fece;
L_0055feb6:;
  /* 0055feb6 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055feb9 mov cl, byte ptr [edx + 0x15] */ { const u32 m_ = (u32)(edx + 0x15u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055febc test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055febe je 0x55fec4 */ if (ZF_) goto L_0055fec4;
  /* 0055fec0 mov edi, eax */ { edi = (u32)(eax); }
  /* 0055fec2 jmp 0x55fece */ goto L_0055fece;
L_0055fec4:;
  /* 0055fec4 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0055fec7 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fec9 mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 0055fecc jne 0x55ff45 */ if (!ZF_) goto L_0055ff45;
L_0055fece:;
  /* 0055fece mov al, byte ptr [edi + 0x15] */ { const u32 m_ = (u32)(edi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fed1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fed3 mov esi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055fed6 jne 0x55fedb */ if (!ZF_) goto L_0055fedb;
  /* 0055fed8 mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_0055fedb:;
  /* 0055fedb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055fede mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055fee1 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fee4 jne 0x55feeb */ if (!ZF_) goto L_0055feeb;
  /* 0055fee6 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 0055fee9 jmp 0x55fef6 */ goto L_0055fef6;
L_0055feeb:;
  /* 0055feeb cmp dword ptr [esi], ebx */ { const u32 m_ = (u32)(esi); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055feed jne 0x55fef3 */ if (!ZF_) goto L_0055fef3;
  /* 0055feef mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0055fef1 jmp 0x55fef6 */ goto L_0055fef6;
L_0055fef3:;
  /* 0055fef3 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
L_0055fef6:;
  /* 0055fef6 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055fef9 cmp dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055fefb mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0055fefe jne 0x55ff1a */ if (!ZF_) goto L_0055ff1a;
  /* 0055ff00 mov al, byte ptr [edi + 0x15] */ { const u32 m_ = (u32)(edi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ff03 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ff05 je 0x55ff0b */ if (ZF_) goto L_0055ff0b;
  /* 0055ff07 mov eax, esi */ { eax = (u32)(esi); }
  /* 0055ff09 jmp 0x55ff18 */ goto L_0055ff18;
L_0055ff0b:;
  /* 0055ff0b mov eax, edi */ { eax = (u32)(edi); }
  /* 0055ff0d call 0x4f1370 */ esp -= 4; M32(esp) = 0x55ff12u; SAVEALL; F_004f1370(c); ABI_CHECK(0x4f1370u, 0x55ff0du); RETCHK(0x55ff12u, 0x55ff0du); LOADALL;
  /* 0055ff12 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055ff15 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
L_0055ff18:;
  /* 0055ff18 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
L_0055ff1a:;
  /* 0055ff1a mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055ff1d cmp dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ff20 mov dword ptr [ebp - 0x14], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(ecx); }
  /* 0055ff23 jne 0x55ffa3 */ if (!ZF_) goto L_0055ffa3;
  /* 0055ff25 mov al, byte ptr [edi + 0x15] */ { const u32 m_ = (u32)(edi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ff28 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ff2a je 0x55ff33 */ if (ZF_) goto L_0055ff33;
  /* 0055ff2c mov eax, esi */ { eax = (u32)(esi); }
  /* 0055ff2e mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055ff31 jmp 0x55ffa3 */ goto L_0055ffa3;
L_0055ff33:;
  /* 0055ff33 mov eax, edi */ { eax = (u32)(edi); }
  /* 0055ff35 call 0x560190 */ esp -= 4; M32(esp) = 0x55ff3au; SAVEALL; F_00560190(c); ABI_CHECK(0x560190u, 0x55ff35u); RETCHK(0x55ff3au, 0x55ff35u); LOADALL;
  /* 0055ff3a mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 0055ff3d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055ff40 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0055ff43 jmp 0x55ffa3 */ goto L_0055ffa3;
L_0055ff45:;
  /* 0055ff45 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0055ff48 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0055ff4a mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 0055ff4c cmp ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ff4f jne 0x55ff55 */ if (!ZF_) goto L_0055ff55;
  /* 0055ff51 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0055ff53 jmp 0x55ff70 */ goto L_0055ff70;
L_0055ff55:;
  /* 0055ff55 mov al, byte ptr [edi + 0x15] */ { const u32 m_ = (u32)(edi + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ff58 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ff5a mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 0055ff5d jne 0x55ff62 */ if (!ZF_) goto L_0055ff62;
  /* 0055ff5f mov dword ptr [edi + 4], esi */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(esi); }
L_0055ff62:;
  /* 0055ff62 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 0055ff64 mov edx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055ff67 mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 0055ff6a mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055ff6d mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
L_0055ff70:;
  /* 0055ff70 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055ff73 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055ff76 cmp dword ptr [eax + 4], ebx */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ff79 jne 0x55ff80 */ if (!ZF_) goto L_0055ff80;
  /* 0055ff7b mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 0055ff7e jmp 0x55ff8e */ goto L_0055ff8e;
L_0055ff80:;
  /* 0055ff80 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055ff83 cmp dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ff85 jne 0x55ff8b */ if (!ZF_) goto L_0055ff8b;
  /* 0055ff87 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0055ff89 jmp 0x55ff8e */ goto L_0055ff8e;
L_0055ff8b:;
  /* 0055ff8b mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
L_0055ff8e:;
  /* 0055ff8e mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0055ff91 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0055ff94 mov dl, byte ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ff97 mov al, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ff9a mov byte ptr [ecx + 0x14], dl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0055ff9d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0055ffa0 mov byte ptr [ebx + 0x14], al */ { const u32 m_ = (u32)(ebx + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
L_0055ffa3:;
  /* 0055ffa3 mov eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 0055ffa6 mov cl, byte ptr [eax + 0x14] */ { const u32 m_ = (u32)(eax + 0x14u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ffa9 mov bl, 1 */ { ebx = (ebx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0055ffab cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ffad jne 0x5600b9 */ if (!ZF_) goto L_005600b9;
  /* 0055ffb3 mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0055ffb6 cmp edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ffb9 je 0x5600b6 */ if (ZF_) goto L_005600b6;
  /* 0055ffbf nop */ ;
L_0055ffc0:;
  /* 0055ffc0 cmp byte ptr [edi + 0x14], bl */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ffc3 jne 0x5600b6 */ if (!ZF_) goto L_005600b6;
  /* 0055ffc9 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0055ffcb cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ffcd jne 0x56003a */ if (!ZF_) goto L_0056003a;
  /* 0055ffcf mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055ffd2 mov al, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ffd5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ffd7 jne 0x55ffee */ if (!ZF_) goto L_0055ffee;
  /* 0055ffd9 mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055ffdc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ffdd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055ffdf mov byte ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 0055ffe3 call 0x5644f0 */ esp -= 4; M32(esp) = 0x55ffe8u; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x55ffe3u); RETCHK(0x55ffe8u, 0x55ffe3u); LOADALL;
  /* 0055ffe8 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055ffeb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0055ffee:;
  /* 0055ffee mov al, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fff1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fff3 jne 0x56006f */ if (!ZF_) goto L_0056006f;
  /* 0055fff5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055fff7 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055fffa jne 0x560004 */ if (!ZF_) goto L_00560004;
  /* 0055fffc mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055ffff cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560002 je 0x56006b */ if (ZF_) goto L_0056006b;
L_00560004:;
  /* 00560004 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560007 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056000a jne 0x560021 */ if (!ZF_) goto L_00560021;
  /* 0056000c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056000e mov byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560011 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560012 mov byte ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 00560016 call 0x53d480 */ esp -= 4; M32(esp) = 0x56001bu; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x560016u); RETCHK(0x56001bu, 0x560016u); LOADALL;
  /* 0056001b mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056001e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_00560021:;
  /* 00560021 mov al, byte ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560024 mov byte ptr [ecx + 0x14], al */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00560027 mov byte ptr [esi + 0x14], bl */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056002a mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056002d mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560030 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560031 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560033 call 0x5644f0 */ esp -= 4; M32(esp) = 0x560038u; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x560033u); RETCHK(0x560038u, 0x560033u); LOADALL;
  /* 00560038 jmp 0x5600b6 */ goto L_005600b6;
L_0056003a:;
  /* 0056003a mov al, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056003d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056003f jne 0x560055 */ if (!ZF_) goto L_00560055;
  /* 00560041 mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560044 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560045 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560047 mov byte ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 0056004b call 0x53d480 */ esp -= 4; M32(esp) = 0x560050u; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x56004bu); RETCHK(0x560050u, 0x56004bu); LOADALL;
  /* 00560050 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00560052 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_00560055:;
  /* 00560055 mov al, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560058 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056005a jne 0x56006f */ if (!ZF_) goto L_0056006f;
  /* 0056005c mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056005f cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560062 jne 0x560084 */ if (!ZF_) goto L_00560084;
  /* 00560064 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00560066 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560069 jne 0x560084 */ if (!ZF_) goto L_00560084;
L_0056006b:;
  /* 0056006b mov byte ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x0u); }
L_0056006f:;
  /* 0056006f mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00560072 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00560075 mov edi, esi */ { edi = (u32)(esi); }
  /* 00560077 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560079 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056007c jne 0x55ffc0 */ if (!ZF_) goto L_0055ffc0;
  /* 00560082 jmp 0x5600b6 */ goto L_005600b6;
L_00560084:;
  /* 00560084 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00560086 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560089 jne 0x5600a0 */ if (!ZF_) goto L_005600a0;
  /* 0056008b mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056008e mov byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560091 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560092 mov byte ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 00560096 call 0x5644f0 */ esp -= 4; M32(esp) = 0x56009bu; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x560096u); RETCHK(0x56009bu, 0x560096u); LOADALL;
  /* 0056009b mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0056009d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_005600a0:;
  /* 005600a0 mov al, byte ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005600a3 mov byte ptr [ecx + 0x14], al */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005600a6 mov byte ptr [esi + 0x14], bl */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005600a9 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005600ab mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005600ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005600af mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005600b1 call 0x53d480 */ esp -= 4; M32(esp) = 0x5600b6u; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x5600b1u); RETCHK(0x5600b6u, 0x5600b1u); LOADALL;
L_005600b6:;
  /* 005600b6 mov byte ptr [edi + 0x14], bl */ { const u32 m_ = (u32)(edi + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
L_005600b9:;
  /* 005600b9 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 005600bc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005600bd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5600c2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5600bdu); RETCHK(0x5600c2u, 0x5600bdu); LOADALL;
  /* 005600c2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005600c5 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005600c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005600cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005600cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005600ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005600cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005600d0 jbe 0x5600d6 */ if ((CF_|ZF_)) goto L_005600d6;
  /* 005600d2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005600d3 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_005600d6:;
  /* 005600d6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005600d9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005600dc mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005600de mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005600e1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005600e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005600ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005600eb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00560055(CPU *c) {
  NATIVE_HOOK(0x560055u) REGS; LOADALL;
  goto L_00560055;
L_0055ffc0:;
  /* 0055ffc0 cmp byte ptr [edi + 0x14], bl */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055ffc3 jne 0x5600b6 */ if (!ZF_) goto L_005600b6;
  /* 0055ffc9 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0055ffcb cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0055ffcd jne 0x56003a */ if (!ZF_) goto L_0056003a;
  /* 0055ffcf mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055ffd2 mov al, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055ffd5 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055ffd7 jne 0x55ffee */ if (!ZF_) goto L_0055ffee;
  /* 0055ffd9 mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0055ffdc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0055ffdd mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0055ffdf mov byte ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 0055ffe3 call 0x5644f0 */ esp -= 4; M32(esp) = 0x55ffe8u; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x55ffe3u); RETCHK(0x55ffe8u, 0x55ffe3u); LOADALL;
  /* 0055ffe8 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0055ffeb mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_0055ffee:;
  /* 0055ffee mov al, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0055fff1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0055fff3 jne 0x56006f */ if (!ZF_) goto L_0056006f;
  /* 0055fff5 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0055fff7 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0055fffa jne 0x560004 */ if (!ZF_) goto L_00560004;
  /* 0055fffc mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0055ffff cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560002 je 0x56006b */ if (ZF_) goto L_0056006b;
L_00560004:;
  /* 00560004 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560007 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056000a jne 0x560021 */ if (!ZF_) goto L_00560021;
  /* 0056000c mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 0056000e mov byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560011 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560012 mov byte ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 00560016 call 0x53d480 */ esp -= 4; M32(esp) = 0x56001bu; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x560016u); RETCHK(0x56001bu, 0x560016u); LOADALL;
  /* 0056001b mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056001e mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_00560021:;
  /* 00560021 mov al, byte ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560024 mov byte ptr [ecx + 0x14], al */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00560027 mov byte ptr [esi + 0x14], bl */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0056002a mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0056002d mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560030 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560031 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560033 call 0x5644f0 */ esp -= 4; M32(esp) = 0x560038u; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x560033u); RETCHK(0x560038u, 0x560033u); LOADALL;
  /* 00560038 jmp 0x5600b6 */ goto L_005600b6;
L_0056003a:;
  /* 0056003a mov al, byte ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056003d test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056003f jne 0x560055 */ if (!ZF_) goto L_00560055;
  /* 00560041 mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560044 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560045 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560047 mov byte ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 0056004b call 0x53d480 */ esp -= 4; M32(esp) = 0x560050u; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x56004bu); RETCHK(0x560050u, 0x56004bu); LOADALL;
  /* 00560050 mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 00560052 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_00560055:;
  /* 00560055 mov al, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560058 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056005a jne 0x56006f */ if (!ZF_) goto L_0056006f;
  /* 0056005c mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056005f cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560062 jne 0x560084 */ if (!ZF_) goto L_00560084;
  /* 00560064 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00560066 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560069 jne 0x560084 */ if (!ZF_) goto L_00560084;
L_0056006b:;
  /* 0056006b mov byte ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x0u); }
L_0056006f:;
  /* 0056006f mov ecx, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00560072 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00560075 mov edi, esi */ { edi = (u32)(esi); }
  /* 00560077 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560079 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056007c jne 0x55ffc0 */ if (!ZF_) goto L_0055ffc0;
  /* 00560082 jmp 0x5600b6 */ goto L_005600b6;
L_00560084:;
  /* 00560084 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00560086 cmp byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); u32 a_ = M8(m_), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560089 jne 0x5600a0 */ if (!ZF_) goto L_005600a0;
  /* 0056008b mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056008e mov byte ptr [eax + 0x14], bl */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00560091 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560092 mov byte ptr [ecx + 0x14], 0 */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)(0x0u); }
  /* 00560096 call 0x5644f0 */ esp -= 4; M32(esp) = 0x56009bu; SAVEALL; F_005644f0(c); ABI_CHECK(0x5644f0u, 0x560096u); RETCHK(0x56009bu, 0x560096u); LOADALL;
  /* 0056009b mov ecx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); ecx = (u32)(M32(m_)); }
  /* 0056009d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
L_005600a0:;
  /* 005600a0 mov al, byte ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005600a3 mov byte ptr [ecx + 0x14], al */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 005600a6 mov byte ptr [esi + 0x14], bl */ { const u32 m_ = (u32)(esi + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005600a9 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 005600ab mov byte ptr [ecx + 0x14], bl */ { const u32 m_ = (u32)(ecx + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005600ae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005600af mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005600b1 call 0x53d480 */ esp -= 4; M32(esp) = 0x5600b6u; SAVEALL; F_0053d480(c); ABI_CHECK(0x53d480u, 0x5600b1u); RETCHK(0x5600b6u, 0x5600b1u); LOADALL;
L_005600b6:;
  /* 005600b6 mov byte ptr [edi + 0x14], bl */ { const u32 m_ = (u32)(edi + 0x14u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 005600b9 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 005600bc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005600bd call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5600c2u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5600bdu); RETCHK(0x5600c2u, 0x5600bdu); LOADALL;
  /* 005600c2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005600c5 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 005600c8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005600cb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005600cd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005600ce pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005600cf pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005600d0 jbe 0x5600d6 */ if ((CF_|ZF_)) goto L_005600d6;
  /* 005600d2 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 005600d3 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
L_005600d6:;
  /* 005600d6 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 005600d9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005600dc mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 005600de mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005600e1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005600e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005600ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005600eb ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_005600f0(CPU *c) {
  NATIVE_HOOK(0x5600f0u) REGS; LOADALL;
L_005600f0:;
  /* 005600f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005600f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005600f3 push 0x18 */ { u32 v_ = 0x18u; esp -= 4; M32(esp) = v_; }
  /* 005600f5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5600fau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5600f5u); RETCHK(0x5600fau, 0x5600f5u); LOADALL;
  /* 005600fa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005600fd test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005600ff je 0x560127 */ if (ZF_) goto L_00560127;
  /* 00560101 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00560104 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00560107 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00560109 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0056010c mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 0056010f mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00560112 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00560114 mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 00560117 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0056011a mov dl, byte ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056011d mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00560120 mov byte ptr [eax + 0x14], dl */ { const u32 m_ = (u32)(eax + 0x14u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00560123 mov byte ptr [eax + 0x15], 0 */ { const u32 m_ = (u32)(eax + 0x15u); M8(m_) = (u8)(0x0u); }
L_00560127:;
  /* 00560127 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560128 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00560130(CPU *c) {
  NATIVE_HOOK(0x560130u) REGS; LOADALL;
L_00560130:;
  /* 00560130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560133 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560134 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00560137 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560138 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 0056013b mov cl, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056013e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560140 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00560143 jne 0x560188 */ if (!ZF_) goto L_00560188;
  /* 00560145 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560146 lea ebx, [edi + 4] */ ebx = (u32)((u32)(edi + 0x4u));
  /* 00560149 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00560150:;
  /* 00560150 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560154 mov edx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); edx = (u32)(M32(m_)); }
  /* 00560157 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 0056015a jb 0x560160 */ if (CF_) goto L_00560160;
  /* 0056015c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0056015e jmp 0x560162 */ goto L_00560162;
L_00560160:;
  /* 00560160 mov eax, ebx */ { eax = (u32)(ebx); }
L_00560162:;
  /* 00560162 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560163 mov edx, dword ptr [ecx + 0x14] */ { const u32 m_ = (u32)(ecx + 0x14u); edx = (u32)(M32(m_)); }
  /* 00560166 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560167 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560168 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0056016a call 0x405de0 */ esp -= 4; M32(esp) = 0x56016fu; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x56016au); RETCHK(0x56016fu, 0x56016au); LOADALL;
  /* 0056016f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560171 jge 0x560178 */ if (!LT_) goto L_00560178;
  /* 00560173 mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00560176 jmp 0x56017d */ goto L_0056017d;
L_00560178:;
  /* 00560178 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0056017b mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
L_0056017d:;
  /* 0056017d mov al, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560180 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560182 je 0x560150 */ if (ZF_) goto L_00560150;
  /* 00560184 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00560187 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00560188:;
  /* 00560188 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560189 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056018b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056018c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560190(CPU *c) {
  NATIVE_HOOK(0x560190u) REGS; LOADALL;
L_00560190:;
  /* 00560190 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00560193 mov dl, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560196 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560198 jne 0x5601ac */ if (!ZF_) goto L_005601ac;
  /* 0056019a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005601a0:;
  /* 005601a0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 005601a2 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 005601a5 mov dl, byte ptr [ecx + 0x15] */ { const u32 m_ = (u32)(ecx + 0x15u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005601a8 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005601aa je 0x5601a0 */ if (ZF_) goto L_005601a0;
L_005601ac:;
  /* 005601ac ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005601b0(CPU *c) {
  NATIVE_HOOK(0x5601b0u) REGS; LOADALL;
L_005601b0:;
  /* 005601b0 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005601b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005601b4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005601b5 mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 005601b8 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005601ba mov al, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005601bd test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005601bf jne 0x5601f5 */ if (!ZF_) goto L_005601f5;
L_005601c1:;
  /* 005601c1 cmp dword ptr [esi + 0x24], 0x10 */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005601c5 mov ecx, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 005601c8 jb 0x5601cf */ if (CF_) goto L_005601cf;
  /* 005601ca mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 005601cd jmp 0x5601d2 */ goto L_005601d2;
L_005601cf:;
  /* 005601cf lea eax, [esi + 0x10] */ eax = (u32)((u32)(esi + 0x10u));
L_005601d2:;
  /* 005601d2 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005601d3 mov ecx, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 005601d6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005601d7 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005601d8 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 005601da mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005601dc call 0x405de0 */ esp -= 4; M32(esp) = 0x5601e1u; SAVEALL; F_00405de0(c); ABI_CHECK(0x405de0u, 0x5601dcu); RETCHK(0x5601e1u, 0x5601dcu); LOADALL;
  /* 005601e1 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005601e3 jge 0x5601eb */ if (!LT_) goto L_005601eb;
  /* 005601e5 mov ebx, esi */ { ebx = (u32)(esi); }
  /* 005601e7 mov esi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); esi = (u32)(M32(m_)); }
  /* 005601e9 jmp 0x5601ee */ goto L_005601ee;
L_005601eb:;
  /* 005601eb mov esi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); esi = (u32)(M32(m_)); }
L_005601ee:;
  /* 005601ee mov al, byte ptr [esi + 0x2d] */ { const u32 m_ = (u32)(esi + 0x2du); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005601f1 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005601f3 je 0x5601c1 */ if (ZF_) goto L_005601c1;
L_005601f5:;
  /* 005601f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005601f6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005601f8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005601f9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560200(CPU *c) {
  NATIVE_HOOK(0x560200u) REGS; LOADALL;
L_00560200:;
  /* 00560200 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00560202 mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560205 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560207 je 0x56020f */ if (ZF_) goto L_0056020f;
  /* 00560209 mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056020c mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 0056020e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056020f:;
  /* 0056020f mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00560211 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560212 mov bl, byte ptr [ecx + 0x2d] */ { const u32 m_ = (u32)(ecx + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560215 test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560217 jne 0x560233 */ if (!ZF_) goto L_00560233;
  /* 00560219 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056021c mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056021f test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560221 jne 0x56022f */ if (!ZF_) goto L_0056022f;
L_00560223:;
  /* 00560223 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00560225 mov eax, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560228 mov bl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056022b test bl, bl */ { u32 a_ = (ebx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056022d je 0x560223 */ if (ZF_) goto L_00560223;
L_0056022f:;
  /* 0056022f mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00560231 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560232 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560233:;
  /* 00560233 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 00560236 mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560239 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056023b jne 0x56025b */ if (!ZF_) goto L_0056025b;
  /* 0056023d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00560240:;
  /* 00560240 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00560242 cmp ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560244 jne 0x560252 */ if (!ZF_) goto L_00560252;
  /* 00560246 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00560248 mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 0056024b mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 0056024e test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560250 je 0x560240 */ if (ZF_) goto L_00560240;
L_00560252:;
  /* 00560252 mov cl, byte ptr [eax + 0x2d] */ { const u32 m_ = (u32)(eax + 0x2du); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560255 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560257 jne 0x56025b */ if (!ZF_) goto L_0056025b;
  /* 00560259 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
L_0056025b:;
  /* 0056025b pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0056025c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560260(CPU *c) {
  NATIVE_HOOK(0x560260u) REGS; LOADALL;
L_00560260:;
  /* 00560260 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560261 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560263 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00560265 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560266 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00560268 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056026b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056026c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056026f call 0x5603f0 */ esp -= 4; M32(esp) = 0x560274u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x56026fu); RETCHK(0x560274u, 0x56026fu); LOADALL;
  /* 00560274 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560275 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560276 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560280(CPU *c) {
  NATIVE_HOOK(0x560280u) REGS; LOADALL;
L_00560280:;
  /* 00560280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560283 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00560285 push 0x61b808 */ { u32 v_ = 0x61b808u; esp -= 4; M32(esp) = v_; }
  /* 0056028a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00560290 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560291 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00560298 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560299 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0056029b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056029c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056029e cmp esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005602a1 jbe 0x560309 */ if ((CF_|ZF_)) goto L_00560309;
  /* 005602a3 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005602a4 mov dword ptr [ebp - 0x10], 0x7a70b8 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x7a70b8u); }
  /* 005602ab test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 005602ad mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005602b4 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 005602b6 je 0x5602d6 */ if (ZF_) goto L_005602d6;
  /* 005602b8 lea eax, [esi + 0xf] */ eax = (u32)((u32)(esi + 0xfu));
  /* 005602bb shr eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005602be shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 005602c1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005602c2 call 0x5fe934 */ esp -= 4; M32(esp) = 0x5602c7u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x5602c2u); RETCHK(0x5602c7u, 0x5602c2u); LOADALL;
  /* 005602c7 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 005602c9 mov byte ptr [edi + eax + 8], 0 */ { const u32 m_ = (u32)(edi + eax + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 005602ce add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005602d1 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 005602d4 jmp 0x5602db */ goto L_005602db;
L_005602d6:;
  /* 005602d6 mov eax, 0x7a70b8 */ { eax = (u32)(0x7a70b8u); }
L_005602db:;
  /* 005602db mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 005602dd mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 005602df lea esi, [edx + 8] */ esi = (u32)((u32)(edx + 0x8u));
  /* 005602e2 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005602e4 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005602e7 lea edi, [eax + 8] */ edi = (u32)((u32)(eax + 0x8u));
  /* 005602ea rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005602ec mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005602ee and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005602f1 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005602f3 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005602f5 cmp ecx, 0x7a70b8 */ { u32 a_ = ecx, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005602fb mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 005602fd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005602fe je 0x560309 */ if (ZF_) goto L_00560309;
  /* 00560300 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560301 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x560306u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x560301u); RETCHK(0x560306u, 0x560301u); LOADALL;
  /* 00560306 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00560309:;
  /* 00560309 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0056030c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056030d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00560314 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560316 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560317 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560320(CPU *c) {
  NATIVE_HOOK(0x560320u) REGS; LOADALL;
L_00560320:;
  /* 00560320 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560321 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560323 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00560325 push 0x61b808 */ { u32 v_ = 0x61b808u; esp -= 4; M32(esp) = v_; }
  /* 0056032a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00560330 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560331 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00560338 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560339 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0056033b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056033c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056033d mov edi, ecx */ { edi = (u32)(ecx); }
  /* 0056033f mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00560342 cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560344 mov esi, edx */ { esi = (u32)(edx); }
  /* 00560346 ja 0x56037b */ if (!(CF_|ZF_)) goto L_0056037b;
  /* 00560348 lea edx, [edi + edi*2 + 0x18] */ edx = (u32)((u32)(edi + edi * 2u + 0x18u));
  /* 0056034c cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056034e ja 0x56037b */ if (!(CF_|ZF_)) goto L_0056037b;
  /* 00560350 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560351 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00560354 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560355 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560356 call 0x5fe998 */ esp -= 4; M32(esp) = 0x56035bu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x560356u); RETCHK(0x56035bu, 0x560356u); LOADALL;
  /* 0056035b mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0056035d mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0056035f mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00560361 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00560364 mov byte ptr [ecx + edi + 8], 0 */ { const u32 m_ = (u32)(ecx + edi + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 00560369 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0056036a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0056036c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056036d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00560370 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00560377 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560379 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056037a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0056037b:;
  /* 0056037b mov eax, 0x7a70b8 */ { eax = (u32)(0x7a70b8u); }
  /* 00560380 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00560383 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560385 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0056038c je 0x5603aa */ if (ZF_) goto L_005603aa;
  /* 0056038e lea edx, [edi + 0xf] */ edx = (u32)((u32)(edi + 0xfu));
  /* 00560391 shr edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00560394 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00560397 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00560398 call 0x5fe934 */ esp -= 4; M32(esp) = 0x56039du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x560398u); RETCHK(0x56039du, 0x560398u); LOADALL;
  /* 0056039d mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 0056039f mov byte ptr [eax + edi + 8], 0 */ { const u32 m_ = (u32)(eax + edi + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 005603a4 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005603a7 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
L_005603aa:;
  /* 005603aa mov ecx, edi */ { ecx = (u32)(edi); }
  /* 005603ac mov edx, ecx */ { edx = (u32)(ecx); }
  /* 005603ae shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 005603b1 lea edi, [eax + 8] */ edi = (u32)((u32)(eax + 0x8u));
  /* 005603b4 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 005603b6 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 005603b8 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 005603bb rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 005603bd mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 005603bf cmp ecx, 0x7a70b8 */ { u32 a_ = ecx, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005603c5 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 005603c7 je 0x5603d2 */ if (ZF_) goto L_005603d2;
  /* 005603c9 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005603ca call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5603cfu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5603cau); RETCHK(0x5603cfu, 0x5603cau); LOADALL;
  /* 005603cf add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005603d2:;
  /* 005603d2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005603d5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005603d6 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 005603d8 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005603d9 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005603e0 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005603e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005603e3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005603f0(CPU *c) {
  NATIVE_HOOK(0x5603f0u) REGS; LOADALL;
L_005603f0:;
  /* 005603f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005603f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005603f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005603f4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 005603f6 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 005603f8 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005603f9 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 005603fb mov eax, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); eax = (u32)(M32(m_)); }
  /* 005603fe add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00560400 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560402 jbe 0x56040c */ if ((CF_|ZF_)) goto L_0056040c;
  /* 00560404 lea ecx, [eax + esi] */ ecx = (u32)((u32)(eax + esi));
  /* 00560407 call 0x560280 */ esp -= 4; M32(esp) = 0x56040cu; SAVEALL; F_00560280(c); ABI_CHECK(0x560280u, 0x560407u); RETCHK(0x56040cu, 0x560407u); LOADALL;
L_0056040c:;
  /* 0056040c mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 0056040e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00560411 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00560413 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560414 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560415 lea eax, [edx + eax + 8] */ eax = (u32)((u32)(edx + eax + 0x8u));
  /* 00560419 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056041a call 0x5fe998 */ esp -= 4; M32(esp) = 0x56041fu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x56041au); RETCHK(0x56041fu, 0x56041au); LOADALL;
  /* 0056041f mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00560421 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 00560423 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00560425 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00560428 mov byte ptr [edx + esi + 8], 0 */ { const u32 m_ = (u32)(edx + esi + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 0056042d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056042e mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00560430 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560431 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560432 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560440(CPU *c) {
  NATIVE_HOOK(0x560440u) REGS; LOADALL;
L_00560440:;
  /* 00560440 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560441 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560442 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560444 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_00560447:;
  /* 00560447 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560449 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0056044a test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056044c jne 0x560447 */ if (!ZF_) goto L_00560447;
  /* 0056044e sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00560450 mov edi, eax */ { edi = (u32)(eax); }
  /* 00560452 je 0x560478 */ if (ZF_) goto L_00560478;
  /* 00560454 lea eax, [edi + 0xf] */ eax = (u32)((u32)(edi + 0xfu));
  /* 00560457 shr eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056045a shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 0056045d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056045e call 0x5fe934 */ esp -= 4; M32(esp) = 0x560463u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x56045eu); RETCHK(0x560463u, 0x56045eu); LOADALL;
  /* 00560463 mov dword ptr [ebx], eax */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(eax); }
  /* 00560465 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00560467 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00560469 mov byte ptr [ecx + edi + 8], 0 */ { const u32 m_ = (u32)(ecx + edi + 0x8u); M8(m_) = (u8)(0x0u); }
  /* 0056046e mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00560470 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00560473 mov dword ptr [edx + 4], edi */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(edi); }
  /* 00560476 jmp 0x56047e */ goto L_0056047e;
L_00560478:;
  /* 00560478 mov dword ptr [ebx], 0x7a70b8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x7a70b8u); }
L_0056047e:;
  /* 0056047e mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00560480 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00560482 lea edi, [eax + 8] */ edi = (u32)((u32)(eax + 0x8u));
  /* 00560485 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00560487 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0056048a rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0056048c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056048e and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00560491 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00560493 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560494 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00560496 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560497 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005604a0(CPU *c) {
  NATIVE_HOOK(0x5604a0u) REGS; LOADALL;
L_005604a0:;
  /* 005604a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005604a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005604a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005604a4 mov eax, edx */ { eax = (u32)(edx); }
  /* 005604a6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005604a7 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 005604aa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005604b0:;
  /* 005604b0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005604b2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005604b3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005604b5 jne 0x5604b0 */ if (!ZF_) goto L_005604b0;
  /* 005604b7 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 005604ba sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005604bc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005604be call 0x560320 */ esp -= 4; M32(esp) = 0x5604c3u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5604beu); RETCHK(0x5604c3u, 0x5604beu); LOADALL;
  /* 005604c3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005604c4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005604c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005604c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005604d0(CPU *c) {
  NATIVE_HOOK(0x5604d0u) REGS; LOADALL;
L_005604d0:;
  /* 005604d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005604d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005604d3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005604d4 mov eax, edx */ { eax = (u32)(edx); }
  /* 005604d6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 005604d7 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 005604da lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_005604e0:;
  /* 005604e0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005604e2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005604e3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005604e5 jne 0x5604e0 */ if (!ZF_) goto L_005604e0;
  /* 005604e7 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005604e9 mov edi, eax */ { edi = (u32)(eax); }
  /* 005604eb mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005604ee push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005604ef call 0x5603f0 */ esp -= 4; M32(esp) = 0x5604f4u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5604efu); RETCHK(0x5604f4u, 0x5604efu); LOADALL;
  /* 005604f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005604f5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005604f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005604f7 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560500(CPU *c) {
  NATIVE_HOOK(0x560500u) REGS; LOADALL;
L_00560500:;
  /* 00560500 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560501 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560503 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560504 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 00560507 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560508 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0056050b mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00560510 call 0x5603f0 */ esp -= 4; M32(esp) = 0x560515u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x560510u); RETCHK(0x560515u, 0x560510u); LOADALL;
  /* 00560515 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560516 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560517 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00560530(CPU *c) {
  NATIVE_HOOK(0x560530u) REGS; LOADALL;
L_00560530:;
  /* 00560530 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560531 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560533 test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560537 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560538 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0056053a mov dword ptr [esi], 0x6567fc */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x6567fcu); }
  /* 00560540 je 0x56054b */ if (ZF_) goto L_0056054b;
  /* 00560542 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560543 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x560548u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x560543u); RETCHK(0x560548u, 0x560543u); LOADALL;
  /* 00560548 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056054b:;
  /* 0056054b mov eax, esi */ { eax = (u32)(esi); }
  /* 0056054d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056054e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056054f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560560(CPU *c) {
  NATIVE_HOOK(0x560560u) REGS; LOADALL;
L_00560560:;
  /* 00560560 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560561 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560563 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00560565 push 0x61b65e */ { u32 v_ = 0x61b65eu; esp -= 4; M32(esp) = v_; }
  /* 0056056a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00560570 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560571 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00560578 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560579 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056057a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056057b mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0056057e or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560581 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00560584 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00560587 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560589 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056058a mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 0056058d mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00560590 lea ebx, [esi + 0x14] */ ebx = (u32)((u32)(esi + 0x14u));
  /* 00560593 mov dword ptr [esi], 0x65689c */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x65689cu); }
  /* 00560599 mov dword ptr [ebx], 0x7a70b8 */ { const u32 m_ = (u32)(ebx); M32(m_) = (u32)(0x7a70b8u); }
  /* 0056059f lea edi, [esi + 0x18] */ edi = (u32)((u32)(esi + 0x18u));
  /* 005605a2 mov dword ptr [edi], 0x7a70b8 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x7a70b8u); }
  /* 005605a8 mov eax, edx */ { eax = (u32)(edx); }
  /* 005605aa lea ecx, [eax + 1] */ ecx = (u32)((u32)(eax + 0x1u));
  /* 005605ad mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 005605b1 mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
L_005605b4:;
  /* 005605b4 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005605b6 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005605b7 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005605b9 jne 0x5605b4 */ if (!ZF_) goto L_005605b4;
  /* 005605bb sub eax, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005605be mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005605c0 call 0x560320 */ esp -= 4; M32(esp) = 0x5605c5u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5605c0u); RETCHK(0x5605c5u, 0x5605c0u); LOADALL;
  /* 005605c5 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 005605c8 mov eax, edx */ { eax = (u32)(edx); }
  /* 005605ca lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 005605cd lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_005605d0:;
  /* 005605d0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005605d2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005605d3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005605d5 jne 0x5605d0 */ if (!ZF_) goto L_005605d0;
  /* 005605d7 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005605d9 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 005605db mov ebx, edi */ { ebx = (u32)(edi); }
  /* 005605dd call 0x560320 */ esp -= 4; M32(esp) = 0x5605e2u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x5605ddu); RETCHK(0x5605e2u, 0x5605ddu); LOADALL;
  /* 005605e2 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005605e5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 005605e7 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 005605ea mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 005605ed mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 005605f0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005605f1 mov eax, esi */ { eax = (u32)(esi); }
  /* 005605f3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005605f4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005605f5 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005605fc mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005605fe pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005605ff ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00560610(CPU *c) {
  NATIVE_HOOK(0x560610u) REGS; LOADALL;
L_00560610:;
  /* 00560610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560613 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560614 mov eax, edx */ { eax = (u32)(edx); }
  /* 00560616 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560617 lea esi, [eax + 1] */ esi = (u32)((u32)(eax + 0x1u));
  /* 0056061a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00560620:;
  /* 00560620 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560622 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00560623 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560625 jne 0x560620 */ if (!ZF_) goto L_00560620;
  /* 00560627 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0056062a sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0056062c add ebx, 0x18 */ { u32 a_ = ebx, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 0056062f mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00560631 call 0x560320 */ esp -= 4; M32(esp) = 0x560636u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x560631u); RETCHK(0x560636u, 0x560631u); LOADALL;
  /* 00560636 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560637 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560638 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560639 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560640(CPU *c) {
  NATIVE_HOOK(0x560640u) REGS; LOADALL;
L_00560640:;
  /* 00560640 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560641 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560643 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560644 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00560646 call 0x561ef0 */ esp -= 4; M32(esp) = 0x56064bu; SAVEALL; F_00561ef0(c); ABI_CHECK(0x561ef0u, 0x560646u); RETCHK(0x56064bu, 0x560646u); LOADALL;
  /* 0056064b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056064f je 0x56065a */ if (ZF_) goto L_0056065a;
  /* 00560651 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560652 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x560657u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x560652u); RETCHK(0x560657u, 0x560652u); LOADALL;
  /* 00560657 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056065a:;
  /* 0056065a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056065c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056065d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056065e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560670(CPU *c) {
  NATIVE_HOOK(0x560670u) REGS; LOADALL;
L_00560670:;
  /* 00560670 mov edx, 2 */ { edx = (u32)(0x2u); }
  /* 00560675 call 0x560a40 */ esp -= 4; M32(esp) = 0x56067au; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x560675u); RETCHK(0x56067au, 0x560675u); LOADALL;
  /* 0056067a mov dword ptr [eax], 0x6568f8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6568f8u); }
  /* 00560680 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560690(CPU *c) {
  NATIVE_HOOK(0x560690u) REGS; LOADALL;
L_00560690:;
  /* 00560690 mov dword ptr [ecx], 0x6568f8 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6568f8u); }
  /* 00560696 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_005606a0(CPU *c) {
  NATIVE_HOOK(0x5606a0u) REGS; LOADALL;
L_005606a0:;
  /* 005606a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005606a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005606a3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005606a4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005606a6 call 0x560690 */ esp -= 4; M32(esp) = 0x5606abu; SAVEALL; F_00560690(c); ABI_CHECK(0x560690u, 0x5606a6u); RETCHK(0x5606abu, 0x5606a6u); LOADALL;
  /* 005606ab test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005606af je 0x5606ba */ if (ZF_) goto L_005606ba;
  /* 005606b1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005606b2 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x5606b7u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x5606b2u); RETCHK(0x5606b7u, 0x5606b2u); LOADALL;
  /* 005606b7 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005606ba:;
  /* 005606ba mov eax, esi */ { eax = (u32)(esi); }
  /* 005606bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005606bd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005606be ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_005606d0(CPU *c) {
  NATIVE_HOOK(0x5606d0u) REGS; LOADALL;
L_005606d0:;
  /* 005606d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005606d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005606d3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 005606d9 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 005606db push 0x61b828 */ { u32 v_ = 0x61b828u; esp -= 4; M32(esp) = v_; }
  /* 005606e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005606e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 005606e8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 005606e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005606ea mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 005606ed mov edx, 4 */ { edx = (u32)(0x4u); }
  /* 005606f2 mov eax, esi */ { eax = (u32)(esi); }
  /* 005606f4 call 0x560a40 */ esp -= 4; M32(esp) = 0x5606f9u; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x5606f4u); RETCHK(0x5606f9u, 0x5606f4u); LOADALL;
  /* 005606f9 mov eax, edi */ { eax = (u32)(edi); }
  /* 005606fb mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00560702 mov dword ptr [esi], 0x656858 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656858u); }
  /* 00560708 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 0056070b jmp 0x560710 */ goto L_00560710;
L_00560710:;
  /* 00560710 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560712 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00560713 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560715 jne 0x560710 */ if (!ZF_) goto L_00560710;
  /* 00560717 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00560719 lea ebx, [esi + 0x20] */ ebx = (u32)((u32)(esi + 0x20u));
  /* 0056071c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056071e mov edx, edi */ { edx = (u32)(edi); }
  /* 00560720 call 0x560320 */ esp -= 4; M32(esp) = 0x560725u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x560720u); RETCHK(0x560725u, 0x560720u); LOADALL;
  /* 00560725 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00560728 mov byte ptr [esi + 0x2c], 0 */ { const u32 m_ = (u32)(esi + 0x2cu); M8(m_) = (u8)(0x0u); }
  /* 0056072c mov eax, esi */ { eax = (u32)(esi); }
  /* 0056072e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056072f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00560736 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560737 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560739 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056073a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560740(CPU *c) {
  NATIVE_HOOK(0x560740u) REGS; LOADALL;
L_00560740:;
  /* 00560740 mov dword ptr [ecx], 0x656858 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x656858u); }
  /* 00560746 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_00560750(CPU *c) {
  NATIVE_HOOK(0x560750u) REGS; LOADALL;
L_00560750:;
  /* 00560750 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560751 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560753 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560754 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00560756 call 0x560740 */ esp -= 4; M32(esp) = 0x56075bu; SAVEALL; F_00560740(c); ABI_CHECK(0x560740u, 0x560756u); RETCHK(0x56075bu, 0x560756u); LOADALL;
  /* 0056075b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056075f je 0x56076a */ if (ZF_) goto L_0056076a;
  /* 00560761 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560762 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x560767u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x560762u); RETCHK(0x560767u, 0x560762u); LOADALL;
  /* 00560767 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056076a:;
  /* 0056076a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056076c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056076d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056076e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560780(CPU *c) {
  NATIVE_HOOK(0x560780u) REGS; LOADALL;
L_00560780:;
  /* 00560780 mov edx, 5 */ { edx = (u32)(0x5u); }
  /* 00560785 call 0x560a40 */ esp -= 4; M32(esp) = 0x56078au; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x560785u); RETCHK(0x56078au, 0x560785u); LOADALL;
  /* 0056078a mov ecx, 0x7a70b8 */ { ecx = (u32)(0x7a70b8u); }
  /* 0056078f mov dword ptr [eax], 0x656810 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x656810u); }
  /* 00560795 mov dword ptr [eax + 0x2c], ecx */ { const u32 m_ = (u32)(eax + 0x2cu); M32(m_) = (u32)(ecx); }
  /* 00560798 mov dword ptr [eax + 0x30], ecx */ { const u32 m_ = (u32)(eax + 0x30u); M32(m_) = (u32)(ecx); }
  /* 0056079b mov dword ptr [eax + 0x34], ecx */ { const u32 m_ = (u32)(eax + 0x34u); M32(m_) = (u32)(ecx); }
  /* 0056079e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005607a0(CPU *c) {
  NATIVE_HOOK(0x5607a0u) REGS; LOADALL;
L_005607a0:;
  /* 005607a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005607a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005607a3 mov dword ptr [esi], 0x656810 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656810u); }
  /* 005607a9 mov eax, dword ptr [esi + 0x34] */ { const u32 m_ = (u32)(esi + 0x34u); eax = (u32)(M32(m_)); }
  /* 005607ac cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005607b1 je 0x5607bc */ if (ZF_) goto L_005607bc;
  /* 005607b3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005607b4 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5607b9u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5607b4u); RETCHK(0x5607b9u, 0x5607b4u); LOADALL;
  /* 005607b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005607bc:;
  /* 005607bc mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 005607bf cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005607c4 je 0x5607cf */ if (ZF_) goto L_005607cf;
  /* 005607c6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005607c7 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5607ccu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5607c7u); RETCHK(0x5607ccu, 0x5607c7u); LOADALL;
  /* 005607cc add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005607cf:;
  /* 005607cf mov eax, dword ptr [esi + 0x2c] */ { const u32 m_ = (u32)(esi + 0x2cu); eax = (u32)(M32(m_)); }
  /* 005607d2 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005607d7 je 0x5607e2 */ if (ZF_) goto L_005607e2;
  /* 005607d9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005607da call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5607dfu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5607dau); RETCHK(0x5607dfu, 0x5607dau); LOADALL;
  /* 005607df add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005607e2:;
  /* 005607e2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 005607e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005607e5 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_005607f0(CPU *c) {
  NATIVE_HOOK(0x5607f0u) REGS; LOADALL;
L_005607f0:;
  /* 005607f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005607f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005607f3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005607f4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 005607f6 call 0x5607a0 */ esp -= 4; M32(esp) = 0x5607fbu; SAVEALL; F_005607a0(c); ABI_CHECK(0x5607a0u, 0x5607f6u); RETCHK(0x5607fbu, 0x5607f6u); LOADALL;
  /* 005607fb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005607ff je 0x56080a */ if (ZF_) goto L_0056080a;
  /* 00560801 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560802 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x560807u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x560802u); RETCHK(0x560807u, 0x560802u); LOADALL;
  /* 00560807 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056080a:;
  /* 0056080a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056080c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056080d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056080e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560820(CPU *c) {
  NATIVE_HOOK(0x560820u) REGS; LOADALL;
L_00560820:;
  /* 00560820 mov edx, 3 */ { edx = (u32)(0x3u); }
  /* 00560825 call 0x560a40 */ esp -= 4; M32(esp) = 0x56082au; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x560825u); RETCHK(0x56082au, 0x560825u); LOADALL;
  /* 0056082a mov dword ptr [eax], 0x6568b0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6568b0u); }
  /* 00560830 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560840(CPU *c) {
  NATIVE_HOOK(0x560840u) REGS; LOADALL;
L_00560840:;
  /* 00560840 mov dword ptr [ecx], 0x6568b0 */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(0x6568b0u); }
  /* 00560846 jmp 0x560aa0 */ SAVEALL; F_00560aa0(c); return;
}

void F_00560850(CPU *c) {
  NATIVE_HOOK(0x560850u) REGS; LOADALL;
L_00560850:;
  /* 00560850 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560851 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560853 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560854 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00560856 call 0x560840 */ esp -= 4; M32(esp) = 0x56085bu; SAVEALL; F_00560840(c); ABI_CHECK(0x560840u, 0x560856u); RETCHK(0x56085bu, 0x560856u); LOADALL;
  /* 0056085b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0056085f je 0x56086a */ if (ZF_) goto L_0056086a;
  /* 00560861 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560862 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x560867u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x560862u); RETCHK(0x560867u, 0x560862u); LOADALL;
  /* 00560867 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056086a:;
  /* 0056086a mov eax, esi */ { eax = (u32)(esi); }
  /* 0056086c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0056086d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056086e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560880(CPU *c) {
  NATIVE_HOOK(0x560880u) REGS; LOADALL;
L_00560880:;
  /* 00560880 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560881 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560883 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00560885 push 0x61b808 */ { u32 v_ = 0x61b808u; esp -= 4; M32(esp) = v_; }
  /* 0056088a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00560890 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560891 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00560898 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560899 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0056089a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0056089b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0056089c mov dword ptr [ebp - 0x10], 0x7a70b8 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x7a70b8u); }
  /* 005608a3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 005608a6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005608a7 lea ebx, [ebp - 0x10] */ ebx = (u32)((u32)(ebp + 0xfffffff0u));
  /* 005608aa mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 005608b1 call 0x5608f0 */ esp -= 4; M32(esp) = 0x5608b6u; SAVEALL; F_005608f0(c); ABI_CHECK(0x5608f0u, 0x5608b1u); RETCHK(0x5608b6u, 0x5608b1u); LOADALL;
  /* 005608b6 mov esi, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); esi = (u32)(M32(m_)); }
  /* 005608b9 mov edi, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edi = (u32)(M32(m_)); }
  /* 005608bb mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 005608be add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005608c1 lea ecx, [esi + 8] */ ecx = (u32)((u32)(esi + 0x8u));
  /* 005608c4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005608c5 call 0x5603f0 */ esp -= 4; M32(esp) = 0x5608cau; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x5608c5u); RETCHK(0x5608cau, 0x5608c5u); LOADALL;
  /* 005608ca cmp esi, 0x7a70b8 */ { u32 a_ = esi, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 005608d0 je 0x5608db */ if (ZF_) goto L_005608db;
  /* 005608d2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 005608d3 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x5608d8u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x5608d3u); RETCHK(0x5608d8u, 0x5608d3u); LOADALL;
  /* 005608d8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_005608db:;
  /* 005608db mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 005608de pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 005608df pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 005608e0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 005608e1 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 005608e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 005608ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 005608eb ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_005608f0(CPU *c) {
  NATIVE_HOOK(0x5608f0u) REGS; LOADALL;
L_005608f0:;
  /* 005608f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 005608f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 005608f3 sub esp, 0x28 */ { u32 a_ = esp, b_ = 0x28u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005608f6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 005608fb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 005608fe mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560901 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00560903 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560904 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560905 mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 00560907 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00560909 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056090b jle 0x560a24 */ if ((ZF_|LT_)) goto L_00560a24;
L_00560911:;
  /* 00560911 mov cl, byte ptr [edx + esi + 8] */ { const u32 m_ = (u32)(edx + esi + 0x8u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560915 cmp cl, 0x26 */ { u32 a_ = (ecx & 0xffu), b_ = 0x26u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560918 lea eax, [edx + esi + 8] */ eax = (u32)((u32)(edx + esi + 0x8u));
  /* 0056091c jne 0x560981 */ if (!ZF_) goto L_00560981;
  /* 0056091e lea ecx, [edi - 2] */ ecx = (u32)((u32)(edi + 0xfffffffeu));
  /* 00560921 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560923 jge 0x560970 */ if (!LT_) goto L_00560970;
  /* 00560925 cmp byte ptr [edx + esi + 9], 0x23 */ { const u32 m_ = (u32)(edx + esi + 0x9u); u32 a_ = M8(m_), b_ = 0x23u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056092a jne 0x560970 */ if (!ZF_) goto L_00560970;
  /* 0056092c cmp byte ptr [edx + esi + 0xa], 0x78 */ { const u32 m_ = (u32)(edx + esi + 0xau); u32 a_ = M8(m_), b_ = 0x78u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560931 jne 0x560970 */ if (!ZF_) goto L_00560970;
  /* 00560933 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00560934 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560936 jge 0x560a15 */ if (!LT_) goto L_00560a15;
  /* 0056093c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00560940:;
  /* 00560940 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560941 mov edi, 1 */ { edi = (u32)(0x1u); }
  /* 00560946 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00560948 call 0x5603f0 */ esp -= 4; M32(esp) = 0x56094du; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x560948u); RETCHK(0x56094du, 0x560948u); LOADALL;
  /* 0056094d mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00560950 mov ecx, dword ptr [edx] */ { const u32 m_ = (u32)(edx); ecx = (u32)(M32(m_)); }
  /* 00560952 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00560953 mov dl, byte ptr [ecx + esi + 8] */ { const u32 m_ = (u32)(ecx + esi + 0x8u); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560957 cmp dl, 0x3b */ { u32 a_ = (edx & 0xffu), b_ = 0x3bu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0056095a lea eax, [ecx + esi + 8] */ eax = (u32)((u32)(ecx + esi + 0x8u));
  /* 0056095e je 0x560a15 */ if (ZF_) goto L_00560a15;
  /* 00560964 mov ecx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ecx = (u32)(M32(m_)); }
  /* 00560966 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00560967 cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560969 jl 0x560940 */ if (LT_) goto L_00560940;
  /* 0056096b jmp 0x560a15 */ goto L_00560a15;
L_00560970:;
  /* 00560970 mov edx, dword ptr [0x68a120] */ { const u32 m_ = (u32)(0x68a120u); edx = (u32)(M32(m_)); }
  /* 00560976 mov edi, dword ptr [0x68a124] */ { const u32 m_ = (u32)(0x68a124u); edi = (u32)(M32(m_)); }
  /* 0056097c jmp 0x560a0c */ goto L_00560a0c;
L_00560981:;
  /* 00560981 cmp cl, 0x3c */ { u32 a_ = (ecx & 0xffu), b_ = 0x3cu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560984 jne 0x560994 */ if (!ZF_) goto L_00560994;
  /* 00560986 mov eax, dword ptr [0x68a12c] */ { const u32 m_ = (u32)(0x68a12cu); eax = (u32)(M32(m_)); }
  /* 0056098b mov edi, dword ptr [0x68a130] */ { const u32 m_ = (u32)(0x68a130u); edi = (u32)(M32(m_)); }
  /* 00560991 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560992 jmp 0x560a0d */ goto L_00560a0d;
L_00560994:;
  /* 00560994 cmp cl, 0x3e */ { u32 a_ = (ecx & 0xffu), b_ = 0x3eu; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560997 jne 0x5609a8 */ if (!ZF_) goto L_005609a8;
  /* 00560999 mov ecx, dword ptr [0x68a138] */ { const u32 m_ = (u32)(0x68a138u); ecx = (u32)(M32(m_)); }
  /* 0056099f mov edi, dword ptr [0x68a13c] */ { const u32 m_ = (u32)(0x68a13cu); edi = (u32)(M32(m_)); }
  /* 005609a5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005609a6 jmp 0x560a0d */ goto L_00560a0d;
L_005609a8:;
  /* 005609a8 cmp cl, 0x22 */ { u32 a_ = (ecx & 0xffu), b_ = 0x22u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005609ab jne 0x5609bb */ if (!ZF_) goto L_005609bb;
  /* 005609ad mov edx, dword ptr [0x68a144] */ { const u32 m_ = (u32)(0x68a144u); edx = (u32)(M32(m_)); }
  /* 005609b3 mov edi, dword ptr [0x68a148] */ { const u32 m_ = (u32)(0x68a148u); edi = (u32)(M32(m_)); }
  /* 005609b9 jmp 0x560a0c */ goto L_00560a0c;
L_005609bb:;
  /* 005609bb cmp cl, 0x27 */ { u32 a_ = (ecx & 0xffu), b_ = 0x27u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005609be jne 0x5609ce */ if (!ZF_) goto L_005609ce;
  /* 005609c0 mov eax, dword ptr [0x68a150] */ { const u32 m_ = (u32)(0x68a150u); eax = (u32)(M32(m_)); }
  /* 005609c5 mov edi, dword ptr [0x68a154] */ { const u32 m_ = (u32)(0x68a154u); edi = (u32)(M32(m_)); }
  /* 005609cb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 005609cc jmp 0x560a0d */ goto L_00560a0d;
L_005609ce:;
  /* 005609ce cmp cl, 0x20 */ { u32 a_ = (ecx & 0xffu), b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 005609d1 jae 0x560a01 */ if (!CF_) goto L_00560a01;
  /* 005609d3 movzx ecx, cl */ { ecx = (u32)((ecx & 0xffu)); }
  /* 005609d6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005609d7 push 0x656a58 */ { u32 v_ = 0x656a58u; esp -= 4; M32(esp) = v_; }
  /* 005609dc lea edx, [ebp - 0x24] */ edx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005609df push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 005609e1 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 005609e2 call 0x5fe928 */ esp -= 4; M32(esp) = 0x5609e7u; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x5609e2u); RETCHK(0x5609e7u, 0x5609e2u); LOADALL;
  /* 005609e7 lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005609ea add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 005609ed lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
L_005609f0:;
  /* 005609f0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 005609f2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 005609f3 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 005609f5 jne 0x5609f0 */ if (!ZF_) goto L_005609f0;
  /* 005609f7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 005609f9 lea ecx, [ebp - 0x24] */ ecx = (u32)((u32)(ebp + 0xffffffdcu));
  /* 005609fc push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 005609fd mov edi, eax */ { edi = (u32)(eax); }
  /* 005609ff jmp 0x560a0d */ goto L_00560a0d;
L_00560a01:;
  /* 00560a01 mov byte ptr [ebp - 0x28], cl */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00560a04 lea edx, [ebp - 0x28] */ edx = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00560a07 mov edi, 1 */ { edi = (u32)(0x1u); }
L_00560a0c:;
  /* 00560a0c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
L_00560a0d:;
  /* 00560a0d mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00560a0f call 0x5603f0 */ esp -= 4; M32(esp) = 0x560a14u; SAVEALL; F_005603f0(c); ABI_CHECK(0x5603f0u, 0x560a0fu); RETCHK(0x560a14u, 0x560a0fu); LOADALL;
  /* 00560a14 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
L_00560a15:;
  /* 00560a15 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560a18 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00560a1a mov edi, dword ptr [edx] */ { const u32 m_ = (u32)(edx); edi = (u32)(M32(m_)); }
  /* 00560a1c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560a1e jl 0x560911 */ if (LT_) goto L_00560911;
L_00560a24:;
  /* 00560a24 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00560a27 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560a28 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560a29 call 0x61af31 */ esp -= 4; M32(esp) = 0x560a2eu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x560a29u); RETCHK(0x560a2eu, 0x560a29u); LOADALL;
  /* 00560a2e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560a30 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560a31 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560a40(CPU *c) {
  NATIVE_HOOK(0x560a40u) REGS; LOADALL;
L_00560a40:;
  /* 00560a40 or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00560a43 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00560a46 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00560a49 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00560a4b mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00560a4e mov dword ptr [eax], 0x6567b8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6567b8u); }
  /* 00560a54 mov dword ptr [eax + 0x20], 0x7a70b8 */ { const u32 m_ = (u32)(eax + 0x20u); M32(m_) = (u32)(0x7a70b8u); }
  /* 00560a5b mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00560a5e mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00560a61 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00560a64 mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 00560a67 mov dword ptr [eax + 0x24], ecx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00560a6a mov dword ptr [eax + 0x28], ecx */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(ecx); }
  /* 00560a6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560a70(CPU *c) {
  NATIVE_HOOK(0x560a70u) REGS; LOADALL;
L_00560a70:;
  /* 00560a70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560a71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560a73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560a74 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00560a76 call 0x560aa0 */ esp -= 4; M32(esp) = 0x560a7bu; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x560a76u); RETCHK(0x560a7bu, 0x560a76u); LOADALL;
  /* 00560a7b test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560a7f je 0x560a8a */ if (ZF_) goto L_00560a8a;
  /* 00560a81 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560a82 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x560a87u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x560a82u); RETCHK(0x560a87u, 0x560a82u); LOADALL;
  /* 00560a87 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00560a8a:;
  /* 00560a8a mov eax, esi */ { eax = (u32)(esi); }
  /* 00560a8c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560a8d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560a8e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560aa0(CPU *c) {
  NATIVE_HOOK(0x560aa0u) REGS; LOADALL;
L_00560aa0:;
  /* 00560aa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560aa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560aa3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00560aa5 push 0x61b343 */ { u32 v_ = 0x61b343u; esp -= 4; M32(esp) = v_; }
  /* 00560aaa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00560ab0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560ab1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00560ab8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560ab9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560aba push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560abb mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00560abd mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00560ac0 mov dword ptr [edi], 0x6567b8 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6567b8u); }
  /* 00560ac6 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00560acd mov esi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); esi = (u32)(M32(m_)); }
  /* 00560ad0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560ad2 je 0x560ae3 */ if (ZF_) goto L_00560ae3;
L_00560ad4:;
  /* 00560ad4 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560ad6 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00560ad8 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 00560adb push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00560add call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560adfu; SAVEALL; call_ind(c, t_); RETCHK(0x560adfu, 0x560addu); LOADALL; }
  /* 00560adf test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560ae1 jne 0x560ad4 */ if (!ZF_) goto L_00560ad4;
L_00560ae3:;
  /* 00560ae3 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00560ae6 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560aeb je 0x560af6 */ if (ZF_) goto L_00560af6;
  /* 00560aed push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560aee call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x560af3u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x560aeeu); RETCHK(0x560af3u, 0x560aeeu); LOADALL;
  /* 00560af3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00560af6:;
  /* 00560af6 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00560af9 mov dword ptr [edi], 0x6567fc */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x6567fcu); }
  /* 00560aff pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560b00 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560b01 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00560b08 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560b0a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560b0b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560b10(CPU *c) {
  NATIVE_HOOK(0x560b10u) REGS; LOADALL;
L_00560b10:;
  /* 00560b10 mov edx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); edx = (u32)(M32(m_)); }
  /* 00560b13 add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00560b16 mov eax, edx */ { eax = (u32)(edx); }
  /* 00560b18 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560b19 lea ebx, [eax + 1] */ ebx = (u32)((u32)(eax + 0x1u));
  /* 00560b1c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00560b20:;
  /* 00560b20 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560b22 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00560b23 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560b25 jne 0x560b20 */ if (!ZF_) goto L_00560b20;
  /* 00560b27 sub eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00560b29 lea ebx, [esi + 0x20] */ ebx = (u32)((u32)(esi + 0x20u));
  /* 00560b2c mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00560b2e call 0x560320 */ esp -= 4; M32(esp) = 0x560b33u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x560b2eu); RETCHK(0x560b33u, 0x560b2eu); LOADALL;
  /* 00560b33 mov eax, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); eax = (u32)(M32(m_)); }
  /* 00560b36 mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00560b39 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560b3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560b40(CPU *c) {
  NATIVE_HOOK(0x560b40u) REGS; LOADALL;
L_00560b40:;
  /* 00560b40 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560b41 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560b42 mov esi, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); esi = (u32)(M32(m_)); }
  /* 00560b45 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00560b47 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560b49 je 0x560b5f */ if (ZF_) goto L_00560b5f;
  /* 00560b4b jmp 0x560b50 */ goto L_00560b50;
L_00560b50:;
  /* 00560b50 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560b52 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00560b54 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 00560b57 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00560b59 call dword ptr [eax] */ { const u32 m_ = (u32)(eax); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560b5bu; SAVEALL; call_ind(c, t_); RETCHK(0x560b5bu, 0x560b59u); LOADALL; }
  /* 00560b5b cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560b5d jne 0x560b50 */ if (!ZF_) goto L_00560b50;
L_00560b5f:;
  /* 00560b5f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560b60 mov dword ptr [edi + 0x18], ebx */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 00560b63 mov dword ptr [edi + 0x1c], ebx */ { const u32 m_ = (u32)(edi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00560b66 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560b67 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560b70(CPU *c) {
  NATIVE_HOOK(0x560b70u) REGS; LOADALL;
L_00560b70:;
  /* 00560b70 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00560b73 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00560b76 mov dword ptr [eax + 0x24], edx */ { const u32 m_ = (u32)(eax + 0x24u); M32(m_) = (u32)(edx); }
  /* 00560b79 mov dword ptr [eax + 0x28], 0 */ { const u32 m_ = (u32)(eax + 0x28u); M32(m_) = (u32)(0x0u); }
  /* 00560b80 mov edx, dword ptr [ecx + 0x1c] */ { const u32 m_ = (u32)(ecx + 0x1cu); edx = (u32)(M32(m_)); }
  /* 00560b83 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560b85 je 0x560b8e */ if (ZF_) goto L_00560b8e;
  /* 00560b87 mov dword ptr [edx + 0x28], eax */ { const u32 m_ = (u32)(edx + 0x28u); M32(m_) = (u32)(eax); }
  /* 00560b8a mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00560b8d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560b8e:;
  /* 00560b8e mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 00560b91 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00560b94 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560ba0(CPU *c) {
  NATIVE_HOOK(0x560ba0u) REGS; LOADALL;
L_00560ba0:;
  /* 00560ba0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560ba1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560ba2 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560ba3 mov edi, dword ptr [ecx + 0x18] */ { const u32 m_ = (u32)(ecx + 0x18u); edi = (u32)(M32(m_)); }
  /* 00560ba6 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560ba8 je 0x560bec */ if (ZF_) goto L_00560bec;
  /* 00560baa lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00560bb0:;
  /* 00560bb0 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00560bb3 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560bb5 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00560bb8:;
  /* 00560bb8 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560bba mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00560bbc cmp bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560bbe jne 0x560bdc */ if (!ZF_) goto L_00560bdc;
  /* 00560bc0 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560bc2 je 0x560bd8 */ if (ZF_) goto L_00560bd8;
  /* 00560bc4 mov bl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560bc7 mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00560bc9 cmp bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560bcc jne 0x560bdc */ if (!ZF_) goto L_00560bdc;
  /* 00560bce add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00560bd1 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00560bd4 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560bd6 jne 0x560bb8 */ if (!ZF_) goto L_00560bb8;
L_00560bd8:;
  /* 00560bd8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00560bda jmp 0x560be1 */ goto L_00560be1;
L_00560bdc:;
  /* 00560bdc sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 00560bde sbb ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
L_00560be1:;
  /* 00560be1 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560be3 je 0x560bf2 */ if (ZF_) goto L_00560bf2;
  /* 00560be5 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 00560be8 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560bea jne 0x560bb0 */ if (!ZF_) goto L_00560bb0;
L_00560bec:;
  /* 00560bec pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560bed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560bee xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560bf0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560bf1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560bf2:;
  /* 00560bf2 mov eax, edi */ { eax = (u32)(edi); }
  /* 00560bf4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560bf5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560bf6 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560bf7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560c00(CPU *c) {
  NATIVE_HOOK(0x560c00u) REGS; LOADALL;
L_00560c00:;
  /* 00560c00 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560c01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560c02 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560c03 mov edi, dword ptr [ecx + 0x28] */ { const u32 m_ = (u32)(ecx + 0x28u); edi = (u32)(M32(m_)); }
  /* 00560c06 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560c08 je 0x560c4c */ if (ZF_) goto L_00560c4c;
  /* 00560c0a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00560c10:;
  /* 00560c10 mov ecx, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); ecx = (u32)(M32(m_)); }
  /* 00560c13 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560c15 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00560c18:;
  /* 00560c18 mov bl, byte ptr [ecx] */ { const u32 m_ = (u32)(ecx); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560c1a mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00560c1c cmp bl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560c1e jne 0x560c3c */ if (!ZF_) goto L_00560c3c;
  /* 00560c20 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560c22 je 0x560c38 */ if (ZF_) goto L_00560c38;
  /* 00560c24 mov bl, byte ptr [ecx + 1] */ { const u32 m_ = (u32)(ecx + 0x1u); ebx = (ebx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560c27 mov dl, bl */ { edx = (edx & 0xffffff00u) | ((u32)((ebx & 0xffu)) & 0xffu); }
  /* 00560c29 cmp bl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (ebx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560c2c jne 0x560c3c */ if (!ZF_) goto L_00560c3c;
  /* 00560c2e add ecx, 2 */ { u32 a_ = ecx, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00560c31 add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00560c34 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560c36 jne 0x560c18 */ if (!ZF_) goto L_00560c18;
L_00560c38:;
  /* 00560c38 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00560c3a jmp 0x560c41 */ goto L_00560c41;
L_00560c3c:;
  /* 00560c3c sbb ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
  /* 00560c3e sbb ecx, -1 */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); ecx = (u32)(r_); }
L_00560c41:;
  /* 00560c41 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560c43 je 0x560c52 */ if (ZF_) goto L_00560c52;
  /* 00560c45 mov edi, dword ptr [edi + 0x28] */ { const u32 m_ = (u32)(edi + 0x28u); edi = (u32)(M32(m_)); }
  /* 00560c48 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560c4a jne 0x560c10 */ if (!ZF_) goto L_00560c10;
L_00560c4c:;
  /* 00560c4c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560c4d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560c4e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560c50 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560c51 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560c52:;
  /* 00560c52 mov eax, edi */ { eax = (u32)(edi); }
  /* 00560c54 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560c55 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560c56 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560c57 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560c60(CPU *c) {
  NATIVE_HOOK(0x560c60u) REGS; LOADALL;
L_00560c60:;
  /* 00560c60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560c61 mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 00560c64 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560c66 je 0x560c7a */ if (ZF_) goto L_00560c7a;
L_00560c68:;
  /* 00560c68 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00560c6a mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560c6c call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560c6fu; SAVEALL; call_ind(c, t_); RETCHK(0x560c6fu, 0x560c6cu); LOADALL; }
  /* 00560c6f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560c71 jne 0x560c7e */ if (!ZF_) goto L_00560c7e;
  /* 00560c73 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 00560c76 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560c78 jne 0x560c68 */ if (!ZF_) goto L_00560c68;
L_00560c7a:;
  /* 00560c7a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560c7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560c7d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560c7e:;
  /* 00560c7e mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00560c80 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560c82 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560c83 jmp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00560c90(CPU *c) {
  NATIVE_HOOK(0x560c90u) REGS; LOADALL;
L_00560c90:;
  /* 00560c90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560c91 mov eax, edi */ { eax = (u32)(edi); }
  /* 00560c93 call 0x560ba0 */ esp -= 4; M32(esp) = 0x560c98u; SAVEALL; F_00560ba0(c); ABI_CHECK(0x560ba0u, 0x560c93u); RETCHK(0x560c98u, 0x560c93u); LOADALL;
  /* 00560c98 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560c9a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560c9c je 0x560cba */ if (ZF_) goto L_00560cba;
  /* 00560c9e mov edi, edi */ { edi = (u32)(edi); }
L_00560ca0:;
  /* 00560ca0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00560ca2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560ca4 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560ca7u; SAVEALL; call_ind(c, t_); RETCHK(0x560ca7u, 0x560ca4u); LOADALL; }
  /* 00560ca7 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560ca9 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560cab jne 0x560cbe */ if (!ZF_) goto L_00560cbe;
  /* 00560cad mov eax, edi */ { eax = (u32)(edi); }
  /* 00560caf call 0x560c00 */ esp -= 4; M32(esp) = 0x560cb4u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x560cafu); RETCHK(0x560cb4u, 0x560cafu); LOADALL;
  /* 00560cb4 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560cb6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560cb8 jne 0x560ca0 */ if (!ZF_) goto L_00560ca0;
L_00560cba:;
  /* 00560cba xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560cbc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560cbd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560cbe:;
  /* 00560cbe mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00560cc0 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560cc1 jmp dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00560cd0(CPU *c) {
  NATIVE_HOOK(0x560cd0u) REGS; LOADALL;
L_00560cd0:;
  /* 00560cd0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560cd1 mov esi, dword ptr [eax + 0x28] */ { const u32 m_ = (u32)(eax + 0x28u); esi = (u32)(M32(m_)); }
  /* 00560cd4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560cd6 je 0x560cea */ if (ZF_) goto L_00560cea;
L_00560cd8:;
  /* 00560cd8 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00560cda mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560cdc call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560cdfu; SAVEALL; call_ind(c, t_); RETCHK(0x560cdfu, 0x560cdcu); LOADALL; }
  /* 00560cdf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560ce1 jne 0x560cee */ if (!ZF_) goto L_00560cee;
  /* 00560ce3 mov esi, dword ptr [esi + 0x28] */ { const u32 m_ = (u32)(esi + 0x28u); esi = (u32)(M32(m_)); }
  /* 00560ce6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560ce8 jne 0x560cd8 */ if (!ZF_) goto L_00560cd8;
L_00560cea:;
  /* 00560cea xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560cec pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560ced ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560cee:;
  /* 00560cee mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00560cf0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560cf2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560cf3 jmp dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00560d00(CPU *c) {
  NATIVE_HOOK(0x560d00u) REGS; LOADALL;
L_00560d00:;
  /* 00560d00 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560d01 mov eax, edi */ { eax = (u32)(edi); }
  /* 00560d03 call 0x560c00 */ esp -= 4; M32(esp) = 0x560d08u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x560d03u); RETCHK(0x560d08u, 0x560d03u); LOADALL;
  /* 00560d08 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560d0a test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560d0c je 0x560d2a */ if (ZF_) goto L_00560d2a;
  /* 00560d0e mov edi, edi */ { edi = (u32)(edi); }
L_00560d10:;
  /* 00560d10 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00560d12 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560d14 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560d17u; SAVEALL; call_ind(c, t_); RETCHK(0x560d17u, 0x560d14u); LOADALL; }
  /* 00560d17 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560d19 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560d1b jne 0x560d2e */ if (!ZF_) goto L_00560d2e;
  /* 00560d1d mov eax, edi */ { eax = (u32)(edi); }
  /* 00560d1f call 0x560c00 */ esp -= 4; M32(esp) = 0x560d24u; SAVEALL; F_00560c00(c); ABI_CHECK(0x560c00u, 0x560d1fu); RETCHK(0x560d24u, 0x560d1fu); LOADALL;
  /* 00560d24 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560d26 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560d28 jne 0x560d10 */ if (!ZF_) goto L_00560d10;
L_00560d2a:;
  /* 00560d2a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560d2c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560d2d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560d2e:;
  /* 00560d2e mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00560d30 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560d31 jmp dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00560d40(CPU *c) {
  NATIVE_HOOK(0x560d40u) REGS; LOADALL;
L_00560d40:;
  /* 00560d40 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560d41 mov esi, eax */ { esi = (u32)(eax); }
  /* 00560d43 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560d45 je 0x560d59 */ if (ZF_) goto L_00560d59;
L_00560d47:;
  /* 00560d47 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00560d49 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560d4b call dword ptr [eax + 0x10] */ { const u32 m_ = (u32)(eax + 0x10u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560d4eu; SAVEALL; call_ind(c, t_); RETCHK(0x560d4eu, 0x560d4bu); LOADALL; }
  /* 00560d4e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560d50 jne 0x560d5d */ if (!ZF_) goto L_00560d5d;
  /* 00560d52 mov esi, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); esi = (u32)(M32(m_)); }
  /* 00560d55 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560d57 jne 0x560d47 */ if (!ZF_) goto L_00560d47;
L_00560d59:;
  /* 00560d59 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560d5b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560d5c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00560d5d:;
  /* 00560d5d mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00560d5f mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560d61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560d62 jmp dword ptr [edx + 0x10] */ { const u32 m_ = (u32)(edx + 0x10u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00560d70(CPU *c) {
  NATIVE_HOOK(0x560d70u) REGS; LOADALL;
L_00560d70:;
  /* 00560d70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560d71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560d73 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00560d79 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00560d7b push 0x61b633 */ { u32 v_ = 0x61b633u; esp -= 4; M32(esp) = v_; }
  /* 00560d80 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560d81 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00560d88 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560d89 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560d8a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00560d8d mov edx, 1 */ { edx = (u32)(0x1u); }
  /* 00560d92 mov eax, esi */ { eax = (u32)(esi); }
  /* 00560d94 call 0x560a40 */ esp -= 4; M32(esp) = 0x560d99u; SAVEALL; F_00560a40(c); ABI_CHECK(0x560a40u, 0x560d94u); RETCHK(0x560d99u, 0x560d94u); LOADALL;
  /* 00560d99 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00560d9b mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00560d9e lea eax, [esi + 0x2c] */ eax = (u32)((u32)(esi + 0x2cu));
  /* 00560da1 mov dword ptr [esi], 0x656940 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x656940u); }
  /* 00560da7 call 0x561ec0 */ esp -= 4; M32(esp) = 0x560dacu; SAVEALL; F_00561ec0(c); ABI_CHECK(0x561ec0u, 0x560da7u); RETCHK(0x560dacu, 0x560da7u); LOADALL;
  /* 00560dac mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00560db0 mov eax, edi */ { eax = (u32)(edi); }
  /* 00560db2 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00560db5 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 00560db8 lea edx, [eax + 1] */ edx = (u32)((u32)(eax + 0x1u));
  /* 00560dbb jmp 0x560dc0 */ goto L_00560dc0;
L_00560dc0:;
  /* 00560dc0 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00560dc2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00560dc3 cmp cl, bl */ { u32 a_ = (ecx & 0xffu), b_ = (ebx & 0xffu); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00560dc5 jne 0x560dc0 */ if (!ZF_) goto L_00560dc0;
  /* 00560dc7 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00560dc9 lea ebx, [esi + 0x20] */ ebx = (u32)((u32)(esi + 0x20u));
  /* 00560dcc mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00560dce mov edx, edi */ { edx = (u32)(edi); }
  /* 00560dd0 call 0x560320 */ esp -= 4; M32(esp) = 0x560dd5u; SAVEALL; F_00560320(c); ABI_CHECK(0x560320u, 0x560dd0u); RETCHK(0x560dd5u, 0x560dd0u); LOADALL;
  /* 00560dd5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00560dd8 mov eax, esi */ { eax = (u32)(esi); }
  /* 00560dda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560ddb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00560de2 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560de3 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560de5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560de6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560df0(CPU *c) {
  NATIVE_HOOK(0x560df0u) REGS; LOADALL;
L_00560df0:;
  /* 00560df0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560df1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560df3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560df4 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00560df6 call 0x560e20 */ esp -= 4; M32(esp) = 0x560dfbu; SAVEALL; F_00560e20(c); ABI_CHECK(0x560e20u, 0x560df6u); RETCHK(0x560dfbu, 0x560df6u); LOADALL;
  /* 00560dfb test byte ptr [ebp + 8], 1 */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00560dff je 0x560e0a */ if (ZF_) goto L_00560e0a;
  /* 00560e01 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560e02 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x560e07u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x560e02u); RETCHK(0x560e07u, 0x560e02u); LOADALL;
  /* 00560e07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00560e0a:;
  /* 00560e0a mov eax, esi */ { eax = (u32)(esi); }
  /* 00560e0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560e0d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560e0e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560e20(CPU *c) {
  NATIVE_HOOK(0x560e20u) REGS; LOADALL;
L_00560e20:;
  /* 00560e20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560e21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560e23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00560e25 push 0x61b493 */ { u32 v_ = 0x61b493u; esp -= 4; M32(esp) = v_; }
  /* 00560e2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00560e30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560e31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00560e38 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560e39 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560e3a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560e3b mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00560e3d mov dword ptr [ebp - 0x10], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edi); }
  /* 00560e40 mov dword ptr [edi], 0x656940 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x656940u); }
  /* 00560e46 mov eax, edi */ { eax = (u32)(edi); }
  /* 00560e48 mov dword ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x1u); }
  /* 00560e4f call 0x560e80 */ esp -= 4; M32(esp) = 0x560e54u; SAVEALL; F_00560e80(c); ABI_CHECK(0x560e80u, 0x560e4fu); RETCHK(0x560e54u, 0x560e4fu); LOADALL;
  /* 00560e54 lea esi, [edi + 0x2c] */ esi = (u32)((u32)(edi + 0x2cu));
  /* 00560e57 call 0x561ef0 */ esp -= 4; M32(esp) = 0x560e5cu; SAVEALL; F_00561ef0(c); ABI_CHECK(0x561ef0u, 0x560e57u); RETCHK(0x560e5cu, 0x560e57u); LOADALL;
  /* 00560e5c mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00560e5e mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00560e65 call 0x560aa0 */ esp -= 4; M32(esp) = 0x560e6au; SAVEALL; F_00560aa0(c); ABI_CHECK(0x560aa0u, 0x560e65u); RETCHK(0x560e6au, 0x560e65u); LOADALL;
  /* 00560e6a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00560e6d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560e6e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560e6f mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00560e76 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560e78 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560e79 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560e80(CPU *c) {
  NATIVE_HOOK(0x560e80u) REGS; LOADALL;
L_00560e80:;
  /* 00560e80 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560e81 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00560e82 mov edi, eax */ { edi = (u32)(eax); }
  /* 00560e84 call 0x560b40 */ esp -= 4; M32(esp) = 0x560e89u; SAVEALL; F_00560b40(c); ABI_CHECK(0x560b40u, 0x560e84u); RETCHK(0x560e89u, 0x560e84u); LOADALL;
  /* 00560e89 add edi, 0x2c */ { u32 a_ = edi, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00560e8c lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00560e90:;
  /* 00560e90 mov eax, dword ptr [edi + 0x20] */ { const u32 m_ = (u32)(edi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00560e93 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560e95 je 0x560ebe */ if (ZF_) goto L_00560ebe;
  /* 00560e97 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560e99 je 0x560ebe */ if (ZF_) goto L_00560ebe;
  /* 00560e9b xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00560e9d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560e9f sete cl */ { ecx = (ecx & 0xffffff00u) | ((u32)((ZF_) ? 1u : 0u) & 0xffu); }
  /* 00560ea2 dec ecx */ { u32 a_ = ecx; u32 r_ = (a_ - 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00560ea3 and ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00560ea5 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00560ea7 mov edx, esi */ { edx = (u32)(esi); }
  /* 00560ea9 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00560eab call 0x561f40 */ esp -= 4; M32(esp) = 0x560eb0u; SAVEALL; F_00561f40(c); ABI_CHECK(0x561f40u, 0x560eabu); RETCHK(0x560eb0u, 0x560eabu); LOADALL;
  /* 00560eb0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560eb2 je 0x560e90 */ if (ZF_) goto L_00560e90;
  /* 00560eb4 mov edx, dword ptr [esi] */ { const u32 m_ = (u32)(esi); edx = (u32)(M32(m_)); }
  /* 00560eb6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00560eb8 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00560eba call dword ptr [edx] */ { const u32 m_ = (u32)(edx); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x560ebcu; SAVEALL; call_ind(c, t_); RETCHK(0x560ebcu, 0x560ebau); LOADALL; }
  /* 00560ebc jmp 0x560e90 */ goto L_00560e90;
L_00560ebe:;
  /* 00560ebe pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00560ebf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560ec0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560ed0(CPU *c) {
  NATIVE_HOOK(0x560ed0u) REGS; LOADALL;
L_00560ed0:;
  /* 00560ed0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560ed1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560ed3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00560ed4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00560ed5 lea ebx, [ebp - 4] */ ebx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00560ed8 call 0x560440 */ esp -= 4; M32(esp) = 0x560eddu; SAVEALL; F_00560440(c); ABI_CHECK(0x560440u, 0x560ed8u); RETCHK(0x560eddu, 0x560ed8u); LOADALL;
  /* 00560edd mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560ee0 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00560ee3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560ee4 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00560ee6 call 0x561f70 */ esp -= 4; M32(esp) = 0x560eebu; SAVEALL; F_00561f70(c); ABI_CHECK(0x561f70u, 0x560ee6u); RETCHK(0x560eebu, 0x560ee6u); LOADALL;
  /* 00560eeb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560eed pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00560eee je 0x560f13 */ if (ZF_) goto L_00560f13;
  /* 00560ef0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560ef1 mov esi, dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); esi = (u32)(M32(m_)); }
  /* 00560ef4 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00560ef7 add esi, 8 */ { u32 a_ = esi, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00560efa cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560eff je 0x560f0a */ if (ZF_) goto L_00560f0a;
  /* 00560f01 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560f02 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x560f07u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x560f02u); RETCHK(0x560f07u, 0x560f02u); LOADALL;
  /* 00560f07 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00560f0a:;
  /* 00560f0a mov eax, esi */ { eax = (u32)(esi); }
  /* 00560f0c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560f0d mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560f0f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560f10 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00560f13:;
  /* 00560f13 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00560f16 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00560f1b je 0x560f26 */ if (ZF_) goto L_00560f26;
  /* 00560f1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560f1e call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x560f23u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x560f1eu); RETCHK(0x560f23u, 0x560f1eu); LOADALL;
  /* 00560f23 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00560f26:;
  /* 00560f26 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560f28 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00560f2a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560f2b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560f30(CPU *c) {
  NATIVE_HOOK(0x560f30u) REGS; LOADALL;
L_00560f30:;
  /* 00560f30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560f31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560f33 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560f34 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560f35 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560f38 call 0x560ed0 */ esp -= 4; M32(esp) = 0x560f3du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x560f38u); RETCHK(0x560f3du, 0x560f38u); LOADALL;
  /* 00560f3d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560f3f mov esi, eax */ { esi = (u32)(eax); }
  /* 00560f41 je 0x560f5f */ if (ZF_) goto L_00560f5f;
  /* 00560f43 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560f45 je 0x560f59 */ if (ZF_) goto L_00560f59;
  /* 00560f47 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560f48 call 0x5fe92e */ esp -= 4; M32(esp) = 0x560f4du; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x560f48u); RETCHK(0x560f4du, 0x560f48u); LOADALL;
  /* 00560f4d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00560f50 mov dword ptr [edi], eax */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(eax); }
  /* 00560f52 mov eax, esi */ { eax = (u32)(esi); }
  /* 00560f54 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560f55 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560f56 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00560f59:;
  /* 00560f59 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_00560f5f:;
  /* 00560f5f mov eax, esi */ { eax = (u32)(esi); }
  /* 00560f61 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560f62 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560f63 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560f70(CPU *c) {
  NATIVE_HOOK(0x560f70u) REGS; LOADALL;
L_00560f70:;
  /* 00560f70 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560f71 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560f73 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560f74 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560f75 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560f78 call 0x560ed0 */ esp -= 4; M32(esp) = 0x560f7du; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x560f78u); RETCHK(0x560f7du, 0x560f78u); LOADALL;
  /* 00560f7d test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560f7f mov esi, eax */ { esi = (u32)(eax); }
  /* 00560f81 je 0x560f9f */ if (ZF_) goto L_00560f9f;
  /* 00560f83 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560f85 je 0x560f99 */ if (ZF_) goto L_00560f99;
  /* 00560f87 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00560f88 call 0x5fea82 */ esp -= 4; M32(esp) = 0x560f8du; SAVEALL; F_005fea82(c); ABI_CHECK(0x5fea82u, 0x560f88u); RETCHK(0x560f8du, 0x560f88u); LOADALL;
  /* 00560f8d fstp dword ptr [edi] */ { const u32 m_ = (u32)(edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00560f8f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00560f92 mov eax, esi */ { eax = (u32)(esi); }
  /* 00560f94 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560f95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560f96 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00560f99:;
  /* 00560f99 mov dword ptr [edi], 0 */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(0x0u); }
L_00560f9f:;
  /* 00560f9f mov eax, esi */ { eax = (u32)(esi); }
  /* 00560fa1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00560fa2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560fa3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00560fb0(CPU *c) {
  NATIVE_HOOK(0x560fb0u) REGS; LOADALL;
L_00560fb0:;
  /* 00560fb0 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 00560fb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560fb3 push 0x64e830 */ { u32 v_ = 0x64e830u; esp -= 4; M32(esp) = v_; }
  /* 00560fb8 call 0x61af76 */ esp -= 4; M32(esp) = 0x560fbdu; SAVEALL; F_0061af76(c); ABI_CHECK(0x61af76u, 0x560fb8u); RETCHK(0x560fbdu, 0x560fb8u); LOADALL;
  /* 00560fbd add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00560fc0 neg eax */ { u32 a_ = eax; u32 r_ = (0u - a_) & 0xffffffffu; eax = (u32)(r_); SETFC(OP_SUB, 0, a_, r_, 4); }
  /* 00560fc2 sbb al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(1)) != 0; SETF(OP_RES, of_, 0, r_, 1); SETC(OP_RAW, co_, 0, 0, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00560fc4 inc al */ { u32 a_ = (eax & 0xffu); u32 r_ = (a_ + 1u) & 0xffu; eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); SETF(OP_INC, a_, 1, r_, 1); }
  /* 00560fc6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00560fd0(CPU *c) {
  NATIVE_HOOK(0x560fd0u) REGS; LOADALL;
L_00560fd0:;
  /* 00560fd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00560fd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00560fd3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560fd4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00560fd7 call 0x560ed0 */ esp -= 4; M32(esp) = 0x560fdcu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x560fd7u); RETCHK(0x560fdcu, 0x560fd7u); LOADALL;
  /* 00560fdc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00560fde je 0x560fed */ if (ZF_) goto L_00560fed;
  /* 00560fe0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00560fe1 call 0x5fe92e */ esp -= 4; M32(esp) = 0x560fe6u; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x560fe1u); RETCHK(0x560fe6u, 0x560fe1u); LOADALL;
  /* 00560fe6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00560fe9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560fea ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00560fed:;
  /* 00560fed xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00560fef pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00560ff0 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561000(CPU *c) {
  NATIVE_HOOK(0x561000u) REGS; LOADALL;
L_00561000:;
  /* 00561000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561003 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561004 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00561007 call 0x560ed0 */ esp -= 4; M32(esp) = 0x56100cu; SAVEALL; F_00560ed0(c); ABI_CHECK(0x560ed0u, 0x561007u); RETCHK(0x56100cu, 0x561007u); LOADALL;
  /* 0056100c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056100e je 0x561019 */ if (ZF_) goto L_00561019;
  /* 00561010 call 0x560fb0 */ esp -= 4; M32(esp) = 0x561015u; SAVEALL; F_00560fb0(c); ABI_CHECK(0x560fb0u, 0x561010u); RETCHK(0x561015u, 0x561010u); LOADALL;
  /* 00561015 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561016 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00561019:;
  /* 00561019 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 0056101b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056101c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00561020(CPU *c) {
  NATIVE_HOOK(0x561020u) REGS; LOADALL;
L_00561020:;
  /* 00561020 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00561021 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00561023 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00561024 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00561025 lea ebx, [ebp - 4] */ ebx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00561028 call 0x560440 */ esp -= 4; M32(esp) = 0x56102du; SAVEALL; F_00560440(c); ABI_CHECK(0x560440u, 0x561028u); RETCHK(0x56102du, 0x561028u); LOADALL;
  /* 0056102d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00561030 add eax, 0x2c */ { u32 a_ = eax, b_ = 0x2cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00561033 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561034 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00561036 call 0x561f70 */ esp -= 4; M32(esp) = 0x56103bu; SAVEALL; F_00561f70(c); ABI_CHECK(0x561f70u, 0x561036u); RETCHK(0x56103bu, 0x561036u); LOADALL;
  /* 0056103b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0056103d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0056103f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00561040 jne 0x561060 */ if (!ZF_) goto L_00561060;
  /* 00561042 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00561045 cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0056104a je 0x561055 */ if (ZF_) goto L_00561055;
  /* 0056104c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0056104d call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x561052u; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x56104du); RETCHK(0x561052u, 0x56104du); LOADALL;
  /* 00561052 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00561055:;
  /* 00561055 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 0056105a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0056105c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0056105d ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00561060:;
  /* 00561060 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00561063 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00561064 call 0x561900 */ esp -= 4; M32(esp) = 0x561069u; SAVEALL; F_00561900(c); ABI_CHECK(0x561900u, 0x561064u); RETCHK(0x561069u, 0x561064u); LOADALL;
  /* 00561069 mov esi, eax */ { esi = (u32)(eax); }
  /* 0056106b mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0056106e cmp eax, 0x7a70b8 */ { u32 a_ = eax, b_ = 0x7a70b8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00561073 je 0x56107e */ if (ZF_) goto L_0056107e;
  /* 00561075 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00561076 call 0x5fe9c8 */ esp -= 4; M32(esp) = 0x56107bu; SAVEALL; F_005fe9c8(c); ABI_CHECK(0x5fe9c8u, 0x561076u); RETCHK(0x56107bu, 0x561076u); LOADALL;
  /* 0056107b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0056107e:;
  /* 0056107e mov eax, esi */ { eax = (u32)(esi); }
  /* 00561080 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00561081 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00561083 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00561084 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}
