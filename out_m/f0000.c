#include "funcs.h"

void F_00401000(CPU *c) {
  NATIVE_HOOK(0x401000u) REGS; LOADALL;
L_00401000:;
  /* 00401000 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401001 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401003 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00401009 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040100b je 0x401013 */ if (ZF_) goto L_00401013;
  /* 0040100d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040100e jmp 0x55f4b0 */ SAVEALL; F_0055f4b0(c); return;
L_00401013:;
  /* 00401013 mov eax, 0xc354 */ { eax = (u32)(0xc354u); }
  /* 00401018 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401019 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00401020(CPU *c) {
  NATIVE_HOOK(0x401020u) REGS; LOADALL;
L_00401020:;
  /* 00401020 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401021 mov esi, eax */ { esi = (u32)(eax); }
  /* 00401023 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401029 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040102b je 0x401055 */ if (ZF_) goto L_00401055;
  /* 0040102d mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00401033 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401035 je 0x401040 */ if (ZF_) goto L_00401040;
  /* 00401037 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00401039 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0040103b call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x40103eu; SAVEALL; call_ind(c, t_); RETCHK(0x40103eu, 0x40103bu); LOADALL; }
  /* 0040103e jmp 0x401043 */ goto L_00401043;
L_00401040:;
  /* 00401040 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401043:;
  /* 00401043 mov esi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 00401049 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040104b je 0x401055 */ if (ZF_) goto L_00401055;
  /* 0040104d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040104e call 0x55ead0 */ esp -= 4; M32(esp) = 0x401053u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x40104eu); RETCHK(0x401053u, 0x40104eu); LOADALL;
  /* 00401053 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401054 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00401055:;
  /* 00401055 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401057 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401058 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401060(CPU *c) {
  NATIVE_HOOK(0x401060u) REGS; LOADALL;
L_00401060:;
  /* 00401060 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401061 mov esi, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); esi = (u32)(M32(m_)); }
  /* 00401067 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401069 jne 0x40106f */ if (!ZF_) goto L_0040106f;
  /* 0040106b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040106d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040106e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0040106f:;
  /* 0040106f push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401070 call 0x55ead0 */ esp -= 4; M32(esp) = 0x401075u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x401070u); RETCHK(0x401075u, 0x401070u); LOADALL;
  /* 00401075 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401076 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401080(CPU *c) {
  NATIVE_HOOK(0x401080u) REGS; LOADALL;
L_00401080:;
  /* 00401080 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401081 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401083 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401086 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401087 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00401089 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040108a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040108b lea edi, [ebx + 0x54] */ edi = (u32)((u32)(ebx + 0x54u));
  /* 0040108e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401090 mov ecx, 0x5a */ { ecx = (u32)(0x5au); }
  /* 00401095 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 00401098 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0040109a mov eax, dword ptr [ebx + 0xc38] */ { const u32 m_ = (u32)(ebx + 0xc38u); eax = (u32)(M32(m_)); }
  /* 004010a0 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004010a2 je 0x4010d0 */ if (ZF_) goto L_004010d0;
  /* 004010a4 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 004010aa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004010ac je 0x4010b7 */ if (ZF_) goto L_004010b7;
  /* 004010ae mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004010b0 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004010b2 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4010b5u; SAVEALL; call_ind(c, t_); RETCHK(0x4010b5u, 0x4010b2u); LOADALL; }
  /* 004010b5 jmp 0x4010ba */ goto L_004010ba;
L_004010b7:;
  /* 004010b7 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004010ba:;
  /* 004010ba mov esi, dword ptr [ebx + 0xc38] */ { const u32 m_ = (u32)(ebx + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004010c0 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004010c2 je 0x4010d0 */ if (ZF_) goto L_004010d0;
  /* 004010c4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004010c5 call 0x55ead0 */ esp -= 4; M32(esp) = 0x4010cau; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4010c5u); RETCHK(0x4010cau, 0x4010c5u); LOADALL;
  /* 004010ca mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004010cc test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004010ce jne 0x4010db */ if (!ZF_) goto L_004010db;
L_004010d0:;
  /* 004010d0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004010d1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004010d2 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004010d4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004010d5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004010d7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004010d8 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004010db:;
  /* 004010db jmp 0x9c5156 */ goto L_009c5156;
L_004010e1:;
  /* 004010e1 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004010e3 lea edx, [ecx + 0x960] */ edx = (u32)((u32)(ecx + 0x960u));
  /* 004010e9 lea eax, [ecx + 0x9e4] */ eax = (u32)((u32)(ecx + 0x9e4u));
  /* 004010ef mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004010f2 lea esi, [ecx + 0xa68] */ esi = (u32)((u32)(ecx + 0xa68u));
  /* 004010f8 jle 0x40111d */ if ((ZF_|LT_)) goto L_0040111d;
  /* 004010fa sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004010fc lea ecx, [ebx + 0x58] */ ecx = (u32)((u32)(ebx + 0x58u));
  /* 004010ff sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_00401101:;
  /* 00401101 mov ebx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ebx = (u32)(M32(m_)); }
  /* 00401104 mov dword ptr [ecx - 4], ebx */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00401107 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00401109 mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 0040110b mov ebx, dword ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ebx = (u32)(M32(m_)); }
  /* 0040110e mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00401111 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00401114 add ecx, 0xc */ { u32 a_ = ecx, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00401117 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00401118 jne 0x401101 */ if (!ZF_) goto L_00401101;
  /* 0040111a mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
L_0040111d:;
  /* 0040111d mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00401120 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00401122 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00401125 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401126 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401127 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401128 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040112a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040112b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009c5156:;
  /* 009c5156 cmp byte ptr [0x9c7003], 0 */ { const u32 m_ = (u32)(0x9c7003u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c515d je 0x9c5176 */ if (ZF_) goto L_009c5176;
  /* 009c515f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 009c5162 mov dword ptr [eax], 0x3e8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x3e8u); }
  /* 009c5168 mov eax, 0x9d4000 */ { eax = (u32)(0x9d4000u); }
  /* 009c516d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c516e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c516f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009c5170 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 009c5172 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009c5173 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009c5176:;
  /* 009c5176 mov edi, dword ptr [ecx + 0xa64] */ { const u32 m_ = (u32)(ecx + 0xa64u); edi = (u32)(M32(m_)); }
  /* 009c517c jmp 0x4010e1 */ goto L_004010e1;
}

void F_00401130(CPU *c) {
  NATIVE_HOOK(0x401130u) REGS; LOADALL;
L_00401130:;
  /* 00401130 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401131 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401133 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401134 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401135 mov esi, eax */ { esi = (u32)(eax); }
  /* 00401137 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 0040113d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040113f je 0x40114f */ if (ZF_) goto L_0040114f;
  /* 00401141 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00401144 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401145 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401146 call 0x401170 */ esp -= 4; M32(esp) = 0x40114bu; SAVEALL; F_00401170(c); ABI_CHECK(0x401170u, 0x401146u); RETCHK(0x40114bu, 0x401146u); LOADALL;
  /* 0040114b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040114d jne 0x401156 */ if (!ZF_) goto L_00401156;
L_0040114f:;
  /* 0040114f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401151 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401152 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401154 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401155 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00401156:;
  /* 00401156 and esi, 0xff */ { u32 a_ = esi, b_ = 0xffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0040115c shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0040115f lea eax, [esi + edi + 0x1bc] */ eax = (u32)((u32)(esi + edi + 0x1bcu));
  /* 00401166 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401167 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401169 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040116a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401170(CPU *c) {
  NATIVE_HOOK(0x401170u) REGS; LOADALL;
L_00401170:;
  /* 00401170 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401171 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401173 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401176 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401177 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0040117a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040117b lea edi, [esi + 0x1bc] */ edi = (u32)((u32)(esi + 0x1bcu));
  /* 00401181 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401183 mov ecx, 0x48 */ { ecx = (u32)(0x48u); }
  /* 00401188 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0040118b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0040118d mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401193 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401195 je 0x4011c3 */ if (ZF_) goto L_004011c3;
  /* 00401197 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0040119d test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040119f je 0x4011aa */ if (ZF_) goto L_004011aa;
  /* 004011a1 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004011a3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004011a5 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4011a8u; SAVEALL; call_ind(c, t_); RETCHK(0x4011a8u, 0x4011a5u); LOADALL; }
  /* 004011a8 jmp 0x4011ad */ goto L_004011ad;
L_004011aa:;
  /* 004011aa or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004011ad:;
  /* 004011ad mov esi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004011b3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004011b5 je 0x4011c3 */ if (ZF_) goto L_004011c3;
  /* 004011b7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004011b8 call 0x55ead0 */ esp -= 4; M32(esp) = 0x4011bdu; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4011b8u); RETCHK(0x4011bdu, 0x4011b8u); LOADALL;
  /* 004011bd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004011bf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004011c1 jne 0x4011cd */ if (!ZF_) goto L_004011cd;
L_004011c3:;
  /* 004011c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004011c4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004011c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004011c7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004011c9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004011ca ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004011cd:;
  /* 004011cd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004011ce mov ebx, dword ptr [ecx + 0x224] */ { const u32 m_ = (u32)(ecx + 0x224u); ebx = (u32)(M32(m_)); }
  /* 004011d4 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004011d6 lea edx, [ecx + 0x12c] */ edx = (u32)((u32)(ecx + 0x12cu));
  /* 004011dc lea eax, [ecx + 0x180] */ eax = (u32)((u32)(ecx + 0x180u));
  /* 004011e2 lea esi, [ecx + 0x1d4] */ esi = (u32)((u32)(ecx + 0x1d4u));
  /* 004011e8 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004011eb lea edi, [ecx + 0x228] */ edi = (u32)((u32)(ecx + 0x228u));
  /* 004011f1 jle 0x40122d */ if ((ZF_|LT_)) goto L_0040122d;
  /* 004011f3 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004011f6 add ecx, 0x1c0 */ { u32 a_ = ecx, b_ = 0x1c0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004011fc sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004011fe sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00401200 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00401202 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
L_00401205:;
  /* 00401205 mov ebx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ebx = (u32)(M32(m_)); }
  /* 00401208 mov dword ptr [ecx - 4], ebx */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0040120b mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0040120d mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 0040120f mov ebx, dword ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ebx = (u32)(M32(m_)); }
  /* 00401212 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00401215 mov ebx, dword ptr [edi + eax] */ { const u32 m_ = (u32)(edi + eax); ebx = (u32)(M32(m_)); }
  /* 00401218 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0040121b mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0040121e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00401221 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00401224 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00401225 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00401228 jne 0x401205 */ if (!ZF_) goto L_00401205;
  /* 0040122a mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_0040122d:;
  /* 0040122d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00401230 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00401232 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00401235 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401236 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401237 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401238 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040123a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040123b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00401240(CPU *c) {
  NATIVE_HOOK(0x401240u) REGS; LOADALL;
L_00401240:;
  /* 00401240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401243 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401244 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401245 mov esi, eax */ { esi = (u32)(eax); }
  /* 00401247 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 0040124d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040124f je 0x401260 */ if (ZF_) goto L_00401260;
  /* 00401251 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00401254 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401255 mov eax, edi */ { eax = (u32)(edi); }
  /* 00401257 call 0x401280 */ esp -= 4; M32(esp) = 0x40125cu; SAVEALL; F_00401280(c); ABI_CHECK(0x401280u, 0x401257u); RETCHK(0x40125cu, 0x401257u); LOADALL;
  /* 0040125c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040125e jne 0x401267 */ if (!ZF_) goto L_00401267;
L_00401260:;
  /* 00401260 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401262 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401263 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401265 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401266 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00401267:;
  /* 00401267 and esi, 0xffff */ { u32 a_ = esi, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0040126d shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00401270 call 0x9c5202 */ esp -= 4; M32(esp) = 0x401275u; SAVEALL; F_009c5202(c); ABI_CHECK(0x9c5202u, 0x401270u); RETCHK(0x401275u, 0x401270u); LOADALL;
  /* 00401275 nop */ ;
  /* 00401276 nop */ ;
  /* 00401277 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401278 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040127a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040127b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401280(CPU *c) {
  NATIVE_HOOK(0x401280u) REGS; LOADALL;
L_00401280:;
  /* 00401280 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401281 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401283 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401286 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401287 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00401289 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040128a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040128b lea edi, [ebx + 0x69c] */ edi = (u32)((u32)(ebx + 0x69cu));
  /* 00401291 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401293 mov ecx, 0x28 */ { ecx = (u32)(0x28u); }
  /* 00401298 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0040129b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0040129d mov eax, dword ptr [ebx + 0xc38] */ { const u32 m_ = (u32)(ebx + 0xc38u); eax = (u32)(M32(m_)); }
  /* 004012a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004012a5 je 0x4012d3 */ if (ZF_) goto L_004012d3;
  /* 004012a7 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 004012ad test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004012af je 0x4012ba */ if (ZF_) goto L_004012ba;
  /* 004012b1 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004012b3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004012b5 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4012b8u; SAVEALL; call_ind(c, t_); RETCHK(0x4012b8u, 0x4012b5u); LOADALL; }
  /* 004012b8 jmp 0x4012bd */ goto L_004012bd;
L_004012ba:;
  /* 004012ba or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004012bd:;
  /* 004012bd mov esi, dword ptr [ebx + 0xc38] */ { const u32 m_ = (u32)(ebx + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004012c3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004012c5 je 0x4012d3 */ if (ZF_) goto L_004012d3;
  /* 004012c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004012c8 call 0x55ead0 */ esp -= 4; M32(esp) = 0x4012cdu; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4012c8u); RETCHK(0x4012cdu, 0x4012c8u); LOADALL;
  /* 004012cd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004012cf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004012d1 jne 0x4012de */ if (!ZF_) goto L_004012de;
L_004012d3:;
  /* 004012d3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004012d4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004012d5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004012d7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004012d8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004012da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004012db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004012de:;
  /* 004012de jmp 0x9c5181 */ goto L_009c5181;
L_004012e4:;
  /* 004012e4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004012e6 lea edx, [ecx + 0x90] */ edx = (u32)((u32)(ecx + 0x90u));
  /* 004012ec lea eax, [ecx + 0xc4] */ eax = (u32)((u32)(ecx + 0xc4u));
  /* 004012f2 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 004012f5 lea esi, [ecx + 0xf8] */ esi = (u32)((u32)(ecx + 0xf8u));
  /* 004012fb jle 0x401323 */ if ((ZF_|LT_)) goto L_00401323;
  /* 004012fd sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004012ff lea ecx, [ebx + 0x6a0] */ ecx = (u32)((u32)(ebx + 0x6a0u));
  /* 00401305 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_00401307:;
  /* 00401307 mov ebx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ebx = (u32)(M32(m_)); }
  /* 0040130a mov dword ptr [ecx - 4], ebx */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0040130d mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0040130f mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 00401311 mov ebx, dword ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ebx = (u32)(M32(m_)); }
  /* 00401314 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00401317 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040131a add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0040131d dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0040131e jne 0x401307 */ if (!ZF_) goto L_00401307;
  /* 00401320 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
L_00401323:;
  /* 00401323 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00401326 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00401328 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0040132b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040132c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040132d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040132e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401330 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401331 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009c5181:;
  /* 009c5181 cmp byte ptr [0x9c7000], 0 */ { const u32 m_ = (u32)(0x9c7000u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c5188 je 0x9c51a1 */ if (ZF_) goto L_009c51a1;
  /* 009c518a mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 009c518d mov dword ptr [eax], 0x3e8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x3e8u); }
  /* 009c5193 mov eax, 0x9c8000 */ { eax = (u32)(0x9c8000u); }
  /* 009c5198 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c5199 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c519a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009c519b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 009c519d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009c519e ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009c51a1:;
  /* 009c51a1 mov edi, dword ptr [ecx + 0xf4] */ { const u32 m_ = (u32)(ecx + 0xf4u); edi = (u32)(M32(m_)); }
  /* 009c51a7 jmp 0x4012e4 */ goto L_004012e4;
}

void F_00401340(CPU *c) {
  NATIVE_HOOK(0x401340u) REGS; LOADALL;
L_00401340:;
  /* 00401340 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401341 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401343 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401344 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401345 mov esi, eax */ { esi = (u32)(eax); }
  /* 00401347 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 0040134d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040134f je 0x40135f */ if (ZF_) goto L_0040135f;
  /* 00401351 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00401354 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401355 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401356 call 0x401380 */ esp -= 4; M32(esp) = 0x40135bu; SAVEALL; F_00401380(c); ABI_CHECK(0x401380u, 0x401356u); RETCHK(0x40135bu, 0x401356u); LOADALL;
  /* 0040135b test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040135d jne 0x401366 */ if (!ZF_) goto L_00401366;
L_0040135f:;
  /* 0040135f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401361 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401362 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401364 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401365 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00401366:;
  /* 00401366 and esi, 0xffff */ { u32 a_ = esi, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0040136c shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 0040136f call 0x9c521a */ esp -= 4; M32(esp) = 0x401374u; SAVEALL; F_009c521a(c); ABI_CHECK(0x9c521au, 0x40136fu); RETCHK(0x401374u, 0x40136fu); LOADALL;
  /* 00401374 nop */ ;
  /* 00401375 nop */ ;
  /* 00401376 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401377 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401379 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040137a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401380(CPU *c) {
  NATIVE_HOOK(0x401380u) REGS; LOADALL;
L_00401380:;
  /* 00401380 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401381 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401383 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401386 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401387 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0040138a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040138b lea edi, [esi + 0x2dc] */ edi = (u32)((u32)(esi + 0x2dcu));
  /* 00401391 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401393 mov ecx, 0xf0 */ { ecx = (u32)(0xf0u); }
  /* 00401398 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 0040139b rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0040139d mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 004013a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004013a5 je 0x4013d3 */ if (ZF_) goto L_004013d3;
  /* 004013a7 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 004013ad test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004013af je 0x4013ba */ if (ZF_) goto L_004013ba;
  /* 004013b1 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004013b3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004013b5 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4013b8u; SAVEALL; call_ind(c, t_); RETCHK(0x4013b8u, 0x4013b5u); LOADALL; }
  /* 004013b8 jmp 0x4013bd */ goto L_004013bd;
L_004013ba:;
  /* 004013ba or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004013bd:;
  /* 004013bd mov esi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004013c3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004013c5 je 0x4013d3 */ if (ZF_) goto L_004013d3;
  /* 004013c7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004013c8 call 0x55ead0 */ esp -= 4; M32(esp) = 0x4013cdu; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4013c8u); RETCHK(0x4013cdu, 0x4013c8u); LOADALL;
  /* 004013cd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004013cf test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004013d1 jne 0x4013dd */ if (!ZF_) goto L_004013dd;
L_004013d3:;
  /* 004013d3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004013d4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004013d6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004013d7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004013d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004013da ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004013dd:;
  /* 004013dd jmp 0x9c51ac */ goto L_009c51ac;
L_004013e4:;
  /* 004013e4 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004013e6 lea edx, [ecx + 0x570] */ edx = (u32)((u32)(ecx + 0x570u));
  /* 004013ec lea eax, [ecx + 0x66c] */ eax = (u32)((u32)(ecx + 0x66cu));
  /* 004013f2 lea esi, [ecx + 0x768] */ esi = (u32)((u32)(ecx + 0x768u));
  /* 004013f8 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 004013fb lea edi, [ecx + 0x864] */ edi = (u32)((u32)(ecx + 0x864u));
  /* 00401401 jle 0x40143d */ if ((ZF_|LT_)) goto L_0040143d;
  /* 00401403 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00401406 add ecx, 0x2e0 */ { u32 a_ = ecx, b_ = 0x2e0u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0040140c sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040140e sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00401410 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00401412 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
L_00401415:;
  /* 00401415 mov ebx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ebx = (u32)(M32(m_)); }
  /* 00401418 mov dword ptr [ecx - 4], ebx */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0040141b mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0040141d mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 0040141f mov ebx, dword ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ebx = (u32)(M32(m_)); }
  /* 00401422 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00401425 mov ebx, dword ptr [edi + eax] */ { const u32 m_ = (u32)(edi + eax); ebx = (u32)(M32(m_)); }
  /* 00401428 mov dword ptr [ecx + 8], ebx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0040142b mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 0040142e add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00401431 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00401434 dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00401435 mov dword ptr [ebp + 8], ebx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00401438 jne 0x401415 */ if (!ZF_) goto L_00401415;
  /* 0040143a mov ebx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ebx = (u32)(M32(m_)); }
L_0040143d:;
  /* 0040143d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00401440 mov dword ptr [eax], ebx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ebx); }
  /* 00401442 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00401445 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401446 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401447 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401448 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040144a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040144b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_009c51ac:;
  /* 009c51ac cmp byte ptr [0x9c7001], 0 */ { const u32 m_ = (u32)(0x9c7001u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c51b3 je 0x9c51cb */ if (ZF_) goto L_009c51cb;
  /* 009c51b5 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 009c51b8 mov dword ptr [eax], 0x3e8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x3e8u); }
  /* 009c51be mov eax, 0x9cc000 */ { eax = (u32)(0x9cc000u); }
  /* 009c51c3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c51c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c51c5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 009c51c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009c51c8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_009c51cb:;
  /* 009c51cb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 009c51cc mov ebx, dword ptr [ecx + 0x860] */ { const u32 m_ = (u32)(ecx + 0x860u); ebx = (u32)(M32(m_)); }
  /* 009c51d2 jmp 0x4013e4 */ goto L_004013e4;
}

void F_00401450(CPU *c) {
  NATIVE_HOOK(0x401450u) REGS; LOADALL;
L_00401450:;
  /* 00401450 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401451 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401453 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401454 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401455 mov esi, eax */ { esi = (u32)(eax); }
  /* 00401457 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 0040145d test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040145f je 0x401470 */ if (ZF_) goto L_00401470;
  /* 00401461 lea eax, [ebp - 4] */ eax = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00401464 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401465 mov eax, edi */ { eax = (u32)(edi); }
  /* 00401467 call 0x401490 */ esp -= 4; M32(esp) = 0x40146cu; SAVEALL; F_00401490(c); ABI_CHECK(0x401490u, 0x401467u); RETCHK(0x40146cu, 0x401467u); LOADALL;
  /* 0040146c test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040146e jne 0x401477 */ if (!ZF_) goto L_00401477;
L_00401470:;
  /* 00401470 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401472 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401473 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401475 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401476 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00401477:;
  /* 00401477 and esi, 0xffff */ { u32 a_ = esi, b_ = 0xffffu; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 0040147d shl esi, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00401480 call 0x9c5232 */ esp -= 4; M32(esp) = 0x401485u; SAVEALL; F_009c5232(c); ABI_CHECK(0x9c5232u, 0x401480u); RETCHK(0x401485u, 0x401480u); LOADALL;
  /* 00401485 nop */ ;
  /* 00401486 nop */ ;
  /* 00401487 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401488 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040148a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040148b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401490(CPU *c) {
  NATIVE_HOOK(0x401490u) REGS; LOADALL;
L_00401490:;
  /* 00401490 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401491 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401493 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401496 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401497 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00401499 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040149a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040149b lea edi, [ebx + 0x73c] */ edi = (u32)((u32)(ebx + 0x73cu));
  /* 004014a1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004014a3 mov ecx, 0xf0 */ { ecx = (u32)(0xf0u); }
  /* 004014a8 mov dword ptr [ebp - 8], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edi); }
  /* 004014ab rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004014ad mov eax, dword ptr [ebx + 0xc38] */ { const u32 m_ = (u32)(ebx + 0xc38u); eax = (u32)(M32(m_)); }
  /* 004014b3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004014b5 je 0x4014e3 */ if (ZF_) goto L_004014e3;
  /* 004014b7 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 004014bd test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004014bf je 0x4014ca */ if (ZF_) goto L_004014ca;
  /* 004014c1 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004014c3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004014c5 call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4014c8u; SAVEALL; call_ind(c, t_); RETCHK(0x4014c8u, 0x4014c5u); LOADALL; }
  /* 004014c8 jmp 0x4014cd */ goto L_004014cd;
L_004014ca:;
  /* 004014ca or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004014cd:;
  /* 004014cd mov esi, dword ptr [ebx + 0xc38] */ { const u32 m_ = (u32)(ebx + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004014d3 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004014d5 je 0x4014e3 */ if (ZF_) goto L_004014e3;
  /* 004014d7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004014d8 call 0x55ead0 */ esp -= 4; M32(esp) = 0x4014ddu; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4014d8u); RETCHK(0x4014ddu, 0x4014d8u); LOADALL;
  /* 004014dd mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004014df test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004014e1 jne 0x4014ee */ if (!ZF_) goto L_004014ee;
L_004014e3:;
  /* 004014e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004014e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004014e5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004014e7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004014e8 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004014ea pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004014eb ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004014ee:;
  /* 004014ee jmp 0x9c51d7 */ goto L_009c51d7;
L_004014f4:;
  /* 004014f4 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004014f6 lea edx, [ecx + 0x27c] */ edx = (u32)((u32)(ecx + 0x27cu));
  /* 004014fc lea eax, [ecx + 0x378] */ eax = (u32)((u32)(ecx + 0x378u));
  /* 00401502 mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00401505 lea esi, [ecx + 0x474] */ esi = (u32)((u32)(ecx + 0x474u));
  /* 0040150b jle 0x401533 */ if ((ZF_|LT_)) goto L_00401533;
  /* 0040150d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040150f lea ecx, [ebx + 0x740] */ ecx = (u32)((u32)(ebx + 0x740u));
  /* 00401515 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_00401517:;
  /* 00401517 mov ebx, dword ptr [edx + eax] */ { const u32 m_ = (u32)(edx + eax); ebx = (u32)(M32(m_)); }
  /* 0040151a mov dword ptr [ecx - 4], ebx */ { const u32 m_ = (u32)(ecx + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0040151d mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 0040151f mov dword ptr [ecx], ebx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(ebx); }
  /* 00401521 mov ebx, dword ptr [esi + eax] */ { const u32 m_ = (u32)(esi + eax); ebx = (u32)(M32(m_)); }
  /* 00401524 mov dword ptr [ecx + 4], ebx */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00401527 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040152a add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0040152d dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0040152e jne 0x401517 */ if (!ZF_) goto L_00401517;
  /* 00401530 mov edi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); edi = (u32)(M32(m_)); }
L_00401533:;
  /* 00401533 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00401536 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00401538 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 0040153b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040153c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040153d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040153e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401540 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401541 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009c51d7:;
  /* 009c51d7 cmp byte ptr [0x9c7002], 0 */ { const u32 m_ = (u32)(0x9c7002u); u32 a_ = M8(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 009c51de je 0x9c51f7 */ if (ZF_) goto L_009c51f7;
  /* 009c51e0 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 009c51e3 mov dword ptr [eax], 0x3e8 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x3e8u); }
  /* 009c51e9 mov eax, 0x9d0000 */ { eax = (u32)(0x9d0000u); }
  /* 009c51ee pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 009c51ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 009c51f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 009c51f1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 009c51f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 009c51f4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_009c51f7:;
  /* 009c51f7 mov edi, dword ptr [ecx + 0x470] */ { const u32 m_ = (u32)(ecx + 0x470u); edi = (u32)(M32(m_)); }
  /* 009c51fd jmp 0x4014f4 */ goto L_004014f4;
}

void F_00401550(CPU *c) {
  NATIVE_HOOK(0x401550u) REGS; LOADALL;
L_00401550:;
  /* 00401550 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401551 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401553 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00401555 push 0x61c353 */ { u32 v_ = 0x61c353u; esp -= 4; M32(esp) = v_; }
  /* 0040155a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00401560 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401561 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00401568 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401569 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0040156a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040156b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0040156d xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0040156f push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401570 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00401573 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00401576 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 00401579 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0040157c mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 0040157f mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00401582 mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 00401585 mov dword ptr [esi + 0x1c], ebx */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(ebx); }
  /* 00401588 mov dword ptr [esi + 0x20], ebx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ebx); }
  /* 0040158b mov dword ptr [esi + 0x24], ebx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ebx); }
  /* 0040158e xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401590 mov dword ptr [esi + 0x28], eax */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(eax); }
  /* 00401593 mov dword ptr [esi + 0x2c], eax */ { const u32 m_ = (u32)(esi + 0x2cu); M32(m_) = (u32)(eax); }
  /* 00401596 mov dword ptr [esi + 0x30], eax */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(eax); }
  /* 00401599 mov dword ptr [esi + 0x34], eax */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(eax); }
  /* 0040159c mov dword ptr [esi + 0x38], eax */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(eax); }
  /* 0040159f mov byte ptr [esi + 0x3c], bl */ { const u32 m_ = (u32)(esi + 0x3cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004015a2 mov byte ptr [esi + 0x3d], 1 */ { const u32 m_ = (u32)(esi + 0x3du); M8(m_) = (u8)(0x1u); }
  /* 004015a6 mov byte ptr [esi + 0x3e], 1 */ { const u32 m_ = (u32)(esi + 0x3eu); M8(m_) = (u8)(0x1u); }
  /* 004015aa mov byte ptr [esi + 0x3f], 1 */ { const u32 m_ = (u32)(esi + 0x3fu); M8(m_) = (u8)(0x1u); }
  /* 004015ae mov byte ptr [esi + 0x40], bl */ { const u32 m_ = (u32)(esi + 0x40u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004015b1 mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 004015b4 mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 004015b7 mov dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 004015ba mov dword ptr [esi + 0xc24], ebx */ { const u32 m_ = (u32)(esi + 0xc24u); M32(m_) = (u32)(ebx); }
  /* 004015c0 mov dword ptr [esi + 0xc28], ebx */ { const u32 m_ = (u32)(esi + 0xc28u); M32(m_) = (u32)(ebx); }
  /* 004015c6 mov dword ptr [esi + 0xc2c], ebx */ { const u32 m_ = (u32)(esi + 0xc2cu); M32(m_) = (u32)(ebx); }
  /* 004015cc push 0x401760 */ { u32 v_ = 0x401760u; esp -= 4; M32(esp) = v_; }
  /* 004015d1 push 0x403180 */ { u32 v_ = 0x403180u; esp -= 4; M32(esp) = v_; }
  /* 004015d6 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 004015d8 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 004015da lea ecx, [esi + 0xccc] */ ecx = (u32)((u32)(esi + 0xcccu));
  /* 004015e0 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 004015e4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004015e5 mov dword ptr [esi + 0xc48], 0x63e720 */ { const u32 m_ = (u32)(esi + 0xc48u); M32(m_) = (u32)(0x63e720u); }
  /* 004015ef call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x4015f4u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x4015efu); RETCHK(0x4015f4u, 0x4015efu); LOADALL;
  /* 004015f4 push 0x403260 */ { u32 v_ = 0x403260u; esp -= 4; M32(esp) = v_; }
  /* 004015f9 push 0x403250 */ { u32 v_ = 0x403250u; esp -= 4; M32(esp) = v_; }
  /* 004015fe push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00401600 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 00401602 lea edx, [esi + 0xd58] */ edx = (u32)((u32)(esi + 0xd58u));
  /* 00401608 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00401609 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 0040160d call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x401612u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x40160du); RETCHK(0x401612u, 0x40160du); LOADALL;
  /* 00401612 mov dword ptr [esi + 0xe04], 0xf */ { const u32 m_ = (u32)(esi + 0xe04u); M32(m_) = (u32)(0xfu); }
  /* 0040161c mov dword ptr [esi + 0xe00], ebx */ { const u32 m_ = (u32)(esi + 0xe00u); M32(m_) = (u32)(ebx); }
  /* 00401622 mov byte ptr [esi + 0xdf0], bl */ { const u32 m_ = (u32)(esi + 0xdf0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401628 push 0x4017d0 */ { u32 v_ = 0x4017d0u; esp -= 4; M32(esp) = v_; }
  /* 0040162d push 0x401770 */ { u32 v_ = 0x401770u; esp -= 4; M32(esp) = v_; }
  /* 00401632 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00401634 push 0x68 */ { u32 v_ = 0x68u; esp -= 4; M32(esp) = v_; }
  /* 00401636 lea eax, [esi + 0xe08] */ eax = (u32)((u32)(esi + 0xe08u));
  /* 0040163c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040163d mov byte ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x5u); }
  /* 00401641 call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x401646u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x401641u); RETCHK(0x401646u, 0x401641u); LOADALL;
  /* 00401646 lea edi, [esi + 0x1150] */ edi = (u32)((u32)(esi + 0x1150u));
  /* 0040164c mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00401653 mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00401656 mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401659 mov dword ptr [esi + 0x1174], ebx */ { const u32 m_ = (u32)(esi + 0x1174u); M32(m_) = (u32)(ebx); }
  /* 0040165f mov dword ptr [esi + 0x1178], ebx */ { const u32 m_ = (u32)(esi + 0x1178u); M32(m_) = (u32)(ebx); }
  /* 00401665 mov dword ptr [esi + 0x117c], ebx */ { const u32 m_ = (u32)(esi + 0x117cu); M32(m_) = (u32)(ebx); }
  /* 0040166b mov byte ptr [ebp - 4], 8 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x8u); }
  /* 0040166f mov dword ptr [esi + 0xc38], ebx */ { const u32 m_ = (u32)(esi + 0xc38u); M32(m_) = (u32)(ebx); }
  /* 00401675 mov dword ptr [esi + 0xc44], ebx */ { const u32 m_ = (u32)(esi + 0xc44u); M32(m_) = (u32)(ebx); }
  /* 0040167b mov dword ptr [esi + 0xc3c], ebx */ { const u32 m_ = (u32)(esi + 0xc3cu); M32(m_) = (u32)(ebx); }
  /* 00401681 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00401684 mov dword ptr [esi + 0xc40], eax */ { const u32 m_ = (u32)(esi + 0xc40u); M32(m_) = (u32)(eax); }
  /* 0040168a mov dword ptr [esi + 0xb10], eax */ { const u32 m_ = (u32)(esi + 0xb10u); M32(m_) = (u32)(eax); }
  /* 00401690 mov dword ptr [esi + 0xb14], eax */ { const u32 m_ = (u32)(esi + 0xb14u); M32(m_) = (u32)(eax); }
  /* 00401696 mov eax, esi */ { eax = (u32)(esi); }
  /* 00401698 mov dword ptr [esi + 0xc1c], ebx */ { const u32 m_ = (u32)(esi + 0xc1cu); M32(m_) = (u32)(ebx); }
  /* 0040169e mov byte ptr [esi + 0xde8], 1 */ { const u32 m_ = (u32)(esi + 0xde8u); M8(m_) = (u8)(0x1u); }
  /* 004016a5 mov byte ptr [esi + 0x114c], bl */ { const u32 m_ = (u32)(esi + 0x114cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004016ab call 0x402d90 */ esp -= 4; M32(esp) = 0x4016b0u; SAVEALL; F_00402d90(c); ABI_CHECK(0x402d90u, 0x4016abu); RETCHK(0x4016b0u, 0x4016abu); LOADALL;
  /* 004016b0 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004016b2 mov dword ptr [esi + 0xb2c], ebx */ { const u32 m_ = (u32)(esi + 0xb2cu); M32(m_) = (u32)(ebx); }
  /* 004016b8 mov dword ptr [esi + 0xc14], ebx */ { const u32 m_ = (u32)(esi + 0xc14u); M32(m_) = (u32)(ebx); }
  /* 004016be or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004016c1 mov dword ptr [esi + 0xb18], eax */ { const u32 m_ = (u32)(esi + 0xb18u); M32(m_) = (u32)(eax); }
  /* 004016c7 mov dword ptr [esi + 0xb1c], eax */ { const u32 m_ = (u32)(esi + 0xb1cu); M32(m_) = (u32)(eax); }
  /* 004016cd mov dword ptr [esi + 0xb24], eax */ { const u32 m_ = (u32)(esi + 0xb24u); M32(m_) = (u32)(eax); }
  /* 004016d3 lea edx, [esi + 0xb94] */ edx = (u32)((u32)(esi + 0xb94u));
  /* 004016d9 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 004016db mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004016de mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004016e1 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004016e4 mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004016e7 lea ecx, [esi + 0xb34] */ ecx = (u32)((u32)(esi + 0xb34u));
  /* 004016ed mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 004016ef mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 004016f2 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 004016f5 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 004016f8 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004016fb mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 004016fe mov dword ptr [ecx + 0x18], eax */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(eax); }
  /* 00401701 mov dword ptr [ecx + 0x1c], eax */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00401704 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401705 push 0x63e71c */ { u32 v_ = 0x63e71cu; esp -= 4; M32(esp) = v_; }
  /* 0040170a mov ecx, edi */ { ecx = (u32)(edi); }
  /* 0040170c mov byte ptr [esi + 0xc18], bl */ { const u32 m_ = (u32)(esi + 0xc18u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401712 mov byte ptr [esi + 0xc19], bl */ { const u32 m_ = (u32)(esi + 0xc19u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401718 mov byte ptr [esi + 0xc1a], bl */ { const u32 m_ = (u32)(esi + 0xc1au); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0040171e mov dword ptr [esi + 0xde4], ebx */ { const u32 m_ = (u32)(esi + 0xde4u); M32(m_) = (u32)(ebx); }
  /* 00401724 mov word ptr [esi + 0x10], bx */ { const u32 m_ = (u32)(esi + 0x10u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00401728 mov dword ptr [esi + 0x1148], ebx */ { const u32 m_ = (u32)(esi + 0x1148u); M32(m_) = (u32)(ebx); }
  /* 0040172e mov byte ptr [esi + 0xde9], bl */ { const u32 m_ = (u32)(esi + 0xde9u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401734 mov byte ptr [esi + 0x114d], bl */ { const u32 m_ = (u32)(esi + 0x114du); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0040173a call 0x404420 */ esp -= 4; M32(esp) = 0x40173fu; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x40173au); RETCHK(0x40173fu, 0x40173au); LOADALL;
  /* 0040173f mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00401742 mov byte ptr [esi + 0x116c], bl */ { const u32 m_ = (u32)(esi + 0x116cu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401748 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401749 mov eax, esi */ { eax = (u32)(esi); }
  /* 0040174b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040174c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040174d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00401754 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401756 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401757 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401760(CPU *c) {
  NATIVE_HOOK(0x401760u) REGS; LOADALL;
L_00401760:;
  /* 00401760 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401761 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00401763 call 0x403410 */ esp -= 4; M32(esp) = 0x401768u; SAVEALL; F_00403410(c); ABI_CHECK(0x403410u, 0x401763u); RETCHK(0x401768u, 0x401763u); LOADALL;
  /* 00401768 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401769 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401770(CPU *c) {
  NATIVE_HOOK(0x401770u) REGS; LOADALL;
L_00401770:;
  /* 00401770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401773 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00401775 push 0x61c2ab */ { u32 v_ = 0x61c2abu; esp -= 4; M32(esp) = v_; }
  /* 0040177a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00401780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401781 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00401788 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401789 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040178b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040178c mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0040178e mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00401791 mov dword ptr [esi + 0x1c], eax */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(eax); }
  /* 00401794 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 00401797 mov dword ptr [esi + 0x24], eax */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(eax); }
  /* 0040179a push 0x403260 */ { u32 v_ = 0x403260u; esp -= 4; M32(esp) = v_; }
  /* 0040179f push 0x403250 */ { u32 v_ = 0x403250u; esp -= 4; M32(esp) = v_; }
  /* 004017a4 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004017a6 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004017a9 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004017ab lea eax, [esi + 0x28] */ eax = (u32)((u32)(esi + 0x28u));
  /* 004017ae push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004017af call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x4017b4u; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x4017afu); RETCHK(0x4017b4u, 0x4017afu); LOADALL;
  /* 004017b4 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004017b7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004017b9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004017ba mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004017c1 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004017c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004017c4 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004017d0(CPU *c) {
  NATIVE_HOOK(0x4017d0u) REGS; LOADALL;
L_004017d0:;
  /* 004017d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004017d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004017d3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004017d5 push 0x61c2ab */ { u32 v_ = 0x61c2abu; esp -= 4; M32(esp) = v_; }
  /* 004017da mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004017e0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004017e1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004017e8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004017e9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004017ea mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004017ec push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004017ed mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 004017f0 push 0x403260 */ { u32 v_ = 0x403260u; esp -= 4; M32(esp) = v_; }
  /* 004017f5 push 4 */ { u32 v_ = 0x4u; esp -= 4; M32(esp) = v_; }
  /* 004017f7 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004017f9 lea eax, [esi + 0x28] */ eax = (u32)((u32)(esi + 0x28u));
  /* 004017fc xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 004017fe push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004017ff mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00401802 call 0x5fe890 */ esp -= 4; M32(esp) = 0x401807u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x401802u); RETCHK(0x401807u, 0x401802u); LOADALL;
  /* 00401807 mov eax, dword ptr [esi + 0x1c] */ { const u32 m_ = (u32)(esi + 0x1cu); eax = (u32)(M32(m_)); }
  /* 0040180a cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040180c je 0x401817 */ if (ZF_) goto L_00401817;
  /* 0040180e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040180f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401814u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40180fu); RETCHK(0x401814u, 0x40180fu); LOADALL;
  /* 00401814 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401817:;
  /* 00401817 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0040181a mov dword ptr [esi + 0x1c], edi */ { const u32 m_ = (u32)(esi + 0x1cu); M32(m_) = (u32)(edi); }
  /* 0040181d mov dword ptr [esi + 0x20], edi */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(edi); }
  /* 00401820 mov dword ptr [esi + 0x24], edi */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(edi); }
  /* 00401823 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401824 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401825 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 0040182c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040182e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040182f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401830(CPU *c) {
  NATIVE_HOOK(0x401830u) REGS; LOADALL;
L_00401830:;
  /* 00401830 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401831 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401833 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00401835 push 0x61d4af */ { u32 v_ = 0x61d4afu; esp -= 4; M32(esp) = v_; }
  /* 0040183a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00401840 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401841 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00401848 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401849 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0040184a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040184b mov esi, ecx */ { esi = (u32)(ecx); }
  /* 0040184d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040184e mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00401851 mov dword ptr [ebp - 4], 5 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x5u); }
  /* 00401858 mov eax, dword ptr [esi + 0x1174] */ { const u32 m_ = (u32)(esi + 0x1174u); eax = (u32)(M32(m_)); }
  /* 0040185e xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00401860 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401862 je 0x401882 */ if (ZF_) goto L_00401882;
  /* 00401864 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00401867 mov edi, dword ptr [esi + 0x1178] */ { const u32 m_ = (u32)(esi + 0x1178u); edi = (u32)(M32(m_)); }
  /* 0040186d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040186e call 0x403f60 */ esp -= 4; M32(esp) = 0x401873u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x40186eu); RETCHK(0x401873u, 0x40186eu); LOADALL;
  /* 00401873 mov eax, dword ptr [esi + 0x1174] */ { const u32 m_ = (u32)(esi + 0x1174u); eax = (u32)(M32(m_)); }
  /* 00401879 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040187a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x40187fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40187au); RETCHK(0x40187fu, 0x40187au); LOADALL;
  /* 0040187f add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401882:;
  /* 00401882 mov dword ptr [esi + 0x1174], ebx */ { const u32 m_ = (u32)(esi + 0x1174u); M32(m_) = (u32)(ebx); }
  /* 00401888 mov dword ptr [esi + 0x1178], ebx */ { const u32 m_ = (u32)(esi + 0x1178u); M32(m_) = (u32)(ebx); }
  /* 0040188e mov dword ptr [esi + 0x117c], ebx */ { const u32 m_ = (u32)(esi + 0x117cu); M32(m_) = (u32)(ebx); }
  /* 00401894 cmp dword ptr [esi + 0x1168], 0x10 */ { const u32 m_ = (u32)(esi + 0x1168u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040189b jb 0x4018ac */ if (CF_) goto L_004018ac;
  /* 0040189d mov eax, dword ptr [esi + 0x1154] */ { const u32 m_ = (u32)(esi + 0x1154u); eax = (u32)(M32(m_)); }
  /* 004018a3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004018a4 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4018a9u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4018a4u); RETCHK(0x4018a9u, 0x4018a4u); LOADALL;
  /* 004018a9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004018ac:;
  /* 004018ac push 0x4017d0 */ { u32 v_ = 0x4017d0u; esp -= 4; M32(esp) = v_; }
  /* 004018b1 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 004018b3 push 0x68 */ { u32 v_ = 0x68u; esp -= 4; M32(esp) = v_; }
  /* 004018b5 lea edx, [esi + 0xe08] */ edx = (u32)((u32)(esi + 0xe08u));
  /* 004018bb mov edi, 0xf */ { edi = (u32)(0xfu); }
  /* 004018c0 mov dword ptr [esi + 0x1168], edi */ { const u32 m_ = (u32)(esi + 0x1168u); M32(m_) = (u32)(edi); }
  /* 004018c6 mov dword ptr [esi + 0x1164], ebx */ { const u32 m_ = (u32)(esi + 0x1164u); M32(m_) = (u32)(ebx); }
  /* 004018cc push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004018cd mov byte ptr [esi + 0x1154], bl */ { const u32 m_ = (u32)(esi + 0x1154u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 004018d3 call 0x5fe890 */ esp -= 4; M32(esp) = 0x4018d8u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x4018d3u); RETCHK(0x4018d8u, 0x4018d3u); LOADALL;
  /* 004018d8 cmp dword ptr [esi + 0xe04], 0x10 */ { const u32 m_ = (u32)(esi + 0xe04u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004018df jb 0x4018f0 */ if (CF_) goto L_004018f0;
  /* 004018e1 mov eax, dword ptr [esi + 0xdf0] */ { const u32 m_ = (u32)(esi + 0xdf0u); eax = (u32)(M32(m_)); }
  /* 004018e7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004018e8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4018edu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4018e8u); RETCHK(0x4018edu, 0x4018e8u); LOADALL;
  /* 004018ed add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004018f0:;
  /* 004018f0 push 0x403260 */ { u32 v_ = 0x403260u; esp -= 4; M32(esp) = v_; }
  /* 004018f5 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 004018f7 push 0x10 */ { u32 v_ = 0x10u; esp -= 4; M32(esp) = v_; }
  /* 004018f9 lea eax, [esi + 0xd58] */ eax = (u32)((u32)(esi + 0xd58u));
  /* 004018ff mov dword ptr [esi + 0xe04], edi */ { const u32 m_ = (u32)(esi + 0xe04u); M32(m_) = (u32)(edi); }
  /* 00401905 mov dword ptr [esi + 0xe00], ebx */ { const u32 m_ = (u32)(esi + 0xe00u); M32(m_) = (u32)(ebx); }
  /* 0040190b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040190c mov byte ptr [esi + 0xdf0], bl */ { const u32 m_ = (u32)(esi + 0xdf0u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401912 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00401916 call 0x5fe890 */ esp -= 4; M32(esp) = 0x40191bu; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x401916u); RETCHK(0x40191bu, 0x401916u); LOADALL;
  /* 0040191b push 0x401760 */ { u32 v_ = 0x401760u; esp -= 4; M32(esp) = v_; }
  /* 00401920 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00401922 push 0x14 */ { u32 v_ = 0x14u; esp -= 4; M32(esp) = v_; }
  /* 00401924 lea ecx, [esi + 0xccc] */ ecx = (u32)((u32)(esi + 0xcccu));
  /* 0040192a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040192b mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 0040192f call 0x5fe890 */ esp -= 4; M32(esp) = 0x401934u; SAVEALL; F_005fe890(c); ABI_CHECK(0x5fe890u, 0x40192fu); RETCHK(0x401934u, 0x40192fu); LOADALL;
  /* 00401934 mov eax, dword ptr [esi + 0xc24] */ { const u32 m_ = (u32)(esi + 0xc24u); eax = (u32)(M32(m_)); }
  /* 0040193a cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040193c je 0x401947 */ if (ZF_) goto L_00401947;
  /* 0040193e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040193f call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401944u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40193fu); RETCHK(0x401944u, 0x40193fu); LOADALL;
  /* 00401944 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401947:;
  /* 00401947 mov dword ptr [esi + 0xc24], ebx */ { const u32 m_ = (u32)(esi + 0xc24u); M32(m_) = (u32)(ebx); }
  /* 0040194d mov dword ptr [esi + 0xc28], ebx */ { const u32 m_ = (u32)(esi + 0xc28u); M32(m_) = (u32)(ebx); }
  /* 00401953 mov dword ptr [esi + 0xc2c], ebx */ { const u32 m_ = (u32)(esi + 0xc2cu); M32(m_) = (u32)(ebx); }
  /* 00401959 mov eax, dword ptr [esi + 0x48] */ { const u32 m_ = (u32)(esi + 0x48u); eax = (u32)(M32(m_)); }
  /* 0040195c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040195e je 0x401969 */ if (ZF_) goto L_00401969;
  /* 00401960 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401961 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401966u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401961u); RETCHK(0x401966u, 0x401961u); LOADALL;
  /* 00401966 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401969:;
  /* 00401969 mov dword ptr [esi + 0x48], ebx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 0040196c mov dword ptr [esi + 0x4c], ebx */ { const u32 m_ = (u32)(esi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 0040196f mov dword ptr [esi + 0x50], ebx */ { const u32 m_ = (u32)(esi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00401972 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00401975 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401977 je 0x401982 */ if (ZF_) goto L_00401982;
  /* 00401979 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040197a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x40197fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40197au); RETCHK(0x40197fu, 0x40197au); LOADALL;
  /* 0040197f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401982:;
  /* 00401982 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00401985 mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00401988 mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0040198b mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 0040198e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040198f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401990 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401991 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00401998 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040199a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040199b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004019a0(CPU *c) {
  NATIVE_HOOK(0x4019a0u) REGS; LOADALL;
L_004019a0:;
  /* 004019a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004019a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004019a3 mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004019a9 mov cl, byte ptr [0x9bd580] */ { const u32 m_ = (u32)(0x9bd580u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004019af push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004019b1 push 0x61fd1e */ { u32 v_ = 0x61fd1eu; esp -= 4; M32(esp) = v_; }
  /* 004019b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004019b7 mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 004019bc test al, cl */ { u32 a_ = (eax & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004019be mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004019c5 jne 0x4019fc */ if (!ZF_) goto L_004019fc;
  /* 004019c7 or dword ptr [0x9bd580], eax */ { const u32 m_ = (u32)(0x9bd580u); u32 a_ = M32(m_), b_ = eax; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); M32(m_) = (u32)(r_); }
  /* 004019cd push 0x401830 */ { u32 v_ = 0x401830u; esp -= 4; M32(esp) = v_; }
  /* 004019d2 push 0x401550 */ { u32 v_ = 0x401550u; esp -= 4; M32(esp) = v_; }
  /* 004019d7 push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 004019d9 push 0x1180 */ { u32 v_ = 0x1180u; esp -= 4; M32(esp) = v_; }
  /* 004019de push 0x9bb280 */ { u32 v_ = 0x9bb280u; esp -= 4; M32(esp) = v_; }
  /* 004019e3 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004019ea call 0x5fe7d0 */ esp -= 4; M32(esp) = 0x4019efu; SAVEALL; F_005fe7d0(c); ABI_CHECK(0x5fe7d0u, 0x4019eau); RETCHK(0x4019efu, 0x4019eau); LOADALL;
  /* 004019ef push 0x62bf60 */ { u32 v_ = 0x62bf60u; esp -= 4; M32(esp) = v_; }
  /* 004019f4 call 0x5fe916 */ esp -= 4; M32(esp) = 0x4019f9u; SAVEALL; F_005fe916(c); ABI_CHECK(0x5fe916u, 0x4019f4u); RETCHK(0x4019f9u, 0x4019f4u); LOADALL;
  /* 004019f9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004019fc:;
  /* 004019fc mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004019ff mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00401a02 imul eax, eax, 0x1180 */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x1180u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00401a08 add eax, 0x9bb280 */ { u32 a_ = eax, b_ = 0x9bb280u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00401a0d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00401a14 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401a16 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401a17 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401a20(CPU *c) {
  NATIVE_HOOK(0x401a20u) REGS; LOADALL;
L_00401a20:;
  /* 00401a20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401a21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401a23 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00401a25 push 0x62685e */ { u32 v_ = 0x62685eu; esp -= 4; M32(esp) = v_; }
  /* 00401a2a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00401a30 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401a31 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00401a38 sub esp, 0x628 */ { u32 a_ = esp, b_ = 0x628u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401a3e mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00401a43 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401a44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401a45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401a46 mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00401a49 lea eax, [ebp - 0x430] */ eax = (u32)((u32)(ebp + 0xfffffbd0u));
  /* 00401a4f push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401a50 push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00401a55 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00401a57 call dword ptr [0x62e1bc] */ { const u32 m_ = (u32)(0x62e1bcu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x401a5du; SAVEALL; call_ind(c, t_); RETCHK(0x401a5du, 0x401a57u); LOADALL; }
  /* 00401a5d lea ecx, [ebp - 0x430] */ ecx = (u32)((u32)(ebp + 0xfffffbd0u));
  /* 00401a63 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401a64 push 0x63e7c8 */ { u32 v_ = 0x63e7c8u; esp -= 4; M32(esp) = v_; }
  /* 00401a69 lea edx, [ebp - 0x230] */ edx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00401a6f push 0x200 */ { u32 v_ = 0x200u; esp -= 4; M32(esp) = v_; }
  /* 00401a74 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00401a75 call 0x5fe928 */ esp -= 4; M32(esp) = 0x401a7au; SAVEALL; F_005fe928(c); ABI_CHECK(0x5fe928u, 0x401a75u); RETCHK(0x401a7au, 0x401a75u); LOADALL;
  /* 00401a7a mov esi, dword ptr [0x62e1b8] */ { const u32 m_ = (u32)(0x62e1b8u); esi = (u32)(M32(m_)); }
  /* 00401a80 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401a83 lea eax, [ebp - 0x230] */ eax = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00401a89 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401a8a push 0x100 */ { u32 v_ = 0x100u; esp -= 4; M32(esp) = v_; }
  /* 00401a8f lea ecx, [ebp - 0x630] */ ecx = (u32)((u32)(ebp + 0xfffff9d0u));
  /* 00401a95 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401a96 push 0x63e7b8 */ { u32 v_ = 0x63e7b8u; esp -= 4; M32(esp) = v_; }
  /* 00401a9b push 0x63e7a4 */ { u32 v_ = 0x63e7a4u; esp -= 4; M32(esp) = v_; }
  /* 00401aa0 push 0x63e79c */ { u32 v_ = 0x63e79cu; esp -= 4; M32(esp) = v_; }
  /* 00401aa5 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x401aa7u; SAVEALL; call_ind(c, t_); RETCHK(0x401aa7u, 0x401aa5u); LOADALL; }
  /* 00401aa7 lea edx, [ebp - 0x230] */ edx = (u32)((u32)(ebp + 0xfffffdd0u));
  /* 00401aad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00401aae push 0x20 */ { u32 v_ = 0x20u; esp -= 4; M32(esp) = v_; }
  /* 00401ab0 lea eax, [ebp - 0x30] */ eax = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00401ab3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401ab4 push 0x63e794 */ { u32 v_ = 0x63e794u; esp -= 4; M32(esp) = v_; }
  /* 00401ab9 push 0x63e780 */ { u32 v_ = 0x63e780u; esp -= 4; M32(esp) = v_; }
  /* 00401abe push 0x63e79c */ { u32 v_ = 0x63e79cu; esp -= 4; M32(esp) = v_; }
  /* 00401ac3 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x401ac5u; SAVEALL; call_ind(c, t_); RETCHK(0x401ac5u, 0x401ac3u); LOADALL; }
  /* 00401ac5 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00401ac8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401ac9 call 0x5fe92e */ esp -= 4; M32(esp) = 0x401aceu; SAVEALL; F_005fe92e(c); ABI_CHECK(0x5fe92eu, 0x401ac9u); RETCHK(0x401aceu, 0x401ac9u); LOADALL;
  /* 00401ace mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401ad4 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00401ad6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401ad9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401adb mov byte ptr [edi + 0xde8], 1 */ { const u32 m_ = (u32)(edi + 0xde8u); M8(m_) = (u8)(0x1u); }
  /* 00401ae2 je 0x401af0 */ if (ZF_) goto L_00401af0;
  /* 00401ae4 call 0x401dc0 */ esp -= 4; M32(esp) = 0x401ae9u; SAVEALL; F_00401dc0(c); ABI_CHECK(0x401dc0u, 0x401ae4u); RETCHK(0x401ae9u, 0x401ae4u); LOADALL;
  /* 00401ae9 mov esi, edi */ { esi = (u32)(edi); }
  /* 00401aeb call 0x401e10 */ esp -= 4; M32(esp) = 0x401af0u; SAVEALL; F_00401e10(c); ABI_CHECK(0x401e10u, 0x401aebu); RETCHK(0x401af0u, 0x401aebu); LOADALL;
L_00401af0:;
  /* 00401af0 push 0x18c */ { u32 v_ = 0x18cu; esp -= 4; M32(esp) = v_; }
  /* 00401af5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x401afau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x401af5u); RETCHK(0x401afau, 0x401af5u); LOADALL;
  /* 00401afa add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401afd mov dword ptr [ebp - 0x634], eax */ { const u32 m_ = (u32)(ebp + 0xfffff9ccu); M32(m_) = (u32)(eax); }
  /* 00401b03 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401b05 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00401b08 je 0x401b12 */ if (ZF_) goto L_00401b12;
  /* 00401b0a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401b0b call 0x55e4b0 */ esp -= 4; M32(esp) = 0x401b10u; SAVEALL; F_0055e4b0(c); ABI_CHECK(0x55e4b0u, 0x401b0bu); RETCHK(0x401b10u, 0x401b0bu); LOADALL;
  /* 00401b10 jmp 0x401b14 */ goto L_00401b14;
L_00401b12:;
  /* 00401b12 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401b14:;
  /* 00401b14 push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 00401b16 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00401b1d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401b1e mov esi, 0x640c78 */ { esi = (u32)(0x640c78u); }
  /* 00401b23 mov dword ptr [edi + 0xc38], eax */ { const u32 m_ = (u32)(edi + 0xc38u); M32(m_) = (u32)(eax); }
  /* 00401b29 call 0x55f5a0 */ esp -= 4; M32(esp) = 0x401b2eu; SAVEALL; F_0055f5a0(c); ABI_CHECK(0x55f5a0u, 0x401b29u); RETCHK(0x401b2eu, 0x401b29u); LOADALL;
  /* 00401b2e push 0x63e774 */ { u32 v_ = 0x63e774u; esp -= 4; M32(esp) = v_; }
  /* 00401b33 push 0x9b883c */ { u32 v_ = 0x9b883cu; esp -= 4; M32(esp) = v_; }
  /* 00401b38 call 0x564640 */ esp -= 4; M32(esp) = 0x401b3du; SAVEALL; F_00564640(c); ABI_CHECK(0x564640u, 0x401b38u); RETCHK(0x401b3du, 0x401b38u); LOADALL;
  /* 00401b3d mov edx, 0x459c10 */ { edx = (u32)(0x459c10u); }
  /* 00401b42 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401b44 mov dword ptr [0x9b8854], 0x459c10 */ { const u32 m_ = (u32)(0x9b8854u); M32(m_) = (u32)(0x459c10u); }
  /* 00401b4e je 0x401b55 */ if (ZF_) goto L_00401b55;
  /* 00401b50 call 0x459c10 */ esp -= 4; M32(esp) = 0x401b55u; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x401b50u); RETCHK(0x401b55u, 0x401b50u); LOADALL;
L_00401b55:;
  /* 00401b55 push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00401b57 call 0x5fe934 */ esp -= 4; M32(esp) = 0x401b5cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x401b57u); RETCHK(0x401b5cu, 0x401b57u); LOADALL;
  /* 00401b5c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401b5f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401b61 je 0x401b6a */ if (ZF_) goto L_00401b6a;
  /* 00401b63 call 0x404850 */ esp -= 4; M32(esp) = 0x401b68u; SAVEALL; F_00404850(c); ABI_CHECK(0x404850u, 0x401b63u); RETCHK(0x401b68u, 0x401b63u); LOADALL;
  /* 00401b68 jmp 0x401b6c */ goto L_00401b6c;
L_00401b6a:;
  /* 00401b6a xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401b6c:;
  /* 00401b6c mov ecx, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00401b72 mov dword ptr [edi + 0xc44], eax */ { const u32 m_ = (u32)(edi + 0xc44u); M32(m_) = (u32)(eax); }
  /* 00401b78 call 0x55eb20 */ esp -= 4; M32(esp) = 0x401b7du; SAVEALL; F_0055eb20(c); ABI_CHECK(0x55eb20u, 0x401b78u); RETCHK(0x401b7du, 0x401b78u); LOADALL;
  /* 00401b7d mov eax, dword ptr [edi + 0xc44] */ { const u32 m_ = (u32)(edi + 0xc44u); eax = (u32)(M32(m_)); }
  /* 00401b83 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401b85 je 0x401b8c */ if (ZF_) goto L_00401b8c;
  /* 00401b87 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00401b8a jmp 0x401b8e */ goto L_00401b8e;
L_00401b8c:;
  /* 00401b8c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401b8e:;
  /* 00401b8e mov ecx, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00401b94 call 0x55eb10 */ esp -= 4; M32(esp) = 0x401b99u; SAVEALL; F_0055eb10(c); ABI_CHECK(0x55eb10u, 0x401b94u); RETCHK(0x401b99u, 0x401b94u); LOADALL;
  /* 00401b99 lea eax, [edi + 0xc48] */ eax = (u32)((u32)(edi + 0xc48u));
  /* 00401b9f call 0x55f4a0 */ esp -= 4; M32(esp) = 0x401ba4u; SAVEALL; F_0055f4a0(c); ABI_CHECK(0x55f4a0u, 0x401b9fu); RETCHK(0x401ba4u, 0x401b9fu); LOADALL;
  /* 00401ba4 mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 00401ba7 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401ba9 je 0x401bb4 */ if (ZF_) goto L_00401bb4;
  /* 00401bab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401bac call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401bb1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401bacu); RETCHK(0x401bb1u, 0x401bacu); LOADALL;
  /* 00401bb1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401bb4:;
  /* 00401bb4 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00401bb7 push 0x80 */ { u32 v_ = 0x80u; esp -= 4; M32(esp) = v_; }
  /* 00401bbc lea eax, [edi + 0xc4c] */ eax = (u32)((u32)(edi + 0xc4cu));
  /* 00401bc2 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401bc3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401bc4 mov dword ptr [edi + 0x48], ebx */ { const u32 m_ = (u32)(edi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 00401bc7 mov dword ptr [edi + 0x4c], ebx */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 00401bca mov dword ptr [edi + 0x50], ebx */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00401bcd call 0x5fe7ca */ esp -= 4; M32(esp) = 0x401bd2u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x401bcdu); RETCHK(0x401bd2u, 0x401bcdu); LOADALL;
  /* 00401bd2 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00401bd5 mov edx, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); edx = (u32)(M32(m_)); }
  /* 00401bdb add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401bde push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401bdf push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401be0 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00401be3 mov byte ptr [edi + 0xccb], bl */ { const u32 m_ = (u32)(edi + 0xccbu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401be9 call 0x55eb50 */ esp -= 4; M32(esp) = 0x401beeu; SAVEALL; F_0055eb50(c); ABI_CHECK(0x55eb50u, 0x401be9u); RETCHK(0x401beeu, 0x401be9u); LOADALL;
  /* 00401bee mov esi, eax */ { esi = (u32)(eax); }
  /* 00401bf0 cmp esi, 0xc351 */ { u32 a_ = esi, b_ = 0xc351u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401bf6 je 0x401c23 */ if (ZF_) goto L_00401c23;
  /* 00401bf8 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401bfe cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401c00 mov dword ptr [ebp - 0x634], eax */ { const u32 m_ = (u32)(ebp + 0xfffff9ccu); M32(m_) = (u32)(eax); }
  /* 00401c06 je 0x401c1d */ if (ZF_) goto L_00401c1d;
  /* 00401c08 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401c09 call 0x55e6f0 */ esp -= 4; M32(esp) = 0x401c0eu; SAVEALL; F_0055e6f0(c); ABI_CHECK(0x55e6f0u, 0x401c09u); RETCHK(0x401c0eu, 0x401c09u); LOADALL;
  /* 00401c0e mov edx, dword ptr [ebp - 0x634] */ { const u32 m_ = (u32)(ebp + 0xfffff9ccu); edx = (u32)(M32(m_)); }
  /* 00401c14 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00401c15 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401c1au; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401c15u); RETCHK(0x401c1au, 0x401c15u); LOADALL;
  /* 00401c1a add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401c1d:;
  /* 00401c1d mov dword ptr [edi + 0xc38], ebx */ { const u32 m_ = (u32)(edi + 0xc38u); M32(m_) = (u32)(ebx); }
L_00401c23:;
  /* 00401c23 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00401c26 mov byte ptr [edi + 0xc18], bl */ { const u32 m_ = (u32)(edi + 0xc18u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401c2c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401c2d mov eax, esi */ { eax = (u32)(esi); }
  /* 00401c2f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401c30 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00401c37 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00401c3a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401c3b call 0x61af31 */ esp -= 4; M32(esp) = 0x401c40u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x401c3bu); RETCHK(0x401c40u, 0x401c3bu); LOADALL;
  /* 00401c40 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401c42 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401c43 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00401c50(CPU *c) {
  NATIVE_HOOK(0x401c50u) REGS; LOADALL;
L_00401c50:;
  /* 00401c50 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401c51 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401c53 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00401c55 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 00401c5a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00401c60 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401c61 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00401c68 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401c69 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401c6a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401c6b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401c6c mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00401c6e mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401c74 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00401c76 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401c78 mov byte ptr [edi + 0xde8], 1 */ { const u32 m_ = (u32)(edi + 0xde8u); M8(m_) = (u8)(0x1u); }
  /* 00401c7f je 0x401c8d */ if (ZF_) goto L_00401c8d;
  /* 00401c81 call 0x401dc0 */ esp -= 4; M32(esp) = 0x401c86u; SAVEALL; F_00401dc0(c); ABI_CHECK(0x401dc0u, 0x401c81u); RETCHK(0x401c86u, 0x401c81u); LOADALL;
  /* 00401c86 mov esi, edi */ { esi = (u32)(edi); }
  /* 00401c88 call 0x401e10 */ esp -= 4; M32(esp) = 0x401c8du; SAVEALL; F_00401e10(c); ABI_CHECK(0x401e10u, 0x401c88u); RETCHK(0x401c8du, 0x401c88u); LOADALL;
L_00401c8d:;
  /* 00401c8d push 0x18c */ { u32 v_ = 0x18cu; esp -= 4; M32(esp) = v_; }
  /* 00401c92 call 0x5fe934 */ esp -= 4; M32(esp) = 0x401c97u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x401c92u); RETCHK(0x401c97u, 0x401c92u); LOADALL;
  /* 00401c97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401c9a mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00401c9d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401c9f mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00401ca2 je 0x401cac */ if (ZF_) goto L_00401cac;
  /* 00401ca4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401ca5 call 0x55e4b0 */ esp -= 4; M32(esp) = 0x401caau; SAVEALL; F_0055e4b0(c); ABI_CHECK(0x55e4b0u, 0x401ca5u); RETCHK(0x401caau, 0x401ca5u); LOADALL;
  /* 00401caa jmp 0x401cae */ goto L_00401cae;
L_00401cac:;
  /* 00401cac xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401cae:;
  /* 00401cae push 0x16 */ { u32 v_ = 0x16u; esp -= 4; M32(esp) = v_; }
  /* 00401cb0 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00401cb7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401cb8 mov esi, 0x640c78 */ { esi = (u32)(0x640c78u); }
  /* 00401cbd mov dword ptr [edi + 0xc38], eax */ { const u32 m_ = (u32)(edi + 0xc38u); M32(m_) = (u32)(eax); }
  /* 00401cc3 call 0x55f5a0 */ esp -= 4; M32(esp) = 0x401cc8u; SAVEALL; F_0055f5a0(c); ABI_CHECK(0x55f5a0u, 0x401cc3u); RETCHK(0x401cc8u, 0x401cc3u); LOADALL;
  /* 00401cc8 push 0x63e774 */ { u32 v_ = 0x63e774u; esp -= 4; M32(esp) = v_; }
  /* 00401ccd push 0x9b883c */ { u32 v_ = 0x9b883cu; esp -= 4; M32(esp) = v_; }
  /* 00401cd2 call 0x564640 */ esp -= 4; M32(esp) = 0x401cd7u; SAVEALL; F_00564640(c); ABI_CHECK(0x564640u, 0x401cd2u); RETCHK(0x401cd7u, 0x401cd2u); LOADALL;
  /* 00401cd7 mov eax, 0x459c10 */ { eax = (u32)(0x459c10u); }
  /* 00401cdc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401cde mov dword ptr [0x9b8854], 0x459c10 */ { const u32 m_ = (u32)(0x9b8854u); M32(m_) = (u32)(0x459c10u); }
  /* 00401ce8 je 0x401cef */ if (ZF_) goto L_00401cef;
  /* 00401cea call 0x459c10 */ esp -= 4; M32(esp) = 0x401cefu; SAVEALL; F_00459c10(c); ABI_CHECK(0x459c10u, 0x401ceau); RETCHK(0x401cefu, 0x401ceau); LOADALL;
L_00401cef:;
  /* 00401cef push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00401cf1 call 0x5fe934 */ esp -= 4; M32(esp) = 0x401cf6u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x401cf1u); RETCHK(0x401cf6u, 0x401cf1u); LOADALL;
  /* 00401cf6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401cf9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401cfb je 0x401d04 */ if (ZF_) goto L_00401d04;
  /* 00401cfd call 0x404850 */ esp -= 4; M32(esp) = 0x401d02u; SAVEALL; F_00404850(c); ABI_CHECK(0x404850u, 0x401cfdu); RETCHK(0x401d02u, 0x401cfdu); LOADALL;
  /* 00401d02 jmp 0x401d06 */ goto L_00401d06;
L_00401d04:;
  /* 00401d04 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401d06:;
  /* 00401d06 mov ecx, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00401d0c mov dword ptr [edi + 0xc44], eax */ { const u32 m_ = (u32)(edi + 0xc44u); M32(m_) = (u32)(eax); }
  /* 00401d12 call 0x55eb20 */ esp -= 4; M32(esp) = 0x401d17u; SAVEALL; F_0055eb20(c); ABI_CHECK(0x55eb20u, 0x401d12u); RETCHK(0x401d17u, 0x401d12u); LOADALL;
  /* 00401d17 mov eax, dword ptr [edi + 0xc44] */ { const u32 m_ = (u32)(edi + 0xc44u); eax = (u32)(M32(m_)); }
  /* 00401d1d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401d1f je 0x401d26 */ if (ZF_) goto L_00401d26;
  /* 00401d21 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00401d24 jmp 0x401d28 */ goto L_00401d28;
L_00401d26:;
  /* 00401d26 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401d28:;
  /* 00401d28 mov ecx, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00401d2e call 0x55eb10 */ esp -= 4; M32(esp) = 0x401d33u; SAVEALL; F_0055eb10(c); ABI_CHECK(0x55eb10u, 0x401d2eu); RETCHK(0x401d33u, 0x401d2eu); LOADALL;
  /* 00401d33 lea eax, [edi + 0xc48] */ eax = (u32)((u32)(edi + 0xc48u));
  /* 00401d39 call 0x55f4a0 */ esp -= 4; M32(esp) = 0x401d3eu; SAVEALL; F_0055f4a0(c); ABI_CHECK(0x55f4a0u, 0x401d39u); RETCHK(0x401d3eu, 0x401d39u); LOADALL;
  /* 00401d3e mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 00401d41 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401d43 je 0x401d4e */ if (ZF_) goto L_00401d4e;
  /* 00401d45 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401d46 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401d4bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401d46u); RETCHK(0x401d4bu, 0x401d46u); LOADALL;
  /* 00401d4b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401d4e:;
  /* 00401d4e mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00401d51 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00401d54 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401d55 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00401d58 mov dword ptr [edi + 0x48], ebx */ { const u32 m_ = (u32)(edi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 00401d5b mov dword ptr [edi + 0x4c], ebx */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 00401d5e mov dword ptr [edi + 0x50], ebx */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00401d61 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401d67 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00401d68 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00401d6b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401d6c call 0x55ed00 */ esp -= 4; M32(esp) = 0x401d71u; SAVEALL; F_0055ed00(c); ABI_CHECK(0x55ed00u, 0x401d6cu); RETCHK(0x401d71u, 0x401d6cu); LOADALL;
  /* 00401d71 mov esi, eax */ { esi = (u32)(eax); }
  /* 00401d73 cmp esi, 0xc351 */ { u32 a_ = esi, b_ = 0xc351u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401d79 je 0x401da0 */ if (ZF_) goto L_00401da0;
  /* 00401d7b mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401d81 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401d83 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 00401d86 je 0x401d9a */ if (ZF_) goto L_00401d9a;
  /* 00401d88 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401d89 call 0x55e6f0 */ esp -= 4; M32(esp) = 0x401d8eu; SAVEALL; F_0055e6f0(c); ABI_CHECK(0x55e6f0u, 0x401d89u); RETCHK(0x401d8eu, 0x401d89u); LOADALL;
  /* 00401d8e mov ecx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00401d91 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00401d92 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401d97u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401d92u); RETCHK(0x401d97u, 0x401d92u); LOADALL;
  /* 00401d97 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401d9a:;
  /* 00401d9a mov dword ptr [edi + 0xc38], ebx */ { const u32 m_ = (u32)(edi + 0xc38u); M32(m_) = (u32)(ebx); }
L_00401da0:;
  /* 00401da0 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00401da3 mov byte ptr [edi + 0xc18], bl */ { const u32 m_ = (u32)(edi + 0xc18u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401da9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401daa mov eax, esi */ { eax = (u32)(esi); }
  /* 00401dac pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401dad pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401dae mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00401db5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401db7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401db8 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00401dc0(CPU *c) {
  NATIVE_HOOK(0x401dc0u) REGS; LOADALL;
L_00401dc0:;
  /* 00401dc0 mov ecx, dword ptr [edi + 0xc3c] */ { const u32 m_ = (u32)(edi + 0xc3cu); ecx = (u32)(M32(m_)); }
  /* 00401dc6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401dc7 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00401dc9 cmp ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401dcb je 0x401de0 */ if (ZF_) goto L_00401de0;
  /* 00401dcd mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00401dcf push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401dd0 mov esi, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 00401dd6 call dword ptr [eax + 0x18] */ { const u32 m_ = (u32)(eax + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x401dd9u; SAVEALL; call_ind(c, t_); RETCHK(0x401dd9u, 0x401dd6u); LOADALL; }
  /* 00401dd9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401dda call 0x55ead0 */ esp -= 4; M32(esp) = 0x401ddfu; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x401ddau); RETCHK(0x401ddfu, 0x401ddau); LOADALL;
  /* 00401ddf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00401de0:;
  /* 00401de0 mov dword ptr [edi + 0xc3c], ebx */ { const u32 m_ = (u32)(edi + 0xc3cu); M32(m_) = (u32)(ebx); }
  /* 00401de6 mov eax, dword ptr [edi + 0x48] */ { const u32 m_ = (u32)(edi + 0x48u); eax = (u32)(M32(m_)); }
  /* 00401de9 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401deb je 0x401df6 */ if (ZF_) goto L_00401df6;
  /* 00401ded push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401dee call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401df3u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401deeu); RETCHK(0x401df3u, 0x401deeu); LOADALL;
  /* 00401df3 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401df6:;
  /* 00401df6 mov dword ptr [edi + 0x48], ebx */ { const u32 m_ = (u32)(edi + 0x48u); M32(m_) = (u32)(ebx); }
  /* 00401df9 mov dword ptr [edi + 0x4c], ebx */ { const u32 m_ = (u32)(edi + 0x4cu); M32(m_) = (u32)(ebx); }
  /* 00401dfc mov dword ptr [edi + 0x50], ebx */ { const u32 m_ = (u32)(edi + 0x50u); M32(m_) = (u32)(ebx); }
  /* 00401dff mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00401e01 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401e02 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401e10(CPU *c) {
  NATIVE_HOOK(0x401e10u) REGS; LOADALL;
L_00401e10:;
  /* 00401e10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401e11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401e13 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401e16 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401e17 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401e18 mov eax, esi */ { eax = (u32)(esi); }
  /* 00401e1a call 0x402070 */ esp -= 4; M32(esp) = 0x401e1fu; SAVEALL; F_00402070(c); ABI_CHECK(0x402070u, 0x401e1au); RETCHK(0x401e1fu, 0x401e1au); LOADALL;
  /* 00401e1f mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401e25 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00401e27 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401e29 mov dword ptr [ebp - 0x10], 0x100000b1 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x100000b1u); }
  /* 00401e30 mov dword ptr [ebp - 0xc], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(ebx); }
  /* 00401e33 mov dword ptr [ebp - 8], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ebx); }
  /* 00401e36 mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00401e39 je 0x401e49 */ if (ZF_) goto L_00401e49;
  /* 00401e3b lea eax, [ebp - 0x10] */ eax = (u32)((u32)(ebp + 0xfffffff0u));
  /* 00401e3e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401e3f mov edx, 0x10 */ { edx = (u32)(0x10u); }
  /* 00401e44 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x401e49u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x401e44u); RETCHK(0x401e49u, 0x401e44u); LOADALL;
L_00401e49:;
  /* 00401e49 mov eax, dword ptr [esi + 0xc44] */ { const u32 m_ = (u32)(esi + 0xc44u); eax = (u32)(M32(m_)); }
  /* 00401e4f cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401e51 je 0x401e67 */ if (ZF_) goto L_00401e67;
  /* 00401e53 call 0x404870 */ esp -= 4; M32(esp) = 0x401e58u; SAVEALL; F_00404870(c); ABI_CHECK(0x404870u, 0x401e53u); RETCHK(0x401e58u, 0x401e53u); LOADALL;
  /* 00401e58 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401e59 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401e5eu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401e59u); RETCHK(0x401e5eu, 0x401e59u); LOADALL;
  /* 00401e5e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00401e61 mov dword ptr [esi + 0xc44], ebx */ { const u32 m_ = (u32)(esi + 0xc44u); M32(m_) = (u32)(ebx); }
L_00401e67:;
  /* 00401e67 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401e6d cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401e6f je 0x401e95 */ if (ZF_) goto L_00401e95;
  /* 00401e71 call 0x55f310 */ esp -= 4; M32(esp) = 0x401e76u; SAVEALL; F_0055f310(c); ABI_CHECK(0x55f310u, 0x401e71u); RETCHK(0x401e76u, 0x401e71u); LOADALL;
  /* 00401e76 mov edi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); edi = (u32)(M32(m_)); }
  /* 00401e7c cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00401e7e je 0x401e8f */ if (ZF_) goto L_00401e8f;
  /* 00401e80 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401e81 call 0x55e6f0 */ esp -= 4; M32(esp) = 0x401e86u; SAVEALL; F_0055e6f0(c); ABI_CHECK(0x55e6f0u, 0x401e81u); RETCHK(0x401e86u, 0x401e81u); LOADALL;
  /* 00401e86 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00401e87 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x401e8cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x401e87u); RETCHK(0x401e8cu, 0x401e87u); LOADALL;
  /* 00401e8c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00401e8f:;
  /* 00401e8f mov dword ptr [esi + 0xc38], ebx */ { const u32 m_ = (u32)(esi + 0xc38u); M32(m_) = (u32)(ebx); }
L_00401e95:;
  /* 00401e95 or edi, 0xffffffff */ { u32 a_ = edi, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00401e98 mov eax, esi */ { eax = (u32)(esi); }
  /* 00401e9a mov dword ptr [esi + 0xc38], ebx */ { const u32 m_ = (u32)(esi + 0xc38u); M32(m_) = (u32)(ebx); }
  /* 00401ea0 mov dword ptr [esi + 0xc3c], ebx */ { const u32 m_ = (u32)(esi + 0xc3cu); M32(m_) = (u32)(ebx); }
  /* 00401ea6 mov dword ptr [esi + 0xc40], edi */ { const u32 m_ = (u32)(esi + 0xc40u); M32(m_) = (u32)(edi); }
  /* 00401eac mov dword ptr [esi + 0xb10], edi */ { const u32 m_ = (u32)(esi + 0xb10u); M32(m_) = (u32)(edi); }
  /* 00401eb2 mov dword ptr [esi + 0xb14], edi */ { const u32 m_ = (u32)(esi + 0xb14u); M32(m_) = (u32)(edi); }
  /* 00401eb8 mov dword ptr [esi + 0xc1c], ebx */ { const u32 m_ = (u32)(esi + 0xc1cu); M32(m_) = (u32)(ebx); }
  /* 00401ebe mov byte ptr [esi + 0xde8], 1 */ { const u32 m_ = (u32)(esi + 0xde8u); M8(m_) = (u8)(0x1u); }
  /* 00401ec5 call 0x402d90 */ esp -= 4; M32(esp) = 0x401ecau; SAVEALL; F_00402d90(c); ABI_CHECK(0x402d90u, 0x401ec5u); RETCHK(0x401ecau, 0x401ec5u); LOADALL;
  /* 00401eca mov dword ptr [esi + 0xb18], edi */ { const u32 m_ = (u32)(esi + 0xb18u); M32(m_) = (u32)(edi); }
  /* 00401ed0 mov dword ptr [esi + 0xb1c], edi */ { const u32 m_ = (u32)(esi + 0xb1cu); M32(m_) = (u32)(edi); }
  /* 00401ed6 mov dword ptr [esi + 0xb24], edi */ { const u32 m_ = (u32)(esi + 0xb24u); M32(m_) = (u32)(edi); }
  /* 00401edc mov dword ptr [esi + 0xb2c], ebx */ { const u32 m_ = (u32)(esi + 0xb2cu); M32(m_) = (u32)(ebx); }
  /* 00401ee2 mov dword ptr [esi + 0xc14], ebx */ { const u32 m_ = (u32)(esi + 0xc14u); M32(m_) = (u32)(ebx); }
  /* 00401ee8 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00401eea lea edx, [esi + 0xb94] */ edx = (u32)((u32)(esi + 0xb94u));
  /* 00401ef0 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00401ef2 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00401ef5 mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00401ef8 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00401efb mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00401efe lea eax, [esi + 0xb34] */ eax = (u32)((u32)(esi + 0xb34u));
  /* 00401f04 mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00401f06 mov dword ptr [eax + 4], edi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edi); }
  /* 00401f09 mov dword ptr [eax + 8], edi */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edi); }
  /* 00401f0c mov dword ptr [eax + 0xc], edi */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edi); }
  /* 00401f0f mov dword ptr [eax + 0x10], edi */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edi); }
  /* 00401f12 mov dword ptr [eax + 0x14], edi */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edi); }
  /* 00401f15 mov dword ptr [eax + 0x18], edi */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edi); }
  /* 00401f18 mov dword ptr [eax + 0x1c], edi */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(edi); }
  /* 00401f1b mov byte ptr [esi + 0xc18], bl */ { const u32 m_ = (u32)(esi + 0xc18u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401f21 mov byte ptr [esi + 0xc19], bl */ { const u32 m_ = (u32)(esi + 0xc19u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401f27 mov byte ptr [esi + 0xc1a], bl */ { const u32 m_ = (u32)(esi + 0xc1au); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00401f2d mov dword ptr [esi + 0xde4], ebx */ { const u32 m_ = (u32)(esi + 0xde4u); M32(m_) = (u32)(ebx); }
  /* 00401f33 lea edx, [esi + 0xdc8] */ edx = (u32)((u32)(esi + 0xdc8u));
  /* 00401f39 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 00401f3b mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00401f3e mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00401f41 mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00401f44 mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00401f47 mov dword ptr [edx + 0x14], ecx */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00401f4a mov dword ptr [edx + 0x18], ecx */ { const u32 m_ = (u32)(edx + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00401f4d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00401f4e mov dword ptr [esi + 0x1148], ebx */ { const u32 m_ = (u32)(esi + 0x1148u); M32(m_) = (u32)(ebx); }
  /* 00401f54 mov word ptr [esi + 0x10], bx */ { const u32 m_ = (u32)(esi + 0x10u); M16(m_) = (u16)((ebx & 0xffffu)); }
  /* 00401f58 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00401f5a pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00401f5b mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00401f5d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00401f5e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00401f60(CPU *c) {
  NATIVE_HOOK(0x401f60u) REGS; LOADALL;
L_00401f60:;
  /* 00401f60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00401f61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00401f63 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401f69 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401f6b je 0x401fff */ if (ZF_) goto L_00401fff;
  /* 00401f71 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00401f77 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401f79 je 0x401f84 */ if (ZF_) goto L_00401f84;
  /* 00401f7b mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00401f7d mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00401f7f call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x401f82u; SAVEALL; call_ind(c, t_); RETCHK(0x401f82u, 0x401f7fu); LOADALL; }
  /* 00401f82 jmp 0x401f87 */ goto L_00401f87;
L_00401f84:;
  /* 00401f84 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00401f87:;
  /* 00401f87 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401f88 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00401f89 mov esi, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 00401f8f test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401f91 je 0x401fab */ if (ZF_) goto L_00401fab;
  /* 00401f93 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00401f94 call 0x55ead0 */ esp -= 4; M32(esp) = 0x401f99u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x401f94u); RETCHK(0x401f99u, 0x401f94u); LOADALL;
  /* 00401f99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401f9b je 0x401fab */ if (ZF_) goto L_00401fab;
  /* 00401f9d mov al, byte ptr [eax + 0xd08] */ { const u32 m_ = (u32)(eax + 0xd08u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00401fa3 and al, 1 */ { u32 a_ = (eax & 0xffu), b_ = 0x1u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00401fa5 mov byte ptr [edi + 0xde8], al */ { const u32 m_ = (u32)(edi + 0xde8u); M8(m_) = (u8)((eax & 0xffu)); }
L_00401fab:;
  /* 00401fab mov esi, dword ptr [edi + 0xc30] */ { const u32 m_ = (u32)(edi + 0xc30u); esi = (u32)(M32(m_)); }
  /* 00401fb1 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401fb3 je 0x401fdb */ if (ZF_) goto L_00401fdb;
  /* 00401fb5 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00401fb8 call 0x61b154 */ esp -= 4; M32(esp) = 0x401fbdu; SAVEALL; F_0061b154(c); ABI_CHECK(0x61b154u, 0x401fb8u); RETCHK(0x401fbdu, 0x401fb8u); LOADALL;
  /* 00401fbd mov ecx, dword ptr [edi + 0xc34] */ { const u32 m_ = (u32)(edi + 0xc34u); ecx = (u32)(M32(m_)); }
  /* 00401fc3 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00401fc5 cdq */ edx = (u32)((s32)eax >> 31);
  /* 00401fc6 mov ecx, 0x3e8 */ { ecx = (u32)(0x3e8u); }
  /* 00401fcb idiv ecx */ { u32 q_, r_; SAVEALL; rt_divs(c, edx, eax, ecx, &q_, &r_, 0x401fcbu); eax = q_; edx = r_; }
  /* 00401fcd add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00401fcf mov dword ptr [edi + 0xc30], esi */ { const u32 m_ = (u32)(edi + 0xc30u); M32(m_) = (u32)(esi); }
  /* 00401fd5 mov dword ptr [edi + 0xc34], edx */ { const u32 m_ = (u32)(edi + 0xc34u); M32(m_) = (u32)(edx); }
L_00401fdb:;
  /* 00401fdb mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00401fde push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401fdf mov esi, edi */ { esi = (u32)(edi); }
  /* 00401fe1 call 0x402740 */ esp -= 4; M32(esp) = 0x401fe6u; SAVEALL; F_00402740(c); ABI_CHECK(0x402740u, 0x401fe1u); RETCHK(0x401fe6u, 0x401fe1u); LOADALL;
  /* 00401fe6 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00401fe7 mov edx, edi */ { edx = (u32)(edi); }
  /* 00401fe9 call 0x402780 */ esp -= 4; M32(esp) = 0x401feeu; SAVEALL; F_00402780(c); ABI_CHECK(0x402780u, 0x401fe9u); RETCHK(0x401feeu, 0x401fe9u); LOADALL;
  /* 00401fee pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00401fef pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00401ff0:;
  /* 00401ff0 mov eax, dword ptr [edi + 0xc38] */ { const u32 m_ = (u32)(edi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00401ff6 call 0x55eb30 */ esp -= 4; M32(esp) = 0x401ffbu; SAVEALL; F_0055eb30(c); ABI_CHECK(0x55eb30u, 0x401ff6u); RETCHK(0x401ffbu, 0x401ff6u); LOADALL;
  /* 00401ffb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00401ffd jg 0x401ff0 */ if (!(ZF_|LT_)) goto L_00401ff0;
L_00401fff:;
  /* 00401fff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402000 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00402000(CPU *c) {
  NATIVE_HOOK(0x402000u) REGS; LOADALL;
L_00402000:;
  /* 00402000 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00402010(CPU *c) {
  NATIVE_HOOK(0x402010u) REGS; LOADALL;
L_00402010:;
  /* 00402010 mov dword ptr [ecx + 0xb10], eax */ { const u32 m_ = (u32)(ecx + 0xb10u); M32(m_) = (u32)(eax); }
  /* 00402016 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00402018 mov dword ptr [ecx + 0x14], edx */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(edx); }
  /* 0040201b mov dword ptr [ecx + 0x18], edx */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(edx); }
  /* 0040201e mov dword ptr [ecx + 0x1c], edx */ { const u32 m_ = (u32)(ecx + 0x1cu); M32(m_) = (u32)(edx); }
  /* 00402021 mov dword ptr [ecx + 0x20], edx */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(edx); }
  /* 00402024 mov dword ptr [ecx + 0x24], edx */ { const u32 m_ = (u32)(ecx + 0x24u); M32(m_) = (u32)(edx); }
  /* 00402027 mov dword ptr [ecx + 0x28], edx */ { const u32 m_ = (u32)(ecx + 0x28u); M32(m_) = (u32)(edx); }
  /* 0040202a mov dword ptr [ecx + 0x2c], edx */ { const u32 m_ = (u32)(ecx + 0x2cu); M32(m_) = (u32)(edx); }
  /* 0040202d mov dword ptr [ecx + 0x30], edx */ { const u32 m_ = (u32)(ecx + 0x30u); M32(m_) = (u32)(edx); }
  /* 00402030 mov dword ptr [ecx + 0x34], edx */ { const u32 m_ = (u32)(ecx + 0x34u); M32(m_) = (u32)(edx); }
  /* 00402033 mov dword ptr [ecx + 0x38], edx */ { const u32 m_ = (u32)(ecx + 0x38u); M32(m_) = (u32)(edx); }
  /* 00402036 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00402038 mov byte ptr [ecx + 0x3c], dl */ { const u32 m_ = (u32)(ecx + 0x3cu); M8(m_) = (u8)((edx & 0xffu)); }
  /* 0040203b mov byte ptr [ecx + 0x3d], al */ { const u32 m_ = (u32)(ecx + 0x3du); M8(m_) = (u8)((eax & 0xffu)); }
  /* 0040203e mov byte ptr [ecx + 0x3e], al */ { const u32 m_ = (u32)(ecx + 0x3eu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00402041 mov byte ptr [ecx + 0x3f], al */ { const u32 m_ = (u32)(ecx + 0x3fu); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00402044 mov byte ptr [ecx + 0x40], dl */ { const u32 m_ = (u32)(ecx + 0x40u); M8(m_) = (u8)((edx & 0xffu)); }
  /* 00402047 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402050(CPU *c) {
  NATIVE_HOOK(0x402050u) REGS; LOADALL;
L_00402050:;
  /* 00402050 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00402056 mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 0040205c mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0040205e call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x402061u; SAVEALL; call_ind(c, t_); RETCHK(0x402061u, 0x40205eu); LOADALL; }
  /* 00402061 mov dword ptr [esi + 0xc40], eax */ { const u32 m_ = (u32)(esi + 0xc40u); M32(m_) = (u32)(eax); }
  /* 00402067 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402070(CPU *c) {
  NATIVE_HOOK(0x402070u) REGS; LOADALL;
L_00402070:;
  /* 00402070 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402071 mov esi, eax */ { esi = (u32)(eax); }
  /* 00402073 call 0x402150 */ esp -= 4; M32(esp) = 0x402078u; SAVEALL; F_00402150(c); ABI_CHECK(0x402150u, 0x402073u); RETCHK(0x402078u, 0x402073u); LOADALL;
  /* 00402078 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402079 call 0x402540 */ esp -= 4; M32(esp) = 0x40207eu; SAVEALL; F_00402540(c); ABI_CHECK(0x402540u, 0x402079u); RETCHK(0x40207eu, 0x402079u); LOADALL;
  /* 0040207e mov dword ptr [esi + 0xb10], 0xffffffff */ { const u32 m_ = (u32)(esi + 0xb10u); M32(m_) = (u32)(0xffffffffu); }
  /* 00402088 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402089 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402090(CPU *c) {
  NATIVE_HOOK(0x402090u) REGS; LOADALL;
L_00402090:;
  /* 00402090 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402091 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00402093 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00402095 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402096 add esi, 0xafc */ { u32 a_ = esi, b_ = 0xafcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0040209c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040209d call 0x5fe7ca */ esp -= 4; M32(esp) = 0x4020a2u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x40209du); RETCHK(0x4020a2u, 0x40209du); LOADALL;
  /* 004020a2 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004020a5 mov byte ptr [esi + 0x13], 0 */ { const u32 m_ = (u32)(esi + 0x13u); M8(m_) = (u8)(0x0u); }
  /* 004020a9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004020aa ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004020b0(CPU *c) {
  NATIVE_HOOK(0x4020b0u) REGS; LOADALL;
L_004020b0:;
  /* 004020b0 add eax, 0xafc */ { u32 a_ = eax, b_ = 0xafcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004020b5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004020c0(CPU *c) {
  NATIVE_HOOK(0x4020c0u) REGS; LOADALL;
L_004020c0:;
  /* 004020c0 mov eax, dword ptr [eax + 0xb10] */ { const u32 m_ = (u32)(eax + 0xb10u); eax = (u32)(M32(m_)); }
  /* 004020c6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004020d0(CPU *c) {
  NATIVE_HOOK(0x4020d0u) REGS; LOADALL;
L_004020d0:;
  /* 004020d0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004020d1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004020d2 mov esi, eax */ { esi = (u32)(eax); }
  /* 004020d4 add esi, 0xb18 */ { u32 a_ = esi, b_ = 0xb18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004020da mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 004020df mov edi, edx */ { edi = (u32)(edx); }
  /* 004020e1 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004020e3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004020e4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004020e5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004020f0(CPU *c) {
  NATIVE_HOOK(0x4020f0u) REGS; LOADALL;
L_004020f0:;
  /* 004020f0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004020f1 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004020f2 mov edi, eax */ { edi = (u32)(eax); }
  /* 004020f4 add edi, 0xb18 */ { u32 a_ = edi, b_ = 0xb18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004020fa mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 004020ff mov esi, edx */ { esi = (u32)(edx); }
  /* 00402101 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00402103 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402104 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402105 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402110(CPU *c) {
  NATIVE_HOOK(0x402110u) REGS; LOADALL;
L_00402110:;
  /* 00402110 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402112 lea ecx, [esi + 0xb34] */ ecx = (u32)((u32)(esi + 0xb34u));
L_00402118:;
  /* 00402118 cmp edi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040211a je 0x402126 */ if (ZF_) goto L_00402126;
  /* 0040211c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0040211d add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402120 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402123 jb 0x402118 */ if (CF_) goto L_00402118;
  /* 00402125 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00402126:;
  /* 00402126 lea eax, [eax + eax*2] */ eax = (u32)((u32)(eax + eax * 2u));
  /* 00402129 lea ecx, [esi + eax*4 + 0xbb4] */ ecx = (u32)((u32)(esi + eax * 4u + 0xbb4u));
  /* 00402130 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 00402132 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00402134 mov eax, dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00402137 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 0040213a mov edx, dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0040213d mov dword ptr [ecx + 8], edx */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00402140 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402150(CPU *c) {
  NATIVE_HOOK(0x402150u) REGS; LOADALL;
L_00402150:;
  /* 00402150 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00402151 mov ebx, dword ptr [0x7a6e34] */ { const u32 m_ = (u32)(0x7a6e34u); ebx = (u32)(M32(m_)); }
  /* 00402157 cmp byte ptr [ebx + 0xe5], 1 */ { const u32 m_ = (u32)(ebx + 0xe5u); u32 a_ = M8(m_), b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 0040215e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040215f jne 0x40216d */ if (!ZF_) goto L_0040216d;
  /* 00402161 mov eax, dword ptr [esi + 0xb18] */ { const u32 m_ = (u32)(esi + 0xb18u); eax = (u32)(M32(m_)); }
  /* 00402167 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402168 call 0x550260 */ esp -= 4; M32(esp) = 0x40216du; SAVEALL; F_00550260(c); ABI_CHECK(0x550260u, 0x402168u); RETCHK(0x40216du, 0x402168u); LOADALL;
L_0040216d:;
  /* 0040216d lea edx, [esi + 0xb18] */ edx = (u32)((u32)(esi + 0xb18u));
  /* 00402173 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402175 mov ecx, 0x40 */ { ecx = (u32)(0x40u); }
  /* 0040217a mov edi, edx */ { edi = (u32)(edx); }
  /* 0040217c rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 0040217e xor cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); ecx = (ecx & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00402180 mov eax, esi */ { eax = (u32)(esi); }
  /* 00402182 call 0x4021e0 */ esp -= 4; M32(esp) = 0x402187u; SAVEALL; F_004021e0(c); ABI_CHECK(0x4021e0u, 0x402182u); RETCHK(0x402187u, 0x402182u); LOADALL;
  /* 00402187 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00402189 lea eax, [esi + 0xb94] */ eax = (u32)((u32)(esi + 0xb94u));
  /* 0040218f mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 00402191 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00402194 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00402197 mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0040219a mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 0040219d or ecx, 0xffffffff */ { u32 a_ = ecx, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004021a0 lea eax, [esi + 0xb34] */ eax = (u32)((u32)(esi + 0xb34u));
  /* 004021a6 mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 004021a8 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004021ab mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004021ae mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 004021b1 mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 004021b4 mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004021b7 mov dword ptr [eax + 0x18], ecx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(ecx); }
  /* 004021ba mov dword ptr [eax + 0x1c], ecx */ { const u32 m_ = (u32)(eax + 0x1cu); M32(m_) = (u32)(ecx); }
  /* 004021bd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004021be mov dword ptr [edx], 0xffffffff */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(0xffffffffu); }
  /* 004021c4 mov dword ptr [esi + 0xb1c], 0xffffffff */ { const u32 m_ = (u32)(esi + 0xb1cu); M32(m_) = (u32)(0xffffffffu); }
  /* 004021ce mov dword ptr [esi + 0xc14], 0 */ { const u32 m_ = (u32)(esi + 0xc14u); M32(m_) = (u32)(0x0u); }
  /* 004021d8 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004021d9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004021e0(CPU *c) {
  NATIVE_HOOK(0x4021e0u) REGS; LOADALL;
L_004021e0:;
  /* 004021e0 mov byte ptr [eax + 0xc18], cl */ { const u32 m_ = (u32)(eax + 0xc18u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 004021e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004021f0(CPU *c) {
  NATIVE_HOOK(0x4021f0u) REGS; LOADALL;
L_004021f0:;
  /* 004021f0 mov al, byte ptr [eax + 0xc18] */ { const u32 m_ = (u32)(eax + 0xc18u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004021f6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402200(CPU *c) {
  NATIVE_HOOK(0x402200u) REGS; LOADALL;
L_00402200:;
  /* 00402200 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402202 lea ecx, [esi + 0xb34] */ ecx = (u32)((u32)(esi + 0xb34u));
L_00402208:;
  /* 00402208 cmp edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040220a je 0x402215 */ if (ZF_) goto L_00402215;
  /* 0040220c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0040220d add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402210 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402213 jb 0x402208 */ if (CF_) goto L_00402208;
L_00402215:;
  /* 00402215 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402218 jne 0x402221 */ if (!ZF_) goto L_00402221;
  /* 0040221a lea eax, [esi + 0xb54] */ eax = (u32)((u32)(esi + 0xb54u));
  /* 00402220 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00402221:;
  /* 00402221 lea eax, [esi + eax*4 + 0xb54] */ eax = (u32)((u32)(esi + eax * 4u + 0xb54u));
  /* 00402228 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402230(CPU *c) {
  NATIVE_HOOK(0x402230u) REGS; LOADALL;
L_00402230:;
  /* 00402230 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402231 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402233 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402235 lea edx, [ecx + 0xb34] */ edx = (u32)((u32)(ecx + 0xb34u));
  /* 0040223b jmp 0x402240 */ goto L_00402240;
L_00402240:;
  /* 00402240 cmp dword ptr [edx], -1 */ { const u32 m_ = (u32)(edx); u32 a_ = M32(m_), b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402243 je 0x402254 */ if (ZF_) goto L_00402254;
  /* 00402245 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402246 add edx, 4 */ { u32 a_ = edx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00402249 cmp eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040224c jb 0x402240 */ if (CF_) goto L_00402240;
  /* 0040224e xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00402250 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402251 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00402254:;
  /* 00402254 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00402257 mov dword ptr [ecx + eax*4 + 0xb34], edx */ { const u32 m_ = (u32)(ecx + eax * 4u + 0xb34u); M32(m_) = (u32)(edx); }
  /* 0040225e mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00402261 mov dword ptr [ecx + eax*4 + 0xb54], edx */ { const u32 m_ = (u32)(ecx + eax * 4u + 0xb54u); M32(m_) = (u32)(edx); }
  /* 00402268 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0040226b mov dword ptr [ecx + eax*4 + 0xb74], edx */ { const u32 m_ = (u32)(ecx + eax * 4u + 0xb74u); M32(m_) = (u32)(edx); }
  /* 00402272 inc dword ptr [ecx + 0xb2c] */ { const u32 m_ = (u32)(ecx + 0xb2cu); u32 a_ = M32(m_); u32 r_ = (a_ + 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402278 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0040227a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040227b ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00402280(CPU *c) {
  NATIVE_HOOK(0x402280u) REGS; LOADALL;
L_00402280:;
  /* 00402280 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402281 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00402283 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 00402285 lea ecx, [eax + 0xb34] */ ecx = (u32)((u32)(eax + 0xb34u));
  /* 0040228b jmp 0x402290 */ goto L_00402290;
L_00402290:;
  /* 00402290 cmp esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402292 je 0x40229f */ if (ZF_) goto L_0040229f;
  /* 00402294 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402295 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402298 cmp edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040229b jb 0x402290 */ if (CF_) goto L_00402290;
  /* 0040229d jmp 0x402300 */ goto L_00402300;
L_0040229f:;
  /* 0040229f mov esi, dword ptr [eax + 0xb2c] */ { const u32 m_ = (u32)(eax + 0xb2cu); esi = (u32)(M32(m_)); }
  /* 004022a5 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004022a6 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004022a8 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004022aa mov dword ptr [eax + 0xb2c], esi */ { const u32 m_ = (u32)(eax + 0xb2cu); M32(m_) = (u32)(esi); }
  /* 004022b0 jge 0x4022df */ if (!LT_) goto L_004022df;
  /* 004022b2 lea ecx, [eax + edx*4 + 0xb34] */ ecx = (u32)((u32)(eax + edx * 4u + 0xb34u));
  /* 004022b9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004022c0:;
  /* 004022c0 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 004022c3 mov dword ptr [ecx], esi */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(esi); }
  /* 004022c5 mov esi, dword ptr [ecx + 0x24] */ { const u32 m_ = (u32)(ecx + 0x24u); esi = (u32)(M32(m_)); }
  /* 004022c8 mov dword ptr [ecx + 0x20], esi */ { const u32 m_ = (u32)(ecx + 0x20u); M32(m_) = (u32)(esi); }
  /* 004022cb mov esi, dword ptr [ecx + 0x44] */ { const u32 m_ = (u32)(ecx + 0x44u); esi = (u32)(M32(m_)); }
  /* 004022ce mov dword ptr [ecx + 0x40], esi */ { const u32 m_ = (u32)(ecx + 0x40u); M32(m_) = (u32)(esi); }
  /* 004022d1 mov esi, dword ptr [eax + 0xb2c] */ { const u32 m_ = (u32)(eax + 0xb2cu); esi = (u32)(M32(m_)); }
  /* 004022d7 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004022d8 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004022db cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004022dd jl 0x4022c0 */ if (LT_) goto L_004022c0;
L_004022df:;
  /* 004022df mov dword ptr [eax + edx*4 + 0xb34], 0xffffffff */ { const u32 m_ = (u32)(eax + edx * 4u + 0xb34u); M32(m_) = (u32)(0xffffffffu); }
  /* 004022ea mov dword ptr [eax + edx*4 + 0xb54], 0 */ { const u32 m_ = (u32)(eax + edx * 4u + 0xb54u); M32(m_) = (u32)(0x0u); }
  /* 004022f5 mov dword ptr [eax + edx*4 + 0xb74], 0 */ { const u32 m_ = (u32)(eax + edx * 4u + 0xb74u); M32(m_) = (u32)(0x0u); }
L_00402300:;
  /* 00402300 cmp ebx, dword ptr [eax + 0xc40] */ { const u32 m_ = (u32)(eax + 0xc40u); u32 a_ = ebx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402306 mov dword ptr [eax + 0xb24], ebx */ { const u32 m_ = (u32)(eax + 0xb24u); M32(m_) = (u32)(ebx); }
  /* 0040230c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040230d jne 0x402316 */ if (!ZF_) goto L_00402316;
  /* 0040230f mov cl, 1 */ { ecx = (ecx & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 00402311 jmp 0x4021e0 */ SAVEALL; F_004021e0(c); return;
L_00402316:;
  /* 00402316 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402320(CPU *c) {
  NATIVE_HOOK(0x402320u) REGS; LOADALL;
L_00402320:;
  /* 00402320 mov eax, dword ptr [esi + 0xc24] */ { const u32 m_ = (u32)(esi + 0xc24u); eax = (u32)(M32(m_)); }
  /* 00402326 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402328 je 0x402333 */ if (ZF_) goto L_00402333;
  /* 0040232a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040232b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x402330u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40232bu); RETCHK(0x402330u, 0x40232bu); LOADALL;
  /* 00402330 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00402333:;
  /* 00402333 mov dword ptr [esi + 0xc24], 0 */ { const u32 m_ = (u32)(esi + 0xc24u); M32(m_) = (u32)(0x0u); }
  /* 0040233d mov dword ptr [esi + 0xc28], 0 */ { const u32 m_ = (u32)(esi + 0xc28u); M32(m_) = (u32)(0x0u); }
  /* 00402347 mov dword ptr [esi + 0xc2c], 0 */ { const u32 m_ = (u32)(esi + 0xc2cu); M32(m_) = (u32)(0x0u); }
  /* 00402351 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402360(CPU *c) {
  NATIVE_HOOK(0x402360u) REGS; LOADALL;
L_00402360:;
  /* 00402360 add eax, 0xc20 */ { u32 a_ = eax, b_ = 0xc20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402365 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402370(CPU *c) {
  NATIVE_HOOK(0x402370u) REGS; LOADALL;
L_00402370:;
  /* 00402370 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402371 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402373 mov edx, dword ptr [eax + 0xc24] */ { const u32 m_ = (u32)(eax + 0xc24u); edx = (u32)(M32(m_)); }
  /* 00402379 add eax, 0xc20 */ { u32 a_ = eax, b_ = 0xc20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040237e test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402380 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402381 jne 0x402387 */ if (!ZF_) goto L_00402387;
  /* 00402383 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00402385 jmp 0x40238f */ goto L_0040238f;
L_00402387:;
  /* 00402387 mov esi, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); esi = (u32)(M32(m_)); }
  /* 0040238a sub esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0040238c sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
L_0040238f:;
  /* 0040238f test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402391 je 0x4023b2 */ if (ZF_) goto L_004023b2;
  /* 00402393 mov ecx, dword ptr [eax + 0xc] */ { const u32 m_ = (u32)(eax + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00402396 sub ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402398 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 0040239b cmp esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040239d jae 0x4023b2 */ if (!CF_) goto L_004023b2;
  /* 0040239f mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004023a2 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 004023a5 mov dword ptr [ecx], edx */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(edx); }
  /* 004023a7 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004023aa mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004023ad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004023ae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004023af ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004023b2:;
  /* 004023b2 mov ecx, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004023b5 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004023b6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004023b7 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 004023ba mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004023bf call 0x4d2620 */ esp -= 4; M32(esp) = 0x4023c4u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x4023bfu); RETCHK(0x4023c4u, 0x4023bfu); LOADALL;
  /* 004023c4 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004023c5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004023c6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004023d0(CPU *c) {
  NATIVE_HOOK(0x4023d0u) REGS; LOADALL;
L_004023d0:;
  /* 004023d0 mov ecx, dword ptr [edx + 0xc24] */ { const u32 m_ = (u32)(edx + 0xc24u); ecx = (u32)(M32(m_)); }
  /* 004023d6 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004023d8 je 0x4023e9 */ if (ZF_) goto L_004023e9;
  /* 004023da mov eax, dword ptr [edx + 0xc28] */ { const u32 m_ = (u32)(edx + 0xc28u); eax = (u32)(M32(m_)); }
  /* 004023e0 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004023e2 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004023e5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004023e7 ja 0x4023ed */ if (!(CF_|ZF_)) goto L_004023ed;
L_004023e9:;
  /* 004023e9 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004023ec ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004023ed:;
  /* 004023ed mov edx, dword ptr [edx + 0xc24] */ { const u32 m_ = (u32)(edx + 0xc24u); edx = (u32)(M32(m_)); }
  /* 004023f3 mov eax, dword ptr [edx] */ { const u32 m_ = (u32)(edx); eax = (u32)(M32(m_)); }
  /* 004023f5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402400(CPU *c) {
  NATIVE_HOOK(0x402400u) REGS; LOADALL;
L_00402400:;
  /* 00402400 mov edx, dword ptr [ecx + 0xc24] */ { const u32 m_ = (u32)(ecx + 0xc24u); edx = (u32)(M32(m_)); }
  /* 00402406 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402408 je 0x40241a */ if (ZF_) goto L_0040241a;
  /* 0040240a mov eax, dword ptr [ecx + 0xc28] */ { const u32 m_ = (u32)(ecx + 0xc28u); eax = (u32)(M32(m_)); }
  /* 00402410 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402412 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402415 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402418 ja 0x40241e */ if (!(CF_|ZF_)) goto L_0040241e;
L_0040241a:;
  /* 0040241a or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040241d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0040241e:;
  /* 0040241e mov eax, dword ptr [ecx + 0xc24] */ { const u32 m_ = (u32)(ecx + 0xc24u); eax = (u32)(M32(m_)); }
  /* 00402424 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402427 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
  /* 00402429 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402430(CPU *c) {
  NATIVE_HOOK(0x402430u) REGS; LOADALL;
L_00402430:;
  /* 00402430 mov ecx, dword ptr [esi + 0xc24] */ { const u32 m_ = (u32)(esi + 0xc24u); ecx = (u32)(M32(m_)); }
  /* 00402436 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402438 je 0x402449 */ if (ZF_) goto L_00402449;
  /* 0040243a mov eax, dword ptr [esi + 0xc28] */ { const u32 m_ = (u32)(esi + 0xc28u); eax = (u32)(M32(m_)); }
  /* 00402440 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402442 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402445 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402447 ja 0x40244d */ if (!(CF_|ZF_)) goto L_0040244d;
L_00402449:;
  /* 00402449 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040244c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0040244d:;
  /* 0040244d mov eax, dword ptr [esi + 0xc24] */ { const u32 m_ = (u32)(esi + 0xc24u); eax = (u32)(M32(m_)); }
  /* 00402453 mov edx, dword ptr [esi + 0xc28] */ { const u32 m_ = (u32)(esi + 0xc28u); edx = (u32)(M32(m_)); }
  /* 00402459 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 0040245c sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040245e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040245f mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00402461 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402464 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402467 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00402468 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402469 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040246a call 0x5fe998 */ esp -= 4; M32(esp) = 0x40246fu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x40246au); RETCHK(0x40246fu, 0x40246au); LOADALL;
  /* 0040246f mov eax, dword ptr [esi + 0xc28] */ { const u32 m_ = (u32)(esi + 0xc28u); eax = (u32)(M32(m_)); }
  /* 00402475 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402478 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040247b mov dword ptr [esi + 0xc28], eax */ { const u32 m_ = (u32)(esi + 0xc28u); M32(m_) = (u32)(eax); }
  /* 00402481 mov eax, edi */ { eax = (u32)(edi); }
  /* 00402483 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402484 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402490(CPU *c) {
  NATIVE_HOOK(0x402490u) REGS; LOADALL;
L_00402490:;
  /* 00402490 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402491 mov esi, eax */ { esi = (u32)(eax); }
  /* 00402493 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00402499 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040249b je 0x4024e7 */ if (ZF_) goto L_004024e7;
  /* 0040249d mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 004024a3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004024a5 je 0x4024b0 */ if (ZF_) goto L_004024b0;
  /* 004024a7 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004024a9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004024ab call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4024aeu; SAVEALL; call_ind(c, t_); RETCHK(0x4024aeu, 0x4024abu); LOADALL; }
  /* 004024ae jmp 0x4024b3 */ goto L_004024b3;
L_004024b0:;
  /* 004024b0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_004024b3:;
  /* 004024b3 mov esi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 004024b9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004024bb je 0x4024e7 */ if (ZF_) goto L_004024e7;
  /* 004024bd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004024be call 0x55ead0 */ esp -= 4; M32(esp) = 0x4024c3u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x4024beu); RETCHK(0x4024c3u, 0x4024beu); LOADALL;
  /* 004024c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004024c5 je 0x4024e7 */ if (ZF_) goto L_004024e7;
  /* 004024c7 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004024c9 lea ecx, [eax + 0x74] */ ecx = (u32)((u32)(eax + 0x74u));
  /* 004024cc je 0x4024d0 */ if (ZF_) goto L_004024d0;
  /* 004024ce mov dword ptr [edi], ecx */ { const u32 m_ = (u32)(edi); M32(m_) = (u32)(ecx); }
L_004024d0:;
  /* 004024d0 mov eax, 2 */ { eax = (u32)(0x2u); }
L_004024d5:;
  /* 004024d5 mov edx, dword ptr [ecx + eax*4 - 4] */ { const u32 m_ = (u32)(ecx + eax * 4u + 0xfffffffcu); edx = (u32)(M32(m_)); }
  /* 004024d9 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004024da cmp edx, -1 */ { u32 a_ = edx, b_ = 0xffffffffu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004024dd je 0x4024e7 */ if (ZF_) goto L_004024e7;
  /* 004024df test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004024e1 jg 0x4024d5 */ if (!(ZF_|LT_)) goto L_004024d5;
  /* 004024e3 mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 004024e5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004024e6 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004024e7:;
  /* 004024e7 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 004024e9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004024ea ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004024f0(CPU *c) {
  NATIVE_HOOK(0x4024f0u) REGS; LOADALL;
L_004024f0:;
  /* 004024f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004024f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004024f3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004024f4 mov ecx, dword ptr [eax + 0xde4] */ { const u32 m_ = (u32)(eax + 0xde4u); ecx = (u32)(M32(m_)); }
  /* 004024fa test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004024fc jg 0x402504 */ if (!(ZF_|LT_)) goto L_00402504;
  /* 004024fe xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00402500 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00402502 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402503 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00402504:;
  /* 00402504 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00402505 lea edi, [ebp - 4] */ edi = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00402508 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0040250f call 0x402490 */ esp -= 4; M32(esp) = 0x402514u; SAVEALL; F_00402490(c); ABI_CHECK(0x402490u, 0x40250fu); RETCHK(0x402514u, 0x40250fu); LOADALL;
  /* 00402514 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402516 je 0x40252c */ if (ZF_) goto L_0040252c;
  /* 00402518 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0040251b mov edi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edi = (u32)(M32(m_)); }
  /* 0040251e mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00402520 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402522 cmp edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402524 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00402527 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402528 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040252a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040252b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0040252c:;
  /* 0040252c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040252e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040252f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00402531 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402532 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402540(CPU *c) {
  NATIVE_HOOK(0x402540u) REGS; LOADALL;
L_00402540:;
  /* 00402540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402543 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402546 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00402547 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402548 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00402549 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0040254c lea eax, [edi + 0xd58] */ eax = (u32)((u32)(edi + 0xd58u));
  /* 00402552 mov ebx, 0x683a30 */ { ebx = (u32)(0x683a30u); }
  /* 00402557 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 0040255a add edi, 0xccc */ { u32 a_ = edi, b_ = 0xcccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_00402560:;
  /* 00402560 mov eax, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); eax = (u32)(M32(m_)); }
  /* 00402562 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00402564 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402566 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00402569 jle 0x4025c8 */ if ((ZF_|LT_)) goto L_004025c8;
  /* 0040256b jmp 0x402570 */ goto L_00402570;
L_00402570:;
  /* 00402570 cmp dword ptr [edi + 0x10], ecx */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402573 je 0x4025bb */ if (ZF_) goto L_004025bb;
  /* 00402575 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00402578 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 0040257b mov esi, dword ptr [eax + edx*4] */ { const u32 m_ = (u32)(eax + edx * 4u); esi = (u32)(M32(m_)); }
  /* 0040257e cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402582 jb 0x402592 */ if (CF_) goto L_00402592;
  /* 00402584 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00402587 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402588 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x40258du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x402588u); RETCHK(0x40258du, 0x402588u); LOADALL;
  /* 0040258d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402590 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00402592:;
  /* 00402592 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00402599 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0040259c mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 004025a0 mov esi, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); esi = (u32)(M32(m_)); }
  /* 004025a3 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004025a6 inc esi */ { u32 a_ = esi; u32 r_ = (a_ + 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004025a7 mov eax, esi */ { eax = (u32)(esi); }
  /* 004025a9 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004025ab mov dword ptr [edi + 0xc], esi */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(esi); }
  /* 004025ae ja 0x4025b3 */ if (!(CF_|ZF_)) goto L_004025b3;
  /* 004025b0 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
L_004025b3:;
  /* 004025b3 dec dword ptr [edi + 0x10] */ { const u32 m_ = (u32)(edi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004025b6 jne 0x4025bb */ if (!ZF_) goto L_004025bb;
  /* 004025b8 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
L_004025bb:;
  /* 004025bb mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004025be mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 004025c0 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004025c1 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004025c3 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 004025c6 jl 0x402570 */ if (LT_) goto L_00402570;
L_004025c8:;
  /* 004025c8 mov esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); esi = (u32)(M32(m_)); }
  /* 004025cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004025cc xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004025ce call 0x558750 */ esp -= 4; M32(esp) = 0x4025d3u; SAVEALL; F_00558750(c); ABI_CHECK(0x558750u, 0x4025ceu); RETCHK(0x4025d3u, 0x4025ceu); LOADALL;
  /* 004025d3 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004025d5 add ebx, 4 */ { u32 a_ = ebx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 004025d8 add ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004025db add edi, 0x14 */ { u32 a_ = edi, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004025de cmp ebx, 0x683a4c */ { u32 a_ = ebx, b_ = 0x683a4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004025e4 mov dword ptr [ebp - 4], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ecx); }
  /* 004025e7 jl 0x402560 */ if (LT_) goto L_00402560;
  /* 004025ed mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004025f0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004025f2 add eax, 0xdc8 */ { u32 a_ = eax, b_ = 0xdc8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004025f7 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004025f9 mov dword ptr [eax + 4], edx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(edx); }
  /* 004025fc mov dword ptr [eax + 8], edx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(edx); }
  /* 004025ff mov dword ptr [eax + 0xc], edx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(edx); }
  /* 00402602 mov dword ptr [eax + 0x10], edx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(edx); }
  /* 00402605 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402606 mov dword ptr [eax + 0x14], edx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(edx); }
  /* 00402609 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040260a mov dword ptr [eax + 0x18], edx */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(edx); }
  /* 0040260d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040260e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00402610 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402611 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00402620(CPU *c) {
  NATIVE_HOOK(0x402620u) REGS; LOADALL;
L_00402620:;
  /* 00402620 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402621 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402623 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00402624 mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00402627 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402628 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 0040262b mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0040262d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0040262f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00402631 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402634 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00402635 lea edi, [eax + esi] */ edi = (u32)((u32)(eax + esi));
  /* 00402638 jmp 0x402640 */ goto L_00402640;
L_00402640:;
  /* 00402640 mov esi, dword ptr [edi + 0xd5c] */ { const u32 m_ = (u32)(edi + 0xd5cu); esi = (u32)(M32(m_)); }
  /* 00402646 cmp esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402648 je 0x402670 */ if (ZF_) goto L_00402670;
  /* 0040264a mov eax, dword ptr [edi + 0xd60] */ { const u32 m_ = (u32)(edi + 0xd60u); eax = (u32)(M32(m_)); }
  /* 00402650 sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402652 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402655 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402657 jae 0x402670 */ if (!CF_) goto L_00402670;
  /* 00402659 fld dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); FPUSH((double)MF32(m_)); }
  /* 0040265c mov eax, esi */ { eax = (u32)(esi); }
  /* 0040265e fadd dword ptr [eax + ecx*4] */ { const u32 m_ = (u32)(eax + ecx * 4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00402661 lea eax, [eax + ecx*4] */ eax = (u32)((u32)(eax + ecx * 4u));
  /* 00402664 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402665 fstp dword ptr [eax] */ { const u32 m_ = (u32)(eax); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00402667 jmp 0x402640 */ goto L_00402640;
L_00402670:;
  /* 00402670 mov ecx, dword ptr [edi + 0xd5c] */ { const u32 m_ = (u32)(edi + 0xd5cu); ecx = (u32)(M32(m_)); }
  /* 00402676 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402678 je 0x402734 */ if (ZF_) goto L_00402734;
  /* 0040267e mov eax, dword ptr [edi + 0xd60] */ { const u32 m_ = (u32)(edi + 0xd60u); eax = (u32)(M32(m_)); }
  /* 00402684 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402686 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402689 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040268b jbe 0x402734 */ if ((CF_|ZF_)) goto L_00402734;
  /* 00402691 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00402693 fcomp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00402696 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00402698 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0040269b jnp 0x402734 */ if (!PF_) goto L_00402734;
  /* 004026a1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004026a4 lea eax, [ebx + ebx*4] */ eax = (u32)((u32)(ebx + ebx * 4u));
  /* 004026a7 lea esi, [ecx + eax*4 + 0xccc] */ esi = (u32)((u32)(ecx + eax * 4u + 0xcccu));
  /* 004026ae cmp dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004026b1 je 0x4026f9 */ if (ZF_) goto L_004026f9;
  /* 004026b3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004026b6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004026b9 mov ebx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); ebx = (u32)(M32(m_)); }
  /* 004026bc cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004026c0 jb 0x4026d0 */ if (CF_) goto L_004026d0;
  /* 004026c2 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004026c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004026c6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4026cbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4026c6u); RETCHK(0x4026cbu, 0x4026c6u); LOADALL;
  /* 004026cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004026ce xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_004026d0:;
  /* 004026d0 mov dword ptr [ebx + 0x18], 0xf */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004026d7 mov dword ptr [ebx + 0x14], edx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(edx); }
  /* 004026da mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 004026de mov ebx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004026e1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004026e4 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004026e5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004026e7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004026e9 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 004026ec ja 0x4026f1 */ if (!(CF_|ZF_)) goto L_004026f1;
  /* 004026ee mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_004026f1:;
  /* 004026f1 dec dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004026f4 jne 0x4026f9 */ if (!ZF_) goto L_004026f9;
  /* 004026f6 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_004026f9:;
  /* 004026f9 mov eax, dword ptr [edi + 0xd5c] */ { const u32 m_ = (u32)(edi + 0xd5cu); eax = (u32)(M32(m_)); }
  /* 004026ff mov edx, dword ptr [edi + 0xd60] */ { const u32 m_ = (u32)(edi + 0xd60u); edx = (u32)(M32(m_)); }
  /* 00402705 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00402708 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040270a sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0040270d shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402710 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00402711 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402712 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402713 call 0x5fe998 */ esp -= 4; M32(esp) = 0x402718u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x402713u); RETCHK(0x402718u, 0x402713u); LOADALL;
  /* 00402718 mov eax, dword ptr [edi + 0xd60] */ { const u32 m_ = (u32)(edi + 0xd60u); eax = (u32)(M32(m_)); }
  /* 0040271e mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00402721 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402724 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402727 mov dword ptr [edi + 0xd60], eax */ { const u32 m_ = (u32)(edi + 0xd60u); M32(m_) = (u32)(eax); }
  /* 0040272d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0040272f jmp 0x402670 */ goto L_00402670;
L_00402734:;
  /* 00402734 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402735 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402736 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00402737 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402738 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00402708(CPU *c) {
  NATIVE_HOOK(0x402708u) REGS; LOADALL;
  goto L_00402708;
L_00402670:;
  /* 00402670 mov ecx, dword ptr [edi + 0xd5c] */ { const u32 m_ = (u32)(edi + 0xd5cu); ecx = (u32)(M32(m_)); }
  /* 00402676 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402678 je 0x402734 */ if (ZF_) goto L_00402734;
  /* 0040267e mov eax, dword ptr [edi + 0xd60] */ { const u32 m_ = (u32)(edi + 0xd60u); eax = (u32)(M32(m_)); }
  /* 00402684 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402686 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402689 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040268b jbe 0x402734 */ if ((CF_|ZF_)) goto L_00402734;
  /* 00402691 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00402693 fcomp dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00402696 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00402698 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0040269b jnp 0x402734 */ if (!PF_) goto L_00402734;
  /* 004026a1 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004026a4 lea eax, [ebx + ebx*4] */ eax = (u32)((u32)(ebx + ebx * 4u));
  /* 004026a7 lea esi, [ecx + eax*4 + 0xccc] */ esi = (u32)((u32)(ecx + eax * 4u + 0xcccu));
  /* 004026ae cmp dword ptr [esi + 0x10], edx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004026b1 je 0x4026f9 */ if (ZF_) goto L_004026f9;
  /* 004026b3 mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 004026b6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004026b9 mov ebx, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); ebx = (u32)(M32(m_)); }
  /* 004026bc cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004026c0 jb 0x4026d0 */ if (CF_) goto L_004026d0;
  /* 004026c2 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004026c5 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004026c6 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4026cbu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4026c6u); RETCHK(0x4026cbu, 0x4026c6u); LOADALL;
  /* 004026cb add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004026ce xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_004026d0:;
  /* 004026d0 mov dword ptr [ebx + 0x18], 0xf */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004026d7 mov dword ptr [ebx + 0x14], edx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(edx); }
  /* 004026da mov byte ptr [ebx + 4], 0 */ { const u32 m_ = (u32)(ebx + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 004026de mov ebx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004026e1 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004026e4 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004026e5 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004026e7 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004026e9 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
  /* 004026ec ja 0x4026f1 */ if (!(CF_|ZF_)) goto L_004026f1;
  /* 004026ee mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_004026f1:;
  /* 004026f1 dec dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004026f4 jne 0x4026f9 */ if (!ZF_) goto L_004026f9;
  /* 004026f6 mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
L_004026f9:;
  /* 004026f9 mov eax, dword ptr [edi + 0xd5c] */ { const u32 m_ = (u32)(edi + 0xd5cu); eax = (u32)(M32(m_)); }
  /* 004026ff mov edx, dword ptr [edi + 0xd60] */ { const u32 m_ = (u32)(edi + 0xd60u); edx = (u32)(M32(m_)); }
  /* 00402705 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
L_00402708:;
  /* 00402708 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040270a sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0040270d shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402710 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00402711 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402712 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402713 call 0x5fe998 */ esp -= 4; M32(esp) = 0x402718u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x402713u); RETCHK(0x402718u, 0x402713u); LOADALL;
  /* 00402718 mov eax, dword ptr [edi + 0xd60] */ { const u32 m_ = (u32)(edi + 0xd60u); eax = (u32)(M32(m_)); }
  /* 0040271e mov ebx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ebx = (u32)(M32(m_)); }
  /* 00402721 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402724 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402727 mov dword ptr [edi + 0xd60], eax */ { const u32 m_ = (u32)(edi + 0xd60u); M32(m_) = (u32)(eax); }
  /* 0040272d xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 0040272f jmp 0x402670 */ goto L_00402670;
L_00402734:;
  /* 00402734 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402735 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402736 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00402737 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402738 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00402740(CPU *c) {
  NATIVE_HOOK(0x402740u) REGS; LOADALL;
L_00402740:;
  /* 00402740 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402741 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402743 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00402744 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00402747 push 0x41200000 */ { u32 v_ = 0x41200000u; esp -= 4; M32(esp) = v_; }
  /* 0040274c push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 0040274e push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040274f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402750 call 0x402620 */ esp -= 4; M32(esp) = 0x402755u; SAVEALL; F_00402620(c); ABI_CHECK(0x402620u, 0x402750u); RETCHK(0x402755u, 0x402750u); LOADALL;
  /* 00402755 push 0x41200000 */ { u32 v_ = 0x41200000u; esp -= 4; M32(esp) = v_; }
  /* 0040275a push 5 */ { u32 v_ = 0x5u; esp -= 4; M32(esp) = v_; }
  /* 0040275c push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040275d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040275e call 0x402620 */ esp -= 4; M32(esp) = 0x402763u; SAVEALL; F_00402620(c); ABI_CHECK(0x402620u, 0x40275eu); RETCHK(0x402763u, 0x40275eu); LOADALL;
  /* 00402763 push 0x41200000 */ { u32 v_ = 0x41200000u; esp -= 4; M32(esp) = v_; }
  /* 00402768 push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 0040276a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040276b push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040276c call 0x402620 */ esp -= 4; M32(esp) = 0x402771u; SAVEALL; F_00402620(c); ABI_CHECK(0x402620u, 0x40276cu); RETCHK(0x402771u, 0x40276cu); LOADALL;
  /* 00402771 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402772 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402773 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00402780(CPU *c) {
  NATIVE_HOOK(0x402780u) REGS; LOADALL;
L_00402780:;
  /* 00402780 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402781 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402783 mov ecx, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); ecx = (u32)(M32(m_)); }
  /* 00402789 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040278b jne 0x402791 */ if (!ZF_) goto L_00402791;
  /* 0040278d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040278f jmp 0x40279c */ goto L_0040279c;
L_00402791:;
  /* 00402791 mov eax, dword ptr [edx + 0xd70] */ { const u32 m_ = (u32)(edx + 0xd70u); eax = (u32)(M32(m_)); }
  /* 00402797 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402799 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_0040279c:;
  /* 0040279c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040279d lea esi, [eax - 1] */ esi = (u32)((u32)(eax + 0xffffffffu));
  /* 004027a0 lea eax, [esi + 1] */ eax = (u32)((u32)(esi + 0x1u));
  /* 004027a3 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004027a6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004027a7 jl 0x40285c */ if (LT_) goto L_0040285c;
  /* 004027ad mov edi, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); edi = (u32)(M32(m_)); }
  /* 004027b3 lea ecx, [esi*4 - 8] */ ecx = (u32)((u32)(esi * 4u + 0xfffffff8u));
  /* 004027ba lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_004027c0:;
  /* 004027c0 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004027c3 fadd dword ptr [ecx + edi + 8] */ { const u32 m_ = (u32)(ecx + edi + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004027c7 fstp dword ptr [ecx + edi + 8] */ { const u32 m_ = (u32)(ecx + edi + 0x8u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004027cb mov edi, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); edi = (u32)(M32(m_)); }
  /* 004027d1 fld dword ptr [ecx + edi + 8] */ { const u32 m_ = (u32)(ecx + edi + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004027d5 fcomp dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004027db fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 004027dd test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004027e0 je 0x402888 */ if (ZF_) goto L_00402888;
  /* 004027e6 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 004027e9 fadd dword ptr [ecx + edi + 4] */ { const u32 m_ = (u32)(ecx + edi + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 004027ed fstp dword ptr [ecx + edi + 4] */ { const u32 m_ = (u32)(ecx + edi + 0x4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 004027f1 mov edi, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); edi = (u32)(M32(m_)); }
  /* 004027f7 fld dword ptr [ecx + edi + 4] */ { const u32 m_ = (u32)(ecx + edi + 0x4u); FPUSH((double)MF32(m_)); }
  /* 004027fb fcomp dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00402801 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00402803 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402806 je 0x402888 */ if (ZF_) goto L_00402888;
  /* 0040280c fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0040280f fadd dword ptr [ecx + edi] */ { const u32 m_ = (u32)(ecx + edi); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00402812 fstp dword ptr [ecx + edi] */ { const u32 m_ = (u32)(ecx + edi); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00402815 mov edi, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); edi = (u32)(M32(m_)); }
  /* 0040281b fld dword ptr [ecx + edi] */ { const u32 m_ = (u32)(ecx + edi); FPUSH((double)MF32(m_)); }
  /* 0040281e fcomp dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00402824 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00402826 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402829 je 0x402888 */ if (ZF_) goto L_00402888;
  /* 0040282b fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 0040282e fadd dword ptr [ecx + edi - 4] */ { const u32 m_ = (u32)(ecx + edi + 0xfffffffcu); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00402832 fstp dword ptr [ecx + edi - 4] */ { const u32 m_ = (u32)(ecx + edi + 0xfffffffcu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00402836 mov edi, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); edi = (u32)(M32(m_)); }
  /* 0040283c fld dword ptr [ecx + edi - 4] */ { const u32 m_ = (u32)(ecx + edi + 0xfffffffcu); FPUSH((double)MF32(m_)); }
  /* 00402840 fcomp dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00402846 fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00402848 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 0040284b je 0x402888 */ if (ZF_) goto L_00402888;
  /* 0040284d sub esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00402850 sub ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402853 cmp esi, 3 */ { u32 a_ = esi, b_ = 0x3u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402856 jge 0x4027c0 */ if (!LT_) goto L_004027c0;
L_0040285c:;
  /* 0040285c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040285e jl 0x402888 */ if (LT_) goto L_00402888;
  /* 00402860 mov ecx, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); ecx = (u32)(M32(m_)); }
L_00402866:;
  /* 00402866 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00402869 fadd dword ptr [ecx + esi*4] */ { const u32 m_ = (u32)(ecx + esi * 4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 0040286c fstp dword ptr [ecx + esi*4] */ { const u32 m_ = (u32)(ecx + esi * 4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 0040286f mov ecx, dword ptr [edx + 0xd6c] */ { const u32 m_ = (u32)(edx + 0xd6cu); ecx = (u32)(M32(m_)); }
  /* 00402875 fld dword ptr [ecx + esi*4] */ { const u32 m_ = (u32)(ecx + esi * 4u); FPUSH((double)MF32(m_)); }
  /* 00402878 fcomp dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0040287e fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00402880 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402883 je 0x402888 */ if (ZF_) goto L_00402888;
  /* 00402885 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00402886 jns 0x402866 */ if (!SF_) goto L_00402866;
L_00402888:;
  /* 00402888 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402889 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040288a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040288b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00402890(CPU *c) {
  NATIVE_HOOK(0x402890u) REGS; LOADALL;
L_00402890:;
  /* 00402890 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402891 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402893 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402894 fld dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00402897 fcomp dword ptr [0x656f4c] */ { const u32 m_ = (u32)(0x656f4cu); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 0040289d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 0040289f test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004028a2 jne 0x4028ab */ if (!ZF_) goto L_004028ab;
  /* 004028a4 mov dword ptr [ebp + 8], 0x41700000 */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(0x41700000u); }
L_004028ab:;
  /* 004028ab mov ecx, dword ptr [edi + 0xcf0] */ { const u32 m_ = (u32)(edi + 0xcf0u); ecx = (u32)(M32(m_)); }
  /* 004028b1 mov edx, dword ptr [edi + 0xcec] */ { const u32 m_ = (u32)(edi + 0xcecu); edx = (u32)(M32(m_)); }
  /* 004028b7 lea eax, [edi + 0xce0] */ eax = (u32)((u32)(edi + 0xce0u));
  /* 004028bd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004028be add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004028c0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004028c1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004028c3 mov ecx, dword ptr [edi + 0xd6c] */ { const u32 m_ = (u32)(edi + 0xd6cu); ecx = (u32)(M32(m_)); }
  /* 004028c9 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004028cb mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004028cd jne 0x4028d3 */ if (!ZF_) goto L_004028d3;
  /* 004028cf xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004028d1 jmp 0x4028de */ goto L_004028de;
L_004028d3:;
  /* 004028d3 mov eax, dword ptr [edi + 0xd70] */ { const u32 m_ = (u32)(edi + 0xd70u); eax = (u32)(M32(m_)); }
  /* 004028d9 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004028db sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
L_004028de:;
  /* 004028de dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004028df mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 004028e2 js 0x402932 */ if (SF_) goto L_00402932;
  /* 004028e4 jmp 0x4028f0 */ goto L_004028f0;
L_004028e6:;
  /* 004028e6 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004028e9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_004028f0:;
  /* 004028f0 mov ecx, dword ptr [edi + 0xd6c] */ { const u32 m_ = (u32)(edi + 0xd6cu); ecx = (u32)(M32(m_)); }
  /* 004028f6 fld dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); FPUSH((double)MF32(m_)); }
  /* 004028f9 lea eax, [ecx + eax*4] */ eax = (u32)((u32)(ecx + eax * 4u));
  /* 004028fc fcomp dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 004028ff fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00402901 test ah, 0x41 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x41u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402904 je 0x402932 */ if (ZF_) goto L_00402932;
  /* 00402906 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00402908 mov edx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edx = (u32)(M32(m_)); }
  /* 0040290b mov eax, esi */ { eax = (u32)(esi); }
  /* 0040290d dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0040290e cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402910 ja 0x402914 */ if (!(CF_|ZF_)) goto L_00402914;
  /* 00402912 sub eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00402914:;
  /* 00402914 mov edx, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00402917 mov eax, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); eax = (u32)(M32(m_)); }
  /* 0040291a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040291b mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 0040291e call 0x4030f0 */ esp -= 4; M32(esp) = 0x402923u; SAVEALL; F_004030f0(c); ABI_CHECK(0x4030f0u, 0x40291eu); RETCHK(0x402923u, 0x40291eu); LOADALL;
  /* 00402923 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00402926 dec esi */ { u32 a_ = esi; u32 r_ = (a_ - 1u) & 0xffffffffu; esi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00402927 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00402928 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 0040292b je 0x402932 */ if (ZF_) goto L_00402932;
  /* 0040292d dec dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00402930 jns 0x4028e6 */ if (!SF_) goto L_004028e6;
L_00402932:;
  /* 00402932 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402933 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00402934 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00402936 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402937 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00402940(CPU *c) {
  NATIVE_HOOK(0x402940u) REGS; LOADALL;
L_00402940:;
  /* 00402940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402943 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402946 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402947 mov esi, dword ptr [0x62e1b4] */ { const u32 m_ = (u32)(0x62e1b4u); esi = (u32)(M32(m_)); }
  /* 0040294d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040294e push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00402950 push 0x7a67b8 */ { u32 v_ = 0x7a67b8u; esp -= 4; M32(esp) = v_; }
  /* 00402955 call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x402957u; SAVEALL; call_ind(c, t_); RETCHK(0x402957u, 0x402955u); LOADALL; }
  /* 00402957 cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040295a jne 0x402974 */ if (!ZF_) goto L_00402974;
  /* 0040295c mov edi, dword ptr [0x62e1b0] */ { const u32 m_ = (u32)(0x62e1b0u); edi = (u32)(M32(m_)); }
L_00402962:;
  /* 00402962 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00402964 call edi */ { u32 t_ = edi; esp -= 4; M32(esp) = 0x402966u; SAVEALL; call_ind(c, t_); RETCHK(0x402966u, 0x402964u); LOADALL; }
  /* 00402966 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 00402968 push 0x7a67b8 */ { u32 v_ = 0x7a67b8u; esp -= 4; M32(esp) = v_; }
  /* 0040296d call esi */ { u32 t_ = esi; esp -= 4; M32(esp) = 0x40296fu; SAVEALL; call_ind(c, t_); RETCHK(0x40296fu, 0x40296du); LOADALL; }
  /* 0040296f cmp eax, 1 */ { u32 a_ = eax, b_ = 0x1u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402972 je 0x402962 */ if (ZF_) goto L_00402962;
L_00402974:;
  /* 00402974 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00402977 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040297a lea eax, [ebx + ebx*4] */ eax = (u32)((u32)(ebx + ebx * 4u));
  /* 0040297d lea eax, [esi + eax*4] */ eax = (u32)((u32)(esi + eax * 4u));
  /* 00402980 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00402983 add eax, 0xccc */ { u32 a_ = eax, b_ = 0xcccu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402988 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402989 mov dword ptr [ebp - 8], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(eax); }
  /* 0040298c call 0x4033a0 */ esp -= 4; M32(esp) = 0x402991u; SAVEALL; F_004033a0(c); ABI_CHECK(0x4033a0u, 0x40298cu); RETCHK(0x402991u, 0x40298cu); LOADALL;
  /* 00402991 mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00402993 shl edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402996 lea edi, [edx + esi] */ edi = (u32)((u32)(edx + esi));
  /* 00402999 mov eax, dword ptr [edi + 0xd5c] */ { const u32 m_ = (u32)(edi + 0xd5cu); eax = (u32)(M32(m_)); }
  /* 0040299f mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 004029a2 add edi, 0xd58 */ { u32 a_ = edi, b_ = 0xd58u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004029a8 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004029aa mov dword ptr [ebp + 0xc], 0 */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 004029b1 jne 0x4029b7 */ if (!ZF_) goto L_004029b7;
  /* 004029b3 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
  /* 004029b5 jmp 0x4029bf */ goto L_004029bf;
L_004029b7:;
  /* 004029b7 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 004029ba sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004029bc sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
L_004029bf:;
  /* 004029bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004029c1 je 0x4029e0 */ if (ZF_) goto L_004029e0;
  /* 004029c3 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004029c6 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004029c8 sar ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004029cb cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004029cd jae 0x4029e0 */ if (!CF_) goto L_004029e0;
  /* 004029cf mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004029d2 mov dword ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x0u); }
  /* 004029d8 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004029db mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 004029de jmp 0x4029f2 */ goto L_004029f2;
L_004029e0:;
  /* 004029e0 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 004029e3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004029e4 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004029e5 lea eax, [ebp + 0xc] */ eax = (u32)((u32)(ebp + 0xcu));
  /* 004029e8 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 004029ed call 0x4d2620 */ esp -= 4; M32(esp) = 0x4029f2u; SAVEALL; F_004d2620(c); ABI_CHECK(0x4d2620u, 0x4029edu); RETCHK(0x4029f2u, 0x4029edu); LOADALL;
L_004029f2:;
  /* 004029f2 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 004029f5 mov ecx, dword ptr [eax + 0xcdc] */ { const u32 m_ = (u32)(eax + 0xcdcu); ecx = (u32)(M32(m_)); }
  /* 004029fb cmp ecx, dword ptr [ebx*4 + 0x683a30] */ { const u32 m_ = (u32)(ebx * 4u + 0x683a30u); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402a02 jbe 0x402a3a */ if ((CF_|ZF_)) goto L_00402a3a;
  /* 00402a04 mov esi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 00402a07 call 0x403340 */ esp -= 4; M32(esp) = 0x402a0cu; SAVEALL; F_00403340(c); ABI_CHECK(0x403340u, 0x402a07u); RETCHK(0x402a0cu, 0x402a07u); LOADALL;
  /* 00402a0c mov edx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); edx = (u32)(M32(m_)); }
  /* 00402a0f mov eax, dword ptr [edx + 0xd5c] */ { const u32 m_ = (u32)(edx + 0xd5cu); eax = (u32)(M32(m_)); }
  /* 00402a15 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00402a18 lea ecx, [eax + 4] */ ecx = (u32)((u32)(eax + 0x4u));
  /* 00402a1b sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00402a1d sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402a20 shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402a23 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00402a24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402a25 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402a26 call 0x5fe998 */ esp -= 4; M32(esp) = 0x402a2bu; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x402a26u); RETCHK(0x402a2bu, 0x402a26u); LOADALL;
  /* 00402a2b mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00402a2e mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00402a31 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402a34 add eax, -4 */ { u32 a_ = eax, b_ = 0xfffffffcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402a37 mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
L_00402a3a:;
  /* 00402a3a mov edx, dword ptr [esi + ebx*4 + 0xdc8] */ { const u32 m_ = (u32)(esi + ebx * 4u + 0xdc8u); edx = (u32)(M32(m_)); }
  /* 00402a41 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00402a43 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402a44 push 0x7a67b8 */ { u32 v_ = 0x7a67b8u; esp -= 4; M32(esp) = v_; }
  /* 00402a49 mov dword ptr [esi + ebx*4 + 0xdc8], edx */ { const u32 m_ = (u32)(esi + ebx * 4u + 0xdc8u); M32(m_) = (u32)(edx); }
  /* 00402a50 call dword ptr [0x62e1b4] */ { const u32 m_ = (u32)(0x62e1b4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x402a56u; SAVEALL; call_ind(c, t_); RETCHK(0x402a56u, 0x402a50u); LOADALL; }
  /* 00402a56 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402a57 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402a58 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00402a5a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402a5b ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00402a60(CPU *c) {
  NATIVE_HOOK(0x402a60u) REGS; LOADALL;
L_00402a60:;
  /* 00402a60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402a61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402a63 sub esp, 0x38 */ { u32 a_ = esp, b_ = 0x38u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402a66 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00402a6b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00402a6c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402a6d mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00402a70 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00402a73 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00402a74 mov eax, esi */ { eax = (u32)(esi); }
  /* 00402a76 call 0x402d90 */ esp -= 4; M32(esp) = 0x402a7bu; SAVEALL; F_00402d90(c); ABI_CHECK(0x402d90u, 0x402a76u); RETCHK(0x402a7bu, 0x402a76u); LOADALL;
  /* 00402a7b mov eax, dword ptr [0x9b8840] */ { const u32 m_ = (u32)(0x9b8840u); eax = (u32)(M32(m_)); }
  /* 00402a80 mov edi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edi = (u32)(M32(m_)); }
  /* 00402a82 mov ecx, dword ptr [0x9b884c] */ { const u32 m_ = (u32)(0x9b884cu); ecx = (u32)(M32(m_)); }
  /* 00402a88 mov eax, dword ptr [0x9b8844] */ { const u32 m_ = (u32)(0x9b8844u); eax = (u32)(M32(m_)); }
  /* 00402a8d mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 00402a8f xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00402a91 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402a93 mov dword ptr [ebp - 0x30], edx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(edx); }
  /* 00402a96 jle 0x402b62 */ if ((ZF_|LT_)) goto L_00402b62;
  /* 00402a9c add esi, 0xe24 */ { u32 a_ = esi, b_ = 0xe24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00402aa2:;
  /* 00402aa2 cmp ebx, 8 */ { u32 a_ = ebx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402aa5 jge 0x402b62 */ if (!LT_) goto L_00402b62;
  /* 00402aab push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00402aad lea eax, [edi + 0xa] */ eax = (u32)((u32)(edi + 0xau));
  /* 00402ab0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402ab1 lea ecx, [esi - 0x18] */ ecx = (u32)((u32)(esi + 0xffffffe8u));
  /* 00402ab4 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402ab5 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x402abau; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x402ab5u); RETCHK(0x402abau, 0x402ab5u); LOADALL;
  /* 00402aba mov byte ptr [esi - 5], 0 */ { const u32 m_ = (u32)(esi + 0xfffffffbu); M8(m_) = (u8)(0x0u); }
  /* 00402abe movzx edx, word ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M16(m_)); }
  /* 00402ac2 mov dword ptr [esi - 0x1c], edx */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 00402ac5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00402ac7 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00402ac9 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402acc cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402ace je 0x402adb */ if (ZF_) goto L_00402adb;
  /* 00402ad0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402ad1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x402ad6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x402ad1u); RETCHK(0x402ad6u, 0x402ad1u); LOADALL;
  /* 00402ad6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402ad9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00402adb:;
  /* 00402adb mov dword ptr [esi], ecx */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(ecx); }
  /* 00402add mov dword ptr [esi + 4], ecx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00402ae0 mov dword ptr [esi + 8], ecx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00402ae3 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00402ae6 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402ae8 je 0x402af5 */ if (ZF_) goto L_00402af5;
  /* 00402aea push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402aeb call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x402af0u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x402aebu); RETCHK(0x402af0u, 0x402aebu); LOADALL;
  /* 00402af0 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402af3 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00402af5:;
  /* 00402af5 mov dword ptr [esi + 0x10], ecx */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00402af8 mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00402afb mov dword ptr [esi + 0x18], ecx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ecx); }
  /* 00402afe mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00402b01 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402b03 je 0x402b10 */ if (ZF_) goto L_00402b10;
  /* 00402b05 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402b06 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x402b0bu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x402b06u); RETCHK(0x402b0bu, 0x402b06u); LOADALL;
  /* 00402b0b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402b0e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00402b10:;
  /* 00402b10 mov dword ptr [esi + 0x20], ecx */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(ecx); }
  /* 00402b13 mov dword ptr [esi + 0x24], ecx */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(ecx); }
  /* 00402b16 mov dword ptr [esi + 0x28], ecx */ { const u32 m_ = (u32)(esi + 0x28u); M32(m_) = (u32)(ecx); }
  /* 00402b19 mov eax, dword ptr [esi + 0x30] */ { const u32 m_ = (u32)(esi + 0x30u); eax = (u32)(M32(m_)); }
  /* 00402b1c cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402b1e je 0x402b2b */ if (ZF_) goto L_00402b2b;
  /* 00402b20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402b21 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x402b26u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x402b21u); RETCHK(0x402b26u, 0x402b21u); LOADALL;
  /* 00402b26 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402b29 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00402b2b:;
  /* 00402b2b mov dword ptr [esi + 0x30], ecx */ { const u32 m_ = (u32)(esi + 0x30u); M32(m_) = (u32)(ecx); }
  /* 00402b2e mov dword ptr [esi + 0x34], ecx */ { const u32 m_ = (u32)(esi + 0x34u); M32(m_) = (u32)(ecx); }
  /* 00402b31 mov dword ptr [esi + 0x38], ecx */ { const u32 m_ = (u32)(esi + 0x38u); M32(m_) = (u32)(ecx); }
  /* 00402b34 mov eax, dword ptr [esi + 0x40] */ { const u32 m_ = (u32)(esi + 0x40u); eax = (u32)(M32(m_)); }
  /* 00402b37 cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402b39 je 0x402b46 */ if (ZF_) goto L_00402b46;
  /* 00402b3b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402b3c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x402b41u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x402b3cu); RETCHK(0x402b41u, 0x402b3cu); LOADALL;
  /* 00402b41 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402b44 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
L_00402b46:;
  /* 00402b46 mov dword ptr [esi + 0x40], ecx */ { const u32 m_ = (u32)(esi + 0x40u); M32(m_) = (u32)(ecx); }
  /* 00402b49 mov dword ptr [esi + 0x44], ecx */ { const u32 m_ = (u32)(esi + 0x44u); M32(m_) = (u32)(ecx); }
  /* 00402b4c mov dword ptr [esi + 0x48], ecx */ { const u32 m_ = (u32)(esi + 0x48u); M32(m_) = (u32)(ecx); }
  /* 00402b4f mov eax, dword ptr [0x9b8844] */ { const u32 m_ = (u32)(0x9b8844u); eax = (u32)(M32(m_)); }
  /* 00402b54 mov edi, dword ptr [edi] */ { const u32 m_ = (u32)(edi); edi = (u32)(M32(m_)); }
  /* 00402b56 inc ebx */ { u32 a_ = ebx; u32 r_ = (a_ + 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402b57 add esi, 0x68 */ { u32 a_ = esi, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00402b5a cmp ebx, eax */ { u32 a_ = ebx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402b5c jl 0x402aa2 */ if (LT_) goto L_00402aa2;
L_00402b62:;
  /* 00402b62 call 0x54dd00 */ esp -= 4; M32(esp) = 0x402b67u; SAVEALL; F_0054dd00(c); ABI_CHECK(0x54dd00u, 0x402b62u); RETCHK(0x402b67u, 0x402b62u); LOADALL;
  /* 00402b67 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 00402b6a mov eax, dword ptr [0x9b8850] */ { const u32 m_ = (u32)(0x9b8850u); eax = (u32)(M32(m_)); }
  /* 00402b6f test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402b71 mov dword ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x0u); }
  /* 00402b78 jbe 0x402c5a */ if ((CF_|ZF_)) goto L_00402c5a;
  /* 00402b7e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00402b81 add eax, 0xe08 */ { u32 a_ = eax, b_ = 0xe08u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402b86 mov dword ptr [ebp - 0x34], eax */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(eax); }
  /* 00402b89 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00402b90:;
  /* 00402b90 mov ebx, dword ptr [ebp - 0x30] */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); ebx = (u32)(M32(m_)); }
  /* 00402b93 movzx ecx, word ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M16(m_)); }
  /* 00402b97 push 0x13 */ { u32 v_ = 0x13u; esp -= 4; M32(esp) = v_; }
  /* 00402b99 lea edx, [ebx + 0xc] */ edx = (u32)((u32)(ebx + 0xcu));
  /* 00402b9c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00402b9d lea eax, [ebp - 0x24] */ eax = (u32)((u32)(ebp + 0xffffffdcu));
  /* 00402ba0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402ba1 mov dword ptr [ebp - 0x28], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd8u); M32(m_) = (u32)(ecx); }
  /* 00402ba4 call 0x5fe7ca */ esp -= 4; M32(esp) = 0x402ba9u; SAVEALL; F_005fe7ca(c); ABI_CHECK(0x5fe7cau, 0x402ba4u); RETCHK(0x402ba9u, 0x402ba4u); LOADALL;
  /* 00402ba9 mov eax, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); eax = (u32)(M32(m_)); }
  /* 00402bac add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402baf xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00402bb1 mov byte ptr [ebp - 0x11], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffefu); M8(m_) = (u8)(0x0u); }
  /* 00402bb5 mov dword ptr [ebp - 0xc], edi */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(edi); }
  /* 00402bb8 mov dword ptr [ebp - 0x10], 0x7d0 */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(0x7d0u); }
  /* 00402bbf movzx ecx, word ptr [ebx + 0x38] */ { const u32 m_ = (u32)(ebx + 0x38u); ecx = (u32)(M16(m_)); }
  /* 00402bc3 mov dword ptr [ebp - 8], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(ecx); }
  /* 00402bc6 movzx ecx, word ptr [ebx + 0xa] */ { const u32 m_ = (u32)(ebx + 0xau); ecx = (u32)(M16(m_)); }
  /* 00402bca lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00402bd0:;
  /* 00402bd0 cmp dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); u32 a_ = M32(m_), b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402bd2 je 0x402bdf */ if (ZF_) goto L_00402bdf;
  /* 00402bd4 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402bd5 add eax, 0x68 */ { u32 a_ = eax, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402bd8 cmp edi, 8 */ { u32 a_ = edi, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402bdb jl 0x402bd0 */ if (LT_) goto L_00402bd0;
  /* 00402bdd jmp 0x402c40 */ goto L_00402c40;
L_00402bdf:;
  /* 00402bdf mov eax, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); eax = (u32)(M32(m_)); }
  /* 00402be2 lea esi, [ebp - 0x24] */ esi = (u32)((u32)(ebp + 0xffffffdcu));
L_00402be5:;
  /* 00402be5 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00402be7 mov cl, dl */ { ecx = (ecx & 0xffffff00u) | ((u32)((edx & 0xffu)) & 0xffu); }
  /* 00402be9 cmp dl, byte ptr [esi] */ { const u32 m_ = (u32)(esi); u32 a_ = (edx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00402beb jne 0x402c09 */ if (!ZF_) goto L_00402c09;
  /* 00402bed test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402bef je 0x402c05 */ if (ZF_) goto L_00402c05;
  /* 00402bf1 mov cl, byte ptr [eax + 1] */ { const u32 m_ = (u32)(eax + 0x1u); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00402bf4 mov dl, cl */ { edx = (edx & 0xffffff00u) | ((u32)((ecx & 0xffu)) & 0xffu); }
  /* 00402bf6 cmp cl, byte ptr [esi + 1] */ { const u32 m_ = (u32)(esi + 0x1u); u32 a_ = (ecx & 0xffu), b_ = M8(m_); u32 r_ = (a_ - b_) & 0xffu; SETFC(OP_SUB, a_, b_, r_, 1); }
  /* 00402bf9 jne 0x402c09 */ if (!ZF_) goto L_00402c09;
  /* 00402bfb add eax, 2 */ { u32 a_ = eax, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402bfe add esi, 2 */ { u32 a_ = esi, b_ = 0x2u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00402c01 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402c03 jne 0x402be5 */ if (!ZF_) goto L_00402be5;
L_00402c05:;
  /* 00402c05 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402c07 jmp 0x402c0e */ goto L_00402c0e;
L_00402c09:;
  /* 00402c09 sbb eax, eax */ { u32 a_ = eax, b_ = eax; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
  /* 00402c0b sbb eax, -1 */ { u32 a_ = eax, b_ = 0xffffffffu; u32 ci_ = CF_; u32 r_ = (a_ - b_ - ci_) & 0xffffffffu; u32 co_ = ci_ ? (a_ <= b_) : (a_ < b_); u32 of_ = (((a_ ^ b_) & (a_ ^ r_)) & SIGNB(4)) != 0; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, co_, 0, 0, 4); eax = (u32)(r_); }
L_00402c0e:;
  /* 00402c0e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402c10 jne 0x402c21 */ if (!ZF_) goto L_00402c21;
  /* 00402c12 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00402c15 imul edi, edi, 0x68 */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x68u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00402c18 lea ecx, [edi + edx + 0xe20] */ ecx = (u32)((u32)(edi + edx + 0xe20u));
  /* 00402c1f jmp 0x402c38 */ goto L_00402c38;
L_00402c21:;
  /* 00402c21 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 00402c24 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00402c27 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00402c29 imul ecx, ecx, 0x68 */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x68u; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00402c2c add eax, 0xe3 */ { u32 a_ = eax, b_ = 0xe3u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402c31 shl eax, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402c34 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402c36 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00402c38:;
  /* 00402c38 lea eax, [ebp - 0x28] */ eax = (u32)((u32)(ebp + 0xffffffd8u));
  /* 00402c3b call 0x4031c0 */ esp -= 4; M32(esp) = 0x402c40u; SAVEALL; F_004031c0(c); ABI_CHECK(0x4031c0u, 0x402c3bu); RETCHK(0x402c40u, 0x402c3bu); LOADALL;
L_00402c40:;
  /* 00402c40 mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00402c42 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00402c45 mov dword ptr [ebp - 0x30], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffd0u); M32(m_) = (u32)(ecx); }
  /* 00402c48 mov ecx, dword ptr [0x9b8850] */ { const u32 m_ = (u32)(0x9b8850u); ecx = (u32)(M32(m_)); }
  /* 00402c4e inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402c4f cmp eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402c51 mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 00402c54 jb 0x402b90 */ if (CF_) goto L_00402b90;
L_00402c5a:;
  /* 00402c5a mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00402c5d add esi, 0xe44 */ { u32 a_ = esi, b_ = 0xe44u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00402c63 mov dword ptr [ebp - 0x2c], 8 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(0x8u); }
  /* 00402c6a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00402c70:;
  /* 00402c70 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00402c72 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00402c74:;
  /* 00402c74 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00402c77 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402c79 je 0x402ca8 */ if (ZF_) goto L_00402ca8;
  /* 00402c7b mov ecx, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); ecx = (u32)(M32(m_)); }
  /* 00402c7e sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402c80 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00402c85 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00402c87 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402c8a mov eax, edx */ { eax = (u32)(edx); }
  /* 00402c8c shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402c8f add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402c91 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402c93 jae 0x402ca8 */ if (!CF_) goto L_00402ca8;
  /* 00402c95 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00402c98 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402c9a lea ecx, [esi - 0x24] */ ecx = (u32)((u32)(esi + 0xffffffdcu));
  /* 00402c9d call 0x4031c0 */ esp -= 4; M32(esp) = 0x402ca2u; SAVEALL; F_004031c0(c); ABI_CHECK(0x4031c0u, 0x402c9du); RETCHK(0x402ca2u, 0x402c9du); LOADALL;
  /* 00402ca2 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402ca3 add ebx, 0x24 */ { u32 a_ = ebx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00402ca6 jmp 0x402c74 */ goto L_00402c74;
L_00402ca8:;
  /* 00402ca8 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00402caa xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00402cac lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00402cb0:;
  /* 00402cb0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00402cb2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402cb4 je 0x402ce2 */ if (ZF_) goto L_00402ce2;
  /* 00402cb6 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00402cb9 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402cbb mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00402cc0 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00402cc2 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402cc5 mov eax, edx */ { eax = (u32)(edx); }
  /* 00402cc7 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402cca add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402ccc cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402cce jae 0x402ce2 */ if (!CF_) goto L_00402ce2;
  /* 00402cd0 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00402cd2 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402cd4 lea ecx, [esi - 0x24] */ ecx = (u32)((u32)(esi + 0xffffffdcu));
  /* 00402cd7 call 0x4031c0 */ esp -= 4; M32(esp) = 0x402cdcu; SAVEALL; F_004031c0(c); ABI_CHECK(0x4031c0u, 0x402cd7u); RETCHK(0x402cdcu, 0x402cd7u); LOADALL;
  /* 00402cdc inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402cdd add ebx, 0x24 */ { u32 a_ = ebx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00402ce0 jmp 0x402cb0 */ goto L_00402cb0;
L_00402ce2:;
  /* 00402ce2 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00402ce4 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
L_00402ce6:;
  /* 00402ce6 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00402ce9 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402ceb je 0x402d1a */ if (ZF_) goto L_00402d1a;
  /* 00402ced mov ecx, dword ptr [esi + 0x24] */ { const u32 m_ = (u32)(esi + 0x24u); ecx = (u32)(M32(m_)); }
  /* 00402cf0 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402cf2 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00402cf7 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00402cf9 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402cfc mov eax, edx */ { eax = (u32)(edx); }
  /* 00402cfe shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402d01 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402d03 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402d05 jae 0x402d1a */ if (!CF_) goto L_00402d1a;
  /* 00402d07 mov eax, dword ptr [esi + 0x20] */ { const u32 m_ = (u32)(esi + 0x20u); eax = (u32)(M32(m_)); }
  /* 00402d0a add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402d0c lea ecx, [esi - 0x24] */ ecx = (u32)((u32)(esi + 0xffffffdcu));
  /* 00402d0f call 0x4031c0 */ esp -= 4; M32(esp) = 0x402d14u; SAVEALL; F_004031c0(c); ABI_CHECK(0x4031c0u, 0x402d0fu); RETCHK(0x402d14u, 0x402d0fu); LOADALL;
  /* 00402d14 inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402d15 add ebx, 0x24 */ { u32 a_ = ebx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00402d18 jmp 0x402ce6 */ goto L_00402ce6;
L_00402d1a:;
  /* 00402d1a xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00402d1c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00402d1e mov edi, edi */ { edi = (u32)(edi); }
L_00402d20:;
  /* 00402d20 mov eax, dword ptr [esi - 0x10] */ { const u32 m_ = (u32)(esi + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00402d23 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402d25 je 0x402d54 */ if (ZF_) goto L_00402d54;
  /* 00402d27 mov ecx, dword ptr [esi - 0xc] */ { const u32 m_ = (u32)(esi + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00402d2a sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402d2c mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00402d31 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00402d33 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00402d36 mov eax, edx */ { eax = (u32)(edx); }
  /* 00402d38 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402d3b add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402d3d cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402d3f jae 0x402d54 */ if (!CF_) goto L_00402d54;
  /* 00402d41 mov eax, dword ptr [esi - 0x10] */ { const u32 m_ = (u32)(esi + 0xfffffff0u); eax = (u32)(M32(m_)); }
  /* 00402d44 add eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402d46 lea ecx, [esi - 0x24] */ ecx = (u32)((u32)(esi + 0xffffffdcu));
  /* 00402d49 call 0x4031c0 */ esp -= 4; M32(esp) = 0x402d4eu; SAVEALL; F_004031c0(c); ABI_CHECK(0x4031c0u, 0x402d49u); RETCHK(0x402d4eu, 0x402d49u); LOADALL;
  /* 00402d4e inc edi */ { u32 a_ = edi; u32 r_ = (a_ + 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402d4f add ebx, 0x24 */ { u32 a_ = ebx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ebx = (u32)(r_); }
  /* 00402d52 jmp 0x402d20 */ goto L_00402d20;
L_00402d54:;
  /* 00402d54 mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00402d57 add esi, 0x68 */ { u32 a_ = esi, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00402d5a dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00402d5b mov dword ptr [ebp - 0x2c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M32(m_) = (u32)(eax); }
  /* 00402d5e jne 0x402c70 */ if (!ZF_) goto L_00402c70;
  /* 00402d64 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00402d67 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00402d6a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402d6b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402d6c mov dword ptr [edx + 0x1148], 1 */ { const u32 m_ = (u32)(edx + 0x1148u); M32(m_) = (u32)(0x1u); }
  /* 00402d76 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00402d77 call 0x61af31 */ esp -= 4; M32(esp) = 0x402d7cu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x402d77u); RETCHK(0x402d7cu, 0x402d77u); LOADALL;
  /* 00402d7c mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00402d7e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402d7f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00402d90(CPU *c) {
  NATIVE_HOOK(0x402d90u) REGS; LOADALL;
L_00402d90:;
  /* 00402d90 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00402d91 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402d92 mov esi, eax */ { esi = (u32)(eax); }
  /* 00402d94 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00402d95 add esi, 0xe24 */ { u32 a_ = esi, b_ = 0xe24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00402d9b mov ebx, 8 */ { ebx = (u32)(0x8u); }
  /* 00402da0 xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
L_00402da2:;
  /* 00402da2 mov dword ptr [esi - 0x1c], edi */ { const u32 m_ = (u32)(esi + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 00402da5 mov eax, dword ptr [esi] */ { const u32 m_ = (u32)(esi); eax = (u32)(M32(m_)); }
  /* 00402da7 cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402da9 je 0x402db4 */ if (ZF_) goto L_00402db4;
  /* 00402dab push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402dac call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x402db1u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x402dacu); RETCHK(0x402db1u, 0x402dacu); LOADALL;
  /* 00402db1 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00402db4:;
  /* 00402db4 mov dword ptr [esi], edi */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(edi); }
  /* 00402db6 mov dword ptr [esi + 4], edi */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(edi); }
  /* 00402db9 mov dword ptr [esi + 8], edi */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(edi); }
  /* 00402dbc xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402dbe lea ecx, [esi - 0x18] */ ecx = (u32)((u32)(esi + 0xffffffe8u));
  /* 00402dc1 mov dword ptr [ecx], eax */ { const u32 m_ = (u32)(ecx); M32(m_) = (u32)(eax); }
  /* 00402dc3 mov dword ptr [ecx + 4], eax */ { const u32 m_ = (u32)(ecx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00402dc6 mov dword ptr [ecx + 8], eax */ { const u32 m_ = (u32)(ecx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00402dc9 mov dword ptr [ecx + 0xc], eax */ { const u32 m_ = (u32)(ecx + 0xcu); M32(m_) = (u32)(eax); }
  /* 00402dcc add esi, 0x68 */ { u32 a_ = esi, b_ = 0x68u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00402dcf dec ebx */ { u32 a_ = ebx; u32 r_ = (a_ - 1u) & 0xffffffffu; ebx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00402dd0 mov dword ptr [ecx + 0x10], eax */ { const u32 m_ = (u32)(ecx + 0x10u); M32(m_) = (u32)(eax); }
  /* 00402dd3 jne 0x402da2 */ if (!ZF_) goto L_00402da2;
  /* 00402dd5 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402dd6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402dd7 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00402dd8 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402de0(CPU *c) {
  NATIVE_HOOK(0x402de0u) REGS; LOADALL;
L_00402de0:;
  /* 00402de0 cmp eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402de3 ja 0x402dfe */ if (!(CF_|ZF_)) goto L_00402dfe;
  /* 00402de5 jmp dword ptr [eax*4 + 0x402e04] */ { const u32 m_ = (u32)(eax * 4u + 0x402e04u); u32 t_ = M32(m_); switch (t_) { case 0x402decu: goto L_00402dec; case 0x402df2u: goto L_00402df2; case 0x402df8u: goto L_00402df8; default: SAVEALL; call_ind(c, t_); return; } }
L_00402dec:;
  /* 00402dec mov eax, 0x1e */ { eax = (u32)(0x1eu); }
  /* 00402df1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00402df2:;
  /* 00402df2 mov eax, 0xa */ { eax = (u32)(0xau); }
  /* 00402df7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00402df8:;
  /* 00402df8 mov eax, 0x3c */ { eax = (u32)(0x3cu); }
  /* 00402dfd ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00402dfe:;
  /* 00402dfe xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402e00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402e20(CPU *c) {
  NATIVE_HOOK(0x402e20u) REGS; LOADALL;
L_00402e20:;
  /* 00402e20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402e21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402e23 cmp ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402e26 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00402e29 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00402e2a mov edi, edx */ { edi = (u32)(edx); }
  /* 00402e2c ja 0x402e6d */ if (!(CF_|ZF_)) goto L_00402e6d;
  /* 00402e2e jmp dword ptr [ecx*4 + 0x402e74] */ { const u32 m_ = (u32)(ecx * 4u + 0x402e74u); u32 t_ = M32(m_); switch (t_) { case 0x402e35u: goto L_00402e35; case 0x402e45u: goto L_00402e45; case 0x402e4fu: goto L_00402e4f; case 0x402e59u: goto L_00402e59; case 0x402e63u: goto L_00402e63; default: SAVEALL; call_ind(c, t_); return; } }
L_00402e35:;
  /* 00402e35 lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 00402e38 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402e39 mov eax, edi */ { eax = (u32)(edi); }
  /* 00402e3b call 0x401080 */ esp -= 4; M32(esp) = 0x402e40u; SAVEALL; F_00401080(c); ABI_CHECK(0x401080u, 0x402e3bu); RETCHK(0x402e40u, 0x402e3bu); LOADALL;
  /* 00402e40 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402e41 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402e42 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00402e45:;
  /* 00402e45 call 0x401240 */ esp -= 4; M32(esp) = 0x402e4au; SAVEALL; F_00401240(c); ABI_CHECK(0x401240u, 0x402e45u); RETCHK(0x402e4au, 0x402e45u); LOADALL;
  /* 00402e4a pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402e4b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402e4c ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00402e4f:;
  /* 00402e4f call 0x401130 */ esp -= 4; M32(esp) = 0x402e54u; SAVEALL; F_00401130(c); ABI_CHECK(0x401130u, 0x402e4fu); RETCHK(0x402e54u, 0x402e4fu); LOADALL;
  /* 00402e54 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402e55 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402e56 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00402e59:;
  /* 00402e59 call 0x401450 */ esp -= 4; M32(esp) = 0x402e5eu; SAVEALL; F_00401450(c); ABI_CHECK(0x401450u, 0x402e59u); RETCHK(0x402e5eu, 0x402e59u); LOADALL;
  /* 00402e5e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402e5f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402e60 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00402e63:;
  /* 00402e63 call 0x401340 */ esp -= 4; M32(esp) = 0x402e68u; SAVEALL; F_00401340(c); ABI_CHECK(0x401340u, 0x402e63u); RETCHK(0x402e68u, 0x402e63u); LOADALL;
  /* 00402e68 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402e69 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402e6a ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00402e6d:;
  /* 00402e6d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402e6f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00402e70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402e71 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00402e90(CPU *c) {
  NATIVE_HOOK(0x402e90u) REGS; LOADALL;
L_00402e90:;
  /* 00402e90 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402e91 mov esi, eax */ { esi = (u32)(eax); }
  /* 00402e93 mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00402e99 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402e9b je 0x402ec5 */ if (ZF_) goto L_00402ec5;
  /* 00402e9d mov ecx, dword ptr [eax + 0x180] */ { const u32 m_ = (u32)(eax + 0x180u); ecx = (u32)(M32(m_)); }
  /* 00402ea3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402ea5 je 0x402eb0 */ if (ZF_) goto L_00402eb0;
  /* 00402ea7 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00402ea9 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00402eab call dword ptr [edx + 0x18] */ { const u32 m_ = (u32)(edx + 0x18u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x402eaeu; SAVEALL; call_ind(c, t_); RETCHK(0x402eaeu, 0x402eabu); LOADALL; }
  /* 00402eae jmp 0x402eb3 */ goto L_00402eb3;
L_00402eb0:;
  /* 00402eb0 or eax, 0xffffffff */ { u32 a_ = eax, b_ = 0xffffffffu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00402eb3:;
  /* 00402eb3 mov esi, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); esi = (u32)(M32(m_)); }
  /* 00402eb9 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402ebb je 0x402ec5 */ if (ZF_) goto L_00402ec5;
  /* 00402ebd push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402ebe call 0x55ead0 */ esp -= 4; M32(esp) = 0x402ec3u; SAVEALL; F_0055ead0(c); ABI_CHECK(0x55ead0u, 0x402ebeu); RETCHK(0x402ec3u, 0x402ebeu); LOADALL;
  /* 00402ec3 jmp 0x402ec7 */ goto L_00402ec7;
L_00402ec5:;
  /* 00402ec5 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
L_00402ec7:;
  /* 00402ec7 call 0x9c5375 */ esp -= 4; M32(esp) = 0x402eccu; SAVEALL; F_009c5375(c); ABI_CHECK(0x9c5375u, 0x402ec7u); RETCHK(0x402eccu, 0x402ec7u); LOADALL;
  /* 00402ecc nop */ ;
  /* 00402ecd nop */ ;
  /* 00402ece nop */ ;
  /* 00402ecf nop */ ;
  /* 00402ed0 nop */ ;
  /* 00402ed1 nop */ ;
  /* 00402ed2 nop */ ;
  /* 00402ed3 nop */ ;
  /* 00402ed4 nop */ ;
  /* 00402ed5 nop */ ;
  /* 00402ed6 nop */ ;
  /* 00402ed7 nop */ ;
  /* 00402ed8 nop */ ;
  /* 00402ed9 nop */ ;
  /* 00402eda nop */ ;
  /* 00402edb jne 0x402ee1 */ if (!ZF_) goto L_00402ee1;
  /* 00402edd xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402edf pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402ee0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00402ee1:;
  /* 00402ee1 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00402ee3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402ee5 jle 0x402efd */ if ((ZF_|LT_)) goto L_00402efd;
  /* 00402ee7 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00402ee9 lea esp, [esp] */ esp = (u32)((u32)(esp));
L_00402ef0:;
  /* 00402ef0 cmp dword ptr [edx + ecx], edi */ { const u32 m_ = (u32)(edx + ecx); u32 a_ = M32(m_), b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402ef3 jne 0x402ef7 */ if (!ZF_) goto L_00402ef7;
  /* 00402ef5 add esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00402ef7:;
  /* 00402ef7 add ecx, 4 */ { u32 a_ = ecx, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00402efa dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00402efb jne 0x402ef0 */ if (!ZF_) goto L_00402ef0;
L_00402efd:;
  /* 00402efd mov eax, esi */ { eax = (u32)(esi); }
  /* 00402eff pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402f00 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402f10(CPU *c) {
  NATIVE_HOOK(0x402f10u) REGS; LOADALL;
L_00402f10:;
  /* 00402f10 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00402f11 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00402f12 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 00402f14 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00402f17 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00402f19 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402f1a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402f1b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00402f1d mov edx, edi */ { edx = (u32)(edi); }
  /* 00402f1f call 0x428de0 */ esp -= 4; M32(esp) = 0x402f24u; SAVEALL; F_00428de0(c); ABI_CHECK(0x428de0u, 0x402f1fu); RETCHK(0x402f24u, 0x402f1fu); LOADALL;
  /* 00402f24 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00402f26 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402f28 jle 0x402f4a */ if ((ZF_|LT_)) goto L_00402f4a;
  /* 00402f2a lea eax, [ebx + 0xc] */ eax = (u32)((u32)(ebx + 0xcu));
  /* 00402f2d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_00402f30:;
  /* 00402f30 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00402f33 mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00402f35 lea edx, [edx + ecx*8] */ edx = (u32)((u32)(edx + ecx * 8u));
  /* 00402f38 add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402f3b mov dword ptr [edx], ebx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ebx); }
  /* 00402f3d mov ebx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ebx = (u32)(M32(m_)); }
  /* 00402f3f add eax, 4 */ { u32 a_ = eax, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402f42 inc ecx */ { u32 a_ = ecx; u32 r_ = (a_ + 1u) & 0xffffffffu; ecx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402f43 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402f45 mov dword ptr [edx + 4], ebx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ebx); }
  /* 00402f48 jl 0x402f30 */ if (LT_) goto L_00402f30;
L_00402f4a:;
  /* 00402f4a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00402f4c call 0x54c1b0 */ esp -= 4; M32(esp) = 0x402f51u; SAVEALL; F_0054c1b0(c); ABI_CHECK(0x54c1b0u, 0x402f4cu); RETCHK(0x402f51u, 0x402f4cu); LOADALL;
  /* 00402f51 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402f54 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00402f55 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00402f56 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402f60(CPU *c) {
  NATIVE_HOOK(0x402f60u) REGS; LOADALL;
L_00402f60:;
  /* 00402f60 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402f61 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402f63 sub esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402f66 mov ecx, dword ptr [eax + 0xc38] */ { const u32 m_ = (u32)(eax + 0xc38u); ecx = (u32)(M32(m_)); }
  /* 00402f6c test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402f6e mov dword ptr [ebp - 8], 0x1000008f */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x1000008fu); }
  /* 00402f75 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00402f7c je 0x402f8c */ if (ZF_) goto L_00402f8c;
  /* 00402f7e lea ecx, [ebp - 8] */ ecx = (u32)((u32)(ebp + 0xfffffff8u));
  /* 00402f81 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402f82 mov edx, 8 */ { edx = (u32)(0x8u); }
  /* 00402f87 call 0x55f4b0 */ esp -= 4; M32(esp) = 0x402f8cu; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x402f87u); RETCHK(0x402f8cu, 0x402f87u); LOADALL;
L_00402f8c:;
  /* 00402f8c push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00402f8e call 0x54c180 */ esp -= 4; M32(esp) = 0x402f93u; SAVEALL; F_0054c180(c); ABI_CHECK(0x54c180u, 0x402f8eu); RETCHK(0x402f93u, 0x402f8eu); LOADALL;
  /* 00402f93 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402f96 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00402f98 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00402f99 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402fa0(CPU *c) {
  NATIVE_HOOK(0x402fa0u) REGS; LOADALL;
L_00402fa0:;
  /* 00402fa0 xor edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edx = (u32)(r_); }
L_00402fa2:;
  /* 00402fa2 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00402fa5 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00402fa7 je 0x402fc1 */ if (ZF_) goto L_00402fc1;
  /* 00402fa9 mov eax, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00402fac sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00402fae sar eax, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00402fb1 cmp edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402fb3 jae 0x402fc1 */ if (!CF_) goto L_00402fc1;
  /* 00402fb5 cmp dword ptr [ecx + edx*8], ebx */ { const u32 m_ = (u32)(ecx + edx * 8u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00402fb8 jne 0x402fbe */ if (!ZF_) goto L_00402fbe;
  /* 00402fba mov dword ptr [ecx + edx*8 + 4], edi */ { const u32 m_ = (u32)(ecx + edx * 8u + 0x4u); M32(m_) = (u32)(edi); }
L_00402fbe:;
  /* 00402fbe inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00402fbf jmp 0x402fa2 */ goto L_00402fa2;
L_00402fc1:;
  /* 00402fc1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00402fd0(CPU *c) {
  NATIVE_HOOK(0x402fd0u) REGS; LOADALL;
L_00402fd0:;
  /* 00402fd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00402fd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00402fd3 sub esp, 0x4c */ { u32 a_ = esp, b_ = 0x4cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00402fd6 mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00402fdb mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00402fde mov al, byte ptr [esi + 0xde9] */ { const u32 m_ = (u32)(esi + 0xde9u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00402fe4 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00402fe6 jne 0x40302a */ if (!ZF_) goto L_0040302a;
  /* 00402fe8 mov ecx, dword ptr [0x9c0264] */ { const u32 m_ = (u32)(0x9c0264u); ecx = (u32)(M32(m_)); }
  /* 00402fee push 0x40 */ { u32 v_ = 0x40u; esp -= 4; M32(esp) = v_; }
  /* 00402ff0 lea eax, [ebp - 0x44] */ eax = (u32)((u32)(ebp + 0xffffffbcu));
  /* 00402ff3 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00402ff4 push 0x6b */ { u32 v_ = 0x6bu; esp -= 4; M32(esp) = v_; }
  /* 00402ff6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00402ff7 mov dword ptr [ebp - 0x4c], 0x100000a6 */ { const u32 m_ = (u32)(ebp + 0xffffffb4u); M32(m_) = (u32)(0x100000a6u); }
  /* 00402ffe mov dword ptr [ebp - 0x48], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffb8u); M32(m_) = (u32)(0x0u); }
  /* 00403005 call dword ptr [0x62e4d4] */ { const u32 m_ = (u32)(0x62e4d4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x40300bu; SAVEALL; call_ind(c, t_); RETCHK(0x40300bu, 0x403005u); LOADALL; }
  /* 0040300b mov eax, dword ptr [esi + 0xc38] */ { const u32 m_ = (u32)(esi + 0xc38u); eax = (u32)(M32(m_)); }
  /* 00403011 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403013 je 0x403023 */ if (ZF_) goto L_00403023;
  /* 00403015 lea edx, [ebp - 0x4c] */ edx = (u32)((u32)(ebp + 0xffffffb4u));
  /* 00403018 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403019 mov edx, 0x48 */ { edx = (u32)(0x48u); }
  /* 0040301e call 0x55f4b0 */ esp -= 4; M32(esp) = 0x403023u; SAVEALL; F_0055f4b0(c); ABI_CHECK(0x55f4b0u, 0x40301eu); RETCHK(0x403023u, 0x40301eu); LOADALL;
L_00403023:;
  /* 00403023 mov byte ptr [esi + 0xde9], 1 */ { const u32 m_ = (u32)(esi + 0xde9u); M8(m_) = (u8)(0x1u); }
L_0040302a:;
  /* 0040302a mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 0040302d call 0x61af31 */ esp -= 4; M32(esp) = 0x403032u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x40302du); RETCHK(0x403032u, 0x40302du); LOADALL;
  /* 00403032 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403034 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403035 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403040(CPU *c) {
  NATIVE_HOOK(0x403040u) REGS; LOADALL;
L_00403040:;
  /* 00403040 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00403042 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00403044 mov dword ptr [eax + 0x18], 0xf */ { const u32 m_ = (u32)(eax + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0040304b mov dword ptr [eax + 0x14], ecx */ { const u32 m_ = (u32)(eax + 0x14u); M32(m_) = (u32)(ecx); }
  /* 0040304e mov byte ptr [eax + 4], cl */ { const u32 m_ = (u32)(eax + 0x4u); M8(m_) = (u8)((ecx & 0xffu)); }
  /* 00403051 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403060(CPU *c) {
  NATIVE_HOOK(0x403060u) REGS; LOADALL;
L_00403060:;
  /* 00403060 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403061 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403063 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403066 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403067 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00403069 mov eax, edx */ { eax = (u32)(edx); }
  /* 0040306b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040306c mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00403073 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 0040307a mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0040307e lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
L_00403081:;
  /* 00403081 mov cl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (ecx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00403083 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 00403084 test cl, cl */ { u32 a_ = (ecx & 0xffu), b_ = (ecx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00403086 jne 0x403081 */ if (!ZF_) goto L_00403081;
  /* 00403088 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040308a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040308b push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0040308c mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0040308e call 0x404420 */ esp -= 4; M32(esp) = 0x403093u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x40308eu); RETCHK(0x403093u, 0x40308eu); LOADALL;
  /* 00403093 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403094 mov eax, esi */ { eax = (u32)(esi); }
  /* 00403096 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403097 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403098 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004030a0(CPU *c) {
  NATIVE_HOOK(0x4030a0u) REGS; LOADALL;
L_004030a0:;
  /* 004030a0 mov ecx, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004030a3 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004030a5 jne 0x4030aa */ if (!ZF_) goto L_004030aa;
  /* 004030a7 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004030a9 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004030aa:;
  /* 004030aa mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 004030ad sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004030af sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004030b2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004030c0(CPU *c) {
  NATIVE_HOOK(0x4030c0u) REGS; LOADALL;
L_004030c0:;
  /* 004030c0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004030c3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004030c5 jne 0x4030c8 */ if (!ZF_) goto L_004030c8;
  /* 004030c7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004030c8:;
  /* 004030c8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004030cb sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004030cd mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004030d2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004030d4 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004030d6 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004030d9 mov eax, edx */ { eax = (u32)(edx); }
  /* 004030db shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004030de add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004030e0 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004030f0(CPU *c) {
  NATIVE_HOOK(0x4030f0u) REGS; LOADALL;
L_004030f0:;
  /* 004030f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004030f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004030f3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004030f4 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004030f5 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004030f6 mov edi, eax */ { edi = (u32)(eax); }
  /* 004030f8 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 004030fb test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004030fd jne 0x403103 */ if (!ZF_) goto L_00403103;
  /* 004030ff xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00403101 jmp 0x40311b */ goto L_0040311b;
L_00403103:;
  /* 00403103 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403106 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403108 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 0040310d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0040310f add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403111 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403114 mov esi, edx */ { esi = (u32)(edx); }
  /* 00403116 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00403119 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_0040311b:;
  /* 0040311b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040311d je 0x403162 */ if (ZF_) goto L_00403162;
  /* 0040311f mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403122 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403124 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00403129 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0040312b add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040312d sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403130 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403132 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403135 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403137 cmp esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403139 jae 0x403162 */ if (!CF_) goto L_00403162;
  /* 0040313b mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0040313e mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403141 mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00403144 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403145 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403146 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403147 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403148 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 0040314d call 0x403ea0 */ esp -= 4; M32(esp) = 0x403152u; SAVEALL; F_00403ea0(c); ABI_CHECK(0x403ea0u, 0x40314du); RETCHK(0x403152u, 0x40314du); LOADALL;
  /* 00403152 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403155 add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403158 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 0040315b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040315c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040315d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040315e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040315f ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_00403162:;
  /* 00403162 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403165 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403168 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403169 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040316a lea eax, [ebp + 8] */ eax = (u32)((u32)(ebp + 0x8u));
  /* 0040316d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040316e call 0x403290 */ esp -= 4; M32(esp) = 0x403173u; SAVEALL; F_00403290(c); ABI_CHECK(0x403290u, 0x40316eu); RETCHK(0x403173u, 0x40316eu); LOADALL;
  /* 00403173 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403174 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403175 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403176 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403177 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00403180(CPU *c) {
  NATIVE_HOOK(0x403180u) REGS; LOADALL;
L_00403180:;
  /* 00403180 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00403182 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00403184 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00403187 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0040318a mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0040318d mov dword ptr [eax + 0x10], ecx */ { const u32 m_ = (u32)(eax + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00403190 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004031a0(CPU *c) {
  NATIVE_HOOK(0x4031a0u) REGS; LOADALL;
L_004031a0:;
  /* 004031a0 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004031a3 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004031a5 jne 0x4031a8 */ if (!ZF_) goto L_004031a8;
  /* 004031a7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004031a8:;
  /* 004031a8 mov ecx, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004031ab sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004031ad mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 004031b2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004031b4 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004031b7 mov eax, edx */ { eax = (u32)(edx); }
  /* 004031b9 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004031bc add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004031be ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004031c0(CPU *c) {
  NATIVE_HOOK(0x4031c0u) REGS; LOADALL;
L_004031c0:;
  /* 004031c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004031c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004031c3 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004031c4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004031c5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004031c6 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004031c7 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004031c9 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 004031cc test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004031ce mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004031d0 jne 0x4031d6 */ if (!ZF_) goto L_004031d6;
  /* 004031d2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004031d4 jmp 0x4031ec */ goto L_004031ec;
L_004031d6:;
  /* 004031d6 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004031d9 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004031db mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 004031e0 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004031e2 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004031e5 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004031e7 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004031ea add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_004031ec:;
  /* 004031ec test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004031ee je 0x40322d */ if (ZF_) goto L_0040322d;
  /* 004031f0 mov edx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); edx = (u32)(M32(m_)); }
  /* 004031f3 sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004031f5 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 004031fa imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004031fc sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004031ff mov eax, edx */ { eax = (u32)(edx); }
  /* 00403201 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403204 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403206 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403208 jae 0x40322d */ if (!CF_) goto L_0040322d;
  /* 0040320a mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 0040320d mov esi, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); esi = (u32)(M32(m_)); }
  /* 00403210 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403211 mov ecx, 1 */ { ecx = (u32)(0x1u); }
  /* 00403216 mov eax, esi */ { eax = (u32)(esi); }
  /* 00403218 call 0x403f40 */ esp -= 4; M32(esp) = 0x40321du; SAVEALL; F_00403f40(c); ABI_CHECK(0x403f40u, 0x403218u); RETCHK(0x40321du, 0x403218u); LOADALL;
  /* 0040321d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403220 add esi, 0x24 */ { u32 a_ = esi, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403223 mov dword ptr [edi + 8], esi */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(esi); }
  /* 00403226 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403227 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403228 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403229 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040322b pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040322c ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0040322d:;
  /* 0040322d mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403230 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403231 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403232 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00403235 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403236 call 0x4034b0 */ esp -= 4; M32(esp) = 0x40323bu; SAVEALL; F_004034b0(c); ABI_CHECK(0x4034b0u, 0x403236u); RETCHK(0x40323bu, 0x403236u); LOADALL;
  /* 0040323b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040323c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040323d pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040323e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403240 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403241 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403250(CPU *c) {
  NATIVE_HOOK(0x403250u) REGS; LOADALL;
L_00403250:;
  /* 00403250 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00403252 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00403254 mov dword ptr [eax + 4], ecx */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00403257 mov dword ptr [eax + 8], ecx */ { const u32 m_ = (u32)(eax + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0040325a mov dword ptr [eax + 0xc], ecx */ { const u32 m_ = (u32)(eax + 0xcu); M32(m_) = (u32)(ecx); }
  /* 0040325d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403260(CPU *c) {
  NATIVE_HOOK(0x403260u) REGS; LOADALL;
L_00403260:;
  /* 00403260 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403261 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00403263 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00403266 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403268 je 0x403273 */ if (ZF_) goto L_00403273;
  /* 0040326a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040326b call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403270u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40326bu); RETCHK(0x403270u, 0x40326bu); LOADALL;
  /* 00403270 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00403273:;
  /* 00403273 mov dword ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(0x0u); }
  /* 0040327a mov dword ptr [esi + 8], 0 */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(0x0u); }
  /* 00403281 mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
  /* 00403288 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403289 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403290(CPU *c) {
  NATIVE_HOOK(0x403290u) REGS; LOADALL;
L_00403290:;
  /* 00403290 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403291 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403293 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403294 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00403297 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403298 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0040329b test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040329d je 0x4032bc */ if (ZF_) goto L_004032bc;
  /* 0040329f mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004032a2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004032a4 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004032a9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004032ab add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004032ad sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004032b0 mov eax, edx */ { eax = (u32)(edx); }
  /* 004032b2 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004032b5 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004032b7 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004032ba jne 0x4032c0 */ if (!ZF_) goto L_004032c0;
L_004032bc:;
  /* 004032bc xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004032be jmp 0x4032d7 */ goto L_004032d7;
L_004032c0:;
  /* 004032c0 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004032c2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004032c4 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004032c9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004032cb add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004032cd sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004032d0 mov esi, edx */ { esi = (u32)(edx); }
  /* 004032d2 shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 004032d5 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_004032d7:;
  /* 004032d7 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 004032da push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004032db push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004032dd push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004032de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004032df call 0x403540 */ esp -= 4; M32(esp) = 0x4032e4u; SAVEALL; F_00403540(c); ABI_CHECK(0x403540u, 0x4032dfu); RETCHK(0x4032e4u, 0x4032dfu); LOADALL;
  /* 004032e4 imul esi, esi, 0x1c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004032e7 add esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004032ea mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004032ed mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 004032ef pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004032f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004032f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004032f2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00403300(CPU *c) {
  NATIVE_HOOK(0x403300u) REGS; LOADALL;
L_00403300:;
  /* 00403300 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403301 mov edi, eax */ { edi = (u32)(eax); }
  /* 00403303 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00403305 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403307 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 0040330a mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 0040330d mov dword ptr [esi + 0xc], eax */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(eax); }
  /* 00403310 jne 0x403316 */ if (!ZF_) goto L_00403316;
  /* 00403312 xor al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 1); eax = (eax & 0xffffff00u) | ((u32)(r_) & 0xffu); }
  /* 00403314 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403315 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00403316:;
  /* 00403316 cmp edi, 0x9249249 */ { u32 a_ = edi, b_ = 0x9249249u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040331c jbe 0x403323 */ if ((CF_|ZF_)) goto L_00403323;
  /* 0040331e jmp 0x49ac70 */ SAVEALL; F_0049ac70(c); return;
L_00403323:;
  /* 00403323 imul edi, edi, 0x1c */ { s64 p_ = (s64)(s32)edi * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; edi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403326 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403327 call 0x5fe934 */ esp -= 4; M32(esp) = 0x40332cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x403327u); RETCHK(0x40332cu, 0x403327u); LOADALL;
  /* 0040332c add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0040332e add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403331 mov dword ptr [esi + 4], eax */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00403334 mov dword ptr [esi + 8], eax */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403337 mov dword ptr [esi + 0xc], edi */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edi); }
  /* 0040333a mov al, 1 */ { eax = (eax & 0xffffff00u) | ((u32)(0x1u) & 0xffu); }
  /* 0040333c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040333d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403340(CPU *c) {
  NATIVE_HOOK(0x403340u) REGS; LOADALL;
L_00403340:;
  /* 00403340 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00403343 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403344 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00403346 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403348 je 0x40338f */ if (ZF_) goto L_0040338f;
  /* 0040334a mov eax, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); eax = (u32)(M32(m_)); }
  /* 0040334d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00403350 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403351 mov edi, dword ptr [ecx + eax*4] */ { const u32 m_ = (u32)(ecx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 00403354 cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403358 jb 0x403366 */ if (CF_) goto L_00403366;
  /* 0040335a mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0040335d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0040335e call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403363u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40335eu); RETCHK(0x403363u, 0x40335eu); LOADALL;
  /* 00403363 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00403366:;
  /* 00403366 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0040336d mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00403370 mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00403373 mov edx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403376 mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403379 inc edx */ { u32 a_ = edx; u32 r_ = (a_ + 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0040337a mov eax, edx */ { eax = (u32)(edx); }
  /* 0040337c cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040337e mov dword ptr [esi + 0xc], edx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(edx); }
  /* 00403381 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403382 ja 0x403387 */ if (!(CF_|ZF_)) goto L_00403387;
  /* 00403384 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
L_00403387:;
  /* 00403387 dec dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0040338a jne 0x40338f */ if (!ZF_) goto L_0040338f;
  /* 0040338c mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
L_0040338f:;
  /* 0040338f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403390 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004033a0(CPU *c) {
  NATIVE_HOOK(0x4033a0u) REGS; LOADALL;
L_004033a0:;
  /* 004033a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004033a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004033a3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004033a4 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004033a6 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004033a9 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004033ac inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004033ad cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004033af push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004033b0 ja 0x4033b9 */ if (!(CF_|ZF_)) goto L_004033b9;
  /* 004033b2 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004033b4 call 0x4038d0 */ esp -= 4; M32(esp) = 0x4033b9u; SAVEALL; F_004038d0(c); ABI_CHECK(0x4038d0u, 0x4033b4u); RETCHK(0x4033b9u, 0x4033b4u); LOADALL;
L_004033b9:;
  /* 004033b9 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 004033bc mov edx, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); edx = (u32)(M32(m_)); }
  /* 004033bf mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004033c2 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004033c4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004033c6 ja 0x4033ca */ if (!(CF_|ZF_)) goto L_004033ca;
  /* 004033c8 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
L_004033ca:;
  /* 004033ca mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004033cd cmp dword ptr [ecx + esi*4], 0 */ { const u32 m_ = (u32)(ecx + esi * 4u); u32 a_ = M32(m_), b_ = 0x0u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004033d1 jne 0x4033e3 */ if (!ZF_) goto L_004033e3;
  /* 004033d3 push 0x1c */ { u32 v_ = 0x1cu; esp -= 4; M32(esp) = v_; }
  /* 004033d5 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4033dau; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4033d5u); RETCHK(0x4033dau, 0x4033d5u); LOADALL;
  /* 004033da mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004033dd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004033e0 mov dword ptr [edx + esi*4], eax */ { const u32 m_ = (u32)(edx + esi * 4u); M32(m_) = (u32)(eax); }
L_004033e3:;
  /* 004033e3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004033e6 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 004033e9 mov edx, dword ptr [ecx + esi*4] */ { const u32 m_ = (u32)(ecx + esi * 4u); edx = (u32)(M32(m_)); }
  /* 004033ec push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004033ed push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004033ee call 0x403d80 */ esp -= 4; M32(esp) = 0x4033f3u; SAVEALL; F_00403d80(c); ABI_CHECK(0x403d80u, 0x4033eeu); RETCHK(0x4033f3u, 0x4033eeu); LOADALL;
  /* 004033f3 mov eax, dword ptr [ebx + 0x10] */ { const u32 m_ = (u32)(ebx + 0x10u); eax = (u32)(M32(m_)); }
  /* 004033f6 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004033f9 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004033fa pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004033fb mov dword ptr [ebx + 0x10], eax */ { const u32 m_ = (u32)(ebx + 0x10u); M32(m_) = (u32)(eax); }
  /* 004033fe pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004033ff pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403400 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00403410(CPU *c) {
  NATIVE_HOOK(0x403410u) REGS; LOADALL;
L_00403410:;
  /* 00403410 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00403413 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403414 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00403416 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403418 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403419 je 0x403469 */ if (ZF_) goto L_00403469;
  /* 0040341b jmp 0x403420 */ goto L_00403420;
L_00403420:;
  /* 00403420 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00403423 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403425 je 0x403464 */ if (ZF_) goto L_00403464;
  /* 00403427 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040342a lea eax, [eax + ecx - 1] */ eax = (u32)((u32)(eax + ecx + 0xffffffffu));
  /* 0040342e mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403431 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403433 ja 0x403437 */ if (!(CF_|ZF_)) goto L_00403437;
  /* 00403435 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00403437:;
  /* 00403437 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0040343a mov edi, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 0040343d cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403441 jb 0x40344f */ if (CF_) goto L_0040344f;
  /* 00403443 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00403446 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403447 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x40344cu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403447u); RETCHK(0x40344cu, 0x403447u); LOADALL;
  /* 0040344c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0040344f:;
  /* 0040344f mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00403456 mov dword ptr [edi + 0x14], ebx */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00403459 mov byte ptr [edi + 4], bl */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 0040345c dec dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_); u32 r_ = (a_ - 1u) & 0xffffffffu; M32(m_) = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 0040345f jne 0x403464 */ if (!ZF_) goto L_00403464;
  /* 00403461 mov dword ptr [esi + 0xc], ebx */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(ebx); }
L_00403464:;
  /* 00403464 cmp dword ptr [esi + 0x10], ebx */ { const u32 m_ = (u32)(esi + 0x10u); u32 a_ = M32(m_), b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403467 jne 0x403420 */ if (!ZF_) goto L_00403420;
L_00403469:;
  /* 00403469 mov edi, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); edi = (u32)(M32(m_)); }
  /* 0040346c cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040346e jbe 0x403489 */ if ((CF_|ZF_)) goto L_00403489;
L_00403470:;
  /* 00403470 mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00403473 mov eax, dword ptr [ecx + edi*4 - 4] */ { const u32 m_ = (u32)(ecx + edi * 4u + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00403477 dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00403478 cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040347a je 0x403485 */ if (ZF_) goto L_00403485;
  /* 0040347c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040347d call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403482u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40347du); RETCHK(0x403482u, 0x40347du); LOADALL;
  /* 00403482 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00403485:;
  /* 00403485 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403487 ja 0x403470 */ if (!(CF_|ZF_)) goto L_00403470;
L_00403489:;
  /* 00403489 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 0040348c cmp eax, ebx */ { u32 a_ = eax, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040348e je 0x403499 */ if (ZF_) goto L_00403499;
  /* 00403490 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403491 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403496u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403491u); RETCHK(0x403496u, 0x403491u); LOADALL;
  /* 00403496 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00403499:;
  /* 00403499 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040349a mov dword ptr [esi + 8], ebx */ { const u32 m_ = (u32)(esi + 0x8u); M32(m_) = (u32)(ebx); }
  /* 0040349d mov dword ptr [esi + 4], ebx */ { const u32 m_ = (u32)(esi + 0x4u); M32(m_) = (u32)(ebx); }
  /* 004034a0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004034a1 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004034b0(CPU *c) {
  NATIVE_HOOK(0x4034b0u) REGS; LOADALL;
L_004034b0:;
  /* 004034b0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004034b1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004034b3 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004034b4 mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 004034b7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004034b8 mov esi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); esi = (u32)(M32(m_)); }
  /* 004034bb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004034bd je 0x4034da */ if (ZF_) goto L_004034da;
  /* 004034bf mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004034c2 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004034c4 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 004034c9 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004034cb sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004034ce mov eax, edx */ { eax = (u32)(edx); }
  /* 004034d0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004034d3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004034d5 mov dword ptr [ebp + 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(eax); }
  /* 004034d8 jne 0x4034de */ if (!ZF_) goto L_004034de;
L_004034da:;
  /* 004034da xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 004034dc jmp 0x4034f3 */ goto L_004034f3;
L_004034de:;
  /* 004034de mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004034e0 sub ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004034e2 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 004034e7 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004034e9 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004034ec mov esi, edx */ { esi = (u32)(edx); }
  /* 004034ee shr esi, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 004034f1 add esi, edx */ { u32 a_ = esi, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_004034f3:;
  /* 004034f3 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 004034f6 push 1 */ { u32 v_ = 0x1u; esp -= 4; M32(esp) = v_; }
  /* 004034f8 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004034f9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004034fa call 0x403a10 */ esp -= 4; M32(esp) = 0x4034ffu; SAVEALL; F_00403a10(c); ABI_CHECK(0x403a10u, 0x4034fau); RETCHK(0x4034ffu, 0x4034fau); LOADALL;
  /* 004034ff mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00403502 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403505 lea ecx, [esi + esi*8] */ ecx = (u32)((u32)(esi + esi * 8u));
  /* 00403508 lea ecx, [edx + ecx*4] */ ecx = (u32)((u32)(edx + ecx * 4u));
  /* 0040350b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040350c mov dword ptr [eax], ecx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(ecx); }
  /* 0040350e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040350f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403510 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00403520(CPU *c) {
  NATIVE_HOOK(0x403520u) REGS; LOADALL;
L_00403520:;
  /* 00403520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403523 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403526 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403527 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 0040352a call 0x403f60 */ esp -= 4; M32(esp) = 0x40352fu; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x40352au); RETCHK(0x40352fu, 0x40352au); LOADALL;
  /* 0040352f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403532 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403533 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00403540(CPU *c) {
  NATIVE_HOOK(0x403540u) REGS; LOADALL;
L_00403540:;
  /* 00403540 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403541 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403543 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403545 push 0x61d438 */ { u32 v_ = 0x61d438u; esp -= 4; M32(esp) = v_; }
  /* 0040354a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00403550 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403551 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00403558 sub esp, 0x2c */ { u32 a_ = esp, b_ = 0x2cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040355b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00403560 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403561 mov ebx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00403564 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403565 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00403568 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403569 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 0040356c push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 0040356e xor edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); edi = (u32)(r_); }
  /* 00403570 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00403573 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 00403576 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403577 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403578 lea ecx, [ebp - 0x30] */ ecx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 0040357b mov dword ptr [ebp - 0x18], 0xf */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(0xfu); }
  /* 00403582 mov dword ptr [ebp - 0x1c], edi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edi); }
  /* 00403585 mov byte ptr [ebp - 0x2c], 0 */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); M8(m_) = (u8)(0x0u); }
  /* 00403589 call 0x404140 */ esp -= 4; M32(esp) = 0x40358eu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x403589u); RETCHK(0x40358eu, 0x403589u); LOADALL;
  /* 0040358e mov dword ptr [ebp - 4], edi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(edi); }
  /* 00403591 mov edi, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edi = (u32)(M32(m_)); }
  /* 00403594 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403596 jne 0x40359c */ if (!ZF_) goto L_0040359c;
  /* 00403598 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0040359a jmp 0x4035b4 */ goto L_004035b4;
L_0040359c:;
  /* 0040359c mov ecx, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040359f sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004035a1 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004035a6 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004035a8 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004035aa sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004035ad mov ecx, edx */ { ecx = (u32)(edx); }
  /* 004035af shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004035b2 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_004035b4:;
  /* 004035b4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004035b6 je 0x403838 */ if (ZF_) goto L_00403838;
  /* 004035bc test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004035be jne 0x4035c4 */ if (!ZF_) goto L_004035c4;
  /* 004035c0 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004035c2 jmp 0x4035df */ goto L_004035df;
L_004035c4:;
  /* 004035c4 mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004035c7 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004035ca sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004035cc mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004035d1 imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004035d3 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004035d5 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004035d8 mov eax, edx */ { eax = (u32)(edx); }
  /* 004035da shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004035dd add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004035df:;
  /* 004035df mov edx, 0x9249249 */ { edx = (u32)(0x9249249u); }
  /* 004035e4 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004035e6 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004035e8 jae 0x4035ef */ if (!CF_) goto L_004035ef;
  /* 004035ea call 0x49ac70 */ esp -= 4; M32(esp) = 0x4035efu; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x4035eau); RETCHK(0x4035efu, 0x4035eau); LOADALL;
L_004035ef:;
  /* 004035ef mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004035f2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004035f4 jne 0x4035fa */ if (!ZF_) goto L_004035fa;
  /* 004035f6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004035f8 jmp 0x403615 */ goto L_00403615;
L_004035fa:;
  /* 004035fa mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 004035fd mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00403600 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00403602 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00403607 imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403609 add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040360b sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0040360e mov eax, edx */ { eax = (u32)(edx); }
  /* 00403610 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403613 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00403615:;
  /* 00403615 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403617 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403619 jae 0x403751 */ if (!CF_) goto L_00403751;
  /* 0040361f mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00403621 shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403623 mov edx, 0x9249249 */ { edx = (u32)(0x9249249u); }
  /* 00403628 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040362a cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040362c jae 0x403632 */ if (!CF_) goto L_00403632;
  /* 0040362e xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00403630 jmp 0x403634 */ goto L_00403634;
L_00403632:;
  /* 00403632 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00403634:;
  /* 00403634 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00403637 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403639 jne 0x40363f */ if (!ZF_) goto L_0040363f;
  /* 0040363b xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040363d jmp 0x40365a */ goto L_0040365a;
L_0040363f:;
  /* 0040363f mov edx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); edx = (u32)(M32(m_)); }
  /* 00403642 mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 00403645 sub edi, edx */ { u32 a_ = edi, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00403647 mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 0040364c imul edi */ { s64 p_ = (s64)(s32)eax * (s32)edi; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0040364e add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403650 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403653 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403655 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403658 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_0040365a:;
  /* 0040365a add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040365c cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040365e jae 0x40366b */ if (!CF_) goto L_0040366b;
  /* 00403660 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00403662 call 0x4030c0 */ esp -= 4; M32(esp) = 0x403667u; SAVEALL; F_004030c0(c); ABI_CHECK(0x4030c0u, 0x403662u); RETCHK(0x403667u, 0x403662u); LOADALL;
  /* 00403667 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00403669 add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_0040366b:;
  /* 0040366b imul ecx, ecx, 0x1c */ { s64 p_ = (s64)(s32)ecx * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; ecx = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0040366e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040366f mov dword ptr [ebp + 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00403672 call 0x5fe934 */ esp -= 4; M32(esp) = 0x403677u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x403672u); RETCHK(0x403677u, 0x403672u); LOADALL;
  /* 00403677 mov edi, eax */ { edi = (u32)(eax); }
  /* 00403679 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 0040367d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403680 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403683 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00403686 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403687 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403688 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403689 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0040368a mov dword ptr [ebp - 0x34], edi */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(edi); }
  /* 0040368d mov dword ptr [ebp - 0x38], edi */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(edi); }
  /* 00403690 call 0x403fa0 */ esp -= 4; M32(esp) = 0x403695u; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x403690u); RETCHK(0x403695u, 0x403690u); LOADALL;
  /* 00403695 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403698 add esp, 0x14 */ { u32 a_ = esp, b_ = 0x14u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040369b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040369c push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0040369d lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004036a0 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004036a1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004036a2 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004036a4 mov dword ptr [ebp - 0x38], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(eax); }
  /* 004036a7 call 0x403ea0 */ esp -= 4; M32(esp) = 0x4036acu; SAVEALL; F_00403ea0(c); ABI_CHECK(0x403ea0u, 0x4036a7u); RETCHK(0x4036acu, 0x4036a7u); LOADALL;
  /* 004036ac mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004036af mov ecx, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); ecx = (u32)(M32(m_)); }
  /* 004036b2 mov eax, esi */ { eax = (u32)(esi); }
  /* 004036b4 imul eax, eax, 0x1c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004036b7 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004036ba push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004036bb add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004036bd mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004036c0 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004036c1 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004036c2 mov dword ptr [ebp - 0x38], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); M32(m_) = (u32)(ecx); }
  /* 004036c5 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004036c8 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004036c9 call 0x403fa0 */ esp -= 4; M32(esp) = 0x4036ceu; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x4036c9u); RETCHK(0x4036ceu, 0x4036c9u); LOADALL;
  /* 004036ce mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004036d1 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004036d4 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004036d6 je 0x4036f0 */ if (ZF_) goto L_004036f0;
  /* 004036d8 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004036db sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004036dd mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004036e2 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004036e4 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004036e6 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004036e9 mov eax, edx */ { eax = (u32)(edx); }
  /* 004036eb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004036ee add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_004036f0:;
  /* 004036f0 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004036f2 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004036f5 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004036f7 je 0x403717 */ if (ZF_) goto L_00403717;
  /* 004036f9 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 004036fc mov edi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004036ff push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403700 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00403703 call 0x403f60 */ esp -= 4; M32(esp) = 0x403708u; SAVEALL; F_00403f60(c); ABI_CHECK(0x403f60u, 0x403703u); RETCHK(0x403708u, 0x403703u); LOADALL;
  /* 00403708 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 0040370b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040370c call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403711u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x40370cu); RETCHK(0x403711u, 0x40370cu); LOADALL;
  /* 00403711 mov edi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); edi = (u32)(M32(m_)); }
  /* 00403714 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00403717:;
  /* 00403717 mov edx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); edx = (u32)(M32(m_)); }
  /* 0040371a imul esi, esi, 0x1c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 0040371d add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040371f add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403721 mov dword ptr [ebx + 0xc], edx */ { const u32 m_ = (u32)(ebx + 0xcu); M32(m_) = (u32)(edx); }
  /* 00403724 mov dword ptr [ebx + 8], esi */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(esi); }
  /* 00403727 mov dword ptr [ebx + 4], edi */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(edi); }
  /* 0040372a jmp 0x403838 */ goto L_00403838;
L_00403751:;
  /* 00403751 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403754 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00403757 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00403759 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040375b mov dword ptr [ebp + 0x14], edx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edx); }
  /* 0040375e mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00403763 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403765 add edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403768 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0040376b mov eax, edx */ { eax = (u32)(edx); }
  /* 0040376d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403770 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403772 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403774 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403777 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403778 mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 0040377b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0040377c jae 0x403805 */ if (!CF_) goto L_00403805;
  /* 00403782 mov eax, esi */ { eax = (u32)(esi); }
  /* 00403784 imul eax, eax, 0x1c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403787 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0040378a add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040378c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040378d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040378e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00403790 call 0x403fa0 */ esp -= 4; M32(esp) = 0x403795u; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x403790u); RETCHK(0x403795u, 0x403790u); LOADALL;
  /* 00403795 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00403799 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0040379c sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0040379e mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004037a3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004037a5 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004037a7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004037aa sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004037ad mov eax, edx */ { eax = (u32)(edx); }
  /* 004037af push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004037b0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004037b3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004037b5 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004037b7 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004037ba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004037bb lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004037be push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004037bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004037c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004037c2 call 0x403ea0 */ esp -= 4; M32(esp) = 0x4037c7u; SAVEALL; F_00403ea0(c); ABI_CHECK(0x403ea0u, 0x4037c2u); RETCHK(0x4037c7u, 0x4037c2u); LOADALL;
  /* 004037c7 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004037ca mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004037d1 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004037d4 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004037d6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004037d8 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004037db mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004037de sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004037e0 jmp 0x40382d */ goto L_0040382d;
L_00403805:;
  /* 00403805 imul esi, esi, 0x1c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403808 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0040380a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040380b sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040380d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040380e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00403810 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403813 call 0x403fa0 */ esp -= 4; M32(esp) = 0x403818u; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x403813u); RETCHK(0x403818u, 0x403813u); LOADALL;
  /* 00403818 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0040381b mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0040381e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403821 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403824 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00403826 call 0x403e10 */ esp -= 4; M32(esp) = 0x40382bu; SAVEALL; F_00403e10(c); ABI_CHECK(0x403e10u, 0x403826u); RETCHK(0x40382bu, 0x403826u); LOADALL;
  /* 0040382b add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0040382d:;
  /* 0040382d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403830 lea ebx, [ebp - 0x30] */ ebx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00403833 call 0x403df0 */ esp -= 4; M32(esp) = 0x403838u; SAVEALL; F_00403df0(c); ABI_CHECK(0x403df0u, 0x403833u); RETCHK(0x403838u, 0x403833u); LOADALL;
L_00403838:;
  /* 00403838 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040383c jb 0x40384a */ if (CF_) goto L_0040384a;
  /* 0040383e mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00403841 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403842 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403847u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403842u); RETCHK(0x403847u, 0x403842u); LOADALL;
  /* 00403847 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0040384a:;
  /* 0040384a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0040384d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403854 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00403857 call 0x61af31 */ esp -= 4; M32(esp) = 0x40385cu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x403857u); RETCHK(0x40385cu, 0x403857u); LOADALL;
  /* 0040385c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040385d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040385e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040385f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403861 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403862 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_0040372f(CPU *c) {
  NATIVE_HOOK(0x40372fu) REGS; LOADALL;
L_0040372f:;
  /* 0040372f mov esi, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); esi = (u32)(M32(m_)); }
  /* 00403732 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403735 mov edi, dword ptr [ebp - 0x38] */ { const u32 m_ = (u32)(ebp + 0xffffffc8u); edi = (u32)(M32(m_)); }
  /* 00403738 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403739 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040373a call 0x403520 */ esp -= 4; M32(esp) = 0x40373fu; SAVEALL; F_00403520(c); ABI_CHECK(0x403520u, 0x40373au); RETCHK(0x40373fu, 0x40373au); LOADALL;
  /* 0040373f push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403740 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403745u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403740u); RETCHK(0x403745u, 0x403740u); LOADALL;
  /* 00403745 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403748 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0040374a push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 0040374c call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00403751 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403754 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00403757 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00403759 sub edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040375b mov dword ptr [ebp + 0x14], edx */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(edx); }
  /* 0040375e mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 00403763 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403765 add edx, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); u32 a_ = edx, b_ = M32(m_); u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403768 sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0040376b mov eax, edx */ { eax = (u32)(edx); }
  /* 0040376d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403770 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403772 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403774 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403777 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403778 mov dword ptr [ebp - 0x34], ecx */ { const u32 m_ = (u32)(ebp + 0xffffffccu); M32(m_) = (u32)(ecx); }
  /* 0040377b push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0040377c jae 0x403805 */ if (!CF_) goto L_00403805;
  /* 00403782 mov eax, esi */ { eax = (u32)(esi); }
  /* 00403784 imul eax, eax, 0x1c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403787 mov dword ptr [ebp + 0x14], eax */ { const u32 m_ = (u32)(ebp + 0x14u); M32(m_) = (u32)(eax); }
  /* 0040378a add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040378c push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040378d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040378e mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00403790 call 0x403fa0 */ esp -= 4; M32(esp) = 0x403795u; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x403790u); RETCHK(0x403795u, 0x403790u); LOADALL;
  /* 00403795 mov byte ptr [ebp - 4], 3 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x3u); }
  /* 00403799 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 0040379c sub ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 0040379e mov eax, 0x92492493 */ { eax = (u32)(0x92492493u); }
  /* 004037a3 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004037a5 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004037a7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004037aa sar edx, 4 */ { u32 n_ = (4u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004037ad mov eax, edx */ { eax = (u32)(edx); }
  /* 004037af push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004037b0 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 004037b3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004037b5 sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004037b7 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004037ba push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004037bb lea edx, [ebp - 0x30] */ edx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 004037be push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004037bf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004037c0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004037c2 call 0x403ea0 */ esp -= 4; M32(esp) = 0x4037c7u; SAVEALL; F_00403ea0(c); ABI_CHECK(0x403ea0u, 0x4037c2u); RETCHK(0x4037c7u, 0x4037c2u); LOADALL;
  /* 004037c7 mov eax, dword ptr [ebp + 0x14] */ { const u32 m_ = (u32)(ebp + 0x14u); eax = (u32)(M32(m_)); }
  /* 004037ca mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004037d1 mov ecx, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004037d4 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004037d6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 004037d8 add esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004037db mov dword ptr [ebx + 8], ecx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004037de sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004037e0 jmp 0x40382d */ goto L_0040382d;
L_00403805:;
  /* 00403805 imul esi, esi, 0x1c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403808 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0040380a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040380b sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040380d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040380e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00403810 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403813 call 0x403fa0 */ esp -= 4; M32(esp) = 0x403818u; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x403813u); RETCHK(0x403818u, 0x403813u); LOADALL;
  /* 00403818 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0040381b mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0040381e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403821 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403824 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00403826 call 0x403e10 */ esp -= 4; M32(esp) = 0x40382bu; SAVEALL; F_00403e10(c); ABI_CHECK(0x403e10u, 0x403826u); RETCHK(0x40382bu, 0x403826u); LOADALL;
  /* 0040382b add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_0040382d:;
  /* 0040382d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403830 lea ebx, [ebp - 0x30] */ ebx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00403833 call 0x403df0 */ esp -= 4; M32(esp) = 0x403838u; SAVEALL; F_00403df0(c); ABI_CHECK(0x403df0u, 0x403833u); RETCHK(0x403838u, 0x403833u); LOADALL;
  /* 00403838 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040383c jb 0x40384a */ if (CF_) goto L_0040384a;
  /* 0040383e mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00403841 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403842 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403847u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403842u); RETCHK(0x403847u, 0x403842u); LOADALL;
  /* 00403847 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0040384a:;
  /* 0040384a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0040384d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403854 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00403857 call 0x61af31 */ esp -= 4; M32(esp) = 0x40385cu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x403857u); RETCHK(0x40385cu, 0x403857u); LOADALL;
  /* 0040385c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040385d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040385e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040385f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403861 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403862 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_004037e2(CPU *c) {
  NATIVE_HOOK(0x4037e2u) REGS; LOADALL;
L_004037e2:;
  /* 004037e2 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 004037e5 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004037e8 imul eax, eax, 0x1c */ { s64 p_ = (s64)(s32)eax * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; eax = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 004037eb mov edi, dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); edi = (u32)(M32(m_)); }
  /* 004037ee mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 004037f1 add edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 004037f3 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004037f5 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004037f6 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004037f7 call 0x403520 */ esp -= 4; M32(esp) = 0x4037fcu; SAVEALL; F_00403520(c); ABI_CHECK(0x403520u, 0x4037f7u); RETCHK(0x4037fcu, 0x4037f7u); LOADALL;
  /* 004037fc push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004037fe push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00403800 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00403805 imul esi, esi, 0x1c */ { s64 p_ = (s64)(s32)esi * (s64)(s32)0x1cu; u32 r_ = (u32)p_; u32 of_ = p_ != (s64)(s32)r_; esi = (u32)(r_); SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403808 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 0040380a push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040380b sub eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040380d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040380e mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00403810 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403813 call 0x403fa0 */ esp -= 4; M32(esp) = 0x403818u; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x403813u); RETCHK(0x403818u, 0x403813u); LOADALL;
  /* 00403818 mov ecx, dword ptr [ebp - 0x34] */ { const u32 m_ = (u32)(ebp + 0xffffffccu); ecx = (u32)(M32(m_)); }
  /* 0040381b mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 0040381e mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403821 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403824 mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00403826 call 0x403e10 */ esp -= 4; M32(esp) = 0x40382bu; SAVEALL; F_00403e10(c); ABI_CHECK(0x403e10u, 0x403826u); RETCHK(0x40382bu, 0x403826u); LOADALL;
  /* 0040382b add edi, esi */ { u32 a_ = edi, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 0040382d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403830 lea ebx, [ebp - 0x30] */ ebx = (u32)((u32)(ebp + 0xffffffd0u));
  /* 00403833 call 0x403df0 */ esp -= 4; M32(esp) = 0x403838u; SAVEALL; F_00403df0(c); ABI_CHECK(0x403df0u, 0x403833u); RETCHK(0x403838u, 0x403833u); LOADALL;
  /* 00403838 cmp dword ptr [ebp - 0x18], 0x10 */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040383c jb 0x40384a */ if (CF_) goto L_0040384a;
  /* 0040383e mov eax, dword ptr [ebp - 0x2c] */ { const u32 m_ = (u32)(ebp + 0xffffffd4u); eax = (u32)(M32(m_)); }
  /* 00403841 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403842 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403847u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403842u); RETCHK(0x403847u, 0x403842u); LOADALL;
  /* 00403847 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0040384a:;
  /* 0040384a mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0040384d mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403854 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00403857 call 0x61af31 */ esp -= 4; M32(esp) = 0x40385cu; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x403857u); RETCHK(0x40385cu, 0x403857u); LOADALL;
  /* 0040385c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040385d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040385e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040385f mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403861 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403862 ret 0x10 */ c->popped = M32(esp); esp += 20u; SAVEALL; return;
}

void F_00403870(CPU *c) {
  NATIVE_HOOK(0x403870u) REGS; LOADALL;
L_00403870:;
  /* 00403870 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 00403873 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403875 je 0x4038c3 */ if (ZF_) goto L_004038c3;
  /* 00403877 mov ecx, dword ptr [esi + 0xc] */ { const u32 m_ = (u32)(esi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040387a lea eax, [eax + ecx - 1] */ eax = (u32)((u32)(eax + ecx + 0xffffffffu));
  /* 0040387e mov ecx, dword ptr [esi + 8] */ { const u32 m_ = (u32)(esi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403881 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403883 ja 0x403887 */ if (!(CF_|ZF_)) goto L_00403887;
  /* 00403885 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
L_00403887:;
  /* 00403887 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 0040388a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040388b mov edi, dword ptr [edx + eax*4] */ { const u32 m_ = (u32)(edx + eax * 4u); edi = (u32)(M32(m_)); }
  /* 0040388e cmp dword ptr [edi + 0x18], 0x10 */ { const u32 m_ = (u32)(edi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403892 jb 0x4038a0 */ if (CF_) goto L_004038a0;
  /* 00403894 mov eax, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00403897 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403898 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x40389du; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403898u); RETCHK(0x40389du, 0x403898u); LOADALL;
  /* 0040389d add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004038a0:;
  /* 004038a0 mov dword ptr [edi + 0x18], 0xf */ { const u32 m_ = (u32)(edi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004038a7 mov dword ptr [edi + 0x14], 0 */ { const u32 m_ = (u32)(edi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004038ae mov byte ptr [edi + 4], 0 */ { const u32 m_ = (u32)(edi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 004038b2 mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004038b5 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 004038b6 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004038b7 mov dword ptr [esi + 0x10], eax */ { const u32 m_ = (u32)(esi + 0x10u); M32(m_) = (u32)(eax); }
  /* 004038ba jne 0x4038c3 */ if (!ZF_) goto L_004038c3;
  /* 004038bc mov dword ptr [esi + 0xc], 0 */ { const u32 m_ = (u32)(esi + 0xcu); M32(m_) = (u32)(0x0u); }
L_004038c3:;
  /* 004038c3 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004038d0(CPU *c) {
  NATIVE_HOOK(0x4038d0u) REGS; LOADALL;
L_004038d0:;
  /* 004038d0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004038d1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004038d3 sub esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004038d6 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004038d9 mov ecx, 0x9249249 */ { ecx = (u32)(0x9249249u); }
  /* 004038de push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004038df mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 004038e2 sub ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 004038e4 cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004038e6 jae 0x4038ed */ if (!CF_) goto L_004038ed;
  /* 004038e8 call 0x41a8b0 */ esp -= 4; M32(esp) = 0x4038edu; SAVEALL; F_0041a8b0(c); ABI_CHECK(0x41a8b0u, 0x4038e8u); RETCHK(0x4038edu, 0x4038e8u); LOADALL;
L_004038ed:;
  /* 004038ed mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004038ef shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004038f1 cmp ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004038f4 jae 0x4038fb */ if (!CF_) goto L_004038fb;
  /* 004038f6 mov ecx, 8 */ { ecx = (u32)(0x8u); }
L_004038fb:;
  /* 004038fb cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004038fd jae 0x40390f */ if (!CF_) goto L_0040390f;
  /* 004038ff mov edx, 0x9249249 */ { edx = (u32)(0x9249249u); }
  /* 00403904 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403906 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403908 ja 0x40390f */ if (!(CF_|ZF_)) goto L_0040390f;
  /* 0040390a mov dword ptr [ebp + 8], ecx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(ecx); }
  /* 0040390d mov edi, ecx */ { edi = (u32)(ecx); }
L_0040390f:;
  /* 0040390f add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403911 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403912 mov esi, dword ptr [ebx + 0xc] */ { const u32 m_ = (u32)(ebx + 0xcu); esi = (u32)(M32(m_)); }
  /* 00403915 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403918 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403919 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0040391c call 0x5fe934 */ esp -= 4; M32(esp) = 0x403921u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x40391cu); RETCHK(0x403921u, 0x40391cu); LOADALL;
  /* 00403921 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00403924 mov edx, eax */ { edx = (u32)(eax); }
  /* 00403926 shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00403929 lea eax, [esi + ecx] */ eax = (u32)((u32)(esi + ecx));
  /* 0040392c mov dword ptr [ebp - 0xc], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); M32(m_) = (u32)(eax); }
  /* 0040392f mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403932 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403935 sub eax, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); u32 a_ = eax, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403938 mov dword ptr [ebp - 8], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(edx); }
  /* 0040393b add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040393d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403940 sar eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403943 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403946 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403947 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403948 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040394a push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0040394b mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 0040394e call 0x5fe998 */ esp -= 4; M32(esp) = 0x403953u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x40394eu); RETCHK(0x403953u, 0x40394eu); LOADALL;
  /* 00403953 mov edx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); edx = (u32)(M32(m_)); }
  /* 00403956 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00403959 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040395c add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040395e cmp ecx, edi */ { u32 a_ = ecx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403960 mov ecx, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00403963 ja 0x4039a2 */ if (!(CF_|ZF_)) goto L_004039a2;
  /* 00403965 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00403968 mov edx, esi */ { edx = (u32)(esi); }
  /* 0040396a shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 0040396d push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0040396e push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040396f mov esi, edi */ { esi = (u32)(edi); }
  /* 00403971 sub esi, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); u32 a_ = esi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403974 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403975 mov dword ptr [ebp - 0x10], edx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(edx); }
  /* 00403978 call 0x5fe998 */ esp -= 4; M32(esp) = 0x40397du; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x403978u); RETCHK(0x40397du, 0x403978u); LOADALL;
  /* 0040397d mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 00403980 mov edx, eax */ { edx = (u32)(eax); }
  /* 00403982 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403985 add edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403987 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403989 jbe 0x403996 */ if ((CF_|ZF_)) goto L_00403996;
  /* 0040398b mov ecx, esi */ { ecx = (u32)(esi); }
  /* 0040398d xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 0040398f mov edi, edx */ { edi = (u32)(edx); }
  /* 00403991 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 00403993 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_00403996:;
  /* 00403996 mov ecx, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); ecx = (u32)(M32(m_)); }
  /* 00403999 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 0040399b jbe 0x4039e8 */ if ((CF_|ZF_)) goto L_004039e8;
  /* 0040399d mov edi, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); edi = (u32)(M32(m_)); }
  /* 004039a0 jmp 0x4039e1 */ goto L_004039e1;
L_004039a2:;
  /* 004039a2 lea edx, [edi*4] */ edx = (u32)((u32)(edi * 4u));
  /* 004039a9 sar edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004039ac shl edx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 004039af push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004039b0 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004039b1 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004039b2 call 0x5fe998 */ esp -= 4; M32(esp) = 0x4039b7u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x4039b2u); RETCHK(0x4039b7u, 0x4039b2u); LOADALL;
  /* 004039b7 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004039ba lea ecx, [eax + edi*4] */ ecx = (u32)((u32)(eax + edi * 4u));
  /* 004039bd sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004039bf add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 004039c1 mov eax, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); eax = (u32)(M32(m_)); }
  /* 004039c4 sar esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 004039c7 shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 004039ca push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004039cb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004039cc push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004039cd call 0x5fe998 */ esp -= 4; M32(esp) = 0x4039d2u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x4039cdu); RETCHK(0x4039d2u, 0x4039cdu); LOADALL;
  /* 004039d2 mov edx, eax */ { edx = (u32)(eax); }
  /* 004039d4 add esp, 0x18 */ { u32 a_ = esp, b_ = 0x18u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004039d7 add edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 004039d9 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004039db jbe 0x4039e8 */ if ((CF_|ZF_)) goto L_004039e8;
  /* 004039dd mov ecx, edi */ { ecx = (u32)(edi); }
  /* 004039df mov edi, edx */ { edi = (u32)(edx); }
L_004039e1:;
  /* 004039e1 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004039e3 rep stosd dword ptr es:[edi], eax */ { u32 st_ = c->df ? (u32)-4 : 4u; if (!c->df) { u32 v_ = eax; u32 n_ = ecx; for (u32 j_ = 0; j_ < n_; j_++) M32(edi + 4 * j_) = v_; edi += 4 * n_; ecx = 0; } else while (ecx) { M32(edi) = (u32)eax; edi += st_; ecx--; } }
  /* 004039e5 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
L_004039e8:;
  /* 004039e8 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004039eb test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004039ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004039ee je 0x4039f9 */ if (ZF_) goto L_004039f9;
  /* 004039f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004039f1 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4039f6u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4039f1u); RETCHK(0x4039f6u, 0x4039f1u); LOADALL;
  /* 004039f6 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004039f9:;
  /* 004039f9 mov eax, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); eax = (u32)(M32(m_)); }
  /* 004039fc mov ecx, dword ptr [ebp - 8] */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); ecx = (u32)(M32(m_)); }
  /* 004039ff add eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403a01 mov dword ptr [ebx + 4], ecx */ { const u32 m_ = (u32)(ebx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 00403a04 mov dword ptr [ebx + 8], eax */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403a07 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403a08 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403a0a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403a0b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00403a10(CPU *c) {
  NATIVE_HOOK(0x403a10u) REGS; LOADALL;
L_00403a10:;
  /* 00403a10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403a11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403a13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403a15 push 0x61c290 */ { u32 v_ = 0x61c290u; esp -= 4; M32(esp) = v_; }
  /* 00403a1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00403a20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403a21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00403a28 sub esp, 0x30 */ { u32 a_ = esp, b_ = 0x30u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403a2b mov eax, dword ptr [0x683988] */ { const u32 m_ = (u32)(0x683988u); eax = (u32)(M32(m_)); }
  /* 00403a30 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403a31 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403a32 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403a33 mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 00403a38 mov esi, edx */ { esi = (u32)(edx); }
  /* 00403a3a lea edi, [ebp - 0x38] */ edi = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403a3d rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00403a3f mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00403a42 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00403a45 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403a47 mov dword ptr [ebp - 0x14], eax */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(eax); }
  /* 00403a4a mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00403a4d jne 0x403a53 */ if (!ZF_) goto L_00403a53;
  /* 00403a4f xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00403a51 jmp 0x403a69 */ goto L_00403a69;
L_00403a53:;
  /* 00403a53 mov ecx, dword ptr [edi + 0xc] */ { const u32 m_ = (u32)(edi + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403a56 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403a58 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403a5d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403a5f sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403a62 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00403a64 shr ecx, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00403a67 add ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00403a69:;
  /* 00403a69 mov esi, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)(M32(m_)); }
  /* 00403a6c test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403a6e je 0x403c7e */ if (ZF_) goto L_00403c7e;
  /* 00403a74 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403a76 jne 0x403a7c */ if (!ZF_) goto L_00403a7c;
  /* 00403a78 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00403a7a jmp 0x403a92 */ goto L_00403a92;
L_00403a7c:;
  /* 00403a7c mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403a7f sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403a81 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403a86 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403a88 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403a8b mov eax, edx */ { eax = (u32)(edx); }
  /* 00403a8d shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403a90 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00403a92:;
  /* 00403a92 mov edx, 0x71c71c7 */ { edx = (u32)(0x71c71c7u); }
  /* 00403a97 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403a99 cmp edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403a9b jae 0x403aa2 */ if (!CF_) goto L_00403aa2;
  /* 00403a9d call 0x49ac70 */ esp -= 4; M32(esp) = 0x403aa2u; SAVEALL; F_0049ac70(c); ABI_CHECK(0x49ac70u, 0x403a9du); RETCHK(0x403aa2u, 0x403a9du); LOADALL;
L_00403aa2:;
  /* 00403aa2 test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403aa4 jne 0x403aaa */ if (!ZF_) goto L_00403aaa;
  /* 00403aa6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00403aa8 jmp 0x403ac0 */ goto L_00403ac0;
L_00403aaa:;
  /* 00403aaa mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403aad sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403aaf mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403ab4 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403ab6 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403ab9 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403abb shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403abe add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00403ac0:;
  /* 00403ac0 add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403ac2 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403ac4 jae 0x403bc9 */ if (!CF_) goto L_00403bc9;
  /* 00403aca mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00403acc shr eax, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403ace mov edx, 0x71c71c7 */ { edx = (u32)(0x71c71c7u); }
  /* 00403ad3 sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403ad5 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403ad7 jae 0x403add */ if (!CF_) goto L_00403add;
  /* 00403ad9 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00403adb jmp 0x403adf */ goto L_00403adf;
L_00403add:;
  /* 00403add add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00403adf:;
  /* 00403adf test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403ae1 jne 0x403ae7 */ if (!ZF_) goto L_00403ae7;
  /* 00403ae3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00403ae5 jmp 0x403afd */ goto L_00403afd;
L_00403ae7:;
  /* 00403ae7 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403aea sub edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403aec mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403af1 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403af3 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403af6 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403af8 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403afb add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00403afd:;
  /* 00403afd add eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403aff cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403b01 jae 0x403b0e */ if (!CF_) goto L_00403b0e;
  /* 00403b03 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00403b05 call 0x4031a0 */ esp -= 4; M32(esp) = 0x403b0au; SAVEALL; F_004031a0(c); ABI_CHECK(0x4031a0u, 0x403b05u); RETCHK(0x403b0au, 0x403b05u); LOADALL;
  /* 00403b0a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00403b0c add ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
L_00403b0e:;
  /* 00403b0e lea eax, [ecx + ecx*8] */ eax = (u32)((u32)(ecx + ecx * 8u));
  /* 00403b11 shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403b14 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403b15 mov dword ptr [ebp + 0x10], eax */ { const u32 m_ = (u32)(ebp + 0x10u); M32(m_) = (u32)(eax); }
  /* 00403b18 call 0x5fe934 */ esp -= 4; M32(esp) = 0x403b1du; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x403b18u); RETCHK(0x403b1du, 0x403b18u); LOADALL;
  /* 00403b1d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00403b24 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403b27 mov edx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edx = (u32)(M32(m_)); }
  /* 00403b2a mov ebx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ebx = (u32)(M32(m_)); }
  /* 00403b2d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403b2e mov dword ptr [ebp - 0x3c], eax */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); M32(m_) = (u32)(eax); }
  /* 00403b31 call 0x404040 */ esp -= 4; M32(esp) = 0x403b36u; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403b31u); RETCHK(0x403b36u, 0x403b31u); LOADALL;
  /* 00403b36 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403b39 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403b3c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403b3d lea ebx, [ebp - 0x38] */ ebx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403b40 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00403b42 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403b45 call 0x403f40 */ esp -= 4; M32(esp) = 0x403b4au; SAVEALL; F_00403f40(c); ABI_CHECK(0x403f40u, 0x403b45u); RETCHK(0x403b4au, 0x403b45u); LOADALL;
  /* 00403b4a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403b4d mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403b50 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00403b53 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403b56 lea eax, [esi + esi*8] */ eax = (u32)((u32)(esi + esi * 8u));
  /* 00403b59 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403b5a mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403b5d lea eax, [ecx + eax*4] */ eax = (u32)((u32)(ecx + eax * 4u));
  /* 00403b60 call 0x404040 */ esp -= 4; M32(esp) = 0x403b65u; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403b60u); RETCHK(0x403b65u, 0x403b60u); LOADALL;
  /* 00403b65 mov ebx, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); ebx = (u32)(M32(m_)); }
  /* 00403b68 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403b6b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403b6d jne 0x403b73 */ if (!ZF_) goto L_00403b73;
  /* 00403b6f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00403b71 jmp 0x403b89 */ goto L_00403b89;
L_00403b73:;
  /* 00403b73 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403b76 sub ecx, ebx */ { u32 a_ = ecx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403b78 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403b7d imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403b7f sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403b82 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403b84 shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403b87 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
L_00403b89:;
  /* 00403b89 add esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403b8b test ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403b8d je 0x403b98 */ if (ZF_) goto L_00403b98;
  /* 00403b8f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403b90 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403b95u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403b90u); RETCHK(0x403b95u, 0x403b90u); LOADALL;
  /* 00403b95 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00403b98:;
  /* 00403b98 mov eax, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); eax = (u32)(M32(m_)); }
  /* 00403b9b mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00403b9e add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403ba0 lea edx, [esi + esi*8] */ edx = (u32)((u32)(esi + esi * 8u));
  /* 00403ba3 mov dword ptr [edi + 0xc], ecx */ { const u32 m_ = (u32)(edi + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00403ba6 lea ecx, [eax + edx*4] */ ecx = (u32)((u32)(eax + edx * 4u));
  /* 00403ba9 mov dword ptr [edi + 8], ecx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(ecx); }
  /* 00403bac mov dword ptr [edi + 4], eax */ { const u32 m_ = (u32)(edi + 0x4u); M32(m_) = (u32)(eax); }
  /* 00403baf jmp 0x403c7e */ goto L_00403c7e;
L_00403bc9:;
  /* 00403bc9 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00403bcc mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403bcf mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00403bd1 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403bd3 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403bd8 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403bda sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403bdd mov eax, edx */ { eax = (u32)(edx); }
  /* 00403bdf shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403be2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403be4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403be6 jae 0x403c44 */ if (!CF_) goto L_00403c44;
  /* 00403be8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403beb lea eax, [esi + esi*8] */ eax = (u32)((u32)(esi + esi * 8u));
  /* 00403bee shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403bf1 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403bf4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403bf5 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403bf7 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00403bf9 call 0x404040 */ esp -= 4; M32(esp) = 0x403bfeu; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403bf9u); RETCHK(0x403bfeu, 0x403bf9u); LOADALL;
  /* 00403bfe mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00403c05 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403c08 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403c0b mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403c10 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403c12 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403c15 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403c18 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403c1a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403c1d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403c1f sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403c21 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403c24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403c25 lea ebx, [ebp - 0x38] */ ebx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403c28 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00403c2a call 0x403f40 */ esp -= 4; M32(esp) = 0x403c2fu; SAVEALL; F_00403f40(c); ABI_CHECK(0x403f40u, 0x403c2au); RETCHK(0x403c2fu, 0x403c2au); LOADALL;
  /* 00403c2f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403c32 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403c35 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c37 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403c3a mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 00403c3d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c3f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403c42 jmp 0x403c76 */ goto L_00403c76;
L_00403c44:;
  /* 00403c44 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403c47 lea esi, [esi + esi*8] */ esi = (u32)((u32)(esi + esi * 8u));
  /* 00403c4a shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00403c4d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00403c4f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403c52 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00403c54 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00403c57 call 0x404040 */ esp -= 4; M32(esp) = 0x403c5cu; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403c57u); RETCHK(0x403c5cu, 0x403c57u); LOADALL;
  /* 00403c5c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403c5f mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403c62 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00403c65 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00403c67 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403c6a mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00403c6c call 0x403e60 */ esp -= 4; M32(esp) = 0x403c71u; SAVEALL; F_00403e60(c); ABI_CHECK(0x403e60u, 0x403c6cu); RETCHK(0x403c71u, 0x403c6cu); LOADALL;
  /* 00403c71 lea edx, [esi + edi] */ edx = (u32)((u32)(esi + edi));
  /* 00403c74 mov eax, edi */ { eax = (u32)(edi); }
L_00403c76:;
  /* 00403c76 lea ebx, [ebp - 0x38] */ ebx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403c79 call 0x403e40 */ esp -= 4; M32(esp) = 0x403c7eu; SAVEALL; F_00403e40(c); ABI_CHECK(0x403e40u, 0x403c79u); RETCHK(0x403c7eu, 0x403c79u); LOADALL;
L_00403c7e:;
  /* 00403c7e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403c81 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403c88 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00403c8b call 0x61af31 */ esp -= 4; M32(esp) = 0x403c90u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x403c8bu); RETCHK(0x403c90u, 0x403c8bu); LOADALL;
  /* 00403c90 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403c91 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403c92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403c93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403c95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403c96 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00403bb4(CPU *c) {
  NATIVE_HOOK(0x403bb4u) REGS; LOADALL;
L_00403bb4:;
  /* 00403bb4 mov edx, dword ptr [ebp - 0x3c] */ { const u32 m_ = (u32)(ebp + 0xffffffc4u); edx = (u32)(M32(m_)); }
  /* 00403bb7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403bb8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403bbdu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403bb8u); RETCHK(0x403bbdu, 0x403bb8u); LOADALL;
  /* 00403bbd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403bc0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00403bc2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00403bc4 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00403bc9 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00403bcc mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403bcf mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00403bd1 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403bd3 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403bd8 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403bda sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403bdd mov eax, edx */ { eax = (u32)(edx); }
  /* 00403bdf shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403be2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403be4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403be6 jae 0x403c44 */ if (!CF_) goto L_00403c44;
  /* 00403be8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403beb lea eax, [esi + esi*8] */ eax = (u32)((u32)(esi + esi * 8u));
  /* 00403bee shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403bf1 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403bf4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403bf5 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403bf7 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00403bf9 call 0x404040 */ esp -= 4; M32(esp) = 0x403bfeu; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403bf9u); RETCHK(0x403bfeu, 0x403bf9u); LOADALL;
  /* 00403bfe mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00403c05 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403c08 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403c0b mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403c10 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403c12 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403c15 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403c18 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403c1a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403c1d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403c1f sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403c21 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403c24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403c25 lea ebx, [ebp - 0x38] */ ebx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403c28 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00403c2a call 0x403f40 */ esp -= 4; M32(esp) = 0x403c2fu; SAVEALL; F_00403f40(c); ABI_CHECK(0x403f40u, 0x403c2au); RETCHK(0x403c2fu, 0x403c2au); LOADALL;
  /* 00403c2f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403c32 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403c35 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c37 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403c3a mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 00403c3d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c3f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403c42 jmp 0x403c76 */ goto L_00403c76;
L_00403c44:;
  /* 00403c44 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403c47 lea esi, [esi + esi*8] */ esi = (u32)((u32)(esi + esi * 8u));
  /* 00403c4a shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00403c4d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00403c4f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403c52 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00403c54 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00403c57 call 0x404040 */ esp -= 4; M32(esp) = 0x403c5cu; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403c57u); RETCHK(0x403c5cu, 0x403c57u); LOADALL;
  /* 00403c5c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403c5f mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403c62 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00403c65 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00403c67 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403c6a mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00403c6c call 0x403e60 */ esp -= 4; M32(esp) = 0x403c71u; SAVEALL; F_00403e60(c); ABI_CHECK(0x403e60u, 0x403c6cu); RETCHK(0x403c71u, 0x403c6cu); LOADALL;
  /* 00403c71 lea edx, [esi + edi] */ edx = (u32)((u32)(esi + edi));
  /* 00403c74 mov eax, edi */ { eax = (u32)(edi); }
L_00403c76:;
  /* 00403c76 lea ebx, [ebp - 0x38] */ ebx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403c79 call 0x403e40 */ esp -= 4; M32(esp) = 0x403c7eu; SAVEALL; F_00403e40(c); ABI_CHECK(0x403e40u, 0x403c79u); RETCHK(0x403c7eu, 0x403c79u); LOADALL;
  /* 00403c7e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403c81 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403c88 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00403c8b call 0x61af31 */ esp -= 4; M32(esp) = 0x403c90u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x403c8bu); RETCHK(0x403c90u, 0x403c8bu); LOADALL;
  /* 00403c90 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403c91 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403c92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403c93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403c95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403c96 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00403bc0(CPU *c) {
  NATIVE_HOOK(0x403bc0u) REGS; LOADALL;
L_00403bc0:;
  /* 00403bc0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00403bc2 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00403bc4 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00403bc9 mov ebx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ebx = (u32)(M32(m_)); }
  /* 00403bcc mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403bcf mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00403bd1 sub edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403bd3 mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403bd8 imul edx */ { s64 p_ = (s64)(s32)eax * (s32)edx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403bda sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403bdd mov eax, edx */ { eax = (u32)(edx); }
  /* 00403bdf shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403be2 add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403be4 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403be6 jae 0x403c44 */ if (!CF_) goto L_00403c44;
  /* 00403be8 mov edx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edx = (u32)(M32(m_)); }
  /* 00403beb lea eax, [esi + esi*8] */ eax = (u32)((u32)(esi + esi * 8u));
  /* 00403bee shl eax, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403bf1 mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403bf4 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403bf5 add eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403bf7 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00403bf9 call 0x404040 */ esp -= 4; M32(esp) = 0x403bfeu; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403bf9u); RETCHK(0x403bfeu, 0x403bf9u); LOADALL;
  /* 00403bfe mov dword ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x2u); }
  /* 00403c05 mov ecx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403c08 sub ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); u32 a_ = ecx, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403c0b mov eax, 0x38e38e39 */ { eax = (u32)(0x38e38e39u); }
  /* 00403c10 imul ecx */ { s64 p_ = (s64)(s32)eax * (s32)ecx; eax = (u32)p_; edx = (u32)((u64)p_ >> 32); u32 of_ = p_ != (s64)(s32)p_; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00403c12 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00403c15 sar edx, 3 */ { u32 n_ = (3u) & 31u; if (n_) { u32 a_ = edx; s32 s_ = sxt(a_, 4); u32 r_ = (u32)(s_ >> (n_ > 31u ? 31u : n_)) & 0xffffffffu; u32 cf_ = (u32)(s_ >> (n_ - 1u)) & 1u; SETF(OP_RES, 0, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00403c18 mov eax, edx */ { eax = (u32)(edx); }
  /* 00403c1a shr eax, 0x1f */ { u32 n_ = (31u) & 31u; if (n_) { u32 a_ = eax; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); eax = (u32)(r_); } }
  /* 00403c1d add eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403c1f sub esi, eax */ { u32 a_ = esi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403c21 mov eax, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403c24 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403c25 lea ebx, [ebp - 0x38] */ ebx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403c28 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00403c2a call 0x403f40 */ esp -= 4; M32(esp) = 0x403c2fu; SAVEALL; F_00403f40(c); ABI_CHECK(0x403f40u, 0x403c2au); RETCHK(0x403c2fu, 0x403c2au); LOADALL;
  /* 00403c2f mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403c32 mov edx, dword ptr [edi + 8] */ { const u32 m_ = (u32)(edi + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403c35 add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c37 add esp, 8 */ { u32 a_ = esp, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403c3a mov dword ptr [edi + 8], edx */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(edx); }
  /* 00403c3d sub edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c3f mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403c42 jmp 0x403c76 */ goto L_00403c76;
L_00403c44:;
  /* 00403c44 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403c47 lea esi, [esi + esi*8] */ esi = (u32)((u32)(esi + esi * 8u));
  /* 00403c4a shl esi, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = esi; u32 r_ = (n_ < 32u ? (a_ << n_) : 0u) & 0xffffffffu; u32 cf_ = n_ <= 32u ? (a_ >> (32u - n_)) & 1u : 0u; u32 of_ = ((r_ >> 31) & 1u) ^ cf_; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); esi = (u32)(r_); } }
  /* 00403c4d mov edx, ebx */ { edx = (u32)(ebx); }
  /* 00403c4f sub edx, esi */ { u32 a_ = edx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403c51 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403c52 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00403c54 mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00403c57 call 0x404040 */ esp -= 4; M32(esp) = 0x403c5cu; SAVEALL; F_00404040(c); ABI_CHECK(0x404040u, 0x403c57u); RETCHK(0x403c5cu, 0x403c57u); LOADALL;
  /* 00403c5c mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00403c5f mov dword ptr [edi + 8], eax */ { const u32 m_ = (u32)(edi + 0x8u); M32(m_) = (u32)(eax); }
  /* 00403c62 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00403c65 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00403c67 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403c6a mov ebx, edi */ { ebx = (u32)(edi); }
  /* 00403c6c call 0x403e60 */ esp -= 4; M32(esp) = 0x403c71u; SAVEALL; F_00403e60(c); ABI_CHECK(0x403e60u, 0x403c6cu); RETCHK(0x403c71u, 0x403c6cu); LOADALL;
  /* 00403c71 lea edx, [esi + edi] */ edx = (u32)((u32)(esi + edi));
  /* 00403c74 mov eax, edi */ { eax = (u32)(edi); }
L_00403c76:;
  /* 00403c76 lea ebx, [ebp - 0x38] */ ebx = (u32)((u32)(ebp + 0xffffffc8u));
  /* 00403c79 call 0x403e40 */ esp -= 4; M32(esp) = 0x403c7eu; SAVEALL; F_00403e40(c); ABI_CHECK(0x403e40u, 0x403c79u); RETCHK(0x403c7eu, 0x403c79u); LOADALL;
  /* 00403c7e mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403c81 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403c88 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00403c8b call 0x61af31 */ esp -= 4; M32(esp) = 0x403c90u; SAVEALL; F_0061af31(c); ABI_CHECK(0x61af31u, 0x403c8bu); RETCHK(0x403c90u, 0x403c8bu); LOADALL;
  /* 00403c90 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403c91 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403c92 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403c93 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403c95 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403c96 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00403ca0(CPU *c) {
  NATIVE_HOOK(0x403ca0u) REGS; LOADALL;
L_00403ca0:;
  /* 00403ca0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403ca1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403ca3 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 00403ca6 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403ca9 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403caa mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 00403cad cmp edi, ecx */ { u32 a_ = edi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403caf je 0x403cdb */ if (ZF_) goto L_00403cdb;
  /* 00403cb1 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403cb2 mov esi, dword ptr [ebx + 8] */ { const u32 m_ = (u32)(ebx + 0x8u); esi = (u32)(M32(m_)); }
  /* 00403cb5 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403cb7 mov edx, edi */ { edx = (u32)(edi); }
  /* 00403cb9 je 0x403cd7 */ if (ZF_) goto L_00403cd7;
  /* 00403cbb jmp 0x403cc0 */ goto L_00403cc0;
L_00403cc0:;
  /* 00403cc0 mov eax, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); eax = (u32)(M32(m_)); }
  /* 00403cc2 mov dword ptr [edx], eax */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(eax); }
  /* 00403cc4 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00403cc7 mov dword ptr [edx + 4], eax */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(eax); }
  /* 00403cca add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403ccd add edx, 8 */ { u32 a_ = edx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403cd0 cmp ecx, esi */ { u32 a_ = ecx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403cd2 jne 0x403cc0 */ if (!ZF_) goto L_00403cc0;
  /* 00403cd4 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
L_00403cd7:;
  /* 00403cd7 mov dword ptr [ebx + 8], edx */ { const u32 m_ = (u32)(ebx + 0x8u); M32(m_) = (u32)(edx); }
  /* 00403cda pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00403cdb:;
  /* 00403cdb mov dword ptr [eax], edi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edi); }
  /* 00403cdd pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403cde pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403cdf ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00403cf0(CPU *c) {
  NATIVE_HOOK(0x403cf0u) REGS; LOADALL;
L_00403cf0:;
  /* 00403cf0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403cf1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403cf3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00403cf6 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403cf7 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403cf8 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00403cfa call 0x403d10 */ esp -= 4; M32(esp) = 0x403cffu; SAVEALL; F_00403d10(c); ABI_CHECK(0x403d10u, 0x403cfau); RETCHK(0x403cffu, 0x403cfau); LOADALL;
  /* 00403cff mov dword ptr [esi], 0x63cf80 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cf80u); }
  /* 00403d05 mov eax, esi */ { eax = (u32)(esi); }
  /* 00403d07 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403d08 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403d09 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00403d10(CPU *c) {
  NATIVE_HOOK(0x403d10u) REGS; LOADALL;
L_00403d10:;
  /* 00403d10 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403d11 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403d13 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403d15 push 0x61b778 */ { u32 v_ = 0x61b778u; esp -= 4; M32(esp) = v_; }
  /* 00403d1a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00403d20 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403d21 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00403d28 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403d29 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403d2a push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403d2b mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00403d2e mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00403d30 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403d31 mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 00403d34 call 0x5fe98c */ esp -= 4; M32(esp) = 0x403d39u; SAVEALL; F_005fe98c(c); ABI_CHECK(0x5fe98cu, 0x403d34u); RETCHK(0x403d39u, 0x403d34u); LOADALL;
  /* 00403d39 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00403d3b mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00403d3e push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403d40 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 00403d43 mov dword ptr [esi], 0x63cf74 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cf74u); }
  /* 00403d49 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403d4a add edi, 0xc */ { u32 a_ = edi, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00403d4d mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00403d54 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00403d57 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403d58 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00403d5b call 0x404140 */ esp -= 4; M32(esp) = 0x403d60u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x403d5bu); RETCHK(0x403d60u, 0x403d5bu); LOADALL;
  /* 00403d60 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403d63 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403d64 mov eax, esi */ { eax = (u32)(esi); }
  /* 00403d66 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403d67 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403d6e mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403d70 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403d71 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00403d80(CPU *c) {
  NATIVE_HOOK(0x403d80u) REGS; LOADALL;
L_00403d80:;
  /* 00403d80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403d81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403d83 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403d85 push 0x61cc91 */ { u32 v_ = 0x61cc91u; esp -= 4; M32(esp) = v_; }
  /* 00403d8a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00403d90 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403d91 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00403d98 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403d99 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403d9c mov dword ptr [ebp - 0x10], ecx */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(ecx); }
  /* 00403d9f xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00403da1 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403da3 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00403da6 je 0x403dc1 */ if (ZF_) goto L_00403dc1;
  /* 00403da8 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403daa mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00403dad mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00403db4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403db5 mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00403db8 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403dbb push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403dbc call 0x404140 */ esp -= 4; M32(esp) = 0x403dc1u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x403dbcu); RETCHK(0x403dc1u, 0x403dbcu); LOADALL;
L_00403dc1:;
  /* 00403dc1 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403dc4 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403dcb mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403dcd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403dce ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403dd0(CPU *c) {
  NATIVE_HOOK(0x403dd0u) REGS; LOADALL;
L_00403dd0:;
  /* 00403dd0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403dd1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403dd3 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403dd6 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403dd7 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403dda push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00403ddb mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00403dde push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00403ddf push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403de0 call 0x403fa0 */ esp -= 4; M32(esp) = 0x403de5u; SAVEALL; F_00403fa0(c); ABI_CHECK(0x403fa0u, 0x403de0u); RETCHK(0x403de5u, 0x403de0u); LOADALL;
  /* 00403de5 add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403de8 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403de9 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00403df0(CPU *c) {
  NATIVE_HOOK(0x403df0u) REGS; LOADALL;
L_00403df0:;
  /* 00403df0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403df1 mov esi, eax */ { esi = (u32)(eax); }
  /* 00403df3 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403df5 je 0x403e0a */ if (ZF_) goto L_00403e0a;
L_00403df7:;
  /* 00403df7 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403df9 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00403dfb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403dfc mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00403dfe call 0x404140 */ esp -= 4; M32(esp) = 0x403e03u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x403dfeu); RETCHK(0x403e03u, 0x403dfeu); LOADALL;
  /* 00403e03 add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403e06 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e08 jne 0x403df7 */ if (!ZF_) goto L_00403df7;
L_00403e0a:;
  /* 00403e0a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403e0b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403e10(CPU *c) {
  NATIVE_HOOK(0x403e10u) REGS; LOADALL;
L_00403e10:;
  /* 00403e10 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403e11 mov esi, eax */ { esi = (u32)(eax); }
  /* 00403e13 cmp ebx, esi */ { u32 a_ = ebx, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e15 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403e16 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00403e18 je 0x403e36 */ if (ZF_) goto L_00403e36;
  /* 00403e1a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00403e20:;
  /* 00403e20 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403e22 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00403e24 sub esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403e27 sub edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00403e2a push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403e2b mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00403e2d call 0x404140 */ esp -= 4; M32(esp) = 0x403e32u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x403e2du); RETCHK(0x403e32u, 0x403e2du); LOADALL;
  /* 00403e32 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e34 jne 0x403e20 */ if (!ZF_) goto L_00403e20;
L_00403e36:;
  /* 00403e36 mov eax, edi */ { eax = (u32)(edi); }
  /* 00403e38 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403e39 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403e3a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403e40(CPU *c) {
  NATIVE_HOOK(0x403e40u) REGS; LOADALL;
L_00403e40:;
  /* 00403e40 cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e42 je 0x403e5a */ if (ZF_) goto L_00403e5a;
  /* 00403e44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403e45 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00403e46:;
  /* 00403e46 mov edi, eax */ { edi = (u32)(eax); }
  /* 00403e48 add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403e4b cmp eax, edx */ { u32 a_ = eax, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e4d mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 00403e52 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00403e54 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00403e56 jne 0x403e46 */ if (!ZF_) goto L_00403e46;
  /* 00403e58 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403e59 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00403e5a:;
  /* 00403e5a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403e60(CPU *c) {
  NATIVE_HOOK(0x403e60u) REGS; LOADALL;
L_00403e60:;
  /* 00403e60 cmp ebx, edx */ { u32 a_ = ebx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e62 je 0x403e7d */ if (ZF_) goto L_00403e7d;
  /* 00403e64 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403e65 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00403e66:;
  /* 00403e66 sub edx, 0x24 */ { u32 a_ = edx, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00403e69 sub eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403e6c cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e6e mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 00403e73 mov esi, edx */ { esi = (u32)(edx); }
  /* 00403e75 mov edi, eax */ { edi = (u32)(eax); }
  /* 00403e77 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00403e79 jne 0x403e66 */ if (!ZF_) goto L_00403e66;
  /* 00403e7b pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403e7c pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00403e7d:;
  /* 00403e7d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403e80(CPU *c) {
  NATIVE_HOOK(0x403e80u) REGS; LOADALL;
L_00403e80:;
  /* 00403e80 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e82 je 0x403e9b */ if (ZF_) goto L_00403e9b;
  /* 00403e84 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_00403e85:;
  /* 00403e85 mov esi, dword ptr [ecx - 8] */ { const u32 m_ = (u32)(ecx + 0xfffffff8u); esi = (u32)(M32(m_)); }
  /* 00403e88 sub ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00403e8b sub eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403e8e cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403e90 mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 00403e92 mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00403e95 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
  /* 00403e98 jne 0x403e85 */ if (!ZF_) goto L_00403e85;
  /* 00403e9a pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00403e9b:;
  /* 00403e9b ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403ea0(CPU *c) {
  NATIVE_HOOK(0x403ea0u) REGS; LOADALL;
L_00403ea0:;
  /* 00403ea0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403ea1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403ea3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403ea5 push 0x61c281 */ { u32 v_ = 0x61c281u; esp -= 4; M32(esp) = v_; }
  /* 00403eaa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00403eb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403eb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00403eb8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403ebb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403ebc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403ebd mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00403ec0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403ec1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00403ec3 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00403ec6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00403ec8 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00403ecb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00403ece mov edi, edi */ { edi = (u32)(edi); }
L_00403ed0:;
  /* 00403ed0 cmp edi, ebx */ { u32 a_ = edi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403ed2 jbe 0x403f25 */ if ((CF_|ZF_)) goto L_00403f25;
  /* 00403ed4 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00403ed7 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403ed9 mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00403edd je 0x403efa */ if (ZF_) goto L_00403efa;
  /* 00403edf mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00403ee2 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403ee4 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403ee5 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00403eec mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00403eef push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403ef0 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00403ef2 mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00403ef5 call 0x404140 */ esp -= 4; M32(esp) = 0x403efau; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x403ef5u); RETCHK(0x403efau, 0x403ef5u); LOADALL;
L_00403efa:;
  /* 00403efa dec edi */ { u32 a_ = edi; u32 r_ = (a_ - 1u) & 0xffffffffu; edi = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00403efb add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403efe mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00403f01 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 00403f04 jmp 0x403ed0 */ goto L_00403ed0;
L_00403f25:;
  /* 00403f25 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403f28 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403f29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403f2a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403f31 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403f32 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403f34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403f35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403f06(CPU *c) {
  NATIVE_HOOK(0x403f06u) REGS; LOADALL;
L_00403f06:;
  /* 00403f06 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00403f09 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 00403f0c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403f0e je 0x403f1c */ if (ZF_) goto L_00403f1c;
L_00403f10:;
  /* 00403f10 call 0x45c610 */ esp -= 4; M32(esp) = 0x403f15u; SAVEALL; F_0045c610(c); ABI_CHECK(0x45c610u, 0x403f10u); RETCHK(0x403f15u, 0x403f10u); LOADALL;
  /* 00403f15 add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403f18 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403f1a jne 0x403f10 */ if (!ZF_) goto L_00403f10;
L_00403f1c:;
  /* 00403f1c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00403f1e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403f1f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403f20 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00403f25 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00403f28 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403f29 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403f2a mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00403f31 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00403f32 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00403f34 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00403f35 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403f40(CPU *c) {
  NATIVE_HOOK(0x403f40u) REGS; LOADALL;
L_00403f40:;
  /* 00403f40 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403f42 jbe 0x403f5f */ if ((CF_|ZF_)) goto L_00403f5f;
  /* 00403f44 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403f45 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00403f47 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00403f48:;
  /* 00403f48 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00403f4a je 0x403f57 */ if (ZF_) goto L_00403f57;
  /* 00403f4c mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 00403f51 mov esi, ebx */ { esi = (u32)(ebx); }
  /* 00403f53 mov edi, eax */ { edi = (u32)(eax); }
  /* 00403f55 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_00403f57:;
  /* 00403f57 add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00403f5a dec edx */ { u32 a_ = edx; u32 r_ = (a_ - 1u) & 0xffffffffu; edx = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00403f5b jne 0x403f48 */ if (!ZF_) goto L_00403f48;
  /* 00403f5d pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00403f5e pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00403f5f:;
  /* 00403f5f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403f60(CPU *c) {
  NATIVE_HOOK(0x403f60u) REGS; LOADALL;
L_00403f60:;
  /* 00403f60 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403f61 mov esi, eax */ { esi = (u32)(eax); }
  /* 00403f63 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403f65 je 0x403f97 */ if (ZF_) goto L_00403f97;
  /* 00403f67 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403f68 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00403f6a lea ebx, [ebx] */ ebx = (u32)((u32)(ebx));
L_00403f70:;
  /* 00403f70 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403f74 jb 0x403f82 */ if (CF_) goto L_00403f82;
  /* 00403f76 mov eax, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); eax = (u32)(M32(m_)); }
  /* 00403f79 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403f7a call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x403f7fu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x403f7au); RETCHK(0x403f7fu, 0x403f7au); LOADALL;
  /* 00403f7f add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_00403f82:;
  /* 00403f82 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00403f89 mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00403f8c mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00403f8f add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403f92 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403f94 jne 0x403f70 */ if (!ZF_) goto L_00403f70;
  /* 00403f96 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_00403f97:;
  /* 00403f97 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00403f98 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00403fa0(CPU *c) {
  NATIVE_HOOK(0x403fa0u) REGS; LOADALL;
L_00403fa0:;
  /* 00403fa0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00403fa1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00403fa3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403fa5 push 0x61c261 */ { u32 v_ = 0x61c261u; esp -= 4; M32(esp) = v_; }
  /* 00403faa mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00403fb0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00403fb1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00403fb8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00403fbb push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403fbc push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00403fbd mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00403fc0 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403fc1 xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 00403fc3 mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00403fc6 mov edi, ecx */ { edi = (u32)(ecx); }
  /* 00403fc8 mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 00403fcb mov dword ptr [ebp - 4], ebx */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(ebx); }
  /* 00403fce mov edi, edi */ { edi = (u32)(edi); }
L_00403fd0:;
  /* 00403fd0 cmp edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); u32 a_ = edi, b_ = M32(m_); u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403fd3 je 0x404025 */ if (ZF_) goto L_00404025;
  /* 00403fd5 mov dword ptr [ebp - 0x18], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esi); }
  /* 00403fd8 cmp esi, ebx */ { u32 a_ = esi, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00403fda mov byte ptr [ebp - 4], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x1u); }
  /* 00403fde je 0x403ff8 */ if (ZF_) goto L_00403ff8;
  /* 00403fe0 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00403fe2 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00403fe3 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00403fea mov dword ptr [esi + 0x14], ebx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ebx); }
  /* 00403fed push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00403fee mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00403ff0 mov byte ptr [esi + 4], bl */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00403ff3 call 0x404140 */ esp -= 4; M32(esp) = 0x403ff8u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x403ff3u); RETCHK(0x403ff8u, 0x403ff3u); LOADALL;
L_00403ff8:;
  /* 00403ff8 add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00403ffb mov byte ptr [ebp - 4], bl */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)((ebx & 0xffu)); }
  /* 00403ffe mov dword ptr [ebp + 0xc], esi */ { const u32 m_ = (u32)(ebp + 0xcu); M32(m_) = (u32)(esi); }
  /* 00404001 add edi, 0x1c */ { u32 a_ = edi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00404004 jmp 0x403fd0 */ goto L_00403fd0;
L_00404025:;
  /* 00404025 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00404028 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00404029 mov eax, esi */ { eax = (u32)(esi); }
  /* 0040402b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040402c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404033 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00404034 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404036 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404037 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404006(CPU *c) {
  NATIVE_HOOK(0x404006u) REGS; LOADALL;
L_00404006:;
  /* 00404006 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00404009 mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0040400c cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040400e je 0x40401c */ if (ZF_) goto L_0040401c;
L_00404010:;
  /* 00404010 call 0x45c610 */ esp -= 4; M32(esp) = 0x404015u; SAVEALL; F_0045c610(c); ABI_CHECK(0x45c610u, 0x404010u); RETCHK(0x404015u, 0x404010u); LOADALL;
  /* 00404015 add esi, 0x1c */ { u32 a_ = esi, b_ = 0x1cu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00404018 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040401a jne 0x404010 */ if (!ZF_) goto L_00404010;
L_0040401c:;
  /* 0040401c xor ebx, ebx */ { u32 a_ = ebx, b_ = ebx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 0040401e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0040401f push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00404020 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 00404025 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00404028 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00404029 mov eax, esi */ { eax = (u32)(esi); }
  /* 0040402b pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040402c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404033 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00404034 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404036 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404037 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404040(CPU *c) {
  NATIVE_HOOK(0x404040u) REGS; LOADALL;
L_00404040:;
  /* 00404040 cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404042 je 0x404061 */ if (ZF_) goto L_00404061;
  /* 00404044 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404045 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
L_00404046:;
  /* 00404046 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404048 je 0x404055 */ if (ZF_) goto L_00404055;
  /* 0040404a mov ecx, 9 */ { ecx = (u32)(0x9u); }
  /* 0040404f mov esi, edx */ { esi = (u32)(edx); }
  /* 00404051 mov edi, eax */ { edi = (u32)(eax); }
  /* 00404053 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
L_00404055:;
  /* 00404055 add edx, 0x24 */ { u32 a_ = edx, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 00404058 add eax, 0x24 */ { u32 a_ = eax, b_ = 0x24u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040405b cmp edx, ebx */ { u32 a_ = edx, b_ = ebx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040405d jne 0x404046 */ if (!ZF_) goto L_00404046;
  /* 0040405f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00404060 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00404061:;
  /* 00404061 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404070(CPU *c) {
  NATIVE_HOOK(0x404070u) REGS; LOADALL;
L_00404070:;
  /* 00404070 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404072 je 0x40408e */ if (ZF_) goto L_0040408e;
  /* 00404074 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
L_00404075:;
  /* 00404075 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404077 je 0x404083 */ if (ZF_) goto L_00404083;
  /* 00404079 mov esi, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); esi = (u32)(M32(m_)); }
  /* 0040407b mov dword ptr [eax], esi */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(esi); }
  /* 0040407d mov esi, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); esi = (u32)(M32(m_)); }
  /* 00404080 mov dword ptr [eax + 4], esi */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(esi); }
L_00404083:;
  /* 00404083 add ecx, 8 */ { u32 a_ = ecx, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00404086 add eax, 8 */ { u32 a_ = eax, b_ = 0x8u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00404089 cmp ecx, edx */ { u32 a_ = ecx, b_ = edx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040408b jne 0x404075 */ if (!ZF_) goto L_00404075;
  /* 0040408d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_0040408e:;
  /* 0040408e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404090(CPU *c) {
  NATIVE_HOOK(0x404090u) REGS; LOADALL;
L_00404090:;
  /* 00404090 cmp dword ptr [ecx + 0x24], 0x10 */ { const u32 m_ = (u32)(ecx + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404094 jb 0x40409a */ if (CF_) goto L_0040409a;
  /* 00404096 mov eax, dword ptr [ecx + 0x10] */ { const u32 m_ = (u32)(ecx + 0x10u); eax = (u32)(M32(m_)); }
  /* 00404099 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0040409a:;
  /* 0040409a lea eax, [ecx + 0x10] */ eax = (u32)((u32)(ecx + 0x10u));
  /* 0040409d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004040a0(CPU *c) {
  NATIVE_HOOK(0x4040a0u) REGS; LOADALL;
L_004040a0:;
  /* 004040a0 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004040a1 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004040a3 mov dword ptr [esi], 0x63cf74 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cf74u); }
  /* 004040a9 cmp dword ptr [esi + 0x24], 0x10 */ { const u32 m_ = (u32)(esi + 0x24u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004040ad jb 0x4040bb */ if (CF_) goto L_004040bb;
  /* 004040af mov eax, dword ptr [esi + 0x10] */ { const u32 m_ = (u32)(esi + 0x10u); eax = (u32)(M32(m_)); }
  /* 004040b2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004040b3 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4040b8u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4040b3u); RETCHK(0x4040b8u, 0x4040b3u); LOADALL;
  /* 004040b8 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004040bb:;
  /* 004040bb xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004040bd mov dword ptr [esi + 0x24], 0xf */ { const u32 m_ = (u32)(esi + 0x24u); M32(m_) = (u32)(0xfu); }
  /* 004040c4 mov dword ptr [esi + 0x20], eax */ { const u32 m_ = (u32)(esi + 0x20u); M32(m_) = (u32)(eax); }
  /* 004040c7 mov byte ptr [esi + 0x10], al */ { const u32 m_ = (u32)(esi + 0x10u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004040ca mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004040cc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004040cd jmp 0x5fe992 */ goto L_005fe992;
L_005fe992:;
  /* 005fe992 jmp dword ptr [0x62e3d8] */ { const u32 m_ = (u32)(0x62e3d8u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_004040e0(CPU *c) {
  NATIVE_HOOK(0x4040e0u) REGS; LOADALL;
L_004040e0:;
  /* 004040e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004040e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004040e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004040e5 push 0x61b778 */ { u32 v_ = 0x61b778u; esp -= 4; M32(esp) = v_; }
  /* 004040ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004040f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004040f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004040f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004040f9 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004040fa mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004040fc mov dword ptr [ebp - 0x10], esi */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esi); }
  /* 004040ff call 0x5fe93a */ esp -= 4; M32(esp) = 0x404104u; SAVEALL; F_005fe93a(c); ABI_CHECK(0x5fe93au, 0x4040ffu); RETCHK(0x404104u, 0x4040ffu); LOADALL;
  /* 00404104 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00404106 mov dword ptr [ebp - 4], eax */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(eax); }
  /* 00404109 lea ecx, [esi + 0xc] */ ecx = (u32)((u32)(esi + 0xcu));
  /* 0040410c mov dword ptr [esi], 0x63cf74 */ { const u32 m_ = (u32)(esi); M32(m_) = (u32)(0x63cf74u); }
  /* 00404112 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00404114 mov dword ptr [ecx + 0x14], eax */ { const u32 m_ = (u32)(ecx + 0x14u); M32(m_) = (u32)(eax); }
  /* 00404117 mov dword ptr [ecx + 0x18], 0xf */ { const u32 m_ = (u32)(ecx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 0040411e push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040411f mov byte ptr [ecx + 4], al */ { const u32 m_ = (u32)(ecx + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 00404122 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00404125 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404126 call 0x404140 */ esp -= 4; M32(esp) = 0x40412bu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x404126u); RETCHK(0x40412bu, 0x404126u); LOADALL;
  /* 0040412b mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0040412e mov eax, esi */ { eax = (u32)(esi); }
  /* 00404130 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404131 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404138 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 0040413a pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040413b ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404140(CPU *c) {
  NATIVE_HOOK(0x404140u) REGS; LOADALL;
L_00404140:;
  /* 00404140 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404141 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404143 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00404146 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00404147 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404148 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00404149 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0040414c mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0040414e cmp dword ptr [edi + 0x14], eax */ { const u32 m_ = (u32)(edi + 0x14u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404151 jae 0x40415a */ if (!CF_) goto L_0040415a;
  /* 00404153 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00404155 call 0x60166e */ esp -= 4; M32(esp) = 0x40415au; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x404155u); RETCHK(0x40415au, 0x404155u); LOADALL;
L_0040415a:;
  /* 0040415a mov esi, dword ptr [edi + 0x14] */ { const u32 m_ = (u32)(edi + 0x14u); esi = (u32)(M32(m_)); }
  /* 0040415d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00404160 mov eax, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)(M32(m_)); }
  /* 00404163 sub esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00404165 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404167 mov dword ptr [ebp + 8], esi */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(esi); }
  /* 0040416a jae 0x404171 */ if (!CF_) goto L_00404171;
  /* 0040416c mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0040416f mov esi, eax */ { esi = (u32)(eax); }
L_00404171:;
  /* 00404171 cmp ebx, edi */ { u32 a_ = ebx, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404173 jne 0x404197 */ if (!ZF_) goto L_00404197;
  /* 00404175 add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00404177 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00404179 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040417a mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0040417c call 0x404240 */ esp -= 4; M32(esp) = 0x404181u; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x40417cu); RETCHK(0x404181u, 0x40417cu); LOADALL;
  /* 00404181 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00404184 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404185 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00404187 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00404189 call 0x404240 */ esp -= 4; M32(esp) = 0x40418eu; SAVEALL; F_00404240(c); ABI_CHECK(0x404240u, 0x404189u); RETCHK(0x40418eu, 0x404189u); LOADALL;
  /* 0040418e pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040418f pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404190 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00404192 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00404193 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404194 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_00404197:;
  /* 00404197 cmp esi, -2 */ { u32 a_ = esi, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040419a jbe 0x4041a3 */ if ((CF_|ZF_)) goto L_004041a3;
  /* 0040419c mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0040419e call 0x6016ae */ esp -= 4; M32(esp) = 0x4041a3u; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x40419eu); RETCHK(0x4041a3u, 0x40419eu); LOADALL;
L_004041a3:;
  /* 004041a3 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 004041a6 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004041a8 jae 0x4041cb */ if (!CF_) goto L_004041cb;
  /* 004041aa mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 004041ad push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004041ae push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004041af mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 004041b1 call 0x4042c0 */ esp -= 4; M32(esp) = 0x4041b6u; SAVEALL; F_004042c0(c); ABI_CHECK(0x4042c0u, 0x4041b1u); RETCHK(0x4041b6u, 0x4041b1u); LOADALL;
  /* 004041b6 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_004041b8:;
  /* 004041b8 jbe 0x40422f */ if ((CF_|ZF_)) goto L_0040422f;
  /* 004041ba mov ecx, dword ptr [edi + 0x18] */ { const u32 m_ = (u32)(edi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 004041bd mov eax, 0x10 */ { eax = (u32)(0x10u); }
  /* 004041c2 cmp ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004041c4 jb 0x4041f5 */ if (CF_) goto L_004041f5;
  /* 004041c6 mov edi, dword ptr [edi + 4] */ { const u32 m_ = (u32)(edi + 0x4u); edi = (u32)(M32(m_)); }
  /* 004041c9 jmp 0x4041f8 */ goto L_004041f8;
L_004041cb:;
  /* 004041cb test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004041cd jne 0x4041b8 */ if (!ZF_) goto L_004041b8;
  /* 004041cf cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004041d2 mov dword ptr [ebx + 0x14], esi */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(esi); }
  /* 004041d5 jb 0x4041e6 */ if (CF_) goto L_004041e6;
  /* 004041d7 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004041da pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004041db mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004041de pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004041df mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004041e1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004041e2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004041e3 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004041e6:;
  /* 004041e6 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 004041e9 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004041ea mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004041ed pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004041ee mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004041f0 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004041f1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004041f2 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
L_004041f5:;
  /* 004041f5 add edi, 4 */ { u32 a_ = edi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edi = (u32)(r_); }
L_004041f8:;
  /* 004041f8 cmp dword ptr [ebx + 0x18], eax */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004041fb lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 004041fe jb 0x404204 */ if (CF_) goto L_00404204;
  /* 00404200 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404202 jmp 0x404206 */ goto L_00404206;
L_00404204:;
  /* 00404204 mov edx, eax */ { edx = (u32)(eax); }
L_00404206:;
  /* 00404206 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 00404208 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 0040420b add esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 0040420d mov edi, edx */ { edi = (u32)(edx); }
  /* 0040420f mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00404211 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00404214 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 00404216 mov ecx, edx */ { ecx = (u32)(edx); }
  /* 00404218 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0040421b rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 0040421d cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404221 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00404224 mov dword ptr [ebx + 0x14], ecx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00404227 jb 0x40422b */ if (CF_) goto L_0040422b;
  /* 00404229 mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_0040422b:;
  /* 0040422b mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
L_0040422f:;
  /* 0040422f pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00404230 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404231 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 00404233 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00404234 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404235 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00404240(CPU *c) {
  NATIVE_HOOK(0x404240u) REGS; LOADALL;
L_00404240:;
  /* 00404240 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404241 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404243 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404244 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 00404246 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00404249 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040424a mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0040424d cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040424f jae 0x404256 */ if (!CF_) goto L_00404256;
  /* 00404251 call 0x60166e */ esp -= 4; M32(esp) = 0x404256u; SAVEALL; F_0060166e(c); ABI_CHECK(0x60166eu, 0x404251u); RETCHK(0x404256u, 0x404251u); LOADALL;
L_00404256:;
  /* 00404256 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 00404259 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040425b mov edi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); edi = (u32)(M32(m_)); }
  /* 0040425e cmp eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404260 jae 0x404264 */ if (!CF_) goto L_00404264;
  /* 00404262 mov edi, eax */ { edi = (u32)(eax); }
L_00404264:;
  /* 00404264 test edi, edi */ { u32 a_ = edi, b_ = edi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404266 jbe 0x4042b2 */ if ((CF_|ZF_)) goto L_004042b2;
  /* 00404268 mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0040426b cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040426e push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 0040426f lea ebx, [esi + 4] */ ebx = (u32)((u32)(esi + 0x4u));
  /* 00404272 jb 0x404278 */ if (CF_) goto L_00404278;
  /* 00404274 mov edx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); edx = (u32)(M32(m_)); }
  /* 00404276 jmp 0x40427a */ goto L_0040427a;
L_00404278:;
  /* 00404278 mov edx, ebx */ { edx = (u32)(ebx); }
L_0040427a:;
  /* 0040427a cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040427d jb 0x404283 */ if (CF_) goto L_00404283;
  /* 0040427f mov ecx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ecx = (u32)(M32(m_)); }
  /* 00404281 jmp 0x404285 */ goto L_00404285;
L_00404283:;
  /* 00404283 mov ecx, ebx */ { ecx = (u32)(ebx); }
L_00404285:;
  /* 00404285 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00404287 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404288 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 0040428b add edx, eax */ { u32 a_ = edx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040428d add edx, edi */ { u32 a_ = edx, b_ = edi; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); edx = (u32)(r_); }
  /* 0040428f push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00404290 add ecx, eax */ { u32 a_ = ecx, b_ = eax; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); ecx = (u32)(r_); }
  /* 00404292 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404293 call 0x5fe998 */ esp -= 4; M32(esp) = 0x404298u; SAVEALL; F_005fe998(c); ABI_CHECK(0x5fe998u, 0x404293u); RETCHK(0x404298u, 0x404293u); LOADALL;
  /* 00404298 mov eax, dword ptr [esi + 0x14] */ { const u32 m_ = (u32)(esi + 0x14u); eax = (u32)(M32(m_)); }
  /* 0040429b mov ecx, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); ecx = (u32)(M32(m_)); }
  /* 0040429e sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004042a0 add esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004042a3 cmp ecx, 0x10 */ { u32 a_ = ecx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004042a6 mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 004042a9 jb 0x4042ad */ if (CF_) goto L_004042ad;
  /* 004042ab mov ebx, dword ptr [ebx] */ { const u32 m_ = (u32)(ebx); ebx = (u32)(M32(m_)); }
L_004042ad:;
  /* 004042ad mov byte ptr [ebx + eax], 0 */ { const u32 m_ = (u32)(ebx + eax); M8(m_) = (u8)(0x0u); }
  /* 004042b1 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
L_004042b2:;
  /* 004042b2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004042b3 mov eax, esi */ { eax = (u32)(esi); }
  /* 004042b5 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004042b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004042b7 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004042c0(CPU *c) {
  NATIVE_HOOK(0x4042c0u) REGS; LOADALL;
L_004042c0:;
  /* 004042c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004042c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004042c3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004042c5 push 0x61b5d0 */ { u32 v_ = 0x61b5d0u; esp -= 4; M32(esp) = v_; }
  /* 004042ca mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004042d0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004042d1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004042d8 sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004042db mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004042de push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 004042df push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004042e0 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004042e2 or ebx, 0xf */ { u32 a_ = ebx, b_ = 0xfu; u32 r_ = a_ | b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ebx = (u32)(r_); }
  /* 004042e5 cmp ebx, -2 */ { u32 a_ = ebx, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004042e8 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 004042e9 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004042eb mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 004042ee mov dword ptr [ebp - 0x14], esi */ { const u32 m_ = (u32)(ebp + 0xffffffecu); M32(m_) = (u32)(esi); }
  /* 004042f1 jbe 0x4042f7 */ if ((CF_|ZF_)) goto L_004042f7;
  /* 004042f3 mov ebx, eax */ { ebx = (u32)(eax); }
  /* 004042f5 jmp 0x404319 */ goto L_00404319;
L_004042f7:;
  /* 004042f7 mov edi, dword ptr [esi + 0x18] */ { const u32 m_ = (u32)(esi + 0x18u); edi = (u32)(M32(m_)); }
  /* 004042fa mov eax, 0xaaaaaaab */ { eax = (u32)(0xaaaaaaabu); }
  /* 004042ff mul ebx */ { u64 p_ = (u64)eax * ebx; eax = (u32)p_; edx = (u32)(p_ >> 32); u32 of_ = edx != 0; SETF(OP_RES, of_, 0, eax, 4); SETC(OP_RAW, of_, 0, 0, 4); }
  /* 00404301 mov ecx, edi */ { ecx = (u32)(edi); }
  /* 00404303 shr ecx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00404305 shr edx, 1 */ { u32 n_ = (1u) & 31u; if (n_) { u32 a_ = edx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); edx = (u32)(r_); } }
  /* 00404307 cmp edx, ecx */ { u32 a_ = edx, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404309 jae 0x404319 */ if (!CF_) goto L_00404319;
  /* 0040430b mov eax, 0xfffffffe */ { eax = (u32)(0xfffffffeu); }
  /* 00404310 sub eax, ecx */ { u32 a_ = eax, b_ = ecx; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 00404312 cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404314 ja 0x404319 */ if (!(CF_|ZF_)) goto L_00404319;
  /* 00404316 lea ebx, [ecx + edi] */ ebx = (u32)((u32)(ecx + edi));
L_00404319:;
  /* 00404319 lea ecx, [ebx + 1] */ ecx = (u32)((u32)(ebx + 0x1u));
  /* 0040431c push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040431d mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00404324 call 0x5fe934 */ esp -= 4; M32(esp) = 0x404329u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x404324u); RETCHK(0x404329u, 0x404324u); LOADALL;
  /* 00404329 mov edx, eax */ { edx = (u32)(eax); }
  /* 0040432b add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040432e mov dword ptr [ebp + 8], edx */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(edx); }
  /* 00404331 jmp 0x40435c */ goto L_0040435c;
L_0040435c:;
  /* 0040435c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040435f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404361 jbe 0x404387 */ if ((CF_|ZF_)) goto L_00404387;
  /* 00404363 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404367 jb 0x40436e */ if (CF_) goto L_0040436e;
  /* 00404369 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0040436c jmp 0x404371 */ goto L_00404371;
L_0040436e:;
  /* 0040436e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00404371:;
  /* 00404371 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00404373 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00404376 mov edi, edx */ { edi = (u32)(edx); }
  /* 00404378 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0040437a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0040437c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0040437f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00404381 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00404384 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_00404387:;
  /* 00404387 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040438b jb 0x40439f */ if (CF_) goto L_0040439f;
  /* 0040438d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00404390 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404391 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x404396u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x404391u); RETCHK(0x404396u, 0x404391u); LOADALL;
  /* 00404396 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00404399 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040439c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0040439f:;
  /* 0040439f cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004043a2 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004043a5 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004043a8 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004043aa mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 004043ad mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004043b0 jb 0x4043b4 */ if (CF_) goto L_004043b4;
  /* 004043b2 mov eax, edx */ { eax = (u32)(edx); }
L_004043b4:;
  /* 004043b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004043b5 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 004043b9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004043bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004043bd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004043c4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004043c5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004043c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004043c8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00404333(CPU *c) {
  NATIVE_HOOK(0x404333u) REGS; LOADALL;
L_00404333:;
  /* 00404333 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00404336 mov ecx, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); ecx = (u32)(M32(m_)); }
  /* 00404339 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 0040433c inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 0040433d mov dword ptr [ebp - 0x10], esp */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(esp); }
  /* 00404340 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404341 mov byte ptr [ebp - 4], 2 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M8(m_) = (u8)(0x2u); }
  /* 00404345 call 0x404400 */ esp -= 4; M32(esp) = 0x40434au; SAVEALL; F_00404400(c); ABI_CHECK(0x404400u, 0x404345u); RETCHK(0x40434au, 0x404345u); LOADALL;
  /* 0040434a mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 0040434d mov eax, 0x404353 */ { eax = (u32)(0x404353u); }
  /* 00404352 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404353(CPU *c) {
  NATIVE_HOOK(0x404353u) REGS; LOADALL;
L_00404353:;
  /* 00404353 mov ebx, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); ebx = (u32)(M32(m_)); }
  /* 00404356 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00404359 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 0040435c mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040435f test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404361 jbe 0x404387 */ if ((CF_|ZF_)) goto L_00404387;
  /* 00404363 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404367 jb 0x40436e */ if (CF_) goto L_0040436e;
  /* 00404369 mov esi, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); esi = (u32)(M32(m_)); }
  /* 0040436c jmp 0x404371 */ goto L_00404371;
L_0040436e:;
  /* 0040436e add esi, 4 */ { u32 a_ = esi, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
L_00404371:;
  /* 00404371 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 00404373 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00404376 mov edi, edx */ { edi = (u32)(edx); }
  /* 00404378 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0040437a mov ecx, eax */ { ecx = (u32)(eax); }
  /* 0040437c and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 0040437f rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00404381 mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 00404384 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
L_00404387:;
  /* 00404387 cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040438b jb 0x40439f */ if (CF_) goto L_0040439f;
  /* 0040438d mov ecx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); ecx = (u32)(M32(m_)); }
  /* 00404390 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404391 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x404396u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x404391u); RETCHK(0x404396u, 0x404391u); LOADALL;
  /* 00404396 mov edx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edx = (u32)(M32(m_)); }
  /* 00404399 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040439c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_0040439f:;
  /* 0040439f cmp ebx, 0x10 */ { u32 a_ = ebx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004043a2 lea eax, [esi + 4] */ eax = (u32)((u32)(esi + 0x4u));
  /* 004043a5 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004043a8 mov dword ptr [eax], edx */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(edx); }
  /* 004043aa mov dword ptr [esi + 0x18], ebx */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(ebx); }
  /* 004043ad mov dword ptr [esi + 0x14], ecx */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004043b0 jb 0x4043b4 */ if (CF_) goto L_004043b4;
  /* 004043b2 mov eax, edx */ { eax = (u32)(edx); }
L_004043b4:;
  /* 004043b4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004043b5 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 004043b9 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004043bc pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004043bd mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004043c4 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004043c5 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004043c7 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004043c8 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_004043cb(CPU *c) {
  NATIVE_HOOK(0x4043cbu) REGS; LOADALL;
L_004043cb:;
  /* 004043cb mov esi, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); esi = (u32)(M32(m_)); }
  /* 004043ce cmp dword ptr [esi + 0x18], 0x10 */ { const u32 m_ = (u32)(esi + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004043d2 jb 0x4043e0 */ if (CF_) goto L_004043e0;
  /* 004043d4 mov edx, dword ptr [esi + 4] */ { const u32 m_ = (u32)(esi + 0x4u); edx = (u32)(M32(m_)); }
  /* 004043d7 push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 004043d8 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x4043ddu; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x4043d8u); RETCHK(0x4043ddu, 0x4043d8u); LOADALL;
  /* 004043dd add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
L_004043e0:;
  /* 004043e0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004043e2 mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004043e9 mov dword ptr [esi + 0x14], 0 */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(0x0u); }
  /* 004043f0 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004043f2 mov byte ptr [esi + 4], 0 */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 004043f6 call 0x61aed6 */ { SAVEALL; rt_throw(c, 0x62e42cu); }
  /* 004043fb int3 */ TRAP(0x4043fbu, "int3");
}

void F_00404400(CPU *c) {
  NATIVE_HOOK(0x404400u) REGS; LOADALL;
L_00404400:;
  /* 00404400 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404401 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404403 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00404406 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404407 call 0x5fe934 */ esp -= 4; M32(esp) = 0x40440cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x404407u); RETCHK(0x40440cu, 0x404407u); LOADALL;
  /* 0040440c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040440f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404410 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404420(CPU *c) {
  NATIVE_HOOK(0x404420u) REGS; LOADALL;
L_00404420:;
  /* 00404420 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404421 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404423 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00404424 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 00404426 mov edx, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); edx = (u32)(M32(m_)); }
  /* 00404429 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040442c push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040442d push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040442e jb 0x404435 */ if (CF_) goto L_00404435;
  /* 00404430 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00404433 jmp 0x404438 */ goto L_00404438;
L_00404435:;
  /* 00404435 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_00404438:;
  /* 00404438 mov edi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); edi = (u32)(M32(m_)); }
  /* 0040443b cmp edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040443d jb 0x404473 */ if (CF_) goto L_00404473;
  /* 0040443f cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404442 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 00404445 jb 0x40444b */ if (CF_) goto L_0040444b;
  /* 00404447 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00404449 jmp 0x40444d */ goto L_0040444d;
L_0040444b:;
  /* 0040444b mov ecx, eax */ { ecx = (u32)(eax); }
L_0040444d:;
  /* 0040444d mov esi, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); esi = (u32)(M32(m_)); }
  /* 00404450 add esi, ecx */ { u32 a_ = esi, b_ = ecx; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esi = (u32)(r_); }
  /* 00404452 cmp esi, edi */ { u32 a_ = esi, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404454 jbe 0x404473 */ if ((CF_|ZF_)) goto L_00404473;
  /* 00404456 cmp edx, 0x10 */ { u32 a_ = edx, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404459 jb 0x40445d */ if (CF_) goto L_0040445d;
  /* 0040445b mov eax, dword ptr [eax] */ { const u32 m_ = (u32)(eax); eax = (u32)(M32(m_)); }
L_0040445d:;
  /* 0040445d mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00404460 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404461 sub edi, eax */ { u32 a_ = edi, b_ = eax; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); edi = (u32)(r_); }
  /* 00404463 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00404464 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00404465 mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00404467 call 0x404140 */ esp -= 4; M32(esp) = 0x40446cu; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x404467u); RETCHK(0x40446cu, 0x404467u); LOADALL;
  /* 0040446c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 0040446d pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040446e pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040446f pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404470 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00404473:;
  /* 00404473 mov esi, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); esi = (u32)(M32(m_)); }
  /* 00404476 cmp esi, -2 */ { u32 a_ = esi, b_ = 0xfffffffeu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404479 jbe 0x404482 */ if ((CF_|ZF_)) goto L_00404482;
  /* 0040447b mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 0040447d call 0x6016ae */ esp -= 4; M32(esp) = 0x404482u; SAVEALL; F_006016ae(c); ABI_CHECK(0x6016aeu, 0x40447du); RETCHK(0x404482u, 0x40447du); LOADALL;
L_00404482:;
  /* 00404482 mov eax, dword ptr [ebx + 0x18] */ { const u32 m_ = (u32)(ebx + 0x18u); eax = (u32)(M32(m_)); }
  /* 00404485 cmp eax, esi */ { u32 a_ = eax, b_ = esi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404487 jae 0x4044a4 */ if (!CF_) goto L_004044a4;
  /* 00404489 mov edx, dword ptr [ebx + 0x14] */ { const u32 m_ = (u32)(ebx + 0x14u); edx = (u32)(M32(m_)); }
  /* 0040448c push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 0040448d push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 0040448e mov ecx, ebx */ { ecx = (u32)(ebx); }
  /* 00404490 call 0x4042c0 */ esp -= 4; M32(esp) = 0x404495u; SAVEALL; F_004042c0(c); ABI_CHECK(0x4042c0u, 0x404490u); RETCHK(0x404495u, 0x404490u); LOADALL;
  /* 00404495 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
L_00404497:;
  /* 00404497 jbe 0x404508 */ if ((CF_|ZF_)) goto L_00404508;
  /* 00404499 cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 0040449d jb 0x4044ce */ if (CF_) goto L_004044ce;
  /* 0040449f mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004044a2 jmp 0x4044d1 */ goto L_004044d1;
L_004044a4:;
  /* 004044a4 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004044a6 jne 0x404497 */ if (!ZF_) goto L_00404497;
  /* 004044a8 cmp eax, 0x10 */ { u32 a_ = eax, b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004044ab mov dword ptr [ebx + 0x14], esi */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(esi); }
  /* 004044ae jb 0x4044bf */ if (CF_) goto L_004044bf;
  /* 004044b0 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004044b3 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004044b4 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004044b7 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004044b8 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004044ba pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004044bb pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004044bc ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004044bf:;
  /* 004044bf lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 004044c2 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004044c3 mov byte ptr [eax], 0 */ { const u32 m_ = (u32)(eax); M8(m_) = (u8)(0x0u); }
  /* 004044c6 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004044c7 mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004044c9 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004044ca pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004044cb ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004044ce:;
  /* 004044ce lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
L_004044d1:;
  /* 004044d1 mov ecx, esi */ { ecx = (u32)(esi); }
  /* 004044d3 mov esi, edi */ { esi = (u32)(edi); }
  /* 004044d5 mov edi, eax */ { edi = (u32)(eax); }
  /* 004044d7 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004044d9 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 004044dc rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 004044de mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004044e0 and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004044e3 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 004044e5 cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 004044e9 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004044ec mov dword ptr [ebx + 0x14], ecx */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 004044ef jb 0x404501 */ if (CF_) goto L_00404501;
  /* 004044f1 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 004044f4 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004044f5 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
  /* 004044f9 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004044fa mov eax, ebx */ { eax = (u32)(ebx); }
  /* 004044fc pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 004044fd pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004044fe ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_00404501:;
  /* 00404501 lea eax, [ebx + 4] */ eax = (u32)((u32)(ebx + 0x4u));
  /* 00404504 mov byte ptr [eax + ecx], 0 */ { const u32 m_ = (u32)(eax + ecx); M8(m_) = (u8)(0x0u); }
L_00404508:;
  /* 00404508 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00404509 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 0040450a mov eax, ebx */ { eax = (u32)(ebx); }
  /* 0040450c pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 0040450d pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040450e ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00404520(CPU *c) {
  NATIVE_HOOK(0x404520u) REGS; LOADALL;
L_00404520:;
  /* 00404520 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404521 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404523 mov al, byte ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (eax & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 00404526 test al, al */ { u32 a_ = (eax & 0xffu), b_ = (eax & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00404528 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00404529 mov ebx, ecx */ { ebx = (u32)(ecx); }
  /* 0040452b je 0x40455d */ if (ZF_) goto L_0040455d;
  /* 0040452d cmp dword ptr [ebx + 0x18], 0x10 */ { const u32 m_ = (u32)(ebx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404531 jb 0x40455d */ if (CF_) goto L_0040455d;
  /* 00404533 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00404536 test ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404538 mov eax, dword ptr [ebx + 4] */ { const u32 m_ = (u32)(ebx + 0x4u); eax = (u32)(M32(m_)); }
  /* 0040453b push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040453c lea edi, [ebx + 4] */ edi = (u32)((u32)(ebx + 0x4u));
  /* 0040453f jbe 0x404553 */ if ((CF_|ZF_)) goto L_00404553;
  /* 00404541 mov edx, ecx */ { edx = (u32)(ecx); }
  /* 00404543 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404544 shr ecx, 2 */ { u32 n_ = (2u) & 31u; if (n_) { u32 a_ = ecx; u32 r_ = n_ < 32u ? a_ >> n_ : 0u; u32 cf_ = (a_ >> (n_ - 1u)) & 1u; u32 of_ = (a_ >> 31) & 1u; SETF(OP_RES, of_, 0, r_, 4); SETC(OP_RAW, cf_, 0, 0, 4); ecx = (u32)(r_); } }
  /* 00404547 mov esi, eax */ { esi = (u32)(eax); }
  /* 00404549 rep movsd dword ptr es:[edi], dword ptr [esi] */ { u32 st_ = c->df ? (u32)-4 : 4u; while (ecx) { M32(edi) = M32(esi); esi += st_; edi += st_; ecx--; } }
  /* 0040454b mov ecx, edx */ { ecx = (u32)(edx); }
  /* 0040454d and ecx, 3 */ { u32 a_ = ecx, b_ = 0x3u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 00404550 rep movsb byte ptr es:[edi], byte ptr [esi] */ { u32 st_ = c->df ? (u32)-1 : 1u; while (ecx) { M8(edi) = M8(esi); esi += st_; edi += st_; ecx--; } }
  /* 00404552 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
L_00404553:;
  /* 00404553 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404554 call 0x5fe7c4 */ esp -= 4; M32(esp) = 0x404559u; SAVEALL; F_005fe7c4(c); ABI_CHECK(0x5fe7c4u, 0x404554u); RETCHK(0x404559u, 0x404554u); LOADALL;
  /* 00404559 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040455c pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
L_0040455d:;
  /* 0040455d mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00404560 mov dword ptr [ebx + 0x18], 0xf */ { const u32 m_ = (u32)(ebx + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 00404567 mov dword ptr [ebx + 0x14], eax */ { const u32 m_ = (u32)(ebx + 0x14u); M32(m_) = (u32)(eax); }
  /* 0040456a mov byte ptr [ebx + eax + 4], 0 */ { const u32 m_ = (u32)(ebx + eax + 0x4u); M8(m_) = (u8)(0x0u); }
  /* 0040456f pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00404570 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404571 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
}

void F_00404580(CPU *c) {
  NATIVE_HOOK(0x404580u) REGS; LOADALL;
L_00404580:;
  /* 00404580 cmp dword ptr [ecx + 0x18], 0x10 */ { const u32 m_ = (u32)(ecx + 0x18u); u32 a_ = M32(m_), b_ = 0x10u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404584 jb 0x40458a */ if (CF_) goto L_0040458a;
  /* 00404586 mov eax, dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); eax = (u32)(M32(m_)); }
  /* 00404589 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_0040458a:;
  /* 0040458a lea eax, [ecx + 4] */ eax = (u32)((u32)(ecx + 0x4u));
  /* 0040458d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404590(CPU *c) {
  NATIVE_HOOK(0x404590u) REGS; LOADALL;
L_00404590:;
  /* 00404590 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404591 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404593 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404594 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00404597 mov eax, esi */ { eax = (u32)(esi); }
  /* 00404599 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 0040459a lea edi, [eax + 1] */ edi = (u32)((u32)(eax + 0x1u));
  /* 0040459d lea ecx, [ecx] */ ecx = (u32)((u32)(ecx));
L_004045a0:;
  /* 004045a0 mov dl, byte ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (edx & 0xffffff00u) | ((u32)(M8(m_)) & 0xffu); }
  /* 004045a2 inc eax */ { u32 a_ = eax; u32 r_ = (a_ + 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_INC, a_, 1, r_, 4); }
  /* 004045a3 test dl, dl */ { u32 a_ = (edx & 0xffu), b_ = (edx & 0xffu); u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 004045a5 jne 0x4045a0 */ if (!ZF_) goto L_004045a0;
  /* 004045a7 sub eax, edi */ { u32 a_ = eax, b_ = edi; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 004045a9 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004045aa push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004045ab call 0x404420 */ esp -= 4; M32(esp) = 0x4045b0u; SAVEALL; F_00404420(c); ABI_CHECK(0x404420u, 0x4045abu); RETCHK(0x4045b0u, 0x4045abu); LOADALL;
  /* 004045b0 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 004045b1 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004045b2 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004045b3 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004045c0(CPU *c) {
  NATIVE_HOOK(0x4045c0u) REGS; LOADALL;
L_004045c0:;
  /* 004045c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004045c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004045c3 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004045c4 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004045c6 mov esi, ecx */ { esi = (u32)(ecx); }
  /* 004045c8 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004045ca mov dword ptr [esi + 0x14], eax */ { const u32 m_ = (u32)(esi + 0x14u); M32(m_) = (u32)(eax); }
  /* 004045cd mov dword ptr [esi + 0x18], 0xf */ { const u32 m_ = (u32)(esi + 0x18u); M32(m_) = (u32)(0xfu); }
  /* 004045d4 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004045d5 mov byte ptr [esi + 4], al */ { const u32 m_ = (u32)(esi + 0x4u); M8(m_) = (u8)((eax & 0xffu)); }
  /* 004045d8 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004045db push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004045dc call 0x404140 */ esp -= 4; M32(esp) = 0x4045e1u; SAVEALL; F_00404140(c); ABI_CHECK(0x404140u, 0x4045dcu); RETCHK(0x4045e1u, 0x4045dcu); LOADALL;
  /* 004045e1 mov eax, esi */ { eax = (u32)(esi); }
  /* 004045e3 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004045e4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004045e5 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_004045f0(CPU *c) {
  NATIVE_HOOK(0x4045f0u) REGS; LOADALL;
L_004045f0:;
  /* 004045f0 mov eax, ecx */ { eax = (u32)(ecx); }
  /* 004045f2 xor ecx, ecx */ { u32 a_ = ecx, b_ = ecx; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); ecx = (u32)(r_); }
  /* 004045f4 mov edx, eax */ { edx = (u32)(eax); }
  /* 004045f6 mov dword ptr [edx], ecx */ { const u32 m_ = (u32)(edx); M32(m_) = (u32)(ecx); }
  /* 004045f8 mov dword ptr [edx + 4], ecx */ { const u32 m_ = (u32)(edx + 0x4u); M32(m_) = (u32)(ecx); }
  /* 004045fb mov dword ptr [edx + 8], ecx */ { const u32 m_ = (u32)(edx + 0x8u); M32(m_) = (u32)(ecx); }
  /* 004045fe mov dword ptr [edx + 0xc], ecx */ { const u32 m_ = (u32)(edx + 0xcu); M32(m_) = (u32)(ecx); }
  /* 00404601 mov dword ptr [edx + 0x10], ecx */ { const u32 m_ = (u32)(edx + 0x10u); M32(m_) = (u32)(ecx); }
  /* 00404604 mov dword ptr [edx + 0x14], ecx */ { const u32 m_ = (u32)(edx + 0x14u); M32(m_) = (u32)(ecx); }
  /* 00404607 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404610(CPU *c) {
  NATIVE_HOOK(0x404610u) REGS; LOADALL;
L_00404610:;
  /* 00404610 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404611 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404613 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00404615 push 0x656f08 */ { u32 v_ = 0x656f08u; esp -= 4; M32(esp) = v_; }
  /* 0040461a push 0x5fee56 */ { u32 v_ = 0x5fee56u; esp -= 4; M32(esp) = v_; }
  /* 0040461f mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00404625 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404626 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 0040462d sub esp, 0xc */ { u32 a_ = esp, b_ = 0xcu; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00404630 push ebx */ { u32 v_ = ebx; esp -= 4; M32(esp) = v_; }
  /* 00404631 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404632 push edi */ { u32 v_ = edi; esp -= 4; M32(esp) = v_; }
  /* 00404633 mov dword ptr [ebp - 0x18], esp */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(esp); }
  /* 00404636 xor esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); esi = (u32)(r_); }
  /* 00404638 mov dword ptr [ebp - 4], esi */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(esi); }
  /* 0040463b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040463c call dword ptr [0x62e20c] */ { const u32 m_ = (u32)(0x62e20cu); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404642u; SAVEALL; call_ind(c, t_); RETCHK(0x404642u, 0x40463cu); LOADALL; }
  /* 00404642 jmp 0x404670 */ goto L_00404670;
L_00404670:;
  /* 00404670 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00404677 mov eax, esi */ { eax = (u32)(esi); }
  /* 00404679 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0040467c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404683 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00404684 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404685 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00404686 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404688 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404689 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404644(CPU *c) {
  NATIVE_HOOK(0x404644u) REGS; LOADALL;
L_00404644:;
  /* 00404644 mov eax, dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); eax = (u32)(M32(m_)); }
  /* 00404647 mov ecx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); ecx = (u32)(M32(m_)); }
  /* 00404649 mov edx, dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); edx = (u32)(M32(m_)); }
  /* 0040464b mov dword ptr [ebp - 0x1c], edx */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(edx); }
  /* 0040464e mov eax, 1 */ { eax = (u32)(0x1u); }
  /* 00404653 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404654(CPU *c) {
  NATIVE_HOOK(0x404654u) REGS; LOADALL;
L_00404654:;
  /* 00404654 mov esp, dword ptr [ebp - 0x18] */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); esp = (u32)(M32(m_)); }
  /* 00404657 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00404659 cmp dword ptr [ebp - 0x1c], 0xc0000017 */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); u32 a_ = M32(m_), b_ = 0xc0000017u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404660 setne al */ { eax = (eax & 0xffffff00u) | ((u32)((!ZF_) ? 1u : 0u) & 0xffu); }
  /* 00404663 dec eax */ { u32 a_ = eax; u32 r_ = (a_ - 1u) & 0xffffffffu; eax = (u32)(r_); SETF(OP_DEC, a_, 1, r_, 4); }
  /* 00404664 and eax, 0x6c009 */ { u32 a_ = eax, b_ = 0x6c009u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00404669 add eax, 0x80004005 */ { u32 a_ = eax, b_ = 0x80004005u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); eax = (u32)(r_); }
  /* 0040466e mov esi, eax */ { esi = (u32)(eax); }
  /* 00404670 mov dword ptr [ebp - 4], 0xffffffff */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0xffffffffu); }
  /* 00404677 mov eax, esi */ { eax = (u32)(esi); }
  /* 00404679 mov ecx, dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); ecx = (u32)(M32(m_)); }
  /* 0040467c mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404683 pop edi */ { u32 v_ = M32(esp); esp += 4; edi = (u32)(v_); }
  /* 00404684 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404685 pop ebx */ { u32 v_ = M32(esp); esp += 4; ebx = (u32)(v_); }
  /* 00404686 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404688 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404689 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404690(CPU *c) {
  NATIVE_HOOK(0x404690u) REGS; LOADALL;
L_00404690:;
  /* 00404690 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404691 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404693 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00404695 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0040469a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004046a0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004046a1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004046a8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004046a9 mov eax, dword ptr [0x7a6894] */ { const u32 m_ = (u32)(0x7a6894u); eax = (u32)(M32(m_)); }
  /* 004046ae test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004046b0 jne 0x4046ea */ if (!ZF_) goto L_004046ea;
  /* 004046b2 push 0x5c */ { u32 v_ = 0x5cu; esp -= 4; M32(esp) = v_; }
  /* 004046b4 call 0x5fe934 */ esp -= 4; M32(esp) = 0x4046b9u; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x4046b4u); RETCHK(0x4046b9u, 0x4046b4u); LOADALL;
  /* 004046b9 add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 004046bc mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004046bf test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004046c1 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004046c8 je 0x4046e3 */ if (ZF_) goto L_004046e3;
  /* 004046ca push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004046cb call 0x432940 */ esp -= 4; M32(esp) = 0x4046d0u; SAVEALL; F_00432940(c); ABI_CHECK(0x432940u, 0x4046cbu); RETCHK(0x4046d0u, 0x4046cbu); LOADALL;
  /* 004046d0 mov dword ptr [0x7a6894], eax */ { const u32 m_ = (u32)(0x7a6894u); M32(m_) = (u32)(eax); }
  /* 004046d5 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004046d8 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004046df mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004046e1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004046e2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004046e3:;
  /* 004046e3 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004046e5 mov dword ptr [0x7a6894], eax */ { const u32 m_ = (u32)(0x7a6894u); M32(m_) = (u32)(eax); }
L_004046ea:;
  /* 004046ea mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004046ed mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004046f4 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004046f6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004046f7 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404700(CPU *c) {
  NATIVE_HOOK(0x404700u) REGS; LOADALL;
L_00404700:;
  /* 00404700 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404701 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404703 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00404705 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0040470a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00404710 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404711 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00404718 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404719 mov eax, dword ptr [0x7a6b44] */ { const u32 m_ = (u32)(0x7a6b44u); eax = (u32)(M32(m_)); }
  /* 0040471e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404720 jne 0x40475d */ if (!ZF_) goto L_0040475d;
  /* 00404722 push 0x3b4 */ { u32 v_ = 0x3b4u; esp -= 4; M32(esp) = v_; }
  /* 00404727 call 0x5fe934 */ esp -= 4; M32(esp) = 0x40472cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x404727u); RETCHK(0x40472cu, 0x404727u); LOADALL;
  /* 0040472c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040472f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00404732 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404734 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0040473b je 0x404756 */ if (ZF_) goto L_00404756;
  /* 0040473d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040473e call 0x483110 */ esp -= 4; M32(esp) = 0x404743u; SAVEALL; F_00483110(c); ABI_CHECK(0x483110u, 0x40473eu); RETCHK(0x404743u, 0x40473eu); LOADALL;
  /* 00404743 mov dword ptr [0x7a6b44], eax */ { const u32 m_ = (u32)(0x7a6b44u); M32(m_) = (u32)(eax); }
  /* 00404748 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0040474b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404752 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404754 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404755 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00404756:;
  /* 00404756 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00404758 mov dword ptr [0x7a6b44], eax */ { const u32 m_ = (u32)(0x7a6b44u); M32(m_) = (u32)(eax); }
L_0040475d:;
  /* 0040475d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00404760 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404767 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404769 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040476a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404770(CPU *c) {
  NATIVE_HOOK(0x404770u) REGS; LOADALL;
L_00404770:;
  /* 00404770 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404771 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404773 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 00404775 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 0040477a mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 00404780 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404781 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 00404788 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404789 mov eax, dword ptr [0x7a6b8c] */ { const u32 m_ = (u32)(0x7a6b8cu); eax = (u32)(M32(m_)); }
  /* 0040478e test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404790 jne 0x4047cd */ if (!ZF_) goto L_004047cd;
  /* 00404792 push 0xf0 */ { u32 v_ = 0xf0u; esp -= 4; M32(esp) = v_; }
  /* 00404797 call 0x5fe934 */ esp -= 4; M32(esp) = 0x40479cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x404797u); RETCHK(0x40479cu, 0x404797u); LOADALL;
  /* 0040479c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040479f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 004047a2 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004047a4 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 004047ab je 0x4047c6 */ if (ZF_) goto L_004047c6;
  /* 004047ad push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004047ae call 0x491380 */ esp -= 4; M32(esp) = 0x4047b3u; SAVEALL; F_00491380(c); ABI_CHECK(0x491380u, 0x4047aeu); RETCHK(0x4047b3u, 0x4047aeu); LOADALL;
  /* 004047b3 mov dword ptr [0x7a6b8c], eax */ { const u32 m_ = (u32)(0x7a6b8cu); M32(m_) = (u32)(eax); }
  /* 004047b8 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004047bb mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004047c2 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004047c4 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004047c5 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_004047c6:;
  /* 004047c6 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 004047c8 mov dword ptr [0x7a6b8c], eax */ { const u32 m_ = (u32)(0x7a6b8cu); M32(m_) = (u32)(eax); }
L_004047cd:;
  /* 004047cd mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 004047d0 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 004047d7 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 004047d9 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004047da ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_004047e0(CPU *c) {
  NATIVE_HOOK(0x4047e0u) REGS; LOADALL;
L_004047e0:;
  /* 004047e0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004047e1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004047e3 push -1 */ { u32 v_ = 0xffffffffu; esp -= 4; M32(esp) = v_; }
  /* 004047e5 push 0x61fe3b */ { u32 v_ = 0x61fe3bu; esp -= 4; M32(esp) = v_; }
  /* 004047ea mov eax, dword ptr fs:[0] */ { const u32 m_ = (u32)(0x0u + c->fs_base); eax = (u32)(M32(m_)); }
  /* 004047f0 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004047f1 mov dword ptr fs:[0], esp */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(esp); }
  /* 004047f8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004047f9 mov eax, dword ptr [0x7a6ba4] */ { const u32 m_ = (u32)(0x7a6ba4u); eax = (u32)(M32(m_)); }
  /* 004047fe test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404800 jne 0x40483d */ if (!ZF_) goto L_0040483d;
  /* 00404802 push 0xc8 */ { u32 v_ = 0xc8u; esp -= 4; M32(esp) = v_; }
  /* 00404807 call 0x5fe934 */ esp -= 4; M32(esp) = 0x40480cu; SAVEALL; F_005fe934(c); ABI_CHECK(0x5fe934u, 0x404807u); RETCHK(0x40480cu, 0x404807u); LOADALL;
  /* 0040480c add esp, 4 */ { u32 a_ = esp, b_ = 0x4u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 0040480f mov dword ptr [ebp - 0x10], eax */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); M32(m_) = (u32)(eax); }
  /* 00404812 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404814 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 0040481b je 0x404836 */ if (ZF_) goto L_00404836;
  /* 0040481d push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040481e call 0x49b010 */ esp -= 4; M32(esp) = 0x404823u; SAVEALL; F_0049b010(c); ABI_CHECK(0x49b010u, 0x40481eu); RETCHK(0x404823u, 0x40481eu); LOADALL;
  /* 00404823 mov dword ptr [0x7a6ba4], eax */ { const u32 m_ = (u32)(0x7a6ba4u); M32(m_) = (u32)(eax); }
  /* 00404828 mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 0040482b mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404832 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404834 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404835 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00404836:;
  /* 00404836 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00404838 mov dword ptr [0x7a6ba4], eax */ { const u32 m_ = (u32)(0x7a6ba4u); M32(m_) = (u32)(eax); }
L_0040483d:;
  /* 0040483d mov ecx, dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); ecx = (u32)(M32(m_)); }
  /* 00404840 mov dword ptr fs:[0], ecx */ { const u32 m_ = (u32)(0x0u + c->fs_base); M32(m_) = (u32)(ecx); }
  /* 00404847 mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404849 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040484a ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404850(CPU *c) {
  NATIVE_HOOK(0x404850u) REGS; LOADALL;
L_00404850:;
  /* 00404850 mov dword ptr [eax + 4], 0x642524 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x642524u); }
  /* 00404857 mov dword ptr [eax], 0x642594 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x642594u); }
  /* 0040485d mov dword ptr [eax + 4], 0x64255c */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x64255cu); }
  /* 00404864 mov dword ptr [0x694dd8], 0 */ { const u32 m_ = (u32)(0x694dd8u); M32(m_) = (u32)(0x0u); }
  /* 0040486e ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404870(CPU *c) {
  NATIVE_HOOK(0x404870u) REGS; LOADALL;
L_00404870:;
  /* 00404870 mov dword ptr [eax + 4], 0x64255c */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x64255cu); }
  /* 00404877 mov dword ptr [eax + 4], 0x642524 */ { const u32 m_ = (u32)(eax + 0x4u); M32(m_) = (u32)(0x642524u); }
  /* 0040487e mov dword ptr [eax], 0x6425b0 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x6425b0u); }
  /* 00404884 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404890(CPU *c) {
  NATIVE_HOOK(0x404890u) REGS; LOADALL;
L_00404890:;
  /* 00404890 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404891 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404893 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00404896 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404898 jne 0x4048c7 */ if (!ZF_) goto L_004048c7;
  /* 0040489a mov edx, dword ptr [0x7a67c8] */ { const u32 m_ = (u32)(0x7a67c8u); edx = (u32)(M32(m_)); }
  /* 004048a0 test edx, edx */ { u32 a_ = edx, b_ = edx; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004048a2 je 0x4048e0 */ if (ZF_) goto L_004048e0;
  /* 004048a4 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004048a7 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 004048a8 call 0x408fc0 */ esp -= 4; M32(esp) = 0x4048adu; SAVEALL; F_00408fc0(c); ABI_CHECK(0x408fc0u, 0x4048a8u); RETCHK(0x4048adu, 0x4048a8u); LOADALL;
  /* 004048ad mov esi, dword ptr [0x7a67c8] */ { const u32 m_ = (u32)(0x7a67c8u); esi = (u32)(M32(m_)); }
  /* 004048b3 jmp 0x62de6e */ goto L_0062de6e;
L_004048bd:;
  /* 004048bd call 0x407d10 */ esp -= 4; M32(esp) = 0x4048c2u; SAVEALL; F_00407d10(c); ABI_CHECK(0x407d10u, 0x4048bdu); RETCHK(0x4048c2u, 0x4048bdu); LOADALL;
  /* 004048c2 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 004048c3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004048c4 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_004048c7:;
  /* 004048c7 mov eax, dword ptr [0x7a67c8] */ { const u32 m_ = (u32)(0x7a67c8u); eax = (u32)(M32(m_)); }
  /* 004048cc test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004048ce je 0x4048e0 */ if (ZF_) goto L_004048e0;
  /* 004048d0 call 0x550820 */ esp -= 4; M32(esp) = 0x4048d5u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x4048d0u); RETCHK(0x4048d5u, 0x4048d0u); LOADALL;
  /* 004048d5 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004048d7 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004048d9 push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 004048db mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004048dd call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4048e0u; SAVEALL; call_ind(c, t_); RETCHK(0x4048e0u, 0x4048ddu); LOADALL; }
L_004048e0:;
  /* 004048e0 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004048e1 ret 8 */ c->popped = M32(esp); esp += 12u; SAVEALL; return;
L_0062de6e:;
  /* 0062de6e mov dword ptr [esi + 0x20c], 1 */ { const u32 m_ = (u32)(esi + 0x20cu); M32(m_) = (u32)(0x1u); }
  /* 0062de78 mov dword ptr [0x9c1054], 0 */ { const u32 m_ = (u32)(0x9c1054u); M32(m_) = (u32)(0x0u); }
  /* 0062de82 mov dword ptr [0x9c106c], 0 */ { const u32 m_ = (u32)(0x9c106cu); M32(m_) = (u32)(0x0u); }
  /* 0062de8c jmp 0x4048bd */ goto L_004048bd;
}

void F_004048f0(CPU *c) {
  NATIVE_HOOK(0x4048f0u) REGS; LOADALL;
L_004048f0:;
  /* 004048f0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004048f1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004048f3 call 0x550820 */ esp -= 4; M32(esp) = 0x4048f8u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x4048f3u); RETCHK(0x4048f8u, 0x4048f3u); LOADALL;
  /* 004048f8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 004048fb mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004048fd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004048fe push 9 */ { u32 v_ = 0x9u; esp -= 4; M32(esp) = v_; }
  /* 00404900 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404902 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404905u; SAVEALL; call_ind(c, t_); RETCHK(0x404905u, 0x404902u); LOADALL; }
  /* 00404905 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404906 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404910(CPU *c) {
  NATIVE_HOOK(0x404910u) REGS; LOADALL;
L_00404910:;
  /* 00404910 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404911 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404913 call 0x550820 */ esp -= 4; M32(esp) = 0x404918u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404913u); RETCHK(0x404918u, 0x404913u); LOADALL;
  /* 00404918 mov ecx, dword ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); ecx = (u32)(M32(m_)); }
  /* 0040491b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 0040491d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040491e mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 00404921 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404922 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00404925 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404926 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404928 call dword ptr [edx + 0x28] */ { const u32 m_ = (u32)(edx + 0x28u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x40492bu; SAVEALL; call_ind(c, t_); RETCHK(0x40492bu, 0x404928u); LOADALL; }
  /* 0040492b call dword ptr [0x62e1a4] */ { const u32 m_ = (u32)(0x62e1a4u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404931u; SAVEALL; call_ind(c, t_); RETCHK(0x404931u, 0x40492bu); LOADALL; }
  /* 00404931 mov dword ptr [0x694dd8], eax */ { const u32 m_ = (u32)(0x694dd8u); M32(m_) = (u32)(eax); }
  /* 00404936 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404937 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00404940(CPU *c) {
  NATIVE_HOOK(0x404940u) REGS; LOADALL;
L_00404940:;
  /* 00404940 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404941 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404943 mov eax, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); eax = (u32)(M32(m_)); }
  /* 00404946 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404947 movsx esi, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); esi = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 0040494b push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040494c call 0x404690 */ esp -= 4; M32(esp) = 0x404951u; SAVEALL; F_00404690(c); ABI_CHECK(0x404690u, 0x40494cu); RETCHK(0x404951u, 0x40494cu); LOADALL;
  /* 00404951 mov edx, esi */ { edx = (u32)(esi); }
  /* 00404953 call 0x433510 */ esp -= 4; M32(esp) = 0x404958u; SAVEALL; F_00433510(c); ABI_CHECK(0x433510u, 0x404953u); RETCHK(0x404958u, 0x404953u); LOADALL;
  /* 00404958 pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404959 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 0040495a ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00404960(CPU *c) {
  NATIVE_HOOK(0x404960u) REGS; LOADALL;
L_00404960:;
  /* 00404960 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404961 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404963 movsx eax, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 00404967 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040496a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040496b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040496c call 0x404700 */ esp -= 4; M32(esp) = 0x404971u; SAVEALL; F_00404700(c); ABI_CHECK(0x404700u, 0x40496cu); RETCHK(0x404971u, 0x40496cu); LOADALL;
  /* 00404971 call 0x483480 */ esp -= 4; M32(esp) = 0x404976u; SAVEALL; F_00483480(c); ABI_CHECK(0x483480u, 0x404971u); RETCHK(0x404976u, 0x404971u); LOADALL;
  /* 00404976 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404977 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_00404980(CPU *c) {
  NATIVE_HOOK(0x404980u) REGS; LOADALL;
L_00404980:;
  /* 00404980 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404981 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404983 movsx eax, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 00404987 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 0040498a push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 0040498b push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 0040498c call 0x404770 */ esp -= 4; M32(esp) = 0x404991u; SAVEALL; F_00404770(c); ABI_CHECK(0x404770u, 0x40498cu); RETCHK(0x404991u, 0x40498cu); LOADALL;
  /* 00404991 call 0x491650 */ esp -= 4; M32(esp) = 0x404996u; SAVEALL; F_00491650(c); ABI_CHECK(0x491650u, 0x404991u); RETCHK(0x404996u, 0x404991u); LOADALL;
  /* 00404996 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404997 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004049a0(CPU *c) {
  NATIVE_HOOK(0x4049a0u) REGS; LOADALL;
L_004049a0:;
  /* 004049a0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004049a1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004049a3 movsx eax, word ptr [ebp + 0x10] */ { const u32 m_ = (u32)(ebp + 0x10u); eax = (u32)((u32)sxt(M16(m_), 2) & 0xffffffffu); }
  /* 004049a7 mov ecx, dword ptr [ebp + 0xc] */ { const u32 m_ = (u32)(ebp + 0xcu); ecx = (u32)(M32(m_)); }
  /* 004049aa push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 004049ab push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004049ac call 0x4047e0 */ esp -= 4; M32(esp) = 0x4049b1u; SAVEALL; F_004047e0(c); ABI_CHECK(0x4047e0u, 0x4049acu); RETCHK(0x4049b1u, 0x4049acu); LOADALL;
  /* 004049b1 call 0x49b230 */ esp -= 4; M32(esp) = 0x4049b6u; SAVEALL; F_0049b230(c); ABI_CHECK(0x49b230u, 0x4049b1u); RETCHK(0x4049b6u, 0x4049b1u); LOADALL;
  /* 004049b6 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004049b7 ret 0xc */ c->popped = M32(esp); esp += 16u; SAVEALL; return;
}

void F_004049c0(CPU *c) {
  NATIVE_HOOK(0x4049c0u) REGS; LOADALL;
L_004049c0:;
  /* 004049c0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 004049c1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 004049c3 mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 004049c6 test eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 004049c8 jne 0x4049de */ if (!ZF_) goto L_004049de;
  /* 004049ca call 0x550820 */ esp -= 4; M32(esp) = 0x4049cfu; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x4049cau); RETCHK(0x4049cfu, 0x4049cau); LOADALL;
  /* 004049cf mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004049d1 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 004049d3 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004049d5 push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 004049d7 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4049dau; SAVEALL; call_ind(c, t_); RETCHK(0x4049dau, 0x4049d7u); LOADALL; }
  /* 004049da pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004049db ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
L_004049de:;
  /* 004049de mov dword ptr [ebp + 8], eax */ { const u32 m_ = (u32)(ebp + 0x8u); M32(m_) = (u32)(eax); }
  /* 004049e1 call 0x550820 */ esp -= 4; M32(esp) = 0x4049e6u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x4049e1u); RETCHK(0x4049e6u, 0x4049e1u); LOADALL;
  /* 004049e6 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 004049e8 lea ecx, [ebp + 8] */ ecx = (u32)((u32)(ebp + 0x8u));
  /* 004049eb push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 004049ec mov ecx, eax */ { ecx = (u32)(eax); }
  /* 004049ee push 0xb */ { u32 v_ = 0xbu; esp -= 4; M32(esp) = v_; }
  /* 004049f0 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x4049f3u; SAVEALL; call_ind(c, t_); RETCHK(0x4049f3u, 0x4049f0u); LOADALL; }
  /* 004049f3 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 004049f4 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404a00(CPU *c) {
  NATIVE_HOOK(0x404a00u) REGS; LOADALL;
L_00404a00:;
  /* 00404a00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404a01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404a03 call 0x550820 */ esp -= 4; M32(esp) = 0x404a08u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404a03u); RETCHK(0x404a08u, 0x404a03u); LOADALL;
  /* 00404a08 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00404a0b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404a0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404a0e push 2 */ { u32 v_ = 0x2u; esp -= 4; M32(esp) = v_; }
  /* 00404a10 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404a12 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404a15u; SAVEALL; call_ind(c, t_); RETCHK(0x404a15u, 0x404a12u); LOADALL; }
  /* 00404a15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404a16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404a20(CPU *c) {
  NATIVE_HOOK(0x404a20u) REGS; LOADALL;
L_00404a20:;
  /* 00404a20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404a21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404a23 call 0x550820 */ esp -= 4; M32(esp) = 0x404a28u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404a23u); RETCHK(0x404a28u, 0x404a23u); LOADALL;
  /* 00404a28 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00404a2b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404a2d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404a2e push 3 */ { u32 v_ = 0x3u; esp -= 4; M32(esp) = v_; }
  /* 00404a30 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404a32 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404a35u; SAVEALL; call_ind(c, t_); RETCHK(0x404a35u, 0x404a32u); LOADALL; }
  /* 00404a35 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404a36 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404a40(CPU *c) {
  NATIVE_HOOK(0x404a40u) REGS; LOADALL;
L_00404a40:;
  /* 00404a40 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404a41 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404a43 call 0x550820 */ esp -= 4; M32(esp) = 0x404a48u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404a43u); RETCHK(0x404a48u, 0x404a43u); LOADALL;
  /* 00404a48 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00404a4b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404a4d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404a4e push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00404a50 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404a52 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404a55u; SAVEALL; call_ind(c, t_); RETCHK(0x404a55u, 0x404a52u); LOADALL; }
  /* 00404a55 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404a56 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404a60(CPU *c) {
  NATIVE_HOOK(0x404a60u) REGS; LOADALL;
L_00404a60:;
  /* 00404a60 call 0x550820 */ esp -= 4; M32(esp) = 0x404a65u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404a60u); RETCHK(0x404a65u, 0x404a60u); LOADALL;
  /* 00404a65 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404a67 push 0 */ { u32 v_ = 0x0u; esp -= 4; M32(esp) = v_; }
  /* 00404a69 push 0xa */ { u32 v_ = 0xau; esp -= 4; M32(esp) = v_; }
  /* 00404a6b mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404a6d call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404a70u; SAVEALL; call_ind(c, t_); RETCHK(0x404a70u, 0x404a6du); LOADALL; }
  /* 00404a70 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404a80(CPU *c) {
  NATIVE_HOOK(0x404a80u) REGS; LOADALL;
L_00404a80:;
  /* 00404a80 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404a81 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404a83 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404a84 mov esi, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); esi = (u32)(M32(m_)); }
  /* 00404a87 test esi, esi */ { u32 a_ = esi, b_ = esi; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 4); }
  /* 00404a89 je 0x404aad */ if (ZF_) goto L_00404aad;
  /* 00404a8b call 0x550820 */ esp -= 4; M32(esp) = 0x404a90u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404a8bu); RETCHK(0x404a90u, 0x404a8bu); LOADALL;
  /* 00404a90 cmp dword ptr [eax + 0xd18], 5 */ { const u32 m_ = (u32)(eax + 0xd18u); u32 a_ = M32(m_), b_ = 0x5u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); }
  /* 00404a97 je 0x404a9e */ if (ZF_) goto L_00404a9e;
  /* 00404a99 call 0x550820 */ esp -= 4; M32(esp) = 0x404a9eu; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404a99u); RETCHK(0x404a9eu, 0x404a99u); LOADALL;
L_00404a9e:;
  /* 00404a9e call 0x550820 */ esp -= 4; M32(esp) = 0x404aa3u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404a9eu); RETCHK(0x404aa3u, 0x404a9eu); LOADALL;
  /* 00404aa3 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404aa5 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404aa6 push 7 */ { u32 v_ = 0x7u; esp -= 4; M32(esp) = v_; }
  /* 00404aa8 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404aaa call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404aadu; SAVEALL; call_ind(c, t_); RETCHK(0x404aadu, 0x404aaau); LOADALL; }
L_00404aad:;
  /* 00404aad pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404aae pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404aaf ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404ac0(CPU *c) {
  NATIVE_HOOK(0x404ac0u) REGS; LOADALL;
L_00404ac0:;
  /* 00404ac0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404ac1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404ac3 call 0x550820 */ esp -= 4; M32(esp) = 0x404ac8u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404ac3u); RETCHK(0x404ac8u, 0x404ac3u); LOADALL;
  /* 00404ac8 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00404acb mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404acd push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404ace push 8 */ { u32 v_ = 0x8u; esp -= 4; M32(esp) = v_; }
  /* 00404ad0 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404ad2 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404ad5u; SAVEALL; call_ind(c, t_); RETCHK(0x404ad5u, 0x404ad2u); LOADALL; }
  /* 00404ad5 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404ad6 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404ae0(CPU *c) {
  NATIVE_HOOK(0x404ae0u) REGS; LOADALL;
L_00404ae0:;
  /* 00404ae0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404ae1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404ae3 call 0x550820 */ esp -= 4; M32(esp) = 0x404ae8u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404ae3u); RETCHK(0x404ae8u, 0x404ae3u); LOADALL;
  /* 00404ae8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404aea mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404aec pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404aed jmp dword ptr [edx + 0x2c] */ { const u32 m_ = (u32)(edx + 0x2cu); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00404af0(CPU *c) {
  NATIVE_HOOK(0x404af0u) REGS; LOADALL;
L_00404af0:;
  /* 00404af0 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404af1 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404af3 call 0x550820 */ esp -= 4; M32(esp) = 0x404af8u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404af3u); RETCHK(0x404af8u, 0x404af3u); LOADALL;
  /* 00404af8 mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404afa mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404afc pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404afd jmp dword ptr [edx + 0x30] */ { const u32 m_ = (u32)(edx + 0x30u); u32 t_ = M32(m_); SAVEALL; call_ind(c, t_); return; }
}

void F_00404b00(CPU *c) {
  NATIVE_HOOK(0x404b00u) REGS; LOADALL;
L_00404b00:;
  /* 00404b00 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404b01 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404b03 call 0x550820 */ esp -= 4; M32(esp) = 0x404b08u; SAVEALL; F_00550820(c); ABI_CHECK(0x550820u, 0x404b03u); RETCHK(0x404b08u, 0x404b03u); LOADALL;
  /* 00404b08 mov ecx, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); ecx = (u32)(M32(m_)); }
  /* 00404b0b mov edx, dword ptr [eax] */ { const u32 m_ = (u32)(eax); edx = (u32)(M32(m_)); }
  /* 00404b0d push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404b0e push 6 */ { u32 v_ = 0x6u; esp -= 4; M32(esp) = v_; }
  /* 00404b10 mov ecx, eax */ { ecx = (u32)(eax); }
  /* 00404b12 call dword ptr [edx + 0x24] */ { const u32 m_ = (u32)(edx + 0x24u); u32 t_ = M32(m_); esp -= 4; M32(esp) = 0x404b15u; SAVEALL; call_ind(c, t_); RETCHK(0x404b15u, 0x404b12u); LOADALL; }
  /* 00404b15 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404b16 ret 4 */ c->popped = M32(esp); esp += 8u; SAVEALL; return;
}

void F_00404b20(CPU *c) {
  NATIVE_HOOK(0x404b20u) REGS; LOADALL;
L_00404b20:;
  /* 00404b20 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404b21 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404b23 mov eax, dword ptr [ebp + 0x18] */ { const u32 m_ = (u32)(ebp + 0x18u); eax = (u32)(M32(m_)); }
  /* 00404b26 mov dword ptr [eax], 1 */ { const u32 m_ = (u32)(eax); M32(m_) = (u32)(0x1u); }
  /* 00404b2c xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00404b2e pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404b2f ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}

void F_00404b30(CPU *c) {
  NATIVE_HOOK(0x404b30u) REGS; LOADALL;
L_00404b30:;
  /* 00404b30 push ebp */ { u32 v_ = ebp; esp -= 4; M32(esp) = v_; }
  /* 00404b31 mov ebp, esp */ { ebp = (u32)(esp); }
  /* 00404b33 sub esp, 0x20 */ { u32 a_ = esp, b_ = 0x20u; u32 r_ = (a_ - b_) & 0xffffffffu; SETFC(OP_SUB, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00404b36 fld dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00404b39 mov dword ptr [ebp - 4], 0 */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); M32(m_) = (u32)(0x0u); }
  /* 00404b40 fld dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); FPUSH((double)MF32(m_)); }
  /* 00404b42 fld dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00404b45 fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00404b47 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00404b49 fld st(3) */ { double v_ = ST(3); FPUSH(v_); }
  /* 00404b4b fmul st(4) */ ST(0) = FR(ST(0) * ST(4));
  /* 00404b4d faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00404b4f fld st(1) */ { double v_ = ST(1); FPUSH(v_); }
  /* 00404b51 fmul st(2) */ ST(0) = FR(ST(0) * ST(2));
  /* 00404b53 faddp st(1) */ { double s0_ = ST(0); ST(1) = FR(ST(1) + s0_); FPOP(); }
  /* 00404b55 fcomp dword ptr [0x656dc4] */ { const u32 m_ = (u32)(0x656dc4u); c->fsw = fcom_sw(c->fsw, ST(0), (double)MF32(m_)); FPOP(); }
  /* 00404b5b fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00404b5d fnstsw ax */ eax = (eax & 0xffff0000u) | (FSW_ & 0xffffu);
  /* 00404b5f fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00404b61 test ah, 5 */ { u32 a_ = ((eax >> 8) & 0xffu), b_ = 0x5u; u32 r_ = a_ & b_; SETFC(OP_LOGIC, 0, 0, r_, 1); }
  /* 00404b64 fstp st(0) */ ST(0) = ST(0); FPOP();
  /* 00404b66 jp 0x404b6e */ if (PF_) goto L_00404b6e;
  /* 00404b68 xor eax, eax */ { u32 a_ = eax, b_ = eax; u32 r_ = a_ ^ b_; SETFC(OP_LOGIC, 0, 0, r_, 4); eax = (u32)(r_); }
  /* 00404b6a mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404b6c pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404b6d ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
L_00404b6e:;
  /* 00404b6e fld dword ptr [edx] */ { const u32 m_ = (u32)(edx); FPUSH((double)MF32(m_)); }
  /* 00404b70 push esi */ { u32 v_ = esi; esp -= 4; M32(esp) = v_; }
  /* 00404b71 fadd dword ptr [ecx] */ { const u32 m_ = (u32)(ecx); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00404b73 mov eax, edx */ { eax = (u32)(edx); }
  /* 00404b75 mov esi, dword ptr [eax] */ { const u32 m_ = (u32)(eax); esi = (u32)(M32(m_)); }
  /* 00404b77 mov dword ptr [ebp - 0x20], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe0u); M32(m_) = (u32)(esi); }
  /* 00404b7a mov esi, dword ptr [eax + 4] */ { const u32 m_ = (u32)(eax + 0x4u); esi = (u32)(M32(m_)); }
  /* 00404b7d mov eax, dword ptr [eax + 8] */ { const u32 m_ = (u32)(eax + 0x8u); eax = (u32)(M32(m_)); }
  /* 00404b80 fstp dword ptr [ebp - 0x14] */ { const u32 m_ = (u32)(ebp + 0xffffffecu); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00404b83 fld dword ptr [edx + 4] */ { const u32 m_ = (u32)(edx + 0x4u); FPUSH((double)MF32(m_)); }
  /* 00404b86 mov dword ptr [ebp - 0x18], eax */ { const u32 m_ = (u32)(ebp + 0xffffffe8u); M32(m_) = (u32)(eax); }
  /* 00404b89 fadd dword ptr [ecx + 4] */ { const u32 m_ = (u32)(ecx + 0x4u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00404b8c mov eax, dword ptr [ebp + 8] */ { const u32 m_ = (u32)(ebp + 0x8u); eax = (u32)(M32(m_)); }
  /* 00404b8f mov dword ptr [ebp - 8], 1 */ { const u32 m_ = (u32)(ebp + 0xfffffff8u); M32(m_) = (u32)(0x1u); }
  /* 00404b96 mov dword ptr [ebp - 0x1c], esi */ { const u32 m_ = (u32)(ebp + 0xffffffe4u); M32(m_) = (u32)(esi); }
  /* 00404b99 fstp dword ptr [ebp - 0x10] */ { const u32 m_ = (u32)(ebp + 0xfffffff0u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00404b9c fld dword ptr [edx + 8] */ { const u32 m_ = (u32)(edx + 0x8u); FPUSH((double)MF32(m_)); }
  /* 00404b9f lea edx, [ebp - 0x20] */ edx = (u32)((u32)(ebp + 0xffffffe0u));
  /* 00404ba2 fadd dword ptr [ecx + 8] */ { const u32 m_ = (u32)(ecx + 0x8u); ST(0) = FR(ST(0) + (double)MF32(m_)); }
  /* 00404ba5 lea ecx, [ebp - 4] */ ecx = (u32)((u32)(ebp + 0xfffffffcu));
  /* 00404ba8 push ecx */ { u32 v_ = ecx; esp -= 4; M32(esp) = v_; }
  /* 00404ba9 push 0x404b20 */ { u32 v_ = 0x404b20u; esp -= 4; M32(esp) = v_; }
  /* 00404bae push edx */ { u32 v_ = edx; esp -= 4; M32(esp) = v_; }
  /* 00404baf fstp dword ptr [ebp - 0xc] */ { const u32 m_ = (u32)(ebp + 0xfffffff4u); MF32(m_) = (float)ST(0); FPOP(); }
  /* 00404bb2 push eax */ { u32 v_ = eax; esp -= 4; M32(esp) = v_; }
  /* 00404bb3 call 0x5de420 */ esp -= 4; M32(esp) = 0x404bb8u; SAVEALL; F_005de420(c); ABI_CHECK(0x5de420u, 0x404bb3u); RETCHK(0x404bb8u, 0x404bb3u); LOADALL;
  /* 00404bb8 mov eax, dword ptr [ebp - 4] */ { const u32 m_ = (u32)(ebp + 0xfffffffcu); eax = (u32)(M32(m_)); }
  /* 00404bbb add esp, 0x10 */ { u32 a_ = esp, b_ = 0x10u; u32 r_ = (a_ + b_) & 0xffffffffu; SETFC(OP_ADD, a_, b_, r_, 4); esp = (u32)(r_); }
  /* 00404bbe pop esi */ { u32 v_ = M32(esp); esp += 4; esi = (u32)(v_); }
  /* 00404bbf mov esp, ebp */ { esp = (u32)(ebp); }
  /* 00404bc1 pop ebp */ { u32 v_ = M32(esp); esp += 4; ebp = (u32)(v_); }
  /* 00404bc2 ret */ c->popped = M32(esp); esp += 4u; SAVEALL; return;
}
